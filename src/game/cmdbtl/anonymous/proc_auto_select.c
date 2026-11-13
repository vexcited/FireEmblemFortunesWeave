#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_anonymous_ProcAutoSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
ProcAutoSelect_Destructor_alt1(_QWORD* a1) __asm__("ProcAutoSelect_Destructor");
__int64 ProcAutoSelect_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ProcAutoSelect_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_15e5e00_alt1(__int64) __asm__("GameRoutine_15e5e00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcAutoSelect_Destructor(_QWORD* a1);
void ProcAutoSelect_DeletingDestructor(_QWORD* a1);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1626290(__int64);
__int64 GameHr_1627bf0(__int64);
__int64 game_cmdbtl_anonymous_16278c0(__int64 result);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool LayoutAccessor_1563380(__int64*, __int64, char);
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 ProcAutoSelect_Unknown3(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN GameData_2259070;
extern _UNKNOWN GameData_22590a0;
extern _UNKNOWN GameData_22590d0;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_2259048;
extern __int64 GameData_2259050;
extern __int64 GameData_2259068;
extern __int64 GameData_2259078;
extern __int64 GameData_2259080;
extern __int64 GameData_2259098;
extern __int64 GameData_22590a8;
extern __int64 GameData_22590b0;
extern __int64 GameData_22590c8;
extern char GameData_1a9f09e;
extern char GameData_2259058;
extern char GameData_2259064;
extern char GameData_2259088;
extern char GameData_2259094;
extern char GameData_22590b8;
extern char GameData_22590c4;
float LayoutAccessor_15638b0(__int64*, char*, char);
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_225905c __attribute__((aligned(4)));
extern GameAlign_225905c GameData_225905c;
typedef __int64 GameAlign_225908c __attribute__((aligned(4)));
extern GameAlign_225908c GameData_225908c;
typedef __int64 GameAlign_22590bc __attribute__((aligned(4)));
extern GameAlign_22590bc GameData_22590bc;
void GameRoutine_156c5d0(__int64, __int64, char);
void __cxa_guard_release(__int64);
__int64 ProcAutoSelect_Unknown28(_QWORD* a1);

void ProcAutoSelect_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_cmdbtl_anonymous_ProcAutoSelect_vtable;
  v2 = a1[45];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = (_QWORD*)a1[42];
  if (v3 == a1 + 38) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  v5 = a1[34];
  if (v5 != 0) {
    a1[35] = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
  }
  v7 = a1[29];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  GameRoutine_15e5e00_alt1((__int64)a1);
}

void ProcAutoSelect_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *a1 = game_cmdbtl_anonymous_ProcAutoSelect_vtable;
  v2 = a1[45];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = (_QWORD*)a1[42];
  if (v3 == a1 + 38) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  v5 = a1[34];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[35] = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v5);
  }
  v9 = a1[29];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  GameRoutine_15e5e00_alt1((__int64)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v10, (__int64)a1);
}

