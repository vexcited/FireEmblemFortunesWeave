#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1225b60(_QWORD, _QWORD);
__int64 GameRoutine_1225d20(_QWORD, _QWORD);
__int64 GameRoutine_122ce20(_QWORD, _QWORD);
__int64 GameRoutine_122d3c0(_QWORD, _QWORD);
__int64 GameRoutine_1257620(_QWORD, _QWORD);
__int64 GameRoutine_1272ce0(_QWORD, _QWORD);
__int64 GameRoutine_1272e40(_QWORD, _QWORD);
__int64 GameRoutine_12b3d60(_QWORD);
__int64 GameRoutine_629ac0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_727360(_QWORD);
__int64 GameRoutine_7c51c0(void);
__int64 GameRoutine_80cb30(_QWORD);
__int64 GameRoutine_80f430(void);
__int64 GameRoutine_813f40(_QWORD);
__int64 GameRoutine_814160(_QWORD);
__int64 GameRoutine_819400(_QWORD);
__int64 GameRoutine_828620(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_9609c0(_QWORD);
__int64 GameRoutine_960b80(_QWORD);
__int64 GameRoutine_9a4300(_QWORD);
__int64 GameRoutine_a85600(_QWORD);
__int64 GameRoutine_d2f6f0(void);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern _DWORD GameData_21d925c[32];
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_1f93780[])();
extern __int64 (*GameData_1f937f8[])();
extern __int64 (*GameData_1f93890[])();
extern __int64 (*game_map_anonymous_ProcMapSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212d028[4];
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
extern __int64 GameData_21cd158;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea58;
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212d6d0;
extern __int64* GameData_2130668[3];
extern __int64* GameData_2130670[2];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_21d92dc;
extern int GameData_21fa960;
float snd_getDefineValue(_QWORD, float);
__int64 ProcMapSeq_Destructor(__int64 a1);
__int64 ProcMapSeq_Unknown12(__int64 result);
__int64 ProcMapSeq_Unknown20(__int64 a1, __int64 a2);
__int64 ProcMapSeq_Unknown21(__int64 a1, __int64* a2);
__int16* game_8697c0(__int16* result, char, float);
__int64 Camera_7beed0(__int64);
__int64 Camera_7bf8f0(__int64);
__int64 GameRoutine_1366260(char*, char);
__int64 GameRoutine_1366820(__int64 result);
__int64 MapInfo_8247c0(__int64 result);
__int64 RenderTask_1369e30(__int64, unsigned int);
__int64 game_map_MapDrawer_DrawMap();
__int64 game_map_Zoom_CreateZoomSeq(__int64 result);
__int64 game_map_fe9ba0(float32x4_t*);
bool game_869980();
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfe0[6];
extern __int64* GameData_212cff8[3];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21f1c48;
extern __int64 GameData_21f1c50;
extern __int64 GameData_21f1c60;
extern __int64 GameData_21f1c68;
extern __int64 GameData_21f1dc8;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa9470[9];
extern char GameData_21f1dd8[];
void Transparent_fe8fa0();
void UnitActor_81d540(__int64);
void ProcMapSeq_Unknown3(__int64 a1);
__int64 ProcMapSeq_Unknown4();
__int64 ProcMapSeq_Unknown5();

__int64 ProcMapSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD v29[25];

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeq_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1f93780;
  v2 = a1 + 208;
  *(_QWORD*)(a1 + 216) = GameData_1f937f8;
  v3 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 16LL);
  v4 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 24LL);
  while (v3 != v4) {
    v5 = *v3++;
    GameRoutine_12b3d60(v5);
  }
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v7 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v6;
  v8 = *(__int64**)(v7 + 72);
  v9 = *(__int64**)(v7 + 80);
  while (v8 != v9) {
    v10 = *v8++;
    GameRoutine_1257620(v10, 0);
  }
  if ((*(_BYTE*)(a1 + 234) & 1) == 0) {
    snd_Fade_Fade_10c830(v29, -1.0);
    GameRoutine_80cb30(v29);
    snd_Fade_Destroy_Fade(v29);
    *(_BYTE*)(a1 + 234) = 1;
  }
  GameRoutine_80f430();
  if (*(_QWORD*)GameData_212d028[0] != 0) {
    GameRoutine_d2f6f0();
  }
  GameRoutine_9a4300(1);
  LODWORD(v29[0]) = 15;
  v11 = game_UnitPool_GetFirst(v29);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 432);
    if (v12 == 0) {
      v26 = *(_QWORD*)(v11 + 440);
      if (v26 == 0 || (v27 = *(unsigned __int8*)(v26 + 16)) > 8) {
      LABEL_22:
        GameRoutine_819400(v11);
        goto LABEL_23;
      }
      v28 = 24LL * (unsigned int)v27 + 556024;
      while (1) {
        if (v27 <= 2) {
          v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v28);
          if (v12 != 0) {
            break;
          }
        }
        ++v27;
        v28 += 24;
        if (v27 == 9) {
          goto LABEL_22;
        }
      }
    }
    while (1) {
      do {
        v13 = v12;
        GameRoutine_819400(v11);
        v12 = *(_QWORD*)(v13 + 432);
        v11 = v13;
      } while (v12 != 0);
      v14 = *(_QWORD*)(v13 + 440);
      if (v14 == 0) {
        break;
      }
      v15 = *(unsigned __int8*)(v14 + 16);
      if (v15 > 8) {
        break;
      }
      v16 = 24LL * (unsigned int)v15 + 556024;
      while (1) {
        if (v15 <= 2) {
          v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v16);
          if (v12 != 0) {
            break;
          }
        }
        ++v15;
        v16 += 24;
        if (v15 == 9) {
          goto LABEL_21;
        }
      }
      v11 = v13;
    }
  LABEL_21:
    v11 = v13;
    goto LABEL_22;
  }

