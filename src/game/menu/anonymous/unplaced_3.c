#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_156cb80(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_820d50(int);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_17af8e0(__int64*, __int64*, __int64*,
                       __int64 (**)(__int64*, __int64*));
__int64 GameHr_17afac0(__int64*, __int64*, __int64*, __int64*,
                       __int64 (**)(__int64*, __int64*));
__int64 GameHr_17afc10(__int64*, __int64*, __int64*, __int64*, __int64*,
                       __int64 (**)(__int64*, __int64*));
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 GameRoutine_181b920(int, char);
__int64 GameRoutine_1841000(__int64, int);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562060_alt1(__int64 result, __int64,
                                    __int64) __asm__("LayoutAccessor_1562060");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563030(__int64 result, unsigned int*, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 RelianceSelectMenu_184dea0(unsigned int, char, __int64);
__int64 UnitDerivedParams_6deeb0(__int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_Unit_GetAttack(__int64, char, int, int, char);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetUnknown4(__int64, char);
__int64 game_Unit_GetUnknown6(__int64, char);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, const char**);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool game_6ed370(__int64);
bool game_menu_anonymous_17afdc0_alt1(
    __int64*, __int64*,
    __int64 (**)(__int64*, __int64*)) __asm__("game_menu_anonymous_17afdc0");
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
double ui_LayoutAccessor_GetTranslate(__int64*);
extern __int64 (*GameData_2088c70[])();
extern __int64 (*GameData_20e8740[])();
extern __int64 (*GameData_20e87c0[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212ea58;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_2203490;
extern __int64 GameData_2260e80;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20ae668[7];
extern char GameData_1a9f09e;
extern char game_facility_g_unknown_2259368;
float GameRoutine_1675fe0(__int64);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
unsigned __int64 LayoutAccessor_1562b50(__int64*, const char*);
unsigned __int64 strlen(const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_16497b0(__int64, const char*);
void GameRoutine_16a75e0(__int64);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void RelianceUnitSelectMenu_184e860(__int64);
void __attribute__((noreturn)) String_60a1d0();
void game_menu_GameMenuItem_DrawText(_QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_1673c10(__int64* a1, char a2);
__int64 game_menu_anonymous_1674340(__int64 a1);
void game_menu_anonymous_16758d0(__int64 a1, __int64 a2);
float game_menu_anonymous_1676100(__int64 a1);
void game_menu_anonymous_16762b0(__int64 a1, char a2, const char* a3);
__int64 game_menu_anonymous_16a8a70(__int64 a1, __int64 a2);
__int64* game_menu_anonymous_1716080(__int64* result, __int64 a2, char a3);
__int64 game_menu_anonymous_173aaf0(__int64 a1);
void game_menu_anonymous_17a3890(__int64 a1, __int64 a2, __int64 a3);
__int64 game_menu_anonymous_17aed00(__int64 result, __int64* a2,
                                    __int64 (**a3)(__int64*, __int64*),
                                    __int64 a4, char a5);
bool game_menu_anonymous_17afdc0(__int64* a1, __int64* a2,
                                 __int64 (**a3)(__int64*, __int64*));
__int64 game_menu_anonymous_17b0590(int a1);
__int64 game_menu_anonymous_1846100(__int64 a1, __int64* a2, char a3);
bool game_menu_anonymous_184ef30(unsigned int a1);

void game_menu_anonymous_1673c10(__int64* a1, char a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  const char* v18;
  char* v19;
  unsigned __int64 v20;
  unsigned int* v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    char* v26;
  } v24_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;

  v3 = a1[16];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = (__int64*)a1[15];
      v7 = v5;
      if (v6 == nullptr) {
      LABEL_50:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        return;
      }
      if ((a2 & 1) != 0) {
        v8 = "Select";
      }
      else {
        v8 = "Default";
      }
      if ((a2 & 1) != 0) {
        v9 = 6;
      }
      else {
        v9 = 7;
      }
      LOBYTE(v27_.v27) = 2 * v9;
      if ((a2 & 1) != 0) {
        v10 = 7;
      }
      else {
        v10 = 8;
      }
      memcpy((__int64)&v27_.v27 + 1, (__int64)v8, v9);
      v11 = *a1;
      *((_BYTE*)&v27_.v27 + v10) = 0;
      v12 = (const char*)(*(__int64 (**)(__int64*))(v11 + 552))(a1);
      v13 = game_util_Format("%s%s", v12, (const char*)&v27_.v27 + 1);
      v14 = strlen(v13);
      if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v15 = v14;
      if (v14 >= 0x17) {
        if ((v14 | 7) == 0x17) {
          v17 = 26;
        }
        else {
          v17 = (v14 | 7) + 1;
        }
        v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v17, 16, 0);
        v24_.v25 = v15;
        v24_.v26 = v16;
        v24_.v24 = v17 | 1;
      }
      else {
        LOBYTE(v24_.v24) = 2 * v14;
        v16 = (char*)&v24_.v24 + 1;
        if (v14 == 0) {
          goto LABEL_22;
        }
      }
      memmove((__int64)v16, (__int64)v13, v15);
    LABEL_22:
      v16[v15] = 0;
      if ((v24_.v24 & 1) != 0) {
        v18 = v24_.v26;
      }
      else {
        v18 = (char*)&v24_.v24 + 1;
      }
      if ((LayoutAccessor_1562b50(v6, v18) & 1) == 0) {
        if ((v24_.v24 & 1) != 0) {
          if ((v27_.v27 & 1) != 0) {
            v19 = v27_.v29;
          }
          else {
            v19 = (char*)&v27_.v27 + 1;
          }
          if ((v27_.v27 & 1) != 0) {
            v20 = v27_.v28;
          }
          else {
            v20 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
          }
          SpineModel_64dde0(&v24_.v24, (__int64)v19, v20);
        }
        else if ((v27_.v27 & 1) != 0) {
          GameRoutine_64df20(&v24_.v24, (__int64)v27_.v29, v27_.v28);
        }
        else {
          v24_.v24 = v27_.v27;
          v24_.v25 = v27_.v28;
          v24_.v26 = v27_.v29;
        }
      }
      if ((v24_.v24 & 1) != 0) {
        v21 = (unsigned int*)v24_.v26;
      }
      else {
        v21 = (unsigned int*)((char*)&v24_.v24 + 1);
      }
      GameHr_1562680((__int64)v6, v21, 0x1.0000000000000p+0f);
      if ((v24_.v24 & 1) != 0 && v24_.v26 != nullptr) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v24_.v26);
      }
      if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v27_.v29);
      }
      goto LABEL_50;
    }
  }
}

