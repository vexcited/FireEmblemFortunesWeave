#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* GameData_1f9cb48;
extern __int64 (*GameData_20e2728[])();
extern __int64 (*GameData_20e2bb0[])();
extern __int64 (*GameData_20e2c80[])();
extern __int64 (*GameData_20e6da8[])();
extern __int64 (*GameData_20e7230[])();
extern __int64 (*GameData_20e7300[])();
extern __int64 (*GameData_20e79d0[])();
extern __int64 (*GameData_20e7ea0[])();
extern __int64 (*GameData_20e7f70[])();
extern __int64 GameData_20e8388;
extern __int64 (*GameData_20e9590[])();
extern __int64 (*GameData_20ebbc8[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212cff8[3];
extern __int64 GameData_212d0d0[2];
extern __int64* GameData_212d670[3];
extern __int64 GameData_212d690;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dea8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212f6c0[2];
extern __int64* GameData_212fc70[2];
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130e70;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd0c8;
extern __int64 GameData_21ee260;
extern __int64 GameData_22587d8;
extern int GameData_2260ebc;
__int64 GameRoutine_13300a0(_QWORD);
__int64 GameRoutine_1434e70(_QWORD, _QWORD);
__int64 GameRoutine_1536e70(_QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c240(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_15740c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
__int64 GameRoutine_159e890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15b7780(void);
__int64 GameRoutine_15ddbe0(_QWORD, _QWORD);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ddaa0(_QWORD, _QWORD);
__int64 GameRoutine_16de1f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ea950(void);
__int64 GameRoutine_16f7ac0(_QWORD);
__int64 GameRoutine_182ac80(__int64, char);
__int64 GameRoutine_18334c0(__int64 result, char, unsigned __int8, int, int);
__int64 GameRoutine_18337f0(__int64, char, int, int, char);
__int64 GameRoutine_183e0d0(__int64);
__int64 GameRoutine_184d1f0(_QWORD, _QWORD);
__int64 GameRoutine_184e6b0(__int64, unsigned int);
void __attribute__((noreturn)) GameRoutine_1853140(void);
__int64 GameRoutine_1854cf0(_QWORD);
__int64 GameRoutine_18560c0(_QWORD);
__int64 GameRoutine_18569d0(void);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58fac0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a180(_QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_682780(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 GameRoutine_714d90(void);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a8520(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_825040(_QWORD, _QWORD);
__int64 GameRoutine_88cee0(_QWORD, _QWORD);
__int64 GameRoutine_890160(_QWORD);
__int64 GameRoutine_8c77c0(_QWORD);
__int64 GameRoutine_9e60d0(_QWORD);
__int64 BasicMenuCursor_16ddaa0(__int64 result, int);
__int64 GameRoutine_1434e70_alt1(__int64, char*) __asm__("GameRoutine_1434e70");
__int64 GameRoutine_88cee0_alt1(__int64) __asm__("GameRoutine_88cee0");
__int64 TimelineFile_890160(const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern int game_script_hub_ui_g_talk_result;
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameRoutine_65a180_alt1(_QWORD*) __asm__("GameRoutine_65a180");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 GameHr_1855100(__int64 a1);
_QWORD* GameHr_1856d60(_QWORD* result);
__int64 GameHr_1859ec0(__int64 result, __int64 a2);

__int64 GameHr_182bc80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  result = *(_QWORD*)GameData_212d0d0[0];
  if (*(_QWORD*)GameData_212d0d0[0] != 0) {
    v3 = *(_QWORD*)(result + 160);
    if (v3 != 0) {
      *(_BYTE*)(result + 152) = 1;
      GameRoutine_182ac80(result, 1);
      if (*GameData_212cff8[0] != 0) {
        GameRoutine_825040(*GameData_212cff8[0], 17);
      }
      v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
      v9 = 0;
      v10 = 0;
      GameRoutine_16dcd30(v4, "MapDetailInfo", &v9, 0);
      v5 = v4;
      v6 = GameData_212d6a8;
      *v4 = GameData_212d6a8 + 2;
      v4[22] = v6 + 143;
      v4[132] = v6 + 169;
      v7 = v10;
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        GameRoutine_1a09c50(v7);
        v5 = v8;
      }
      v5[133] = v3;
      v5[134] = 0;
      v5[135] = 0;
      *v5 = GameData_20e2728;
      v5[136] = 0;
      v5[132] = GameData_20e2c80;
      v5[22] = GameData_20e2bb0;
      *((_BYTE*)v5 + 361) = 1;
      return GameRoutine_657850(v5, GameData_212c730, "MapUnitInfoDetail", 1,
                                a1);
    }
  }
  return result;
}

__int64 GameHr_183e230(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;
  bool v8;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  int* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;

  result = GameRoutine_183e0d0(a1);
  v3 = *(_DWORD*)(a1 + 264);
  v4 = *(_DWORD*)(a1 + 260);
  v5 = result;
  v24 = v4;
  if (v4 != v3) {
    v6 = *(_DWORD*)(a1 + 268);
    v7 = *(_DWORD*)(a1 + 284);
    if (*(_BYTE*)(a1 + 288) != 0) {
      v3 = v4;
    }
    if (v3 <= v4) {
      v22 = v7 + v3;
      v8 = v4 < v7 + v3;
      v9 = &v22;
    }
    else {
      v23 = v3 - v7;
      v8 = v3 - v7 < v4;
      v9 = &v23;
    }
    if (v8) {
      v9 = &v24;
    }
    v10 = *v9;
    *(_DWORD*)(a1 + 264) = *v9;
    v11 = GameRoutine_155f480(a1 + 24, "T_PlayerHP_Num");
    if (v11 != 0) {
      v12 = GameRoutine_1a0a6c0(v11, GameData_212d670[0], GameData_212d690, 0);
      if (v12 != 0) {
        GameRoutine_156c910(v12, "%d", 1);
      }
    }
    GameRoutine_18334c0(a1, 1, v5 & 1, v10, v4);
    result = GameRoutine_18337f0(a1, 1, v4, v6, 1);
  }
  v13 = *(_DWORD*)(a1 + 276);
  v14 = *(_DWORD*)(a1 + 272);
  v24 = v14;
  if (v14 != v13) {
    v15 = *(_DWORD*)(a1 + 280);
    v16 = *(_DWORD*)(a1 + 284);
    if (*(_BYTE*)(a1 + 288) != 0) {
      v13 = v14;
    }
    if (v13 <= v14) {
      v22 = v16 + v13;
      v17 = v14 < v16 + v13;
      v18 = &v22;
    }
    else {
      v23 = v13 - v16;
      v17 = v13 - v16 < v14;
      v18 = &v23;
    }
    if (v17) {
      v18 = &v24;
    }
    v19 = *v18;
    *(_DWORD*)(a1 + 276) = *v18;
    v20 = GameRoutine_155f480(a1 + 24, "T_TargetHP_Num");
    if (v20 != 0) {
      v21 = GameRoutine_1a0a6c0(v20, GameData_212d670[0], GameData_212d690, 0);
      if (v21 != 0) {
        GameRoutine_156c910(v21, "%d", 1);
      }
    }
    GameRoutine_18334c0(a1, 0, (v5 & 1) == 0, v19, v14);
    return GameRoutine_18337f0(a1, 0, v14, v15, 1);
  }
  return result;
}

__int64 GameHr_183e8f0(__int64 a1, _BYTE* a2)
{
  char v3;
  int v4;

  v3 = GameRoutine_183e0d0(a1);
  v4 = (unsigned __int8)*a2;
  if ((unsigned int)(v4 - 2) < 2) {
    v3 = 0;
  }
  else if (v4 != 1) {
    if (*a2 != 0) {
      v3 = 1;
    }
    else {
      v3 ^= 1u;
    }
  }
  return v3 & 1;
}

__int64 GameHr_184c4a0(__int64 a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  char v15;
  __int64 v16;
  char v17;
  __int64 v18;
  _BYTE v19[32];
  __int64 v20;
  __int64 v21;
  __int64 v22;

  GameRoutine_1560070((void*)&v21, a1 + 848, "L_UnitInfo");
  v2 = *(_QWORD*)(a1 + 1072);
  v20 = 0;
  v3 = GameRoutine_159e890(v2, 0, v19);
  if (v22 != 0) {
    v4 = GameRoutine_1a0a0c0(v22);
    if (v4 != 0) {
      v5 = v4;
      if (v21 != 0) {
        GameRoutine_15740c0(v21, v2, 0, 0, v3 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
    if (v22 != 0) {
      GameRoutine_1a09c50(v22);
    }
  }
  v6 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp00");
  v17 = 0;
  v18 = 0;
  v14[0] = &GameData_1a9f09e;
  v14[1] = "MID_KeyHelp_Watch";
  v15 = 1;
  v16 = 0x200000000LL;
  GameRoutine_1593d90(v6, v14);
  v7 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp01");
  v15 = 1;
  v17 = 0;
  v18 = 0;
  v14[0] = &GameData_1a9f09e;
  v14[1] = "MID_KeyHelp_Read";
  v16 = 0x20000000BLL;
  GameRoutine_1593d90(v7, v14);
  GameRoutine_1562680(a1 + 848, "Help_Off", 1.0);
  GameRoutine_15638b0(a1 + 848, "Help_Off", 0);
  GameRoutine_1562f00(a1 + 848, "Help_Off");
  result = GameRoutine_1563030(a1 + 848, "Help_Off", 0);
  v9 = *(_QWORD*)(a1 + 1072);
  *(_BYTE*)(a1 + 1080) = 0;
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 392);
    if (v10 != 0) {
      v11 = (__int64*)GameData_21c9ac0;
      v12 = GameData_21c9ac8;
      if (GameData_21c9ac0 != GameData_21c9ac8) {
        while (1) {
          v13 = *v11++;
          result = GameRoutine_184d1f0(v10, v13);
          if ((_DWORD)result == 1) {
            break;
          }
          if (v11 == (__int64*)v12) {
            return result;
          }
        }
        *(_BYTE*)(a1 + 1080) = 1;
      }
    }
  }
  return result;
}

__int64 GameHr_184f180(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  void* v21;
  _BYTE* v22;
  char v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e008[0], &GameData_20e8388, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    return 1;
  }
  v5 = *(_DWORD*)(a1 + 1184);
  v6 = *(_QWORD*)(v4 + 88);
  v7 = (__int64*)GameData_212bf68;
  v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
  v28 = 0;
  v29 = 0;
  GameRoutine_16dcd30(v8, "RelianceSelectMenu", &v28, 0);
  v9 = GameData_212d6a8;
  v10 = v29;
  *(_QWORD*)v8 = GameData_212d6a8 + 2;
  *(_QWORD*)(v8 + 176) = v9 + 143;
  *(_QWORD*)(v8 + 1056) = v9 + 169;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    GameRoutine_1a09c50(v10);
  }
  v11 = *v7;
  *(_DWORD*)(v8 + 1064) = v5;
  *(_QWORD*)(v8 + 1072) = v6;
  *(_BYTE*)(v8 + 1080) = 0;
  *(_QWORD*)v8 = GameData_20e6da8;
  *(_QWORD*)(v8 + 176) = GameData_20e7230;
  *(_QWORD*)(v8 + 1056) = GameData_20e7300;
  v12 = GameRoutine_651b90(v11, 168, 16, 0);
  *(_QWORD*)v12 = 0;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 160) = 0;
  v13 = GameData_212fca0[0] + 2;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 16) = v13;
  *(_QWORD*)(v12 + 24) = -1;
  v14 = GameData_212dea8;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  v15 = v14 + 2;
  v16 = *v7;
  *(_BYTE*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 117) = 0;
  *(_DWORD*)(v12 + 164) = 1;
  *(_QWORD*)(v8 + 1088) = v12;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = v15;
  v17 = GameRoutine_651b90(v16, 168, 16, 0);
  v18 = *(_DWORD*)(v8 + 1064);
  *(_QWORD*)v17 = 0;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_QWORD*)(v17 + 72) = 0;
  *(_QWORD*)(v17 + 80) = 0;
  *(_QWORD*)(v17 + 88) = 0;
  *(_QWORD*)(v17 + 96) = 0;
  *(_QWORD*)(v17 + 104) = 0;
  *(_QWORD*)(v17 + 112) = 0;
  *(_QWORD*)(v17 + 120) = 0;
  *(_QWORD*)(v17 + 128) = 0;
  *(_QWORD*)(v17 + 136) = 0;
  *(_QWORD*)(v17 + 144) = 0;
  *(_QWORD*)(v17 + 152) = 0;
  if (v18 != 0) {
    v19 = 3;
  }
  else {
    v19 = 2;
  }
  *(_QWORD*)(v17 + 152) = 0;
  *(_QWORD*)(v17 + 160) = 0;
  *(_QWORD*)(v17 + 16) = v13;
  *(_QWORD*)(v17 + 24) = -1;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  *(_QWORD*)(v17 + 72) = 0;
  *(_QWORD*)(v17 + 80) = 0;
  *(_QWORD*)(v17 + 88) = v15;
  *(_QWORD*)(v17 + 128) = 0;
  *(_QWORD*)(v17 + 136) = 0;
  *(_QWORD*)(v17 + 144) = 0;
  *(_BYTE*)(v17 + 160) = 0;
  *(_QWORD*)(v17 + 96) = 0;
  *(_QWORD*)(v17 + 104) = 0;
  *(_QWORD*)(v17 + 112) = 0;
  *(_QWORD*)(v17 + 117) = 0;
  *(_DWORD*)(v17 + 164) = 1;
  *(_QWORD*)(v8 + 1096) = v17;
  GameRoutine_16de1f0(v8, v19, 0);
  v20 = *(_QWORD*)(a1 + 40);
  if (v20 != 0) {
    *(_QWORD*)(v20 + 48) = v8;
    *(_QWORD*)(v8 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v8;
  *(_QWORD*)(v8 + 24) = "RelianceSelectMenu";
  *(_QWORD*)(v8 + 32) = a1;
  *(_DWORD*)(v8 + 140) = GameRoutine_7a8520("RelianceSelectMenu");
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 24;
  *(_QWORD*)(v8 + 80) = 1;
  v21 = GameData_212c730;
  *(_QWORD*)(v8 + 8) = GameData_212c730;
  *(_QWORD*)(v8 + 16) = v21;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
      (*(_WORD*)(v8 + 136) & 0x100) == 0) {
    *(_WORD*)(v8 + 136) |= 0x100u;
  }
  v22 = *(_BYTE**)(v8 + 32);
  v23 = v22[138];
  if (v23 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*(_QWORD*)(v8 + 32));
    v23 = v22[138];
  }
  v22[138] = v23 + 1;
  *(_QWORD*)(v8 + 336) = 0;
  *(_WORD*)(v8 + 136) |= 2u;
  v25 = *(_QWORD**)(v8 + 256);
  v24 = *(_QWORD**)(v8 + 264);
  while (v25 != v24) {
    if (*v25 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v25 + 8LL))(*v25);
      v24 = *(_QWORD**)(v8 + 264);
    }
    ++v25;
  }
  v27 = *(_QWORD*)(v8 + 344);
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    *(_QWORD*)(v8 + 344) = 0;
  }
  *(_QWORD*)(v8 + 264) = *(_QWORD*)(v8 + 256);
  *(_QWORD*)(v8 + 240) = *(_QWORD*)(v8 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 1024LL))(v8);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 1032LL))(v8);
  return 9;
}

