#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcGameSkip_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64
ProcGameSkip_Destructor_alt1(__int64 a1) __asm__("ProcGameSkip_Destructor");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_809ba0(__int64, float);
__int64 game_809dc0(__int64, _QWORD*, long double);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 snd_BGM_resumeMuteAll(__int64 result, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__n128 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
extern _UNKNOWN GameData_1a9c92c;
extern _UNKNOWN GameData_21ee258;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_21ee248;
extern __int64 GameData_21ee250;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_sound_g_game_sound;
void GameRoutine_810ef0();
void GameRoutine_9a44a0();
void ProcGameSkip_Unknown2(__int64 a1, long double a2);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGameSkip_Destructor(__int64 a1);

void ProcGameSkip_Destructor(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(__int64**)(a1 + 184);
  v2 = *(__int64**)(a1 + 192);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)a1 = game_anonymous_ProcGameSkip_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v2 - v1;
  if (v5 >= 3) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, *v1);
        v1 = *(__int64**)(a1 + 184);
        v2 = *(__int64**)(a1 + 192);
      }
      *(_QWORD*)(a1 + 184) = ++v1;
      v5 = v2 - v1;
    } while (v5 > 2);
  }
  if (v5 == 1) {
    v7 = 64;
  }
  else {
    if (v5 != 2) {
      goto LABEL_14;
    }
    v7 = 128;
  }
  *(_QWORD*)(a1 + 208) = v7;
LABEL_14:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v9 = *(_QWORD*)(a1 + 192);
    v10 = *(_QWORD*)(a1 + 184) - v9;
    if (v10 != 0) {
      *(_QWORD*)(a1 + 192) = v9 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v11 = *(_QWORD*)(a1 + 176);
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, v11);
  }
  game_ProcGameSkipView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcGameSkip_Unknown2(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  char v11;
  unsigned int v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _QWORD v33[26];

  v2 = *(_DWORD*)(a1 + 156);
  if ((v2 & 1) != 0 || *(int*)(a1 + 240) > 0) {
    goto LABEL_27;
  }
  if ((v2 & 0x20) != 0) {
    goto LABEL_25;
  }
  if ((v2 & 4) == 0) {
    if ((*(_BYTE*)(game_g_game_setting + 952) & 0x80) == 0) {
      goto LABEL_27;
    }
    goto LABEL_25;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                            memory_order_acquire) &
       1) == 0) {
    v31 = a1;
    v32 = __cxa_guard_acquire(&GameData_21ee258);
    a1 = v31;
    if (v32 != 0) {
      GameData_21ee250 = (__int64)&GameData_1a9c92c;
      GameData_21ee248 = game_HashString((__int64)&GameData_1a9c92c);
      __cxa_guard_release(&GameData_21ee258);
      a1 = v31;
    }
  }
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v4 = a1;
    v5 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21ee248);
    if (v5 != 0) {
      v3 = *(_DWORD*)(v5 + 32);
    }
    else {
      v3 = 0;
    }
    a1 = v4;
  }
  v6 = *(float*)(a1 + 224);
  v7 = 944;
  if (v6 == 0x0.0p+0f) {
    v7 = 952;
  }
  if ((*(_BYTE*)(game_g_game_setting + v7) & 0x80) == 0) {
    if (v6 > 0x0.0p+0f) {
      *(_DWORD*)(a1 + 224) = 0;
    }
    goto LABEL_27;
  }
  v8 = (float)(int)(float)((float)v3 * 0x1.eb851e0000000p-5f);
  if (v3 == 0) {
    v8 = 0x0.0p+0f;
  }
  v9 = 0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v9 <= 0x0.0p+0f) {
    v9 = 0x1.0000000000000p+0f;
  }
  v10 = v6 + v9;
  if (v8 < v10) {
    v10 = v8;
  }
  *(float*)(a1 + 224) = v10;
  if (v8 <= v10) {
  LABEL_25:
    if (*(_BYTE*)(a1 + 152) == 0) {
      *(_BYTE*)(a1 + 152) = 1;
      *(_DWORD*)(a1 + 156) &= ~2u;
    }
  }