__int64 game_menu_anonymous_1674340(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  int i;
  char* v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  unsigned int* v12;
  int v13;
  int v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  int v18;
  int v19;
  double v20;
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  result = *(_QWORD*)(a1 + 112);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  if (result == 0) {
    return result;
  }
  v3 = *(__int64**)(a1 + 104);
  v4 = result;
  if (v3 == nullptr) {
    goto LABEL_35;
  }
  v5 = *(_DWORD*)(a1 + 140);
  if (v5 != 0) {
    v6 = GameRoutine_181b920(v5, 0),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  else {
    v6 = 0;
  }
  for (i = 0; i != 11; ++i) {
    v8 = game_util_Format("L_Gauge%02d", i),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    LayoutAccessor_1560070((void*)(&v21_.v21), v3, v8),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v21_.v22 == 0) {
      continue;
    }
    v9 = std___1___shared_weak_count_lock(v21_.v22),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    v10 = (__int64)v21_.v21;
    if (v21_.v22 != 0) {
      std___1___shared_weak_count___release_weak(v21_.v22),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    if (v9 != 0 && v10 != 0) {
      v11 = "Disable";
      if (v6 > i) {
        v11 = "Enable";
      }
      if (v6 == i) {
        v12 = (unsigned int*)"Select";
      }
      else {
        v12 = (unsigned int*)v11;
      }
      GameHr_1562680(v10, v12, 0x1.0000000000000p+0f),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    else if (v9 == 0) {
      continue;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      std___1___shared_weak_count___release_weak(v9),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    }
  }
  v13 = *(_DWORD*)(a1 + 140);
  if (v13 != 0) {
    v14 = GameRoutine_181b920(v13, 1),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  else {
    v14 = 0;
  }
  v15 = game_util_Format("L_Gauge%02d", v14),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  LayoutAccessor_1560070((void*)(&v21_.v21), v3, v15),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  result = v21_.v22;
  if (v21_.v22 != 0) {
    v16 = std___1___shared_weak_count_lock(v21_.v22),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    v17 = v21_.v21;
    result = v21_.v22;
    if (v21_.v22 != 0) {
      result = std___1___shared_weak_count___release_weak(v21_.v22),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    if (v16 != 0 && v17 != nullptr) {
      ui_LayoutAccessor_GetPaneTranslate(v3, "DefaultPoint"),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      HIDWORD(v21_.v21) = v18;
      LODWORD(v21_.v22) = v19;
      v20 = ui_LayoutAccessor_GetTranslate(v17),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      LODWORD(v21_.v21) = LODWORD(v20);
      ui_LayoutAccessor_SetPaneTranslate(v3, "DefaultPoint",
                                         (__int64)&v21_.v21),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      result = ui_LayoutAccessor_SetPaneVisible((__int64)v3, "DefaultPoint", 1),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    LABEL_33:
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
        result = std___1___shared_weak_count___release_weak(v16),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
    else if (v16 != 0) {
      goto LABEL_33;
    }
  }
LABEL_35:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void game_menu_anonymous_16758d0(__int64 a1, __int64 a2)
{
  float v2;
  __int64 v4;
  __int64 v6;
  long double v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  float v12;
  const char* v13;
  int v14;
  const char* v15;
  int v16;
  const char* v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  float v23;
  int v24;
  float v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  char v31;
  __int64 v32;
  float v33;
  unsigned __int64 v34;
  double v35;
  float v36;
  int v37;
  int v38;
  double v39;
  float v40;
  int v41;
  int v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  int v50;
  struct {
    unsigned __int64 v51;
    int v52;
  } v51_;
  float v53;

  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a2 + 8);
  if (v4 != 0) {
    v6 = std___1___shared_weak_count_lock(v4),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v6 != 0) {
      v8 = *(__int64**)a2;
      v9 = v6;
      if (*(_QWORD*)a2 != 0) {
        v10 = ui_LayoutAccessor_FindPane(*(__int64**)a2, "T_Txt"),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = Pane_58fac0(v10, "ScrollMoveSpeed"),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v12 = *(float*)&v11[*((unsigned int*)v11 + 1)];
        v13 = Pane_58fac0(v10, "ScrollDelayCount"),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v14 = *(_DWORD*)&v13[*((unsigned int*)v13 + 1)];
        v15 = Pane_58fac0(v10, "ScrollTextMargin"),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v16 = *(_DWORD*)&v15[*((unsigned int*)v15 + 1)];
        v17 = Pane_58fac0(v10, "ScrollStopStartDist"),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v18 = *(_QWORD*)(a2 + 8);
        v19 = *(_DWORD*)&v17[*((unsigned int*)v17 + 1)];
        if (v18 != 0) {
          v20 = *(__int64**)a2;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                    memory_order_relaxed);
          v21 = std___1___shared_weak_count_lock(v18),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v21 == 0) {
            goto LABEL_12;
          }
          v22 = v21;
          if (v20 != nullptr) {
            v23 = ui_LayoutAccessor_GetPaneSize(v20, "T_FitTxt"),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v2 = v23 / ui_LayoutAccessor_GetPaneSize(v20, "S_Txt"),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v22),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (v20 == nullptr) {
          LABEL_12:
            v2 = 0x1.0000000000000p+0f;
          }
          std___1___shared_weak_count___release_weak(v18),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v2 = 0x1.0000000000000p+0f;
        }
        LODWORD(v7) = 1068708659;
        v24 = *(_DWORD*)a1 + 1;
        if (v12 == 0x0.0p+0f) {
          v25 = 0x1.6666660000000p+0f;
        }
        else {
          v25 = v12;
        }
        *(_DWORD*)a1 = v24;
        if (v14 != 0) {
          v26 = v14;
        }
        else {
          v26 = 44;
        }
        if (v26 <= v24) {
          *(_DWORD*)a1 = v26;
          v27 = ui_LayoutAccessor_FindTextBox(v8, "T_Txt2"),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v27 != 0) {
            v28 = v27;
            v29 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v8, "T_Txt2"),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (v29 != nullptr) {
              GameRoutine_190a0c0((float*)&v51_.v51, (__int64)&v49, &v53, v29,
                                  v29[27]),
                  v37 = COERCE_AS(__typeof__(v37),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v30 = v49;
            }
            else {
              v30 = 0;
            }
            v31 = *(_BYTE*)(v28 + 88);
            *(_QWORD*)(v28 + 80) = v30;
            *(_BYTE*)(v28 + 88) = v31 | 0x10;
          }
          v32 = ui_LayoutAccessor_FindPane(v8, "T_Txt2"),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v33 = 0x0.0p+0f;
          LOBYTE(v53) = 0;
          v51_.v51 = 0xFF7FFFFF7F7FFFFFLL;
          v49 = 0x7F7FFFFFFF7FFFFFLL;
          if (v32 != 0) {
            v34 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v32 + 128),
                                        *(float32x4_t*)(v32 + 128)))
                      .n128_u64[0];
            GameRoutine_156bee0(
                v32, (__int64)&v51_.v51, (__int64)&v49, (__int64)&v53, 0,
                sqrtf((float)(*(float*)&v34 +
                              (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 112)) *
                                      COERCE_FLOAT(*(_OWORD*)(v32 + 112)))) +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 144)) *
                              COERCE_FLOAT(*(_OWORD*)(v32 + 144)))) /
                    *(float*)(v32 + 72),
                sqrtf((float)(*((float*)&v34 + 1) +
                              (float)(COERCE_FLOAT(
                                          HIDWORD(*(_QWORD*)(v32 + 112))) *
                                      COERCE_FLOAT(
                                          HIDWORD(*(_QWORD*)(v32 + 112))))) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))))) /
                    *(float*)(v32 + 76)),
                v37 = COERCE_AS(__typeof__(v37),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            if (LOBYTE(v53) == 1) {
              v33 = vabds_f32(*(float*)&v49, *(float*)&v51_.v51);
            }
          }
          v35 = ui_LayoutAccessor_GetPaneTranslate(v8, "T_Txt"),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v36 = *(float*)&v35;
          HIDWORD(v51_.v51) = v37;
          v51_.v52 = v38;
          v39 = ui_LayoutAccessor_GetPaneTranslate(v8, "T_Txt2"),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v40 = *(float*)&v39;
          HIDWORD(v49) = v41;
          v50 = v42;
          v43 =
              (float)(v33 - (float)(ui_LayoutAccessor_GetPaneSize(v8, "S_Txt") *
                                    v2)) *
              0x1.0000000000000p-1f,
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
          v44 = (float)(v43 + (float)v19) - v40;
          if (v44 >= 0x0.0p+0f) {
            v48 = v25 + (float)(v25 * (float)((float)(v44 / (float)v19) *
                                              -0x1.cccccc0000000p-1f));
            if (v48 <= 0x1.99999a0000000p-4f) {
              v48 = 0x1.99999a0000000p-4f;
            }
            v46 = v36 - v48;
            *(float*)(a1 + 4) = v48;
            v47 = (float)v16;
            *(float*)&v51_.v51 = v46;
            if ((float)((float)(v33 + v46) + (float)v16) <= v43) {
              *(float*)&v49 = v43;
              *(_QWORD*)a1 = 0;
              v51_.v51 = v49;
              v46 = *(float*)&v49;
              v51_.v52 = v50;
            }
          }
          else {
            v45 = *(float*)(a1 + 4);
            if (v45 < v25) {
              v45 = v45 +
                    (float)(PSEUDO_UNFUSED(
                        (float)((float)(v25 + 0x1.99999a0000000p-4f) - v45) *
                        0x1.0000000000000p-5f));
              if (v25 < v45) {
                v45 = v25;
              }
              *(float*)(a1 + 4) = v45;
            }
            v46 = v36 - v45;
            v47 = (float)v16;
            *(float*)&v51_.v51 = v46;
          }
          *(float*)&v49 = v47 + (float)(v33 + v46);
          ui_LayoutAccessor_SetPaneTranslate(v8, "T_Txt", (__int64)&v51_.v51),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(float*)&v7 =
              ui_LayoutAccessor_SetPaneTranslate(v8, "T_Txt2", (__int64)&v49),
          v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v7),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v9),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s2", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(float, "s1", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
}

