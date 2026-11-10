#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9cac4;
extern __int64 GameData_212dbb8[9];
extern __int64 game_GameModeData_instance_;
__int64 ProcTitleSeq_Unknown3(__int64 a1);
__int64 GameRoutine_169f990(_QWORD, _QWORD);
__int64 GameRoutine_66aae0(void);
__int64 GameRoutine_715780(_QWORD, _QWORD);
__int64 TimelineFile_890160(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
extern _UNKNOWN GameData_1abf89f;
extern __int64 (*GameData_1fb31e0[])();
extern __int64 (*GameData_1fb3260[])();
extern __int64 GameData_21c9600;
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 game_anonymous_ProcTitleSeq_CreateMenu(__int64 a1);
__int64 ProcTitleSeq_9ac0d0(__int64 result);
__int64 ProcTitleSeq_9ac250(__int64 result);
__int64 game_anonymous_ProcTitleSeq_CreateMenu_closure_Invoke(__int64 a1);
__int64 game_anonymous_ProcTitleSeq_CreateMenu_closure0_Invoke(__int64 result);

__int64 game_anonymous_ProcTitleSeq_CreateMenu(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;

  v7[0] = GameData_1fb31e0;
  v7[1] = a1;
  v6 = v5;
  v8 = v7;
  v5[0] = GameData_1fb3260;
  v5[1] = a1;
  GameRoutine_169f990(a1, 1);
  if (v6 == v5) {
    v2 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v6 + v2))((__int64)v6);
LABEL_6:
  result = (__int64)v8;
  if (v8 == v7) {
    v4 = 32;
    goto LABEL_10;
  }
  if (v8 != nullptr) {
    v4 = 40;
  LABEL_10:
    result = (*(__int64 (**)(__int64))(*v8 + v4))((__int64)v8);
  }
  *(_DWORD*)(a1 + 152) = 7;
  return result;
}

__int64 ProcTitleSeq_9ac0d0(__int64 result)
{
  __int64 v1;
  _BYTE v2[200];

  if ((*(_BYTE*)(result + 329) & 1) == 0 && *(_BYTE*)(result + 328) != 0) {
    *(_BYTE*)(result + 328) = 0;
    v1 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
    snd_Fade_Fade_10c910(v2, 1000);
    (*(void (**)(__int64, _BYTE*, _QWORD))(*(_QWORD*)v1 + 48LL))(v1, v2, 0);
    return snd_Fade_Destroy_Fade(v2);
  }
  return result;
}

__int64 ProcTitleSeq_9ac250(__int64 result)
{
  *(_BYTE*)(result + 329) = 1;
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 15;
  }
  return result;
}

__int64 game_anonymous_ProcTitleSeq_CreateMenu_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  GameRoutine_66aae0();
  v2 = TimelineFile_890160(&GameData_1abf89f);
  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = GameRoutine_715780(game_GameModeData_instance_, v2);
  }
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 16;
  }
  *(_DWORD*)(v1 + 152) = 7;
  return result;
}

__int64 game_anonymous_ProcTitleSeq_CreateMenu_closure0_Invoke(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 152LL) = 4;
  return result;
}

__int64 ProcTitleSeq_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  char v11;
  __int64 v12;
  _QWORD v13[2];

  v2 = GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 &&
      ((v4 = *(_DWORD*)(v3 + 232)) & 0x400) != 0) {
    v5 = 1;
    *(_DWORD*)(v3 + 232) = v4 & 0xFFFFFBFF;
  }
  else {
    v5 = 0;
  }
  v13[1] = &GameData_1a9cac4;
  result = game_HashString(&GameData_1a9cac4);
  v13[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v13);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      v8 = *(_QWORD*)(a1 + 8);
      v9 = *(_QWORD*)(a1 + 16);
      if (v8 <= v9) {
        while (*(_BYTE*)v9 != 2) {
          v9 -= 64LL;
          if (v8 > v9) {
            return result;
          }
        }
        v10 = *(_DWORD*)(v9 + 32) == 4;
        v11 = v5 ^ 1;
        if (!v10) {
          v11 = 1;
        }
        if ((v11 & 1) == 0) {
          result = *(_QWORD*)(a1 + 192);
          *(_QWORD*)(a1 + 152) = 0;
          *(_QWORD*)(a1 + 192) = 0;
          if (result == a1 + 160) {
            v12 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_20;
            }
            v12 = 40;
          }
          result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v12))(
              result, v7);
          v8 = *(_QWORD*)(a1 + 8);
        LABEL_20:
          if (v8 == 0) {
            goto LABEL_28;
          }
          while (1) {
            if (*(_BYTE*)v8 == 2) {
              if (*(_DWORD*)(v8 + 32) == 8) {
                *(_QWORD*)(a1 + 16) = v8;
                *(_WORD*)(a1 + 136) &= ~0x80u;
              LABEL_28:
                if (*(_QWORD*)v2 != 0) {
                  *(_DWORD*)(*(_QWORD*)v2 + 232LL) |= 0x800u;
                }
                return result;
              }
            }
            else if (*(_BYTE*)v8 == 0) {
              goto LABEL_28;
            }
            v8 += 64LL;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
