#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_134ad70(void);
__int64 GameRoutine_15446c0(_QWORD, _QWORD);
__int64 GameRoutine_1544c00(_QWORD, _QWORD);
__int64 GameRoutine_827070(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82e5c0(void);
__int64 GameRoutine_9724a0(void);
__int64 GameRoutine_ae3e80(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1a86f9b;
extern _UNKNOWN GameData_1a86fa8;
extern _UNKNOWN GameData_1a8ee0e;
extern _UNKNOWN GameData_1a96743;
extern _UNKNOWN GameData_1a9e43e;
extern _UNKNOWN GameData_1aa9eec;
extern _UNKNOWN GameData_1adfa87;
extern __int64 (*GameData_2047628[])();
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416c0;
extern __int64 GameData_224e750;
extern __int64 GameData_224e758;
extern __int64 GameData_224e768;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64* GameData_2130e70;
extern char GameData_1aeb3a4[];
void __attribute__((noreturn)) GameRoutine_14c2010(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_667c50(void);
__int64 GmapSituation_14d7f60();
__int64 GmapSituation_14daf80();
__int64 GmapSituation_14db030();
__int64 GmapSituation_14db100();
bool GmapSituation_14db2f0();
__int64 GmapSituation_14db3b0();
__int64 GmapSituation_14db4a0();
bool GmapSituation_14dbd80(__int64 a1, __int64 a2);
__int64 GmapSituation_14dbe20();
__int64 GmapSituation_14dc120(unsigned int a1);
__int64 GmapSituation_14dc210();
__int64 GmapSituation_14dc380(__int64 result, __int64 a2);
__int64 GmapSituation_14dc4f0();
__int64 GmapSituation_14dc560(__int64 result, __int64 a2);
__int64 GmapSituation_14dc720(__int64 result, __int64 a2);

__int64 GmapSituation_14d7f60()
{
  int v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  int* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int v13;

  v0 = 16385;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v0 = 0;
    }
    else {
      v0 = 16385;
    }
  }
  v1 = GameRoutine_9724a0();
  if ((v1 & 1) == 0) {
    v0 |= 0x800u;
  }
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = (__int64*)*v5++;
      v7 = (int*)v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_14;
      }
    }
  LABEL_13:
    v7 = nullptr;
    goto LABEL_14;
  }
  if (v5 == v6) {
    goto LABEL_13;
  }
  while (1) {
    v7 = (int*)*v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && *((_QWORD*)v7 + 69) == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_13;
    }
  }

LABEL_14:
  v9 = *(_QWORD*)v7;
  v10 = game_gmap_SpotMgr_GetCurrentSpot(v1, v2);
  v11 = v0 | 0x4008;
  if (v9 == v10) {
    v11 = v0;
  }
  if ((*((_QWORD*)v7 + 12) | *((_QWORD*)v7 + 69)) != 0 ||
      game_GameModeData_instance_ == 0) {
    v13 = v11 | 0x4200;
  }
  else if (v7[21] < 0 && *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v13 = v11;
  }
  else {
    v13 = v11 | 0x4200;
  }
  if ((GameRoutine_134ad70() & 1) != 0) {
    return v13;
  }
  else {
    return v13 | 0x40;
  }
}

