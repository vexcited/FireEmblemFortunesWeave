#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_157b170(__int64*, __int64, char);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_16051a0(PSEUDO_X8, unsigned int);
__int64** GameRoutine_171ad80(__int64** result, __int16*, unsigned int);
__int64** GameRoutine_171afa0(__int64** result, __int16*, unsigned int);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1651990(__int64);
__int64 GameRoutine_1651740(_QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 ProcCalendar_171b110(__int64 result, char, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_17bea50(char*, __int64, __int64, const char*);
__int64 game_ProcInst_Register(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_adf880(__int64, char);
char* game_util_Format(const char*, ...);
extern __int64 (*game_gameui_ProcInOutAnim_vtable[])();
extern __int64 (*game_gameui_ProcWaitAnim_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c9650;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern char* GameData_20aee00[18];
float LayoutAccessor_15638b0(__int64*, char*, char);
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_DWORD* game_gameui_157b310(__int64* a1, unsigned __int16* a2, __int64 a3);
__int64 game_gameui_159a340(__int64 a1, __int64 a2, __int64* a3, int a4,
                            unsigned int* a5, char a6);
void game_gameui_171a220(__int64 a1);
__int64 game_gameui_173f090(__int64 a1, _QWORD* a2, __int64 a3);
__int64 game_gameui_173f7c0(__int64 a1, _QWORD* a2, char a3, __int64* a4,
                            __int64* a5, float a6);

_DWORD* game_gameui_157b310(__int64* a1, unsigned __int16* a2, __int64 a3)
{
  _DWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (*a2 != 0) {
    return GameRoutine_157b170(
        a1, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2),
        (*((_BYTE*)a2 + 3) & 8) != 0);
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconDamage", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconLock", 0);
  result = (_DWORD*)ui_LayoutAccessor_SetPaneVisible((__int64)a1,
                                                     (__int64)"IconDrop", 0);
  if (*(_QWORD*)(a3 + 32) != 0) {
    v6 = ui_LayoutAccessor_FindPane(a1, (__int64)"Icon");
    if (v6 != 0) {
      v6 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    }
    v8 = v6;
    v7 = *(_QWORD*)(a3 + 32);
    if (v7 == 0) {
      GameRoutine_60a310();
    }
    return (_DWORD*)(*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(
        v7, &v8);
  }
  return result;
}

__int64 game_gameui_159a340(__int64 a1, __int64 a2, __int64* a3, int a4,
                            unsigned int* a5, char a6)
{
  _BYTE* v6;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  _BOOL4 v13;
  char* v14;
  __int64 result;
  unsigned int* v16;
  char* v17;
  char* v18;
  char* v19;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  v6 = (_BYTE*)(a1 + 8);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v10 = *a3;
  v11 = a3[2];
  *(_QWORD*)(a1 + 48) = a3[1];
  *(_QWORD*)(a1 + 56) = v11;
  *(_QWORD*)(a1 + 40) = v10;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  *(_DWORD*)(a1 + 64) = a4;
  v12 = game_gmap_SpotMgr_FindSpot(a5);
  if (v12 == nullptr) {
    v14 = GameRoutine_adf880((__int64)a5, 0);
    GameRoutine_60a020((__int64)v6, v14);
    result = GameHr_1651990((__int64)a5);
    goto LABEL_17;
  }
  if (game_GameModeData_instance_ != 0) {
    v13 = *(_DWORD*)(game_GameModeData_instance_ + 60) != 2;
    if ((a6 & 1) == 0) {
      goto LABEL_10;
    }
  }
  else {
    v13 = true;
    if ((a6 & 1) == 0) {
      goto LABEL_10;
    }
  }
  if (v13) {
    v16 = v12;
    if (*((_BYTE*)v12 + 176) != 1) {
    LABEL_12:
      v18 = GameRoutine_adf880((__int64)a5, 0);
      GameRoutine_60a020((__int64)v6, v18);
      result = GameRoutine_1651740(v16);
      goto LABEL_17;
    }
    goto LABEL_13;
  }
LABEL_10:
  v16 = v12;
  v17 = GameRoutine_adf880((__int64)a5, 0);
  if (v17 != nullptr && *v17 != 0) {
    goto LABEL_12;
  }
LABEL_13:
  if ((*v6 & 1) != 0) {
    *(_QWORD*)(a1 + 16) = 15;
    v19 = *(char**)(a1 + 24);
  }
  else {
    *(_BYTE*)(a1 + 8) = 30;
    v19 = (char*)(a1 + 9);
  }
  result = 22;
  strcpy(v19, "MID_Sys_Unknown");
LABEL_17:
  *(_DWORD*)(a1 + 32) = result;
  return result;
}

void game_gameui_171a220(__int64 a1)
{
  unsigned int i;
  char* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int16 v8;
  unsigned int v9;
  __int16 v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  __int64* v16;
  const char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  const char* v26;
  __int64 v27;
  __int64 v28;
  char v29;
  struct {
    char gap16_[1];
    char v30[15];
    __int64 v31;
  } v30_;
  struct {
    __int64 v32;
    __int64 v33;
    char* v34;
  } v32_;
  struct {
    char gap64_[4];
    unsigned __int16 v35;
    __int16 v36;
    __int64 v37;
  } v35_;
  __int64* v38[2];

  for (i = 0; i != 6; ++i) {
    v3 = game_util_Format("L_Daily%02d", i);
    LayoutAccessor_1560070((void*)(&v32_.v32), (__int64*)(a1 + 848), v3);
    v38[0] = nullptr;
    if (v32_.v33 == 0) {
      continue;
    }
    v4 = std___1___shared_weak_count_lock(v32_.v33);
    v38[1] = (__int64*)v4;
    if (v4 == 0) {
      v5 = nullptr;
      v6 = v32_.v33;
      if (v32_.v33 == 0) {
        goto LABEL_7;
      }
    LABEL_6:
      std___1___shared_weak_count___release_weak(v6);
      goto LABEL_7;
    }
    v5 = (__int64*)v32_.v32;
    v38[0] = (__int64*)v32_.v32;
    v6 = v32_.v33;
    if (v32_.v33 != 0) {
      goto LABEL_6;
    }
  LABEL_7:
    if (v5 != nullptr) {
      v7 = *(unsigned __int16*)(a1 + 1070);
      v8 = *(_WORD*)(a1 + 1072);
      if (i <= 2) {
        v9 = i;
      }
      else {
        v9 = i + 1;
      }
      v10 = *(_WORD*)(a1 + 1074);
      v11 = v9 - 3;
      WORD1(v35_.v37) = *(_WORD*)(a1 + 1076);
      v35_.v35 = v7;
      v35_.v36 = v8;
      LOWORD(v35_.v37) = v10;
      HIDWORD(v35_.v37) = *(_DWORD*)(a1 + 1078);
      if (v11 != 0) {
        v35_.v37 = (unsigned __int16)(v10 + v11);
        Dir_70d7a0(&v35_.v35);
        v7 = v35_.v35;
        v8 = v35_.v36;
        v10 = v35_.v37;
      }
      if (GameData_21c9650 != 0 &&
          ((v12 =
                ((unsigned __int8)v8 << 8) | (v7 << 16) | (unsigned __int8)v10,
            ((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 24) - 364LL)
              << 16) |
             (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 362LL)
              << 8) |
             (unsigned int)*(
                 unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 24) - 361LL)) <
                v12) ||
           ((*(unsigned __int16*)(*(_QWORD*)(GameData_21c9650 + 16) + 4LL)
             << 16) |
            (*(unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 6LL)
             << 8) |
            (unsigned int)*(
                unsigned __int8*)(*(_QWORD*)(GameData_21c9650 + 16) + 7LL)) >
               v12)) {
        GameHr_1562680((__int64)v5, "DayNone", 0x1.0000000000000p+0f);
        GameHr_1562680((__int64)v5, "ColorNone", 0x1.0000000000000p+0f);
        GameRoutine_171afa0(v38, (__int16*)&v35_.v35, 0);
        ProcCalendar_171b110((__int64)v5, 0, 1);
      }
      else {
        GameRoutine_171ad80(v38, (__int16*)&v35_.v35, 0);
        v13 = (__int16)v7;
        v14 = v8;
        v15 = v10;
        v16 = &game_gmap_GmapClock_kDefaultTime;
        if (game_gmap_GmapClock_instance_ != 0) {
          v16 = (__int64*)(game_gmap_GmapClock_instance_ + 8);
        }
        if (10000 * v13 + 100 * v14 + v10 == 10000 * *(__int16*)v16 +
                                                 100 * *((__int16*)v16 + 1) +
                                                 *((__int16*)v16 + 2)) {
          v17 = "DayToday";
        }
        else {
          v17 = "DayDefault";
        }
        GameHr_1562680((__int64)v5, v17, 0x1.0000000000000p+0f);
        game_16051a0((void*)(&v32_.v32), v10);
        if ((v32_.v32 & 1) != 0) {
          v18 = v32_.v34;
        }
        else {
          v18 = (char*)&v32_.v32 + 1;
        }
        if (v18 != nullptr) {
          v19 = ui_LayoutAccessor_FindTextBox(v5, (__int64)"T_Day");
          if (v19 != 0) {
            GameRoutine_156c5d0(v19, (__int64)v18, 0);
          }
        }
        if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v32_.v34);
        }
        v32_.v32 = 0x6B6565575F540CLL;
        v29 = 12;
        strcpy(v30_.v30, "BgWeek");
        v21 = v14 + 12;
        v22 = v13 - (v14 < 3);
        if (v14 >= 3) {
          v21 = v14;
        }
        v23 = v22 + 4502;
        v24 = v22 + 4505;
        if (v23 >= 0) {
          v24 = v23;
        }
        v25 = (v23 + v15 + (v24 >> 2) + v23 / -100 + v23 / 400 +
               (13 * v21 + 8) / 5) %
              7;
        if (v25 < 0) {
          v26 = nullptr;
        }
        else {
          v26 = GameData_20aee00[(unsigned __int8)v25];
        }
        game_17bea50((char*)v5, (__int64)&v32_.v32, (__int64)&v29, v26);
        if ((v29 & 1) != 0 && v30_.v31 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v30_.v31);
        }
        if ((v32_.v32 & 1) != 0 && v32_.v34 != nullptr) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v32_.v34);
        }
      }
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
}

