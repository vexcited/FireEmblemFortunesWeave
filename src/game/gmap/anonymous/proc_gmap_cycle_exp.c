#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_15255d0(__int64);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c4be0(_QWORD);
__int64 GmapSituation_14dbd80(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ae35f4;
extern __int64 GameData_21f1658;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
__int64 ProcGmapCycleExp_152ef30(__int64 a1);
__int64 ProcGmapCycleExp_152f200_alt1(__int64 result) __asm__(
    "ProcGmapCycleExp_152f200");
__int64 ProcGmapCycleExp_152f570();
__int64 ProcGmapCycleExp_152f5f0(__int64 a1);
__int64 ProcGmapCycleExp_152f660(__int64 result);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BonusExpList_7ffb30(_QWORD);
__int64 GameRoutine_7dbc20(_QWORD, _QWORD);
__int64 GameRoutine_867df0(void);
__int64 TelopParts_17cc7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_gmap_TroopMgr_EachReserveUnit(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_204aec0[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99e8;
extern __int64 GameData_21d99f8;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_152fd80(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
_QWORD* game_gmap_anonymous_ProcGmapCycleExp_CalcExp(__int64 a1);
__int64 ProcGmapCycleExp_152f160();
__int64
game_gmap_anonymous_ProcGmapCycleExp_CalcExp_closure_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 GameHr_7fa250(__int64, __int64*, __int64);
__int64 GameRoutine_8c4be0_alt1(__int64 result) __asm__("GameRoutine_8c4be0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapCycleExp_152f200(__int64 a1);

_QWORD* game_gmap_anonymous_ProcGmapCycleExp_CalcExp(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  char v9;
  char v10;

  v10 = 0;
  v9 = 0;
  v7_.v7[0] = GameData_204aec0;
  v7_.v7[1] = a1;
  v7_.v8 = v7_.v7;
  v7_.v7[2] = &v9;
  v7_.v7[3] = &v10;
  game_gmap_TroopMgr_EachReserveUnit((__int64)v7_.v7);
  result = v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v3 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*v7_.v8 + v3))((__int64)v7_.v8);
LABEL_6:
  if ((v9 & 1) != 0) {
    if (v10 == 1) {
      v4 = 2;
    }
    else {
      v4 = 1;
    }
    *(_DWORD*)(a1 + 152) = v4;
    return result;
  }
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
LABEL_16:
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    while (1) {
      if (*(_BYTE*)v6 == 2) {
        if (*(_DWORD*)(v6 + 32) == 3) {
          *(_QWORD*)(a1 + 16) = v6;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v6 == 0) {
        return result;
      }
      v6 += 64;
    }
  }
  return result;
}

__int64 ProcGmapCycleExp_152ef30(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  _QWORD v9[2];

  v9[1] = &GameData_1ae35f4;
  v9[0] = game_HashString(&GameData_1ae35f4);
  v2 = game_VariableManager_SetFlag(v9, 1);
  result = GmapSituation_14dbd80(v2);
  if ((result & 1) != 0) {
    result = GameRoutine_15255d0(a1);
    *(_BYTE*)(a1 + 252) = 1;
  }
  else {
    v4 = *(unsigned __int8**)(a1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapCycleExp_152f160()
{
  __int64 v1;
  _BYTE v2[200];

  GameRoutine_867df0();
  if (GameData_2241720 != 0) {
    TelopParts_17cc7d0(GameData_2241720, "MID_Sys_InfoTelop_GainCycleExp", 0, 0,
                       0, 0);
  }
  snd_Fade_Fade_10c830(v2, 0.0f);
  snd_play_ff2d0((void*)(&v1), "SE_SYS_EXP_All", "SE_SYS_EXP_All", v2, 0, 65537,
                 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v2);
}

void ProcGmapCycleExp_152f200(__int64 a1)
{
  __int64 v1;
  int v3;
  bool v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned int v28;
  bool v29;
  int v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8* v45;
  unsigned int v46;
  struct {
    __int64 v47;
    int v48;
    int v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v47_;
  _BYTE v58[11];
  struct {
    __int16 v59;
    char v60;
  } v59_;

  v1 = *(_QWORD*)(a1 + 208);
  if (*(_QWORD*)(a1 + 216) == v1) {
    v10 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        v11 = 2;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
      }
      else {
        v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2;
      }
      v15 = *(_QWORD*)(v10 + 208);
      v14 = *(_QWORD*)(v10 + 216);
      v17 = *(_QWORD*)(v10 + 184);
      v16 = *(_QWORD*)(v10 + 192);
      v4 = v16 == v17;
      v18 = v14 - 1 + v15;
      v19 = v18 >> 7;
      v20 = v18 & 0x7F;
      v21 = 16 * (v16 - v17) - 1;
      v22 = *(_QWORD*)(v17 + 8 * v19);
      if (v4) {
        v21 = 0;
      }
      v23 = v22 + 32 * v20;
      *(_DWORD*)(v10 + 156) = *(_DWORD*)v23 & 0xFFFFFFFD | v11;
      *(_QWORD*)(v10 + 168) = *(_QWORD*)(v23 + 24);
      v24 = *(_QWORD*)(v23 + 16);
      *(_QWORD*)(v10 + 216) = v14 - 1;
      *(_QWORD*)(v10 + 160) = v24;
      if ((unsigned __int64)(v21 - (v14 + v15) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v25 = *(_QWORD*)(v16 - 8);
        if (v25 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
          v16 = *(_QWORD*)(v10 + 192);
        }
        *(_QWORD*)(v10 + 192) = v16 - 8;
      }
    }
    v27 = *(unsigned __int8**)(a1 + 16);
    if (v27 == nullptr) {
      goto LABEL_41;
    }
    v28 = *v27;
    v29 = v28 > 0x10;
    v30 = (1 << v28) & 0x1CE00;
    if (v29 || v30 == 0) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  do {
    v47_.v57 = 0;
    memset(v58, 0, sizeof(v58));
    v47_.v55 = 0;
    v47_.v56 = 0;
    v47_.v53 = 0;
    v47_.v54 = 0;
    v47_.v51 = 0;
    v47_.v52 = 0;
    v47_.v50 = 0;
    v47_.v47 = *(_QWORD*)v1;
    v3 = *(_DWORD*)(v1 + 12);
    v47_.v48 = *(_DWORD*)(v1 + 8);
    v47_.v49 = v3;
    if (game_ProcGameSkipView_instance_ != 0 &&
        (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
             ? (v4 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) ==
                     0)
             : (v4 = false),
         v4)) {
      v5 = 3;
    }
    else {
      v5 = 1;
    }
    v58[10] = v5;
    if ((*(_BYTE*)(v1 + 16) & 1) != 0 || *(_BYTE*)(v1 + 17) == 1) {
      v59_.v60 = 0;
      v59_.v59 = 256;
      GameHr_7fa250(a1, &v47_.v47, (__int64)&v59_.v59);
      v8 = *(_QWORD*)(a1 + 216);
      v9 = v8 - (v1 + 24);
      if (v8 != v1 + 24) {
        memmove_alt1(v1, v1 + 24, v9 - 6);
      }
      *(_QWORD*)(a1 + 216) = v1 + v9;
      return;
    }
    GameRoutine_8c4be0_alt1((__int64)&v47_.v47);
    v6 = *(_QWORD*)(a1 + 216);
    v7 = v6 - (v1 + 24);
    if (v6 != v1 + 24) {
      memmove_alt1(v1, v1 + 24, v7 - 6);
    }
    *(_QWORD*)(a1 + 216) = v1 + v7;
  } while (v1 != v1 + v7);
  if (v1 != *(_QWORD*)(a1 + 208)) {
    return;
  }
  v12 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      v13 = 2;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    else {
      v13 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2;
    }
    v33 = *(_QWORD*)(v12 + 208);
    v32 = *(_QWORD*)(v12 + 216);
    v35 = *(_QWORD*)(v12 + 184);
    v34 = *(_QWORD*)(v12 + 192);
    v4 = v34 == v35;
    v36 = v32 - 1 + v33;
    v37 = v36 >> 7;
    v38 = v36 & 0x7F;
    v39 = 16 * (v34 - v35) - 1;
    v40 = *(_QWORD*)(v35 + 8 * v37);
    if (v4) {
      v39 = 0;
    }
    v41 = v40 + 32 * v38;
    *(_DWORD*)(v12 + 156) = *(_DWORD*)v41 & 0xFFFFFFFD | v13;
    *(_QWORD*)(v12 + 168) = *(_QWORD*)(v41 + 24);
    v42 = *(_QWORD*)(v41 + 16);
    *(_QWORD*)(v12 + 216) = v32 - 1;
    *(_QWORD*)(v12 + 160) = v42;
    if ((unsigned __int64)(v39 - (v32 + v33) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v43 = *(_QWORD*)(v34 - 8);
      if (v43 != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
        v34 = *(_QWORD*)(v12 + 192);
      }
      *(_QWORD*)(v12 + 192) = v34 - 8;
    }
  }
  v45 = *(unsigned __int8**)(a1 + 16);
  if (v45 != nullptr) {
    v46 = *v45;
    if (v46 <= 0x10 && ((1 << v46) & 0x1CE00) != 0) {
    LABEL_40:
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
LABEL_41:
  *(_WORD*)(a1 + 136) |= 8u;
}

__int64 ProcGmapCycleExp_152f570()
{
  __int64 v0;
  __int64 result;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  return result;
}

__int64 ProcGmapCycleExp_152f5f0(__int64 a1)
{
  __int64 v1;

  v1 = game_gmap_SpotMgr_GetCurrentSpot(a1);
  if (v1 != 0) {
    GameRoutine_1317f10(*(_QWORD*)(GameData_21f1658 + 16), v1 + 32);
  }
  return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                             *(_QWORD*)(GameData_21f1658 + 16) + 80LL, 0);
}

__int64 ProcGmapCycleExp_152f660(__int64 result)
{
  __int64 v1;
  __int64* v2;

  v1 = *(_QWORD*)(result + 232);
  if (v1 != 0) {
    v2 = GameData_212d708;
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v1 + 32);
    return GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*v2 + 16) + 80LL, 0);
  }
  return result;
}

__int64 game_gmap_anonymous_ProcGmapCycleExp_CalcExp_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  float v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  char v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  char v24;
  unsigned int v25;
  _BYTE* v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  int v40;
  __int64 result;
  int v42;
  int v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  bool v48;
  __int64 v49;
  int v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  int v71;
  __int64 v73;
  int v74;
  int v75;
  char v76[4];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v76[0] = 5;
  v4 = game_Unit_GetParam(v2, v76, 1);
  if (v4 <= 1) {
    v12 = 0;
  }
  else {
    v5 = (float)((unsigned int)v4 >> 1);
    nn_os_LockMutex(&game_g_random_mutex);
    v6 = game_map_MapRandom_instance__ptr[0];
    v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 4) = v7;
    v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 12) = v10;
    v11 = v10 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v12 = (float)(v5 * 0x1.3880000000000p+13f) > (float)(v11 % 0xF4240);
  }
  v13 = *(_DWORD*)(v2 + 504);
  v14 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v14 < 1) {
    v16 = 0;
  }
  else {
    v15 = *(_DWORD*)GameData_21d9968;
    v16 = 0;
    v17 = *(_DWORD*)(GameData_21d9968 + 4LL * (unsigned int)(v14 - 1));
    if (v17 >= v13) {
      v17 = *(_DWORD*)(v2 + 504);
    }
    if (v13 >= v15) {
      v15 = v17;
    }
    v18 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    while (1) {
      v19 = (unsigned int)(v16 + v18) >> 1;
      v20 = *(_DWORD*)(GameData_21d9968 + 4LL * v19);
      if (v15 == v20) {
        break;
      }
      if (v15 < v20) {
        v18 = (unsigned int)(v16 + v18) >> 1;
      }
      else {
        v16 = v19 + 1;
      }
      if (v16 >= v18) {
        goto LABEL_18;
      }
    }
    v16 = v19 + 1;
  }
LABEL_18:
  if (*(unsigned __int8*)(v2 + 498) >= (int)v14) {
    v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  }
  else {
    v21 = *(unsigned __int8*)(v2 + 498);
  }
  if (*(_BYTE*)(v2 + 498) != 0) {
    v22 = v21;
  }
  else {
    v22 = 1;
  }
  if (v22 == (_DWORD)v14) {
    v75 = 0;
    v23 = *(_QWORD*)(v2 + 440);
    if (v23 != 0) {
    LABEL_26:
      v24 = *(_BYTE*)(v23 + 16);
      goto LABEL_29;
    }
  }
  else {
    v75 = *(_DWORD*)(GameData_21d9968 + 4LL * v22);
    v23 = *(_QWORD*)(v2 + 440);
    if (v23 != 0) {
      goto LABEL_26;
    }
  }
  v24 = 9;
LABEL_29:
  if (((1 << v24) & 0xF1) != 0) {
  LABEL_30:
    v25 = v16;
    goto LABEL_53;
  }
  v26 = *(_BYTE**)(v2 + 392);
  if (v16 != (unsigned __int8)v26[445]) {
    if (v26[446] == 0) {
      goto LABEL_46;
    }
    v16 -= (char)v26[446];
    goto LABEL_42;
  }
  if (game_GameModeData_instance_ == 0) {
    v27 = 0;
    v16 = (unsigned __int8)v26[442];
    if (v26[442] != 0) {
      goto LABEL_46;
    }
    goto LABEL_40;
  }
  v27 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v28 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v28 != 0) {
    v27 += *(char*)(v28 + 128);
  }
  v16 = (unsigned __int8)v26[442];
  if (v26[442] == 0) {
  LABEL_40:
    if (v26[443] == 0) {
      v16 = v27;
      v25 = (unsigned __int8)v26[447];
      if (v26[447] != 0) {
        goto LABEL_53;
      }
      goto LABEL_47;
    }
    v16 = v27 + (char)v26[443];
  LABEL_42:
    if (v16 <= 1) {
      v16 = 1;
    }
    if (v16 >= 99) {
      v16 = 99;
    }
  }
