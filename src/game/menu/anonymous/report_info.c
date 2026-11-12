#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(void);
extern __int64 (*GameData_2088ae0[])();
extern __int64 GameData_2260e80;
__int64 ReportInfo_Destructor(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e5e00_alt1(_QWORD) __asm__("GameRoutine_15e5e00");
__int64 GameRoutine_1842ae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 GameRoutine_82eaa0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _QWORD GameData_2021f88[10];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char* GameData_2066090;
__int64 ReportInfo_DeletingDestructor_16a73c0(__int64 a1);
__int64 ReportInfo_Destructor_16a7490(_QWORD* a1);
__int64 ReportInfo_DeletingDestructor_16a74c0(_QWORD* a1);
_QWORD* ReportInfo_16a7560(_QWORD* a1);
__int64 ReportInfo_16a7590(__int64 a1);
__int64 game_menu_anonymous_ReportInfo_SetClearState_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64* GameVariable_82eaa0(unsigned __int8);
__int64 GameRoutine_1842ae0_alt1(__int64, unsigned __int8,
                                 int) __asm__("GameRoutine_1842ae0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__attribute__((swiftcall)) void game_1604c70(PSEUDO_X8, int, unsigned int,
                                             unsigned int);
__attribute__((swiftcall)) void game_1605270(PSEUDO_X8);
__attribute__((swiftcall)) void game_1605540(PSEUDO_X8, __int64, int);
__int64* GameVariable_82e4d0(int);
__int64 Alignment_56b600(__int64 result);
__int64 GameConst_7f8610(__int64);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_185a020(unsigned __int8);
__int64 GameRoutine_60a020(__int64, const char*);
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, const char*, float,
                                      float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*GameData_2088b10[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char* GameData_2089100[3];
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
void* GameRoutine_714ee0();
void GameHr_1593850(__int64*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1592690(__int64*, _BYTE*, _BYTE*, char*);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_menu_anonymous_ReportInfo_SetClearState(
    __int64 a1, __int64* a2, unsigned __int8 a3, int a4, char a5, __int64 a6,
    unsigned __int8 a7, __int16* a8, int a9, unsigned int a10, char a11);

__int64 ReportInfo_Destructor(__int64 a1)
{
  *(_QWORD*)(a1 + 208) = GameData_2088ae0;
  if (GameData_2260e80 == a1) {
    GameData_2260e80 = 0;
  }
  return GameRoutine_15e5e00();
}

__int64 ReportInfo_DeletingDestructor_16a73c0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_2088ae0;
  if (GameData_2260e80 == a1) {
    GameData_2260e80 = 0;
  }
  GameRoutine_15e5e00_alt1(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 ReportInfo_Destructor_16a7490(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = GameData_2088ae0;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == v1) {
    GameData_2260e80 = 0;
  }
  return GameRoutine_15e5e00_alt1(v1);
}

__int64 ReportInfo_DeletingDestructor_16a74c0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_2088ae0;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == a1 - 26) {
    GameData_2260e80 = 0;
  }
  GameRoutine_15e5e00_alt1(a1 - 26);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

_QWORD* ReportInfo_16a7560(_QWORD* a1)
{
  _QWORD* result;

  *a1 = GameData_2088ae0;
  result = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == result) {
    GameData_2260e80 = 0;
  }
  return result;
}

__int64 ReportInfo_16a7590(__int64 a1)
{
  __int64 v1;

  if (GameData_2260e80 == a1 - 208) {
    GameData_2260e80 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1);
}

__int64 game_menu_anonymous_ReportInfo_SetClearState(
    __int64 a1, __int64* a2, unsigned __int8 a3, int a4, char a5, __int64 a6,
    unsigned __int8 a7, __int16* a8, int a9, unsigned int a10, char a11)
{
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  char v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  void* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  const char* v54;
  const char* v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  const char* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  int v71;
  int v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64* v78;
  __int64 v79;
  float v80;
  float v81;
  __int64 v82;
  unsigned __int64 v83;
  float v84;
  float v87;
  struct {
    __int64 v88[4];
    __int64* v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
  } v88_;
  _QWORD v103[3];

  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  v11 = *a8;
  v12 = a8[1];
  v13 = a8[2];
  v19 = a7;
  LOBYTE(v88_.v88[0]) = a3;
  LOBYTE(v103[0]) = a4;
  LOBYTE(v87) = a5;
  GameRoutine_1592690(a2, v88_.v88, v103, (char*)&v87),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v19 == 8) {
    game_1605270((void*)(v88_.v88)),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  else {
    game_1604c70((void*)(v88_.v88), v11, v12, v13),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((v88_.v88[0] & 1) != 0) {
    v20 = (char*)v88_.v88[2];
  }
  else {
    v20 = (char*)v88_.v88 + 1;
  }
  if (v20 != nullptr) {
    v21 = ui_LayoutAccessor_FindTextBox(a2, "T_Date"),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v21 != 0) {
      GameRoutine_156c5d0(v21, (__int64)v20, 0),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v88_.v88[0] & 1) != 0 && v88_.v88[2] != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v88_.v88[2]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v23 = ui_LayoutAccessor_FindTextBox(a2, "T_Date"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v23 != 0) {
    v24 = v23;
    v25 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a2, "T_Date"),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v25 != nullptr) {
      GameRoutine_190a0c0((float*)v88_.v88, (__int64)v103, &v87, v25, v25[27]),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      v26 = v103[0];
    }
    else {
      v26 = 0;
    }
    v27 = *(_BYTE*)(v24 + 88);
    *(_QWORD*)(v24 + 80) = v26;
    *(_BYTE*)(v24 + 88) = v27 | 0x10;
  }
  GameHr_1593850(a2, a6),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a7 == 8) {
    v88_.v90 = -1;
    v88_.v91 = -1;
    v88_.v92 = -1;
    v88_.v93 = -1;
    v28 = *msg_MessageManager_instance__ptr[0];
    v88_.v94 = -1;
    v88_.v95 = -1;
    v88_.v96 = -1;
    v88_.v97 = -1;
    v88_.v98 = -1;
    v88_.v99 = -1;
    v88_.v100 = -1;
    v88_.v88[0] = (__int64)(GameData_212e348 + 2);
    v88_.v88[1] = 0xFFFF0001FFFF0000LL;
    v88_.v88[2] = 0xFFFF0004FFFF0002LL;
    v88_.v88[3] = 0xFFFF0006FFFF0005LL;
    v88_.v101 = -1;
    v88_.v102 = 8;
    v88_.v89 = (__int64*)0xFFFF0008FFFF0007LL;
    v29 = GameRoutine_a4dbe0(v28, "MID_EventLocation_Obelisk", 0),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v29 != nullptr) {
      v30 = (__int64)v29;
      v31 = ui_LayoutAccessor_FindTextBox(a2, "T_Spot"),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v31 != 0) {
        GameRoutine_156c5d0(v31, v30, 0),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, "T_Spot", 1),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    LOWORD(v88_.v88[0]) = 0;
    v32 = "MID_Save_State_Timeline";
    goto LABEL_25;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)a2, "T_Spot", a7 != 11),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  LOWORD(v88_.v88[0]) = 0;
  if (a7 > 5u) {
    if (a7 == 6) {
      strcpy((char*)v88_.v88, ",MID_Save_State_Dungeon");
      goto LABEL_26;
    }
    if (a7 == 11) {
      if (a4 == 3) {
        v32 = "MID_Save_State_Chapter_Part3";
      }
      else {
        v32 = "MID_Save_State_Chapter";
      }
    LABEL_25:
      GameRoutine_60a020((__int64)v88_.v88, v32),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    LABEL_26:
      v33 = a1;
      goto LABEL_27;
    }
    v33 = a1;
    if (a7 == 16) {
      v36 = "MID_Save_State_MakeComplete";
    LABEL_115:
      GameRoutine_60a020((__int64)v88_.v88, v36),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  else {
    if (a7 == 2) {
      v65 = "MID_Save_State_Battle";
      BYTE6(v88_.v88[2]) = 0;
      if ((a11 & 1) != 0) {
        v65 = "MID_Save_State_Sortie";
      }
      LOBYTE(v88_.v88[0]) = 42;
      v66 = *(_QWORD*)v65;
      v67 = *((_QWORD*)v65 + 1);
      v68 = *(_QWORD*)(v65 + 13);
      *(__int64*)((char*)v88_.v88 + 1) = v66;
      *(__int64*)((char*)&v88_.v88[1] + 1) = v67;
      *(__int64*)((char*)&v88_.v88[1] + 6) = v68;
      goto LABEL_26;
    }
    if (a7 == 4) {
      strcpy((char*)v88_.v88, "&MID_Save_State_Gmap");
      goto LABEL_26;
    }
    v33 = a1;
    if (a7 == 5) {
      if (a4 == 2) {
        v36 = "MID_Save_State_Hub_Part2";
      }
      else {
        v36 = "MID_Save_State_Hub";
      }
      goto LABEL_115;
    }
  }
LABEL_27:
  if ((v88_.v88[0] & 1) != 0) {
    v34 = v88_.v88[1];
  }
  else {
    v34 = LOBYTE(v88_.v88[0]) >> 1;
  }
  if (v34 != 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, "N_Situation", 1),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v88_.v88[0] & 1) != 0) {
      v35 = (const char*)v88_.v88[2];
    }
    else {
      v35 = (char*)v88_.v88 + 1;
    }
    LayoutAccessor_1562060(a2, "T_Situation", v35),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v88_.v88[0] & 1) == 0) {
      goto LABEL_48;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, "N_Situation", 0),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v88_.v88[0] & 1) == 0) {
      goto LABEL_48;
    }
  }
  if (v88_.v88[2] != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v88_.v88[2]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_48:
  v38 = ui_LayoutAccessor_FindAlignment(a2, "A_Situation"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v38 != 0) {
    Alignment_56b600(v38),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (*(_QWORD*)(v33 + 168) != 0) {
    v39 = *(__int64**)(v33 + 168);
  }
  else {
    v39 = ui_LayoutAccessor_empty__ptr[0];
  }
  v40 = ui_LayoutAccessor_FindPane_alt2(v39, "Face"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v40 != 0) {
    v41 = __dynamic_cast(v40, GameData_212d670[0], GameData_212d678[0], 0),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  else {
    v41 = 0;
  }
  v42 = GameRoutine_185a020(a3),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  GameHr_1840a20(v41, 0, v42, 6u, 1),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  v43 = GameRoutine_714ee0(),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v43 != nullptr) {
    v44 = (__int64)v43;
    v45 = ui_LayoutAccessor_FindTextBox(a2, "T_Name"),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v45 != 0) {
      GameRoutine_156c5d0(v45, v44, 0),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  game_1605540((void*)(v88_.v88), (unsigned __int16)a9, BYTE2(a9)),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v88_.v88[0] & 1) != 0) {
    v46 = (char*)v88_.v88[2];
  }
  else {
    v46 = (char*)v88_.v88 + 1;
  }
  if (v46 != nullptr) {
    v47 = ui_LayoutAccessor_FindTextBox(a2, "T_Time"),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v47 != 0) {
      GameRoutine_156c5d0(v47, (__int64)v46, 0),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v88_.v88[0] & 1) != 0 && v88_.v88[2] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v88_.v88[2]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  game_1604c70((void*)(v88_.v88), (unsigned __int16)a10, BYTE2(a10),
               HIBYTE(a10)),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v88_.v88[0] & 1) != 0) {
    v49 = (char*)v88_.v88[2];
  }
  else {
    v49 = (char*)v88_.v88 + 1;
  }
  if (v49 != nullptr) {
    v50 = ui_LayoutAccessor_FindTextBox(a2, "T_PlayDate"),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v50 != 0) {
      GameRoutine_156c5d0(v50, (__int64)v49, 0),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v88_.v88[0] & 1) != 0 && v88_.v88[2] != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v88_.v88[2]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v52 = ui_LayoutAccessor_FindAlignment(a2, "A_Player"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v52 != 0) {
    Alignment_56b600(v52),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (game_GameModeData_instance_ != 0) {
    v53 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
    if (v53 > 2) {
      v54 = nullptr;
    }
    else {
      v54 = GameData_2089100[v53];
    }
  }
  else {
    v54 = "MID_Difficulty_Normal";
  }
  LayoutAccessor_1562060(a2, "T_Difficulty", v54),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 12) != 1
           ? (v55 = nullptr)
           : (v55 = "MID_Mode_Classic"),
       *(_BYTE*)(game_GameModeData_instance_ + 12) == 0)) {
    v55 = "MID_Mode_Casual";
  }
  LayoutAccessor_1562060(a2, "T_Mode", v55),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  v56 = ui_LayoutAccessor_FindAlignment(a2, "A_Difficulty"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v56 != 0) {
    Alignment_56b600(v56),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  LODWORD(v103[0]) = 0;
  v88_.v88[2] = (__int64)a2;
  v88_.v88[0] = (__int64)GameData_2088b10;
  v88_.v88[1] = (__int64)v103;
  v88_.v89 = v88_.v88;
  GameConst_7f8610((__int64)v88_.v88),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v88_.v89 == v88_.v88) {
    v57 = 32;
    goto LABEL_100;
  }
  if (v88_.v89 != nullptr) {
    v57 = 40;
  LABEL_100:
    (*(void (**)(__int64))(*v88_.v89 + v57))((__int64)v88_.v89),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v58 = GameVariable_82e4d0(3),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v59 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v58),
    v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v59 != 0 && *(_DWORD*)(v59 + 32) != 0) {
      v60 = game_util_Format_alt1("L_Icon%02d", LODWORD(v103[0])),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      LayoutAccessor_1560070((void*)(v88_.v88), a2, v60),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v88_.v88[1] != 0) {
        v61 = std___1___shared_weak_count_lock_alt1(v88_.v88[1]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
        v62 = (__int64*)v88_.v88[0];
        if (v88_.v88[1] != 0) {
          std___1___shared_weak_count___release_weak_alt1(v88_.v88[1]),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (v61 != 0 && v62 != nullptr) {
          v63 = ui_LayoutAccessor_FindPane_alt2(v62, "Img"),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v63 != 0) {
            v64 = __dynamic_cast(v63, GameData_212d670[0], GameData_212d678[0],
                                 0),
            v80 =
                COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
          }
          else {
            v64 = 0;
          }
          v69 = ui_Manager_instance_;
          v70 = game_util_Format_alt1("SaveIcon_%s_Clear", "Ism"),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
          Manager_136a920(v69 + 1264, v64, 0, 7u, v70),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          ++LODWORD(v103[0]);
        }
        else if (v61 == 0) {
          goto LABEL_130;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v61),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
LABEL_130:
  v71 = v103[0];
  if (SLODWORD(v103[0]) <= 8) {
    do {
      v73 = game_util_Format_alt1("L_Icon%02d", v71),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      LayoutAccessor_1560070((void*)(v88_.v88), a2, v73),
          v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v88_.v88[1] != 0) {
        v74 = std___1___shared_weak_count_lock_alt1(v88_.v88[1]),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
        v75 = v88_.v88[0];
        if (v88_.v88[1] != 0) {
          std___1___shared_weak_count___release_weak_alt1(v88_.v88[1]),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (v74 != 0 && v75 != 0) {
          LayoutAccessor_155e830_alt1(v75, 0),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        LABEL_140:
          if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
                v80 = COERCE_AS(__typeof__(v80),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v74),
                v80 = COERCE_AS(__typeof__(v80),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
          goto LABEL_132;
        }
        if (v74 != 0) {
          goto LABEL_140;
        }
      }
    LABEL_132:
      v72 = v103[0];
      v71 = ++LODWORD(v103[0]);
    } while (v72 < 8);
  }
  v76 = ui_LayoutAccessor_FindAlignment(a2, "A_Icon"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v76 != 0) {
    Alignment_56b600(v76),
        v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v77 = "Clear";
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 13) == 2) {
    v77 = "Clear_Lunatic";
  }
  v78 = GameVariable_82e4d0(3),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  if (game_GameModeData_instance_ == 0 ||
      (v79 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v78)) == 0 ||
      *(_DWORD*)(v79 + 32) == 0) {
    v77 = "Default";
  }
  LayoutAccessor_1562cf0_alt2((__int64)a2, (unsigned int*)v77),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  ui_LayoutAccessor_GetPaneSize(a2, "Frm"),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  v81 = v80;
  v82 = ui_LayoutAccessor_FindPane_alt2(a2, "N_Info"),
  v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  LOBYTE(v87) = 0;
  v88_.v88[0] = 0xFF7FFFFF7F7FFFFFLL;
  v103[0] = 0x7F7FFFFFFF7FFFFFLL;
  if (v82 != 0 &&
      (v83 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v82 + 128),
                                   *(float32x4_t*)(v82 + 128)))
                 .n128_u64[0],
       GameRoutine_156bee0(
           v82, (__int64)v88_.v88, (__int64)v103, (__int64)&v87, 0,
           sqrtf((float)(*(float*)&v83 +
                         (float)(COERCE_FLOAT(*(_OWORD*)(v82 + 112)) *
                                 COERCE_FLOAT(*(_OWORD*)(v82 + 112)))) +
                 (float)(COERCE_FLOAT(*(_OWORD*)(v82 + 144)) *
                         COERCE_FLOAT(*(_OWORD*)(v82 + 144)))) /
               *(float*)(v82 + 72),
           sqrtf(
               (float)(*((float*)&v83 + 1) +
                       (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v82 + 112))) *
                               COERCE_FLOAT(HIDWORD(*(_QWORD*)(v82 + 112))))) +
               (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v82 + 144))) *
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(v82 + 144))))) /
               *(float*)(v82 + 76)),
       LOBYTE(v87) == 1)) {
    v84 = vabds_f32(*(float*)v103, *(float*)v88_.v88) + 0x1.9000000000000p+7f;
  }
  else {
    v84 = 0x1.9000000000000p+7f;
  }
  ui_LayoutAccessor_SetPaneSize((__int64)a2, "Frm", v84, v81),
      v80 = COERCE_AS(__typeof__(v80), PSEUDO_REGISTER(float, "s1", "=w"));
  return ui_LayoutAccessor_SetPaneSize((__int64)a2, "A_Info", v84, v81);
}

