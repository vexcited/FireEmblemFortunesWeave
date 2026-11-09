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

__int64 ProcPartSelect_Unknown58(__int64 a1)
{
  return GameRoutine_1562680(a1 + 848, "Out", 1.0);
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
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  _BYTE v30[20];

  if ((*(_BYTE*)(a1 + 1104) & 1) == 0) {
    v2 = ui_LayoutAccessor_FindPane(a1 + 848, "Movie");
    if (v2 != 0) {
      v3 = __dynamic_cast(v2, GameData_212d670[0], GameData_212d678[0], 0);
      if (v3 != 0) {
        GameRoutine_173e750(a1, "MV40_25", v3, 1, 1);
      }
    }
    *(_BYTE*)(a1 + 1104) = 1;
  }
  result = GameRoutine_185a020(*(unsigned __int8*)(a1 + 1064));
  if (result != 0) {
    v5 = result;
    GameRoutine_15e0120(v30);
    GameRoutine_15e0200(v30);
    v6 = ui_LayoutAccessor_FindPane(a1 + 848, "Face");
    if (v6 != 0) {
      v6 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1840a20(v6, 0, v5, 6, 1);
    v7 = GameRoutine_67ed20(v5);
    if (v7 != 0) {
      v8 = v7;
      v9 = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Name");
      if (v9 != 0) {
        GameRoutine_156c5d0(v9, v8, 0);
      }
    }
    v10 = *(unsigned __int8*)(a1 + 1064);
    if (v10 == 10) {
      v11 = nullptr;
    }
    else {
      v11 = (&GameData_2066090)[v10];
    }
    v12 = game_util_Format("MID_Obelisk_AnotherName_%s", v11);
    v13 = strlen(v12);
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
      v15 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
      v28 = v14;
      v29 = v15;
      v27 = v16 | 1;
    }
    else {
      LOBYTE(v27) = 2 * v13;
      v15 = (char*)&v27 + 1;
      if (v13 == 0) {
      LABEL_24:
        v15[v14] = 0;
        if ((v27 & 1) != 0) {
          v17 = v29;
        }
        else {
          v17 = (char*)&v27 + 1;
        }
        GameRoutine_1562060(a1 + 848, "T_SubName", v17);
        if ((v27 & 1) != 0 && v29 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v18);
        }
        v19 = *(unsigned __int8*)(a1 + 1064);
        if (v19 == 10) {
          v20 = nullptr;
        }
        else {
          v20 = (&GameData_2066090)[v19];
        }
        v21 = game_util_Format("Unit%s", v20);
        v13 = strlen(v21);
        if (v13 < 0xFFFFFFFFFFFFFFF7LL) {
          v22 = v13;
          if (v13 >= 0x17) {
            if ((v13 | 7) == 0x17) {
              v24 = 26;
            }
            else {
              v24 = (v13 | 7) + 1;
            }
            v23 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
            v28 = v22;
            v29 = v23;
            v27 = v24 | 1;
          }
          else {
            LOBYTE(v27) = 2 * v13;
            v23 = (char*)&v27 + 1;
            if (v13 == 0) {
              goto LABEL_44;
            }
          }
          memmove(v23, v21, v22);
        LABEL_44:
          v23[v22] = 0;
          if ((v27 & 1) != 0) {
            v25 = v29;
          }
          else {
            v25 = (char*)&v27 + 1;
          }
          GameRoutine_1562cf0(a1 + 848, v25);
          if ((v27 & 1) != 0 && v29 != nullptr) {
            v26 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
          }
          GameData_2262bfc = *(_BYTE*)(a1 + 1064);
          return GameRoutine_15e04f0(v30);
        }
      LABEL_54:
        GameRoutine_60a1d0(v13);
      }
    }
    memmove(v15, v12, v14);
    goto LABEL_24;
  }
  return result;
}

#pragma GCC visibility pop
