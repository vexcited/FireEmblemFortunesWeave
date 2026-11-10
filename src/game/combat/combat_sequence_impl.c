#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ActionWaitAttack_10d49d0(void);
__int64 ActionWaitAttack_10d6f00(void);
__int64 CharacterModel_106cdd0(_QWORD*);
__int64 GameRoutine_1069b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_106d080(_QWORD);
__int64 GameRoutine_1092860(_QWORD);
__int64 GameRoutine_10ecd10(_QWORD);
__int64 GameRoutine_10ecf30(_QWORD);
__int64 GameRoutine_10edf90(_QWORD);
__int64 GameRoutine_10f9330(_QWORD);
__int64 GameRoutine_112bd00(_QWORD);
__int64 GameRoutine_112bf60(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_8234c0(void);
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 MapInfo_825790(void);
__int64 game_GameView_Update(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_106c6d0(_QWORD*, __int64);
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_200ba78[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_combat_CombatSequenceImpl_vtable[])();
extern __int64 GameData_21cd128;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235e20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_script_hub_g_frame_counter;
extern __int64* GameData_212d448[9];
extern __int64* GameData_21300a0[5];
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_22355dc;
float snd_Fade_getTime(_QWORD);
__int64 CombatSequenceImpl_10d5500(__int64 a1);
bool CombatSequenceImpl_10d5530(__int64 a1, __int64 a2);
__int64 CombatSequenceImpl_10d5570(__int64 result);
__int64 CombatSequenceImpl_10d5610(__int64 a1);
void CombatSequenceImpl_10d5690(__int64 a1);
__int64 CombatSequenceImpl_10d5820(__int64 a1);
__int64 CombatSequenceImpl_10d58c0(__int64 a1);
float CombatSequenceImpl_10d6170(__int64 a1);
__int64 CombatSequenceImpl_10d6360(__int64 a1);
__int64 CombatSequenceImpl_10d64b0(__int64 result);
void game_combat_CombatSequenceImpl_DieTalkOrNothing_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 CombatSequenceImpl_Destructor(__int64 a1);
__int64 MapInfo_825790_alt1(_QWORD) __asm__("MapInfo_825790");
extern __int64 GameData_22365a0;
__int64 CombatSequenceImpl_10d6630(__int64 result);

__int64 CombatSequenceImpl_10d5500(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  GameRoutine_106d080(*(_QWORD*)(a1 + 160));
  result = *(_QWORD*)(a1 + 160);
  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v22 = v24;
    v23 = v25;
    v27 = v26;
    v2 = *(_QWORD*)(v1 + 32);
    v3 = *(_QWORD*)(v1 + 40);
    v21 = 0;
    if (v2 != v3) {
      v4 = result;
      v5 = GameData_212d448[0];
      while (1) {
        if (*v5 != 0 && (v6 = *(_DWORD*)(v2 + 8)) <= 3 &&
            (v7 = *v5 + 24LL * v6, (result = *(_QWORD*)(v7 + 32)) != 0)) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                    memory_order_relaxed);
          v8 = *(_QWORD*)(v7 + 40);
          v9 = *(_QWORD*)(result + 8) == -1 || v8 == 0;
          if (v9 || (v10 = *(_QWORD*)(v8 + 80)) == 0 ||
              (*(_QWORD*)(v10 + 8) != -1 ? (v11 = *(_QWORD*)(v8 + 88) == 0)
                                         : (v11 = true),
               v11)) {
            v12 = 0;
          }
          else if (*(_QWORD*)(result + 8) == -1) {
            v12 = 0;
          }
          else {
            v12 = v8;
          }
          result = std___1___shared_weak_count___release_weak(result);
        }
        else {
          v12 = 0;
        }
        v13 = *(int*)(v12 + 96);
        if ((*((_BYTE*)&v21 + v13) & 1) == 0) {
          if ((*(_BYTE*)v2 & 0x10) == 0) {
            break;
          }
          v18 = *(_QWORD*)(*v5 + 8) + 96LL * (int)v13;
          if (*(_QWORD*)(v18 + 232) != 0) {
            result = GameRoutine_112bd00(v4 + 232);
          }
          else {
            if (*(_QWORD*)(v18 + 224) == 0) {
              break;
            }
            result = GameRoutine_112bf60(v4 + 232);
          }
        }
      LABEL_5:
        v2 += 144;
        if (v2 == v3) {
          return result;
        }
      }
      v14 = *(_QWORD*)(v12 + 88);
      v15 = *(_QWORD*)(v14 + 392);
      v16 = *(_QWORD*)(v14 + 400);
      if (v16 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                  memory_order_relaxed);
        v17 = *(_QWORD*)(v15 + 11616);
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          result = std___1___shared_weak_count___release_weak(v16);
        }
      }
      else {
        v17 = *(_QWORD*)(v15 + 11616);
      }
      if (v17 != 0) {
        result = GameRoutine_1069b50(v12, v17, 0);
        if ((unsigned int)result >= 2) {
          result = GameRoutine_112bd00(v4 + 232);
        }
      }
      *((_BYTE*)&v21 + *(int*)(v12 + 96)) = 1;
      goto LABEL_5;
    }
  }
  return result;
}