float game_menu_anonymous_1676100(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char v14;
  __int128 v15;
  float32x4_t v16;
  __int128 v17;
  float v18;
  float v20;
  __int64 v21;
  unsigned __int64 v22;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = 0x0.0p+0f;
  if (v2 != 0) {
    v4 = std___1___shared_weak_count_lock(v2);
    if (v4 != 0) {
      v5 = *(__int64**)a1;
      v6 = v4;
      if (*(_QWORD*)a1 != 0) {
        v7 = ui_LayoutAccessor_FindPane(*(__int64**)a1, "T_Txt2");
        v8 = *(_BYTE*)(v7 + 88);
        v9 = v7;
        if ((v8 & 1) == 0) {
          *(_BYTE*)(v7 + 88) = v8 | 1;
        }
        v10 = ui_LayoutAccessor_FindTextBox(v5, "T_Txt2");
        if (v10 != 0) {
          v11 = v10;
          v12 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v5, "T_Txt2");
          if (v12 != nullptr) {
            GameRoutine_190a0c0((float*)&v22, (__int64)&v21, &v20, v12,
                                v12[27]);
            v13 = v21;
          }
          else {
            v13 = 0;
          }
          v14 = *(_BYTE*)(v11 + 88);
          *(_QWORD*)(v11 + 80) = v13;
          *(_BYTE*)(v11 + 88) = v14 | 0x10;
        }
        v15 = *(_OWORD*)(v9 + 112);
        v16 = *(float32x4_t*)(v9 + 128);
        v17 = *(_OWORD*)(v9 + 144);
        LOBYTE(v20) = 0;
        v22 = 0xFF7FFFFF7F7FFFFFLL;
        v21 = 0x7F7FFFFFFF7FFFFFLL;
        LANES128(v16).n128_u64[0] =
            LANES128_OF(vmulq_f32(v16, v16)).n128_u64[0];
        GameRoutine_156bee0(
            v9, (__int64)&v22, (__int64)&v21, (__int64)&v20, 0,
            sqrtf((float)(LANES128(v16).n128_f32[0] +
                          (float)(*(float*)&v15 * *(float*)&v15)) +
                  (float)(*(float*)&v17 * *(float*)&v17)) /
                *(float*)(v9 + 72),
            sqrtf((float)(LANES128(v16).n128_f32[1] +
                          (float)(*((float*)&v15 + 1) * *((float*)&v15 + 1))) +
                  (float)(*((float*)&v17 + 1) * *((float*)&v17 + 1))) /
                *(float*)(v9 + 76));
        v18 = vabds_f32(*(float*)&v21, *(float*)&v22);
        if (LOBYTE(v20) != 0) {
          v3 = v18;
        }
        else {
          v3 = 0x0.0p+0f;
        }
        if ((v8 & 1) == 0) {
          *(_BYTE*)(v9 + 88) &= ~1u;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return v3;
}

void game_menu_anonymous_16762b0(__int64 a1, char a2, const char* a3)
{
  __int64 v4;
  __int64 v7;
  long double v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  char v28;
  __int64 v29;
  float v30;
  unsigned __int64 v31;
  double v32;
  unsigned int v33;
  __int64 v34;
  int v35;
  float v36;
  float v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  const char* v42;
  float v43;
  float v44[3];
  _QWORD v45[2];
  _QWORD v46[2];
  struct {
    unsigned __int64 v47;
    unsigned __int64 v48;
    char* v49;
    unsigned __int64 v50;
    unsigned __int64 v51;
    int v52;
    int v53;
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
    int v65;
    int v66;
  } v47_;
  float v67;
  __int64 v68;

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 != 0) {
      v9 = *(__int64**)a1;
      v10 = v7;
      if (*(_QWORD*)a1 == 0) {
      LABEL_54:
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(v10, v8),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak(v10),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        return;
      }
      v11 = *(_QWORD*)(a1 + 8);
      v46[0] = *(_QWORD*)a1;
      v46[1] = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
        v12 = game_menu_anonymous_1676100((__int64)v46),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v11),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v12 = game_menu_anonymous_1676100((__int64)v46),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v13 = *(_QWORD*)(a1 + 8);
      v45[0] = *(_QWORD*)a1;
      v45[1] = v13;
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        v14 = GameRoutine_1675fe0((__int64)v45),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v13),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v14 = GameRoutine_1675fe0((__int64)v45),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      ui_LayoutAccessor_GetPaneTranslate(v9, "T_Txt"),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v44[1] = v15;
      v44[2] = v16;
      if ((a2 & 1) == 0) {
        LayoutAccessor_1562060(v9, "T_Txt", a3),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v21 = (float)(v12 - v14) * 0x1.0000000000000p-1f;
        if (v14 >= v12) {
          v21 = 0x0.0p+0f;
        }
        goto LABEL_38;
      }
      v44[0] = 0x0.0p+0f;
      if (v14 >= v12) {
      LABEL_39:
        ui_LayoutAccessor_SetPaneTranslate(v9, "T_Txt", (__int64)v44),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v32 = ui_LayoutAccessor_GetPaneTranslate(v9, "T_Txt2"),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v47_.v47 = __PAIR64__(v33, LODWORD(v32));
        v34 = *(_QWORD*)(a1 + 8);
        LODWORD(v47_.v48) = v35;
        if (v14 >= v12) {
          v36 = v14;
        }
        else {
          v36 = v12;
        }
        v37 = v36 + v44[0];
        if (v34 != 0) {
          v38 = *(__int64**)a1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                    memory_order_relaxed);
          v39 = std___1___shared_weak_count_lock(v34),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v39 == 0) {
            goto LABEL_51;
          }
          v40 = v39;
          if (v38 != nullptr) {
            v41 = ui_LayoutAccessor_FindPane(v38, "T_Txt"),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v42 = Pane_58fac0(v41, "ScrollTextMargin"),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
            v43 = (float)*(int*)&v42[*((unsigned int*)v42 + 1)];
          }
          else {
            v43 = 0x0.0p+0f;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v40),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (v38 == nullptr) {
          LABEL_51:
            v43 = 0x1.4000000000000p+6f;
          }
          *(float*)&v47_.v47 = v37 + v43;
          std___1___shared_weak_count___release_weak(v34),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          *(float*)&v47_.v47 = v37 + 0x1.4000000000000p+6f;
        }
        *(float*)&v8 = ui_LayoutAccessor_SetPaneTranslate(v9, "T_Txt2",
                                                          (__int64)&v47_.v47),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_54;
      }
      v17 = ui_LayoutAccessor_FindPane(v9, "T_FitTxt"),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v17 != 0) {
        v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (a3 != nullptr) {
          goto LABEL_14;
        }
      }
      else {
        v18 = 0;
        if (a3 != nullptr) {
        LABEL_14:
          v47_.v54 = -1;
          v47_.v55 = -1;
          v47_.v56 = -1;
          v47_.v57 = -1;
          v47_.v58 = -1;
          v47_.v59 = -1;
          v47_.v60 = -1;
          v47_.v61 = -1;
          v47_.v62 = -1;
          v47_.v63 = -1;
          v47_.v64 = -1;
          v47_.v47 = (unsigned __int64)(GameData_212e348 + 2);
          v47_.v48 = 0xFFFF0001FFFF0000LL;
          v47_.v49 = (char*)0xFFFF0004FFFF0002LL;
          v47_.v50 = 0xFFFF0006FFFF0005LL;
          v47_.v51 = 0xFFFF0008FFFF0007LL;
          v47_.v53 = -1;
          v47_.v65 = 9;
          v47_.v66 = 0;
          v47_.v52 = 3;
          v19 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], a3, 0),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
          GameRoutine_156cb80((void*)((__int64*)&v47_.v47), v18, (__int64)v19),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v47_.v47 & 1) != 0) {
            v20 = v47_.v49;
            if (v47_.v49 == nullptr) {
            LABEL_24:
              if ((v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
                v23 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v23 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                    (__int64)v47_.v49),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v33 = COERCE_AS(__typeof__(v33),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v24 = ui_LayoutAccessor_FindTextBox(v9, "T_Txt"),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (v24 != 0) {
                v25 = v24;
                v26 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v9, "T_Txt"),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
                if (v26 != nullptr) {
                  GameRoutine_190a0c0((float*)&v47_.v47, (__int64)&v68, &v67,
                                      v26, v26[27]),
                      v15 = COERCE_AS(__typeof__(v15),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v16 = COERCE_AS(__typeof__(v16),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v33 = COERCE_AS(__typeof__(v33),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
                  v27 = v68;
                }
                else {
                  v27 = 0;
                }
                v28 = *(_BYTE*)(v25 + 88);
                *(_QWORD*)(v25 + 80) = v27;
                *(_BYTE*)(v25 + 88) = v28 | 0x10;
              }
              v29 = ui_LayoutAccessor_FindPane(v9, "T_Txt"),
              v15 = COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
              v30 = 0x0.0p+0f;
              LOBYTE(v67) = 0;
              v47_.v47 = 0xFF7FFFFF7F7FFFFFLL;
              v68 = 0x7F7FFFFFFF7FFFFFLL;
              if (v29 != 0) {
                v31 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v29 + 128),
                                            *(float32x4_t*)(v29 + 128)))
                          .n128_u64[0];
                GameRoutine_156bee0(
                    v29, (__int64)&v47_.v47, (__int64)&v68, (__int64)&v67, 0,
                    sqrtf(
                        (float)(*(float*)&v31 +
                                (float)(COERCE_FLOAT(*(_OWORD*)(v29 + 112)) *
                                        COERCE_FLOAT(*(_OWORD*)(v29 + 112)))) +
                        (float)(COERCE_FLOAT(*(_OWORD*)(v29 + 144)) *
                                COERCE_FLOAT(*(_OWORD*)(v29 + 144)))) /
                        *(float*)(v29 + 72),
                    sqrtf(
                        (float)(*((float*)&v31 + 1) +
                                (float)(COERCE_FLOAT(
                                            HIDWORD(*(_QWORD*)(v29 + 112))) *
                                        COERCE_FLOAT(
                                            HIDWORD(*(_QWORD*)(v29 + 112))))) +
                        (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v29 + 144))) *
                                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v29 + 144))))) /
                        *(float*)(v29 + 76)),
                    v15 = COERCE_AS(__typeof__(v15),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v16 = COERCE_AS(__typeof__(v16),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v33 = COERCE_AS(__typeof__(v33),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                if (LOBYTE(v67) == 1) {
                  v30 = vabds_f32(*(float*)&v68, *(float*)&v47_.v47);
                }
              }
              v21 = (float)(v30 - v14) * 0x1.0000000000000p-1f;
            LABEL_38:
              v44[0] = v21;
              goto LABEL_39;
            }
          }
          else {
            v20 = (char*)&v47_.v47 + 1;
          }
        LABEL_22:
          v22 = ui_LayoutAccessor_FindTextBox(v9, "T_Txt"),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v22 != 0) {
            GameRoutine_156c5d0(v22, (__int64)v20, 0),
                v15 = COERCE_AS(__typeof__(v15),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          goto LABEL_24;
        }
      }
      v47_.v48 = 0;
      v47_.v49 = nullptr;
      v47_.v47 = 0;
      v20 = (char*)&v47_.v47 + 1;
      goto LABEL_22;
    }
  }
}

__int64 game_menu_anonymous_16a8a70(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  _BYTE* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  __int64 v16;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
  } v17_;
  struct {
    _BYTE v19[32];
    _BYTE* v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  const char* v23;

  v4 = GameData_2260e80;
  if (GameData_2260e80 != 0) {
    *(_BYTE*)(GameData_2260e80 + 216) = 1;
    GameRoutine_16a75e0(v4);
  }
  v5 = *(_QWORD*)(a2 + 32);
  if (v5 == 0) {
    v19_.v20 = nullptr;
    v23 = "MID_Save_Save_Result";
  LABEL_11:
    v17_.v18 = nullptr;
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v8[6] = 0;
    *v8 = GameData_2088c70;
    goto LABEL_18;
  }
  if (v5 == a2) {
    v19_.v20 = v19_.v19;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v19_.v19);
    v6 = v19_.v20;
  }
  else {
    v6 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    v19_.v20 = v6;
  }
  v23 = "MID_Save_Save_Result";
  if (v6 == nullptr) {
    goto LABEL_11;
  }
  if (v6 == v19_.v19) {
    v17_.v18 = v17_.v17;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v17_.v17);
    v7 = v17_.v18;
  }
  else {
    v7 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v6 + 16LL))(v6);
    v17_.v18 = v7;
  }
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v8 = v9;
  *v9 = GameData_2088c70;
  v10 = v9 + 2;
  if (v7 != nullptr) {
    if (v7 == v17_.v17) {
      v9[6] = v10;
      (*(void (**)(_BYTE*))(*(_QWORD*)v7 + 24LL))(v7);
    }
    else {
      v9[6] = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v7 + 16LL))(v7, v10);
    }
  }
  else {
    v9[6] = 0;
  }
LABEL_18:
  v11 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, &v23);
  if (v11 != 0) {
    v21_.v22 = (_QWORD*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8);
    GameRoutine_6680e0(v21_.v21, (_QWORD*)(v11 + 1248));
    if (v21_.v22 == v21_.v21) {
      v12 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
        goto LABEL_24;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v21_.v22 + v12))((__int64)v21_.v22);
  }
LABEL_24:
  (*(void (**)(_QWORD*))(*v8 + 40LL))(v8);
  if (v17_.v18 == v17_.v17) {
    v13 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_29;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17_.v18 + v13))((__int64)v17_.v18);
LABEL_29:
  if (v11 != 0) {
    v14 = *(_DWORD*)(v11 + 356);
    *(_DWORD*)(v11 + 372) = 0;
    *(_DWORD*)(v11 + 356) = v14 | 1;
    *(_QWORD*)(v11 + 364) = 0xC35C000000000000LL;
    *(_BYTE*)(v11 + 1301) = 1;
  }
  GameRoutine_16497b0(v11, "SE_SYS_Dialog_Send");
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v16 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v19_.v20 + v16))(
      (__int64)v19_.v20);
}