__int64 ProcAutoSelect_Unknown3(__int64 a1)
{
  __int64* v2;
  char v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = ui_LayoutAccessor_empty__ptr[0];
  v3 = *(_BYTE*)(a1 + 409);
  if (*(_QWORD*)(a1 + 168) != 0) {
    v4 = *(__int64**)(a1 + 168);
  }
  else {
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, (__int64)"L_KeyHelp", v3);
  if (*(_QWORD*)(a1 + 168) != 0) {
    v5 = *(_QWORD*)(a1 + 168);
  }
  else {
    v5 = (__int64)v2;
  }
  ui_LayoutAccessor_SetPaneVisible(v5, (__int64)"L_KeyHelp01",
                                   *(_BYTE*)(a1 + 409));
  if (*(_QWORD*)(a1 + 168) != 0) {
    v6 = *(_QWORD*)(a1 + 168);
  }
  else {
    v6 = (__int64)v2;
  }
  result = ui_LayoutAccessor_SetPaneVisible(v6, (__int64)"L_KeyHelp_Skip",
                                            *(_BYTE*)(a1 + 409));
  v8 = *(_DWORD*)(a1 + 208);
  if (v8 > 1) {
    if (v8 == 2) {
      if (*(_BYTE*)(a1 + 408) != 1) {
        goto LABEL_51;
      }
      if (*(_QWORD*)(a1 + 168) != 0) {
        v14 = *(_QWORD*)(a1 + 168);
      }
      else {
        v14 = (__int64)v2;
      }
      GameHr_1562680(v14, "KeyHelp_Cancel_In", 0x1.0000000000000p+0f);
      if (*(_QWORD*)(a1 + 168) != 0) {
        v15 = *(_QWORD*)(a1 + 168);
      }
      else {
        v15 = (__int64)v2;
      }
      GameHr_1562680(v15, "KeyHelp_Auto_Out", 0x1.0000000000000p+0f);
      *(_DWORD*)(a1 + 388) = 1;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v16 = *(__int64**)(a1 + 168);
      }
      else {
        v16 = v2;
      }
      v17 = v16[1];
      if (v17 != 0) {
        v18 = std___1___shared_weak_count_lock(v17);
        if (v18 != 0) {
          v19 = v18;
          if (*v16 != 0) {
            ControlCreator_13633c0(*v16);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            std___1___shared_weak_count___release_weak_alt1(v19);
          }
        }
      }
      result = GameHr_1626290(a1);
      v10 = 3;
      goto LABEL_50;
    }
    if (v8 == 3) {
      v11 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          v11, (__int64)"KeyHelp_Auto_Out", 0);
      v10 = 0;
      if ((result & 1) != 0) {
      LABEL_50:
        *(_DWORD*)(a1 + 208) = v10;
      }
    }
  }
  else {
    if (v8 == 0) {
      if ((*(_BYTE*)(a1 + 408) & 1) != 0) {
        goto LABEL_51;
      }
      if (*(_QWORD*)(a1 + 168) != 0) {
        v12 = *(_QWORD*)(a1 + 168);
      }
      else {
        v12 = (__int64)v2;
      }
      GameHr_1562680(v12, "KeyHelp_Cancel_Out", 0x1.0000000000000p+0f);
      if (*(_QWORD*)(a1 + 168) != 0) {
        v13 = *(_QWORD*)(a1 + 168);
      }
      else {
        v13 = (__int64)v2;
      }
      result = GameHr_1562680(v13, "KeyHelp_Auto_In", 0x1.0000000000000p+0f);
      *(_DWORD*)(a1 + 388) = 2;
      v10 = 1;
      goto LABEL_50;
    }
    if (v8 == 1) {
      v9 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          v9, (__int64)"KeyHelp_Cancel_Out", 0);
      if ((result & 1) != 0) {
        v10 = 2;
        goto LABEL_50;
      }
    }
  }
LABEL_51:
  v20 = *(_DWORD*)(a1 + 384);
  if (v20 <= 1) {
    if (v20 != 0) {
      if (v20 != 1) {
        goto LABEL_79;
      }
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          *(__int64**)(a1 + 224), (__int64)"In", 0);
      if ((result & 1) == 0) {
        goto LABEL_79;
      }
      goto LABEL_61;
    }
    if (*(_DWORD*)(a1 + 388) != 1) {
      goto LABEL_79;
    }
    v24 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 384) = 1;
    GameHr_1562680(v24, "In", 0x1.0000000000000p+0f);
  LABEL_72:
    result = game_cmdbtl_anonymous_16278c0(a1 + 224);
    goto LABEL_79;
  }
  switch (v20) {
  case 2:
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        *(__int64**)(a1 + 224), (__int64)"Out", 0);
    if ((result & 1) == 0) {
      break;
    }
    if (*(_BYTE*)(*(_QWORD*)(a1 + 240) + 411LL) != 1) {
      *(_DWORD*)(a1 + 384) = 0;
      break;
    }
    v22 = 4;
  LABEL_65:
    *(_DWORD*)(a1 + 384) = v22;
    break;
  case 3:
    v23 = *(_DWORD*)(a1 + 388);
    if (v23 == 2) {
      result =
          GameHr_1562680(*(_QWORD*)(a1 + 224), "Out", 0x1.0000000000000p+0f);
      v26 = 2;
    }
    else {
      if (v23 == 3 || v23 == 4) {
        *(_DWORD*)(a1 + 388) = 0;
        goto LABEL_72;
      }
      if (*(_BYTE*)(*(_QWORD*)(a1 + 240) + 411LL) != 1) {
        break;
      }
      v26 = 4;
    }
    *(_QWORD*)(a1 + 384) = v26;
    break;
  case 4:
    v21 = *(_QWORD*)(a1 + 240);
    if ((*(_BYTE*)(v21 + 408) & 1) == 0) {
      v25 = *(_QWORD*)(a1 + 224);
      *(_DWORD*)(a1 + 384) = 0;
      result = GameHr_1562680(v25, "Out", 0x1.0000000000000p+0f);
      break;
    }
    if ((*(_BYTE*)(v21 + 411) & 1) == 0) {
    LABEL_61:
      v22 = 3;
      goto LABEL_65;
    }
    break;
  default:
    break;
  }
