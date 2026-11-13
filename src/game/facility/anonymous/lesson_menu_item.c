#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1433810(void);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ffa390[])();
extern __int64 (*GameData_1ffa410[])();
extern __int64 GameData_21c9718;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
__int64 LessonMenuItem_ACall(_QWORD* a1);
__int64 GameRoutine_1433810_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1433810");
extern __int64 GameData_21f3ff8;
__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameSubquestData_125b8e0_alt1(
    _QWORD*, const char*, unsigned __int8) __asm__("GameSubquestData_125b8e0");
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 game_GameModeData_instance_;
void GameRoutine_1433810_alt2() __asm__("GameRoutine_1433810");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_715440();
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d690;
extern char GameData_1a9f09e;
extern int GameData_1b9e940[];
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void game_gameui_1595d90(char*, int, char, char);
__int64 LessonMenuItem_DrawText(_QWORD* a1);

__int64 LessonMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  const char* v4;
  unsigned int v5;
  unsigned __int8 v6;
  __int64 result;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int16 v26;
    char gap154_[6];
    __int64 v27;
    char* v28;
  } v26_;
  char* v29;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[11];
  v26_.v26 = 0;
  v3 = *(unsigned __int8*)(v2 + 48);
  if ((_DWORD)v3 == 1) {
    v8 = "MID_LessonMenu_PracticeConfirm";
  LABEL_12:
    GameRoutine_60a020_alt1((__int64)&v26_.v26, v8);
    v5 = (unsigned __int8)v26_.v26;
    v3 = v26_.v27;
    goto LABEL_18;
  }
  if ((_DWORD)v3 == 2) {
    v3 = *(_QWORD*)(v2 + 64);
    if (v3 != 0) {
      v4 = *(const char**)(v2 + 104);
      if (v4 != nullptr) {
        v5 = *(unsigned __int8*)v4;
        if (*v4 == 0) {
          goto LABEL_18;
        }
        if (GameData_21c9718 != 0) {
          v6 = game_GameModeData_instance_ != 0
                   ? *(_BYTE*)(game_GameModeData_instance_ + 15)
                   : 0;
          v9 = GameSubquestData_125b8e0_alt1((_QWORD*)GameData_21c9718, v4, v6);
          if (v9 != 0 && *(_BYTE*)(v9 + 9) == 3) {
            v8 = "MID_QuestMenu_Report_Confirm";
            goto LABEL_12;
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_18:
  if ((v5 & 1) == 0) {
    v3 = v5 >> 1;
  }
  if (v3 == 0) {
    v14 = a1[11];
    if (v14 != 0) {
      v15 = *(unsigned __int16*)(v14 + 16);
    }
    else {
      v15 = -1;
    }
    *(_DWORD*)(*GameData_212dcd0 + 8) = v15;
    GameRoutine_1433810_alt2();
    result = 2;
    if ((v26_.v26 & 1) == 0) {
      return result;
    }
    goto LABEL_48;
  }
  v10 = a1[1];
  if (*(_QWORD*)(v10 + 152) != 0) {
    v11 = *(_QWORD*)(v10 + 152);
  }
  else {
    v11 = a1[1];
  }
  if ((v5 & 1) != 0) {
    v12 = v26_.v28;
  }
  else {
    v12 = (char*)&v26_.v26 + 1;
  }
  v29 = v12;
  v22_.v23 = v22_.v22;
  v24_.v24[0] = GameData_1ffa390;
  v24_.v24[1] = a1;
  v24_.v25 = v24_.v24;
  v20_.v21 = v20_.v20;
  v22_.v22[0] = GameData_1ffa410;
  v20_.v20[0] = GameData_1ffa410;
  MapSortieMenu_871860(v11, (__int64)&v29, (__int64)v24_.v24, (__int64)v22_.v22,
                       (__int64)v20_.v20);
  if (v20_.v21 == v20_.v20) {
    v13 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_34;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v20_.v21 + v13))((__int64)v20_.v21);
LABEL_34:
  if (v22_.v23 == v22_.v22) {
    v16 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_39;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v16))((__int64)v22_.v23);
LABEL_39:
  if (v24_.v25 == v24_.v24) {
    v17 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_44;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v24_.v25 + v17))((__int64)v24_.v25);
LABEL_44:
  result = 12;
  if ((v26_.v26 & 1) == 0) {
    return result;
  }
LABEL_48:
  if (v26_.v28 != nullptr) {
    v18 = result;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v26_.v28);
    return v18;
  }
  return result;
}

