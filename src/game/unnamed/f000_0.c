#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ad35e8;
extern _UNKNOWN GameData_1ae2ba3;
extern _UNKNOWN GameData_1af1e76;
extern _QWORD GameData_1b01568[4];
extern float GameData_1b10228[965];
extern __int64 (*GameData_1f960e8[])();
extern __int64 (*GameData_1fad738[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64 GameData_212c470;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c6a0[3];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212d458[7];
extern __int64 GameData_212dbe8[3];
extern __int64 GameData_212dbf0[2];
extern __int64* GameData_212e250;
extern __int64* GameData_212ebc8[4];
extern char* GameData_2135468;
extern __int64* GameData_21359e0;
extern int* GameData_21359e8;
extern __int64 GameData_21a35c8;
extern __int64 GameData_21a60d8;
extern __int64 GameData_21caab0;
extern int GameData_21cfa58;
extern int GameData_21cfa5c;
extern int GameData_21cfa60;
extern int GameData_21cfa64;
extern __int64 GameData_21d1f40;
extern __int64 GameData_21ee240;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
__int64 GameRoutine_1006d0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_104e1d0(_QWORD, _QWORD);
__int64 GameRoutine_10b000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10b0e0(_QWORD);
__int64 GameRoutine_10c1070(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10c9b80(float);
__int64 GameRoutine_10cb00(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
float GameRoutine_10d1b0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_120360(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_137cd90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
float GameRoutine_1a0a010(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
float GameRoutine_1a0a950(float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
float GameRoutine_283c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_283c80(_QWORD);
__int64 GameRoutine_283ca0(_QWORD, _QWORD);
__int64 GameRoutine_283cd0(_QWORD);
float GameRoutine_2a51c0(_BYTE*, int, float);
float GameRoutine_2a5270(_QWORD, float);
__int64 GameRoutine_327a60(_QWORD, _QWORD);
__int64 GameRoutine_32ffe0(_QWORD, _QWORD, float);
float GameRoutine_3328d0(__int64, unsigned int, unsigned int, char, float,
                         float, float, float);
__int64 GameRoutine_3865a0(void);
__int64 GameRoutine_3dae00(_QWORD);
__int64 GameRoutine_506fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float);
__int64 GameRoutine_507c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_55af80(_QWORD);
__int64 GameRoutine_60a270(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_764060(_QWORD, _QWORD);
__int64 GameRoutine_80cb30(_QWORD);
__int64 GameRoutine_9185e0(void);
__int64 GameRoutine_b86fb0(_QWORD, _QWORD);
__int64 GameRoutine_c44560(_QWORD, _QWORD);
__int64 GameRoutine_c72b30(_QWORD, _QWORD);
__int64 GameRoutine_cb90b0(_QWORD, float);
__int64 GameRoutine_d0e440(_QWORD, _QWORD);
__int64 GameRoutine_d86560(_QWORD);
struct PseudoSret GameRoutine_d98c0(void);
__int64 GameRoutine_e1a6d0(_QWORD, _QWORD);
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
__attribute__((swiftcall)) void game_cfdb00(PSEUDO_X8, __int64, float32x4_t*,
                                            float32x4_t*, char);
__attribute__((swiftcall)) void snd_BGM_getFirstNameString(PSEUDO_X8, __int64);
__int64 GameHr_cdeee0(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_hub_d97c00(_QWORD*, char);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
__int64 snd_Fade_Fade_10cd70(__int64, __int64);
__int64 snd_a2c9c0(__int64 result, __int64);
double snd_Fade_getTime(__int64);
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* snd_g_memory_ptr[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void snd_Fade_Fade_10c910(__int64, int);
__int64 GameHr_80cb30(__int64 a1);
__int64 GameHr_cded70(__int64 a1);
bool GameHr_cfd990(__int64 a1, __int64 a2);
float GameHr_d78cb0(float* a1, float a2);
__int64 BaseNx_283c80(__int64);
__int64 BaseNx_283ca0(__int64, int);
bool GameRoutine_283cd0_alt1(__int64) __asm__("GameRoutine_283cd0");
float GameRoutine_283c40_alt1(__int64, int, int) __asm__("GameRoutine_283c40");
float GameRoutine_2a5270_alt1(unsigned int*,
                              float) __asm__("GameRoutine_2a5270");
__int64 GameRoutine_10d050_alt1(__int64, __int64) __asm__("GameRoutine_10d050");
float GameRoutine_d28060_alt1(void) __asm__("GameRoutine_d28060");
__int64 GameRoutine_d8d1a0_alt1(__int64) __asm__("GameRoutine_d8d1a0");
void* SoundVoiceNX_14e360();
void GameHr_2a8b80(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                   __int64 a6);

__int64 GameHr_10ab80(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;

  v2 = 0;
  v3 = (*(float (**)(_QWORD))(*(_QWORD*)*GameData_212e250 + 72LL))(
           *GameData_212e250) /
       16.667f;
  do {
    v4 = a1 + v2;
    v5 = *(float*)(a1 + v2 + 56);
    v6 = *(float*)(a1 + v2 + 64);
    v7 = v5;
    if (v6 != 0.0f) {
      v8 = *(float*)(v4 + 60);
      v7 = v5 + (float)(v6 * v3);
      *(float*)(v4 + 56) = v7;
      if (v6 >= 0.0f) {
        if (v7 <= v8) {
          goto LABEL_10;
        }
      LABEL_9:
        v7 = v8;
        *(float*)(v4 + 56) = v8;
        *(_DWORD*)(v4 + 64) = 0;
        goto LABEL_10;
      }
      if (v7 < v8) {
        goto LABEL_9;
      }
    }
  LABEL_10:
    if (v5 == v7) {
      v9 = a1 + v2;
      v10 = *(float*)(a1 + v2 + 68);
      v11 = *(float*)(a1 + v2 + 76);
      v12 = v10;
      if (v11 == 0.0f) {
        goto LABEL_19;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 0, *(unsigned int*)(v4 + 372),
                         v7 * *(float*)(v4 + 188));
      v9 = a1 + v2;
      v10 = *(float*)(a1 + v2 + 68);
      v11 = *(float*)(a1 + v2 + 76);
      v12 = v10;
      if (v11 == 0.0f) {
        goto LABEL_19;
      }
    }
    v13 = *(float*)(v9 + 72);
    v12 = v10 + (float)(v11 * v3);
    *(float*)(v9 + 68) = v12;
    if (v11 >= 0.0f) {
      if (v12 <= v13) {
        goto LABEL_19;
      }
    LABEL_18:
      v12 = v13;
      *(float*)(v9 + 68) = v13;
      *(_DWORD*)(v9 + 76) = 0;
      goto LABEL_19;
    }
    if (v12 < v13) {
      goto LABEL_18;
    }
  LABEL_19:
    if (v10 == v12) {
      v14 = a1 + v2;
      v15 = *(float*)(a1 + v2 + 80);
      v16 = *(float*)(a1 + v2 + 88);
      v17 = v15;
      if (v16 == 0.0f) {
        goto LABEL_28;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 1, *(unsigned int*)(v4 + 372),
                         v12 * *(float*)(a1 + v2 + 192));
      v14 = a1 + v2;
      v15 = *(float*)(a1 + v2 + 80);
      v16 = *(float*)(a1 + v2 + 88);
      v17 = v15;
      if (v16 == 0.0f) {
        goto LABEL_28;
      }
    }
    v18 = *(float*)(v14 + 84);
    v17 = v15 + (float)(v16 * v3);
    *(float*)(v14 + 80) = v17;
    if (v16 >= 0.0f) {
      if (v17 <= v18) {
        goto LABEL_28;
      }
    LABEL_27:
      v17 = v18;
      *(float*)(v14 + 80) = v18;
      *(_DWORD*)(v14 + 88) = 0;
      goto LABEL_28;
    }
    if (v17 < v18) {
      goto LABEL_27;
    }
  LABEL_28:
    if (v15 == v17) {
      v19 = a1 + v2;
      v20 = *(float*)(a1 + v2 + 100);
      if (v20 == 0.0f) {
        goto LABEL_37;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 2, *(unsigned int*)(v4 + 372),
                         v17 * *(float*)(a1 + v2 + 196));
      v19 = a1 + v2;
      v20 = *(float*)(a1 + v2 + 100);
      if (v20 == 0.0f) {
        goto LABEL_37;
      }
    }
    v21 = *(float*)(v19 + 96);
    v22 = *(float*)(v19 + 92) + (float)(v20 * v3);
    *(float*)(v19 + 92) = v22;
    if (v20 >= 0.0f) {
      if (v22 <= v21) {
        goto LABEL_37;
      }
    LABEL_36:
      *(float*)(v19 + 92) = v21;
      *(_DWORD*)(v19 + 100) = 0;
      goto LABEL_37;
    }
    if (v22 < v21) {
      goto LABEL_36;
    }
  LABEL_37:
    v23 = *(float*)(v19 + 112);
    if (v23 != 0.0f) {
      v24 = *(float*)(v19 + 104) + (float)(v23 * v3);
      v25 = *(float*)(a1 + v2 + 108);
      *(float*)(v19 + 104) = v24;
      if (v23 >= 0.0f) {
        if (v24 <= v25) {
          goto LABEL_43;
        }
      LABEL_42:
        *(float*)(v19 + 104) = v25;
        *(_DWORD*)(v19 + 112) = 0;
        goto LABEL_43;
      }
      if (v24 < v25) {
        goto LABEL_42;
      }
    }
  LABEL_43:
    v26 = a1 + v2;
    v27 = *(float*)(a1 + v2 + 124);
    if (v27 != 0.0f) {
      v28 = *(float*)(v26 + 120);
      v29 = *(float*)(v26 + 116) + (float)(v27 * v3);
      *(float*)(v26 + 116) = v29;
      if (v27 >= 0.0f) {
        if (v29 <= v28) {
          goto LABEL_49;
        }
      LABEL_48:
        *(float*)(v26 + 116) = v28;
        *(_DWORD*)(v26 + 124) = 0;
        goto LABEL_49;
      }
      if (v29 < v28) {
        goto LABEL_48;
      }
    }
  LABEL_49:
    v30 = *(float*)(v26 + 136);
    if (v30 != 0.0f) {
      v31 = *(float*)(v26 + 128) + (float)(v30 * v3);
      v32 = *(float*)(a1 + v2 + 132);
      *(float*)(v26 + 128) = v31;
      if (v30 >= 0.0f) {
        if (v31 <= v32) {
          goto LABEL_55;
        }
      LABEL_54:
        *(float*)(v26 + 128) = v32;
        *(_DWORD*)(v26 + 136) = 0;
        goto LABEL_55;
      }
      if (v31 < v32) {
        goto LABEL_54;
      }
    }
  LABEL_55:
    v33 = a1 + v2;
    v34 = *(float*)(a1 + v2 + 148);
    if (v34 != 0.0f) {
      v35 = *(float*)(v33 + 144);
      v36 = *(float*)(v33 + 140) + (float)(v34 * v3);
      *(float*)(v33 + 140) = v36;
      if (v34 >= 0.0f) {
        if (v36 <= v35) {
          goto LABEL_61;
        }
      LABEL_60:
        *(float*)(v33 + 140) = v35;
        *(_DWORD*)(v33 + 148) = 0;
        goto LABEL_61;
      }
      if (v36 < v35) {
        goto LABEL_60;
      }
    }
  LABEL_61:
    v37 = *(float*)(v33 + 160);
    if (v37 != 0.0f) {
      v38 = *(float*)(v33 + 152) + (float)(v37 * v3);
      v39 = *(float*)(a1 + v2 + 156);
      *(float*)(v33 + 152) = v38;
      if (v37 >= 0.0f) {
        if (v38 <= v39) {
          goto LABEL_67;
        }
      LABEL_66:
        *(float*)(v33 + 152) = v39;
        *(_DWORD*)(v33 + 160) = 0;
        goto LABEL_67;
      }
      if (v38 < v39) {
        goto LABEL_66;
      }
    }
  LABEL_67:
    v40 = a1 + v2;
    v41 = *(float*)(a1 + v2 + 172);
    if (v41 != 0.0f) {
      v42 = *(float*)(v40 + 168);
      v43 = *(float*)(v40 + 164) + (float)(v41 * v3);
      *(float*)(v40 + 164) = v43;
      if (v41 >= 0.0f) {
        if (v43 <= v42) {
          goto LABEL_73;
        }
      LABEL_72:
        *(float*)(v40 + 164) = v42;
        *(_DWORD*)(v40 + 172) = 0;
        goto LABEL_73;
      }
      if (v43 < v42) {
        goto LABEL_72;
      }
    }
  LABEL_73:
    v44 = *(float*)(v40 + 184);
    if (v44 != 0.0f) {
      v45 = *(float*)(v40 + 176) + (float)(v44 * v3);
      v46 = *(float*)(a1 + v2 + 180);
      *(float*)(v40 + 176) = v45;
      if (v44 >= 0.0f) {
        if (v45 > v46) {
        LABEL_2:
          *(float*)(v40 + 176) = v46;
          *(_DWORD*)(v40 + 184) = 0;
        }
      }
      else if (v45 < v46) {
        goto LABEL_2;
      }
    }
    v2 += 360;
  } while (v2 != 1440);
  return GameRoutine_10b0e0(a1);
}

void GameHr_10c480(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4,
                   float a5)
{
  float* v9;
  __int64 v10;
  float v11;
  float v12;
  bool v13;
  float* v15;
  float v16;
  float v17;

  v9 = (float*)(a1 + 360LL * (int)a2 + 56);
  if (a4 == 11) {
    v10 = 0;
    while (1) {
      v11 = *v9;
      v12 = GameRoutine_10d1b0(a3);
      v9[1] = a5;
      if (v12 == 0.0f) {
        break;
      }
      v13 = v11 == *v9;
      v9[2] = (float)(a5 - *v9) / (float)(v12 / 16.667f);
      if (!v13) {
        goto LABEL_8;
      }
    LABEL_3:
      ++v10;
      v9 += 3;
      if (v10 == 11) {
        return;
      }
    }
    *v9 = a5;
    v9[2] = 0.0f;
    if (v11 == a5) {
      goto LABEL_3;
    }
  LABEL_8:
    GameRoutine_10b000(a1, a2, (unsigned int)v10);
    goto LABEL_3;
  }
  v15 = &v9[3 * a4];
  v16 = *v15;
  v17 = GameRoutine_10d1b0(a3);
  v15[1] = a5;
  if (v17 == 0.0f) {
    *v15 = a5;
    v15[2] = 0.0f;
    if (v16 == a5) {
      return;
    }
    goto LABEL_11;
  }
  v13 = v16 == *v15;
  v15[2] = (float)(a5 - *v15) / (float)(v17 / 16.667f);
  if (!v13) {
  LABEL_11:
    GameRoutine_10b000(a1, a2, a4);
  }
}

__int64 GameHr_2a4fe0(float a1)
{
  bool v1;
  float v2;
  float v3;

  v1 = a1 < 0.0f;
  v2 = fminf(a1, 1.0f);
  v3 = 0.0f;
  if (!v1) {
    v3 = v2;
  }
  if (v3 < 0.13561f) {
    return 80;
  }
  if (v3 >= 0.9f) {
    return 16000;
  }
  return *(unsigned __int16*)&GameData_2135468
      [2 * (int)(float)((float)(v3 + -0.13561f) / 0.033333f)];
}

float GameHr_2a5490(float a1)
{
  float v1;
  float v2;
  bool v3;
  float v4;

  v1 = -90.4f;
  if (a1 >= -90.4f) {
    v1 = a1;
  }
  v2 = v1 * 10.0f;
  v3 = a1 <= 6.0f;
  v4 = 60.0f;
  if (v3) {
    v4 = v2;
  }
  return GameData_1b10228[(int)v4 + 904];
}

void GameHr_2a8b80(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                   __int64 a6)
{

#pragma clang fp contract(off)
  int v12;
  unsigned __int8* v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  float v24;
  float v25;
  __int64 i;
  int v27;
  int v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  int v44;
  __int64 v45;

  v12 = *((_DWORD*)SoundVoiceNX_14e360() + 56);
  v13 = (unsigned __int8*)SoundVoiceNX_14e360();
  if (*(_DWORD*)(a3 + 4) != 0) {
    v14 = a3 + 24LL * a5;
    v16 = *(float*)(v14 + 8);
    v15 = *(float*)(v14 + 12);
    v18 = *(float*)(v14 + 16);
    v17 = *(float*)(v14 + 20);
    v20 = *(_DWORD*)(v14 + 24);
    v19 = *(_DWORD*)(v14 + 28);
    v21 = *((_DWORD*)SoundVoiceNX_14e360() + 57);
    if (v21 != 1) {
      goto LABEL_3;
    }
    goto LABEL_88;
  }
  v22 = v13[1961];
  v45 = 0;
  if (v22 == 1) {
    HIBYTE(v45) = 1;
  }
  v23 = a1[62];
  if (v23 <= 3) {
    if (v23 > 1) {
      if (v23 == 2) {
        LODWORD(v45) = 0;
        goto LABEL_51;
      }
      LODWORD(v45) = 1;
      if ((unsigned int)(v12 - 1) < 2) {
        goto LABEL_56;
      }
    }
    else {
      if (v23 != 1) {
      LABEL_48:
        LODWORD(v45) = 0;
        if ((unsigned int)(v12 - 1) < 2) {
          goto LABEL_56;
        }
        goto LABEL_71;
      }
      LODWORD(v45) = 0;
      BYTE4(v45) = 1;
      if ((unsigned int)(v12 - 1) < 2) {
        goto LABEL_56;
      }
    }
  LABEL_71:
    v32 = 0x0.0p+0f;
    v31 = 0x0.0p+0f;
    v36 = 0x0.0p+0f;
    v37 = 0x0.0p+0f;
    if (v12 != 0) {
      goto LABEL_87;
    }
    v31 = GameRoutine_2a51c0(&v45, 0, 0x0.0p+0f);
    v32 = v31;
    goto LABEL_85;
  }
  if (v23 > 5) {
    switch (v23) {
    case 6:
      LODWORD(v45) = 2;
      if ((unsigned int)(v12 - 1) >= 2) {
        goto LABEL_71;
      }
      goto LABEL_56;
    case 7:
      LODWORD(v45) = 2;
      BYTE4(v45) = 1;
      if ((unsigned int)(v12 - 1) < 2) {
        goto LABEL_56;
      }
      goto LABEL_71;
    case 8:
      LODWORD(v45) = 2;
      goto LABEL_51;
    default:
      break;
    }
    goto LABEL_48;
  }
  if (v23 == 4) {
    LODWORD(v45) = 1;
    BYTE4(v45) = 1;
    if ((unsigned int)(v12 - 1) < 2) {
      goto LABEL_56;
    }
    goto LABEL_71;
  }
  LODWORD(v45) = 1;
LABEL_51:
  WORD2(v45) = 257;
  if ((unsigned int)(v12 - 1) >= 2) {
    goto LABEL_71;
  }
LABEL_56:
  v29 = a1[49];
  v30 = a1[61];
  if (v29 < 2 || v30 != 1) {
    if (a1[48] != 0 && v30 != 0) {
      if (*((_BYTE*)SoundVoiceNX_14e360() + 1961) != 1) {
        v39 = *(float*)(a3 + 56);
        if (a1[48] == 1) {
          v32 = GameRoutine_2a51c0(&v45, v12, v39);
          v31 = 0x0.0p+0f;
          goto LABEL_83;
        }
        goto LABEL_81;
      }
      v29 = a1[49];
    }
    v33 = *(float*)(a3 + 56);
    if (a5 != 0 || v29 != 2) {
      v38 = a1[48];
      if (a5 == 1 && v29 == 2) {
        if (v38 != 1) {
        LABEL_111:
          v34 = 0x1.0000000000000p+0f;
          goto LABEL_68;
        }
      }
      else if (v38 != 1) {
        if (v38 != 2) {
          goto LABEL_69;
        }
        goto LABEL_111;
      }
    }
    v34 = -0x1.0000000000000p+0f;
  LABEL_68:
    v33 = v33 + v34;
  LABEL_69:
    v32 = GameRoutine_2a51c0(&v45, v12, v33);
    v35 = 0x0.0p+0f - v33;
  LABEL_82:
    v31 = GameRoutine_2a51c0(&v45, v12, v35);
    goto LABEL_83;
  }
  if (a5 == 1) {
    v39 = *(float*)(a3 + 56);
  LABEL_81:
    v32 = 0x0.0p+0f;
    v35 = 0x0.0p+0f - v39;
    goto LABEL_82;
  }
  v31 = 0x0.0p+0f;
  if (a5 != 0) {
    v32 = 0x0.0p+0f;
  }
  else {
    v32 = GameRoutine_2a51c0(&v45, v12, *(float*)(a3 + 56));
  }
LABEL_83:
  if (v12 != 2) {
  LABEL_85:
    v36 = GameRoutine_2a5270_alt1((unsigned int*)&v45, 0x0.0p+0f);
    v40 = 0x1.0000000000000p+1f;
    goto LABEL_86;
  }
  v36 = GameRoutine_2a5270_alt1((unsigned int*)&v45, *(float*)(a3 + 60));
  v40 = 0x1.0000000000000p+1f - *(float*)(a3 + 60);
LABEL_86:
  v37 = GameRoutine_2a5270_alt1((unsigned int*)&v45, v40);
LABEL_87:
  v16 = v32 * v36;
  v15 = v31 * v36;
  v18 = v32 * v37;
  v17 = v31 * v37;
  v19 = 0;
  v20 = 0;
  v21 = *((_DWORD*)SoundVoiceNX_14e360() + 57);
  if (v21 != 1) {
  LABEL_3:
    if (v21 == 0) {
      if (v12 == 2) {
        v24 = v18 + v16;
        v25 = v17 + v15;
        v17 = 0x0.0p+0f;
        v18 = 0x0.0p+0f;
        v15 = (float)(v25 + v24) * 0x1.0000000000000p-1f;
        v16 = v15;
      }
      else if (v12 == 1) {
        v15 = (float)(v15 + v16) * 0x1.0000000000000p-1f;
        v16 = v15;
        if (a4 == 0) {
          goto LABEL_91;
        }
        goto LABEL_22;
      }
    }
    if (a4 == 0) {
    LABEL_91:
      v43 = 0;
      while (1) {
        if (v43 < (*(int (**)(__int64))(*(_QWORD*)a6 + 56LL))(a6)) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)a6 + 72LL))(
              a6, (unsigned int)v43);
          v44 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 80LL))(
              a6, (unsigned int)v43);
          if (v44 > 2) {
            switch (v44) {
            case 3:
              *(float*)(a2 + 4 * v43) = v17;
              goto LABEL_93;
            case 4:
              *(_DWORD*)(a2 + 4 * v43) = v20;
              goto LABEL_93;
            case 5:
              *(_DWORD*)(a2 + 4 * v43) = v19;
              goto LABEL_93;
            default:
              break;
            }
          }
          else {
            switch (v44) {
            case 0:
              *(float*)(a2 + 4 * v43) = v16;
              goto LABEL_93;
            case 1:
              *(float*)(a2 + 4 * v43) = v15;
              goto LABEL_93;
            case 2:
              *(float*)(a2 + 4 * v43) = v18;
              goto LABEL_93;
            default:
              break;
            }
          }
        }
        *(_DWORD*)(a2 + 4 * v43) = 0;
      LABEL_93:
        if (++v43 == 24) {
          return;
        }
      }
    }
    goto LABEL_22;
  }
LABEL_88:
  v41 = v18 + v16;
  v42 = v17 + v15;
  if (v12 == 2) {
    v17 = 0x0.0p+0f;
    v18 = 0x0.0p+0f;
    v15 = v42;
    v16 = v41;
  }
  if (a4 == 0) {
    goto LABEL_91;
  }
LABEL_22:
  for (i = 0; i != 24; ++i) {
    if (i >= (*(int (**)(__int64))(*(_QWORD*)a6 + 56LL))(a6)) {
    LABEL_23:
      *(_DWORD*)(a2 + 4 * i) = 0;
      continue;
    }
    v27 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 72LL))(
        a6, (unsigned int)i);
    if (GameRoutine_283cd0_alt1(a4) && (BaseNx_283c80(a4) & 1) != 0 &&
        (BaseNx_283ca0(a4, v27) & 1) != 0) {
      *(float*)(a2 + 4 * i) = GameRoutine_283c40_alt1(a4, a5, i);
    }
    else {
      v28 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 80LL))(
          a6, (unsigned int)i);
      if (v28 > 2) {
        switch (v28) {
        case 3:
          *(float*)(a2 + 4 * i) = v17;
          break;
        case 4:
          *(_DWORD*)(a2 + 4 * i) = v20;
          break;
        case 5:
          *(_DWORD*)(a2 + 4 * i) = v19;
          break;
        default:
          goto LABEL_23;
        }
      }
      else if (v28 != 0) {
        if (v28 == 1) {
          *(float*)(a2 + 4 * i) = v15;
        }
        else {
          if (v28 != 2) {
            goto LABEL_23;
          }
          *(float*)(a2 + 4 * i) = v18;
        }
      }
      else {
        *(float*)(a2 + 4 * i) = v16;
      }
    }
  }
}