LABEL_79:
  if (*(_BYTE*)(a1 + 393) == 1) {
    result = GameHr_1627bf0(a1 + 224);
  }
  if (*(_BYTE*)(a1 + 392) == 1) {
    result = game_cmdbtl_anonymous_16278c0(a1 + 224);
    *(_BYTE*)(a1 + 392) = 0;
  }
  return result;
}

__int64 ProcAutoSelect_Unknown28(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  float v11;
  __int64 v12;
  __int64* v13;
  float v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  float v23;
  __int64* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64* v30;
  int v31;
  __int64* v32;
  int v33;
  __int64* v34;
  int v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64* v38;
    unsigned __int64 v39;
    unsigned __int64 v40;
    unsigned __int64 v41;
    int v42;
    int v43;
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
  } v36_;

  v2 = ui_LayoutAccessor_empty__ptr[0];
  if (a1[21] != 0) {
    v3 = (__int64*)a1[21];
  }
  else {
    v3 = ui_LayoutAccessor_empty__ptr[0];
  }
  v4 = LayoutAccessor_155fbe0(v3, "L_KeyHelp");
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259070,
                            memory_order_acquire) &
       1) == 0) {
    v30 = v4;
    v31 = __cxa_guard_acquire((__int64)&GameData_2259070);
    v4 = v30;
    if (v31 != 0) {
      GameData_2259064 = 0;
      GameData_2259048 = (__int64)&GameData_1a9f09e;
      GameData_2259050 = (__int64)"MID_KeyHelp_AutoCancel";
      GameData_2259068 = 0;
      GameData_2259058 = 1;
      GameData_225905c = 0x1000000002LL;
      __cxa_guard_release((__int64)&GameData_2259070);
      v4 = v30;
    }
  }
  game_gameui_1593d90(v4, (__int64)&GameData_2259048);
  if (a1[21] != 0) {
    v5 = (__int64*)a1[21];
  }
  else {
    v5 = v2;
  }
  v6 = LayoutAccessor_155fbe0(v5, "L_KeyHelp01");
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22590d0,
                            memory_order_acquire) &
       1) == 0) {
    v32 = v6;
    v33 = __cxa_guard_acquire((__int64)&GameData_22590d0);
    v6 = v32;
    if (v33 != 0) {
      GameData_22590c4 = 0;
      GameData_22590a8 = (__int64)&GameData_1a9f09e;
      GameData_22590b0 = (__int64)"MID_KeyHelp_Auto";
      GameData_22590c8 = 0;
      GameData_22590b8 = 1;
      GameData_22590bc = 0x600000002LL;
      __cxa_guard_release((__int64)&GameData_22590d0);
      v6 = v32;
    }
  }
  game_gameui_1593d90(v6, (__int64)&GameData_22590a8);
  if (a1[21] != 0) {
    v7 = (__int64*)a1[21];
  }
  else {
    v7 = v2;
  }
  v8 = LayoutAccessor_155fbe0(v7, "L_KeyHelp_Skip");
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22590a0,
                            memory_order_acquire) &
       1) == 0) {
    v34 = v8;
    v35 = __cxa_guard_acquire((__int64)&GameData_22590a0);
    v8 = v34;
    if (v35 != 0) {
      GameData_2259094 = 0;
      GameData_2259078 = (__int64)&GameData_1a9f09e;
      GameData_2259080 = (__int64)"MID_KeyHelp_CmdBtlSkip";
      GameData_2259098 = 0;
      GameData_2259088 = 1;
      GameData_225908c = 0x60000000BLL;
      __cxa_guard_release((__int64)&GameData_22590a0);
      v8 = v34;
    }
  }
  game_gameui_1593d90(v8, (__int64)&GameData_2259078);
  if (a1[21] != 0) {
    v9 = a1[21];
  }
  else {
    v9 = (__int64)v2;
  }
  GameHr_1562680(v9, "KeyHelp_Auto_Out", 0x0.0p+0f);
  if (a1[21] != 0) {
    v10 = (__int64*)a1[21];
  }
  else {
    v10 = v2;
  }
  v11 = LayoutAccessor_15638b0(v10, "KeyHelp_Auto_Out", 0);
  LayoutAccessor_15636c0((__int64)v10, (__int64)"KeyHelp_Auto_Out", 0, v11);
  if (a1[21] != 0) {
    v12 = a1[21];
  }
  else {
    v12 = (__int64)v2;
  }
  GameHr_1562680(v12, "KeyHelp_Cancel_Out", 0x0.0p+0f);
  if (a1[21] != 0) {
    v13 = (__int64*)a1[21];
  }
  else {
    v13 = v2;
  }
  v14 = LayoutAccessor_15638b0(v13, "KeyHelp_Cancel_Out", 0);
  LayoutAccessor_15636c0((__int64)v13, (__int64)"KeyHelp_Cancel_Out", 0, v14);
  if (a1[21] != 0) {
    v15 = (__int64*)a1[21];
  }
  else {
    v15 = v2;
  }
  LayoutAccessor_1560070((void*)(&v36_.v36), v15, "L_Next");
  if (v36_.v37 == 0) {
    v17 = 0;
    goto LABEL_32;
  }
  v16 = std___1___shared_weak_count_lock(v36_.v37);
  v17 = v16;
  if (v16 == 0) {
  LABEL_32:
    v18 = 0;
    v19 = 1;
    goto LABEL_33;
  }
  v18 = v36_.v36;
  v19 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