__int64 GmapSituation_14daf80()
{
  __int64 result;
  _QWORD v1[2];

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v1[1] = &GameData_1a86d37;
  v1[0] = game_HashString(&GameData_1a86d37);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14db030()
{
  __int64 v0;
  __int64 v1;
  __int64 v3;
  void* v4;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
      0) {
    v4 = &GameData_1adfa87;
    v3 = game_HashString(&GameData_1adfa87);
    if (game_GameModeData_instance_ == 0) {
      return 1;
    }
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v3);
    if (v0 == 0) {
      return 1;
    }
    if (*(_DWORD*)(v0 + 32) == 0) {
      return 1;
    }
    v4 = &GameData_1a86f9b;
    v3 = game_HashString(&GameData_1a86f9b);
    if (game_GameModeData_instance_ != 0) {
      v1 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v3);
      if (v1 != 0 && *(_DWORD*)(v1 + 32) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

__int64 GmapSituation_14db100()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1a86f9b;
  v1[0] = game_HashString(&GameData_1a86f9b);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

bool GmapSituation_14db2f0()
{
  __int64 v0;
  __int64 v1;
  __int64 v3;
  void* v4;

  v4 = &GameData_1adfa87;
  v3 = game_HashString(&GameData_1adfa87);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &v3);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0 || game_GameModeData_instance_ == 0 ||
      *(int*)(game_GameModeData_instance_ + 64) < 3) {
    return false;
  }
  v4 = &GameData_1a86f9b;
  v3 = game_HashString(&GameData_1a86f9b);
  return game_GameModeData_instance_ == 0 ||
         (v1 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v3)) == 0 ||
         *(_DWORD*)(v1 + 32) == 0;
}

__int64 GmapSituation_14db3b0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __int64 v4;
  void* v5;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = &GameData_1aa9eec;
    v0 = game_HashString(&GameData_1aa9eec);
    v1 = game_GameModeData_instance_;
    v4 = v0;
    if (game_GameModeData_instance_ != 0) {
      v2 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v4);
      if (v2 != 0) {
        v1 = *(_DWORD*)(v2 + 32);
      }
      else {
        v1 = 0;
      }
    }
    *(_DWORD*)(GameData_22416c0 + 48) = v1;
  }
  else {
    *(_QWORD*)(GameData_22416c0 + 16) = *(_QWORD*)(GameData_22416c0 + 8);
  }
  v5 = &GameData_1a9e43e;
  v4 = game_HashString(&GameData_1a9e43e);
  game_VariableManager_SetFlag(&v4, 0);
  v5 = &GameData_1a8ee0e;
  v4 = game_HashString(&GameData_1a8ee0e);
  return game_VariableManager_SetFlag(&v4, 0);
}

__int64 GmapSituation_14db4a0()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 (***v3)();
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v10)();
  void* v11;
  __int64 (***v12)();
  __int64 v13;

  v11 = &GameData_1adfa87;
  v10 = (__int64 (**)())game_HashString(&GameData_1adfa87);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v10)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v2 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v2 = 0;
    }
    v3 = &v10;
    v10 = GameData_2047628;
    v12 = &v10;
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(__int64**)(v4 + 8);
    v6 = *(__int64**)(v4 + 16);
    if (v5 == v6) {
      goto LABEL_18;
    }
    do {
      v7 = *(_QWORD*)(*v5 + 96);
      if (v7 != 0 && (unsigned int)*(unsigned __int8*)(v7 + 32) - 3 <= 1 &&
          v2 == *(unsigned __int8*)(v7 + 64)) {
        v13 = *v5;
        if (v12 == nullptr) {
          GameRoutine_60a310(0);
        }
        ((void (*)(__int64 (***)(), __int64*))(*v12)[6])(v12, &v13);
      }
      ++v5;
    } while (v5 != v6);
    v3 = v12;
    if (v12 == &v10) {
    LABEL_18:
      v8 = 4;
      goto LABEL_19;
    }
    if (v12 != nullptr) {
      v8 = 5;
    LABEL_19:
      ((void (*)(__int64 (***)(), __int64))(*v3)[v8])(v3, v0);
    }
  }
  v11 = &GameData_1a96743;
  v10 = (__int64 (**)())game_HashString(&GameData_1a96743);
  return game_VariableManager_SetFlag(&v10, 0);
}

bool GmapSituation_14dbd80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[2];

  v2 = GameRoutine_ae3e80(a1, a2);
  v3 = v2;
  if (v2 != 0) {
    GameRoutine_1544c00(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL), v2);
    v4 = *(_QWORD*)(v3 + 24);
    v5 = *(unsigned __int8*)(v4 + 96);
    v6 = *(_QWORD*)(v4 + 104);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v4 + 112);
      v8 = v4 + 97;
      if ((v5 & 1) != 0) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      v11[1] = v9;
      v11[0] = game_HashString(v9);
      game_VariableManager_SetFlag(v11, 1);
    }
  }
  return v3 != 0;
}