__int64 GameHr_184ff20(__int64 a1, int* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;

  v4 = (_QWORD*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1232, 16, 0);
  v6 = GameRoutine_184e6b0(v5, 1u);
  *(_QWORD*)(v5 + 1200) = 0;
  *(_QWORD*)(v5 + 1208) = 0;
  *(_QWORD*)v5 = GameData_20e79d0;
  *(_QWORD*)(v5 + 1216) = 0;
  *(_QWORD*)(v5 + 1056) = GameData_20e7f70;
  v7 = *a2;
  *(_QWORD*)(v5 + 176) = GameData_20e7ea0;
  *(_DWORD*)(v5 + 1192) = v7;
  v9 = *((_QWORD*)a2 + 1);
  v8 = *((_QWORD*)a2 + 2);
  v10 = v8 - v9;
  if (v8 != v9) {
    if (v10 < 0) {
      GameRoutine_688200(v6);
    }
    v11 = GameRoutine_651b90(*v4, v8 - v9, 16, 0);
    v12 = v11 + v10;
    *(_QWORD*)(v5 + 1200) = v11;
    *(_QWORD*)(v5 + 1208) = v11;
    *(_QWORD*)(v5 + 1216) = v11 + v10;
    GameRoutine_1a0b950(v11, v9, v10);
    *(_QWORD*)(v5 + 1208) = v12;
  }
  GameRoutine_657850(v5, GameData_212c730, "RelianceCmdBtlUnitSelectMenu", 1,
                     a1);
  v14 = *(_QWORD**)(v5 + 256);
  v13 = *(_QWORD**)(v5 + 264);
  *(_QWORD*)(v5 + 336) = 0;
  while (v14 != v13) {
    if (*v14 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v14 + 8LL))(*v14);
      v13 = *(_QWORD**)(v5 + 264);
    }
    ++v14;
  }
  v15 = *(_QWORD*)(v5 + 344);
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    *(_QWORD*)(v5 + 344) = 0;
  }
  *(_QWORD*)(v5 + 264) = *(_QWORD*)(v5 + 256);
  *(_QWORD*)(v5 + 240) = *(_QWORD*)(v5 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1024LL))(v5);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 1032LL))(v5);
  return v5;
}