bool CombatSequenceImpl_10d5530(__int64 a1, __int64 a2)
{
  return !GameRoutine_106c6d0(*(_QWORD**)(a1 + 160), a2);
}

__int64 CombatSequenceImpl_10d5570(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = result;
  if (*GameData_212d448[0] == 0 ||
      (v2 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
      (*(_BYTE*)(v2 + 113) & 0x80) == 0) {
    GameRoutine_10ecd10(result);
    v3 = *(_QWORD*)(v1 + 168);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 40LL))(v3);
    }
    result = GameData_21cd128;
    if (GameData_21cd128 != 0) {
      return MapInfo_825040(GameData_21cd128, 8);
    }
  }
  return result;
}

__int64 CombatSequenceImpl_10d5610(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 168);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    if (GameData_21ec7b0 != 0) {
      v3 = *(_QWORD*)(GameData_21ec7b0 + 8);
      if (v3 != 0 && (*(_BYTE*)(v3 + 115) & 8) != 0) {
        return (***(__int64 (****)(_QWORD, __int64))(a1 + 168))(
            *(_QWORD*)(a1 + 168), a1);
      }
    }
  }
  return result;
}

void CombatSequenceImpl_10d5690(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  _QWORD v14[5];

  v1 = *(_QWORD*)(a1 + 160);
  v3 = *(_QWORD*)(v1 + 8);
  v14[0] = v1;
  v14[1] = v3;
  v4 = *(_QWORD*)(v1 + 128);
  v14[2] = v3;
  v14[3] = v3 + 112;
  v14[4] = v4;
  GameData_22355dc = 1;
  GameRoutine_1092860(v14);
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 120LL);
  if (v5 != 0) {
    *(_BYTE*)(v5 + 109) = 1;
  }
  if (GameData_21cd128 != 0) {
    MapInfo_825040(GameData_21cd128, 9);
  }
  v6 = *(_QWORD*)(a1 + 160);
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = (atomic_ullong*)(v8 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (*(_DWORD*)(v7 + 200) == 2) {
      v10 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 8LL) + 116LL);
      if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v10 & 0x800) != 0) {
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
        if ((v10 & 0x800) != 0) {
          return;
        }
      }
    }
    else if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  else if (*(_DWORD*)(v7 + 200) == 2 && (*(_BYTE*)(v7 + 117) & 8) != 0) {
    return;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 208LL);
  if (*(_DWORD*)(v11 + 56) == 0) {
    *(_DWORD*)(v11 + 56) = 1;
    if (game_ProcGameSkipView_instance_ != 0 &&
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 <=
            2) {
      v12 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v12 & 8) != 0) {
        v13 = 2;
      }
      else {
        v13 = 3;
      }
      if ((v13 & v12) == 0) {
        ActionWaitAttack_10d6f00();
      }
    }
  }
}

__int64 CombatSequenceImpl_10d5820(__int64 a1)
{
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  result = CharacterModel_106cdd0(*(_QWORD**)(a1 + 160));
  if ((result & 1) == 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 208LL) +
                                56LL) -
                     2) >= 3 &&
      *GameData_21300a0[0] == 0) {
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

__int64 CombatSequenceImpl_10d58c0(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 160) + 208LL);
  if (*(int*)(v1 + 56) <= 1) {
    *(_DWORD*)(v1 + 56) = 5;
  }
  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return MapInfo_825790();
  }
  return result;
}

float CombatSequenceImpl_10d6170(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  bool v8;
  __int64 v9;
  bool v10;
  float v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  __int64* v16;
  __int64 v17;
  float v18;
  float result;

  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0 &&
      ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 16LL))(v2, a1) & 1) !=
          0) {
    v3 = 0.0f;
    v4 = *GameData_212d448[0];
    goto LABEL_25;
  }
  v5 = *(_QWORD*)(a1 + 160);
  v6 = *(_QWORD*)(v5 + 32);
  if (v6 == 0) {
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v7 = *(_QWORD**)(v5 + 40);
  v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == nullptr;
  if (v8 || (v9 = v7[10]) == 0 ||
      (*(_QWORD*)(v9 + 8) != -1 ? (v10 = v7[11] == 0) : (v10 = true),
       v10 || *(_QWORD*)(v6 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v6);
  LABEL_18:
    v15 = 1066192077;
    goto LABEL_19;
  }
  std___1___shared_weak_count___release_weak(v6);
  v11 = 1.1f;
  v12 = *(_DWORD*)(v7[46] + 120LL);
  if (v12 > 1131178863) {
    v13 = v12 == 1188437166;
    v14 = 1131178864;
  }
  else {
    v13 = v12 == -1072101930;
    v14 = -1070254888;
  }
  if (v13 || v12 == v14) {
    v15 = 1074580685;
  LABEL_19:
    v11 = *(float*)&v15;
  }
  v16 = &GameData_21ec7b0;
  v4 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
    LOBYTE(v16) =
        (*(_BYTE*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 116LL) & 0x10) != 0;
  }
  if (((GameData_21ec7b0 != 0) & (unsigned __int8)v16) != 0) {
    v3 = 0.0f;
  }
  else {
    v3 = v11;
  }
LABEL_25:
  if (v4 != 0) {
    v17 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
              1000 -
          *(_QWORD*)(v4 + 136);
    v18 = 1000000.0f;
  }
  else {
    v17 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
          1000000;
    v18 = 1000.0f;
  }
  result = v3 + (float)((float)v17 / v18);
  *(float*)(a1 + 192) = result;
  return result;
}