__int64 GmapSituation_14dbe20()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _QWORD v3[4];

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v3[2] = v0;
  v3[3] = v1;
  v3[1] = &GameData_1a86d37;
  v3[0] = game_HashString(&GameData_1a86d37);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14dc120(unsigned int a1)
{
  int v1;
  _QWORD* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return v1 == (unsigned __int8)a1;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    return v1 == (unsigned __int8)a1;
  }
  v3 = (_QWORD*)GameRoutine_82e5c0();
  if (*v3 != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (result == 0) {
      return result;
    }
    if (*(_DWORD*)(result + 32) != 0) {
      result = game_GetHero(a1);
      if (result == 0) {
        return result;
      }
      v5 = *(_QWORD*)(result + 8);
      if (v5 != 0) {
        v6 = strchr(*(_QWORD*)(result + 8), 95);
        if (v6 != 0) {
          v5 = v6 + 1;
        }
      }
      v10 = game_util_Format(GameData_1aeb3a4, v5);
      v9 = game_HashString(v10);
      if (game_GameModeData_instance_ == 0) {
        return 1;
      }
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v9);
      if (v7 == 0) {
        return 1;
      }
      return *(_DWORD*)(v7 + 32) == 0;
    }
  }
  return 0;
}

__int64 GmapSituation_14dc210()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  void* v14;

  v0 = game_GameModeData_instance_;
  v14 = &GameData_1a96743;
  v13 = game_HashString(&GameData_1a96743);
  v1 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v10 = v2;
  *v2 = "OFF";
  v2[1] = "ON";
  v11 = v2 + 2;
  v12 = v2 + 2;
  GameRoutine_827070(v0 + 40, 4, &v13, &v10, 0, 1);
  if (v10 != nullptr) {
    v3 = *v1;
    v11 = v10;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(v3 + v4, v10);
  }
  v5 = game_GameModeData_instance_;
  v14 = &GameData_1a86fa8;
  v13 = game_HashString(&GameData_1a86fa8);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 16, 16, 0);
  *v6 = "OFF";
  v6[1] = "ON";
  v10 = v6;
  v11 = v6 + 2;
  v12 = v6 + 2;
  result = GameRoutine_827070(v5 + 40, 4, &v13, &v10, 0, 1);
  if (v10 != nullptr) {
    v8 = *v1;
    v11 = v10;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(v8 + v9, v10);
  }
  return result;
}

__int64 GmapSituation_14dc380(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return result;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    if (v4 != v5) {
      v6 = v4;
      do {
        v8 = *v6++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v3) {
          goto LABEL_16;
        }
      } while (v6 != v5);
    }
  LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  if (v4 == v5) {
    goto LABEL_15;
  }
  v9 = v4;
  while (1) {
    v7 = *v9;
    if (*(_QWORD*)(*v9 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v9 == v5) {
      goto LABEL_15;
    }
  }

LABEL_16:
  if ((*(_QWORD*)(v7 + 96) | *(_QWORD*)(v7 + 552)) == 0 &&
      (*(_DWORD*)(v7 + 84) & 0x80000000) != 0) {
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v10 = (__int64*)*v4;
        if (*(_QWORD*)(*v4 + 96) == 0 && v10[69] == 0) {
          goto LABEL_28;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v11 = *v4++;
        v10 = (__int64*)v11;
        if (*(_DWORD*)(v11 + 84) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_24;
        }
      }
    LABEL_28:
      v12 = *v10;
    LABEL_29:
      result = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
      if (v12 == result) {
        v13[1] = &GameData_1a96743;
        v13[0] = game_HashString(&GameData_1a96743);
        return game_VariableManager_SetFlag(v13, 1);
      }
      return result;
    }
  LABEL_24:
    result = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
    v12 = result;
    goto LABEL_29;
  }
  return result;
}