float GameHr_310130(__int64 a1)
{
  float v1;
  float result;

  *(_QWORD*)a1 = 0;
  *(_BYTE*)(a1 + 10) = 0;
  v1 = *(float*)(GameData_21a35c8 + 4);
  *(_WORD*)(a1 + 8) = 260;
  *(float*)(a1 + 12) = v1 * (float)(v1 * 0.00005f);
  *(float*)(a1 + 16) = v1 * (float)(v1 * 0.000005f);
  result = *(float*)GameData_21359e8;
  *(_DWORD*)(a1 + 24) = -1;
  *(float*)(a1 + 20) = result;
  return result;
}

float GameHr_335480(float result, __int64 a2, __int64 a3, _QWORD* a4)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float* v34;
  _QWORD* v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  unsigned int* v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  float* v48;
  unsigned int v49;
  float v50;
  float v51;
  float* v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float* v68;
  float* v69;
  float v70;
  float v71;
  float v72;
  float v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  float* v77;
  float* v78;
  float v79;

  v4 = (_QWORD*)a4[1];
  v5 = a4[2];
  v6 = a4[7];
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v7 = *(unsigned int*)(a3 + 808);
  if ((unsigned int)v7 >= 2) {
    v8 = *(_QWORD*)(a3 + 800);
    v9 = *(_QWORD*)(a3 + 704);
    v10 = *(_QWORD*)(a3 + 840);
    v11 = 1;
    v12 = *(_QWORD*)(a3 + 672);
    do {
      v43 = 0.0f;
      if (v6 != 0) {
        v44 = (unsigned int*)(v10 + 8 * v11);
        v13 = 0.0f;
        v14 = 0.0f;
        v45 = *((unsigned __int8*)v44 + 4);
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = 0.0f;
        if (*((_BYTE*)v44 + 4) != 0) {
          v46 = *v44;
          if (v45 >= 4) {
            v48 = (float*)(v6 + 8 + 4 * v46);
            v47 = 0;
            do {
              v49 = v46 + v47;
              v50 = *(v48 - 2);
              v51 = *(v48 - 1);
              v47 += 4;
              v52 = (float*)(v12 + 24LL * v49);
              v53 = v43 + (float)(v50 * *v52);
              v54 = v13 + (float)(v50 * v52[1]);
              v55 = v14 + (float)(v50 * v52[2]);
              v56 = v52[4];
              v57 = v52[5];
              v58 = v15 + (float)(v50 * v52[3]);
              v59 = (float*)(v12 + 24LL * (v49 + 1));
              v60 = v16 + (float)(v50 * v56);
              v61 = v17 + (float)(v50 * v57);
              v62 = v53 + (float)(v51 * *v59);
              v63 = v54 + (float)(v51 * v59[1]);
              v64 = v51 * v59[3];
              v65 = v55 + (float)(v51 * v59[2]);
              v66 = v59[4];
              v67 = v59[5];
              v68 = (float*)(v12 + 24LL * (v49 + 2));
              v69 = (float*)(v12 + 24LL * (v49 + 3));
              v70 = v60 + (float)(v51 * v66);
              v71 = v61 + (float)(v51 * v67);
              v72 = *v48;
              v73 = v48[1];
              v48 += 4;
              v43 = (float)(v62 + (float)(v72 * *v68)) + (float)(v73 * *v69);
              v13 =
                  (float)(v63 + (float)(v72 * v68[1])) + (float)(v73 * v69[1]);
              v14 =
                  (float)(v65 + (float)(v72 * v68[2])) + (float)(v73 * v69[2]);
              v15 = (float)((float)(v58 + v64) + (float)(v72 * v68[3])) +
                    (float)(v73 * v69[3]);
              v16 =
                  (float)(v70 + (float)(v72 * v68[4])) + (float)(v73 * v69[4]);
              v17 =
                  (float)(v71 + (float)(v72 * v68[5])) + (float)(v73 * v69[5]);
            } while ((v45 & 0xFC) != v47);
          }
          else {
            v47 = 0;
          }
          v74 = v45 & 3;
          if (v74 != 0) {
            v75 = 4 * v47 + 4 * v46;
            v76 = v46 + v47;
            v77 = (float*)(v6 + v75);
            do {
              v78 = (float*)(v12 + 24LL * v76);
              v79 = *v77++;
              ++v76;
              --v74;
              v43 = v43 + (float)(v79 * *v78);
              v13 = v13 + (float)(v79 * v78[1]);
              v14 = v14 + (float)(v79 * v78[2]);
              v15 = v15 + (float)(v79 * v78[3]);
              v16 = v16 + (float)(v79 * v78[4]);
              v17 = v17 + (float)(v79 * v78[5]);
            } while (v74 != 0);
          }
        }
      }
      else {
        v13 = 0.0f;
        v14 = 0.0f;
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = 0.0f;
      }
      v18 = (float*)(v9 + 12 * v11);
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = (float*)&v4[4 * *(unsigned int*)(v8 + 40 * v11 + 32)];
      v24 = v22[1];
      v23 = v22[2];
      v25 = *v22;
      v26 = (float)(v21 * v24) - (float)(v20 * v23);
      v27 = (float)(v19 * v23) - (float)(v21 * *v22);
      v28 = (float)(v20 * *v22) - (float)(v19 * v24);
      v29 = v22[5];
      v30 = v22[4] + v26;
      v31 = v22[6];
      v32 = 4 * v11;
      v33 = v27 + v29;
      ++v11;
      v34 = (float*)(v5 + v32 * 8);
      v35 = &v4[v32];
      *((_DWORD*)v35 + 3) = 0;
      *((_DWORD*)v35 + 7) = 0;
      v36 = v28 + v31;
      v37 = v13 + (float)(v24 + v34[1]);
      v38 = v23 + v34[2];
      v39 = v34[4];
      v40 = v34[5];
      *(float*)v35 = v43 + (float)(v25 + *v34);
      *((float*)v35 + 1) = v37;
      v41 = v30 + v39;
      v42 = v34[6];
      *((float*)v35 + 2) = v14 + v38;
      *((float*)v35 + 4) = v15 + v41;
      *((float*)v35 + 5) = v16 + (float)(v33 + v40);
      result = v17 + (float)(v36 + v42);
      *((float*)v35 + 6) = result;
    } while (v11 != v7);
  }
  return result;
}