bool GameHr_1850e10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 != 0) {
    if (GameData_21caab0 == 0 || *(_BYTE*)(GameData_21caab0 + 15) != 9) {
      v2 = *(_QWORD*)(v1 + 440);
      if (v2 != 0 && *(_BYTE*)(v2 + 16) == 8) {
        v3 = *(_QWORD*)(v1 + 392);
        v4 = GameRoutine_682780(9);
        if (v4 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL) ==
                           *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1672LL)) {
          return true;
        }
      }
    }
    v5 = *(_QWORD*)(v1 + 440);
    if (v5 != 0 && *(_BYTE*)(v5 + 16) == 8) {
      if (GameData_21caab0 != 0) {
        return *(_DWORD*)(GameData_21caab0 + 60) != 1;
      }
      return true;
    }
  }
  return false;
}

bool GameHr_18515e0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 == 0 || v2 == 0) {
    goto LABEL_19;
  }
  v5 = a1[2];
  if (v5 == 0 || *(_BYTE*)(v5 + 64) == 4) {
    goto LABEL_19;
  }
  if (GameData_21caab0 != 0 &&
      (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                               *(_QWORD*)(v5 + 24) + 40LL)) != 0 &&
      *(_DWORD*)(v6 + 32) != 0) {
    v7 = false;
    v8 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      goto LABEL_17;
    }
  }
  else {
    v7 = (unsigned __int16)GameRoutine_8c77c0(v5) == 0;
    v8 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      goto LABEL_17;
    }
  }
  v9 = GameRoutine_65c580(*(_QWORD*)(v8 + 48), *(_QWORD*)(v5 + 24) + 40LL);
  if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
    if (v7) {
      return true;
    }
    goto LABEL_18;
  }
