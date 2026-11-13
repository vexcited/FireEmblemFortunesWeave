#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, const char**);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_a84710(__int64);
__int64 GameRoutine_7bb0a0();
__int64 GameRoutine_8b5110();
__int64 game_1919ef0();
__int64 snd_a2a770(__int64, char);
char* game_util_Format(const char*, ...);
extern _DWORD* GameData_212c630;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c638;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 GameData_21eea58;
extern __int64 GameData_2240f00;
extern __int64 GameData_225d648;
extern __int64 game_GameModeData_instance_;
extern int GameData_21ec590;
extern int game_menu_bmap_config_index;
unsigned __int64 strlen(const char*);
__int64 game_templates_66aae0();
__attribute__((swiftcall)) void
game_templates_14a4c70(PSEUDO_X8 x8_, __int64 unused_int0, int a1, __int64 a2,
                       __int64* a3, __int64* a4, __int64 a5, float a7_bits_);
__int64 game_templates_156e270();

__int64 game_templates_66aae0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  _DWORD* v3;
  bool i;
  __int64 result;

  v0 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
    *(_WORD*)(GameData_21eea58 + 32) = 0;
    *(_WORD*)(v0 + 96) = 0;
    v1 = GameData_21eea48;
    *(_QWORD*)(v0 + 100) = 0x10000000000LL;
    *(_BYTE*)(v0 + 108) = 0;
    *(_QWORD*)(v0 + 110) = 0;
    *(_QWORD*)(v0 + 118) = 0;
    *(_QWORD*)(v0 + 126) = 0;
    *(_DWORD*)(v0 + 133) = 0;
    *(_QWORD*)(v0 + 138) = 0;
    *(_DWORD*)(v0 + 146) = 0;
    *(_DWORD*)(v0 + 168) = 0;
    *(_BYTE*)(v0 + 172) = 0;
    *(_DWORD*)(v0 + 174) = 0;
    *(_DWORD*)(v0 + 180) = 0;
    *(_WORD*)(v0 + 184) = 0;
    *(_QWORD*)(v0 + 192) = 0;
    *(_BYTE*)(v0 + 200) = 0;
    *(_DWORD*)(v0 + 228) = 0;
    *(_DWORD*)(v0 + 356) = 0;
    *(_DWORD*)(v0 + 484) = 0;
    *(_QWORD*)(v0 + 159) = 0;
    for (*(_QWORD*)(v0 + 152) = 0; (__int64*)v1 != &GameData_21eea40;
         v1 = *(_QWORD*)(v1 + 8)) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v1 + 16) + 40LL))(*(_QWORD*)(v1 + 16));
    }
  }
  GameRoutine_8b5110();
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    snd_a2a770(*game_sound_g_game_sound_ptr[0], 0);
  }
  GameData_21ec590 = 0;
  GameRoutine_7bb0a0();
  game_1919ef0();
  v2 = (__int64*)GameData_212c638;
  v3 = (_DWORD*)GameData_212c630;
  for (i = *(_QWORD*)GameData_212c638 == 0 ||
           (signed __int32)*GameData_212c630 < 1;
       !i; --*(_DWORD*)v3) {
    GameHr_a84710(*v2);
    i = (signed __int32)*v3 <= 1;
  }
  result = GameData_2240f00;
  GameData_225d648 = 0;
  if (GameData_2240f00 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_2240f00 + 24LL))(
        GameData_2240f00);
    result = GameData_2240f00;
    if (GameData_2240f00 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2240f00 + 8LL))(
          GameData_2240f00);
    }
    GameData_2240f00 = 0;
  }
  game_menu_bmap_config_index = -1;
  return result;
}

__attribute__((swiftcall)) void

game_templates_14a4c70(PSEUDO_X8 x8_, __int64 unused_int0, int a1, __int64 a2,
                       __int64* a3, __int64* a4, __int64 a5, float a7_bits_)
{

#pragma clang fp contract(off)
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned int a7 = COERCE_AS(unsigned int, a7_bits_);
  _QWORD* v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned int v16;
  struct {
    _QWORD v18[3];
    int v19;
    char gap28_[4];
    __int64 v20;
    __int64 v21;
    __int128 v22;
    __int64 v23;
    __int64 v24;
  } v18_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18_.v19 = a1;
  v18_.v18[2] = a2;
  v18_.v18[0] = 0;
  v18_.v18[1] = 0;
  v9 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v10 = a7;
  *(_QWORD*)&v11 = a7 | ((unsigned __int64)a7 << 32);
  v12 = a3[1];
  *((_QWORD*)&v11 + 1) = v10;
  v18_.v20 = *a3;
  v18_.v21 = v12;
  v13 = *a4;
  v14 = a4[1];
  v18_.v22 = v11;
  v18_.v23 = v13;
  v18_.v24 = v14;
  v15 = Manager_bc6460(v9, (__int64)v18_.v18, 1),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  {
    GameHr_14a10d0(a6, (__int64)v15, v16, a5),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__int64 game_templates_156e270()
{
  char* v0;
  unsigned int v1;
  int v2;
  struct {
    __int64 v4[7];
    char gap56_[3];
    char v5;
  } v4_;
  char* v6[2];

  v0 = game_util_Format("%s_%s_%d", "Part", "Ism", 3);
  v6[0] = game_util_Format("%s/%s", "000", v0);
  v6[1] = (const char*)strlen(v6[0]);
  GameRoutine_878ea0((void*)((__int64)v4_.v4), v6);
  v1 = LOBYTE(v4_.v4[0]);
  if (LOBYTE(v4_.v4[0]) != 0) {
    if ((v4_.v5 & 0x40) != 0) {
      v1 = 0;
    }
    else {
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v2 = *(_DWORD*)(game_GameModeData_instance_ + 8);
      }
      v1 = HIDWORD(v4_.v4[0]) == v2;
    }
  }
  if (BYTE3(v4_.v4[1]) == 3) {
    return v1;
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