LABEL_46:
  v25 = (unsigned __int8)v26[447];
  if (v26[447] == 0) {
  LABEL_47:
    v29 = (char)v26[448];
    if (v29 == 0) {
      goto LABEL_30;
    }
    v30 = v16 + v29;
    if (v30 <= 1) {
      v30 = 1;
    }
    if (v30 >= 99) {
      v25 = 99;
    }
    else {
      v25 = v30;
    }
  }
LABEL_53:
  if (game_GameModeData_instance_ != 0) {
    v31 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  }
  else {
    v31 = 0;
  }
  v32 = *(_DWORD*)(v3 + 240) & ~(*(int*)(v3 + 240) >> 31);
  v74 = 51300;
  if (v32 >= 100) {
    v32 = 100;
  }
  v33 = (unsigned int)(2 * v32);
  v34 = GameRoutine_7dbc20(GameData_21d99e8, v31 - v25);
  if (v34 >= 0x1F4) {
    v35 = 500;
  }
  else {
    v35 = v34;
  }
  v36 = v33 | (v35 << 32);
  if (v31 <= 1) {
    v37 = 1;
  }
  else {
    v37 = v31;
  }
  if (v37 >= 99) {
    v37 = 99;
  }
  v38 = (v37 << 15) | 1u;
  v39 = GameRoutine_7dbc20(GameData_21d99f8, v25);
  if (v39 >= 0x1F4) {
    v40 = 500;
  }
  else {
    v40 = v39;
  }
  v73 = v36 | v38 | (unsigned int)(v40 << 23) | 0xC80000000000LL;
  result = BonusExpList_7ffb30(&v73);
  v42 = (*(_DWORD*)(v3 + 244) * (_DWORD)result) << v12;
  v43 = *(_DWORD*)(v3 + 248) << v12;
  v44 = *(_DWORD*)(v2 + 504);
  v45 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v45 >= 99) {
    LODWORD(v45) = 99;
  }
  v46 = *(_DWORD*)(GameData_21d9968 + 4LL * (int)v45 - 4);
  v48 = v44 < v46 && v42 + v13 >= v75;
  if (*(_QWORD*)(v2 + 408) == 0) {
    v60 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 400) + 24LL) + 1104LL);
    if (v60 != 0) {
      v49 = *(_QWORD*)(*(_QWORD*)(v60 + 24) + 1104LL);
      if (v49 == 0) {
        goto LABEL_79;
      }
      v61 = *(_QWORD*)(*(_QWORD*)(v49 + 24) + 1104LL);
      if (v61 == 0 ||
          (v62 = *(unsigned __int16*)(v61 + 412), *(_WORD*)(v61 + 412) == 0) ||
          ((v63 = *(_QWORD*)(v2 + 560),
            (v64 = *(unsigned __int16*)(v61 + 16)) >=
                (unsigned __int64)((*(_QWORD*)(v2 + 568) - v63) >> 1))
               ? (v65 = 0)
               : (v65 = *(_WORD*)(v63 + 2 * v64) & 0x3FF),
           v65 < v62)) {
        v68 = *(unsigned __int16*)(v49 + 412);
        if (*(_WORD*)(v49 + 412) != 0) {
          v69 = *(unsigned __int16*)(v49 + 16);
          v70 = *(_QWORD*)(v2 + 560);
          if (v69 >= (*(_QWORD*)(v2 + 568) - v70) >> 1) {
            v71 = 0;
          }
          else {
            v71 = *(_WORD*)(v70 + 2 * v69) & 0x3FF;
          }
          LODWORD(v49) = v71 + v43 >= v68;
        }
        else {
          LODWORD(v49) = 0;
        }
        goto LABEL_79;
      }
    }
  }
  LODWORD(v49) = 0;
  v50 = 0;
  if (v44 < v46) {
  LABEL_79:
    v50 = v49;
    **(_BYTE**)(a1 + 16) = 1;
  }
  if (v48 || v50 != 0) {
    **(_BYTE**)(a1 + 24) = 1;
  }
  v51 = *(_QWORD*)(v3 + 216);
  v52 = *(_QWORD*)(v3 + 224);
  if (v51 >= v52) {
    v54 = *(_QWORD*)(v3 + 208);
    v55 = v51 - v54;
    v56 = 1 - 0x5555555555555555LL * ((__int64)(v51 - v54) >> 3);
    if (v56 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_152fd80();
    }
    v57 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v52 - v54) >> 3);
    if (2 * v57 > v56) {
      v56 = 2 * v57;
    }
    if (v57 >= 0x555555555555555LL) {
      v58 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v58 = v56;
    }
    if (v58 != 0) {
      if (v58 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v59 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 24 * v58,
                                           16, 0);
    }
    else {
      v59 = 0;
    }
    v66 = v59 + v55;
    *(_QWORD*)v66 = v2;
    *(_DWORD*)(v66 + 8) = v42;
    *(_DWORD*)(v66 + 12) = v43;
    *(_BYTE*)(v66 + 16) = v48;
    v53 = v59 + v55 + 24;
    *(_BYTE*)(v66 + 17) = v50;
    result = memcpy(v59, v54, v55);
    *(_QWORD*)(v3 + 208) = v59;
    *(_QWORD*)(v3 + 216) = v53;
    *(_QWORD*)(v3 + 224) = v59 + 24 * v58;
    if (v54 != 0) {
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v67 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
    }
  }
  else {
    *(_QWORD*)v51 = v2;
    *(_DWORD*)(v51 + 8) = v42;
    *(_DWORD*)(v51 + 12) = v43;
    v53 = v51 + 24;
    *(_BYTE*)(v51 + 16) = v48;
    *(_BYTE*)(v51 + 17) = v50;
  }
  *(_QWORD*)(v3 + 216) = v53;
  return result;
}

#pragma GCC visibility pop
