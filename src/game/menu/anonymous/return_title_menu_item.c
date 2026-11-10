#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_80cdc0(_QWORD);
__int64 game_MainSeq_Shutdown(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void ReturnTitleMenuItem_Unknown70(PSEUDO_X8 x8_,
                                                              __int64 a1);
__int64
game_menu_anonymous_ReturnTitleMenuItem_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2);

__attribute__((swiftcall)) void ReturnTitleMenuItem_Unknown70(PSEUDO_X8 x8_,
                                                              __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;

  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v4 = game_util_Format("%s_Help", v3);
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v9;
    *a2 = v8 | 1;
    v7 = (char*)v9;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v7 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v7, v4, v6);
LABEL_10:
  v7[v6] = 0;
  {
    result;
    return;
  }
}

__int64

game_menu_anonymous_ReturnTitleMenuItem_ACall_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _BYTE v8[200];

  v2 = *a2;
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v8, 0, 65537, 0, 0.0f, 1.0f);
  v3 = snd_Fade_Destroy_Fade(v8);
  game_80cdc0(v3);
  v4 = *(_QWORD*)(v2 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(v2 + 8);
  }
  game_MainSeq_Shutdown(v5, 1);
  return 13;
}

#pragma GCC visibility pop
