#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Dir_70d7a0(_QWORD);
__int64 FloatingHelp_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_12dd260(void);
__int64 GameRoutine_171b5c0(_QWORD, _QWORD);
__int64 GameRoutine_171b820(_QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15635a0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21c9650;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern char GameData_1a9f09e;
float LayoutAccessor_15637c0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_874520(void);
__int64 ProcCalendar_Unknown3(__int64 result);
__int64 ProcCalendar_Unknown93(__int64 result);
__int64 ProcCalendar_Unknown131();
__int64 ProcCalendar_Unknown139(__int64 a1, __int64* a2);
__int64 ProcCalendar_Unknown142(__int64 a1, char a2);
__int64 ProcCalendar_Unknown143(__int64 a1, char a2);

__int64 ProcCalendar_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (*(_BYTE*)(result + 1082) != 1) {
    return result;
  }
  v18 = v3;
  v19 = v1;
  v20 = v2;
  v4 = result;
  GameRoutine_1560070(&v16, result + 848, "L_SelectDaily");
  result = v17;
  if (v17 == 0) {
    return result;
  }
  v5 = std___1___shared_weak_count_lock(v17);
  v6 = v16;
  result = v17;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v17);
  }
  if (v5 == 0 || v6 == 0) {
    goto LABEL_41;
  }
  GameRoutine_1560070(&v16, v6, "L_ReminderIcon");
  result = v17;
  if (v17 == 0) {
  LABEL_42:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
    return result;
  }
  v7 = std___1___shared_weak_count_lock(v17);
  v8 = v16;
  result = v17;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v17);
  }
  if (v7 == 0 || v8 == 0) {
    goto LABEL_38;
  }
  result = LayoutAccessor_15635a0(v8, "FadeOn", 1);
  if ((result & 1) == 0 ||
      ((result = LayoutAccessor_1563380(v8, "FadeOn", 1)) & 1) == 0) {
  LABEL_39:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak(v7);
    }
    goto LABEL_41;
  }
  for (i = 0; i != 6; ++i) {
    v10 = game_util_Format("L_Daily%02d", i);
    GameRoutine_1560070(&v16, v4 + 848, v10);
    if (v17 == 0) {
      continue;
    }
    v11 = std___1___shared_weak_count_lock(v17);
    v12 = v16;
    if (v17 != 0) {
      std___1___shared_weak_count___release_weak(v17);
    }
    if (v11 == 0 || v12 == 0) {
      if (v11 == 0) {
        continue;
      }
    LABEL_30:
      v15 = 4;
      goto LABEL_34;
    }
    GameRoutine_1560070(&v16, v12, "L_ReminderIcon");
    if (v17 == 0) {
      goto LABEL_30;
    }
    v13 = std___1___shared_weak_count_lock(v17);
    v14 = v16;
    if (v17 != 0) {
      std___1___shared_weak_count___release_weak(v17);
    }
    if (v13 != 0 && v14 != 0) {
      v15 = 0;
      if ((LayoutAccessor_1563280(v14, "Wait", 0) & 1) != 0) {
        LODWORD(v3) = LayoutAccessor_15637c0(v14, "Wait", 0);
        v15 = 1;
      }
    }
    else {
      v15 = 4;
      if (v13 == 0) {
        goto LABEL_34;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  LABEL_34:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    if ((v15 & 3) != 0) {
      goto LABEL_37;
    }
  }
  LODWORD(v3) = 0;
LABEL_37:
  LayoutAccessor_1562680(v8, "Wait", 1.0);
  result = LayoutAccessor_15636c0(v8, "Wait", 0, *(float*)&v3);
  *(_BYTE*)(v4 + 1082) = 0;
LABEL_38:
  if (v7 != 0) {
    goto LABEL_39;
  }
LABEL_41:
  if (v5 != 0) {
    goto LABEL_42;
  }
  return result;
}

__int64 ProcCalendar_Unknown93(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 ProcCalendar_Unknown131()
{
  __int64 result;

  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return result;
}

__int64 ProcCalendar_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  _BOOL4 v6;
  _BOOL4 v8;
  int v9;
  _BOOL4 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  char v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;

  GuideBaseMenu_Unknown139();
  result = GameData_21c9650;
  v6 = *(_BYTE*)(GameData_21c9650 + 90) != 0 &&
       *(_WORD*)(GameData_21c9650 + 88) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 91) == 0) {
    v6 = false;
  }
  v8 = *(_BYTE*)(GameData_21c9650 + 96) != 0 &&
       *(_WORD*)(GameData_21c9650 + 94) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 97) == 0) {
    v8 = false;
  }
  v9 = v8 + v6;
  v11 = *(_BYTE*)(GameData_21c9650 + 102) != 0 &&
        *(_WORD*)(GameData_21c9650 + 100) != 0;
  if (*(_BYTE*)(GameData_21c9650 + 103) == 0) {
    v11 = false;
  }
  v12 = v9 + v11;
  v13 = *(_QWORD*)(GameData_21c9650 + 16);
  v14 = *(_QWORD*)(GameData_21c9650 + 24);
  if (v13 != v14) {
    while (*(__int16*)(a1 + 1070) != *(unsigned __int16*)(v13 + 4) ||
           *(_WORD*)(a1 + 1072) != *(unsigned __int8*)(v13 + 6) ||
           *(_WORD*)(a1 + 1074) != *(unsigned __int8*)(v13 + 7)) {
      v13 += 368;
      if (v13 == v14) {
        goto LABEL_36;
      }
    }
  }
  v15 = v13 == v14 || v13 == 0;
  if (!v15 && (*(_BYTE*)v13 & 1) != 0) {
    v16 = 0;
  }
  else {
  LABEL_36:
    if (v12 == 3) {
      v16 = 2;
    }
    else {
      result = GameRoutine_12dd260();
      v16 = (result & 1) == 0;
    }
  }
  v17 = a2[1];
  v18 = a2[2];
  v19 = v12 ^ 3;
  if (v17 >= v18) {
    v21 = *a2;
    v22 = v17 - *a2;
    v23 = 1 - 0x3333333333333333LL * (v22 >> 3);
    if (v23 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v24 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v18 - v21) >> 3);
    if (2 * v24 > v23) {
      v23 = 2 * v24;
    }
    if (v24 >= 0x333333333333333LL) {
      v25 = 0x666666666666666LL;
    }
    else {
      v25 = v23;
    }
    if (v25 != 0) {
      if (v25 > 0x666666666666666LL) {
        goto LABEL_92;
      }
      v26 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v25,
                                           16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + v22;
    *(_QWORD*)v27 = "Reminder";
    *(_QWORD*)(v27 + 8) = "MID_KeyHelp_Reminder";
    *(_BYTE*)(v27 + 28) = v16;
    v20 = v26 + v22 + 40;
    *(_BYTE*)(v27 + 16) = 1;
    *(_QWORD*)(v27 + 20) = 0x30000000BLL;
    *(_DWORD*)(v27 + 32) = v19;
    *(_DWORD*)(v27 + 36) = 3;
    result = memcpy(v26, v21, v22);
    *a2 = v26;
    a2[1] = v20;
    a2[2] = v26 + 40 * v25;
    if (v21 != 0) {
      v28 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v28 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v28, v21);
    }
  }
  else {
    *(_BYTE*)(v17 + 28) = v16;
    *(_QWORD*)v17 = "Reminder";
    *(_QWORD*)(v17 + 8) = "MID_KeyHelp_Reminder";
    v20 = v17 + 40;
    *(_BYTE*)(v17 + 16) = 1;
    *(_QWORD*)(v17 + 20) = 0x30000000BLL;
    *(_DWORD*)(v17 + 32) = v19;
    *(_DWORD*)(v17 + 36) = 3;
  }
  v29 = a2[2];
  a2[1] = v20;
  if (v20 >= v29) {
    v31 = *a2;
    v32 = v20 - *a2;
    v33 = 1 - 0x3333333333333333LL * (v32 >> 3);
    if (v33 > 0x666666666666666LL) {
      goto LABEL_91;
    }
    v34 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v29 - v31) >> 3);
    if (2 * v34 > v33) {
      v33 = 2 * v34;
    }
    if (v34 >= 0x333333333333333LL) {
      v35 = 0x666666666666666LL;
    }
    else {
      v35 = v33;
    }
    if (v35 != 0) {
      if (v35 > 0x666666666666666LL) {
        goto LABEL_92;
      }
      v36 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v35,
                                           16, 0);
    }
    else {
      v36 = 0;
    }
    v37 = v36 + v32;
    *(_QWORD*)v37 = "XHelp";
    *(_QWORD*)(v37 + 8) = 0;
    *(_BYTE*)(v37 + 16) = 0;
    *(_BYTE*)(v37 + 28) = 0;
    *(_QWORD*)(v37 + 32) = 0;
    v30 = v36 + v32 + 40;
    *(_QWORD*)(v37 + 20) = 0x300000002LL;
    result = memcpy(v36, v31, v32);
    *a2 = v36;
    a2[1] = v30;
    a2[2] = v36 + 40 * v35;
    if (v31 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v31);
    }
  }
  else {
    *(_BYTE*)(v20 + 16) = 0;
    *(_BYTE*)(v20 + 28) = 0;
    *(_QWORD*)(v20 + 32) = 0;
    *(_QWORD*)v20 = "XHelp";
    *(_QWORD*)(v20 + 8) = 0;
    *(_QWORD*)(v20 + 20) = 0x300000002LL;
    v30 = v20 + 40;
  }
  a2[1] = v30;
  if (*(_BYTE*)(a1 + 1068) != 1) {
    return result;
  }
  v39 = a2[2];
  if (v30 >= v39) {
    v41 = *a2;
    v42 = v30 - *a2;
    v43 = 1 - 0x3333333333333333LL * (v42 >> 3);
    if (v43 <= 0x666666666666666LL) {
      v44 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v39 - v41) >> 3);
      if (2 * v44 > v43) {
        v43 = 2 * v44;
      }
      if (v44 >= 0x333333333333333LL) {
        v45 = 0x666666666666666LL;
      }
      else {
        v45 = v43;
      }
      if (v45 == 0) {
        v46 = 0;
      LABEL_85:
        v47 = v46 + v42;
        *(_QWORD*)v47 = &GameData_1a9f09e;
        *(_QWORD*)(v47 + 8) = "MID_KeyHelp_Cancel";
        *(_BYTE*)(v47 + 28) = 0;
        *(_QWORD*)(v47 + 32) = 0;
        *(_BYTE*)(v47 + 16) = 1;
        v48 = v46 + 40 * v45;
        v40 = v46 + v42 + 40;
        *(_QWORD*)(v47 + 20) = 0x300000001LL;
        result = memcpy(v46, v41, v42);
        *a2 = v46;
        a2[1] = v40;
        a2[2] = v48;
        if (v41 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v49 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v41);
        }
        goto LABEL_89;
      }
      if (v45 <= 0x666666666666666LL) {
        v46 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v45,
                                             16, 0);
        goto LABEL_85;
      }
    LABEL_92:
      GameRoutine_60a210();
    }
  LABEL_91:
    GameRoutine_874520();
  }
  *(_BYTE*)(v30 + 28) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_QWORD*)v30 = &GameData_1a9f09e;
  *(_QWORD*)(v30 + 8) = "MID_KeyHelp_Cancel";
  v40 = v30 + 40;
  *(_BYTE*)(v30 + 16) = 1;
  *(_QWORD*)(v30 + 20) = 0x300000001LL;