__int64 GameHr_3697a0(__int64 result, __int64 a2, __int64 a3, unsigned int a4,
                      __int64* a5, __int64 a6, int a7, int a8, float a9,
                      float a10, char a11)
{
  __int64 v18;
  __int64 v19;
  _OWORD* v20;
  _OWORD* v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int128* v33;
  _OWORD* v34;
  __int128 v35;
  __int128 v36;
  int i;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 j;
  __int64 v44;
  float v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;

  if ((_DWORD)result != 0) {
    v18 = result & 7;
    if ((unsigned int)result < 8) {
      v19 = 0;
      if ((result & 7) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v20 = (_OWORD*)(a2 + 128);
    v21 = (_OWORD*)(a3 + 128);
    v22 = 0;
    do {
      v23 = *(v20 - 7);
      v22 -= 8;
      *(v21 - 8) = *(v20 - 8);
      *(v21 - 7) = v23;
      v24 = *(v20 - 5);
      *(v21 - 6) = *(v20 - 6);
      *(v21 - 5) = v24;
      v25 = *(v20 - 3);
      *(v21 - 4) = *(v20 - 4);
      *(v21 - 3) = v25;
      v26 = *(v20 - 1);
      *(v21 - 2) = *(v20 - 2);
      *(v21 - 1) = v26;
      v27 = v20[1];
      *v21 = *v20;
      v21[1] = v27;
      v28 = v20[3];
      v21[2] = v20[2];
      v21[3] = v28;
      v29 = v20[5];
      v21[4] = v20[4];
      v21[5] = v29;
      v30 = v20[6];
      v31 = v20[7];
      v20 += 16;
      v21[6] = v30;
      v21[7] = v31;
      v21 += 16;
    } while (-(__int64)((unsigned int)result & 0xFFFFFFF8) != v22);
    v19 = -v22;
    if ((result & 7) != 0) {
    LABEL_8:
      v32 = (32 * v19) | 0x10;
      v33 = (__int128*)(a2 + v32);
      v34 = (_OWORD*)(a3 + v32);
      do {
        v35 = *(v33 - 1);
        v36 = *v33;
        v33 += 2;
        --v18;
        *(v34 - 1) = v35;
        *v34 = v36;
        v34 += 2;
      } while (v18 != 0);
    }
  }
LABEL_10:
  if (a4 != 0) {
    if (a7 != 0) {
      for (i = 0; i != a7; ++i) {
        v38 = a4;
        v39 = a5;
        do {
          v40 = *v39;
          v39 += 9;
          GameRoutine_3328d0(v40, 0, 0, a11 & 1, a9, a10, 0.0f, 0.8f);
          --v38;
        } while (v38 != 0);
      }
    }
    v41 = a5;
    if (a4 <= 1) {
      v42 = 1;
    }
    else {
      v42 = a4;
    }
    for (j = v42; j != 0; --j) {
      v44 = *v41;
      v41 += 9;
      GameRoutine_327a60(v44, a6);
    }
    if (a8 != 0) {
      v46 = 0;
      do {
        v47 = v42;
        v48 = a5;
        do {
          v49 = *v48;
          v48 += 9;
          v45 = GameRoutine_3328d0(v49, 1u, 0, a11 & 1, a9, a10, 0.0f, 0.8f);
          --v47;
        } while (v47 != 0);
        ++v46;
      } while (v46 != a8);
    }
    do {
      v50 = *a5;
      a5 += 9;
      result = GameRoutine_32ffe0(v50, 0, v45);
      --v42;
    } while (v42 != 0);
  }
  return result;
}

__int64 GameHr_377570(__int64 a1, int a2, _DWORD* a3)
{
  __int64 result;
  float** v7;
  int v8;
  float* v9;
  float v10;
  float v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  result = GameRoutine_3865a0();
  v7 = (float**)GameData_21359e0;
  *(_DWORD*)(a1 + 44) = 0;
  *(_WORD*)(a1 + 174) = 0;
  v8 = a3[5];
  v9 = *v7;
  v10 = *v9;
  v11 = v9[1];
  *(_DWORD*)(a1 + 32) = a3[4];
  *(_DWORD*)(a1 + 36) = v8;
  v12 = a3[6];
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 46) = 260;
  *(_WORD*)(a1 + 44) = 0x8000;
  *(_DWORD*)(a1 + 40) = v12;
  v13 = a3[1];
  *(_DWORD*)(a1 + 16) = *a3;
  *(_DWORD*)(a1 + 20) = v13;
  v14 = a3[2];
  v15 = a3[3];
  *(_QWORD*)(a1 + 76) = 1041865114;
  *(_DWORD*)(a1 + 24) = v14;
  *(_DWORD*)(a1 + 28) = v15;
  v16 = 0.0f;
  if (a2 != 1) {
    v16 = 0.05f;
  }
  v17 = 2500.0f;
  *(float*)(a1 + 120) = v16;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 60) = 1065353216;
  *(_DWORD*)(a1 + 84) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 92) = 4103980462LL;
  *(_DWORD*)(a1 + 100) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 132) = 1065353216;
  *(_DWORD*)(a1 + 136) = 1065353216;
  *(_DWORD*)(a1 + 168) = 0;
  *(_WORD*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 174) = 0;
  if (a2 == 1) {
    v17 = 10000.0f;
  }
  *(_DWORD*)(a1 + 108) = 2139095039;
  v18 = v10 * (float)(v10 * 10000.0f);
  *(_QWORD*)(a1 + 124) = 0x3F8000003D4CCCCDLL;
  if (a2 == 1) {
    v18 = 1.0e32f;
  }
  *(_DWORD*)(a1 + 156) = 1053609164;
  *(float*)(a1 + 112) = v17;
  *(float*)(a1 + 116) = v18;
  *(_QWORD*)(a1 + 140) = 0x749DC5AE3F800000LL;
  v19 = v11 * (float)(v11 * 0.00005f);
  v20 = v11 * (float)(v11 * 0.000025f);
  if (a2 == 2) {
    v20 = 0.025f;
  }
  *(float*)(a1 + 148) = v19;
  *(float*)(a1 + 152) = v20;
  return result;
}

