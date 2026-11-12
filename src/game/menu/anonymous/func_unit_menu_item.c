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
unsigned __int64 FuncUnitMenuItem_Unknown70_alt1(
    __int64 a1, __int64 a2) __asm__("FuncUnitMenuItem_Unknown70");
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
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64
game_sound_PlayCursorLeftSe_alt1() __asm__("game_sound_PlayCursorLeftSe");
__int64
game_sound_PlayCursorRightSe_alt1() __asm__("game_sound_PlayCursorRightSe");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 Registration_a4da40(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FuncUnitMenuItem_Unknown70(__int64 a1, __int64 a2);

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
  struct {
    __int64 v4;
    int v5;
  } v4_;
  _BYTE v6[16];
  _QWORD v7[27];

  if (*(_BYTE*)(a1 + 83) != 1) {
    return game_sound_PlayCursorLeftSe_alt1();
  }
  v7[25] = v1;
  v7[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Cursor_Left_EX",
                      (__int64)"SE_SYS_Cursor_Left_EX", (__int64)v7, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade_alt1(v7);
  v4_.v4 = 0;
  v4_.v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"VIB_Page_Back", (__int64)"VIB_Page_Back",
                        (__int64)v7, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v7);
    return GameRoutine_112180_alt1((__int64)&v4_.v4, (__int64)v6);
  }
  return result;
}

__int64 FuncUnitMenuItem_e96c50(__int64 a1)
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

  if (*(_BYTE*)(a1 + 83) != 1) {
    return game_sound_PlayCursorRightSe_alt1();
  }
  v7[25] = v1;
  v7[26] = v2;
  snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Cursor_Right_EX",
                      (__int64)"SE_SYS_Cursor_Right_EX", (__int64)v7, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  result = snd_Fade_Destroy_Fade_alt1(v7);
  v4_.v4 = 0;
  v4_.v5 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"VIB_Page_Send", (__int64)"VIB_Page_Send",
                        (__int64)v7, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v7);
    return GameRoutine_112180_alt1((__int64)&v4_.v4, (__int64)v6);
  }
  return result;
}

void FuncUnitMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  const char* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  _BYTE* v9;
  const char* v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    _BYTE* v13;
  } v12_;

  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v4 = game_util_Format_alt1("%s_Help", v3);
  v5 = strlen_alt1(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v12_.v12[1] = v6;
    v12_.v13 = v7;
    v12_.v12[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v12_.v12[0]) = 2 * v5;
  v7 = (char*)v12_.v12 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v7, (__int64)v4, v6);
  }
  v7[v6] = 0;
  if ((v12_.v12[0] & 1) != 0) {
    v9 = v12_.v13;
  }
  else {
    v9 = (char*)v12_.v12 + 1;
  }
  if (v9 != nullptr && *v9 != 0 &&
      (Registration_a4da40(msg_MessageManager_instance_, (__int64)v9) & 1) !=
          0) {
    if ((v12_.v12[0] & 1) != 0) {
      v10 = v12_.v13;
    }
    else {
      v10 = (char*)v12_.v12 + 1;
    }
    GameRoutine_60a020_alt1(a2 + 8, v10);
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
  }
}

#pragma GCC visibility pop