LABEL_33:
  v20 = a1[29];
  a1[28] = v18;
  a1[29] = v17;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  v21 = a1[28];
  a1[30] = a1;
  GameHr_1562680(v21, "Out", 0x1.0000000000000p+0f);
  v22 = (__int64*)a1[28];
  v23 = LayoutAccessor_15638b0(v22, "Out", 0);
  LayoutAccessor_15636c0((__int64)v22, (__int64)"Out", 0, v23);
  v24 = (__int64*)a1[28];
  v36_.v44 = -1;
  v36_.v45 = -1;
  v36_.v46 = -1;
  v36_.v47 = -1;
  v36_.v48 = -1;
  v36_.v49 = -1;
  v25 = *msg_MessageManager_instance__ptr[0];
  v36_.v50 = -1;
  v36_.v51 = -1;
  v36_.v52 = -1;
  v36_.v53 = -1;
  v36_.v54 = -1;
  v36_.v55 = -1;
  v36_.v38 = GameData_212e348 + 2;
  v36_.v39 = 0xFFFF0001FFFF0000LL;
  v36_.v40 = 0xFFFF0004FFFF0002LL;
  v36_.v41 = 0xFFFF0006FFFF0005LL;
  v36_.v56 = 8;
  v36_.v42 = -65529;
  v36_.v43 = -65528;
  v26 = GameRoutine_a4dbe0(v25, "MID_CmdBtl_NextUnit", 0);
  if (v26 != nullptr) {
    v27 = (__int64)v26;
    v28 = ui_LayoutAccessor_FindTextBox(v24, (__int64)"T_Next");
    if (v28 != 0) {
      GameRoutine_156c5d0(v28, v27, 0);
    }
  }
  if ((v19 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  if (v36_.v37 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v36_.v37);
  }
  return game_cmdbtl_anonymous_16278c0((__int64)(a1 + 28));
}

#pragma GCC visibility pop