LABEL_89:
  a2[1] = v40;
  return result;
}

__int64 ProcCalendar_Unknown142(__int64 a1, char a2)
{
  __int64 v2;
  unsigned int v5;
  __int16 v6;
  __int16 v7;
  __int64 v8;
  __int64 v10;
  int v11;

  v2 = a1 + 176;
  if ((**(unsigned int (***)(__int64))(a1 + 176))(a1 + 176) == 0 &&
      (v8 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 312LL))(v8, a2 & 1) &
       1) != 0) {
    v5 = 13;
  }
  else {
    v5 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, 1, a2 & 1);
  }
  if (GameData_21c9650 == 0) {
    v6 = *(_WORD*)(a1 + 1072);
    v7 = *(_WORD*)(a1 + 1074);
    goto LABEL_11;
  }
  v6 = *(_WORD*)(a1 + 1072);
  v7 = *(_WORD*)(a1 + 1074);
  if (((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 24) - 364LL) << 16) |
       (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 362LL) << 8) |
       *(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 361LL)) !=
      (((unsigned __int8)v6 << 8) | (*(unsigned __int16*)(a1 + 1070) << 16) |
       (unsigned __int8)v7)) {
  LABEL_11:
    LOWORD(v10) = *(_WORD*)(a1 + 1070);
    WORD1(v10) = v6;
    v11 = 0;
    HIDWORD(v10) = (unsigned __int16)(v7 + 1);
    Dir_70d7a0(&v10);
    *(_QWORD*)(a1 + 1070) = v10;
    *(_DWORD*)(a1 + 1078) = v11;
    GameRoutine_171b820(a1, 0);
    return v5;
  }
  if ((a2 & 1) != 0) {
    GameRoutine_171b5c0(a1, 0);
  }
  return v5;
}