__int64 GmapSituation_14dc4f0()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1a86fa8;
  v1[0] = game_HashString(&GameData_1a86fa8);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14dc560(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* i;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 12;
  v3 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 53);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v2;
  v4 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 44);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v2;
  v5 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 54);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v2;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 55);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v2;
  v7 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 56);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v2;
  v8 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 48);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v2;
  v9 = *(int*)(a2 + 20);
  v10 = *(_QWORD*)(result + 16) - *(_QWORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10 >> 3;
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v10 >> 11;
  v12 = *(__int64**)(result + 8);
  for (i = *(__int64**)(result + 16); v12 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = HIBYTE(v16)) {
    v14 = *v12++;
    v15 = *(int*)(a2 + 20);
    v16 = **(_QWORD**)(v14 + 24);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE1(v16);
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE2(v16);
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE3(v16);
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE4(v16);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE5(v16);
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE6(v16);
    v23 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v23 + 1;
  }
  return result;
}

__int64 GmapSituation_14dc720(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  char* v15;
  bool v16;
  unsigned int i;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
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
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  _QWORD* v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  _QWORD* v89;
  char* v90;
  char* v91;
  unsigned __int64 v92;

  v2 = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 44) = 0;
  *(_QWORD*)(result + 49) = 0;
  *(_QWORD*)(result + 16) = v2;
  *(_DWORD*)(result + 40) = -1;
  *(_BYTE*)(result + 59) = 1;
  v4 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(a2 + 8);
  v6 = v4 + 1;
  *(_DWORD*)(a2 + 20) = v4 + 1;
  v7 = *(unsigned __int8*)(v5 + v4);
  v8 = v4 + 2;
  if (v7 >= 8) {
    if (v7 < 0xB) {
      LODWORD(v6) = v8;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = v8;
    *(_BYTE*)(result + 52) = *(_BYTE*)(v5 + v6);
    LODWORD(v6) = *(_DWORD*)(a2 + 20) + 1;
    *(_DWORD*)(a2 + 20) = v6;
    if (v7 == 0) {
      v45 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v46 = *GameData_2130e70;
        *(_BYTE*)(v46 + 53) = *(_BYTE*)(game_GameModeData_instance_ + 15);
        *(_DWORD*)(v46 + 44) = *(_DWORD*)(v45 + 64);
        if (*(_DWORD*)(v45 + 60) == 3) {
          *(_BYTE*)(v46 + 55) = 1;
        }
      }
      else {
        v53 = *GameData_2130e70;
        *(_BYTE*)(v53 + 53) = 0;
        *(_DWORD*)(v53 + 44) = 0;
      }
      *(_BYTE*)(result + 54) = 1;
      return result;
    }
    v5 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(result + 53) = *(_BYTE*)(v5 + (int)v6);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_DWORD*)(result + 44) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(result + 54) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) != 0;
  if (v7 >= 3) {
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(result + 55) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) != 0;
    if (v7 < 5) {
    LABEL_10:
      v13 = *(int*)(a2 + 20);
      v87 = v7;
      *(_DWORD*)(a2 + 20) = v13 + 1;
      v14 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v13);
      v91 = nullptr;
      v92 = 0;
      v88 = result;
      v90 = nullptr;
      if (v14 != 0) {
        v15 = nullptr;
        v16 = false;
        for (i = 0; i < v14; ++i) {
          v19 = *(int*)(a2 + 20);
          v20 = *(_QWORD*)(a2 + 8);
          v21 = v19 + 1;
          *(_DWORD*)(a2 + 20) = v19 + 1;
          v22 = *(unsigned __int8*)(v20 + v19);
          v23 = v19 + 2;
          *(_DWORD*)(a2 + 20) = v23;
          v24 = v22 | (*(unsigned __int8*)(v20 + v21) << 8);
          v18 = v24 == 0;
          if (v24 != 0) {
            *(_DWORD*)(a2 + 20) = v23 + v24;
            if (!v16) {
              v25 = v20 + v23;
              if ((unsigned __int64)v15 >= v92) {
                v26 = v90;
                v27 = (char*)(v15 - v90);
                v28 = (v15 - v90) >> 3;
                v29 = v28 + 1;
                if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
                  GameRoutine_667c50();
                }
                v30 = v92 - (_QWORD)v90;
                if ((__int64)(v92 - (_QWORD)v90) >> 2 > v29) {
                  v29 = v30 >> 2;
                }
                if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v31 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v31 = v29;
                }
                if (v31 != 0) {
                  if (v31 >> 61 != 0) {
                    goto LABEL_99;
                  }
                  v32 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
                }
                else {
                  v32 = 0;
                }
                v33 = v32 + 8 * v31;
                v34 = (__int64)&v27[v32 + -8 * v28];
                *(_QWORD*)&v27[v32] = v25;
                v15 = &v27[v32 + 8];
                result = memcpy(v34, v26, v27);
                v90 = (char*)v34;
                v92 = v33;
                if (v26 != nullptr) {
                  v35 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v35 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v26);
                }
              }
              else {
                *(_QWORD*)v15 = v25;
                v15 += 8;
              }
              goto LABEL_34;
            }
          }
          else if (!v16) {
            v15 = v90;
          LABEL_34:
            v91 = v15;
            goto LABEL_13;
          }
          v18 = true;
        LABEL_13:
          v16 = v18;
        }
      }
      GameRoutine_15446c0(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL),
                          &v90);
      if (v90 != nullptr) {
        v91 = v90;
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v90);
      }
      result = v88;
      v7 = v87;
      goto LABEL_40;
    }
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(result + 56) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) != 0;
  }
  if (v7 - 2 <= 9) {
    goto LABEL_10;
  }