__int64* game_menu_anonymous_1716080(__int64* result, __int64 a2, char a3)
{
  unsigned int v3;
  __int64* v4;
  unsigned __int64 v7;
  int i;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64* v12;
  const char* v13;
  unsigned int* v14;
  char* v15;
  unsigned __int64 j;
  __int64* v17;
  char* v18;
  __int64 v19;
  __int64* v20;
  const char* v21;
  unsigned int* v22;
  char* v23;
  unsigned __int64 k;
  __int64* v25;
  char* v26;
  __int64 v27;
  __int64* v28;
  const char* v29;
  unsigned int* v30;
  char* v31;
  __int64 v32;
  char* v33;
  struct {
    __int64* v34;
    __int64* v35;
  } v34_;

  v3 = *(unsigned __int16*)(a2 + 120);
  v4 = result;
  if (*(_WORD*)(a2 + 120) == 0) {
    for (i = 0; i != 3; ++i) {
    LABEL_127:
      v32 = *v4;
      v33 = game_util_Format("L_Return%02d", i);
      result = (__int64*)ui_LayoutAccessor_SetPaneVisible(v32, v33, 0);
    }
    return result;
  }
  v7 = 0;
  i = 0;
  do {
    if (*(_BYTE*)(*(_QWORD*)(a2 + 128) + v7) != 3) {
      goto LABEL_4;
    }
    if (i > 2) {
      break;
    }
    v9 = (__int64*)*v4;
    v10 = game_util_Format("L_Return%02d", i);
    LayoutAccessor_1560070((void*)(&v34_.v34), v9, v10);
    result = v34_.v35;
    if (v34_.v35 != nullptr) {
      v11 = std___1___shared_weak_count_lock((__int64)v34_.v35);
      v12 = v34_.v34;
      result = v34_.v35;
      if (v34_.v35 != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(
            (__int64)v34_.v35);
      }
      if (v11 != 0 && v12 != nullptr) {
        LayoutAccessor_155e830((__int64)v12, 1);
        ui_LayoutAccessor_SetPaneVisible((__int64)v12, "T_Txt", a3 & 1);
        if ((a3 & 1) != 0) {
          if ((unsigned __int8)v7 <= 2u) {
            if ((_BYTE)v7 != 0) {
              if ((unsigned __int8)v7 == 1) {
                if (game_GameModeData_instance_ != 0) {
                  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                    v13 = "MID_Sys_HonorExp_Part3";
                  }
                  else {
                    v13 = "MID_Sys_HonorExp";
                  }
                }
                else {
                  v13 = "MID_Sys_HonorExp";
                }
              }
              else {
                v13 = "MID_Sys_Gold";
              }
            }
            else {
              v13 = "MID_Sys_Exp";
            }
          }
          else if ((unsigned __int8)v7 > 4u) {
            if ((unsigned __int8)v7 == 5) {
              v13 = "MID_Sys_Contribution";
            }
            else if ((unsigned __int8)v7 == 6) {
              v13 = "MID_Sys_ForcePower";
            }
            else {
              v13 = nullptr;
            }
          }
          else if ((unsigned __int8)v7 == 3) {
            v13 = "MID_Sys_ReliancePt";
          }
          else {
            v13 = "MID_Sys_ItemEtc";
          }
          LayoutAccessor_1562060(v12, "T_Txt", v13);
        }
        v14 = (unsigned int*)game_util_Format(
            "IconUp_%02d",
            (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a2 + 128) +
                                              (unsigned __int8)v7) -
                1);
        GameHr_1562680((__int64)v12, v14, 0x1.0000000000000p+0f);
        result = (__int64*)ui_LayoutAccessor_FindPane(v12, "IconReturn");
        if (result != nullptr) {
          result = (__int64*)__dynamic_cast(result, GameData_212d670[0],
                                            GameData_212d678[0], 0);
          if (result != nullptr) {
            v15 = &GameData_1a9f09e;
            if ((unsigned __int8)v7 <= 6u) {
              v15 = GameData_20ae668[v7 & 7];
            }
            result = (__int64*)Manager_136a920(ui_Manager_instance_ + 1264,
                                               (__int64)result, 0, 7u, v15);
          }
        }
      LABEL_40:
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = (__int64*)std___1___shared_weak_count___release_weak(v11);
        }
        goto LABEL_3;
      }
      if (v11 != 0) {
        goto LABEL_40;
      }
    }
  LABEL_3:
    v3 = *(unsigned __int16*)(a2 + 120);
    ++i;
  LABEL_4:
    ++v7;
  } while (v7 < v3);
  if (v3 != 0) {
    for (j = 0; j < v3; ++j) {
      if (*(_BYTE*)(*(_QWORD*)(a2 + 128) + j) != 2) {
        continue;
      }
      if (i > 2) {
        break;
      }
      v17 = (__int64*)*v4;
      v18 = game_util_Format("L_Return%02d", i);
      LayoutAccessor_1560070((void*)(&v34_.v34), v17, v18);
      result = v34_.v35;
      if (v34_.v35 != nullptr) {
        v19 = std___1___shared_weak_count_lock((__int64)v34_.v35);
        v20 = v34_.v34;
        result = v34_.v35;
        if (v34_.v35 != nullptr) {
          result = (__int64*)std___1___shared_weak_count___release_weak(
              (__int64)v34_.v35);
        }
        if (v19 != 0 && v20 != nullptr) {
          LayoutAccessor_155e830((__int64)v20, 1);
          ui_LayoutAccessor_SetPaneVisible((__int64)v20, "T_Txt", a3 & 1);
          if ((a3 & 1) != 0) {
            if ((unsigned __int8)j <= 2u) {
              if ((_BYTE)j != 0) {
                if ((unsigned __int8)j == 1) {
                  if (game_GameModeData_instance_ != 0) {
                    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                      v21 = "MID_Sys_HonorExp_Part3";
                    }
                    else {
                      v21 = "MID_Sys_HonorExp";
                    }
                  }
                  else {
                    v21 = "MID_Sys_HonorExp";
                  }
                }
                else {
                  v21 = "MID_Sys_Gold";
                }
              }
              else {
                v21 = "MID_Sys_Exp";
              }
            }
            else if ((unsigned __int8)j > 4u) {
              if ((unsigned __int8)j == 5) {
                v21 = "MID_Sys_Contribution";
              }
              else if ((unsigned __int8)j == 6) {
                v21 = "MID_Sys_ForcePower";
              }
              else {
                v21 = nullptr;
              }
            }
            else if ((unsigned __int8)j == 3) {
              v21 = "MID_Sys_ReliancePt";
            }
            else {
              v21 = "MID_Sys_ItemEtc";
            }
            LayoutAccessor_1562060(v20, "T_Txt", v21);
          }
          v22 = (unsigned int*)game_util_Format(
              "IconUp_%02d",
              (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a2 + 128) +
                                                (unsigned __int8)j) -
                  1);
          GameHr_1562680((__int64)v20, v22, 0x1.0000000000000p+0f);
          result = (__int64*)ui_LayoutAccessor_FindPane(v20, "IconReturn");
          if (result != nullptr) {
            result = (__int64*)__dynamic_cast(result, GameData_212d670[0],
                                              GameData_212d678[0], 0);
            if (result != nullptr) {
              v23 = &GameData_1a9f09e;
              if ((unsigned __int8)j <= 6u) {
                v23 = GameData_20ae668[j & 7];
              }
              result = (__int64*)Manager_136a920(ui_Manager_instance_ + 1264,
                                                 (__int64)result, 0, 7u, v23);
            }
          }
        LABEL_81:
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = (__int64*)std___1___shared_weak_count___release_weak(v19);
          }
          goto LABEL_44;
        }
        if (v19 != 0) {
          goto LABEL_81;
        }
      }
    LABEL_44:
      v3 = *(unsigned __int16*)(a2 + 120);
      ++i;
    }
    if (v3 != 0) {
      for (k = 0; k < v3; ++k) {
        if (*(_BYTE*)(*(_QWORD*)(a2 + 128) + k) != 1) {
          continue;
        }
        if (i > 2) {
          return result;
        }
        v25 = (__int64*)*v4;
        v26 = game_util_Format("L_Return%02d", i);
        LayoutAccessor_1560070((void*)(&v34_.v34), v25, v26);
        result = v34_.v35;
        if (v34_.v35 != nullptr) {
          v27 = std___1___shared_weak_count_lock((__int64)v34_.v35);
          v28 = v34_.v34;
          result = v34_.v35;
          if (v34_.v35 != nullptr) {
            result = (__int64*)std___1___shared_weak_count___release_weak(
                (__int64)v34_.v35);
          }
          if (v27 != 0 && v28 != nullptr) {
            LayoutAccessor_155e830((__int64)v28, 1);
            ui_LayoutAccessor_SetPaneVisible((__int64)v28, "T_Txt", a3 & 1);
            if ((a3 & 1) != 0) {
              if ((unsigned __int8)k <= 2u) {
                if ((_BYTE)k != 0) {
                  if ((unsigned __int8)k == 1) {
                    if (game_GameModeData_instance_ != 0) {
                      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                        v29 = "MID_Sys_HonorExp_Part3";
                      }
                      else {
                        v29 = "MID_Sys_HonorExp";
                      }
                    }
                    else {
                      v29 = "MID_Sys_HonorExp";
                    }
                  }
                  else {
                    v29 = "MID_Sys_Gold";
                  }
                }
                else {
                  v29 = "MID_Sys_Exp";
                }
              }
              else if ((unsigned __int8)k > 4u) {
                if ((unsigned __int8)k == 5) {
                  v29 = "MID_Sys_Contribution";
                }
                else if ((unsigned __int8)k == 6) {
                  v29 = "MID_Sys_ForcePower";
                }
                else {
                  v29 = nullptr;
                }
              }
              else if ((unsigned __int8)k == 3) {
                v29 = "MID_Sys_ReliancePt";
              }
              else {
                v29 = "MID_Sys_ItemEtc";
              }
              LayoutAccessor_1562060(v28, "T_Txt", v29);
            }
            v30 = (unsigned int*)game_util_Format(
                "IconUp_%02d",
                (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a2 + 128) +
                                                  (unsigned __int8)k) -
                    1);
            GameHr_1562680((__int64)v28, v30, 0x1.0000000000000p+0f);
            result = (__int64*)ui_LayoutAccessor_FindPane(v28, "IconReturn");
            if (result != nullptr) {
              result = (__int64*)__dynamic_cast(result, GameData_212d670[0],
                                                GameData_212d678[0], 0);
              if (result != nullptr) {
                v31 = &GameData_1a9f09e;
                if ((unsigned __int8)k <= 6u) {
                  v31 = GameData_20ae668[k & 7];
                }
                result = (__int64*)Manager_136a920(ui_Manager_instance_ + 1264,
                                                   (__int64)result, 0, 7u, v31);
              }
            }
          LABEL_122:
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              result =
                  (__int64*)std___1___shared_weak_count___release_weak(v27);
            }
            goto LABEL_85;
          }
          if (v27 != 0) {
            goto LABEL_122;
          }
        }
      LABEL_85:
        v3 = *(unsigned __int16*)(a2 + 120);
        ++i;
      }
    }
  }
  if (i <= 2) {
    goto LABEL_127;
  }
  return result;
}

