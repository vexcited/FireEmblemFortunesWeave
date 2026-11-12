#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 (*game_telop_TelopGrowMastery_vtable[])();
extern __int64 GameData_2131cf8[27];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130fa0[3];
__int64 TelopGrowMastery_Unknown56(__int64 a1);
__int64 TelopGrowMastery_Destructor(__int64 a1);
__int64 TelopGrowMastery_DeletingDestructor(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1750020(__int64, __int64*, __int64, char, signed int,
                            unsigned int);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 TelopGrowMastery_Unknown57(__int64 a1);

__int64 TelopGrowMastery_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
}

__int64 TelopGrowMastery_Unknown57(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64* v6;
  const char* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char* v17;
  char* v18;
  char* v19;
  __int64 result;
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;
  struct {
    __int64* v23;
    __int64 v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    int v27;
    int v28;
    __int64 v29;
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
  } v23_;

  v2 = GameRoutine_1760e40(a1, 8u);
  v3 = *(_QWORD*)(a1 + 1168);
  v4 = v2;
  if (*(_BYTE*)(v3 + 2136) != 0) {
    v5 = (const char*)game_97b2f0(v3 + 2104);
  }
  else {
    v5 = (const char*)GameHr_67ed20(*(_QWORD**)(v3 + 392));
  }
  v6 = msg_MessageManager_instance__ptr[0];
  if (v5 != nullptr) {
    v7 = v5;
  }
  else {
    v7 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  v8 = *v6;
  v23_.v29 = -1;
  v23_.v30 = -1;
  v23_.v31 = -1;
  v23_.v32 = -1;
  v23_.v33 = -1;
  v23_.v34 = -1;
  v23_.v35 = -1;
  v23_.v36 = -1;
  v23_.v37 = -1;
  v23_.v38 = -1;
  v23_.v39 = -1;
  v23_.v40 = -1;
  v23_.v23 = GameData_212e348 + 2;
  v23_.v24 = 0xFFFF0001FFFF0000LL;
  v23_.v25 = 0xFFFF0004FFFF0002LL;
  v23_.v26 = 0xFFFF0006FFFF0005LL;
  v23_.v41 = 8;
  v23_.v27 = -65529;
  v23_.v28 = -65528;
  v9 = GameRoutine_a4dbe0(v8, "MID_Sys_Result_Msg_Skill_EXP_Up", 0);
  if (v9 != nullptr) {
    v10 = (__int64)v9;
    v11 = ui_LayoutAccessor_FindTextBox(v4, "T_Txt");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  v12 = ui_LayoutAccessor_FindPane(v4, "Face");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
    if (v13 != 0) {
      GameHr_1840740(v13, 0, *(_QWORD*)(a1 + 1168), 6u, 1);
    }
  }
  LayoutAccessor_1560070((void*)(&v23_.v23), v4, "L_Mastery00");
  if (v23_.v24 != 0 &&
      (v14 = std___1___shared_weak_count_lock(v23_.v24)) != 0) {
    v15 = v14;
    v16 = 0;
    v21_.v21 = v23_.v23;
    v21_.v22 = v14;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v15 = 0;
    v21_.v21 = nullptr;
    v21_.v22 = 0;
    v16 = 1;
  }
  GameRoutine_1750020(
      a1 + 1184, (__int64*)&v21_.v21, *(_QWORD*)(a1 + 1168),
      *(_BYTE*)(a1 + 1176),
      *(unsigned __int16*)(*(_QWORD*)(a1 + 1168) +
                           2LL * *(unsigned __int8*)(a1 + 1176) + 514),
      *(_DWORD*)(a1 + 1180));
  if (v21_.v22 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v21_.v22);
  }
  if ((v16 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v23_.v24);
  }
  v17 = game_util_Format("L_Mastery%02d", 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, v17, 0);
  v18 = game_util_Format("L_Mastery%02d", 2);
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, v18, 0);
  v19 = game_util_Format("L_Mastery%02d", 3);
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, v19, 0);
  result = ui_LayoutAccessor_FindAlignment(v4, "A_Mastery");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 TelopGrowMastery_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1184) = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  if (*(_QWORD*)(a1 + 1320) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 1184) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1304);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 1264) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1280);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 1240) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 1256);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopGrowMastery_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1184) = GameData_2131cf8[0] + 16;
  if (*(_QWORD*)(a1 + 1320) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 1184) = GameData_2130fa0[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1304);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 1264) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 1280);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 1240) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 1256);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