__int64 GameHr_3db0c0(__int64 a1, __int64 a2, _BYTE* a3, _WORD* a4,
                      unsigned __int16 a5, char a6, char a7)
{
  __int64 v11;
  char v12;
  float* v13;
  __int64 result;
  _WORD* v15;
  char v16;
  float v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;

  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 56) = 0x44480000FFFFFFFFLL;
  v11 = a1 + 56;
  if ((a6 & 1) != 0) {
    v12 = 3;
  }
  else {
    v12 = 1;
  }
  *(_BYTE*)(a1 + 49) = v12 | a7;
  v13 = (float*)GameData_21a35c8;
  GameRoutine_3dae00(v11);
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  result = a1;
  v15 = a4;
  *(_DWORD*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 24) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 32) = 0;
  v16 = *(_BYTE*)(a1 + 49) | 4;
  v17 = *v13;
  *(_QWORD*)(a1 + 120) = 0;
  *(_BYTE*)(a1 + 49) = v16;
  *(_BYTE*)(a1 + 48) = *a3;
  *(float*)(a1 + 44) = v17 * 0.02f;
  *(_WORD*)(a1 + 50) = *a4;
  v18 = *(_DWORD*)(a1 + 56) - 6;
  if (v18 <= 3) {
    v19 = a5;
    v20 = a1 + GameData_1b01568[v18];
    if (*(unsigned __int16*)(v20 + 8) >= (unsigned int)a5) {
      if (a5 == 0) {
      LABEL_12:
        *(_WORD*)(v20 + 8) = v19;
        return result;
      }
    }
    else {
      v21 = *(_QWORD*)v20;
      v22 = v15;
      if (*(_QWORD*)v20 != 0 && (*(_BYTE*)(result + 49) & 1) != 0) {
        v23 = result;
        v24 = GameRoutine_55af80(0);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v24 + 24LL))(v24, v21);
        result = v23;
        *(_QWORD*)v20 = 0;
        *(_WORD*)(v20 + 8) = 0;
      }
      v25 = result;
      v26 = GameRoutine_55af80(0);
      v27 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
          *(_QWORD*)v26 + 16LL))(
          v26, 2LL * v19, &GameData_1a9f09e,
          "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../"
          "../source/lowlevel/api/include\\PxvGeometry.h",
          88);
      v28 = *(_BYTE*)(v25 + 49);
      *(_QWORD*)v20 = v27;
      *(_WORD*)(v20 + 8) = v19;
      v15 = v22;
      *(_BYTE*)(v25 + 49) = v28 | 1;
    }
    result = GameRoutine_1a0b950(*(_QWORD*)v20, v15, 2LL * v19);
    goto LABEL_12;
  }
  return result;
}

