#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_anonymous_FastTravelMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_UnitMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitMenuItem_Destructor(__int64 a1);
_QWORD* GameRoutine_169a430(__int64, char*);
__int64 UnitMenuItem_ACall(_QWORD* a1);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern __int64 ui_LayoutAccessor_empty_;
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
void UnitMenuItem_Unknown17(__int64 a1);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_96de20(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, const char*, float,
                                      float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
unsigned __int64 strlen(const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) String_60a1d0();
void game_gameui_15970e0(__int64, unsigned int, const char*, __int64, char);
void game_menu_GameMenuItem_DrawText(_QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 UnitMenuItem_DrawText_169c810(_QWORD* a1);

__int64 UnitMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_hub_anonymous_UnitMenuItem_vtable;
  if (*(_QWORD*)(a1 + 120) != 0) {
    *(_QWORD*)(a1 + 120) = 0;
  }
  v2 = *(_QWORD*)(a1 + 144);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)a1 = game_hub_anonymous_FastTravelMenuItem_vtable;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  return result;
}

void UnitMenuItem_Unknown17(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  double v9;
  int v10;
  int v11;
  __int64* v12;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
    *(_BYTE*)(a1 + 152) = 1;
    v2 = *(_QWORD*)(a1 + 56);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v3 != 0) {
        v4 = v3;
        v5 = (atomic_ullong*)(v3 + 8);
        v6 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v6 != nullptr) {
          LABEL_7:
            v7 = LayoutAccessor_155fbe0(v6, "L_State"),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
            *(float*)(a1 + 156) = ui_LayoutAccessor_GetPaneSize(v7, "Bg"),
                           v10 = COERCE_AS(__typeof__(v10),
                                           PSEUDO_REGISTER(float, "s1", "=w")),
                           v11 = COERCE_AS(__typeof__(v11),
                                           PSEUDO_REGISTER(float, "s2", "=w")),
                           v8 = COERCE_AS(__typeof__(v8),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
            *(_DWORD*)(a1 + 160) = v8;
            v9 = ui_LayoutAccessor_GetPaneTranslate(v7, "T_TxtState"),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
            *(_DWORD*)(a1 + 164) = LODWORD(v9);
            *(_DWORD*)(a1 + 168) = v10;
            *(_DWORD*)(a1 + 172) = v11;
            return;
          }
        }
        else {
          v12 = v6;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v4),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
          v6 = v12;
          if (v12 != nullptr) {
            goto LABEL_7;
          }
        }
      }
    }
    v6 = &ui_LayoutAccessor_empty_;
    goto LABEL_7;
  }
}

__int64 UnitMenuItem_ACall(_QWORD* a1)
{
  char v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[2];
    char v8;
  } v7_;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0) {
    v4 = a1[17];
    v7_.v8 = 1;
    v6 = *(_QWORD*)(v4 + 48);
    v5 = *(_QWORD*)(v4 + 56);
    v7_.v7[0] = v6;
    v7_.v7[1] = v5;
    GameRoutine_169a430((__int64)a1, (char*)v7_.v7);
    return 12;
  }
  return result;
}