LABEL_17:
  if ((v7 & ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v5 + 24)) ^ 1) & 1) !=
      0) {
    return true;
  }
LABEL_18:
  v1 = *a1;
  v2 = a1[1];
LABEL_19:
  if (v1 != 0 && v2 != 0) {
    v11 = a1[3];
    if (v11 != 0 && *(_BYTE*)(v11 + 64) != 4) {
      if (GameData_21caab0 != 0 &&
          (v12 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    *(_QWORD*)(v11 + 24) + 40LL)) != 0 &&
          *(_DWORD*)(v12 + 32) != 0) {
        v13 = false;
        v14 = GameData_21caab0;
        if (GameData_21caab0 == 0) {
          goto LABEL_35;
        }
      }
      else {
        v13 = (unsigned __int16)GameRoutine_8c77c0(v11) == 0;
        v14 = GameData_21caab0;
        if (GameData_21caab0 == 0) {
          goto LABEL_35;
        }
      }
      v15 =
          GameRoutine_65c580(*(_QWORD*)(v14 + 48), *(_QWORD*)(v11 + 24) + 40LL);
      if (v15 != 0 && *(_DWORD*)(v15 + 32) != 0) {
        if (v13) {
          return true;
        }
        goto LABEL_36;
      }
    LABEL_35:
      if ((v13 & ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v11 + 24)) ^ 1) &
           1) != 0) {
        return true;
      }
    LABEL_36:
      v1 = *a1;
      v2 = a1[1];
    }
  }
  if (v1 != 0 && v2 != 0) {
    v17 = a1[4];
    if (v17 != 0 && *(_BYTE*)(v17 + 64) != 4) {
      if (GameData_21caab0 != 0 &&
          (v18 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    *(_QWORD*)(v17 + 24) + 40LL)) != 0 &&
          *(_DWORD*)(v18 + 32) != 0) {
        v19 = false;
        v20 = GameData_21caab0;
        if (GameData_21caab0 == 0) {
          goto LABEL_53;
        }
      }
      else {
        v19 = (unsigned __int16)GameRoutine_8c77c0(v17) == 0;
        v20 = GameData_21caab0;
        if (GameData_21caab0 == 0) {
          goto LABEL_53;
        }
      }
      v21 =
          GameRoutine_65c580(*(_QWORD*)(v20 + 48), *(_QWORD*)(v17 + 24) + 40LL);
      if (v21 != 0 && *(_DWORD*)(v21 + 32) != 0) {
        if (v19) {
          return true;
        }
        goto LABEL_54;
      }
    LABEL_53:
      if ((v19 & ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v17 + 24)) ^ 1) &
           1) != 0) {
        return true;
      }
    LABEL_54:
      v1 = *a1;
      v2 = a1[1];
    }
  }
  if (v1 == 0) {
    goto LABEL_71;
  }
  if (v2 == 0) {
    goto LABEL_71;
  }
  v22 = a1[5];
  if (v22 == 0 || *(_BYTE*)(v22 + 64) == 4) {
    goto LABEL_71;
  }
  if (GameData_21caab0 != 0 &&
      (v23 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                *(_QWORD*)(v22 + 24) + 40LL)) != 0 &&
      *(_DWORD*)(v23 + 32) != 0) {
    v24 = false;
    v25 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      goto LABEL_69;
    }
  }
  else {
    v24 = (unsigned __int16)GameRoutine_8c77c0(v22) == 0;
    v25 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      goto LABEL_69;
    }
  }
  v26 = GameRoutine_65c580(*(_QWORD*)(v25 + 48), *(_QWORD*)(v22 + 24) + 40LL);
  if (v26 != 0 && *(_DWORD*)(v26 + 32) != 0) {
    if (v24) {
      return true;
    }
    goto LABEL_70;
  }
