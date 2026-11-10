#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173bc80(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20b7100;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64* GameData_212e030[4];
__int64 RestartMenuItem_BCall(_QWORD* a1);
__int64 RestartMenuItem_Unknown73_173b7a0(__int64 a1);
bool RestartMenuItem_Unknown74(__int64 a1);
__int64 GameRoutine_80cdc0(_QWORD);
extern __int64 GameData_21c9600;
__int64 game_menu_anonymous_RestartMenuItem_ACall_closure1_Invoke(__int64 a1);
__int64 game_menu_anonymous_RestartMenuItem_ACall_closure_Invoke(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void RestartMenuItem_Unknown70(PSEUDO_X8 x8_,
                                                          __int64 a1);

__int64 RestartMenuItem_BCall(_QWORD* a1)
{
  __int64 v2;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 592LL))(a1) != 1) {
    return 0;
  }
  (*(void (**)(_QWORD*))(*a1 + 352LL))(a1);
  v2 = __dynamic_cast(a1[1], GameData_212e030[0], &GameData_20b7100, 0);
  GameRoutine_173bc80(v2, 0);
  return 13;
}

__attribute__((swiftcall)) void RestartMenuItem_Unknown70(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;

  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v4 = game_util_Format("%s_Help", v3);
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = (char*)v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v7, v4, v6);
LABEL_10:
  v7[v6] = 0;
  {
    result;
    return;
  }
}

__int64 RestartMenuItem_Unknown73_173b7a0(__int64 a1)
{
  if (((*(_DWORD*)(a1 + 144) - 6) & 0xFFFFFFFD) != 0) {
    return 6;
  }
  else {
    return 1;
  }
}

bool RestartMenuItem_Unknown74(__int64 a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  __int64 v7;
  __int64 v8;

  if (((*(_DWORD*)(a1 + 144) - 6) & 0xFFFFFFFD) != 0) {
    v1 = *(_DWORD*)(a1 + 152);
    v2 = *(_DWORD*)(game_GameRestartData_unknown_ + 1388);
    v3 = v2 != 0;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 2124) != 0) {
      if (v1 == 1) {
        goto LABEL_7;
      }
      if (v1 == 0) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_14;
        }
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        LABEL_7:
          if (v2 != 0) {
            v3 = 2;
          }
          else {
            v3 = 1;
          }
        }
      }
    }
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 0) {
        ++v3;
      }
      if (v1 == 0) {
        v6 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if ((unsigned int)(v6 - 2) < 2) {
          v4 = *(_DWORD*)(game_GameRestartData_unknown_ + 1756) != 0;
          return (unsigned int)(v3 + v4) > 1;
        }
        if (v6 == 1) {
          v7 = *(_QWORD*)(game_GameModeData_instance_ + 24);
          if (v7 != 0) {
            v8 = *(_QWORD*)(game_GameModeData_instance_ + 24);
            do {
              v8 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8LL);
              if (v8 == 0 || *(unsigned __int8*)(v8 + 89) !=
                                 *(unsigned __int8*)(v7 + 89)) {
                LOBYTE(v6) = 0;
                goto LABEL_29;
              }
            } while (*(_BYTE*)(v8 + 33) != 17);
            LOBYTE(v6) =
                (*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x202) == 0 &&
                (*(_DWORD*)(game_GameModeData_instance_ + 92) & 0x80) == 0;
          }
        LABEL_29:
          v4 = (v7 != 0) & (unsigned __int8)v6;
          return (unsigned int)(v3 + v4) > 1;
        }
      }
    }
  LABEL_14:
    v4 = 0;
    return (unsigned int)(v3 + v4) > 1;
  }
  return false;
}

__int64 game_menu_anonymous_RestartMenuItem_ACall_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = game_GameRestartData_unknown_;
  v3 = *(_DWORD*)(v1 + 144);
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v3 + 284) != 0) {
    *(_DWORD*)(game_GameRestartData_unknown_ + 8) = v3;
    *(_BYTE*)(v2 + 16) = 1;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  v4 = *(_QWORD*)(v1 + 128);
  if (v4 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  GameRoutine_80cdc0(v4);
  return 2;
}

__int64 game_menu_anonymous_RestartMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = game_GameRestartData_unknown_;
  v3 = *(_DWORD*)(v1 + 144);
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v3 + 284) != 0) {
    *(_DWORD*)(game_GameRestartData_unknown_ + 8) = v3;
    *(_BYTE*)(v2 + 16) = 0;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  v4 = *(_QWORD*)(v1 + 128);
  if (v4 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  GameRoutine_80cdc0(v4);
  return 2;
}

#pragma GCC visibility pop
