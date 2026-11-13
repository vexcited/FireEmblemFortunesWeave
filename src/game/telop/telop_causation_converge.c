#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_13755a0(__int64*);
__int64 GameRoutine_1375790(__int64 result);
__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173f310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_173fac0(_QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 GameRoutine_19a35b0(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 (*game_telop_TelopCausationConverge_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130fa8[2];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_2066090;
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_1bc9de0[];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 TelopCausationConverge_Unknown30(__int64 a1);
__int64 TelopCausationConverge_Unknown31(__int64 result);
__int64 TelopCausationConverge_Unknown33_alt1(__int64 a1) __asm__(
    "TelopCausationConverge_Unknown33");
__int64 TelopCausationConverge_Unknown39(__int64 a1);
bool TelopCausationConverge_Unknown37(_QWORD* a1);
bool TelopCausationConverge_Unknown41(_QWORD* a1);
__int64 TelopCausationConverge_Destructor(_QWORD* a1);
__int64 TelopCausationConverge_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopCausationConverge_DeletingDestructor");
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_173f310_alt1(__int64, __int64*, char, __int64, __int64,
                                 float) __asm__("GameRoutine_173f310");
__int64 GameRoutine_5fc1f0_alt1(__int64) __asm__("GameRoutine_5fc1f0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* TelopCausationConverge_Unknown33_alt2(__int64 a1) __asm__(
    "TelopCausationConverge_Unknown33");
__int64 GameHr_14a10d0_alt1(_QWORD*, __int64, __int64,
                            __int64) __asm__("GameHr_14a10d0");
__int64 GameHr_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
void TelopReliance_1386f80(__int64);
__int64 TelopCausationConverge_Unknown33(__int64 a1);
void TelopCausationConverge_DeletingDestructor(_QWORD* a1);

__int64 TelopCausationConverge_Unknown30(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  char* v6;
  char* v8;
  __int64 v9;

  GameRoutine_13755a0((__int64*)a1);
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v3 = GameData_2130fa8[0];
  v2[4] = 0;
  *v2 = v3 + 2;
  v2[1] = 0;
  v2[2] = GameData_212fca0[0] + 2;
  v2[3] = -1;
  v4 = *(_QWORD*)(a1 + 840);
  *(_QWORD*)(a1 + 840) = v2;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(unsigned __int8*)(a1 + 824);
  if (v5 == 10) {
    v6 = nullptr;
  }
  else {
    v6 = (&GameData_2066090)[*(unsigned __int8*)(a1 + 824)];
  }
  if (v5 == 7 || v5 == 1) {
    v8 = "_Clear";
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = game_util_Format("Layout/Textures/Pub/Pub_%s%s.bntx", v6, v8);
  return GameRoutine_19a35b0(*(_QWORD*)(a1 + 840), v9);
}

__int64 TelopCausationConverge_Unknown31(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 840) + 8LL);
  if (v1 == 0) {
    return GameRoutine_1375790(result);
  }
  v2 = result;
  nn_os_AcquireReadLock(v1 + 696);
  v3 = *(_DWORD*)(v1 + 656);
  nn_os_ReleaseReadLock(v1 + 696);
  result = v2;
  if ((v3 & 0x40) != 0) {
    return GameRoutine_1375790(result);
  }
  return result;
}

__int64 TelopCausationConverge_Unknown33(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  const char* v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  const char** v19;
  _BYTE* v20;
  __int64 v21;
  char* v22;
  const char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 result;
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
  } v36_;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64 v40;
    __int64 v41;
    _BYTE* v42;
  } v40_;
  struct {
    _QWORD v43[2];
    const char* v44;
    unsigned __int64 v45;
    unsigned __int64 v46;
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
  } v43_;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_QWORD*)(a1 + 840);
  v3 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 168),
                                       (__int64)"Unit_Pub"),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d678[0], 0),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = *(_QWORD*)(v1 + 8);
    if (v4 != 0 && v5 != 0) {
      v7 = v4;
      *(_QWORD*)(v1 + 24) = *(
          _QWORD*)(**(_QWORD**)(GameRoutine_5fc1f0_alt1(*(_QWORD*)(v5 + 592)) +
                                40) +
                   144LL),
                      v33 = COERCE_AS(
                          __typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = Pane_58f8a0_alt1(v7),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v8 != 0) {
        *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8LL) = v1 + 16;
      }
    }
  }
  if ((unsigned __int8)(*(_BYTE*)(a1 + 824) - 1) > 7u) {
    v9 = nullptr;
  }
  else {
    v9 = (char*)GameData_1bc9de0 +
         GameData_1bc9de0[(unsigned __int8)(*(_BYTE*)(a1 + 824) - 1)];
  }
  GameHr_1562680(a1 + 168, v9, 0x1.0000000000000p+0f),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(unsigned __int8*)(a1 + 824);
  if (v10 == 10) {
    v11 = nullptr;
  }
  else {
    v11 = GameData_20660e0[v10];
  }
  v12 = game_util_Format_alt1("MCID_episode_%s", v11),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = strlen_alt1(v12),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40_.v41 = v14;
    v40_.v42 = v15;
    v40_.v40 = v16 | 1;
    goto LABEL_22;
  }
  LOBYTE(v40_.v40) = 2 * v13;
  v15 = (char*)&v40_.v40 + 1;
  if (v13 != 0) {
  LABEL_22:
    memmove_alt1((__int64)v15, (__int64)v12, v14),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15[v14] = 0;
  v17 = msg_MessageManager_instance__ptr[0];
  v18 = GameData_212e348;
  v19 = (const char**)msg_MessageManager_empty_text__ptr;
  if ((v40_.v40 & 1) != 0) {
    v20 = v40_.v42;
  }
  else {
    v20 = (char*)&v40_.v40 + 1;
  }
  if (v20 != nullptr && *v20 != 0) {
    v21 = *msg_MessageManager_instance__ptr[0];
    v43_.v47 = -1;
    v43_.v48 = -1;
    v43_.v49 = -1;
    v43_.v50 = -1;
    v43_.v51 = -1;
    v43_.v52 = -1;
    v43_.v53 = -1;
    v43_.v54 = -1;
    v43_.v55 = -1;
    v43_.v56 = -1;
    v43_.v57 = -1;
    v43_.v58 = -1;
    v43_.v43[0] = GameData_212e348 + 2;
    v43_.v43[1] = 0xFFFF0001FFFF0000LL;
    v43_.v44 = (const char*)0xFFFF0004FFFF0002LL;
    v43_.v45 = 0xFFFF0006FFFF0005LL;
    v43_.v59 = 8;
    v43_.v46 = 0xFFFF0008FFFF0007LL;
    v22 = GameRoutine_a4dbe0_alt1(v21, v20, 0),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v22 = *msg_MessageManager_empty_text__ptr;
  }
  if (v22 != nullptr) {
    v23 = v22;
  }
  else {
    v23 = *v19;
  }
  GameRoutine_60a020_alt2(*v17 + 14704, v23),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = *v17;
  v43_.v47 = -1;
  v43_.v48 = -1;
  v43_.v49 = -1;
  v43_.v50 = -1;
  v43_.v51 = -1;
  v43_.v52 = -1;
  v43_.v53 = -1;
  v43_.v54 = -1;
  v43_.v55 = -1;
  v43_.v56 = -1;
  v43_.v57 = -1;
  v43_.v58 = -1;
  v43_.v43[0] = v18 + 2;
  v43_.v43[1] = 0xFFFF0001FFFF0000LL;
  v43_.v44 = (const char*)0xFFFF0004FFFF0002LL;
  v43_.v45 = 0xFFFF0006FFFF0005LL;
  v43_.v59 = 8;
  v43_.v46 = 0xFFFF0008FFFF0007LL;
  v25 = GameRoutine_a4dbe0_alt1(v24, "MID_Sys_Result_Msg_Causation_Established",
                                0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v25 != nullptr) {
    v26 = (__int64)v25;
    v27 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 168),
                                             (__int64)"T_Txt"),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v27 != 0) {
      GameRoutine_156c5d0_alt1(v27, v26, 0),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v40_.v42),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  LayoutAccessor_1560070((void*)(&v38_.v38), (__int64*)(a1 + 168), "L_Bg"),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43_.v43[0] = "In";
  v43_.v43[1] = 2;
  v40_.v40 = (__int64)"Out";
  v40_.v41 = 3;
  *(_QWORD*)(a1 +
             832) = GameHr_173f310(a1, &v38_.v38, 0, (__int64)v43_.v43,
                                   (__int64)&v40_.v40, -0x1.0000000000000p+0f),
             v33 = COERCE_AS(__typeof__(v33),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v38_.v39 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v38_.v39),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v43_.v43[0] = 0;
  v43_.v43[1] = 0;
  v29 = *((_QWORD*)GameData_212c540 + 1);
  v31 = *(_QWORD*)GameData_212c548;
  v30 = *((_QWORD*)GameData_212c548 + 1);
  v43_.v46 = *(_QWORD*)GameData_212c540;
  v43_.v47 = v29;
  v43_.v50 = v43_.v46;
  v43_.v51 = v29;
  v43_.v48 = v31;
  v43_.v49 = v30;
  LODWORD(v43_.v45) = 9;
  v43_.v44 = "UI_Deco_Causation";
  v32 = ({
    unsigned __int128 r_ = Manager_bc6460_pair(
        *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v43_.v43, 0);
    v33 = COERCE_AS(__typeof__(v33), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  result = GameHr_14a10d0_alt1(&v36_.v36, (__int64)v32, v33,
                               (__int64)&GameData_1a9f09e),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak_alt1(v35);
  }
  return result;
}

__int64 TelopCausationConverge_Unknown39(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 832);
  if (result != 0) {
    return GameRoutine_173fac0(result, 0);
  }
  return result;
}