LABEL_27:
  if (game_ProcFadeView_instance_ != 0) {
    v11 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 3;
  }
  else {
    v11 = 1;
  }
  v12 = *(unsigned __int8*)(a1 + 152);
  if (v12 <= 1) {
    if (*(_BYTE*)(a1 + 152) == 0) {
      v14 = *(_DWORD*)(a1 + 156);
      if ((v14 & 2) == 0) {
        v12 = 0;
      LABEL_70:
        v15 = *(_DWORD*)(a1 + 156);
      LABEL_71:
        if (v12 - 1 > 2) {
          v24 = false;
          goto LABEL_78;
        }
        v16 = v15 & 8;
        goto LABEL_73;
      }
    LABEL_56:
      *(_DWORD*)(a1 + 156) = v14 & 0xFFFFFFFD;
      goto LABEL_70;
    }
    v15 = *(_DWORD*)(a1 + 156);
    v16 = v15 & 8;
    if ((v15 & 8) != 0) {
      v17 = 2;
    }
    else {
      v17 = 3;
    }
    if ((v17 & v15) == 0) {
      v25 = *(_QWORD*)(a1 + 168);
      v33[0] = *(_QWORD*)(a1 + 160);
      v33[1] = v25;
      if (game_ProcFadeView_instance_ != 0) {
        LODWORD(a2) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-2f));
        v26 = a1;
        game_809dc0(game_ProcFadeView_instance_, v33, a2);
        a1 = v26;
      }
      v12 = 2;
      goto LABEL_69;
    }
    *(_BYTE*)(a1 + 152) = 3;
  }
  else {
    switch (v12) {
    case 2u:
      if (game_ProcFadeView_instance_ != 0) {
        v18 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v18 + 172) != *(float*)(v18 + 168)) {
          goto LABEL_70;
        }
      }
      v19 = a1;
      *(_BYTE*)(a1 + 152) = 3;
      GameRoutine_9a44a0();
      v12 = *(unsigned __int8*)(v19 + 152);
      v15 = *(_DWORD*)(v19 + 156);
      if (v12 != 3) {
        goto LABEL_71;
      }
      break;
    case 3u:
      v20 = *(_DWORD*)(a1 + 156);
      if ((v20 & 8) != 0) {
        v21 = 2;
      }
      else {
        v21 = 3;
      }
      if ((v21 & v20) != 0) {
        if (game_ProcFadeView_instance_ != 0) {
          v22 = a1;
          game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-2f);
          a1 = v22;
        }
        v12 = 4;
      LABEL_69:
        *(_BYTE*)(a1 + 152) = v12;
        goto LABEL_70;
      }
      if (*(float*)(a1 + 224) > 0x0.0p+0f) {
        *(_DWORD*)(a1 + 224) = 0;
      }
      v15 = *(_DWORD*)(a1 + 156);
      break;
    case 4u:
      if (game_ProcFadeView_instance_ != 0) {
        v13 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v13 + 172) != *(float*)(v13 + 168)) {
          goto LABEL_70;
        }
      }
      v14 = *(_DWORD*)(a1 + 156);
      v12 = 0;
      *(_BYTE*)(a1 + 152) = 0;
      goto LABEL_56;
    default:
      goto LABEL_70;
    }
    v16 = v15 & 8;
  }
  if (v16 != 0) {
    v23 = 2;
  }
  else {
    v23 = 3;
  }
  if ((v23 & v15) == 0) {
    v24 = true;
    goto LABEL_78;
  }
LABEL_73:
  if (v16 != 0) {
    v27 = 2;
  }
  else {
    v27 = 3;
  }
  v24 = (v27 & v15) == 0;
LABEL_78:
  v28 = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v29 = *(_BYTE*)(game_sound_g_game_sound + 601);
    *(_BYTE*)(game_sound_g_game_sound + 601) = v24;
    *(_BYTE*)(v28 + 602) = v24 & (v29 ^ 1);
    if (!v24 && *(_BYTE*)(v28 + 603) == 1) {
      v30 = *(_QWORD*)(v28 + 8);
      *(_BYTE*)(v28 + 603) = 0;
      snd_Fade_Fade_10cb00((__int64)v33, "FadeTime_BGM_Dead_Bmap_In");
      snd_BGM_resumeMuteAll(v30, (__int64)v33);
      snd_Fade_Destroy_Fade(v33);
    }
  }
  GameRoutine_810ef0();
  if (game_ProcFadeView_instance_ != 0) {
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v11;
  }
}

#pragma GCC visibility pop