__int64 game_gameui_173f090(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;

  v6 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v6 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_QWORD*)a1 = game_gameui_ProcWaitAnim_vtable;
  *(_QWORD*)(a1 + 152) = *a2;
  v7 = a2[1];
  *(_QWORD*)(a1 + 160) = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(a3 + 8);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = *(const char**)a3;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11, 16, 0);
    *(_QWORD*)(a1 + 176) = v8;
    *(_QWORD*)(a1 + 184) = v10;
    *(_QWORD*)(a1 + 168) = v11 | 1;
  }
  else {
    v10 = a1 + 169;
    *(_BYTE*)(a1 + 168) = 2 * v8;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v10, (__int64)v9, v8);
LABEL_12:
  *(_BYTE*)(v10 + v8) = 0;
  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v13 = *(_QWORD*)(a1 + 152);
      v14 = result;
      if (v13 != 0) {
        LayoutAccessor_155e830(v13, 1);
        result = GameHr_1562680(v13, *(const char**)a3, 0x1.0000000000000p+0f);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        return std___1___shared_weak_count___release_weak(v14);
      }
    }
  }
  return result;
}

__int64 game_gameui_173f7c0(__int64 a1, _QWORD* a2, char a3, __int64* a4,
                            __int64* a5, float a6)
{

#pragma clang fp contract(off)
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64* v23;
  __int64 v24;
  const char* v25;
  float v26;
  __int64 v27;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v12 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v12 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_QWORD*)a1 = game_gameui_ProcInOutAnim_vtable;
  *(_QWORD*)(a1 + 152) = *a2;
  v13 = a2[1];
  *(_QWORD*)(a1 + 160) = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  *(float*)(a1 + 168) = a6;
  v14 = a4[1];
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v15 = *a4;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v17, 16, 0);
    *(_QWORD*)(a1 + 184) = v14;
    *(_QWORD*)(a1 + 192) = v16;
    *(_QWORD*)(a1 + 176) = v17 | 1;
    goto LABEL_11;
  }
  v16 = a1 + 177;
  *(_BYTE*)(a1 + 176) = 2 * v14;
  if (v14 != 0) {
  LABEL_11:
    memmove(v16, v15, v14);
  }
  *(_BYTE*)(v16 + v14) = 0;
  v18 = a5[1];
  if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v19 = *a5;
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v18 | 7) + 1;
    }
    v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v21, 16, 0);
    *(_QWORD*)(a1 + 208) = v18;
    *(_QWORD*)(a1 + 216) = v20;
    *(_QWORD*)(a1 + 200) = v21 | 1;
  }
  else {
    v20 = a1 + 201;
    *(_BYTE*)(a1 + 200) = 2 * v18;
    if (v18 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v20, v19, v18);
LABEL_21:
  *(_BYTE*)(v20 + v18) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  result = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v23 = *(__int64**)(a1 + 152);
      v24 = result;
      if (v23 != nullptr) {
        LayoutAccessor_155e830(*(_QWORD*)(a1 + 152), 1);
        v25 = (*(_BYTE*)(a1 + 176) & 1) != 0 ? *(const char**)(a1 + 192)
                                             : (const char*)(a1 + 177);
        result = GameHr_1562680((__int64)v23, v25, 0x1.0000000000000p+0f);
        if ((a3 & 1) != 0) {
          v26 = LayoutAccessor_15638b0(v23, nullptr, 0);
          if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
            v27 = *(_QWORD*)(a1 + 192);
          }
          else {
            v27 = a1 + 177;
          }
          result = LayoutAccessor_15636c0((__int64)v23, v27, 1, v26);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        return std___1___shared_weak_count___release_weak(v24);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