bool TelopCausationConverge_Unknown37(_QWORD* a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  return (a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) &&
         (GameRoutine_1563280(a1 + 21, v2, 0) & 1) == 0 &&
         (a1[104] == 0 || (GameRoutine_173fe30() & 1) == 0);
}

bool TelopCausationConverge_Unknown41(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1[57] == 0) {
    goto LABEL_18;
  }
  v3 = a1[56];
  if (v3 == 0) {
    goto LABEL_18;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 != 0) {
    v5 = a1[55];
    if (v5 != 0) {
      v1 = *(unsigned __int8*)(v5 + 24);
      v6 = v5 + 152;
      if (v1 == 0) {
        v6 = 0;
      }
      v7 = v6 != a1[57];
    }
    else {
      v7 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v7) {
        goto LABEL_11;
      }
    }
    else {
      v9 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v9);
      if (v7) {
        goto LABEL_11;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }

LABEL_11:
  v8 = a1[56];
  if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1) {
  LABEL_16:
    v10 = a1[68];
    if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
      return false;
    }
  }

LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  return (a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) &&
         (GameRoutine_1563280(a1 + 21, v11, 0) & 1) == 0 &&
         (a1[104] == 0 || (GameRoutine_173fe30() & 1) == 0);
}

__int64 TelopCausationConverge_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = game_telop_TelopCausationConverge_vtable;
  v1 = (_QWORD*)a1[105];
  a1[105] = 0;
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 8LL))(
        (void*)v1, v1);
    a1 = v2;
  }
  return GameRoutine_1386f80((__int64)a1);
}

void TelopCausationConverge_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_telop_TelopCausationConverge_vtable;
  v2 = a1[105];
  a1[105] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  TelopReliance_1386f80((__int64)a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