__int64 UnitMenuItem_DrawText_169c810(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  atomic_ullong* v23;
  __int64* v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  atomic_ullong* v30;
  __int64* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  atomic_ullong* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  atomic_ullong* v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  char v65;
  char* v66;
  unsigned int v67;
  char* v68;
  char* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  atomic_ullong* v74;
  __int64* v75;
  __int64 v76;
  char* v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  atomic_ullong* v85;
  __int64* v86;
  char* v87;
  __int64* v88;
  __int64 v89;
  char* v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  atomic_ullong* v98;
  __int64* v99;
  char* v100;
  __int64* v101;
  __int64 v102;
  char* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  char* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  atomic_ullong* v111;
  __int64* v112;
  char* v113;
  __int64* v114;
  __int64 v115;
  char* v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  char* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  atomic_ullong* v124;
  __int64* v125;
  char* v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  atomic_ullong* v132;
  __int64* v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  atomic_ullong* v139;
  __int64* v140;
  __int64* v141;
  __int64* v142;
  __int64* v143;
  __int64 v144;
  char* v145;
  __int64 v146;
  __int64 v147;
  __int64* v148;
  __int64* v149;
  __int64* v150;
  __int64* v151;
  __int64* v152;
  char* v153;
  char* v154;
  __int64* v155;
  __int64* v156;
  __int64 v157;
  __int64 v158;
  char v159;
  __int64 v160;
  char* v161;
  __int64 v162;
  __int64 v163;
  float v164;
  float v165;
  _QWORD* v166;
  float v167;
  __int64 v168;
  char* v169;
  __int64 v170;
  __int64 v171;
  __int64* v172;
  __int64 result;
  __int64 v174;
  __int64 v175;
  struct {
    __int64 v176;
    unsigned __int64 v177;
    char* v178;
    unsigned __int64 v179;
    int v180;
    int v181;
    __int64 v182;
    __int64 v183;
    __int64 v184;
    __int64 v185;
    __int64 v186;
    __int64 v187;
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int64 v194;
    char gap152_[4];
    float v195;
  } v176_;
  float v196;

  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  game_menu_GameMenuItem_DrawText(a1),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v44 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v4),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v6 = v44;
    if (v44 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, (__int64)"Icon"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v7 != 0) {
    *(_BYTE*)(v7 + 88) &= ~1u;
  }
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_12;
  }
  v9 = std___1___shared_weak_count_lock(v8),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v9 == 0) {
    goto LABEL_12;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v45 = v12;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v10),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v12 = v45;
  if (v45 == nullptr) {
  LABEL_12:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_13:
  LayoutAccessor_1562cf0((__int64)v12, "Unit"),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v13 = a1[7];
  v14 = *(_QWORD**)(a1[17] + 32LL);
  if (v13 == 0) {
    goto LABEL_17;
  }
  v15 = std___1___shared_weak_count_lock(v13),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v15 == 0) {
    goto LABEL_17;
  }
  v16 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 != nullptr) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v46 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v46),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v16 == nullptr) {
  LABEL_17:
    v16 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_18:
  v17 = GameHr_67ed20(v14),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v17 != nullptr) {
    v18 = (__int64)v17;
    v19 = ui_LayoutAccessor_FindTextBox(v16, (__int64)"T_Txt"),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v19 != 0) {
      GameRoutine_156c5d0(v19, v18, 0),
          v164 =
              COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v20 = a1[7];
  if (v20 == 0) {
    goto LABEL_25;
  }
  v21 = std___1___shared_weak_count_lock(v20),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v21 == 0) {
    goto LABEL_25;
  }
  v22 = v21;
  v23 = (atomic_ullong*)(v21 + 8);
  v24 = (__int64*)a1[6];
  if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v47 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v22),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v24 = v47;
    if (v47 != nullptr) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  if (v24 == nullptr) {
  LABEL_25:
    v24 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_26:
  v25 = ui_LayoutAccessor_FindPane(v24, (__int64)"Face"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v25 != 0) {
    v25 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v26 = GameHr_1840a20(v25, 0, (__int64)v14, 6u, 1),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v27 = a1[7];
  if (v27 == 0) {
    goto LABEL_32;
  }
  v28 = std___1___shared_weak_count_lock(v27),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v28 == 0) {
    goto LABEL_32;
  }
  v29 = v28;
  v30 = (atomic_ullong*)(v28 + 8);
  v31 = (__int64*)a1[6];
  if (atomic_fetch_add(v30, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v48 = v31;
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v29),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v31 = v48;
    if (v48 != nullptr) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if (v31 == nullptr) {
  LABEL_32:
    v31 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_33:
  ui_LayoutAccessor_SetPaneVisible((__int64)v31, (__int64)"Face", v26 & 1),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v32 = a1[7];
  if (a1[14] != 0) {
    v33 = (_QWORD*)a1[14];
  }
  else {
    v33 = (_QWORD*)a1[15];
  }
  if (v32 == 0) {
    goto LABEL_40;
  }
  v34 = std___1___shared_weak_count_lock(v32),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v34 == 0) {
    goto LABEL_40;
  }
  v35 = v34;
  v36 = (atomic_ullong*)(v34 + 8);
  v37 = (__int64*)a1[6];
  if (atomic_fetch_add(v36, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v37 != nullptr) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  v49 = v37;
  (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v35),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v37 = v49;
  if (v49 == nullptr) {
  LABEL_40:
    v37 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_41:
  v38 = ui_LayoutAccessor_FindPane(v37, (__int64)"IconClan"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v38 == 0) {
    v39 = 0;
    if (v33 != nullptr) {
      goto LABEL_43;
    }
  LABEL_47:
    v43 = *(_QWORD*)(*(_QWORD*)(a1[17] + 32LL) + 336LL);
    if (v43 != 0) {
      goto LABEL_72;
    }
    goto LABEL_77;
  }
  v39 = __dynamic_cast(v38, GameData_212d670[0], GameData_212d678[0], 0),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v33 == nullptr) {
    goto LABEL_47;
  }
LABEL_43:
  v40 = v33[49];
  if (v40 != 0) {
    v41 = v33[55];
    v42 = v41 != 0 ? *(_BYTE*)(v41 + 16) : 9;
    if (((1 << v42) & 0xF1) != 0) {
      LODWORD(v176_.v176) = *game_g_shared_system_skills_ptr & 0xFFF;
      if ((game_HasSkill(v33 + 218, (unsigned int*)&v176_.v176) & 1) == 0 ||
          ((v50 = v33[55]) == 0 ? (v51 = 9) : (v51 = *(_BYTE*)(v50 + 16)),
           ((1 << v51) & 0xF1) == 0)) {
        if (game_GameModeData_instance_ != 0) {
          v52 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          if (v52 != 0) {
            v43 = *(_QWORD*)(v52 + 336);
            if (v43 != 0) {
              goto LABEL_72;
            }
          }
        }
      }
    }
    v43 = *(_QWORD*)(v40 + 336);
    if (v43 != 0) {
    LABEL_72:
      v53 = GameRoutine_96de20(v43),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v39 != 0) {
        v54 = *(_BYTE**)(v53 + 48);
        if (v54 != nullptr && *v54 != 0) {
          v55 = v53;
          if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v54) & 1) !=
              0) {
            Manager_136a920(ui_Manager_instance_ + 1264, v39, 0, 5u,
                            *(_BYTE**)(v55 + 48)),
                v164 = COERCE_AS(__typeof__(v164),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
      }
    }
  }
LABEL_77:
  v56 = a1[7];
  v57 = *(unsigned __int8*)(a1[17] + 144LL);
  if (v56 == 0) {
    goto LABEL_81;
  }
  v58 = std___1___shared_weak_count_lock(v56),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v58 == 0) {
    goto LABEL_81;
  }
  v59 = v58;
  v60 = (atomic_ullong*)(v58 + 8);
  v61 = (__int64*)a1[6];
  if (atomic_fetch_add(v60, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v148 = v61;
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v59),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v61 = v148;
    if (v148 != nullptr) {
      goto LABEL_82;
    }
    goto LABEL_81;
  }
  if (v61 == nullptr) {
  LABEL_81:
    v61 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_82:
  if (v57 == 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)v61, (__int64)"L_IconLesson", 0),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    goto LABEL_94;
  }
  v62 = LayoutAccessor_155fbe0(v61, "L_IconLesson"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v63 = a1[17];
  v64 = (__int64)v62;
  v176_.v176 = (__int64)v62;
  LOBYTE(v176_.v177) = 0;
  v65 = *(_BYTE*)(v63 + 72);
  v66 = *(const char**)(v63 + 88);
  v67 = *(_DWORD*)(v63 + 64);
  v68 = (const char*)(v63 + 73);
  if ((v65 & 1) != 0) {
    v69 = v66;
  }
  else {
    v69 = v68;
  }
  v70 = strlen(v69),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  game_gameui_15970e0((__int64)&v176_.v176, v67, v69, v70, 1),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_155e830(v64, 1),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v71 = a1[7];
  if (v71 == 0) {
    goto LABEL_90;
  }
  v72 = std___1___shared_weak_count_lock(v71),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v72 == 0) {
    goto LABEL_90;
  }
  v73 = v72;
  v74 = (atomic_ullong*)(v72 + 8);
  v75 = (__int64*)a1[6];
  if (atomic_fetch_add(v74, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v75 != nullptr) {
      goto LABEL_91;
    }
    goto LABEL_90;
  }
  v156 = v75;
  (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v73),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v75 = v156;
  if (v156 == nullptr) {
  LABEL_90:
    v75 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_91:
  v76 = ui_LayoutAccessor_FindAlignment(v75, "A_Txt"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v76 != 0) {
    Alignment_56b600(v76),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_94:
  v77 = game_util_Format("L_Icon%02d", 0),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v78 = strlen(v77),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v78 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_248;
  }
  v79 = v78;
  if (v78 >= 0x17) {
    if ((v78 | 7) == 0x17) {
      v81 = 26;
    }
    else {
      v81 = (v78 | 7) + 1;
    }
    v80 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v81, 16, 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v176_.v177 = v79;
    v176_.v178 = v80;
    v176_.v176 = v81 | 1;
    goto LABEL_102;
  }
  v80 = (char*)&v176_.v176 + 1;
  LOBYTE(v176_.v176) = 2 * v78;
  if (v78 != 0) {
  LABEL_102:
    memmove((__int64)v80, (__int64)v77, v79),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v80[v79] = 0;
  v82 = a1[7];
  if (v82 == 0) {
    goto LABEL_107;
  }
  v83 = std___1___shared_weak_count_lock(v82),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v83 == 0) {
    goto LABEL_107;
  }
  v84 = v83;
  v85 = (atomic_ullong*)(v83 + 8);
  v86 = (__int64*)a1[6];
  if (atomic_fetch_add(v85, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v86 != nullptr) {
      goto LABEL_108;
    }
    goto LABEL_107;
  }
  v149 = v86;
  (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v84),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v86 = v149;
  if (v149 == nullptr) {
  LABEL_107:
    v86 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_108:
  if ((v176_.v176 & 1) != 0) {
    v87 = v176_.v178;
  }
  else {
    v87 = (char*)&v176_.v176 + 1;
  }
  v88 = LayoutAccessor_155fbe0(v86, v87),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_155e830((__int64)v88, 0),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v176_.v176 & 1) != 0 && v176_.v178 != nullptr) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, (__int64)v176_.v178),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v90 = game_util_Format("L_Icon%02d", 1),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v91 = strlen(v90),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v91 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_248:
    String_60a1d0(),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v92 = v91;
  if (v91 >= 0x17) {
    if ((v91 | 7) == 0x17) {
      v94 = 26;
    }
    else {
      v94 = (v91 | 7) + 1;
    }
    v93 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v94, 16, 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v176_.v177 = v92;
    v176_.v178 = v93;
    v176_.v176 = v94 | 1;
    goto LABEL_124;
  }
  v93 = (char*)&v176_.v176 + 1;
  LOBYTE(v176_.v176) = 2 * v91;
  if (v91 != 0) {
  LABEL_124:
    memmove((__int64)v93, (__int64)v90, v92),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v93[v92] = 0;
  v95 = a1[7];
  if (v95 == 0) {
    goto LABEL_129;
  }
  v96 = std___1___shared_weak_count_lock(v95),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v96 == 0) {
    goto LABEL_129;
  }
  v97 = v96;
  v98 = (atomic_ullong*)(v96 + 8);
  v99 = (__int64*)a1[6];
  if (atomic_fetch_add(v98, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v99 != nullptr) {
      goto LABEL_130;
    }
    goto LABEL_129;
  }
  v150 = v99;
  (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v97),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v99 = v150;
  if (v150 == nullptr) {
  LABEL_129:
    v99 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_130:
  if ((v176_.v176 & 1) != 0) {
    v100 = v176_.v178;
  }
  else {
    v100 = (char*)&v176_.v176 + 1;
  }
  v101 = LayoutAccessor_155fbe0(v99, v100),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_155e830((__int64)v101, 0),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v176_.v176 & 1) != 0 && v176_.v178 != nullptr) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, (__int64)v176_.v178),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v103 = game_util_Format("L_Icon%02d", 2),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v104 = strlen(v103),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v104 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_248;
  }
  v105 = v104;
  if (v104 >= 0x17) {
    if ((v104 | 7) == 0x17) {
      v107 = 26;
    }
    else {
      v107 = (v104 | 7) + 1;
    }
    v106 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v107, 16, 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v176_.v177 = v105;
    v176_.v178 = v106;
    v176_.v176 = v107 | 1;
    goto LABEL_146;
  }
  v106 = (char*)&v176_.v176 + 1;
  LOBYTE(v176_.v176) = 2 * v104;
  if (v104 != 0) {
  LABEL_146:
    memmove((__int64)v106, (__int64)v103, v105),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v106[v105] = 0;
  v108 = a1[7];
  if (v108 == 0) {
    goto LABEL_151;
  }
  v109 = std___1___shared_weak_count_lock(v108),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v109 == 0) {
    goto LABEL_151;
  }
  v110 = v109;
  v111 = (atomic_ullong*)(v109 + 8);
  v112 = (__int64*)a1[6];
  if (atomic_fetch_add(v111, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v112 != nullptr) {
      goto LABEL_152;
    }
    goto LABEL_151;
  }
  v151 = v112;
  (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v110),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v112 = v151;
  if (v151 == nullptr) {
  LABEL_151:
    v112 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_152:
  if ((v176_.v176 & 1) != 0) {
    v113 = v176_.v178;
  }
  else {
    v113 = (char*)&v176_.v176 + 1;
  }
  v114 = LayoutAccessor_155fbe0(v112, v113),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_155e830((__int64)v114, 0),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v176_.v176 & 1) != 0 && v176_.v178 != nullptr) {
    v115 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v115 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v115, (__int64)v176_.v178),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v116 = game_util_Format("L_Icon%02d", 3),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v117 = strlen(v116),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v117 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_248;
  }
  v118 = v117;
  if (v117 >= 0x17) {
    if ((v117 | 7) == 0x17) {
      v120 = 26;
    }
    else {
      v120 = (v117 | 7) + 1;
    }
    v119 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v120, 16, 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v176_.v177 = v118;
    v176_.v178 = v119;
    v176_.v176 = v120 | 1;
    goto LABEL_168;
  }
  v119 = (char*)&v176_.v176 + 1;
  LOBYTE(v176_.v176) = 2 * v117;
  if (v117 != 0) {
  LABEL_168:
    memmove((__int64)v119, (__int64)v116, v118),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v119[v118] = 0;
  v121 = a1[7];
  if (v121 == 0) {
    goto LABEL_173;
  }
  v122 = std___1___shared_weak_count_lock(v121),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v122 == 0) {
    goto LABEL_173;
  }
  v123 = v122;
  v124 = (atomic_ullong*)(v122 + 8);
  v125 = (__int64*)a1[6];
  if (atomic_fetch_add(v124, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v125 != nullptr) {
      goto LABEL_174;
    }
    goto LABEL_173;
  }
  v152 = v125;
  (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v123),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v125 = v152;
  if (v152 == nullptr) {
  LABEL_173:
    v125 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_174:
  if ((v176_.v176 & 1) != 0) {
    v126 = v176_.v178;
  }
  else {
    v126 = (char*)&v176_.v176 + 1;
  }
  v127 = LayoutAccessor_155fbe0(v125, v126),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_155e830((__int64)v127, 0),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v176_.v176 & 1) != 0 && v176_.v178 != nullptr) {
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v128, (__int64)v176_.v178),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if (a1[14] != 0) {
    v129 = a1[7];
    if (v129 != 0) {
      v130 = std___1___shared_weak_count_lock(v129),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v130 != 0) {
        v131 = v130;
        v132 = (atomic_ullong*)(v130 + 8);
        v133 = (__int64*)a1[6];
        if (atomic_fetch_add(v132, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v133 != nullptr) {
          LABEL_188:
            v134 = LayoutAccessor_155fbe0(v133, "L_State"),
            v164 =
                COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
            LayoutAccessor_155e830((__int64)v134, 0),
                v164 = COERCE_AS(__typeof__(v164),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            goto LABEL_233;
          }
        }
        else {
          v155 = v133;
          (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v131),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          v133 = v155;
          if (v155 != nullptr) {
            goto LABEL_188;
          }
        }
      }
    }
    v133 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_188;
  }
  v135 = a1[15];
  v136 = a1[7];
  if (v136 == 0) {
    goto LABEL_194;
  }
  v137 = std___1___shared_weak_count_lock(v136),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v137 == 0) {
    goto LABEL_194;
  }
  v138 = v137;
  v139 = (atomic_ullong*)(v137 + 8);
  v140 = (__int64*)a1[6];
  if (atomic_fetch_add(v139, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v141 = v140;
    (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v138),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v140 = v141;
  }
  if (v140 == nullptr) {
  LABEL_194:
    v140 = ui_LayoutAccessor_empty__ptr[0];
  }
  v142 = LayoutAccessor_155fbe0(v140, "L_State"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v143 = v142;
  if (v135 != 0) {
    LayoutAccessor_155e830((__int64)v142, 1),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    LayoutAccessor_1562cf0((__int64)v143, "Accent_Default"),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v176_.v182 = -1;
    v176_.v183 = -1;
    v176_.v184 = -1;
    v176_.v185 = -1;
    v144 = *msg_MessageManager_instance__ptr[0];
    v176_.v186 = -1;
    v176_.v187 = -1;
    v176_.v188 = -1;
    v176_.v189 = -1;
    v176_.v190 = -1;
    v176_.v191 = -1;
    v176_.v192 = -1;
    v176_.v193 = -1;
    v176_.v176 = (__int64)(GameData_212e348 + 2);
    v176_.v177 = 0xFFFF0001FFFF0000LL;
    v176_.v178 = (const char*)0xFFFF0004FFFF0002LL;
    v176_.v179 = 0xFFFF0006FFFF0005LL;
    v176_.v194 = 8;
    v176_.v180 = -65529;
    v176_.v181 = -65528;
    v145 = GameRoutine_a4dbe0(v144, "MID_FastTravelMenu_CanScout", 0),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v145 != nullptr) {
      v146 = (__int64)v145;
      v147 = ui_LayoutAccessor_FindTextBox(v143, (__int64)"T_TxtState"),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v147 != 0) {
        GameRoutine_156c5d0(v147, v146, 0),
            v164 =
                COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
    goto LABEL_229;
  }
  LayoutAccessor_155e830((__int64)v142, 0),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 && a1[16] != 0) {
      v153 = "MID_FastTravelMenu_CanJoin";
      v154 = "Accent_Default";
      goto LABEL_224;
    }
    v157 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(v14[3] + 1072LL)),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v157 != 0 && *(_DWORD*)(v157 + 32) != 0 &&
        game_GameModeData_instance_ != 0) {
      v158 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(v14[3] + 1192LL)),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v158 != 0 && *(_DWORD*)(v158 + 32) != 0) {
        v159 = 0;
        goto LABEL_228;
      }
    }
  }
  v153 = "MID_FastTravelMenu_CannotScout";
  v154 = "Default";