__int64 LessonMenuItem_DrawText(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  int v8;
  char v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  const char* v20;
  __int64* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  const char* v27;
  const char* v28;
  const char* v29;
  __int64 v30;
  bool v31;
  const char* v32;
  _QWORD* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  bool v37;
  const char* v38;
  unsigned __int8 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  atomic_ullong* v43;
  __int64* v44;
  char v45;
  __int64 result;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  struct {
    char* v51;
    __int64 v52;
    __int64* v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
    unsigned __int64 v56;
    int v57;
    int v58;
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
  } v51_;

  {
    v2 = a1[7];
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 == 0) {
    goto LABEL_35;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_35;
  }
  {
    v4 = (char*)a1[6];
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = v3;
  if (v4 != nullptr) {
    {
      v6 = a1[11];
      __asm__ volatile("" ::"r"(v6));
    }
    v7 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
    {
      v8 = *(unsigned __int8*)(v6 + 72);
      __asm__ volatile("" ::"r"(v8));
    }
    v9 = v7;
    v10 = GameRoutine_715440();
    LayoutAccessor_1562060(v4, (__int64)"T_Txt", *(const char**)(v6 + 32));
    {
      v11 = *(unsigned __int8*)(v6 + 72);
      __asm__ volatile("" ::"r"(v11));
    }
    v12 = ui_LayoutAccessor_FindPane((__int64*)v4, (__int64)"T_HonorNum");
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d690, 0);
      if (v13 != 0) {
        GameRoutine_156c910(v13, "%d", 1, v11);
      }
    }
    v14 = 64;
    if ((v9 & 1) != 0) {
      v14 = 60;
    }
    v15 = 72;
    if ((v9 & 1) != 0) {
      v15 = 36;
    }
    if (v10 >= v8) {
      v14 = v15;
    }
    {
      v16 = *(_DWORD*)((char*)GameData_212da30 + v14);
      __asm__ volatile("" ::"r"(v16));
    }
    v17 = ui_LayoutAccessor_FindTextBox((__int64*)v4, (__int64)"T_HonorNum");
    if (v17 != 0) {
      v18 = Pane_58f8a0(v17);
      if (v18 != 0) {
        *(_DWORD*)(v18 + 12) = v16;
      }
    }
    {
      v19 = *(unsigned __int8*)(v6 + 48);
      __asm__ volatile("" ::"r"(v19));
    }
    if (v19 > 2) {
      v20 = &GameData_1a9f09e;
    }
    else {
      v20 = (char*)GameData_1b9e940 + GameData_1b9e940[v19];
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = msg_MessageManager_instance__ptr[0];
      __asm__ volatile("" ::"r"(v21));
    }
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v9 & 1, 0);
    {
      v22 = *v21;
      __asm__ volatile("" ::"r"(v22));
    }
    v51_.v59 = -1;
    v51_.v60 = -1;
    v51_.v61 = -1;
    v51_.v62 = -1;
    v51_.v63 = -1;
    v51_.v64 = -1;
    v51_.v65 = -1;
    v51_.v66 = -1;
    v51_.v67 = -1;
    v51_.v68 = -1;
    v51_.v69 = -1;
    v51_.v70 = -1;
    v51_.v53 = GameData_212e348 + 2;
    v51_.v54 = 0xFFFF0001FFFF0000LL;
    v51_.v55 = 0xFFFF0004FFFF0002LL;
    v51_.v56 = 0xFFFF0006FFFF0005LL;
    v51_.v71 = 8;
    v51_.v57 = -65529;
    v51_.v58 = -65528;
    v23 = GameRoutine_a4dbe0(v22, v20, 0);
    if (v23 != nullptr) {
      v24 = (__int64)v23;
      v25 = ui_LayoutAccessor_FindTextBox((__int64*)v4, (__int64)"T_Type");
      if (v25 != 0) {
        GameRoutine_156c5d0(v25, v24, 0);
      }
    }
    {
      v26 = *(unsigned __int8*)(v6 + 48);
      __asm__ volatile("" ::"r"(v26));
    }
    if (v26 == 2) {
      v27 = "Subjugation_Disable";
      v28 = "Subjugation_Default";
    }
    else if (v26 == 1) {
      v27 = "Practice_Disable";
      v28 = "Practice_Default";
    }
    else {
      if (*(_BYTE*)(v6 + 48) != 0) {
        v29 = &GameData_1a9f09e;
      LABEL_32:
        LayoutAccessor_1562cf0((__int64)v4, v29);
        goto LABEL_33;
      }
      v27 = "Explanation_Disable";
      v28 = "Explanation_Default";
    }
    if ((v9 & 1) != 0) {
      v29 = v28;
    }
    else {
      v29 = v27;
    }
    goto LABEL_32;
  }