LABEL_69:
  if ((v24 & ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v22 + 24)) ^ 1) &
       1) != 0) {
    return true;
  }
LABEL_70:
  v1 = *a1;
  v2 = a1[1];
LABEL_71:
  if (v1 == 0) {
    return false;
  }
  if (v2 == 0) {
    return false;
  }
  v27 = a1[6];
  if (v27 == 0 || *(_BYTE*)(v27 + 64) == 4) {
    return false;
  }
  if (GameData_21caab0 != 0 &&
      (v28 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                *(_QWORD*)(v27 + 24) + 40LL)) != 0 &&
      *(_DWORD*)(v28 + 32) != 0) {
    v29 = false;
    v30 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      return (v29 &
              ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v27 + 24)) ^ 1) &
              1) != 0;
    }
  }
  else {
    v29 = (unsigned __int16)GameRoutine_8c77c0(v27) == 0;
    v30 = GameData_21caab0;
    if (GameData_21caab0 == 0) {
      return (v29 &
              ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v27 + 24)) ^ 1) &
              1) != 0;
    }
  }
  v31 = GameRoutine_65c580(*(_QWORD*)(v30 + 48), *(_QWORD*)(v27 + 24) + 40LL);
  if (v31 == 0 || *(_DWORD*)(v31 + 32) == 0) {
    return (v29 & ((unsigned int)GameRoutine_9e60d0(*(_QWORD*)(v27 + 24)) ^ 1) &
            1) != 0;
  }
  return v29;
}

__int64 GameHr_1851ca0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  const char* v8;
  __int64* v10;

  GameRoutine_15b7780();
  v2 = *(_DWORD*)(a1 + 100);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = GameRoutine_1a0a0c0(v3);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  GameRoutine_1a09c50(v5);
  v7 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v7 = &GameData_22587d8;
  }
LABEL_6:
  if (v2 == 2) {
    v8 = "RelianceTalk_New";
  }
  else {
    v8 = "RelianceTalk_Old";
  }
  return GameRoutine_1562cf0(v7, v8);
}

__int64 GameHr_1851f50(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = GameRoutine_821090(1);
  if (GameData_21caab0 != 0 &&
      (v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v2)) != 0 &&
      *(int*)(v3 + 32) >= 1) {
    return GameRoutine_15ddbe0(v1, 1);
  }
  else {
    return 0;
  }
}

__int64* GameHr_1852b80(__int64* result, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;

  v4 = *result;
  v3 = result[1];
  v5 = result;
  if (*result != v3) {
    for (i = (__int64*)*result; i != (__int64*)v3; i += 3) {
      v7 = *i;
      if (a2 != 0 && (v8 = *(_QWORD*)(*(_QWORD*)(v7 + 24) + 1672LL)) ==
                         *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1672LL)) {
        if (a3 != 0) {
          v9 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 1672LL);
          v10 = *(_QWORD*)(*(_QWORD*)(i[1] + 24) + 1672LL);
          if (v10 == v9) {
            return result;
          }
          if (v8 == v9) {
            goto LABEL_3;
          }
        }
      }
      else if (a3 != 0 && a2 != 0 &&
               *(_QWORD*)(*(_QWORD*)(v7 + 24) + 1672LL) ==
                   *(_QWORD*)(*(_QWORD*)(a3 + 24) + 1672LL)) {
        v10 = *(_QWORD*)(*(_QWORD*)(i[1] + 24) + 1672LL);
        v8 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 1672LL);
      LABEL_3:
        if (v10 == v8) {
          return result;
        }
      }
    }
  }
  v11 = result[2];
  if (v3 >= v11) {
    v13 = v3 - v4;
    v14 = 1 - 0x5555555555555555LL * ((__int64)(v3 - v4) >> 3);
    if (v14 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1853140();
    }
    v15 = GameData_212bf68;
    v16 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - v4) >> 3);
    if (2 * v16 > v14) {
      v14 = 2 * v16;
    }
    if (v16 >= 0x555555555555555LL) {
      v17 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v18 = a2;
      v19 = a3;
      v20 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24 * v17, 16, 0);
      a3 = v19;
      a2 = v18;
    }
    else {
      v20 = 0;
    }
    v21 = v20 + v13;
    v22 = v20 + 24 * v17;
    *(_QWORD*)v21 = a2;
    *(_QWORD*)(v21 + 8) = a3;
    *(_BYTE*)(v21 + 16) = 0;
    v12 = v20 + v13 + 24;
    result = (__int64*)GameRoutine_1a0b950(v20, v4, v13);
    *v5 = v20;
    v5[1] = v12;
    v5[2] = v22;
    if (v4 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
        v23 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v15 + v23, v4);
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    *(_QWORD*)(v3 + 8) = a3;
    v12 = v3 + 24;
    *(_BYTE*)(v3 + 16) = 0;
  }
  v5[1] = v12;
  return result;
}