__int64 GameHr_464600(float* a1, unsigned int a2, int a3, float* a4, _DWORD* a5)
{
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  unsigned int v12;
  float* v13;
  float* v14;
  float* v15;
  float v16;
  bool v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float* v22;
  float v23;
  float v24;
  int v25;
  unsigned int v26;
  float* v27;
  __int64 result;
  float v29;
  float v30;
  float v31;
  float v32;
  float* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  int v42;
  float v43;
  float v44;
  int v45;
  unsigned int v46;
  float v47;
  float v48;
  float* v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float* v54;
  float v55;
  float v56;
  float v57;

  if (a2 != 0) {
    v5 = *a1;
    v6 = a1[1];
    v7 = a1[2];
    v8 = a2 & 3;
    if (a2 >= 4) {
      v12 = 0;
      v9 = 0;
      v10 = -1;
      v11 = -3.4028e38f;
      do {
        v13 = &a1[v12 / 4];
        v14 = (float*)((char*)a1 + 2 * a3 + v12);
        if ((float)((float)((float)((float)(v13[1] - v6) *
                                    (float)(v13[1] - v6)) +
                            (float)((float)(*v13 - v5) * (float)(*v13 - v5))) +
                    (float)((float)(v13[2] - v7) * (float)(v13[2] - v7))) >
            (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v13[1] - v6) * (float)(v13[1] - v6)) +
                        (float)((float)(*v13 - v5) * (float)(*v13 - v5))) +
                (float)((float)(v13[2] - v7) * (float)(v13[2] - v7));
          v10 = v9;
        }
        v15 = (float*)((char*)a1 + a3 + v12);
        v16 = (float)((float)((float)(v15[1] - v6) * (float)(v15[1] - v6)) +
                      (float)((float)(*v15 - v5) * (float)(*v15 - v5))) +
              (float)((float)(v15[2] - v7) * (float)(v15[2] - v7));
        v17 = v16 <= (float)(v11 + 0.00000011921f);
        v18 = v14[2] - v7;
        if (v16 > (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v15[1] - v6) * (float)(v15[1] - v6)) +
                        (float)((float)(*v15 - v5) * (float)(*v15 - v5))) +
                (float)((float)(v15[2] - v7) * (float)(v15[2] - v7));
        }
        v19 = *v14;
        v20 = v14[1];
        if (!v17) {
          v10 = v9 + 1;
        }
        v21 = 3 * a3 + v12;
        v12 += 4 * a3;
        v22 = (float*)((char*)a1 + v21);
        v23 = (float)((float)((float)(v20 - v6) * (float)(v20 - v6)) +
                      (float)((float)(v19 - v5) * (float)(v19 - v5))) +
              (float)(v18 * v18);
        if (v23 > (float)(v11 + 0.00000011921f)) {
          v11 = v23;
          v10 = v9 + 2;
        }
        v25 = v9 + 3;
        v9 += 4;
        v24 = v22[2] - v7;
        if ((float)((float)((float)((float)(v22[1] - v6) *
                                    (float)(v22[1] - v6)) +
                            (float)((float)(*v22 - v5) * (float)(*v22 - v5))) +
                    (float)(v24 * v24)) > (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v22[1] - v6) * (float)(v22[1] - v6)) +
                        (float)((float)(*v22 - v5) * (float)(*v22 - v5))) +
                (float)(v24 * v24);
          v10 = v25;
        }
      } while ((a2 & 0xFFFFFFFC) != v9);
    }
    else {
      LODWORD(v9) = 0;
      v10 = -1;
      v11 = -3.4028e38f;
    }
    if ((a2 & 3) != 0) {
      v26 = a3 * v9;
      do {
        v27 = (float*)((char*)a1 + v26);
        v26 += a3;
        if ((float)((float)((float)((float)(v27[1] - v6) *
                                    (float)(v27[1] - v6)) +
                            (float)((float)(*v27 - v5) * (float)(*v27 - v5))) +
                    (float)((float)(v27[2] - v7) * (float)(v27[2] - v7))) >
            (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v27[1] - v6) * (float)(v27[1] - v6)) +
                        (float)((float)(*v27 - v5) * (float)(*v27 - v5))) +
                (float)((float)(v27[2] - v7) * (float)(v27[2] - v7));
          v10 = v9;
        }
        LODWORD(v9) = v9 + 1;
        --v8;
      } while (v8 != 0);
    }
    if (v10 != -1) {
      if (v10 == 0) {
        *a5 = 0;
        return 1;
      }
      v29 = *a1;
      v30 = a1[1];
      v32 = a4[1];
      v31 = a4[2];
      v33 = (float*)((char*)a1 + (unsigned int)(v10 * a3));
      v34 = *v33 - *a1;
      v35 = v33[1] - v30;
      v36 = a1[2];
      v37 = v33[2] - v36;
      v38 = (float)(v32 * v37) - (float)(v31 * v35);
      v39 = (float)(v31 * v34) - (float)(*a4 * v37);
      v40 = (float)(*a4 * v35) - (float)(v32 * v34);
      if (a2 == 1) {
        LODWORD(v41) = 0;
        v42 = -1;
        v43 = -0.00000011921f;
        v44 = 0.00000011921f;
        v45 = -1;
      LABEL_38:
        v57 =
            (float)((float)(v39 *
                            (float)(*(float*)((char*)a1 +
                                              (unsigned int)(v41 * a3) + 4) -
                                    v30)) +
                    (float)(v38 * (float)(*(float*)((char*)a1 +
                                                    (unsigned int)(v41 * a3)) -
                                          v29))) +
            (float)(v40 * (float)(*(float*)((char*)a1 +
                                            (unsigned int)(v41 * a3) + 8) -
                                  v36));
        if (v57 < v43) {
          v45 = v41;
        }
        if (v57 > v44) {
          v42 = v41;
        }
        goto LABEL_42;
      }
      v42 = -1;
      v45 = -1;
      v46 = 0;
      v41 = 0;
      v47 = 0.0f;
      v48 = 0.0f;
      do {
        v49 = (float*)((char*)a1 + v46);
        v50 = *v49;
        v51 = v49[1];
        v52 = v49[2];
        v53 = a3 + v46;
        v46 += 2 * a3;
        v54 = (float*)((char*)a1 + v53);
        v55 = (float)((float)(v39 * (float)(v51 - v30)) +
                      (float)(v38 * (float)(v50 - v29))) +
              (float)(v40 * (float)(v52 - v36));
        if (v55 < (float)(v48 + -0.00000011921f)) {
          v45 = v41;
          v48 = v55;
        }
        if (v55 > (float)(v47 + 0.00000011921f)) {
          v47 = v55;
          v42 = v41;
        }
        v56 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                      (float)(v38 * (float)(*v54 - v29))) +
              (float)(v40 * (float)(v54[2] - v36));
        if (v56 < (float)(v48 + -0.00000011921f)) {
          v45 = v41 + 1;
          v48 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                        (float)(v38 * (float)(*v54 - v29))) +
                (float)(v40 * (float)(v54[2] - v36));
        }
        if (v56 > (float)(v47 + 0.00000011921f)) {
          v47 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                        (float)(v38 * (float)(*v54 - v29))) +
                (float)(v40 * (float)(v54[2] - v36));
          v42 = v41 + 1;
        }
        v41 += 2;
      } while ((a2 & 0xFFFFFFFE) != v41);
      v43 = v48 + -0.00000011921f;
      v44 = v47 + 0.00000011921f;
      if ((a2 & 1) != 0) {
        goto LABEL_38;
      }
    LABEL_42:
      *a5 = 0;
      a5[1] = v10;
      if ((unsigned int)(v45 + 1) < 2 || v45 == v10) {
        result = 2;
        if ((unsigned int)(v42 + 1) >= 2 && v42 != v10 && v42 != v45) {
          goto LABEL_60;
        }
      }
      else {
        result = 3;
        a5[2] = v45;
        if ((unsigned int)(v42 + 1) >= 2 && v42 != v10 && v42 != v45) {
        LABEL_60:
          a5[(unsigned int)result] = v42;
          return (unsigned int)(result + 1);
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 GameHr_4a1f80(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                      float* a6, float* a7, _BYTE* a8, float a9, float a10)
{
  float v10;
  float v11;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  bool v30;
  float v31;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  char v44;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v52;
  float v53;
  float v54;
  float v56[3];
  float v57[9];
  _BYTE v58[4];
  float v59;

  v10 = a2[1];
  v11 = a3[2];
  v17 = *a4;
  v18 = a4[1];
  v19 = a4[2];
  v57[0] = *a2;
  v57[1] = v10;
  v20 = v10;
  v53 = v10;
  v21 = a2[2];
  v22 = *a3;
  v23 = a3[1];
  v24 = *a7;
  v57[6] = v17;
  v57[7] = v18;
  v57[8] = v19;
  v50 = v24;
  v57[2] = v21;
  v57[3] = v22;
  v52 = v21;
  v54 = v22;
  v57[4] = v23;
  v57[5] = v11;
  v25 = (float)((float)(v20 + v23) + v18) * 0.33333f;
  v26 = (float)((float)(v57[0] + v22) + v17) * 0.33333f;
  v27 = (float)((float)(v21 + v11) + v19) * 0.33333f;
  v29 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v30 = v29 < 0.0f;
  v31 = v29 * v29;
  if (!v30 &&
      v31 > (float)((float)((float)((float)(v25 - v53) * (float)(v25 - v53)) +
                            (float)((float)(v26 - v57[0]) *
                                    (float)(v26 - v57[0]))) +
                    (float)((float)(v27 - v52) * (float)(v27 - v52))) &&
      v31 > (float)((float)((float)((float)(v25 - v23) * (float)(v25 - v23)) +
                            (float)((float)(v26 - v54) * (float)(v26 - v54))) +
                    (float)((float)(v27 - v11) * (float)(v27 - v11))) &&
      v31 > (float)((float)((float)((float)(v25 - v18) * (float)(v25 - v18)) +
                            (float)((float)(v26 - v17) * (float)(v26 - v17))) +
                    (float)((float)(v27 - v19) * (float)(v27 - v19)))) {
    goto LABEL_22;
  }
  v35 = a6[1];
  v36 = a6[2];
  v37 =
      (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) + (float)(v52 * v36);
  v38 = (float)((float)(v35 * v23) + (float)(v54 * *a6)) + (float)(v11 * v36);
  v39 = (float)((float)(v35 * v18) + (float)(v17 * *a6)) + (float)(v19 * v36);
  v40 = v37 >= v38 ? (float)((float)(v35 * v23) + (float)(v54 * *a6)) +
                         (float)(v11 * v36)
                   : (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) +
                         (float)(v52 * v36);
  v41 = v40 >= v39 ? v39 : v40;
  if (v41 > (float)((float)(a9 + 0.002f) + (float)(v50 + a10)) ||
      (v42 = a10 - (float)(a9 + 0.002f), v37 < v42) && v38 < v42 && v39 < v42 ||
      (v43 = GameRoutine_1a0a010(v28)) == 0.0f) {
  LABEL_22:
    v44 = 0;
  }
  else {
    v46 = 1.0f / v43;
    v47 = v46 * *a5;
    v48 = v46 * a5[1];
    v56[2] = v46 * a5[2];
    v56[0] = v47;
    v56[1] = v48;
    if ((GameRoutine_506fa0(v57, v56, a1 + 300, a6, &v59, v58, 1, a9) & 1) !=
        0) {
      if (*a7 >= 1.0f) {
        v49 = *a7;
      }
      else {
        v49 = 1.0f;
      }
      if (v59 <= (float)(*a7 + (float)(v49 * 0.001f))) {
        *a7 = v59;
        *a8 = 1;
      }
    }
    v44 = v58[0];
  }
  return v44 & 1;
}

void GameHr_4a2290(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                   float* a6, float* a7, float* a8, float a9, float a10,
                   _BYTE* a11)
{
  float v11;
  float v12;
  float v13;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  bool v31;
  float v32;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v59[3];
  float v60[6];
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v11 = a2[1];
  v12 = *a3;
  v13 = a3[1];
  v60[0] = *a2;
  v60[1] = v11;
  v18 = a2[2];
  v19 = *a5;
  v20 = a5[1];
  v21 = a5[2];
  v55 = v11;
  v56 = v12;
  v22 = *a8;
  v63 = a4[2];
  v64 = v19;
  v65 = v20;
  v66 = v21;
  v60[2] = v18;
  v60[3] = v12;
  v23 = v18;
  v53 = v18;
  v54 = v13;
  v24 = a3[2];
  v60[4] = v13;
  v60[5] = v24;
  v52 = v24;
  v25 = a4[1];
  v61 = *a4;
  v62 = v25;
  v51 = v22;
  v26 = (float)((float)((float)(v11 + v13) + v25) + v20) * 0.25f;
  v27 = (float)((float)((float)(v60[0] + v12) + v61) + v19) * 0.25f;
  v28 = (float)((float)((float)(v23 + v24) + v63) + v21) * 0.25f;
  v30 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v31 = v30 < 0.0f;
  v32 = v30 * v30;
  if (v31 ||
      v32 <= (float)((float)((float)((float)(v26 - v55) * (float)(v26 - v55)) +
                             (float)((float)(v27 - v60[0]) *
                                     (float)(v27 - v60[0]))) +
                     (float)((float)(v28 - v53) * (float)(v28 - v53))) ||
      v32 <= (float)((float)((float)((float)(v26 - v54) * (float)(v26 - v54)) +
                             (float)((float)(v27 - v56) * (float)(v27 - v56))) +
                     (float)((float)(v28 - v52) * (float)(v28 - v52))) ||
      v32 <= (float)((float)((float)((float)(v26 - v25) * (float)(v26 - v25)) +
                             (float)((float)(v27 - v61) * (float)(v27 - v61))) +
                     (float)((float)(v28 - v63) * (float)(v28 - v63))) ||
      v32 <= (float)((float)((float)((float)(v26 - v20) * (float)(v26 - v20)) +
                             (float)((float)(v27 - v19) * (float)(v27 - v19))) +
                     (float)((float)(v28 - v21) * (float)(v28 - v21)))) {
    v37 = a7[1];
    v38 = a7[2];
    v39 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
          (float)(v53 * v38);
    v40 = (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    v41 = (float)((float)(v37 * v25) + (float)(v61 * *a7)) + (float)(v63 * v38);
    v42 = (float)((float)(v37 * v20) + (float)(v19 * *a7)) + (float)(v21 * v38);
    if (v39 >= v40) {
      v43 =
          (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    }
    else {
      v43 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
            (float)(v53 * v38);
    }
    if (v43 >= v41) {
      v43 = v41;
    }
    if (v43 >= v42) {
      v44 = v42;
    }
    else {
      v44 = v43;
    }
    if (v44 <= (float)((float)(a9 + 0.002f) + (float)(v51 + a10))) {
      v45 = a10 - (float)(a9 + 0.002f);
      if (v39 >= v45 || v40 >= v45 || v41 >= v45 || v42 >= v45) {
        v46 = GameRoutine_1a0a010(v29);
        if (v46 != 0.0f) {
          v47 = 1.0f / v46;
          v48 = v47 * *a6;
          v49 = v47 * a6[1];
          v59[2] = v47 * a6[2];
          v59[0] = v48;
          v59[1] = v49;
          if ((GameRoutine_507c70(v60, v59, a1 + 300, a7, &v67, a9) & 1) != 0) {
            if (*a8 >= 1.0f) {
              v50 = *a8;
            }
            else {
              v50 = 1.0f;
            }
            if (v67 <= (float)(*a8 + (float)(v50 * 0.001f))) {
              *a8 = v67;
              *a11 = 1;
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_4a5700(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                      float* a6, float* a7, _BYTE* a8, float a9, float a10)
{
  float v10;
  float v11;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  bool v30;
  float v31;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  char v44;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v52;
  float v53;
  float v54;
  float v56[3];
  float v57[9];
  _BYTE v58[4];
  float v59;

  v10 = a2[1];
  v11 = a3[2];
  v17 = *a4;
  v18 = a4[1];
  v19 = a4[2];
  v57[0] = *a2;
  v57[1] = v10;
  v20 = v10;
  v53 = v10;
  v21 = a2[2];
  v22 = *a3;
  v23 = a3[1];
  v24 = *a7;
  v57[6] = v17;
  v57[7] = v18;
  v57[8] = v19;
  v50 = v24;
  v57[2] = v21;
  v57[3] = v22;
  v52 = v21;
  v54 = v22;
  v57[4] = v23;
  v57[5] = v11;
  v25 = (float)((float)(v20 + v23) + v18) * 0.33333f;
  v26 = (float)((float)(v57[0] + v22) + v17) * 0.33333f;
  v27 = (float)((float)(v21 + v11) + v19) * 0.33333f;
  v29 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v30 = v29 < 0.0f;
  v31 = v29 * v29;
  if (!v30 &&
      v31 > (float)((float)((float)((float)(v25 - v53) * (float)(v25 - v53)) +
                            (float)((float)(v26 - v57[0]) *
                                    (float)(v26 - v57[0]))) +
                    (float)((float)(v27 - v52) * (float)(v27 - v52))) &&
      v31 > (float)((float)((float)((float)(v25 - v23) * (float)(v25 - v23)) +
                            (float)((float)(v26 - v54) * (float)(v26 - v54))) +
                    (float)((float)(v27 - v11) * (float)(v27 - v11))) &&
      v31 > (float)((float)((float)((float)(v25 - v18) * (float)(v25 - v18)) +
                            (float)((float)(v26 - v17) * (float)(v26 - v17))) +
                    (float)((float)(v27 - v19) * (float)(v27 - v19)))) {
    goto LABEL_22;
  }
  v35 = a6[1];
  v36 = a6[2];
  v37 =
      (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) + (float)(v52 * v36);
  v38 = (float)((float)(v35 * v23) + (float)(v54 * *a6)) + (float)(v11 * v36);
  v39 = (float)((float)(v35 * v18) + (float)(v17 * *a6)) + (float)(v19 * v36);
  v40 = v37 >= v38 ? (float)((float)(v35 * v23) + (float)(v54 * *a6)) +
                         (float)(v11 * v36)
                   : (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) +
                         (float)(v52 * v36);
  v41 = v40 >= v39 ? v39 : v40;
  if (v41 > (float)((float)(a9 + 0.002f) + (float)(v50 + a10)) ||
      (v42 = a10 - (float)(a9 + 0.002f), v37 < v42) && v38 < v42 && v39 < v42 ||
      (v43 = GameRoutine_1a0a010(v28)) == 0.0f) {
  LABEL_22:
    v44 = 0;
  }
  else {
    v46 = 1.0f / v43;
    v47 = v46 * *a5;
    v48 = v46 * a5[1];
    v56[2] = v46 * a5[2];
    v56[0] = v47;
    v56[1] = v48;
    if ((GameRoutine_506fa0(v57, v56, a1 + 524, a6, &v59, v58, 1, a9) & 1) !=
        0) {
      if (*a7 >= 1.0f) {
        v49 = *a7;
      }
      else {
        v49 = 1.0f;
      }
      if (v59 <= (float)(*a7 + (float)(v49 * 0.001f))) {
        *a7 = v59;
        *a8 = 1;
      }
    }
    v44 = v58[0];
  }
  return v44 & 1;
}

void GameHr_4a5a10(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                   float* a6, float* a7, float* a8, float a9, float a10,
                   _BYTE* a11)
{
  float v11;
  float v12;
  float v13;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  bool v31;
  float v32;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v59[3];
  float v60[6];
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v11 = a2[1];
  v12 = *a3;
  v13 = a3[1];
  v60[0] = *a2;
  v60[1] = v11;
  v18 = a2[2];
  v19 = *a5;
  v20 = a5[1];
  v21 = a5[2];
  v55 = v11;
  v56 = v12;
  v22 = *a8;
  v63 = a4[2];
  v64 = v19;
  v65 = v20;
  v66 = v21;
  v60[2] = v18;
  v60[3] = v12;
  v23 = v18;
  v53 = v18;
  v54 = v13;
  v24 = a3[2];
  v60[4] = v13;
  v60[5] = v24;
  v52 = v24;
  v25 = a4[1];
  v61 = *a4;
  v62 = v25;
  v51 = v22;
  v26 = (float)((float)((float)(v11 + v13) + v25) + v20) * 0.25f;
  v27 = (float)((float)((float)(v60[0] + v12) + v61) + v19) * 0.25f;
  v28 = (float)((float)((float)(v23 + v24) + v63) + v21) * 0.25f;
  v30 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v31 = v30 < 0.0f;
  v32 = v30 * v30;
  if (v31 ||
      v32 <= (float)((float)((float)((float)(v26 - v55) * (float)(v26 - v55)) +
                             (float)((float)(v27 - v60[0]) *
                                     (float)(v27 - v60[0]))) +
                     (float)((float)(v28 - v53) * (float)(v28 - v53))) ||
      v32 <= (float)((float)((float)((float)(v26 - v54) * (float)(v26 - v54)) +
                             (float)((float)(v27 - v56) * (float)(v27 - v56))) +
                     (float)((float)(v28 - v52) * (float)(v28 - v52))) ||
      v32 <= (float)((float)((float)((float)(v26 - v25) * (float)(v26 - v25)) +
                             (float)((float)(v27 - v61) * (float)(v27 - v61))) +
                     (float)((float)(v28 - v63) * (float)(v28 - v63))) ||
      v32 <= (float)((float)((float)((float)(v26 - v20) * (float)(v26 - v20)) +
                             (float)((float)(v27 - v19) * (float)(v27 - v19))) +
                     (float)((float)(v28 - v21) * (float)(v28 - v21)))) {
    v37 = a7[1];
    v38 = a7[2];
    v39 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
          (float)(v53 * v38);
    v40 = (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    v41 = (float)((float)(v37 * v25) + (float)(v61 * *a7)) + (float)(v63 * v38);
    v42 = (float)((float)(v37 * v20) + (float)(v19 * *a7)) + (float)(v21 * v38);
    if (v39 >= v40) {
      v43 =
          (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    }
    else {
      v43 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
            (float)(v53 * v38);
    }
    if (v43 >= v41) {
      v43 = v41;
    }
    if (v43 >= v42) {
      v44 = v42;
    }
    else {
      v44 = v43;
    }
    if (v44 <= (float)((float)(a9 + 0.002f) + (float)(v51 + a10))) {
      v45 = a10 - (float)(a9 + 0.002f);
      if (v39 >= v45 || v40 >= v45 || v41 >= v45 || v42 >= v45) {
        v46 = GameRoutine_1a0a010(v29);
        if (v46 != 0.0f) {
          v47 = 1.0f / v46;
          v48 = v47 * *a6;
          v49 = v47 * a6[1];
          v59[2] = v47 * a6[2];
          v59[0] = v48;
          v59[1] = v49;
          if ((GameRoutine_507c70(v60, v59, a1 + 524, a7, &v67, a9) & 1) != 0) {
            if (*a8 >= 1.0f) {
              v50 = *a8;
            }
            else {
              v50 = 1.0f;
            }
            if (v67 <= (float)(*a8 + (float)(v50 * 0.001f))) {
              *a8 = v67;
              *a11 = 1;
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_593440(__int64* a1, __int64 a2, int a3, float* a4)
{
  __int64 v5;
  float v6;
  float v7;
  float v9;
  float v10;
  __int64 i;
  float v12;
  float v13;
  __int64 v14;
  float* v15;
  __int64 v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  unsigned int v25;
  __int64 v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v5 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + a3;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = 0;
  v6 = (float)(a4[6] / -100.0f) + 1.0f;
  if (v6 < 0.0039f) {
    v6 = 0.0039f;
  }
  *(float*)(v5 + 16) = 1.0f / v6;
  *(float*)v5 = a4[2] / 255.0f;
  *(float*)(v5 + 4) = a4[3] / 255.0f;
  *(float*)(v5 + 8) = a4[4] / 255.0f;
  *(float*)(v5 + 12) = a4[5] / 255.0f;
  v7 = a4[7];
  if (v7 == 0.0f) {
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_DWORD*)(v5 + 20) = 1065353216;
    v25 = *(unsigned __int8*)(*a1 + 90);
    *(_QWORD*)(v5 + 24) = 0x3F8000003F800000LL;
    if (v25 == 0) {
      goto LABEL_20;
    }
    goto LABEL_16;
  }
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v9 = GameRoutine_1a0a950((float)((float)(0.0f / v7) * 2.8f) *
                           (float)((float)((float)(0.0f / v7) * 2.8f) * -0.5f));
  v10 = v9 + 0.0f;
  for (i = 1; i != 32; ++i) {
    v12 = (float)((float)(unsigned int)i / a4[7]) * 2.8f;
    v13 = GameRoutine_1a0a950(v12 * (float)(v12 * -0.5f));
    v10 = v10 + (float)(v13 * 2.0f);
    *((float*)&v29 + i) = v13;
  }
  v14 = *a1;
  v15 = (float*)&v30;
  v28 = 0;
  *(float*)&v29 = v9 / v10;
  *((float*)&v29 + 1) = *((float*)&v29 + 1) / v10;
  *(float*)&v40 = *(float*)&v40 / v10;
  *((float*)&v40 + 1) = *((float*)&v40 + 1) / v10;
  *(float*)&v30 = *(float*)&v30 / v10;
  *((float*)&v30 + 1) = *((float*)&v30 + 1) / v10;
  *(float*)&v31 = *(float*)&v31 / v10;
  *((float*)&v31 + 1) = *((float*)&v31 + 1) / v10;
  *(float*)&v41 = *(float*)&v41 / v10;
  *((float*)&v41 + 1) = *((float*)&v41 + 1) / v10;
  *(float*)&v32 = *(float*)&v32 / v10;
  *((float*)&v32 + 1) = *((float*)&v32 + 1) / v10;
  *(float*)&v42 = *(float*)&v42 / v10;
  *((float*)&v42 + 1) = *((float*)&v42 + 1) / v10;
  *(float*)&v33 = *(float*)&v33 / v10;
  *((float*)&v33 + 1) = *((float*)&v33 + 1) / v10;
  *(float*)&v34 = *(float*)&v34 / v10;
  *((float*)&v34 + 1) = *((float*)&v34 + 1) / v10;
  *(float*)&v43 = *(float*)&v43 / v10;
  *((float*)&v43 + 1) = *((float*)&v43 + 1) / v10;
  *(float*)&v35 = *(float*)&v35 / v10;
  *((float*)&v35 + 1) = *((float*)&v35 + 1) / v10;
  *(float*)&v36 = *(float*)&v36 / v10;
  *((float*)&v36 + 1) = *((float*)&v36 + 1) / v10;
  *(float*)&v37 = *(float*)&v37 / v10;
  *((float*)&v37 + 1) = *((float*)&v37 + 1) / v10;
  *(float*)&v38 = *(float*)&v38 / v10;
  *((float*)&v38 + 1) = *((float*)&v38 + 1) / v10;
  *(float*)&v39 = *(float*)&v39 / v10;
  *((float*)&v39 + 1) = *((float*)&v39 + 1) / v10;
  *(float*)&v44 = *(float*)&v44 / v10;
  *((float*)&v44 + 1) = *((float*)&v44 + 1) / v10;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v14 + 96LL))(v14, &v28);
  v16 = -28;
  v17 = 1.0f / *(float*)&v28;
  v18 = (float*)(v5 + 96);
  v19 = 1.0f /
        (float)(*((float*)&v28 + 1) +
                (float)(2 * (unsigned int)*(unsigned __int8*)(a1[11] + 12)));
  *(_DWORD*)(v5 + 20) = v29;
  while (1) {
    v20 = 0.0f;
    v21 = *(v15 - 1) + *v15;
    if (v21 > 0.0f) {
      v20 = (float)(*v15 / v21) + (float)(unsigned int)(v16 + 29);
    }
    v18[16] = v21;
    *(v18 - 16) = v17 * v20;
    *v18 = v19 * v20;
    if (v16 == 0) {
      break;
    }
    v22 = v15[2];
    v23 = 0.0f;
    v24 = v15[1] + v22;
    if (v24 > 0.0f) {
      v23 = (float)(v22 / v24) + (float)(unsigned int)(v16 + 31);
    }
    v15 += 4;
    v18[17] = v24;
    v16 += 4;
    *(v18 - 15) = v17 * v23;
    v18[1] = v19 * v23;
    v18 += 2;
  }
  *(float*)(v5 + 92) = v17 * 31.0f;
  *(float*)(v5 + 156) = v19 * 31.0f;
  *(_DWORD*)(v5 + 220) = HIDWORD(v44);
  v25 = *(unsigned __int8*)(*a1 + 90);
  *(_QWORD*)(v5 + 24) = 0x3F8000003F800000LL;
  if (v25 != 0) {
  LABEL_16:
    v26 = a1[11];
    if (v26 == 0 || (a1[69] & 4) != 0 || (*(_BYTE*)(v26 + 8) & 0x20) == 0) {
      *(float*)(v5 + 24) = (float)v25 / 255.0f;
      *(float*)(v5 + 28) = 255.0f / (float)v25;
    }
  }
LABEL_20:
  if (*(float*)(v5 + 160) < 0.000061035f) {
    return 0;
  }
  if (*(float*)(v5 + 164) < 0.000061035f) {
    return 1;
  }
  if (*(float*)(v5 + 168) < 0.000061035f) {
    return 2;
  }
  if (*(float*)(v5 + 172) < 0.000061035f) {
    return 3;
  }
  if (*(float*)(v5 + 176) < 0.000061035f) {
    return 4;
  }
  if (*(float*)(v5 + 180) < 0.000061035f) {
    return 5;
  }
  if (*(float*)(v5 + 184) < 0.000061035f) {
    return 6;
  }
  if (*(float*)(v5 + 188) < 0.000061035f) {
    return 7;
  }
  if (*(float*)(v5 + 192) < 0.000061035f) {
    return 8;
  }
  if (*(float*)(v5 + 196) < 0.000061035f) {
    return 9;
  }
  if (*(float*)(v5 + 200) < 0.000061035f) {
    return 10;
  }
  if (*(float*)(v5 + 204) < 0.000061035f) {
    return 11;
  }
  if (*(float*)(v5 + 208) < 0.000061035f) {
    return 12;
  }
  if (*(float*)(v5 + 212) < 0.000061035f) {
    return 13;
  }
  if (*(float*)(v5 + 216) < 0.000061035f) {
    return 14;
  }
  if (*(float*)(v5 + 220) < 0.000061035f) {
    return 15;
  }
  return 16;
}

float* GameHr_5da830(float* result, float* a2, float* a3, float* a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;

  v4 = *a2;
  v5 = *result;
  if (*a2 >= 0.0f || v5 >= 0.0f) {
    if (v4 <= v5) {
      goto LABEL_4;
    }
  LABEL_9:
    v7 = *a3;
    if (v4 >= 0.0f || v7 >= 0.0f) {
      if (v7 <= v4) {
        goto LABEL_12;
      }
    }
    else if (v7 >= v4) {
    LABEL_12:
      v8 = *(_QWORD*)result;
      *(_QWORD*)result = *(_QWORD*)a2;
      *(_QWORD*)a2 = v8;
      v6 = *a3;
      if (*a3 >= 0.0f || *(float*)&v8 >= 0.0f) {
        if (v6 <= *(float*)&v8) {
          goto LABEL_27;
        }
      }
      else if (v6 >= *(float*)&v8) {
        goto LABEL_27;
      }
      v6 = *(float*)&v8;
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *(_QWORD*)a3 = v8;
      goto LABEL_27;
    }
    v12 = *(_QWORD*)result;
    *(_QWORD*)result = *(_QWORD*)a3;
    *(_QWORD*)a3 = v12;
    v6 = *(float*)&v12;
    goto LABEL_27;
  }
  if (v4 < v5) {
    goto LABEL_9;
  }
LABEL_4:
  v6 = *a3;
  if (v4 >= 0.0f || v6 >= 0.0f) {
    if (v6 <= v4) {
      goto LABEL_27;
    }
  }
  else if (v6 >= v4) {
    goto LABEL_27;
  }
  v9 = *(_QWORD*)a2;
  *(_QWORD*)a2 = *(_QWORD*)a3;
  *(_QWORD*)a3 = v9;
  v6 = *(float*)&v9;
  v10 = *a2;
  v11 = *result;
  if (*a2 < 0.0f && v11 < 0.0f) {
    if (v10 >= v11) {
      goto LABEL_27;
    }
  }
  else if (v10 <= v11) {
  LABEL_27:
    v14 = *a4;
    if (*a4 >= 0.0f || v6 >= 0.0f) {
      if (v14 <= v6) {
        return result;
      }
    }
    else if (v14 >= v6) {
      return result;
    }
    v15 = *(_QWORD*)a3;
    *(_QWORD*)a3 = *(_QWORD*)a4;
    *(_QWORD*)a4 = v15;
    v16 = *a3;
    v17 = *a2;
    if (*a3 >= 0.0f || v17 >= 0.0f) {
      if (v16 <= v17) {
        return result;
      }
    }
    else if (v16 >= v17) {
      return result;
    }
    v18 = *(_QWORD*)a2;
    *(_QWORD*)a2 = *(_QWORD*)a3;
    *(_QWORD*)a3 = v18;
    v19 = *a2;
    v20 = *result;
    if (*a2 >= 0.0f || v20 >= 0.0f) {
      if (v19 > v20) {
      LABEL_42:
        v21 = *(_QWORD*)result;
        *(_QWORD*)result = *(_QWORD*)a2;
        *(_QWORD*)a2 = v21;
      }
    }
    else if (v19 < v20) {
      goto LABEL_42;
    }
    return result;
  }
  v13 = *(_QWORD*)result;
  *(_QWORD*)result = *(_QWORD*)a2;
  *(_QWORD*)a2 = v13;
  v6 = *a3;
  goto LABEL_27;
}

__int64 GameHr_7266a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  _QWORD v6[4];
  _QWORD* v7;

  v1 = a1;
  if (GameData_21caab0 == 0 ||
      (a1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                               &GameData_21d1f40)) == 0 ||
      *(_DWORD*)(a1 + 32) == 0) {
    v4 = 0;
    v5 = -1;
    v7 = v6;
    v6[0] = GameData_1f960e8;
    v6[1] = &v5;
    v6[2] = &v4;
    GameRoutine_764060(a1, v6);
    if (v7 == v6) {
      v2 = 32;
    }
    else {
      if (v7 == nullptr) {
      LABEL_9:
        GameRoutine_137cd90(v1, v4,
                            *(unsigned __int16*)(*GameData_212ce90[0] + 26));
        goto LABEL_10;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*v7 + v2))((__int64)v7);
    goto LABEL_9;
  }
LABEL_10:
  GameRoutine_10c830(v6, -1.0f);
  GameRoutine_80cb30(v6);
  return GameRoutine_10cff0(v6);
}

float GameHr_734f30()
{
  float v0;

  v0 = 60.0f / (float)*(int*)(GameData_21a60d8 + 476);
  if (v0 <= 0.0f) {
    return 0.0167f;
  }
  else {
    return v0 * 0.0167f;
  }
}

void GameHr_743460()
{
  float v0;
  float v1;
  __int64 v2;
  unsigned int v3;
  float v4;
  float v5;
  __int128 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;

  v0 = 0.0f;
  v1 = 0.0f;
  v2 = *(_QWORD*)GameData_212c470;
  v3 = *(_DWORD*)(*(_QWORD*)GameData_212c470 + 944LL);
  v4 = (float)*(int*)(*GameData_212c010[0] + 476);
  if (GameData_21cfa58 == (v3 & 0xF | (16 * ((v3 >> 12) & 3)) |
                           (v3 >> 4) & 0xC0 | (v3 >> 7) & 0xF00)) {
    v5 = 60.0f / v4;
    if ((float)(60.0f / v4) <= 0.0f) {
      v5 = 1.0f;
    }
    v1 = *(float*)&GameData_21cfa5c + v5;
  }
  GameData_21cfa5c = LODWORD(v1);
  v6 = *(_OWORD*)(v2 + 960);
  GameData_21cfa58 =
      v3 & 0xF | (16 * ((v3 >> 12) & 3)) | (v3 >> 4) & 0xC0 | (v3 >> 7) & 0xF00;
  v7 = (float)(*(float*)&v6 + 0.25f) * 1.3333f;
  if (*(float*)&v6 >= -0.25f) {
    v7 = 0.0f;
  }
  if (*(float*)&v6 > 0.25f) {
    v8 = (float)(*(float*)&v6 + -0.25f) * 1.3333f;
  }
  else {
    v8 = v7;
  }
  v9 = (float)(*((float*)&v6 + 1) + 0.25f) * 1.3333f;
  if (*((float*)&v6 + 1) >= -0.25f) {
    v9 = 0.0f;
  }
  if (*((float*)&v6 + 1) > 0.25f) {
    v10 = (float)(*((float*)&v6 + 1) + -0.25f) * 1.3333f;
  }
  else {
    v10 = v9;
  }
  v11 = 60.0f / v4;
  if (v11 <= 0.0f) {
    v12 = 8.0f;
  }
  else {
    v12 = v11 * 8.0f;
  }
  if ((v3 & 8) != 0) {
    v12 = v12 * 4.0f;
  }
  v13 = *(float*)&GameData_21cfa60 + (float)(v8 * v12);
  v14 = *(float*)&GameData_21cfa64 - (float)(v10 * v12);
  v15 = 1920.0f;
  if (v13 <= 1920.0f) {
    v15 = v13;
  }
  if (v13 >= 0.0f) {
    v16 = v15;
  }
  else {
    v16 = 0.0f;
  }
  GameData_21cfa60 = LODWORD(v16);
  v17 = 1080.0f;
  if (v14 <= 1080.0f) {
    v17 = v14;
  }
  if (v14 >= 0.0f) {
    v0 = v17;
  }
  GameData_21cfa64 = LODWORD(v0);
}

__int64 GameHr_80cb30(__int64 a1)
{

#pragma clang fp contract(off)
  double v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  struct {
    __int64 v11[2];
    __int64* v12;
  } v11_;
  _QWORD v13[25];
  _QWORD v14[25];

  snd_Fade_Fade_10cd70((__int64)v14, a1);
  v1 = snd_Fade_getTime((__int64)v14);
  if (*(float*)&v1 < 0x0.0p+0f) {
    snd_Fade_Fade_10cb00((__int64)v13, "FadeTime_BGM_StageClear_Out");
    GameRoutine_10d050_alt1((__int64)v14, (__int64)v13);
    snd_Fade_Destroy_Fade(v13);
  }
  v2 = game_sound_g_game_sound_ptr[0];
  snd_BGM_getFirstNameString((void*)(v11_.v11),
                             *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8));
  v3 = v11_.v11[1];
  if ((v11_.v11[0] & 1) == 0) {
    v3 = LOBYTE(v11_.v11[0]) >> 1;
  }
  if (v3 == 17) {
    v4 = (v11_.v11[0] & 1) != 0 ? v11_.v12 : (__int64*)((char*)v11_.v11 + 1);
    v5 = *v4;
    v6 = v4[1];
    v7 = *((unsigned __int8*)v4 + 16);
    v8 = v5 == 0x5F5359535F4D4742LL && v6 == 0x7265764F656D6147LL;
    if (v8 && v7 == 49) {
      snd_Fade_Fade_10c910((__int64)v13, 1200);
      GameRoutine_10d050_alt1((__int64)v14, (__int64)v13);
      snd_Fade_Destroy_Fade(v13);
    }
  }
  snd_a2c9c0(*v2, (__int64)v14);
  if ((v11_.v11[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v11_.v12);
  }
  return snd_Fade_Destroy_Fade(v14);
}

__int64 GameHr_811b80()
{
  __int64 result;
  _BYTE v1[200];
  _QWORD v2[2];

  *(struct PseudoSret*)(v2) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v2);
  if ((result & 1) != 0) {
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 0, v1, 0.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 1, v1, 1.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 2, v1, 1.0f);
    return GameRoutine_10cff0(v1);
  }
  return result;
}

__int64 GameHr_811c50()
{
  __int64 result;
  _BYTE v1[200];
  _QWORD v2[2];

  *(struct PseudoSret*)(v2) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v2);
  if ((result & 1) != 0) {
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 0, v1, 1.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 1, v1, 0.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 2, v1, 0.0f);
    return GameRoutine_10cff0(v1);
  }
  return result;
}

__int64 GameHr_81cda0(__int64 a1, __int128* a2, float a3)
{
  __int128 v3;
  int v5;
  int v6;
  int v7;
  float v8;
  int v9;
  __int64 v10;
  __int128 v12;
  __int128 v13;
  __int128 v14;

  v3 = *a2;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v5 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = v6 & v5;
    if (a3 < 0.0f) {
      a3 = 0.3f;
    }
    if (v7 != 0) {
      v8 = a3;
    }
    else {
      v8 = 0.0f;
    }
  }
  else if (a3 >= 0.0f) {
    v8 = a3;
  }
  else {
    v8 = 0.3f;
  }
  v9 = *(unsigned __int8*)(a1 + 72);
  v12 = *a2;
  if (v9 == 1) {
    v10 = *(_QWORD*)(a1 + 48);
    v14 = v3;
    v13 = v3;
    (*(void (**)(__int64, __int128*, __int128*))(v10 + 24))(a1 + 48, &v14,
                                                            &v13);
    *(_DWORD*)(a1 + 56) = 0;
  LABEL_19:
    *(_DWORD*)(a1 + 60) = 0;
    *(_WORD*)(a1 + 72) = 256;
    return 1;
  }
  if (v8 < *(float*)(a1 + 56) ||
      ((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(a1 + 48) + 8LL))(a1 + 48, &v12, a1 + 96) &
       1) != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(a1 + 48) + 16LL))((void*)&v14, a1 + 48);
    v13 = v12;
    (*(void (**)(__int64, __int128*, __int128*))(*(_QWORD*)(a1 + 48) + 24LL))(
        a1 + 48, &v14, &v13);
    *(float*)(a1 + 56) = v8;
    goto LABEL_19;
  }
  return 0;
}

__int64 GameHr_914e40(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int128 v67;
  __int64 v68;
  _BYTE v69[32];
  _BYTE* v70;

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  *(_QWORD*)&v67 = 0;
  *(_QWORD*)((char*)&v67 + 5) = 0;
  result = GameRoutine_d86560(&v56);
  if ((result & 1) == 0) {
  LABEL_70:
    if ((v63 & 1) != 0) {
      goto LABEL_71;
    }
    goto LABEL_75;
  }
  v3 = GameData_212d458[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 928LL) != 0) {
    GameRoutine_cb90b0(*GameData_212d458[0], 1.0f);
  }
  v4 = *(_QWORD*)(*v3 + 80);
  if (v4 != 0) {
    v5 = *(_QWORD*)(*v3 + 72);
    v6 = *(_QWORD*)(*v3 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = GameRoutine_1a0a0c0(v6);
    GameRoutine_1a09c50(v4);
    if (v7 == 0 || v5 == 0) {
      if (v7 == 0) {
        goto LABEL_13;
      }
    }
    else {
      GameRoutine_10c1070(*(_QWORD*)GameData_212dbe8[0],
                          *(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL) + 560LL, &v66);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
  }
LABEL_13:
  if ((v56 & 1) != 0) {
    GameRoutine_60a270(&v43);
  }
  else {
    v43 = v56;
    v44 = v57;
    v45 = v58;
  }
  if ((v59 & 1) != 0) {
    GameRoutine_60a270(&v46);
  }
  else {
    v46 = v59;
    v47 = v60;
    v48 = v61;
  }
  v9 = v62;
  v49 = v62;
  if ((v63 & 1) != 0) {
    GameRoutine_60a270(&v50);
    v9 = v49;
  }
  else {
    v50 = v63;
    v51 = v64;
    v52 = v65;
  }
  v53 = v66;
  v54 = v67;
  v55 = v68;
  v10 = GameData_212bf68;
  v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 144, 16, 0);
  v12 = v43;
  v13 = v44;
  v14 = v45;
  v15 = (_QWORD*)v11;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  *(_DWORD*)(v11 + 80) = v9;
  *(_QWORD*)v11 = GameData_1fad738;
  *(_QWORD*)(v11 + 32) = v12;
  v16 = (_BYTE*)(v11 + 32);
  *(_QWORD*)(v11 + 40) = v13;
  *(_QWORD*)(v11 + 48) = v14;
  v17 = v46;
  v18 = v47;
  v19 = v50;
  v46 = 0;
  v50 = 0;
  *(_QWORD*)(v11 + 16) = a1;
  *(_QWORD*)(v11 + 56) = v17;
  v20 = (_BYTE*)(v11 + 56);
  v21 = v48;
  v47 = 0;
  v48 = 0;
  *(_QWORD*)(v11 + 88) = v19;
  v22 = (_BYTE*)(v11 + 88);
  *(_QWORD*)(v11 + 64) = v18;
  *(_QWORD*)(v11 + 72) = v21;
  v24 = v51;
  v23 = v52;
  v51 = 0;
  v52 = 0;
  *(_QWORD*)(v11 + 96) = v24;
  *(_QWORD*)(v11 + 104) = v23;
  v25 = v67;
  *(_QWORD*)(v11 + 112) = v66;
  *(_QWORD*)(v11 + 120) = v25;
  v26 = v68;
  *(_QWORD*)(v11 + 128) = *((_QWORD*)&v67 + 1);
  *(_QWORD*)(v11 + 136) = v26;
  v70 = (_BYTE*)GameRoutine_9185e0();
  GameRoutine_104e1d0(a1, v69);
  if (v70 == v69) {
    v27 = 32;
    goto LABEL_26;
  }
  if (v70 != nullptr) {
    v27 = 40;
  LABEL_26:
    (*(void (**)(__int64))(*(_QWORD*)v70 + v27))((__int64)v70);
  }
  if ((*v22 & 1) != 0) {
    v28 = v15[13];
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v29 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v29, v28);
    }
  }
  if ((*v20 & 1) != 0) {
    v30 = v15[9];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v31, v30);
    }
  }
  if ((*v16 & 1) != 0) {
    v32 = v15[6];
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v33 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v33, v32);
    }
  }
  v34 = 128;
  if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
    v34 = 56;
  }
  GameRoutine_1a0a4e0(*(_QWORD*)v10 + v34, v15);
  if ((v50 & 1) != 0 && v52 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v35, v52);
  }
  if ((v46 & 1) != 0 && v48 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v36 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v36, v48);
  }
  if ((v43 & 1) != 0 && v45 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v37 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v37, v45);
  }
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v38 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_64;
    }
    v38 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v38))((__int64)result);