LABEL_23:
  GameRoutine_a85600(*(_QWORD*)GameData_212c638);
  GameRoutine_727360(a1);
  if (*(_BYTE*)(a1 + 233) == 1) {
    v17 = GameData_212cfb0[0];
    if (game_GameModeData_instance_ != 0 &&
        *(_QWORD*)(game_GameModeData_instance_ + 16) != 0) {
      GameRoutine_629ac0(*as_g_script_manager_ptr, *GameData_212cfb0[0] + 16);
    }
    if (GameData_21eea58 == 0 || (*(_BYTE*)(GameData_21eea58 + 32) & 1) == 0) {
      GameRoutine_828620(game_GameModeData_instance_ + 40, 1);
    }
    (*(void (**)(__int64))(*(_QWORD*)*v17 + 24LL))(*v17);
    if (*v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v17 + 8LL))(*v17);
    }
    *v17 = 0;
    *(_BYTE*)(a1 + 233) = 0;
  }
  v18 = --GameData_21d92dc;
  *GameData_212d168 = GameData_21d925c[v18];
  GameRoutine_7c51c0();
  v19 = *game_sound_g_game_sound_ptr[0];
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    *(_DWORD*)(v19 + 2480) = 0;
    snd_Fade_Fade_10c910(v29, 125);
    LODWORD(v20) = 1.0;
    if (*(_DWORD*)(v19 + 2752) == 1 && *(_DWORD*)(v19 + 2480) >= 1) {
      *(float*)&v20 =
          snd_getDefineValue("SetVolume_SE_Bmap_FootStep", 1.0) / 100.0;
    }
    snd_startSlotVolume_100b50(&GameData_21fa960, v29, v20);
    snd_Fade_Destroy_Fade(v29);
  }
  v22 = *(_QWORD*)(a1 + 248);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v29[0] = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, v29);
  v23 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f93890;
  if (v23 == (_QWORD*)(a1 + 160)) {
    v24 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_48;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))(*v23 + v24))((__int64)v23);

