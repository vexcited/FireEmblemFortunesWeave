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
_QWORD* GameRoutine_658c00(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1033670(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(__int64 result, __int64);
__int64 GameRoutine_1564060(__int64 result);
__int64 GameRoutine_16a7080(_QWORD);
__int64 GameRoutine_87a140(void);
__int64 LayoutAccessor_155e140(__int64*);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_1ade20c;
extern __int64 (*GameData_1fb33c8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcTitleSeq_vtable[])();
extern __int64 GameData_21f5fc0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2241720;
extern int GameData_21f61c8;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
__int64 ProcTitleSeq_9ab8f0(__int64 a1, __int64 a2);
_QWORD* ProcTitleSeq_Destructor(__int64 a1);

__int64 ProcTitleSeq_9ab8f0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _UNKNOWN** v7;
  __int64 v8;
  _UNKNOWN** v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v13;
  _UNKNOWN** v14;

  v14 = &GameData_1ade20c;
  v13 = game_HashString_alt1(&GameData_1ade20c, a2);
  if (game_GameModeData_instance_ == 0 ||
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v13)) == 0 ||
      *(_DWORD*)(v3 + 32) == 0) {
    v3 = GameRoutine_87a140();
    if ((v3 & 1) != 0) {
      v14 = &GameData_1ade20c;
      v13 = game_HashString_alt1(&GameData_1ade20c, v4);
      v3 = game_VariableManager_SetFlag(&v13, 1);
    }
  }
  GameRoutine_16a7080(v3);
  GameRoutine_1366ac0((void*)(&v13), "Layout/Title.arc", "Title");
  v6 = v13;
  v7 = v14;
  v8 = *(_QWORD*)(a1 + 216);
  v13 = 0;
  v14 = nullptr;
  *(_QWORD*)(a1 + 208) = v6;
  *(_QWORD*)(a1 + 216) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v14;
  if (v14 != nullptr &&
      atomic_fetch_add(
          (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*((void (**)(_UNKNOWN**))*v9 + 2))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v14 = (_UNKNOWN**)&GameData_1a9cac4;
  v13 = game_HashString_alt1(&GameData_1a9cac4, v5);
  v11 = game_GameModeData_instance_ != 0 &&
        (v10 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v13)) != 0 &&
        *(_DWORD*)(v10 + 32) != 0;
  return GameRoutine_1033670(a1, v11);
}

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

_QWORD* ProcTitleSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v13;
  _QWORD v14[25];

  *(_QWORD*)a1 = game_anonymous_ProcTitleSeq_vtable;
  if (*(_QWORD*)(a1 + 208) == 0) {
    goto LABEL_6;
  }
  LayoutAccessor_155e140((__int64*)(a1 + 224));
  v2 = *(_QWORD*)(a1 + 208);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    if ((*(_BYTE*)(a1 + 329) & 1) != 0) {
      goto LABEL_9;
    }
  }
  else {
  LABEL_6:
    if ((*(_BYTE*)(a1 + 329) & 1) != 0) {
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(a1 + 328) != 0) {
    *(_BYTE*)(a1 + 328) = 0;
    v4 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
    snd_Fade_Fade_10c910_alt1((__int64)v14, 1000);
    (*(void (**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)v4 + 48LL))(v4, v14, 0);
    snd_Fade_Destroy_Fade_alt1(v14);
  }
LABEL_9:
  v13 = (unsigned int)snd_fnd_calcCrc32("TITLE", 0);
  snd_Fade_Fade_10c830((__int64)v14, 0x0.0p+0f);
  snd_startSlotVolume_100b50((int*)&v13, (__int64)v14, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(v14);
  v5 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v6 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v6;
    if (v6 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v5 + 1728) + 8LL))(v5 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0 + 8))((__int64)&GameData_21f61c0);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 224));
  v7 = *(_QWORD*)(a1 + 320);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_1564060(a1 + 272);
  GameRoutine_1563f90(a1 + 248, *(_QWORD*)(a1 + 256));
  v8 = *(_QWORD*)(a1 + 232);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 216);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fb33c8;
  if (v10 == (_QWORD*)(a1 + 160)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_27;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_27:
  GameData_21f5fc0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
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
