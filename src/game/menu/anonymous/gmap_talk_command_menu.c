#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_9067c0(_QWORD, _QWORD);
__int64 GameRoutine_94c420(_QWORD);
__int64 GameRoutine_cb2640(_QWORD);
__int64 GameRoutine_d691e0(_QWORD, _QWORD);
__int64 GameSubquestData_125bbc0(_QWORD);
__int64 TransporterConst_89cc80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown69(void);
__int64 game_menu_BasicMenu_Unknown72(void);
__int64 game_sound_PlayCursorHorizontalSe(void);
__int64 game_sound_PlayCursorLeftSe(void);
__int64 game_sound_PlayCursorRightSe(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_1fe9a88;
extern __int16 GameData_221b408;
extern __int64 GameData_21c9718;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_talk_g_select_menu;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212f6c8;
extern char game_sound_g_vibration_enabled;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
void __attribute__((noreturn)) GameRoutine_cb44e0(_QWORD);
__int64 GmapTalkCommandMenu_e94b60();
__int64 GmapTalkCommandMenu_e94ee0(_QWORD* a1, __int64* a2);
__n128 GmapTalkCommandMenu_e95140(_QWORD* a1);
__int64 GmapTalkCommandMenu_e953b0(__int64 a1);
__int64 GmapTalkCommandMenu_e953e0(_DWORD* a1);
__int64 GmapTalkCommandMenu_e95460(__int64 a1);
__int64 GmapTalkCommandMenu_e95540(__int64 a1);
__int64 GmapTalkCommandMenu_e95730(__int64 a1);
__int64 GmapTalkCommandMenu_e95790(__int64 a1);
bool GmapTalkCommandMenu_e95800(__int64 a1);
__int64 GmapTalkCommandMenu_e959d0(__int64 a1);
__int64 GmapTalkCommandMenu_e95a40(__int64 a1);
__int64 GmapTalkCommandMenu_e95b70(__int64 a1);
bool GmapTalkCommandMenu_e95cc0(__int64 a1);
__int64 GmapTalkCommandMenu_e95cf0(__int64 a1);
bool GmapTalkCommandMenu_e95d60(__int64 a1);
__int64 GmapTalkCommandMenu_e95e90();
__int64 GmapTalkCommandMenu_e95ec0(__int64 a1);
__int64 GmapTalkCommandMenu_e95f40();
__n128 GmapTalkCommandMenu_Destructor_e95ff0(_QWORD* a1);
__n128 GmapTalkCommandMenu_DeletingDestructor_e96070(_QWORD* a1);
__int64 GmapTalkCommandMenu_Unknown69(__int64 a1);
__int64 GmapTalkCommandMenu_Unknown72(__int64 a1);
__int64 GmapTalkCommandMenu_Unknown144(__int64 a1);
__int64 GmapTalkCommandMenu_Unknown145(__int64 a1);
__int64 GmapTalkCommandMenu_Unknown18(__int64 a1);
__int64 GmapTalkCommandMenu_Unknown23(__int64 a1);
__n128 GmapTalkCommandMenu_Destructor_e966b0(__int64 a1);
__n128 GmapTalkCommandMenu_DeletingDestructor_e96740(__int64 a1);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64
game_menu_anonymous_GmapTalkCommandMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                  _QWORD* a2);