LABEL_48:
  game_script_map_effect_g_sequence = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcMapSeq_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int16* v2;
  float v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64* v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float (**v16)(__int64);
  float v17;
  __int64 v18;
  int v19;
  int v20;
  void (**v21)(__int64);
  __int64 v22;
  int v23;
  int v24;
  int v25;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 i;

  if (*(_BYTE*)(a1 + 232) != 1 || *GameData_212ce98[0] == 0) {
    return;
  }
  if (game_869980()) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v2 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
    }
    else {
      v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (v2[1] * *v2 * v2[2] != 0 ||
        (game_gmap_GmapClock_instance_ != 0
             ? (v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
             : (v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
         game_gmap_GmapClock_instance_ == 0)) {
      v3 = 0x0.0p+0f;
    }
    else {
      v3 = *(float*)(game_gmap_GmapClock_instance_ + 44);
    }
    game_8697c0(v2, 0, v3);
  }
  v4 = GameData_212cfc8[0];
  v5 = *GameData_212cfc8[0];
  if (*(int*)(*GameData_212cfc8[0] + 424) <= 0) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_24;
    }
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_24:
      Camera_7beed0(*(_QWORD*)(v5 + 432));
    }
  }
  v8 = GameData_212cfc0[0];
  v9 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  v10 = *(float*)(v9 + 24);
  v11 = *(float*)(v9 + 28);
  *(_BYTE*)(v9 + 41) = 0;
  if (v11 < v10) {
    v12 = v11 + (**(float (***)(__int64))(v9 + 16))(v9 + 16);
    if (*(float*)(v9 + 24) < v12) {
      v12 = *(float*)(v9 + 24);
    }
    *(float*)(v9 + 28) = v12;
  }
  v13 = *(float*)(v9 + 88);
  v14 = *(float*)(v9 + 92);
  *(_BYTE*)(v9 + 105) = 0;
  if (v14 < v13) {
    v16 = *(float (***)(__int64))(v9 + 80);
    v15 = v9 + 80;
    v17 = v14 + (*v16)(v15);
    if (*(float*)(v15 + 8) < v17) {
      v17 = *(float*)(v15 + 8);
    }
    *(float*)(v15 + 12) = v17;
  }
  game_map_fe9ba0(*(float32x4_t**)GameData_212d038[0]);
  Camera_7bf8f0(*(_QWORD*)(*v4 + 432));
  v18 = *(_QWORD*)GameData_212d028[0];
  v19 = *(unsigned __int8*)(*(_QWORD*)GameData_212d028[0] + 23LL);
  if (*(unsigned __int8*)(*(_QWORD*)GameData_212d028[0] + 24LL) != v19) {
    v20 = *(_DWORD*)(v18 + 16);
    *(_BYTE*)(v18 + 24) = v19;
    if (v19 != 0) {
      *(_DWORD*)(v18 + 16) = v20 - 1;
      if (v20 != 1) {
        goto LABEL_40;
      }
      v21 = (void (**)(__int64))(*(_QWORD*)(v18 + 8) + 8LL);
    }
    else {
      *(_DWORD*)(v18 + 16) = v20 + 1;
      if (v20 != 0) {
        goto LABEL_40;
      }
      v21 = *(void (***)(__int64))(v18 + 8);
    }
    (*v21)(v18 + 8);
  }
LABEL_40:
  v22 = *(_QWORD*)(*v8 + 48);
  v23 = *(unsigned __int8*)(v22 + 8);
  v24 = *(_DWORD*)(v22 + 12);
  if (*(unsigned __int8*)(v18 + 26) != v23 ||
      *(unsigned __int8*)(v18 + 27) != (unsigned __int8)v24) {
    v25 = *(_DWORD*)(v18 + 26);
    *(_DWORD*)(v18 + 26) = v23 & 0xFFFF00FF | ((unsigned __int8)v24 << 8);
    *(_DWORD*)(v18 + 30) = v25;
  }
  game_map_Zoom_CreateZoomSeq(v18);
  *(_BYTE*)(v18 + 23) = 0;
  Transparent_fe8fa0();
  game_map_MapDrawer_DrawMap();
  MapInfo_8247c0(*GameData_212cff8[0]);
  if (*GameData_212cfe0[0] == 0 ||
      *(int*)(*(_QWORD*)(*GameData_212cfe0[0] + 8) + 8LL) <= 0) {
    v27 = *(_QWORD**)(GameData_21ca310 + 56);
    v28 = v27[69500];
    if (v28 != 0) {
      do {
        UnitActor_81d540(v28);
        v28 = *(_QWORD*)(v28 + 432);
      } while (v28 != 0);
      v27 = *(_QWORD**)(GameData_21ca310 + 56);
    }
    v29 = v27[69503];
    if (v29 != 0) {
      do {
        UnitActor_81d540(v29);
        v29 = *(_QWORD*)(v29 + 432);
      } while (v29 != 0);
      v27 = *(_QWORD**)(GameData_21ca310 + 56);
    }
    v30 = v27[69506];
    if (v30 != 0) {
      do {
        UnitActor_81d540(v30);
        v30 = *(_QWORD*)(v30 + 432);
      } while (v30 != 0);
      v27 = *(_QWORD**)(GameData_21ca310 + 56);
    }
    for (i = v27[69509]; i != 0; i = *(_QWORD*)(i + 432)) {
      UnitActor_81d540(i);
    }
  }
}