__int64 GameHr_1854b40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[4];
  __int64 v18;
  _WORD v19[10];
  _BYTE v20[4];
  _DWORD v21[2];

  GameRoutine_16ea950();
  v2 = a1[7];
  if (v2 != 0) {
    v3 = GameRoutine_1a0a0c0(v2);
    if (v3 != 0) {
      v4 = a1[6];
      v5 = v3;
      if (v4 != 0) {
        v6 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        GameRoutine_1562060(v4, "T_Help", v6);
        v7 = GameRoutine_15621a0(v4, "T_Help");
        if (v7 != 0) {
          v8 = v7;
          v9 = GameRoutine_15621a0(v4, "T_Help");
          if (v9 != 0) {
            GameRoutine_190a0c0(v17, v21, v20, v9, *(_QWORD*)(v9 + 216));
            v10 = v21[0];
            v11 = v21[1];
          }
          else {
            v10 = 0;
            v11 = 0;
          }
          v12 = *(_BYTE*)(v8 + 88);
          *(_DWORD*)(v8 + 80) = v10;
          *(_DWORD*)(v8 + 84) = v11;
          *(_BYTE*)(v8 + 88) = v12 | 0x10;
        }
        v18 = 0;
        memset(v19, 0, 13);
        v17[2] = 0;
        v17[3] = 0;
        v13 = GameRoutine_155f480(v4, "W_Help");
        if (v13 != 0) {
          v14 = GameRoutine_1a0a6c0(v13, GameData_212d670[0],
                                    GameData_212fc70[0], 0);
        }
        else {
          v14 = 0;
        }
        v17[0] = v14;
        v17[1] = GameRoutine_155f480(v4, "T_Help");
        v19[4] = 257;
        LODWORD(v18) = 1106247680;
        if (v14 != 0) {
          v15 = GameRoutine_58fac0(v14, "Margin_Width");
          if (v15 != 0) {
            *(float*)&v18 = (float)*(int*)(v15 + *(unsigned int*)(v15 + 4)) +
                            (float)*(int*)(v15 + *(unsigned int*)(v15 + 4));
          }
        }
        GameRoutine_156c240(v17);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
  }
  return GameRoutine_1854cf0(a1);
}

__int64 GameHr_1854cf0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = a1[7];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        if (*(_QWORD**)(a1[1] + 336LL) == a1 &&
            (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) != 0) {
          result = GameRoutine_1562cf0(v3, "HelpOn");
        }
        else {
          result = a1[7];
          if (result != 0) {
            result = GameRoutine_1a0a0c0(result);
            if (result != 0) {
              v5 = result;
              result = a1[6];
              if (result != 0) {
                result = GameRoutine_1562cf0(result, "HelpOff");
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
                result = GameRoutine_1a09c50(v5);
              }
            }
          }
        }
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

__int64 GameHr_1854e00(__int64 a1)
{
  const char* v1;

  v1 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  return GameRoutine_7a7dc0("%s_Help", v1);
}

__int64 GameHr_1854e80(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v4 = result;
      result = *(_QWORD*)(a1 + 48);
      if (result != 0) {
        result = GameRoutine_1562cf0(result, "HelpOff");
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

__int64 GameHr_1855080(__int64 a1)
{
  char v1;
  int v2;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v2 = *(_DWORD*)(GameData_21caab0 + 60);
    if (v2 == 0 || v2 == 3 && *(int*)(GameData_21caab0 + 64) < 2 ||
        (v4 = GameRoutine_820d50(0), GameData_21caab0 != 0) &&
            (v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v4)) !=
                0 &&
            *(_DWORD*)(v5 + 32) != 0) {
      v1 = 0;
    }
    else {
      v1 = *(_BYTE*)(a1 + 81);
    }
  }
  return v1 & 1;
}

__int64 GameHr_1855100(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v7[24];

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 8);
  *(_WORD*)v7 = 0;
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  v5 = GameRoutine_1434e70_alt1(v4, v7);
  if (v5 != 0) {
    *(_BYTE*)(v5 + 152) = 2;
  }
  return 9;
}

__int64 GameHr_1855bb0(__int64 a1)
{
  return (unsigned __int8)GameRoutine_1536e70(3) & *(_BYTE*)(a1 + 81) & 1;
}

bool GameHr_1855c00(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  __int64 v13;

  v2 = v10;
  v12 = 0;
  v10[0] = GameData_20ebbc8;
  v10[1] = &v12;
  v11 = v10;
  v3 = *(_QWORD*)(GameData_21c9700 + 8);
  v4 = *(__int64**)(v3 + 48);
  v5 = *(__int64**)(v3 + 56);
  if (v4 != v5) {
    do {
      v6 = *v4;
      v7 = *(_QWORD*)(*v4 + 280);
      if (v7 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 280) + 112LL))(
                *(_QWORD*)(v6 + 280)) &
            1) == 0) &&
          *(_QWORD*)(v6 + 280) != 0) {
        v13 = v6;
        if (v11 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v13);
      }
      ++v4;
    } while (v4 != v5);
    v2 = v11;
    if (v11 != v10) {
      if (v11 != nullptr) {
        v8 = 40;
      LABEL_14:
        (*(void (**)(_QWORD*, __int64))(*v2 + v8))(v2, a2);
      }
      return v12 > 0;
    }
  }
  v8 = 32;
  goto LABEL_14;
}

__int64 GameHr_1855d20(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;
  __int64 v16;

  v3 = v13;
  v15 = 0;
  v13[0] = GameData_20ebbc8;
  v13[1] = &v15;
  v14 = v13;
  v4 = *(_QWORD*)(GameData_21c9700 + 8);
  v5 = *(__int64**)(v4 + 48);
  v6 = *(__int64**)(v4 + 56);
  if (v5 == v6) {
    goto LABEL_13;
  }
  do {
    v7 = *v5;
    v8 = *(_QWORD*)(*v5 + 280);
    if (v8 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 280) + 112LL))(
              *(_QWORD*)(v7 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v7 + 280) != 0) {
      v16 = v7;
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v16);
    }
    ++v5;
  } while (v5 != v6);
  v3 = v14;
  if (v14 == v13) {
  LABEL_13:
    v9 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_15;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v3 + v9))(v3, a2);
LABEL_15:
  if (v15 < 1) {
    return 1;
  }
  v10 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v10 + 152) != 0) {
    v11 = *(_QWORD*)(v10 + 152);
  }
  else {
    v11 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_16f7ac0(v11);
  return 9;
}