LABEL_40:
  if (v7 < 4) {
    return result;
  }
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_DWORD*)(result + 48) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v37);
  if (v7 == 6) {
    v38 = *(_DWORD*)(a2 + 20) + 9;
    goto LABEL_43;
  }
  if (v7 < 0xA) {
    if (v7 != 9) {
      return result;
    }
    v47 = *(int*)(a2 + 20);
    v48 = *(_QWORD*)(a2 + 8);
    v49 = v47 + 1;
    *(_DWORD*)(a2 + 20) = v47 + 1;
    v50 = *(unsigned __int8*)(v48 + v47);
    v51 = v47 + 2;
    *(_DWORD*)(a2 + 20) = v51;
    v52 = v50 | (*(unsigned __int8*)(v48 + v49) << 8);
    if (v52 == 0) {
      return result;
    }
    v38 = v51 + 8 * v52;
  LABEL_43:
    *(_DWORD*)(a2 + 20) = v38;
    return result;
  }
  v39 = *(int*)(a2 + 20);
  v40 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  v41 = *(unsigned __int8*)(v40 + v39);
  *(_DWORD*)(a2 + 20) = v39 + 2;
  v42 = v41 | (*(unsigned __int8*)(v40 + v39 + 1) << 8);
  if (v42 == 0) {
    return result;
  }
  v43 = 0;
  v44 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  while (2) {
    v55 = *(int*)(a2 + 20);
    v56 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    v57 = *(unsigned __int8*)(v56 + v55);
    *(_DWORD*)(a2 + 20) = v55 + 2;
    v58 = *(unsigned __int8*)(v56 + v55 + 1);
    *(_DWORD*)(a2 + 20) = v55 + 3;
    v59 = *(unsigned __int8*)(v56 + v55 + 2);
    *(_DWORD*)(a2 + 20) = v55 + 4;
    v60 = *(unsigned __int8*)(v56 + v55 + 3);
    *(_DWORD*)(a2 + 20) = v55 + 5;
    v61 = *(unsigned __int8*)(v56 + v55 + 4);
    *(_DWORD*)(a2 + 20) = v55 + 6;
    v62 = *(unsigned __int8*)(v56 + v55 + 5);
    *(_DWORD*)(a2 + 20) = v55 + 7;
    v63 = *(unsigned __int8*)(v56 + v55 + 6);
    *(_DWORD*)(a2 + 20) = v55 + 8;
    if (GameData_224e758 == 0 || GameData_224e768 == 0) {
      goto LABEL_58;
    }
    v64 = v57 | (v58 << 8) | (v59 << 16);
    v65 = GameData_224e758 - 1;
    v66 = v64 | (v60 << 24) | (v61 << 32) | (v62 << 40) | (v63 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v56 + v55 + 7) << 56);
    if ((GameData_224e758 & (GameData_224e758 - 1)) != 0) {
      v67 = v66;
      if (v66 >= GameData_224e758) {
        v67 = v66 % GameData_224e758;
      }
    }
    else {
      v67 = v66 & v65;
    }
    v68 = *(_QWORD**)(GameData_224e750 + 8 * v67);
    if (v68 == nullptr) {
      goto LABEL_58;
    }
    v69 = (_QWORD*)*v68;
    if (v69 == nullptr) {
      goto LABEL_58;
    }
    if ((GameData_224e758 & v65) == 0) {
      while (1) {
        v71 = v69[1];
        if (v71 == v66) {
          if (v69[2] == v66) {
            goto LABEL_81;
          }
        }
        else if ((v71 & v65) != v67) {
          goto LABEL_58;
        }
        v69 = (_QWORD*)*v69;
        if (v69 == nullptr) {
          goto LABEL_58;
        }
      }
    }
    while (1) {
      v70 = v69[1];
      if (v70 == v66) {
        break;
      }
      if (v70 >= GameData_224e758) {
        v70 %= (unsigned __int64)GameData_224e758;
      }
      if (v70 != v67) {
        goto LABEL_58;
      }
    LABEL_70:
      v69 = (_QWORD*)*v69;
      if (v69 == nullptr) {
        goto LABEL_58;
      }
    }
    if (v69[2] != v66) {
      goto LABEL_70;
    }
  LABEL_81:
    v72 = v69[3];
    if (v72 == 0) {
      goto LABEL_58;
    }
    v74 = *(_QWORD**)(result + 16);
    v73 = *(_QWORD*)(result + 24);
    if ((unsigned __int64)v74 < v73) {
      *v74 = v72;
      v54 = (__int64)(v74 + 1);
      goto LABEL_57;
    }
    v75 = *(_QWORD*)(result + 8);
    v89 = (_QWORD*)result;
    v76 = (char*)v74 - v75;
    v77 = ((__int64)v74 - v75) >> 3;
    v78 = v77 + 1;
    if ((unsigned __int64)(v77 + 1) >> 61 != 0) {
      GameRoutine_14c2010();
    }
    v79 = v73 - v75;
    if (v79 >> 2 > v78) {
      v78 = v79 >> 2;
    }
    if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL) {
      v80 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v80 = v78;
    }
    if (v80 == 0) {
      v81 = 0;
      goto LABEL_93;
    }
    if (v80 >> 61 != 0) {
    LABEL_99:
      GameRoutine_60a210(result);
    }
    v81 = fw_memory_HeapManager_Allocate(*v44, 8 * v80, 16, 0);
  LABEL_93:
    v82 = v81 + 8 * v80;
    v83 = (char*)v74 - v75;
    v84 = (__int64)&v76[v81 + -8 * v77];
    *(_QWORD*)&v76[v81] = v72;
    v54 = (__int64)&v76[v81 + 8];
    memcpy(v84, v75, v83);
    result = (__int64)v89;
    v89[1] = v84;
    v89[2] = v54;
    v89[3] = v82;
    if (v75 != 0) {
      v85 = fw_memory_g_heap_manager_ptr;
      v86 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v75);
      v44 = (_QWORD*)v85;
      result = (__int64)v89;
    }
    else {
      v44 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    }
  LABEL_57:
    *(_QWORD*)(result + 16) = v54;
  LABEL_58:
    if (++v43 != v42) {
      continue;
    }
    return result;
  }
}

#pragma GCC visibility pop