__int64 ProcCalendar_Unknown143(__int64 a1, char a2)
{
  __int64 v2;
  unsigned int v5;
  __int16 v6;
  __int16 v7;
  __int64 v8;
  __int64 v10;
  int v11;

  v2 = a1 + 176;
  if ((**(unsigned int (***)(__int64))(a1 + 176))(a1 + 176) == 0 &&
      (v8 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 336LL)) != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 320LL))(v8, a2 & 1) &
       1) != 0) {
    v5 = 13;
  }
  else {
    v5 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, 0xFFFFFFFFLL, a2 & 1);
  }
  if (GameData_21c9650 == 0) {
    v6 = *(_WORD*)(a1 + 1072);
    v7 = *(_WORD*)(a1 + 1074);
    goto LABEL_11;
  }
  v6 = *(_WORD*)(a1 + 1072);
  v7 = *(_WORD*)(a1 + 1074);
  if (((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 16) + 4LL) << 16) |
       (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 6LL) << 8) |
       *(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 7LL)) !=
      (((unsigned __int8)v6 << 8) | (*(unsigned __int16*)(a1 + 1070) << 16) |
       (unsigned __int8)v7)) {
  LABEL_11:
    LOWORD(v10) = *(_WORD*)(a1 + 1070);
    WORD1(v10) = v6;
    v11 = 0;
    HIDWORD(v10) = (unsigned __int16)(v7 - 1);
    Dir_70d7a0(&v10);
    *(_QWORD*)(a1 + 1070) = v10;
    *(_DWORD*)(a1 + 1078) = v11;
    GameRoutine_171b820(a1, 1);
    return v5;
  }
  if ((a2 & 1) != 0) {
    GameRoutine_171b5c0(a1, 1);
  }
  return v5;
}

#pragma GCC visibility pop