__int64 GmapTalkCommandMenu_e94b60()
{
  __int64 v0;
  __int64* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v0 = 0;
  v1 = GameData_212c890[0];
  while (2) {
    v2 = game_HashString(*(_UNKNOWN**)((char*)&GameData_1fe9a88 + v0));
    if (v2 == 0) {
      goto LABEL_2;
    }
    v3 = *(_QWORD*)(*v1 + 96);
    if (v3 == 0 || *(_QWORD*)(*v1 + 112) == 0) {
      goto LABEL_2;
    }
    v5 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v6 = v2;
      if (v2 >= v3) {
        v6 = v2 % v3;
      }
    }
    else {
      v6 = v5 & v2;
    }
    v7 = *(_QWORD**)(*(_QWORD*)(*v1 + 88) + 8 * v6);
    if (v7 == nullptr) {
      goto LABEL_2;
    }
    v8 = (_QWORD*)*v7;
    if (v8 == nullptr) {
      goto LABEL_2;
    }
    if ((v3 & v5) == 0) {
      while (1) {
        v10 = v8[1];
        if (v10 == v2) {
          if (v8[2] == v2) {
            goto LABEL_28;
          }
        }
        else if ((v10 & v5) != v6) {
          goto LABEL_2;
        }
        v8 = (_QWORD*)*v8;
        if (v8 == nullptr) {
          goto LABEL_2;
        }
      }
    }
    while (1) {
      v9 = v8[1];
      if (v9 == v2) {
        break;
      }
      if (v9 >= v3) {
        v9 %= v3;
      }
      if (v9 != v6) {
        goto LABEL_2;
      }
    LABEL_17:
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        goto LABEL_2;
      }
    }
    if (v8[2] != v2) {
      goto LABEL_17;
    }
  LABEL_28:
    v11 = v8[3];
    if (v11 != 0 && game_GameModeData_instance_ != 0) {
      v12 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(v11 + 24) + 1232LL);
      if (v12 != 0 && *(_DWORD*)(v12 + 32) != 0) {
        return 1;
      }
    }
  LABEL_2:
    v0 += 8;
    if (v0 != 32) {
      continue;
    }
    return 0;
  }
}

__int64 GmapTalkCommandMenu_e94ee0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 result;

  v2 = *a2;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = v2;
  a1[1] = 0;
  v6 = a2[1];
  v5 = a2[2];
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v8 = v5 - v6;
  if (v5 != v6) {
    if (v8 < 0) {
      GameRoutine_688200();
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v10 = v9 + v8;
    a1[1] = v9;
    a1[2] = v9;
    a1[3] = v9 + v8;
    memcpy(v9, v6, v8);
    a1[2] = v10;
  }
  v11 = a2[8];
  if (v11 != 0) {
    if ((__int64*)v11 == a2 + 4) {
      a1[8] = a1 + 4;
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a2[8] + 24LL))(a2[8]);
    }
    else {
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      a1[8] = v11;
    }
  }
  else {
    a1[8] = 0;
  }
  a1[11] = 0;
  a1[12] = 0;
  a1[10] = 0;
  v12 = a2[10];
  v13 = a2[11];
  v14 = v13 - v12;
  if (v13 != v12) {
    if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * (v14 >> 4)) >=
        0x1745D1745D1745ELL) {
      GameRoutine_cb44e0(v11);
    }
    v15 = fw_memory_HeapManager_Allocate(*v7, v13 - v12, 16, 0);
    a1[10] = v15;
    a1[11] = v15;
    a1[12] = v15 + v14;
    do {
      v11 = GameRoutine_d691e0(v15, v12);
      v12 += 176;
      v15 += 176;
    } while (v12 != v13);
    a1[11] = v15;
  }
  a1[14] = 0;
  a1[15] = 0;
  a1[13] = 0;
  v16 = (char*)a2[13];
  v17 = (char*)a2[14];
  v18 = v17 - v16;
  if (v17 != v16) {
    if (0xAAAAAAAAAAAAAAABLL * (v18 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(v11);
    }
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, v17 - v16, 16, 0);
    a1[13] = v19;
    a1[14] = v19;
    a1[15] = (char*)v19 + v18;
    do {
      if ((*v16 & 1) != 0) {
        fw_text_String_CopyTerminated(v19, *((_QWORD*)v16 + 2),
                                      *((_QWORD*)v16 + 1));
      }
      else {
        v20 = *(_QWORD*)v16;
        v21 = *((_QWORD*)v16 + 2);
        v19[1] = *((_QWORD*)v16 + 1);
        v19[2] = v21;
        *v19 = v20;
      }
      v16 += 24;
      v19 += 3;
    } while (v16 != v17);
    a1[14] = v19;
  }
  result = a2[20];
  if (result != 0) {
    if ((__int64*)result == a2 + 16) {
      a1[20] = a1 + 16;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a2[20] + 24LL))(a2[20]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a1[20] = result;
    }
  }
  else {
    a1[20] = 0;
  }
  a1[23] = a2[23];
  a1[22] = a2[22];
  return result;
}