__int64 GameHr_1855e60(__int64 a1, unsigned int a2)
{
  __int64 v4;
  int v6;
  char v7;
  int v8;
  bool v9;
  __int64 result;
  int v11;
  int v12;
  __int64 v13;
  int v14;

  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 17) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 82) = 1;
  *(_WORD*)(a1 + 80) = 257;
  *(_WORD*)(a1 + 83) = 257;
  *(_QWORD*)a1 = GameData_20e9590;
  *(_QWORD*)(a1 + 8) = 0;
  if (GameData_21ee260 == 0) {
    v4 = GameData_21caab0;
  LABEL_12:
    if (v4 == 0) {
      goto LABEL_24;
    }
    goto LABEL_13;
  }
  v4 = GameData_21caab0;
  if (*(__int16*)(GameData_21ee260 + 22) * *(__int16*)(GameData_21ee260 + 20) *
          *(__int16*)(GameData_21ee260 + 24) ==
      0) {
    goto LABEL_12;
  }
  if (GameData_21caab0 == 0) {
    goto LABEL_24;
  }
  if (*(_DWORD*)(GameData_21caab0 + 60) != 3 || GameData_21cd0c8 == 0) {
    if (GameData_21cd0c8 == 0) {
      goto LABEL_24;
    }
  }
  else if ((*(_BYTE*)(GameData_21caab0 + 92) & 2) == 0) {
    goto LABEL_13;
  }
  if ((*(_BYTE*)(GameData_21caab0 + 92) & 0x40) == 0) {
    goto LABEL_24;
  }
LABEL_13:
  v6 = *(_DWORD*)(v4 + 60);
  v7 = 1;
  if (v6 > 1) {
    if (v6 == 2 || v6 == 3 && *(int*)(v4 + 64) <= 1) {
      v7 = GameRoutine_18560c0(a2);
    }
    goto LABEL_25;
  }
  if (v6 == 0) {
  LABEL_24:
    v7 = 0;
    goto LABEL_25;
  }
  if (v6 == 1) {
    v8 = *(unsigned __int8*)(v4 + 15);
    if ((unsigned int)(v8 - 2) >= 3) {
      if (v8 != 1) {
        goto LABEL_25;
      }
      v9 = *(_DWORD*)(v4 + 64) <= 2;
    }
    else {
      v9 = *(_DWORD*)(v4 + 64) <= 3;
    }
    v7 = !v9;
  }
LABEL_25:
  *(_BYTE*)(a1 + 83) = v7 & 1;
  result = GameRoutine_820d50(16);
  if (GameData_21caab0 != 0 &&
      ((result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    result)) != 0 &&
           *(_DWORD*)(result + 32) != 0 ||
       GameData_21caab0 != 0 &&
           ((v11 = *(_DWORD*)(GameData_21caab0 + 60)) == 2 ||
            v11 == 3 && *(_DWORD*)(GameData_21caab0 + 64) == 1))) {
    result = GameRoutine_820d50(17);
    if (GameData_21caab0 != 0 &&
        ((result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                      result)) != 0 &&
             *(_DWORD*)(result + 32) != 0 ||
         GameData_21caab0 != 0 &&
             ((v12 = *(_DWORD*)(GameData_21caab0 + 60)) == 2 ||
              v12 == 3 && *(_DWORD*)(GameData_21caab0 + 64) == 1))) {
      v13 = GameRoutine_821090(9);
      if (GameData_21caab0 == 0 ||
          (result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                       v13)) == 0 ||
          *(int*)(result + 32) < 1 ||
          GameData_21caab0 != 0 &&
              ((v14 = *(_DWORD*)(GameData_21caab0 + 60)) == 2 ||
               v14 == 3 && *(_DWORD*)(GameData_21caab0 + 64) == 1)) {
        result = GameRoutine_18560c0(a2);
        if ((result & 1) == 0) {
          *(_BYTE*)(a1 + 84) = 0;
        }
      }
    }
  }
  return result;
}

const char* GameHr_18568c0()
{
  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3 &&
      *(int*)(GameData_21caab0 + 64) < 6) {
    return "MID_SysMenu_HellGatePeriod";
  }
  else {
    return "MID_SysMenu_NextTimeline";
  }
}

__int64 GameHr_1856900(__int64 a1)
{
  char v1;
  int v2;
  int v3;
  int v4;
  __int64 v5;
  char v6;
  int v7;
  char v8;

  v1 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v2 = *(_DWORD*)(GameData_21caab0 + 60);
    if (v2 > 1) {
      if (v2 == 2) {
        v1 = 1;
        return v1 & 1;
      }
      if (v2 != 3 || *(int*)(GameData_21caab0 + 64) >= 2) {
        goto LABEL_19;
      }
      goto LABEL_12;
    }
    if (v2 != 0) {
      if (v2 != 1) {
        goto LABEL_19;
      }
      v3 = *(unsigned __int8*)(GameData_21caab0 + 15);
      if ((unsigned int)(v3 - 2) >= 3) {
        if (v3 != 1) {
          goto LABEL_19;
        }
        v7 = *(_DWORD*)(GameData_21caab0 + 64);
        if (v7 >= 3) {
          if (v7 == 3) {
            v5 = a1;
            v6 = GameRoutine_18569d0();
          LABEL_18:
            v8 = v6;
            a1 = v5;
            if ((v8 & 1) != 0) {
              goto LABEL_19;
            }
            goto LABEL_12;
          }
        LABEL_19:
          v1 = *(_BYTE*)(a1 + 81);
          return v1 & 1;
        }
      }
      else {
        v4 = *(_DWORD*)(GameData_21caab0 + 64);
        if (v4 >= 4) {
          if (v4 == 4) {
            v5 = a1;
            v6 = GameRoutine_714d90();
            goto LABEL_18;
          }
          goto LABEL_19;
        }
      }
    }
  LABEL_12:
    v1 = 0;
  }
  return v1 & 1;
}