LABEL_33:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
LABEL_35:
  {
    v30 = a1[11];
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = *(_QWORD*)(v30 + 64) != 0 && *(_BYTE*)(v30 + 48) == 2;
    __asm__ volatile("" ::"r"(v31));
  }
  if (!v31 || (v32 = *(const char**)(v30 + 104)) == nullptr || *v32 == 0 ||
      (v33 = *(_QWORD**)GameData_212c7b0[0],
       *(_QWORD*)GameData_212c7b0[0] == 0)) {
  LABEL_49:
    {
      v36 = a1[11];
      __asm__ volatile("" ::"r"(v36));
    }
    {
      v37 = *(_QWORD*)(v36 + 64) != 0 && *(_BYTE*)(v36 + 48) == 2;
      __asm__ volatile("" ::"r"(v37));
    }
    if (v37 && (v38 = *(const char**)(v36 + 104)) != nullptr && *v38 != 0 &&
        *(_QWORD*)GameData_212c7b0[0] != 0) {
      if (game_GameModeData_instance_ != 0) {
        v39 = *(_BYTE*)(game_GameModeData_instance_ + 15);
        __asm__ volatile("" ::"r"(v39));
      }
      else {
        v39 = 0;
      }
      v50 = GameSubquestData_125b8e0_alt1(*(_QWORD**)GameData_212c7b0[0], v38,
                                          v39);
      v35 = 3;
      if (v50 != 0) {
        if ((*(_BYTE*)(v50 + 9) & 0xFE) == 2) {
          v35 = 1;
        }
        else {
          v35 = 3;
        }
      }
    }
    else {
      v35 = 3;
    }
    goto LABEL_60;
  }
  if (game_GameModeData_instance_ != 0) {
    v34 = GameSubquestData_125b8e0_alt1(
        v33, v32, *(_BYTE*)(game_GameModeData_instance_ + 15));
    if (v34 == 0) {
      goto LABEL_49;
    }
  }
  else {
    v34 = GameSubquestData_125b8e0_alt1(v33, v32, 0);
    if (v34 == 0) {
      goto LABEL_49;
    }
  }
  if (*(_BYTE*)(v34 + 9) != 3) {
    goto LABEL_49;
  }
  v35 = 2;
LABEL_60:
  {
    v40 = a1[7];
    __asm__ volatile("" ::"r"(v40));
  }
  if (v40 == 0) {
    goto LABEL_64;
  }
  v41 = std___1___shared_weak_count_lock(v40);
  if (v41 == 0) {
    goto LABEL_64;
  }
  v42 = v41;
  v43 = (atomic_ullong*)(v41 + 8);
  {
    v44 = (__int64*)a1[6];
    __asm__ volatile("" ::"r"(v44));
  }
  if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v44 != nullptr) {
      goto LABEL_65;
    }
    goto LABEL_64;
  }
  v49 = v44;
  (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
  std___1___shared_weak_count___release_weak(v42);
  v44 = v49;
  if (v49 == nullptr) {
  LABEL_64:
  }
  {
    v44 = ui_LayoutAccessor_empty__ptr[0];
    __asm__ volatile("" ::"r"(v44));
  }
LABEL_65:
  LayoutAccessor_1560070((void*)(&v51_.v51), v44, "L_State");
  v45 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = v51_.v52;
  if (v51_.v52 != 0) {
    v47 = std___1___shared_weak_count_lock(v51_.v52);
    if (v47 != 0) {
      v48 = v47;
      if (v51_.v51 != nullptr) {
        game_gameui_1595d90(v51_.v51, v35, 1, v45 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
        std___1___shared_weak_count___release_weak(v48);
      }
    }
    result = v51_.v52;
    if (v51_.v52 != 0) {
      return std___1___shared_weak_count___release_weak(v51_.v52);
    }
  }
  return result;
}

__int64 game_facility_anonymous_LessonMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 16);
  }
  else {
    v3 = -1;
  }
  *(_DWORD*)(GameData_21f3ff8 + 8) = v3;
  GameRoutine_1433810_alt1(a1, a2);
  return 4;
}

#pragma GCC visibility pop