__n128 GmapTalkCommandMenu_e95140(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __n128 result;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;

  v2 = a1 + 16;
  v3 = (_QWORD*)a1[20];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[13];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = a1[14];
    if (v5 == v7) {
      goto LABEL_17;
    }
    v8 = a1[14];
    do {
      v9 = *(_BYTE*)(v8 - 24);
      v8 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v7 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v11, v10);
        }
      }
      v7 = v8;
    } while (v8 != v5);
    v12 = a1[13];
    a1[14] = v5;
    v5 = v12;
    if (v12 != 0) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v13, v5);
    }
  }
  v20 = a1 + 10;
  GameRoutine_cb2640(&v20);
  v15 = (_QWORD*)a1[8];
  if (v15 == a1 + 4) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_25;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
LABEL_25:
  v17 = a1[1];
  if (v17 != 0) {
    v18 = *(_QWORD*)v6;
    a1[2] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  return result;
}

__int64 GmapTalkCommandMenu_e953b0(__int64 a1)
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

__int64 GmapTalkCommandMenu_e953e0(_DWORD* a1)
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

__int64 GmapTalkCommandMenu_e95460(__int64 a1)
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

  if (*(_BYTE*)(a1 + 144) != 1) {
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

__int64 GmapTalkCommandMenu_e95540(__int64 a1)
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

  if (*(_BYTE*)(a1 + 144) != 1) {
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

__int64 GmapTalkCommandMenu_e95730(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 152);
  TransporterConst_89cc80(19);
  if (v1 != 0 && *(_QWORD*)(v1 + 272) != 0) {
    v2 = *(_QWORD*)(v1 + 24);
    if (*(_QWORD*)(v2 + 1472) != 0 && game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  v2 + 1472);
    }
  }
  return 1;
}

__int64 GmapTalkCommandMenu_e95790(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 8;
  }
  return 2;
}

bool GmapTalkCommandMenu_e95800(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  unsigned int v5;
  int v7;
  __int64 v8;
  __int16* v9;
  unsigned int v10;

  v1 = *(_QWORD*)(a1 + 152);
  v2 = TransporterConst_89cc80(19);
  if (v1 == 0 || *(_QWORD*)(v1 + 272) == 0) {
    return false;
  }
  v3 = *(_QWORD*)(v1 + 24);
  if (*(_QWORD*)(v3 + 1472) == 0 || game_GameModeData_instance_ == 0) {
    v5 = 0;
  }
  else {
    v7 = v2;
    v8 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3 + 1472);
    if (v8 != 0) {
      v5 = *(_DWORD*)(v8 + 32);
    }
    else {
      v5 = 0;
    }
    v2 = v7;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v10 = 10000 * *v9 + 100 * v9[1] + v9[2];
  return v2 > 0 && v5 <= v10;
}

__int64 GmapTalkCommandMenu_e959d0(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 7;
  }
  return 2;
}

__int64 GmapTalkCommandMenu_e95a40(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 152);
  v3[0] = 0;
  v3[1] = v1;
  return GameRoutine_9067c0(game_GameModeData_instance_ + 136, v3) & 1;
}

__int64 GmapTalkCommandMenu_e95b70(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v1);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 6;
  }
  return 2;
}

bool GmapTalkCommandMenu_e95cc0(__int64 a1)
{
  return (unsigned int)GameRoutine_94c420(*(_QWORD*)(a1 + 152)) < 0x400000;
}

__int64 GmapTalkCommandMenu_e95cf0(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 9;
  }
  return 2;
}

bool GmapTalkCommandMenu_e95d60(__int64 a1)
{
  return (unsigned int)GameRoutine_94c420(*(_QWORD*)(a1 + 152)) == 0;
}

__int64 GmapTalkCommandMenu_e95e90()
{
  GameSubquestData_125bbc0(GameData_21c9718);
  return 1;
}

__int64 GmapTalkCommandMenu_e95ec0(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 10;
  }
  return 2;
}