LABEL_64:
  v39 = *(_QWORD*)(a1 + 8);
  if (v39 == 0) {
    goto LABEL_70;
  }
  while (*(_BYTE*)v39 != 2) {
    if (*(_BYTE*)v39 == 0) {
      goto LABEL_70;
    }
  LABEL_67:
    v39 += 64;
  }
  if (*(_DWORD*)(v39 + 32) != 1) {
    goto LABEL_67;
  }
  *(_QWORD*)(a1 + 16) = v39;
  *(_WORD*)(a1 + 136) &= ~0x80u;
  if ((v63 & 1) != 0) {
  LABEL_71:
    if (v65 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v40 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40, v65);
    }
  }
LABEL_75:
  if ((v59 & 1) != 0 && v61 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v41 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41, v61);
  }
  if ((v56 & 1) != 0 && v58 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v42 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42, v58);
  }
  return result;
}

__int64 GameHr_a85ad0(__int64 result, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;

  v3 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 32);
  if (a2 <= 0.00000011921f) {
    if (v2 == v3) {
      return result;
    }
    v8 = *(_QWORD*)(v2 - 8);
    if (v8 == 0) {
      return result;
    }
    v9 = *(_QWORD*)(v8 + 40);
    if (v9 == 0 || *(_DWORD*)(*(_QWORD*)(v8 + 56) + 20LL) != 1) {
      return result;
    }
    v10 = result;
    v11 = a2 > 0.0f;
    GameRoutine_b86fb0(v9, a2 > 0.0f);
    result = GameRoutine_c44560(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 32) - 8LL) + 56LL), v11);
    v7 = *(_QWORD*)(v10 + 32);
  }
  else {
    if (v2 == v3) {
      return result;
    }
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 == 0) {
      return result;
    }
    v5 = *(_QWORD*)(v4 + 40);
    if (v5 == 0) {
      return result;
    }
    v6 = result;
    GameRoutine_b86fb0(v5, 1);
    result = GameRoutine_c44560(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 32) - 8LL) + 56LL), 1);
    v7 = *(_QWORD*)(v6 + 32);
  }
  v12 = *(_QWORD*)(*(_QWORD*)(v7 - 8) + 64LL);
  if (v12 != 0) {
    result = *(_QWORD*)(*(_QWORD*)(v12 + 96) + 296LL);
    if (result != 0) {
      return GameRoutine_c72b30(result, 0);
    }
  }
  return result;
}