_QWORD* GameHr_1856d60(_QWORD* result)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v9;
  _QWORD* v10;
  unsigned int* v11;
  unsigned int* v12;
  __int64 v13;
  int v14;
  _QWORD* v16;
  _QWORD* v17;
  struct {
    __int64 v18;
    void* v19;
  } v18_;

  if (*(_QWORD**)(result[1] + 336LL) == result) {
    v1 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_37;
    }
    v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v2 != 2) {
      if (v2 == 3) {
        v3 = result;
        if (*(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
          v18_.v19 = &GameData_1ac4744;
          v18_.v18 = game_HashString((__int64)&GameData_1ac4744);
          if (game_GameModeData_instance_ == 0 ||
              (v4 = game_GameVariableTable_Find(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)&v18_.v18)) == 0) {
            result = v3;
            goto LABEL_37;
          }
          v5 = *(_DWORD*)(v4 + 32);
          result = v3;
          if (v5 == 0) {
          LABEL_37:
            if (*(_QWORD**)(result[1] + 336LL) == result) {
              return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(
                  *result + 64LL))(result, 0);
            }
            return result;
          }
        LABEL_30:
          if (result[1] == 0) {
            goto LABEL_37;
          }
          v16 = result;
          v17 = (_QWORD*)__dynamic_cast(result[1], GameData_212e030[0],
                                        GameData_212f6c0[0], 0);
          result = v16;
          if (game_script_hub_ui_g_talk_result == 1) {
            if (v17 == nullptr) {
              goto LABEL_37;
            }
          }
          else if (v17 == nullptr || game_script_hub_ui_g_talk_result != 2) {
            goto LABEL_37;
          }
          GameRoutine_65a180_alt1(v17);
          return (_QWORD*)BasicMenuCursor_16ddaa0((__int64)v17, 4);
        }
        v18_.v19 = &GameData_1adfa87;
        v18_.v18 = game_HashString((__int64)&GameData_1adfa87);
        if (game_GameModeData_instance_ != 0 &&
            (v6 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&v18_.v18)) != 0) {
          v7 = *(_DWORD*)(v6 + 32);
          result = v3;
          if (v7 != 0) {
            goto LABEL_37;
          }
        }
        else {
          result = v3;
        }
        v1 = game_GameModeData_instance_;
        if (*(_BYTE*)(*GameData_2130e70 + 55) != 1 ||
            game_GameModeData_instance_ == 0) {
          goto LABEL_37;
        }
      }
      v9 = *(_QWORD*)(v1 + 24);
      if (v9 == 0) {
        goto LABEL_37;
      }
      v10 = result;
      v11 = (unsigned int*)GameRoutine_88cee0_alt1(v9);
      result = v10;
      if (v11 == nullptr) {
        goto LABEL_37;
      }
      v12 = game_gmap_SpotMgr_FindSpot(v11);
      result = v10;
      if (v12 == nullptr) {
        goto LABEL_37;
      }
      v13 = *((_QWORD*)v12 + 15);
      v14 = *((_BYTE*)v12 + 178) & 1;
      if (v13 == 0 || v14 == 0) {
        goto LABEL_37;
      }
      goto LABEL_30;
    }
    if (game_gmap_GmapClock_instance_ == 0 ||
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
            0) {
      goto LABEL_37;
    }
    goto LABEL_30;
  }
  return result;
}

__int64 GameHr_1859ec0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned __int64 v9;
  const char* v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0) {
    v3 = *(__int64**)(v2 + 96);
    for (i = *(__int64**)(v2 + 104); v3 != i; ++v3) {
      if (game_GameModeData_instance_ != 0) {
        v6 = *v3;
        result = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)(*v3 + 16));
        if (result != 0) {
          v7 = *(_DWORD*)(result + 32);
          v8 = v7 / 0x21B7900 -
               11 * ((390451573 * (unsigned __int64)(v7 / 0x21B7900)) >> 32);
          if (v8 != 0) {
            v9 = (v7 / 0x86DE40uLL) & 3;
            if ((int)v9 > 1) {
              if ((_DWORD)v9 == 3) {
                v10 = (const char*)&GameData_1aabf6c;
              }
              else {
                v10 = (const char*)&GameData_1ad653b;
              }
            }
            else {
              v10 = (const char*)&GameData_1abf89f;
              if ((_DWORD)v9 != 0) {
                v10 = (const char*)*(&GameData_1f9caf8 + v8);
              }
            }
            TimelineFile_890160(v10);
            v11 = *(_QWORD*)(a2 + 32);
            v12 = v6;
            if (v11 == 0) {
              GameRoutine_60a310_alt1();
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
                v11, &v12);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_185a020(unsigned __int8 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = GameRoutine_7a86e0(*(&GameData_1f9cb48 + a1));
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v2 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v4 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v5 = v1;
        if (v1 >= v2) {
          v5 = v1 % v2;
        }
      }
      else {
        v5 = v4 & v1;
      }
      v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (v7 != nullptr) {
          if ((v2 & v4) == 0) {
            while (1) {
              v10 = v7[1];
              if (v10 == v1) {
                if (v7[2] == v1) {
                  return v7[3];
                }
              }
              else if ((v10 & v4) != v5) {
                return 0;
              }
              v7 = (_QWORD*)*v7;
              v9 = 0;
              if (v7 == nullptr) {
                return v9;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == v1) {
              if (v7[2] == v1) {
                return v7[3];
              }
            }
            else {
              if (v8 >= v2) {
                v8 %= v2;
              }
              if (v8 != v5) {
                return 0;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