__int64 GmapTalkCommandMenu_e95f40()
{
  __int64 v0;
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;
  int v7;

  v0 = GameData_21c9718;
  GameSubquestData_125bbc0(GameData_21c9718);
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = v0 + 136LL * v1;
  v3 = *(_QWORD*)(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  if (v3 == v4) {
    return 0;
  }
  while (1) {
    if (*(_BYTE*)(**(_QWORD**)v3 + 112LL) == 6) {
      v5 = *(unsigned __int8*)(*(_QWORD*)v3 + 9LL);
      v6 = v5 > 5;
      v7 = (1 << v5) & 0x31;
      if (v6 || v7 == 0) {
        break;
      }
    }
    v3 += 8;
    if (v3 == v4) {
      return 0;
    }
  }
  return 1;
}

__n128 GmapTalkCommandMenu_Destructor_e95ff0(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = GameData_212f6c8;
  *a1 = GameData_212f6c8 + 2;
  a1[22] = v2 + 147;
  a1[132] = v2 + 173;
  v3 = a1 + 136;
  v4 = (_QWORD*)a1[140];
  if (v4 == v3) {
    v5 = 32;
    goto LABEL_5;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  return GmapTalkCommandMenu_e95140(a1 + 142);
}

__n128 GmapTalkCommandMenu_DeletingDestructor_e96070(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_212f6c8;
  *a1 = GameData_212f6c8 + 2;
  a1[22] = v2 + 147;
  a1[132] = v2 + 173;
  v3 = a1 + 136;
  v4 = (_QWORD*)a1[140];
  if (v4 == v3) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_6:
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  GmapTalkCommandMenu_e95140(a1 + 142);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

__int64 GmapTalkCommandMenu_Unknown69(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE v5[200];
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 1312) != 1) {
    return game_menu_BasicMenu_Unknown69();
  }
  v6 = v1;
  v7 = v2;
  snd_Fade_Fade_10c830(v5, 0.0f);
  *(struct PseudoSret*)(&v4) = snd_play_ff2d0(
      "SE_SYS_Decide_M_EX", "SE_SYS_Decide_M_EX", v5, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v5);
}

__int64 GmapTalkCommandMenu_Unknown72(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE v5[200];
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(a1 + 1312) != 1) {
    return game_menu_BasicMenu_Unknown72();
  }
  v6 = v1;
  v7 = v2;
  snd_Fade_Fade_10c830(v5, 0.0f);
  *(struct PseudoSret*)(&v4) = snd_play_ff2d0(
      "SE_SYS_Cancel_H_EX", "SE_SYS_Cancel_H_EX", v5, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v5);
}

__int64 GmapTalkCommandMenu_Unknown144(__int64 a1)
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

  if (*(_BYTE*)(a1 + 1312) != 1) {
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

__int64 GmapTalkCommandMenu_Unknown145(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 1312) == 1) {
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

__int64 GmapTalkCommandMenu_Unknown18(__int64 a1)
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

  if (*(_BYTE*)(a1 + 1136) != 1) {
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

__int64 GmapTalkCommandMenu_Unknown23(__int64 a1)
{
  const char* v1;
  __int64 v3;
  _BYTE v4[200];

  if (*(_BYTE*)(a1 + 1136) == 1) {
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

__n128 GmapTalkCommandMenu_Destructor_e966b0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  v1 = a1 - 1328;
  v3 = GameData_212f6c8 + 147;
  v4 = GameData_212f6c8 + 173;
  *(_QWORD*)(a1 - 1328) = GameData_212f6c8 + 2;
  *(_QWORD*)(a1 - 1152) = v3;
  *(_QWORD*)(a1 - 272) = v4;
  v5 = (_QWORD*)(a1 - 240);
  v6 = *(_QWORD**)(a1 - 208);
  if (v6 == v5) {
    v7 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v7 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(v1);
  return GmapTalkCommandMenu_e95140((_QWORD*)(a1 - 192));
}

__n128 GmapTalkCommandMenu_DeletingDestructor_e96740(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v1 = a1 - 1328;
  v3 = GameData_212f6c8 + 147;
  v4 = GameData_212f6c8 + 173;
  *(_QWORD*)(a1 - 1328) = GameData_212f6c8 + 2;
  *(_QWORD*)(a1 - 1152) = v3;
  *(_QWORD*)(a1 - 272) = v4;
  v5 = (_QWORD*)(a1 - 240);
  v6 = *(_QWORD**)(a1 - 208);
  if (v6 == v5) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_6:
  game_menu_BasicMenu_Destroy_BasicMenu(v1);
  GmapTalkCommandMenu_e95140((_QWORD*)(a1 - 192));
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
}

__int64

game_menu_anonymous_GmapTalkCommandMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2) & 1) != 0) {
    v4 = *(__int64**)(a1 + 8);
    v5 = *v4;
    v6 = *(_QWORD*)(*v4 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_16:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_16;
  }
  return 0;
}

#pragma GCC visibility pop