__int64 GameHr_cb90b0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  _QWORD v13[2];

  v1 = *(_QWORD*)(result + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 72);
    v3 = *(_QWORD*)(result + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = GameRoutine_1a0a0c0(v3);
    result = GameRoutine_1a09c50(v1);
    if (v4 != 0) {
      if (v2 != 0) {
        if (*(_DWORD*)(v2 + 1112) == 3 && *(_QWORD*)(v2 + 56) != 0) {
          v6 = 0.0f;
          v7 = *(float**)(*(_QWORD*)(v2 + 24) + 16LL);
          v8 = v7[92];
          v9 = (float)(v8 + (float)((float)(v7[91] - v8) * 0.5f)) - v8;
          if (v9 != 0.0f) {
            v10 = (float)(sqrtf((float)(v7[168] * v7[168]) +
                                (float)(v7[167] * v7[167])) -
                          v8) /
                  v9;
            v11 = 1.0f;
            if (v10 <= 1.0f) {
              v11 = v10;
            }
            if (v10 >= 0.0f) {
              v6 = v11;
            }
            else {
              v6 = 0.0f;
            }
          }
          GameRoutine_10c9b80((float)(fminf(fmaxf(v6, 0.0f), 1.0f) * 0.4f) +
                              0.1f);
        }
        v13[0] = v2;
        v13[1] = v4;
        v12 = *GameData_212ebc8[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_e1a6d0(v12, v13);
        result = GameRoutine_1a09c50(v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

__int64 GameHr_cded70(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v4;
  int v5;
  float* v6;
  float v7;
  float v8;
  int v9;
  struct {
    int v11;
    __int16 v12;
    char gap10_[2];
    int v13;
  } v11_;

  if (*(_BYTE*)(a1 + 80) == 1 && *(_BYTE*)(GameData_21f3d10 + 10) == 1) {
    v2 = *(_DWORD*)(a1 + 72);
    v3 = *(_DWORD*)(a1 + 76);
    v11_.v12 = 1;
    v11_.v11 = v2;
    v11_.v13 = v3;
    GameHr_cdeee0(a1, (__int64)&v11_.v11);
    if (*(_BYTE*)(a1 + 80) == 1) {
      *(_BYTE*)(a1 + 80) = 0;
    }
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v4 & 8) != 0) {
      v5 = 2;
    }
    else {
      v5 = 3;
    }
    v6 = (float*)(a1 + 8);
    if ((v5 & v4) == 0) {
      goto LABEL_18;
    }
  }
  else {
    v6 = (float*)(a1 + 8);
  }
  v7 = *v6;
  v8 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (*v6 <= 0x0.0p+0f) {
    if (*v6 >= 0x0.0p+0f || (v7 = v7 + v8) <= 0x0.0p+0f) {
    LABEL_19:
      *v6 = v7;
      if (v7 != 0x0.0p+0f) {
        return game_hub_d97c00(*(_QWORD**)(a1 + 16), 0);
      }
      goto LABEL_20;
    }
  }
  else {
    v7 = v7 - v8;
    if (v7 >= 0x0.0p+0f) {
      goto LABEL_19;
    }
  }
LABEL_18:
  *v6 = 0x0.0p+0f;
LABEL_20:
  if (*(_DWORD*)(a1 + 64) != 0) {
    v9 = *(unsigned __int8*)(a1 + 68);
    *(_DWORD*)(a1 + 64) = 0;
    if (v9 != 0) {
      *(_BYTE*)(a1 + 68) = 0;
      GameRoutine_d8d1a0_alt1(GameData_21f3cb8);
    }
  }
  return game_hub_d97c00(*(_QWORD**)(a1 + 16), 0);
}

__int64 GameHr_ceb940(__int64 result)
{
  float v1;
  __int64 v2;
  float v3;
  bool v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;

  v1 = *(float*)(result + 484);
  v2 = *(_QWORD*)(result + 384);
  if ((v2 & 0x8000000000LL) != 0) {
    v3 = 0.4f;
    v4 = v1 < 0.4f;
  }
  else {
    if (v1 <= 0.0f) {
      goto LABEL_8;
    }
    v1 = v1 - fabsf(*(float*)(*(_QWORD*)(result + 8) + 228LL));
    v3 = 0.0f;
    v4 = v1 < 0.0f;
  }
  if (v4) {
    v1 = v3;
  }
  *(float*)(result + 484) = v1;
LABEL_8:
  v5 = 0x10000000000LL;
  if (v1 <= 0.0f) {
    v5 = 0;
  }
  v6 = v5 | v2 & 0xFFFFFEFFFFFFFFFFLL;
  *(_QWORD*)(result + 384) = v6;
  if (v6 != v2) {
    v7 = *(_QWORD**)(result + 8);
    if (v7 != nullptr && v7[39] != 0) {
      v8 = v7[29];
      if (v8 != 0) {
        v9 = *(_DWORD*)(v8 + 340) & 0xFFFFFFFD |
             (2 * ((*(_DWORD*)(v7[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v8 + 340) = v9;
        *(_DWORD*)(v8 + 340) = v9 & 0xFFFFFFFE |
                               ((*(_DWORD*)(v7[2] + 384LL) & 0x20) != 0) |
                               0x2000;
      }
    }
    v10 = result;
    result = GameRoutine_d0e440(*(_QWORD*)(result + 16), 1);
    v11 = *(_QWORD*)(v10 + 384);
    v12 = v11 >> 29;
    v13 = (unsigned int)v11 >> 1;
    if ((*(_QWORD*)(v10 + 384) & 0x40000000LL) != 0) {
      v14 = 33;
    }
    else {
      v14 = 1;
    }
    LODWORD(v15) = (v14 | v12 & 0x10 | v13 & 6) << 16;
    if (*(_QWORD*)(v10 + 168) != 0) {
      v15 = (unsigned int)v15 | 0x80000;
    }
    else {
      v15 = (unsigned int)v15;
    }
    *(_QWORD*)(v10 + 440) = v15 + *(unsigned int*)(v10 + 184);
  }
  return result;
}

bool GameHr_cfd990(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  float v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char v7;
  _BOOL8 result;
  float v9;
  bool v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  struct {
    float v14[5];
    char v15;
    char gap69_[3];
    float v16;
    char v17;
    char gap77_[51];
    char v18;
  } v14_;

  v2 = *(_QWORD*)(a2 + 8);
  v3 = *(float*)(a2 + 4);
  LANES128(v13).n128_u64[0] = *(_QWORD*)a2;
  LANES128(v13).n128_u64[1] = v2;
  v5 = *(_QWORD*)a2;
  v6 = *(_QWORD*)(a2 + 8);
  LANES128(v13).n128_f32[1] = v3 + 0x1.0000000000000p+1f;
  LANES128(v12).n128_u64[0] = v5;
  LANES128(v12).n128_u64[1] = v6;
  LOBYTE(v5) = *(_BYTE*)(a1 + 57);
  LANES128(v12).n128_f32[1] = v3 + -0x1.0000000000000p+1f;
  if ((v5 & 1) == 0) {
    *(_BYTE*)(a1 + 57) = 1;
  }
  game_cfdb00((void*)((__int64)v14_.v14), a1, &v13, &v12, 1);
  v7 = LOBYTE(v14_.v14[0]);
  if (*(_BYTE*)(a1 + 57) != 0) {
    *(_BYTE*)(a1 + 57) = 0;
  }
  result = false;
  if ((v7 & 1) != 0 && (v14_.v17 & 1) != 0 && (v14_.v15 & 1) != 0) {
    v9 = vabds_f32(v14_.v16, v14_.v14[1]);
    v10 = vabds_f32(v14_.v14[4], v14_.v14[1]) < 0x1.47ae140000000p-7f &&
          v9 < 0x1.47ae140000000p-7f;
    result = false;
    if (v10) {
      collision_6725f0((void*)((__int64)v14_.v14), &v13, &v12, 2,
                       0x1.cccccc0000000p-2f);
      if ((v14_.v18 & 1) == 0) {
        return true;
      }
      v11 = v14_.v14[1];
      collision_6725f0((void*)((__int64)v14_.v14), &v13, &v12, 3,
                       0x1.cccccc0000000p-2f);
      if (v14_.v18 != 1 || (float)(v11 + 0x1.99999a0000000p-4f) < v14_.v14[1]) {
        return true;
      }
    }
  }
  return result;
}

float GameHr_d78cb0(float* a1, float a2)
{

#pragma clang fp contract(off)
  void* v3;
  float v4;
  __int64 v5;
  float v6;
  int v7;
  __int64 v8;
  float v9;
  float v10;
  float result;
  struct {
    __int64 v12;
    void* v13;
  } v12_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w"));
  if (fabsf(a2) >= 0x1.0000000000000p-23f) {
    v12_.v13 = &GameData_1af1e76;
    v4 = 0x0.0p+0f;
    v12_.v12 = game_HashString((__int64)&GameData_1af1e76),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w"));
    if (game_GameModeData_instance_ != 0) {
      v5 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v12_.v12),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v5 != 0) {
        v4 = (float)*(int*)(v5 + 32);
      }
    }
    v6 = v4 / 0x1.9000000000000p+6f;
  }
  else {
    if (*(_BYTE*)(game_g_game_setting + 805) == 1 &&
        (*(_BYTE*)(game_g_game_setting + 756) & 2) != 0) {
      v3 = &GameData_1ae2ba3;
    }
    else {
      v3 = &GameData_1ad35e8;
    }
    v12_.v13 = v3;
    v12_.v12 = game_HashString((__int64)v3),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w"));
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v8 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v12_.v12),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v8 != 0) {
        v7 = *(_DWORD*)(v8 + 32);
      }
      else {
        v7 = 0;
      }
    }
    v9 = (float)v7 / 0x1.9000000000000p+6f;
    v10 = GameRoutine_d28060_alt1();
    v6 = v9 * fmaxf(v10, 0x1.0000000000000p+0f);
  }
  result = v6 * *a1;
  *a1 = result;
  return result;
}

__int64 GameHr_d96be0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  int v10;
  int v11;

  v1 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  if (v1 != v2) {
    v3 = GameData_21ee240;
    v4 = *(_QWORD*)GameData_212c5c0[0];
    while (1) {
      v6 = *v1;
      if (*(_BYTE*)(*v1 + 16) != 0) {
        break;
      }
    LABEL_5:
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
    v7 = (float)(*(float*)(v4 + 160) * 16.683f) / 1000.0f;
    v5 = *(float*)(v6 + 20);
    v8 = *(float*)(v6 + 24);
    v9 = fabsf(v7 * *(float*)(v6 + 28));
    if (v5 <= v8) {
      if (v5 >= v8 || (v5 = v5 + v9) <= v8) {
      LABEL_13:
        *(float*)(v6 + 20) = v5;
        if (v3 != 0 && *(_BYTE*)(v3 + 152) == 3) {
          v10 = *(_DWORD*)(v3 + 156);
          v11 = (v10 & 8) != 0 ? 2 : 3;
          if ((v11 & v10) == 0) {
            if ((*(_BYTE*)(*(_QWORD*)v6 + 12LL) & 1) == 0) {
              *(_DWORD*)(v6 + 32) = *(_DWORD*)(*(_QWORD*)v6 + 8LL);
            }
            v5 = v8;
            *(float*)(v6 + 20) = v8;
          }
        }
        *(float*)(v6 + 32) = *(float*)(v6 + 32) + (float)(v7 * v5);
        goto LABEL_5;
      }
    }
    else {
      v5 = v5 - v9;
      if (v5 >= v8) {
        goto LABEL_13;
      }
    }
    v5 = *(float*)(v6 + 24);
    goto LABEL_13;
  }
  return result;
}

void GameHr_efd7b0()
{
  float v0;

  v0 = *(float*)(*(_QWORD*)GameData_212dbf0[0] + 140LL);
  if (v0 < 0.4f) {
    v0 = 0.4f;
  }
  *(float*)(*(_QWORD*)GameData_212dbf0[0] + 140LL) = v0;
}

#pragma GCC visibility pop