LABEL_224:
  LayoutAccessor_1562cf0((__int64)v143, v154),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  v176_.v182 = -1;
  v176_.v183 = -1;
  v176_.v184 = -1;
  v176_.v185 = -1;
  v160 = *msg_MessageManager_instance__ptr[0];
  v176_.v186 = -1;
  v176_.v187 = -1;
  v176_.v188 = -1;
  v176_.v189 = -1;
  v176_.v190 = -1;
  v176_.v191 = -1;
  v176_.v192 = -1;
  v176_.v193 = -1;
  v176_.v176 = (__int64)(GameData_212e348 + 2);
  v176_.v177 = 0xFFFF0001FFFF0000LL;
  v176_.v178 = (const char*)0xFFFF0004FFFF0002LL;
  v176_.v179 = 0xFFFF0006FFFF0005LL;
  v176_.v194 = 8;
  v176_.v180 = -65529;
  v176_.v181 = -65528;
  v161 = GameRoutine_a4dbe0(v160, v153, 0),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v161 != nullptr) {
    v162 = (__int64)v161;
    v163 = ui_LayoutAccessor_FindTextBox(v143, (__int64)"T_TxtState"),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v163 != 0) {
      GameRoutine_156c5d0(v163, v162, 0),
          v164 =
              COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v159 = 1;
LABEL_228:
  LayoutAccessor_155e830((__int64)v143, v159),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((LayoutAccessor_155ea30(v143) & 1) != 0) {
  LABEL_229:
    ui_LayoutAccessor_GetPaneSize(v143, "Bg"),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v165 = v164;
    v166 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v143, (__int64)"T_TxtState"),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v166 != nullptr) {
      ui_text_190a0c0((float*)&v176_.v176, (__int64)&v196, &v176_.v195, v166,
                      v166[27]),
          v164 =
              COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      v167 = v196;
    }
    else {
      v167 = 0x0.0p+0f;
    }
    v168 = ui_LayoutAccessor_FindPane(v143, (__int64)"Bg"),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    v169 = Pane_58fac0(v168, "Margin_Width"),
    v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    ui_LayoutAccessor_SetPaneSize(
        (__int64)v143, "Bg",
        v167 + (float)*(int*)&v169[*((unsigned int*)v169 + 1)], v165),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  }
LABEL_233:
  v170 = a1[7];
  if (v170 == 0) {
    goto LABEL_237;
  }
  v171 = std___1___shared_weak_count_lock(v170),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v171 == 0) {
    goto LABEL_237;
  }
  v172 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v175 = v171;
    (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v175),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v172 != nullptr) {
      goto LABEL_238;
    }
    goto LABEL_237;
  }
  if (v172 == nullptr) {
  LABEL_237:
    v172 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_238:
  result = ui_LayoutAccessor_FindAlignment(v172, "A_Icon"),
  v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
  if (result != 0) {
    Alignment_56b600(result),
        v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
    result = v172[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result),
      v164 = COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
      if (result != 0) {
        v174 = result;
        result = *v172;
        if (*v172 != 0) {
          result = ControlCreator_13633c0(result),
          v164 =
              COERCE_AS(__typeof__(v164), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v174 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(float, "s1", "=w"));
          return std___1___shared_weak_count___release_weak_alt1(v174);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
