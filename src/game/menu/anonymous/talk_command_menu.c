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

#pragma GCC visibility pop