__int64 game_menu_anonymous_173aaf0(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  unsigned __int64 v23;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 != nullptr) {
        v5 = ui_LayoutAccessor_FindTextBox(*(__int64**)(a1 + 48), "T_Txt");
        if (v5 != 0) {
          v6 = v5;
          v7 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v7 != nullptr) {
            GameRoutine_190a0c0((float*)&v23, (__int64)&v22, &v21, v7, v7[27]);
            v8 = v22;
          }
          else {
            v8 = 0;
          }
          v9 = *(_BYTE*)(v6 + 88);
          *(_QWORD*)(v6 + 80) = v8;
          *(_BYTE*)(v6 + 88) = v9 | 0x10;
        }
        if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1) & 1) != 0) {
          v10 = "Next_On";
        }
        else {
          v10 = "Next_Off";
        }
        LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)v10);
        v11 = ui_LayoutAccessor_FindAlignment(v3, "A_Contents");
        if (v11 != 0) {
          Alignment_56b600(v11);
          v12 = v3[1];
          if (v12 != 0) {
            v13 = std___1___shared_weak_count_lock(v12);
            if (v13 != 0) {
              v14 = v13;
              if (*v3 != 0) {
                ControlCreator_13633c0(*v3);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                std___1___shared_weak_count___release_weak(v14);
              }
            }
          }
        }
        v15 = ui_LayoutAccessor_FindPane(v3, "A_Contents");
        v16 = 0x0.0p+0f;
        LOBYTE(v21) = 0;
        v23 = 0xFF7FFFFF7F7FFFFFLL;
        v22 = 0x7F7FFFFFFF7FFFFFLL;
        if (v15 != 0) {
          v17 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v15 + 128),
                                      *(float32x4_t*)(v15 + 128)))
                    .n128_u64[0];
          GameRoutine_156bee0(
              v15, (__int64)&v23, (__int64)&v22, (__int64)&v21, 0,
              sqrtf((float)(*(float*)&v17 +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v15 + 112)) *
                                    COERCE_FLOAT(*(_OWORD*)(v15 + 112)))) +
                    (float)(COERCE_FLOAT(*(_OWORD*)(v15 + 144)) *
                            COERCE_FLOAT(*(_OWORD*)(v15 + 144)))) /
                  *(float*)(v15 + 72),
              sqrtf(
                  (float)(*((float*)&v17 + 1) +
                          (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 112))) *
                                  COERCE_FLOAT(
                                      HIDWORD(*(_QWORD*)(v15 + 112))))) +
                  (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 144))) *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 144))))) /
                  *(float*)(v15 + 76));
          if (LOBYTE(v21) == 1) {
            v16 = vabds_f32(*(float*)&v22, *(float*)&v23);
          }
        }
        v18 = 0x1.1000000000000p+9f;
        if (v16 <= 0x1.1000000000000p+9f) {
          v18 = v16;
        }
        v19 = (float)(v18 + -0x1.1800000000000p+5f) / 0x1.fd00000000000p+8f;
        GameHr_1562680((__int64)v3, (unsigned int*)"Bg", 0x0.0p+0f);
        v20 = v19 * 0x1.9000000000000p+6f;
        if (v16 < 0x1.1800000000000p+5f) {
          v20 = 0x0.0p+0f;
        }
        LayoutAccessor_15636c0((__int64)v3, (__int64)"Bg", 0, v20);
        result = LayoutAccessor_1563030((__int64)v3, (unsigned int*)"Bg", 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

void game_menu_anonymous_17a3890(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  bool v48;
  int v49;
  float v50;
  float v51;
  int v52;
  int v53;
  float v54;
  float v55;
  int v56;
  int v57;
  float v58;
  float v59;
  int v60;
  int v61;
  float v62;
  float v63;
  int v64;
  float v65;
  __int64 v66;
  __int64 v67;

  if (a3 == 0) {
    return;
  }
  v4 = *(_QWORD*)(a2 + 8);
  if (v4 == 0) {
    v7 = 0;
    goto LABEL_6;
  }
  v7 = std___1___shared_weak_count_lock(v4);
  if (v7 == 0) {
  LABEL_6:
    v8 = nullptr;
    goto LABEL_7;
  }
  v8 = *(__int64**)a2;
LABEL_7:
  v9 = GameData_212c878[0];
  if (*(_WORD*)(a3 + 1952) != 0) {
    if ((unsigned int)*(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL *
                                             *(unsigned __int16*)(a3 + 1952)) +
                              72LL) -
            5 >=
        2) {
      v10 = 1;
    }
    else {
      v10 = 2;
    }
  }
  else {
    v10 = 0;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  *(_QWORD*)v12 = 0x100000000FLL;
  *(_QWORD*)(v12 + 8) = 0xE0000000CLL;
  *(_QWORD*)(v12 + 16) = 0xA0000000DLL;
  *(_DWORD*)(v12 + 24) = 11;
  *(_DWORD*)(v12 + 28) = v10;
  v13 = game_util_Format("Icon%02d", 0);
  v14 = ui_LayoutAccessor_FindPane(v8, v13);
  if (v14 != 0) {
    v15 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
    if (v15 != 0) {
      GameRoutine_1841000(v15, 15);
    }
  }
  v16 = *(_DWORD*)(v12 + 4);
  v17 = game_util_Format("Icon%02d", 1);
  v18 = ui_LayoutAccessor_FindPane(v8, v17);
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
    if (v19 != 0) {
      GameRoutine_1841000(v19, v16);
    }
  }
  v20 = *(_DWORD*)(v12 + 8);
  v21 = game_util_Format("Icon%02d", 2);
  v22 = ui_LayoutAccessor_FindPane(v8, v21);
  if (v22 != 0) {
    v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    if (v23 != 0) {
      GameRoutine_1841000(v23, v20);
    }
  }
  v24 = *(_DWORD*)(v12 + 12);
  v25 = game_util_Format("Icon%02d", 3);
  v26 = ui_LayoutAccessor_FindPane(v8, v25);
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
    if (v27 != 0) {
      GameRoutine_1841000(v27, v24);
    }
  }
  v28 = *(_DWORD*)(v12 + 16);
  v29 = game_util_Format("Icon%02d", 4);
  v30 = ui_LayoutAccessor_FindPane(v8, v29);
  if (v30 != 0) {
    v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0);
    if (v31 != 0) {
      GameRoutine_1841000(v31, v28);
    }
  }
  v32 = *(_DWORD*)(v12 + 20);
  v33 = game_util_Format("Icon%02d", 5);
  v34 = ui_LayoutAccessor_FindPane(v8, v33);
  if (v34 != 0) {
    v35 = __dynamic_cast(v34, GameData_212d670[0], GameData_212d678[0], 0);
    if (v35 != 0) {
      GameRoutine_1841000(v35, v32);
    }
  }
  v36 = *(_DWORD*)(v12 + 24);
  v37 = game_util_Format("Icon%02d", 6);
  v38 = ui_LayoutAccessor_FindPane(v8, v37);
  if (v38 != 0) {
    v39 = __dynamic_cast(v38, GameData_212d670[0], GameData_212d678[0], 0);
    if (v39 != 0) {
      GameRoutine_1841000(v39, v36);
    }
  }
  v40 = *(_DWORD*)(v12 + 28);
  v41 = game_util_Format("Icon%02d", 7);
  v42 = ui_LayoutAccessor_FindPane(v8, v41);
  if (v42 != 0) {
    v43 = __dynamic_cast(v42, GameData_212d670[0], GameData_212d678[0], 0);
    if (v43 != 0) {
      GameRoutine_1841000(v43, v40);
    }
  }
  v44 = 0x0.0p+0f;
  *(_DWORD*)(a1 + 8) = 1120272384;
  *(_DWORD*)(a1 + 16) = 1120272384;
  *(_DWORD*)(a1 + 24) = 1120272384;
  *(_DWORD*)(a1 + 32) = 1120272384;
  *(_DWORD*)(a1 + 40) = 1120272384;
  *(_DWORD*)(a1 + 48) = 1127088128;
  *(_DWORD*)(a1 + 56) = 1120272384;
  *(_DWORD*)(a1 + 64) = 1120272384;
  if (*(_WORD*)(a3 + 1952) != 0) {
    v45 = *(_QWORD*)(a3 + 1952);
  }
  else {
    LODWORD(v45) = 0;
  }
  v46 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (unsigned __int16)v45);
  if (*(unsigned __int8*)(v46 + 72) <= 7u && *(_BYTE*)(v46 + 73) == 1) {
    v48 = game_6ed370(v46);
    v44 = (float)(unsigned int)game_Unit_GetAttack(
        a3, v48,
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                       8LL * (unsigned __int16)v45) +
                            88LL) >>
            ((v45 & 0x8000000) != 0),
        1, 1);
  }
  *(float*)(a1 + 60) = v44;
  *(float*)(a1 + 52) = (float)(unsigned int)UnitDerivedParams_6deeb0(a3, 1);
  *(float*)(a1 + 44) = (float)(unsigned int)game_Unit_GetUnknown4(a3, 1);
  *(float*)(a1 + 36) = (float)(unsigned int)game_Unit_GetUnknown6(a3, 1);
  v49 = game_Unit_GetParam(a3) + *(__int16*)(a3 + 630);
  if (*(_WORD*)(a3 + 1952) != 0) {
    v49 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                  8LL * *(unsigned __int16*)(a3 + 1952)) +
                       112LL);
  }
  v50 = *(float*)(a3 + 664);
  if (v50 <= 0x1.0000000000000p+0f) {
    v51 = v50 * (float)(v49 + *(__int16*)(a3 + 660));
  }
  else {
    v51 = (float)*(__int16*)(a3 + 660) + (float)((float)v49 * v50);
  }
  v52 = (int)v51;
  if ((int)v51 >= 999) {
    v52 = 999;
  }
  *(float*)(a1 + 4) =
      (float)((v52 + *(__int16*)(a3 + 662)) &
              (unsigned int)~((v52 + *(__int16*)(a3 + 662)) >> 31));
  v53 = game_Unit_GetParam(a3) + *(__int16*)(a3 + 632);
  if (*(_WORD*)(a3 + 1952) != 0) {
    v53 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                  8LL * *(unsigned __int16*)(a3 + 1952)) +
                       114LL);
  }
  v54 = *(float*)(a3 + 672);
  if (v54 <= 0x1.0000000000000p+0f) {
    v55 = v54 * (float)(v53 + *(__int16*)(a3 + 668));
  }
  else {
    v55 = (float)*(__int16*)(a3 + 668) + (float)((float)v53 * v54);
  }
  v56 = (int)v55;
  if ((int)v55 >= 999) {
    v56 = 999;
  }
  *(float*)(a1 + 12) =
      (float)((v56 + *(__int16*)(a3 + 670)) &
              (unsigned int)~((v56 + *(__int16*)(a3 + 670)) >> 31));
  v57 = UnitDerivedParams_6deeb0(a3, 1) + *(__int16*)(a3 + 636);
  if (*(_WORD*)(a3 + 1952) != 0) {
    v57 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                  8LL * *(unsigned __int16*)(a3 + 1952)) +
                       118LL);
  }
  v58 = *(float*)(a3 + 688);
  if (v58 <= 0x1.0000000000000p+0f) {
    v59 = v58 * (float)(v57 + *(__int16*)(a3 + 684));
  }
  else {
    v59 = (float)*(__int16*)(a3 + 684) + (float)((float)v57 * v58);
  }
  v60 = (int)v59;
  if ((int)v59 >= 999) {
    v60 = 999;
  }
  *(float*)(a1 + 20) =
      (float)((v60 + *(__int16*)(a3 + 686)) &
              (unsigned int)~((v60 + *(__int16*)(a3 + 686)) >> 31));
  v61 = game_Unit_GetParam(a3) + *(__int16*)(a3 + 640);
  if (*(_WORD*)(a3 + 1952) != 0) {
    v61 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                  8LL * *(unsigned __int16*)(a3 + 1952)) +
                       122LL);
  }
  v62 = *(float*)(a3 + 704);
  if (v62 <= 0x1.0000000000000p+0f) {
    v63 = v62 * (float)(v61 + *(__int16*)(a3 + 700));
  }
  else {
    v63 = (float)*(__int16*)(a3 + 700) + (float)((float)v61 * v62);
  }
  v64 = (int)v63;
  if ((int)v63 >= 999) {
    v64 = 999;
  }
  v65 = (float)((v64 + *(__int16*)(a3 + 702)) &
                (unsigned int)~((v64 + *(__int16*)(a3 + 702)) >> 31));
  v66 = *v11;
  *(float*)(a1 + 28) = v65;
  v67 = 128;
  if (*(_QWORD*)(v66 + 200) == 0) {
    v67 = 56;
  }
  nn_mem_StandardAllocator_Free(v66 + v67, v12);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
}

