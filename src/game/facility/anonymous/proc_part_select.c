#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_173e750(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_185a020(_QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_2262bfc;
extern char* GameData_2066090;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 ProcPartSelect_Unknown58(__int64 a1);
__int64 ProcPartSelect_Unknown142(__int64 a1, unsigned int a2);
__int64 ProcPartSelect_Unknown143(__int64 a1);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562f00(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563030(_QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
long double LayoutAccessor_15638b0(_QWORD, _QWORD, _QWORD);
__int64 ProcPartSelect_Unknown96(_QWORD* a1);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_173e750_alt1(__int64, __int64, __int64, char,
                                 char) __asm__("GameRoutine_173e750");
__int64
GameRoutine_185a020_alt1(unsigned __int8) __asm__("GameRoutine_185a020");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameHr_67ed20(_QWORD*);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 ProcPartSelect_Unknown58(__int64 a1)
{
  return GameRoutine_1562680(a1 + 848, "Out", 1.0);
}

__int64 ProcPartSelect_Unknown96(_QWORD* a1)
{
  long double v2;
  long double v3;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    *(__n128*)&v2 =
        ((__n128 (*)(_QWORD*)) * (_QWORD*)(a1[132] + 96LL))(a1 + 132);
  }
  LODWORD(v2) = 1.0;
  LayoutAccessor_1562680(a1 + 106, "In", v2);
  v3 = LayoutAccessor_15638b0(a1 + 106, "In", 0);
  LayoutAccessor_1562f00(a1 + 106, "In", v3);
  return LayoutAccessor_1563030(a1 + 106, "In", 0);
}

__int64 ProcPartSelect_Unknown142(__int64 a1, unsigned int a2)
{
  int v2;
  __int64 result;
  __int64* v4;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_DWORD*)(a1 + 1068);
  if ((unsigned __int8)(a2 - 5) <= 3u && ((1 << (a2 - 2)) & 0x82) == 0) {
    return 0;
  }
  result = 0;
  if (v2 > 1) {
    if (v2 == 2) {
      if ((((_BYTE)a2 - 7) & 0xFD) == 0) {
        return 0;
      }
      goto LABEL_13;
    }
    if (v2 != 3) {
      return result;
    }
  }
  else if (v2 != 0) {
    if (v2 != 1) {
      return result;
    }
    if ((unsigned __int8)a2 != 9) {
      goto LABEL_13;
    }
    return 0;
  }
  if ((unsigned __int8)a2 != 9) {
    return 0;
  }

LABEL_13:
  v4 = (__int64*)GameRoutine_82e7c0(a2, 1);
  v6 = *v4;
  if (*v4 != 0) {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
      v5 = v7 != 0 && *(_DWORD*)(v7 + 32) != 0;
    }
  }
  return (v6 != 0) & v5;
}

__int64 ProcPartSelect_Unknown143(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  unsigned int* v26;
  __int64 v27;
  struct {
    __int64 v28;
    unsigned __int64 v29;
    char* v30;
  } v28_;
  _BYTE v31[20];

  if ((*(_BYTE*)(a1 + 1104) & 1) == 0) {
    v2 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848), "Movie");
    if (v2 != 0) {
      v3 = __dynamic_cast(v2, GameData_212d670[0], GameData_212d678[0], 0);
      if (v3 != 0) {
        GameRoutine_173e750_alt1(a1, (__int64)"MV40_25", v3, 1, 1);
      }
    }
    *(_BYTE*)(a1 + 1104) = 1;
  }
  result = GameRoutine_185a020_alt1(*(_BYTE*)(a1 + 1064));
  if (result != 0) {
    v5 = (_QWORD*)result;
    UnitUtil_15e0120((__int64)v31);
    UnitUtil_15e0200((__int64)v31);
    v6 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848), "Face");
    if (v6 != 0) {
      v6 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameHr_1840a20(v6, 0, (__int64)v5, 6u, 1);
    v7 = GameHr_67ed20(v5);
    if (v7 != nullptr) {
      v8 = (__int64)v7;
      v9 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848), "T_Name");
      if (v9 != 0) {
        GameRoutine_156c5d0_alt1(v9, v8, 0);
      }
    }
    v10 = *(unsigned __int8*)(a1 + 1064);
    if (v10 == 10) {
      v11 = nullptr;
    }
    else {
      v11 = (&GameData_2066090)[v10];
    }
    v12 = game_util_Format_alt1("MID_Obelisk_AnotherName_%s", v11);
    v13 = strlen_alt1(v12);
    if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_54;
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
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
      v28_.v29 = v14;
      v28_.v30 = v15;
      v28_.v28 = v16 | 1;
    }
    else {
      LOBYTE(v28_.v28) = 2 * v13;
      v15 = (char*)&v28_.v28 + 1;
      if (v13 == 0) {
      LABEL_24:
        v15[v14] = 0;
        if ((v28_.v28 & 1) != 0) {
          v17 = v28_.v30;
        }
        else {
          v17 = (char*)&v28_.v28 + 1;
        }
        LayoutAccessor_1562060((__int64*)(a1 + 848), "T_SubName", v17);
        if ((v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v28_.v30);
        }
        v19 = *(unsigned __int8*)(a1 + 1064);
        if (v19 == 10) {
          v20 = nullptr;
        }
        else {
          v20 = (&GameData_2066090)[v19];
        }
        v21 = game_util_Format_alt1("Unit%s", v20);
        v22 = strlen_alt1(v21);
        if (v22 < 0xFFFFFFFFFFFFFFF7LL) {
          v23 = v22;
          if (v22 >= 0x17) {
            if ((v22 | 7) == 0x17) {
              v25 = 26;
            }
            else {
              v25 = (v22 | 7) + 1;
            }
            v24 = (char*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0);
            v28_.v29 = v23;
            v28_.v30 = v24;
            v28_.v28 = v25 | 1;
          }
          else {
            LOBYTE(v28_.v28) = 2 * v22;
            v24 = (char*)&v28_.v28 + 1;
            if (v22 == 0) {
              goto LABEL_44;
            }
          }
          memmove_alt1((__int64)v24, (__int64)v21, v23);
        LABEL_44:
          v24[v23] = 0;
          if ((v28_.v28 & 1) != 0) {
            v26 = (unsigned int*)v28_.v30;
          }
          else {
            v26 = (unsigned int*)((char*)&v28_.v28 + 1);
          }
          LayoutAccessor_1562cf0(a1 + 848, v26);
          if ((v28_.v28 & 1) != 0 && v28_.v30 != nullptr) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                (__int64)v28_.v30);
          }
          GameData_2262bfc = *(_BYTE*)(a1 + 1064);
          return UnitUtil_15e04f0((__int64)v31);
        }
      LABEL_54:
        String_60a1d0();
      }
    }
    memmove_alt1((__int64)v15, (__int64)v12, v14);
    goto LABEL_24;
  }
  return result;
}

#pragma GCC visibility pop