__int64 ProcMapSeq_Unknown4()
{
  int* v0;
  __int64 i;
  __int64 v2;
  __int64 result;
  int* v4;
  __int64 j;
  __int64 v6;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (int*)GameData_21f1c60;
  for (i = GameData_21f1c68; v0 != (int*)i; ++v0) {
    v2 = *v0;
    if ((*((_BYTE*)&GameData_21f1dc8 + v2) & 1) == 0) {
      result = RenderTask_1369e30(ui_Manager_instance_ + 1264, v2);
      *((_BYTE*)&GameData_21f1dc8 + v2) = 1;
    }
  }
  v4 = (int*)GameData_21f1c48;
  for (j = GameData_21f1c50; v4 != (int*)j; ++v4) {
    v6 = *v4;
    if ((GameData_21f1dd8[v6] & 1) == 0) {
      result = GameRoutine_1366260(GameData_1fa9470[v6], 0);
      GameData_21f1dd8[v6] = 1;
    }
  }
  return result;
}

__int64 ProcMapSeq_Unknown5()
{
  int* v0;
  __int64 i;
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  __int64 j;
  __int64 v7;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = (int*)GameData_21f1c60;
  for (i = GameData_21f1c68; v0 != (int*)i; ++v0) {
    v2 = *v0;
    if (*((_BYTE*)&GameData_21f1dc8 + v2) == 1) {
      v3 = ui_Manager_instance_ + 376LL * (unsigned int)v2;
      v4 = *(_DWORD*)(v3 + 1636);
      *(_DWORD*)(v3 + 1632) = 1;
      *(_DWORD*)(v3 + 1636) = v4 - 1;
      *((_BYTE*)&GameData_21f1dc8 + v2) = 0;
    }
  }
  v5 = (int*)GameData_21f1c48;
  for (j = GameData_21f1c50; v5 != (int*)j; ++v5) {
    v7 = *v5;
    if (GameData_21f1dd8[v7] == 1) {
      result = GameRoutine_1366820((__int64)GameData_1fa9470[v7]);
      GameData_21f1dd8[v7] = 0;
    }
  }
  return result;
}

__int64 ProcMapSeq_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 17;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 17) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

__int64 ProcMapSeq_Unknown20(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 (**v5)(__int64);
  __int64 v6;
  int v7;
  __int64 (**v8)(__int64, int*);
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 (**v14)(__int64, int*);
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 (**v20)(__int64, int*);
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 (**v26)(__int64, int*);
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 (**v32)(__int64, int*);
  char v33;
  __int64 v34;
  __int64 result;
  int v36;

  v3 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    v5 = *(__int64 (***)(__int64))(v3 + 8);
    v4 = v3 + 8;
    v6 = (*v5)(v4);
    v7 = game_HashString32(v6);
    v8 = *(__int64 (***)(__int64, int*))a2;
    v36 = v7;
    if (((*v8)(a2, &v36) & 1) != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v9;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 16LL))(v4, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21cd140 != 0) {
    v11 = GameData_21cd140 + 8;
    v12 = (**(__int64 (***)(__int64))(GameData_21cd140 + 8))(GameData_21cd140 +
                                                             8);
    v13 = game_HashString32(v12);
    v14 = *(__int64 (***)(__int64, int*))a2;
    v36 = v13;
    if (((*v14)(a2, &v36) & 1) != 0) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      v16 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v16 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v15;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 16LL))(v11, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21cd130 != 0) {
    v17 = GameData_21cd130 + 8;
    v18 = (**(__int64 (***)(__int64))(GameData_21cd130 + 8))(GameData_21cd130 +
                                                             8);
    v19 = game_HashString32(v18);
    v20 = *(__int64 (***)(__int64, int*))a2;
    v36 = v19;
    if (((*v20)(a2, &v36) & 1) != 0) {
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
      v22 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v21;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 16LL))(v17, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21ca300 != 0) {
    v23 = GameData_21ca300 + 8;
    v24 = (**(__int64 (***)(__int64))(GameData_21ca300 + 8))(GameData_21ca300 +
                                                             8);
    v25 = game_HashString32(v24);
    v26 = *(__int64 (***)(__int64, int*))a2;
    v36 = v25;
    if (((*v26)(a2, &v36) & 1) != 0) {
      v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
      v28 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v28 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v27;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 16LL))(v23, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21cd158 != 0) {
    v29 = GameData_21cd158 + 8;
    v30 = (**(__int64 (***)(__int64))(GameData_21cd158 + 8))(GameData_21cd158 +
                                                             8);
    v31 = game_HashString32(v30);
    v32 = *(__int64 (***)(__int64, int*))a2;
    v36 = v31;
    if (((*v32)(a2, &v36) & 1) != 0) {
      v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      v34 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v34 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = v33;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v29 + 16LL))(v29, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  GameRoutine_1225b60(*GameData_2130668[0], a2);
  GameRoutine_1272ce0(*GameData_2130670[0], a2);
  GameRoutine_813f40(a2);
  GameRoutine_9609c0(a2);
  result = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    return GameRoutine_122ce20(GameData_22400f8, a2);
  }
  return result;
}