__int64 game_menu_anonymous_17aed00(__int64 result, __int64* a2,
                                    __int64 (**a3)(__int64*, __int64*),
                                    __int64 a4, char a5)
{
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(__int64*, __int64*);
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  bool v30;
  bool v31;
  __int64 v32;
  __int64 (*v33)(__int64*, __int64*);
  __int64 v34;
  __int64 (*v35)(__int64*, __int64*);
  __int64 v36;
  unsigned __int64 v37;
  __int64 (*v38)(__int64*, __int64*);
  __int64 v39;
  __int64* v40;
  __int64 (*v41)(__int64*, __int64*);
  __int64 v42;
  __int64 v43;
  __int64 (*v44)(__int64*, __int64*);
  __int64 v45;
  __int64 (*v46)(__int64*, __int64*);
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 (*v50)(__int64*, __int64*);
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 (*v59)(__int64*, __int64*);
  __int64 v60;
  __int64 v61;
  __int64 (*v62)(__int64*, __int64*);
  __int64 v63;
  signed __int64 v64;
  signed __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 (*v69)(__int64*, __int64*);
  __int64 v70;
  char v71;
  __int64 v72;
  __int64* v73;
  __int64 (*v74)(__int64*, __int64*);
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 (*v82)(__int64*, __int64*);
  __int64 v83;
  bool v84;
  __int64* v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 (*v89)(__int64*, __int64*);
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 (*v99)(__int64*, __int64*);
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 (*v109)(__int64*, __int64*);
  __int64 v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  __int64 (*v114)(__int64*, __int64*);
  __int64 v115;
  __int64* v116;
  __int64* v117;
  __int64* v118;
  signed __int64 v119;
  __int64 v120;
  struct {
    __int64 v121;
    __int16 v122;
    char v123;
    char gap35_[1];
    int v124;
    char v125;
  } v121_;
  struct {
    __int64 v126;
    __int16 v127;
    char v128;
    char gap59_[1];
    int v129;
    char v130;
  } v126_;
  struct {
    __int64 v131;
    __int16 v132;
    char v133;
    char gap83_[1];
    int v134;
    char v135;
  } v131_;
  struct {
    __int64 v136;
    __int16 v137;
    char v138;
    char gap107_[1];
    int v139;
    char v140;
  } v136_;
  struct {
    __int64 v141;
    __int16 v142;
    char v143;
    char gap131_[1];
    int v144;
    char v145;
  } v141_;
  struct {
    __int64 v146;
    __int16 v147;
    char v148;
    char gap155_[1];
    int v149;
    char v150;
  } v146_;
  struct {
    __int64 v151;
    __int16 v152;
    char v153;
    char gap179_[1];
    int v154;
    char v155;
  } v151_;
  struct {
    __int64 v156;
    __int16 v157;
    char v158;
    char gap203_[1];
    int v159;
    char v160;
  } v156_;
  struct {
    __int64 v161;
    __int16 v162;
    char v163;
    char gap227_[1];
    int v164;
    char v165;
  } v161_;
  struct {
    __int64 v166;
    __int16 v167;
    char v168;
    char gap251_[1];
    int v169;
    char v170;
  } v166_;
  struct {
    __int64 v171;
    __int16 v172;
    char v173;
    char gap275_[1];
    int v174;
    char v175;
  } v171_;
  struct {
    __int64 v176;
    __int16 v177;
    char v178;
    char gap299_[1];
    int v179;
    char v180;
  } v176_;
  struct {
    __int64 v181;
    __int16 v182;
    char v183;
    char gap323_[1];
    int v184;
    char v185;
  } v181_;
  struct {
    __int64 v186;
    __int16 v187;
    char v188;
    char gap347_[1];
    int v189;
    char v190;
  } v186_;

  v9 = (__int64*)result;
  while (2) {
    v10 = a2 - 1;
    v11 = v9;
    v117 = a2;
    v118 = a2 - 2;
    v116 = a2 - 3;
    while (1) {
      while (1) {
        while (1) {
          v9 = v11;
          v12 = a2 - v11;
          if (v12 > 2) {
            switch (v12) {
            case 3LL:
              return GameHr_17af8e0(v11, v11 + 1, v10, a3);
            case 4LL:
              return GameHr_17afac0(v11, v11 + 1, v11 + 2, v10, a3);
            case 5LL:
              return GameHr_17afc10(v11, v11 + 1, v11 + 2, v11 + 3, v10, a3);
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v12 < 2) {
              return result;
            }
            if (v12 == 2) {
              v49 = *(a2 - 1);
              v136_.v137 = 0;
              v136_.v138 = 0;
              v50 = *a3;
              v136_.v139 = 0;
              v136_.v140 = 0;
              v136_.v136 = v49;
              v51 = *v11;
              v131_.v132 = 0;
              v131_.v133 = 0;
              v131_.v134 = 0;
              v131_.v135 = 0;
              v131_.v131 = v51;
              result = v50(&v136_.v136, &v131_.v131);
              if ((result & 1) != 0) {
                v52 = *v11;
                *v11 = *(a2 - 1);
                *(a2 - 1) = v52;
              }
              return result;
            }
          }
          if (v12 <= 23) {
            if ((a5 & 1) != 0) {
              if (v11 != a2) {
                v53 = v11 + 1;
                if (v11 + 1 != a2) {
                  v54 = 0;
                  v55 = v11;
                  do {
                    v57 = v55[1];
                    v186_.v187 = 0;
                    v186_.v188 = 0;
                    v186_.v189 = 0;
                    v186_.v190 = 0;
                    v186_.v186 = v57;
                    v58 = *v55;
                    v55 = v53;
                    v59 = *a3;
                    v181_.v182 = 0;
                    v181_.v183 = 0;
                    v181_.v184 = 0;
                    v181_.v185 = 0;
                    v181_.v181 = v58;
                    result = v59(&v186_.v186, &v181_.v181);
                    if ((result & 1) != 0) {
                      v60 = *v55;
                      v61 = v54;
                      do {
                        *(__int64*)((char*)v11 + v61 + 8) =
                            *(__int64*)((char*)v11 + v61);
                        if (v61 == 0) {
                          v56 = v11;
                          goto LABEL_70;
                        }
                        v176_.v176 = v60;
                        v176_.v177 = 0;
                        v62 = *a3;
                        v176_.v178 = 0;
                        v176_.v179 = 0;
                        v176_.v180 = 0;
                        v63 = *(__int64*)((char*)v11 + v61 - 8);
                        v171_.v172 = 0;
                        v171_.v173 = 0;
                        v171_.v174 = 0;
                        v171_.v175 = 0;
                        v171_.v171 = v63;
                        result = v62(&v176_.v176, &v171_.v171);
                        v61 -= 8;
                      } while ((result & 1) != 0);
                      v56 = (__int64*)((char*)v11 + v61 + 8);
                    LABEL_70:
                      *v56 = v60;
                    }
                    v53 = v55 + 1;
                    v54 += 8;
                  } while (v55 + 1 != a2);
                }
              }
            }
            else if (v11 != a2) {
              while (v9 + 1 != a2) {
                v107 = v9[1];
                v186_.v187 = 0;
                v186_.v188 = 0;
                v186_.v189 = 0;
                v186_.v190 = 0;
                v186_.v186 = v107;
                v108 = *v9++;
                v109 = *a3;
                v181_.v182 = 0;
                v181_.v183 = 0;
                v181_.v184 = 0;
                v181_.v185 = 0;
                v181_.v181 = v108;
                result = v109(&v186_.v186, &v181_.v181);
                if ((result & 1) != 0) {
                  v110 = *v9;
                  v111 = v9;
                  do {
                    v112 = v111;
                    v113 = *--v111;
                    *v112 = v113;
                    v176_.v176 = v110;
                    v176_.v177 = 0;
                    v176_.v178 = 0;
                    v176_.v179 = 0;
                    v176_.v180 = 0;
                    v114 = *a3;
                    v115 = *(v112 - 2);
                    v171_.v172 = 0;
                    v171_.v173 = 0;
                    v171_.v174 = 0;
                    v171_.v175 = 0;
                    v171_.v171 = v115;
                    result = v114(&v176_.v176, &v171_.v171);
                  } while ((result & 1) != 0);
                  *v111 = v110;
                }
              }
            }
            return result;
          }
          if (a4 == 0) {
            if (v11 != a2) {
              v64 = (unsigned __int64)(v12 - 2) >> 1;
              v119 = v64;
              do {
                v65 = v64;
                if (v119 >= v64) {
                  v66 = (2 * (v64 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v67 = &v9[v66];
                  if (2 * v64 + 2 < v12) {
                    v68 = *v67;
                    v186_.v187 = 0;
                    v186_.v188 = 0;
                    v69 = *a3;
                    v186_.v189 = 0;
                    v186_.v190 = 0;
                    v186_.v186 = v68;
                    v70 = v67[1];
                    v181_.v182 = 0;
                    v181_.v183 = 0;
                    v181_.v184 = 0;
                    v181_.v185 = 0;
                    v181_.v181 = v70;
                    v71 = v69(&v186_.v186, &v181_.v181);
                    if ((v71 & 1) != 0) {
                      ++v67;
                    }
                    a2 = v117;
                    if ((v71 & 1) != 0) {
                      v66 = 2 * v65 + 2;
                    }
                  }
                  v72 = *v67;
                  v73 = &v9[v65];
                  v176_.v177 = 0;
                  v176_.v178 = 0;
                  v74 = *a3;
                  v176_.v179 = 0;
                  v176_.v180 = 0;
                  v176_.v176 = v72;
                  v75 = *v73;
                  v171_.v172 = 0;
                  v171_.v173 = 0;
                  v171_.v174 = 0;
                  v171_.v175 = 0;
                  v171_.v171 = v75;
                  result = v74(&v176_.v176, &v171_.v171);
                  if ((result & 1) == 0) {
                    v76 = *v73;
                    do {
                      v78 = v67;
                      *v73 = *v67;
                      if (v119 < v66) {
                        break;
                      }
                      v79 = (2 * v66) | 1;
                      v80 = 2 * v66 + 2;
                      v67 = &v9[v79];
                      if (v80 < v12) {
                        v81 = *v67;
                        v166_.v167 = 0;
                        v166_.v168 = 0;
                        v82 = *a3;
                        v166_.v169 = 0;
                        v166_.v170 = 0;
                        v166_.v166 = v81;
                        v83 = v67[1];
                        v161_.v162 = 0;
                        v161_.v163 = 0;
                        v161_.v164 = 0;
                        v161_.v165 = 0;
                        v161_.v161 = v83;
                        if ((v82(&v166_.v166, &v161_.v161) & 1) != 0) {
                          ++v67;
                          v79 = v80;
                        }
                      }
                      v77 = *v67;
                      v156_.v157 = 0;
                      v156_.v158 = 0;
                      v156_.v159 = 0;
                      v156_.v160 = 0;
                      v151_.v151 = v76;
                      v151_.v152 = 0;
                      v151_.v153 = 0;
                      v151_.v154 = 0;
                      v151_.v155 = 0;
                      v156_.v156 = v77;
                      result = (*a3)(&v156_.v156, &v151_.v151);
                      v73 = v78;
                      v66 = v79;
                    } while ((result & 1) == 0);
                    a2 = v117;
                    *v78 = v76;
                  }
                }
                v64 = v65 - 1;
              } while (v65 != 0);
              do {
                v85 = a2;
                v86 = 0;
                v87 = v9;
                v120 = *v9;
                do {
                  v93 = &v87[v86];
                  v94 = (2 * v86) | 1;
                  v92 = v93 + 1;
                  v95 = 2 * v86 + 2;
                  if (v95 < v12) {
                    v88 = v93[1];
                    v186_.v187 = 0;
                    v186_.v188 = 0;
                    v89 = *a3;
                    v186_.v189 = 0;
                    v186_.v190 = 0;
                    v186_.v186 = v88;
                    v91 = v93[2];
                    v90 = v93 + 2;
                    v181_.v182 = 0;
                    v181_.v183 = 0;
                    v181_.v184 = 0;
                    v181_.v185 = 0;
                    v181_.v181 = v91;
                    result = v89(&v186_.v186, &v181_.v181);
                    if ((result & 1) != 0) {
                      v92 = v90;
                      v86 = v95;
                    }
                    else {
                      v86 = v94;
                    }
                  }
                  else {
                    v86 = (2 * v86) | 1;
                  }
                  *v87 = *v92;
                  v87 = v92;
                } while (v86 <= (__int64)((unsigned __int64)(v12 - 2) >> 1));
                a2 = v85 - 1;
                if (v92 == v85 - 1) {
                  *v92 = v120;
                }
                else {
                  *v92 = *a2;
                  *a2 = v120;
                  v96 = ((char*)v92 - (char*)v9 + 8) >> 3;
                  v84 = v96 < 2;
                  v97 = v96 - 2;
                  if (!v84) {
                    v98 = v97 >> 1;
                    v99 = *a3;
                    v100 = &v9[v98];
                    v101 = *v100;
                    v186_.v187 = 0;
                    v186_.v188 = 0;
                    v186_.v189 = 0;
                    v186_.v190 = 0;
                    v186_.v186 = v101;
                    v102 = *v92;
                    v181_.v182 = 0;
                    v181_.v183 = 0;
                    v181_.v184 = 0;
                    v181_.v185 = 0;
                    v181_.v181 = v102;
                    result = v99(&v186_.v186, &v181_.v181);
                    if ((result & 1) != 0) {
                      v103 = a2;
                      v104 = *v92;
                      do {
                        v105 = v100;
                        *v92 = *v100;
                        if (v98 == 0) {
                          break;
                        }
                        v98 = (v98 - 1) >> 1;
                        v100 = &v9[v98];
                        v106 = *v100;
                        v176_.v177 = 0;
                        v176_.v178 = 0;
                        v176_.v179 = 0;
                        v176_.v180 = 0;
                        v171_.v171 = v104;
                        v171_.v172 = 0;
                        v171_.v173 = 0;
                        v171_.v174 = 0;
                        v171_.v175 = 0;
                        v176_.v176 = v106;
                        result = (*a3)(&v176_.v176, &v171_.v171);
                        v92 = v105;
                      } while ((result & 1) != 0);
                      *v105 = v104;
                      a2 = v103;
                    }
                  }
                }
                v84 = (unsigned __int64)v12-- > 2;
              } while (v84);
            }
            return result;
          }
          v13 = &v11[(unsigned __int64)v12 >> 1];
          if ((unsigned __int64)v12 < 0x81) {
            break;
          }
          GameHr_17af8e0(v9, &v9[(unsigned __int64)v12 >> 1], v10, a3);
          GameHr_17af8e0(v9 + 1, v13 - 1, v118, a3);
          GameHr_17af8e0(v9 + 2, v13 + 1, v116, a3);
          GameHr_17af8e0(v13 - 1, &v9[(unsigned __int64)v12 >> 1], v13 + 1, a3);
          v14 = *v9;
          *v9 = *v13;
          *v13 = v14;
          --a4;
          if ((a5 & 1) != 0) {
            goto LABEL_17;
          }
        LABEL_16:
          v15 = *(v9 - 1);
          v126_.v127 = 0;
          v126_.v128 = 0;
          v16 = *a3;
          v126_.v129 = 0;
          v126_.v130 = 0;
          v126_.v126 = v15;
          v17 = *v9;
          v121_.v122 = 0;
          v121_.v123 = 0;
          v121_.v124 = 0;
          v121_.v125 = 0;
          v121_.v121 = v17;
          if ((v16(&v126_.v126, &v121_.v121) & 1) != 0) {
            goto LABEL_17;
          }
          v32 = *v9;
          v186_.v187 = 0;
          v186_.v188 = 0;
          v33 = *a3;
          v186_.v189 = 0;
          v186_.v190 = 0;
          v186_.v186 = v32;
          v34 = *v10;
          v181_.v182 = 0;
          v181_.v183 = 0;
          v181_.v184 = 0;
          v181_.v185 = 0;
          v181_.v181 = v34;
          result = v33(&v186_.v186, &v181_.v181);
          if ((result & 1) != 0) {
            v11 = v9;
            do {
              v176_.v176 = v32;
              v176_.v177 = 0;
              v35 = *a3;
              v176_.v178 = 0;
              v176_.v179 = 0;
              v176_.v180 = 0;
              v36 = v11[1];
              ++v11;
              v171_.v172 = 0;
              v171_.v173 = 0;
              v171_.v174 = 0;
              v171_.v175 = 0;
              v171_.v171 = v36;
              result = v35(&v176_.v176, &v171_.v171);
            } while ((result & 1) == 0);
          }
          else {
            v37 = (unsigned __int64)(v9 + 1);
            do {
              v11 = (__int64*)v37;
              if (v37 >= (unsigned __int64)a2) {
                break;
              }
              v176_.v176 = v32;
              v176_.v177 = 0;
              v38 = *a3;
              v176_.v178 = 0;
              v176_.v179 = 0;
              v176_.v180 = 0;
              v37 += 8LL;
              v39 = *v11;
              v171_.v172 = 0;
              v171_.v173 = 0;
              v171_.v174 = 0;
              v171_.v175 = 0;
              v171_.v171 = v39;
              result = v38(&v176_.v176, &v171_.v171);
            } while ((result & 1) == 0);
          }
          v40 = a2;
          if (v11 < a2) {
            v40 = a2;
            do {
              v166_.v166 = v32;
              v166_.v167 = 0;
              v41 = *a3;
              v166_.v168 = 0;
              v166_.v169 = 0;
              v166_.v170 = 0;
              v42 = *--v40;
              v161_.v162 = 0;
              v161_.v163 = 0;
              v161_.v164 = 0;
              v161_.v165 = 0;
              v161_.v161 = v42;
              result = v41(&v166_.v166, &v161_.v161);
            } while ((result & 1) != 0);
          }
          while (v11 < v40) {
            v43 = *v11;
            *v11 = *v40;
            *v40 = v43;
            do {
              v156_.v156 = v32;
              v156_.v157 = 0;
              v44 = *a3;
              v156_.v158 = 0;
              v156_.v159 = 0;
              v156_.v160 = 0;
              v45 = v11[1];
              ++v11;
              v151_.v152 = 0;
              v151_.v153 = 0;
              v151_.v154 = 0;
              v151_.v155 = 0;
              v151_.v151 = v45;
            } while ((v44(&v156_.v156, &v151_.v151) & 1) == 0);
            do {
              v146_.v146 = v32;
              v146_.v147 = 0;
              v46 = *a3;
              v146_.v148 = 0;
              v146_.v149 = 0;
              v146_.v150 = 0;
              v47 = *--v40;
              v141_.v142 = 0;
              v141_.v143 = 0;
              v141_.v144 = 0;
              v141_.v145 = 0;
              v141_.v141 = v47;
              result = v46(&v146_.v146, &v141_.v141);
            } while ((result & 1) != 0);
          }
          v48 = v11 - 1;
          if (v9 != v11 - 1) {
            *v9 = *v48;
          }
          a5 = 0;
          *v48 = v32;
        }
        GameHr_17af8e0(&v9[(unsigned __int64)v12 >> 1], v9, v10, a3);
        --a4;
        if ((a5 & 1) == 0) {
          goto LABEL_16;
        }
      LABEL_17:
        v18 = *v9;
        v19 = 0;
        do {
          v20 = v9[v19 + 1];
          v186_.v187 = 0;
          v186_.v188 = 0;
          v186_.v189 = 0;
          v186_.v190 = 0;
          v181_.v181 = v18;
          v181_.v182 = 0;
          v181_.v183 = 0;
          v181_.v184 = 0;
          v181_.v185 = 0;
          v186_.v186 = v20;
          ++v19;
        } while (((*a3)(&v186_.v186, &v181_.v181) & 1) != 0);
        v21 = (unsigned __int64)&v9[v19];
        if (v19 == 1) {
          a2 = v117;
          do {
            if (v21 >= (unsigned __int64)a2) {
              break;
            }
            v23 = *--a2;
            v176_.v177 = 0;
            v176_.v178 = 0;
            v176_.v179 = 0;
            v176_.v180 = 0;
            v171_.v171 = v18;
            v171_.v172 = 0;
            v171_.v173 = 0;
            v171_.v174 = 0;
            v171_.v175 = 0;
            v176_.v176 = v23;
          } while (((*a3)(&v176_.v176, &v171_.v171) & 1) == 0);
        }
        else {
          do {
            v22 = *--a2;
            v176_.v177 = 0;
            v176_.v178 = 0;
            v176_.v179 = 0;
            v176_.v180 = 0;
            v171_.v171 = v18;
            v171_.v172 = 0;
            v171_.v173 = 0;
            v171_.v174 = 0;
            v171_.v175 = 0;
            v176_.v176 = v22;
          } while (((*a3)(&v176_.v176, &v171_.v171) & 1) == 0);
        }
        if (v21 >= (unsigned __int64)a2) {
          v29 = (__int64*)(v21 - 8);
          if (v9 == (__int64*)(v21 - 8)) {
            goto LABEL_35;
          }
        LABEL_34:
          *v9 = *v29;
          goto LABEL_35;
        }
        v24 = &v9[v19];
        v25 = a2;
        do {
          v26 = *v24;
          *v24 = *v25;
          *v25 = v26;
          do {
            v27 = v24[1];
            ++v24;
            v166_.v167 = 0;
            v166_.v168 = 0;
            v166_.v169 = 0;
            v166_.v170 = 0;
            v161_.v161 = v18;
            v161_.v162 = 0;
            v161_.v163 = 0;
            v161_.v164 = 0;
            v161_.v165 = 0;
            v166_.v166 = v27;
          } while (((*a3)(&v166_.v166, &v161_.v161) & 1) != 0);
          do {
            v28 = *--v25;
            v156_.v157 = 0;
            v156_.v158 = 0;
            v156_.v159 = 0;
            v156_.v160 = 0;
            v151_.v151 = v18;
            v151_.v152 = 0;
            v151_.v153 = 0;
            v151_.v154 = 0;
            v151_.v155 = 0;
            v156_.v156 = v28;
          } while (((*a3)(&v156_.v156, &v151_.v151) & 1) == 0);
        } while (v24 < v25);
        v29 = v24 - 1;
        if (v9 != v29) {
          goto LABEL_34;
        }
      LABEL_35:
        *v29 = v18;
        v30 = v21 >= (unsigned __int64)a2;
        a2 = v117;
        if (v30) {
          break;
        }
      LABEL_39:
        result = game_menu_anonymous_17aed00((__int64)v9, v29, a3, a4, a5 & 1);
        a5 = 0;
        v11 = v29 + 1;
      }
      v11 = v29 + 1;
      v31 = game_menu_anonymous_17afdc0_alt1(v9, v29, a3);
      result = game_menu_anonymous_17afdc0_alt1(v29 + 1, v117, a3);
      if ((result & 1) != 0) {
        break;
      }
      if (!v31) {
        goto LABEL_39;
      }
    }
    a2 = v29;
    if (!v31) {
      continue;
    }
    return result;
  }
}

bool game_menu_anonymous_17afdc0(__int64* a1, __int64* a2,
                                 __int64 (**a3)(__int64*, __int64*))
{
  __int64 v6;
  __int64 v7;
  __int64 (*v8)(__int64*, __int64*);
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  __int64 (*v16)(__int64*, __int64*);
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (*v20)(__int64*, __int64*);
  __int64 v21;
  struct {
    __int64 v23;
    __int16 v24;
    char v25;
    char gap11_[1];
    int v26;
    char v27;
  } v23_;
  struct {
    __int64 v28;
    __int16 v29;
    char v30;
    char gap35_[1];
    int v31;
    char v32;
  } v28_;
  struct {
    __int64 v33;
    __int16 v34;
    char v35;
    char gap59_[1];
    int v36;
    char v37;
  } v33_;
  struct {
    __int64 v38;
    __int16 v39;
    char v40;
    char gap83_[1];
    int v41;
    char v42;
  } v38_;
  struct {
    __int64 v43;
    __int16 v44;
    char v45;
    char gap107_[1];
    int v46;
    char v47;
  } v43_;
  struct {
    __int64 v48;
    __int16 v49;
    char v50;
    char gap131_[1];
    int v51;
    char v52;
  } v48_;

  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = *(a2 - 1);
        v8 = *a3;
        v48_.v49 = 0;
        v48_.v50 = 0;
        v48_.v51 = 0;
        v48_.v52 = 0;
        v43_.v44 = 0;
        v43_.v45 = 0;
        v43_.v46 = 0;
        v43_.v47 = 0;
        v48_.v48 = v7;
        v43_.v43 = *a1;
        if ((v8(&v48_.v48, &v43_.v43) & 1) != 0) {
          v9 = *a1;
          *a1 = *(a2 - 1);
          *(a2 - 1) = v9;
        }
        return true;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    GameHr_17af8e0(a1, a1 + 1, a2 - 1, a3);
    return true;
  case 4LL:
    GameHr_17afac0(a1, a1 + 1, a1 + 2, a2 - 1, a3);
    return true;
  case 5LL:
    GameHr_17afc10(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  default:
    break;
  }
LABEL_11:
  v10 = a1 + 2;
  GameHr_17af8e0(a1, a1 + 1, a1 + 2, a3);
  v11 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v15 = *v11;
    v38_.v39 = 0;
    v38_.v40 = 0;
    v16 = *a3;
    v38_.v41 = 0;
    v38_.v42 = 0;
    v38_.v38 = v15;
    v17 = *v10;
    v33_.v34 = 0;
    v33_.v35 = 0;
    v33_.v36 = 0;
    v33_.v37 = 0;
    v33_.v33 = v17;
    if ((v16(&v38_.v38, &v33_.v33) & 1) != 0) {
      v18 = *v11;
      v19 = v12;
      do {
        *(__int64*)((char*)a1 + v19 + 24) = *(__int64*)((char*)a1 + v19 + 16);
        if (v19 == -16) {
          v14 = a1;
          goto LABEL_14;
        }
        v20 = *a3;
        v21 = *(__int64*)((char*)a1 + v19 + 8);
        v28_.v28 = v18;
        v28_.v29 = 0;
        v28_.v30 = 0;
        v28_.v31 = 0;
        v28_.v32 = 0;
        v23_.v24 = 0;
        v23_.v25 = 0;
        v23_.v26 = 0;
        v23_.v27 = 0;
        v23_.v23 = v21;
        v19 -= 8;
      } while ((v20(&v28_.v28, &v23_.v23) & 1) != 0);
      v14 = (__int64*)((char*)a1 + v19 + 24);
    LABEL_14:
      ++v13;
      *v14 = v18;
      if (v13 == 8) {
        return v11 + 1 == a2;
      }
    }
    v10 = v11++;
    v12 += 8;
    if (v11 == a2) {
      return true;
    }
  }
}

__int64 game_menu_anonymous_17b0590(int a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;

  v2 = (__int64*)GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v3 + 9) != 1) {
    if (GameData_2203490 != 0) {
      goto LABEL_13;
    }
    goto LABEL_24;
  }
  if (*(_DWORD*)(v3 + 136) == 1 || *GameData_212ea58 != 0) {
    goto LABEL_13;
  }
  if (*(_DWORD*)(v3 + 136) == 1) {
    v14 = 0;
    v12_.v13 = v12_.v12;
    v12_.v12[0] = GameData_2131908[0] + 16;
    v12_.v12[1] = &v14;
    GameRoutine_15b59e0((__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v5 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
        goto LABEL_23;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v12_.v13 + v5))((__int64)v12_.v13);
  LABEL_23:
    if (v14 != 0) {
      goto LABEL_13;
    }
  }
