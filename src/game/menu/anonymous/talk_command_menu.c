#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_e95140(_QWORD*);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* TalkCommandMenu_Destructor(__int64 a1);
__int64 TalkCommandMenu_DeletingDestructor(__int64 a1);
__int64 TalkCommandMenu_Unknown96(_QWORD* a1);
__int64 game_menu_BasicMenu_Unknown69(void);
__int64 game_menu_BasicMenu_Unknown72(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64
TalkCommandMenu_e97b90_alt1(__int64 a1) __asm__("TalkCommandMenu_e97b90");
__int64
TalkCommandMenu_e97c00_alt1(__int64 a1) __asm__("TalkCommandMenu_e97c00");
_QWORD* GmapTalkCommandMenu_e95140(_QWORD*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 game_sound_PlayCursorHorizontalSe(void);
extern char game_sound_g_vibration_enabled;
__int64 TalkCommandMenu_Unknown143(__int64 a1);
__int64 TalkCommandMenu_Unknown144(__int64 a1);
__int64 TalkCommandMenu_Unknown18(__int64 a1);
__int64 TalkCommandMenu_Unknown23(__int64 a1);
_QWORD* TalkCommandMenu_Destructor_e97ff0(__int64 a1);
__int64 TalkCommandMenu_DeletingDestructor_e98020(__int64 a1);
_QWORD* game_menu_BasicMenu_Unknown69_alt1(_QWORD*) __asm__(
    "game_menu_BasicMenu_Unknown69");
_QWORD* game_menu_BasicMenu_Unknown72_alt1(_QWORD*) __asm__(
    "game_menu_BasicMenu_Unknown72");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 game_sound_PlayCursorHorizontalSe_alt1() __asm__(
    "game_sound_PlayCursorHorizontalSe");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
_QWORD* TalkCommandMenu_e97b90(__int64 a1);
_QWORD* TalkCommandMenu_e97c00(__int64 a1);

_QWORD* TalkCommandMenu_Destructor(__int64 a1)
{
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  return GameRoutine_e95140((_QWORD*)(a1 + 1072));
}

__int64 TalkCommandMenu_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  GameRoutine_e95140((_QWORD*)(a1 + 1072));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

_QWORD* TalkCommandMenu_e97b90(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[27];

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_menu_BasicMenu_Unknown69_alt1((_QWORD*)a1);
  }
  v4[25] = v1;
  v4[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v4, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Decide_M_EX",
                      (__int64)"SE_SYS_Decide_M_EX", (__int64)v4, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return (_QWORD*)snd_Fade_Destroy_Fade_alt1(v4);
}

_QWORD* TalkCommandMenu_e97c00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[27];

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_menu_BasicMenu_Unknown72_alt1((_QWORD*)a1);
  }
  v4[25] = v1;
  v4[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v4, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Cancel_H_EX",
                      (__int64)"SE_SYS_Cancel_H_EX", (__int64)v4, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return (_QWORD*)snd_Fade_Destroy_Fade_alt1(v4);
}

__int64 TalkCommandMenu_Unknown96(_QWORD* a1)
{
  (*(void (**)(_QWORD*))(*a1 + 680LL))(a1);
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

__int64 TalkCommandMenu_Unknown143(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  struct {
    __int64 v4;
    int v5;
  } v4_;
  _BYTE v6[16];
  _QWORD v7[27];

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_sound_PlayCursorHorizontalSe_alt1();
  }
  v7[25] = v1;
  v7[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Cursor_H_EX",
                      (__int64)"SE_SYS_Cursor_H_EX", (__int64)v7, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade_alt1(v7);
  v4_.v4 = 0;
  v4_.v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"VIB_Cursor_Medium",
                        (__int64)"VIB_Cursor_Medium", (__int64)v7, 0, 0x10001u,
                        0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v7);
    return GameRoutine_112180_alt1((__int64)&v4_.v4, (__int64)v6);
  }
  return result;
}

__int64 TalkCommandMenu_Unknown144(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 1248) == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Cursor_Stop_EX";
  }
  else {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Cursor_Stop";
  }
  *(struct PseudoSret*)(&v3) =
      snd_play_ff2d0(v1, v1, v4, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v4);
}

__int64 TalkCommandMenu_Unknown18(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  struct {
    __int64 v4;
    int v5;
  } v4_;
  _BYTE v6[16];
  _QWORD v7[27];

  if (*(_BYTE*)(a1 + 1072) != 1) {
    return game_sound_PlayCursorHorizontalSe_alt1();
  }
  v7[25] = v1;
  v7[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Cursor_H_EX",
                      (__int64)"SE_SYS_Cursor_H_EX", (__int64)v7, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade_alt1(v7);
  v4_.v4 = 0;
  v4_.v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"VIB_Cursor_Medium",
                        (__int64)"VIB_Cursor_Medium", (__int64)v7, 0, 0x10001u,
                        0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v7);
    return GameRoutine_112180_alt1((__int64)&v4_.v4, (__int64)v6);
  }
  return result;
}

__int64 TalkCommandMenu_Unknown23(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 1072) == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Cursor_Stop_EX";
  }
  else {
    snd_Fade_Fade_10c830(v4, 0.0f);
    v1 = "SE_SYS_Cursor_Stop";
  }
  *(struct PseudoSret*)(&v3) =
      snd_play_ff2d0(v1, v1, v4, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v4);
}

_QWORD* TalkCommandMenu_Destructor_e97ff0(__int64 a1)
{
  game_menu_BasicMenu_Destroy_BasicMenu(a1 - 1264);
  return GmapTalkCommandMenu_e95140((_QWORD*)(a1 - 192));
}

__int64 TalkCommandMenu_DeletingDestructor_e98020(__int64 a1)
{
  __int64 v2;

  game_menu_BasicMenu_Destroy_BasicMenu(a1 - 1264);
  GmapTalkCommandMenu_e95140((_QWORD*)(a1 - 192));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