__int64 CombatSequenceImpl_10d6360(__int64 a1)
{
  __int64 result;
  float v3;
  __int64 v4;
  __int64 v5;
  float v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  result = ActionWaitAttack_10d49d0();
  if ((result & 1) != 0 || (*(_BYTE*)(game_g_game_setting + 952) & 1) != 0 ||
      ((v3 = *(float*)(a1 + 192), v4 = *GameData_212d448[0],
        *GameData_212d448[0] == 0)
           ? (result = nn_os_ConvertToTimeSpan(
                  *(_QWORD*)(game_script_hub_g_frame_counter + 344)),
              v5 = result / 1000000, v6 = 1000.0)
           : (result = nn_os_ConvertToTimeSpan(
                  *(_QWORD*)(game_script_hub_g_frame_counter + 344)),
              v5 = result / 1000 - *(_QWORD*)(v4 + 136), v6 = 1000000.0),
       v3 < (float)((float)v5 / v6))) {
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v9 = v8 > 0x10;
      v10 = (1 << v8) & 0x1CE00;
      if (!v9 && v10 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 CombatSequenceImpl_10d64b0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  const char* v8;
  __int64 v9;
  int v10;
  _BYTE v11[200];

  v1 = result;
  v2 = GameData_212d448[0];
  v3 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v4 = *(_QWORD*)(v3 + 8)) == 0 ||
      (*(_BYTE*)(v4 + 113) & 0x80) == 0) {
    v5 = *(_QWORD*)(result + 168);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
      v3 = *v2;
    }
    v6 = *(_QWORD*)(v3 + 8);
    if (v6 == 0) {
      goto LABEL_15;
    }
    v7 = *(_DWORD*)(v6 + 112);
    if ((v7 & 0x180) != 0) {
      v8 = "FadeTime_SE_BlazeArts_Out";
    }
    else if ((v7 & 8) != 0) {
      v8 = "FadeTime_SE_Gambit_Out";
    }
    else {
      if ((v7 & 0x10) == 0) {
        goto LABEL_15;
      }
      v8 = "FadeTime_SE_Onslaught_Out";
    }
    snd_Fade_Fade_10cb00(v11, v8);
    v9 = *game_sound_g_game_sound_ptr[0];
    *(float*)(v9 + 520) = snd_Fade_getTime(v11);
    snd_Fade_Destroy_Fade(v11);
    v3 = *v2;
  LABEL_15:
    v10 = *(_DWORD*)(*(_QWORD*)(v3 + 8) + 112LL);
    if ((v10 & 0x2040) == 0x40) {
      return GameRoutine_10edf90(v1);
    }
    else if ((v10 & 0x1020) != 0) {
      *GameData_212d168 = 2;
      return game_GameView_Update();
    }
    else if ((v10 & 0x190) != 0) {
      return GameRoutine_10f9330(v1);
    }
    else {
      return GameRoutine_10ecf30(v1);
    }
  }
  return result;
}

__int64 CombatSequenceImpl_10d6630(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  if (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v1 + 113) & 0x80) == 0) {
    if (GameData_22365a0 != 0) {
      return result;
    }
    if (GameData_21cd128 != 0) {
      v2 = result;
      MapInfo_825790_alt1(GameData_21cd128);
      result = v2;
    }
  }
  v3 = *(unsigned __int8**)(result + 16);
  if (v3 != nullptr) {
    v4 = *v3;
    v5 = v4 > 0x10;
    v6 = (1 << v4) & 0x1CE00;
    if (!v5 && v6 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

void game_combat_CombatSequenceImpl_DieTalkOrNothing_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  char v3;

  v2 = *a2;
  if (*(int*)(*(_QWORD*)(*GameData_212d448[0] + 8) +
              96LL * *(int*)(*(_QWORD*)(*a2 + 392) + 96LL) + 280) < 1) {
    v3 = 1;
  }
  else {
    v3 = 2;
  }
  *(_BYTE*)(v2 + 425) = 1;
  *(_BYTE*)(v2 + 424) = v3;
}

__int64 CombatSequenceImpl_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = game_combat_CombatSequenceImpl_vtable;
  *(_QWORD*)(a1 + 152) = GameData_200ba78;
  GameRoutine_8234c0();
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ec7b0 + 24LL))(GameData_21ec7b0);
  if (GameData_21ec7b0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ec7b0 + 8LL))(GameData_21ec7b0);
  }
  GameData_21ec7b0 = 0;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      if (*(_QWORD*)(v5 - 8) != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  v16 = *(_QWORD*)(a1 + 184);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  GameData_2235e20 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
