#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4da40(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int16 GameData_221b408;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_talk_g_select_menu;
extern __int64 msg_MessageManager_instance_;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 FuncUnitMenuItem_Unknown3(__int64 a1);
__int64 FuncUnitMenuItem_Unknown25(_DWORD* a1);
unsigned __int64 FuncUnitMenuItem_Unknown70(__int64 a1, __int64 a2);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 game_sound_PlayCursorLeftSe(void);
__int64 game_sound_PlayCursorRightSe(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern char game_sound_g_vibration_enabled;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 FuncUnitMenuItem_e96b70(__int64 a1);
__int64 FuncUnitMenuItem_e96c50(__int64 a1);

__int64 FuncUnitMenuItem_Unknown3(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 288) +
       176LL * *(int*)(a1 + 40);
  if ((*(_BYTE*)v1 & 1) != 0) {
    return *(_QWORD*)(v1 + 16);
  }
  else {
    return v1 + 1;
  }
}

__int64 FuncUnitMenuItem_Unknown25(_DWORD* a1)
{
  __int64 v2;
  __int64 v4;

  if (((*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  v4 = game_script_hub_talk_g_select_menu;
  *(_DWORD*)(game_script_hub_talk_g_select_menu + 404) = a1[10];
  *(_DWORD*)(v4 + 152) = 11;
  return 2;
}

__int64 FuncUnitMenuItem_e96b70(__int64 a1)
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

  if (*(_BYTE*)(a1 + 83) != 1) {
    return game_sound_PlayCursorLeftSe();
  }
  v8 = v1;
  v9 = v2;
  snd_Fade_Fade_10c830(v7, 0.0f);
  *(struct PseudoSret*)(v6) =
      snd_play_ff2d0("SE_SYS_Cursor_Left_EX", "SE_SYS_Cursor_Left_EX", v7, 0,
                     65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v7);
  v4 = 0;
  v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v7, 0.0f);
    *(struct PseudoSret*)(v6) = snd_play_ff2d0("VIB_Page_Back", "VIB_Page_Back",
                                               v7, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v7);
    return GameRoutine_112180(&v4, v6);
  }
  return result;
}

__int64 FuncUnitMenuItem_e96c50(__int64 a1)
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

  if (*(_BYTE*)(a1 + 83) != 1) {
    return game_sound_PlayCursorRightSe();
  }
  v8 = v1;
  v9 = v2;
  snd_Fade_Fade_10c830(v7, 0.0f);
  *(struct PseudoSret*)(v6) =
      snd_play_ff2d0("SE_SYS_Cursor_Right_EX", "SE_SYS_Cursor_Right_EX", v7, 0,
                     65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v7);
  v4 = 0;
  v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v7, 0.0f);
    *(struct PseudoSret*)(v6) = snd_play_ff2d0("VIB_Page_Send", "VIB_Page_Send",
                                               v7, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v7);
    return GameRoutine_112180(&v4, v6);
  }
  return result;
}

unsigned __int64 FuncUnitMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  const char* v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  _BYTE* v9;
  char* v10;
  __int64 v11;
  _QWORD v12[2];
  _BYTE* v13;

  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v4 = game_util_Format("%s_Help", v3);
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v12[1] = v6;
    v13 = v7;
    v12[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v12[0]) = 2 * result;
  v7 = (char*)v12 + 1;
  if (result != 0) {
  LABEL_9:
    result = memmove(v7, v4, v6);
  }
  v7[v6] = 0;
  if ((v12[0] & 1) != 0) {
    v9 = v13;
  }
  else {
    v9 = (char*)v12 + 1;
  }
  if (v9 != nullptr && *v9 != 0) {
    result = GameRoutine_a4da40(msg_MessageManager_instance_);
    if ((result & 1) != 0) {
      if ((v12[0] & 1) != 0) {
        v10 = v13;
      }
      else {
        v10 = (char*)v12 + 1;
      }
      result = GameRoutine_60a020(a2 + 8, v10);
    }
  }
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

#pragma GCC visibility pop
