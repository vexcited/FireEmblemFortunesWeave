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
__int64 TalkCommandMenu_e97b90(__int64 a1);
__int64 TalkCommandMenu_e97c00(__int64 a1);
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

__int64 TalkCommandMenu_e97b90(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE v5[200];
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_menu_BasicMenu_Unknown69();
  }
  v6 = v1;
  v7 = v2;
  snd_Fade_Fade_10c830(v5, 0.0f);
  *(struct PseudoSret*)(&v4) = snd_play_ff2d0(
      "SE_SYS_Decide_M_EX", "SE_SYS_Decide_M_EX", v5, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v5);
}

__int64 TalkCommandMenu_e97c00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE v5[200];
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_menu_BasicMenu_Unknown72();
  }
  v6 = v1;
  v7 = v2;
  snd_Fade_Fade_10c830(v5, 0.0f);
  *(struct PseudoSret*)(&v4) = snd_play_ff2d0(
      "SE_SYS_Cancel_H_EX", "SE_SYS_Cancel_H_EX", v5, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v5);
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
  __int64 v4;
  int v5;
  _QWORD v6[2];
  _BYTE v7[200];
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 1248) != 1) {
    return game_sound_PlayCursorHorizontalSe();
  }
  v8 = v1;
  v9 = v2;
  snd_Fade_Fade_10c830(v7, 0.0f);
  *(struct PseudoSret*)(v6) = snd_play_ff2d0(
      "SE_SYS_Cursor_H_EX", "SE_SYS_Cursor_H_EX", v7, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v7);
  v4 = 0;
  v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v7, 0.0f);
    *(struct PseudoSret*)(v6) = snd_play_ff2d0(
        "VIB_Cursor_Medium", "VIB_Cursor_Medium", v7, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v7);
    return GameRoutine_112180(&v4, v6);
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
  __int64 v4;
  int v5;
  _QWORD v6[2];
  _BYTE v7[200];
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 1072) != 1) {
    return game_sound_PlayCursorHorizontalSe();
  }
  v8 = v1;
  v9 = v2;
  snd_Fade_Fade_10c830(v7, 0.0f);
  *(struct PseudoSret*)(v6) = snd_play_ff2d0(
      "SE_SYS_Cursor_H_EX", "SE_SYS_Cursor_H_EX", v7, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v7);
  v4 = 0;
  v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v7, 0.0f);
    *(struct PseudoSret*)(v6) = snd_play_ff2d0(
        "VIB_Cursor_Medium", "VIB_Cursor_Medium", v7, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v7);
    return GameRoutine_112180(&v4, v6);
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