LABEL_24:
  v14 = 0;
  v12_.v13 = v12_.v12;
  v12_.v12[0] = GameData_2131910[0] + 16;
  v12_.v12[1] = &v14;
  GameRoutine_15b5f20((__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_28;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_28:
    (*(void (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
  }
  if (v14 == 0 && (game_facility_g_unknown_2259368 & 1) == 0) {
    goto LABEL_41;
  }
LABEL_13:
  if ((unsigned int)(a1 - 7) >= 2) {
    v7 = *v2;
    if (*v2 == 0 || *(_BYTE*)(v7 + 9) != 1 || *(_DWORD*)(v7 + 136) != 1) {
    LABEL_35:
      v14 = 0;
      v12_.v13 = v12_.v12;
      v12_.v12[0] = GameData_2131910[0] + 16;
      v12_.v12[1] = &v14;
      GameRoutine_15b5f20((__int64)v12_.v12);
      if (v12_.v13 == v12_.v12) {
        v10 = 32;
      }
      else {
        if (v12_.v13 == nullptr) {
          goto LABEL_40;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v12_.v13 + v10))((__int64)v12_.v13);
    LABEL_40:
      if (v14 == 0) {
        v6 = ((unsigned int)(a1 - 4) < 3) | game_facility_g_unknown_2259368;
        return v6 & 1;
      }
      goto LABEL_41;
    }
    v14 = 0;
    v12_.v13 = v12_.v12;
    v12_.v12[0] = GameData_2131908[0] + 16;
    v12_.v12[1] = &v14;
    GameRoutine_15b59e0((__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v8 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
        goto LABEL_34;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
  LABEL_34:
    if (v14 == 0) {
      goto LABEL_35;
    }
  LABEL_41:
    v6 = 1;
    return v6 & 1;
  }
  v6 = 0;
  return v6 & 1;
}

__int64 game_menu_anonymous_1846100(__int64 a1, __int64* a2, char a3)
{
  const char* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;

  if ((a3 & 1) != 0) {
    v6 = "T_Txt";
  }
  else {
    v6 = "T_Title";
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
  }
  else {
    v7 = a1 + 17;
  }
  LayoutAccessor_1562060_alt1((__int64)a2, (__int64)v6, v7);
  v8 = LayoutAccessor_155fbe0(a2, "L_IconQuest");
  v9 = v8;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    LayoutAccessor_1562cf0_alt1((__int64)v8, "Status_Default");
    v10 = "Enable";
  }
  else {
    LayoutAccessor_1562cf0_alt1((__int64)v8, "Status_Complete");
    if ((a3 & 1) != 0) {
      v10 = "Disable";
    }
    else {
      v10 = "Enable";
    }
  }
  LayoutAccessor_1562cf0_alt1((__int64)v9, v10);
  v11 = ui_LayoutAccessor_FindPane_alt1(v9, (__int64)"IconQuest");
  if (v11 != 0) {
    v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    if (v12 != 0) {
      v13 = v12;
      v14 = game_util_Format("IconQuest_%s", "Main");
      Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v14);
    }
  }
  LayoutAccessor_155e830((__int64)v9, 1);
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)a2, (__int64)"IconQuestKind",
                                        0);
  return LayoutAccessor_155ea30(v9);
}

bool game_menu_anonymous_184ef30(unsigned int a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  int v12;

  v12 = 0;
  v10_.v10[0] = GameData_20e8740;
  v10_.v10[1] = &v12;
  v10_.v11 = v10_.v10;
  RelianceSelectMenu_184dea0(a1, 1, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v10_.v11 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v10_.v11 + v2))((__int64)v10_.v11);
  }
  v3 = game_820d50(3);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_12;
  }
  v4 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v3);
  if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
    return v12 > (a1 != 0);
  }
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15) != 9;
    if (a1 > 1) {
      return v12 > (a1 != 0);
    }
  }
  else {
  LABEL_12:
    v5 = true;
    if (a1 > 1) {
      return v12 > (a1 != 0);
    }
  }
  if (v5) {
    v8_.v8[0] = GameData_20e87c0;
    v8_.v8[1] = &v12;
    v8_.v9 = v8_.v8;
    RelianceUnitSelectMenu_184e860((__int64)v8_.v8);
    if (v8_.v9 == v8_.v8) {
      v6 = 32;
      goto LABEL_18;
    }
    if (v8_.v9 != nullptr) {
      v6 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
    }
  }
  return v12 > (a1 != 0);
}

#pragma GCC visibility pop