__int64 ProcMapSeq_Unknown21(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 (**v5)(__int64);
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  int v31;

  v3 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    v5 = *(__int64 (***)(__int64))(v3 + 8);
    v4 = v3 + 8;
    v6 = (*v5)(v4);
    v7 = game_HashString32(v6);
    v8 = *a2;
    v31 = v7;
    if (((*(__int64 (**)(__int64*, int*))(v8 + 16))(a2, &v31) & 1) != 0) {
      v9 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v9 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v4 + 24LL))(
          v4, a2, *(unsigned __int8*)(a2[1] + v9));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21cd140 != 0) {
    v10 = GameData_21cd140 + 8;
    v11 = (**(__int64 (***)(__int64))(GameData_21cd140 + 8))(GameData_21cd140 +
                                                             8);
    v12 = game_HashString32(v11);
    v13 = *a2;
    v31 = v12;
    if (((*(__int64 (**)(__int64*, int*))(v13 + 16))(a2, &v31) & 1) != 0) {
      v14 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v14 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v10 + 24LL))(
          v10, a2, *(unsigned __int8*)(a2[1] + v14));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21cd130 != 0) {
    v15 = GameData_21cd130 + 8;
    v16 = (**(__int64 (***)(__int64))(GameData_21cd130 + 8))(GameData_21cd130 +
                                                             8);
    v17 = game_HashString32(v16);
    v18 = *a2;
    v31 = v17;
    if (((*(__int64 (**)(__int64*, int*))(v18 + 16))(a2, &v31) & 1) != 0) {
      v19 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v19 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v15 + 24LL))(
          v15, a2, *(unsigned __int8*)(a2[1] + v19));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21ca300 != 0) {
    v20 = GameData_21ca300 + 8;
    v21 = (**(__int64 (***)(__int64))(GameData_21ca300 + 8))(GameData_21ca300 +
                                                             8);
    v22 = game_HashString32(v21);
    v23 = *a2;
    v31 = v22;
    if (((*(__int64 (**)(__int64*, int*))(v23 + 16))(a2, &v31) & 1) != 0) {
      v24 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v24 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v20 + 24LL))(
          v20, a2, *(unsigned __int8*)(a2[1] + v24));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21cd158 != 0) {
    v25 = GameData_21cd158 + 8;
    v26 = (**(__int64 (***)(__int64))(GameData_21cd158 + 8))(GameData_21cd158 +
                                                             8);
    v27 = game_HashString32(v26);
    v28 = *a2;
    v31 = v27;
    if (((*(__int64 (**)(__int64*, int*))(v28 + 16))(a2, &v31) & 1) != 0) {
      v29 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v29 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v25 + 24LL))(
          v25, a2, *(unsigned __int8*)(a2[1] + v29));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  GameRoutine_1225d20(*GameData_2130668[0], a2);
  GameRoutine_1272e40(*GameData_2130670[0], a2);
  GameRoutine_814160(a2);
  GameRoutine_960b80(a2);
  result = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    return GameRoutine_122d3c0(GameData_22400f8, a2);
  }
  return result;
}

#pragma GCC visibility pop