__int64

game_menu_anonymous_ReportInfo_SetClearState_lambda0_Invoke(__int64 a1,
                                                            unsigned __int8* a2)
{
  __int64* v2;
  __int64 v3;
  char* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  _DWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  char* v22;
  char* v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  v2 = *(__int64**)(a1 + 16);
  v3 = *a2;
  v5 = game_util_Format_alt1("L_Icon%02d", **(_DWORD**)(a1 + 8));
  LayoutAccessor_1560070((void*)(&v24_.v24), v2, v5);
  result = v24_.v25;
  if (v24_.v25 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v24_.v25);
    v8 = (__int64*)v24_.v24;
    result = v24_.v25;
    if (v24_.v25 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
    if (v7 == 0 || v8 == nullptr) {
      if (v7 == 0) {
        return result;
      }
      goto LABEL_44;
    }
    v9 = *(_DWORD**)(a1 + 8);
    v10 = GameVariable_82eaa0(v3);
    if (game_GameModeData_instance_ != 0 &&
        (v11 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v10)) != 0 &&
        *(_DWORD*)(v11 + 32) != 0) {
      LayoutAccessor_155e830_alt1((__int64)v8, 1);
      v12 = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"Img");
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v13 = 0;
      }
      v21 = ui_Manager_instance_;
      if ((_DWORD)v3 == 10) {
        v22 = nullptr;
      }
      else {
        v22 = (&GameData_2066090)[v3];
      }
      v23 = game_util_Format_alt1("SaveIcon_%s_Clear2", v22);
    }
    else {
      v14 = GameVariable_82e7c0(v3, 2);
      if (game_GameModeData_instance_ == 0 ||
          (v15 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v14)) == 0 ||
          *(int*)(v15 + 32) < 1) {
        if ((_DWORD)v3 == 0 || (_DWORD)v3 == 9 ||
            (v24_.v25 = GameData_2021f88[v3],
             v24_.v24 = game_HashString_alt1(v24_.v25),
             game_GameModeData_instance_ == 0) ||
            (v17 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&v24_.v24)) == 0 ||
            *(_DWORD*)(v17 + 32) == 0) {
          result = (__int64)GameVariable_82e7c0(v3, 1);
          if (game_GameModeData_instance_ != 0) {
            result = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)result);
            if (result == 0 || *(int*)(result + 32) < 1) {
              goto LABEL_44;
            }
            LayoutAccessor_155e830_alt1((__int64)v8, 1);
            v19 = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"Img");
            if (v19 != 0) {
              v19 = __dynamic_cast(v19, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            GameRoutine_1842ae0_alt1(v19, v3, 1);
            v20 = "Disable";
          LABEL_43:
            result = LayoutAccessor_1562cf0_alt1((__int64)v8, v20);
            ++*v9;
          }
        LABEL_44:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            return std___1___shared_weak_count___release_weak_alt1(v7);
          }
          return result;
        }
        LayoutAccessor_155e830_alt1((__int64)v8, 1);
        v18 = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"Img");
        if (v18 != 0) {
          v18 =
              __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1842ae0_alt1(v18, v3, 2);
      LABEL_42:
        v20 = "Enable";
        goto LABEL_43;
      }
      LayoutAccessor_155e830_alt1((__int64)v8, 1);
      v16 = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"Img");
      if (v16 != 0) {
        v13 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v13 = 0;
      }
      v21 = ui_Manager_instance_;
      if ((_DWORD)v3 == 10) {
        v23 = game_util_Format_alt1("SaveIcon_%s_Clear2_Skip", 0);
      }
      else {
        v23 = game_util_Format_alt1("SaveIcon_%s_Clear2_Skip",
                                    (&GameData_2066090)[v3]);
      }
    }
    Manager_136a920(v21 + 1264, v13, 0, 7u, v23);
    goto LABEL_42;
  }
  return result;
}

#pragma GCC visibility pop
