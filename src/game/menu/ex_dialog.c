#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 ExDialog_1669470(__int64 result, int a2, char a3);
__int64 ExDialog_Unknown100(__int64 a1);
__int64 ExDialog_Unknown135(__int64 a1, __int64 a2, char a3);
__int64 ExDialog_1669920(__int64 a1, __int64 a2, char a3);

__int64 ExDialog_1669470(__int64 result, int a2, char a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];
  char* v27;
  _QWORD v28[2];
  char* v29;
  _BYTE v30[32];

  v3 = *(unsigned __int8*)(result + 1184);
  v4 = *(_QWORD*)(result + 1192);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v4 != 0) {
    v5 = result + 1185;
    v7 = result;
    if ((v3 & 1) != 0) {
      v9 = *(_QWORD*)(result + 1200);
    }
    else {
      v9 = result + 1185;
    }
    v10 = game_util_Format("%s_t", v9);
    v11 = strlen(v10);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_50;
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v11 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                  16, 0);
      v28[1] = v12;
      v29 = v13;
      v28[0] = v14 | 1;
    }
    else {
      LOBYTE(v28[0]) = 2 * v11;
      v13 = (char*)v28 + 1;
      if (v11 == 0) {
      LABEL_16:
        v13[v12] = 0;
        if ((v28[0] & 1) != 0) {
          v15 = v29;
        }
        else {
          v15 = (char*)v28 + 1;
        }
        GameRoutine_1562060(v7 + 848, "T_Title", v15);
        if ((*(_BYTE*)(v7 + 1184) & 1) != 0) {
          v16 = *(_QWORD*)(v7 + 1200);
        }
        else {
          v16 = v5;
        }
        v17 = game_util_Format("%s_m01_%03d", v16, (unsigned int)(a2 + 1));
        v18 = strlen(v17);
        if (v18 < 0xFFFFFFFFFFFFFFF7LL) {
          v19 = v18;
          if (v18 >= 0x17) {
            if ((v18 | 7) == 0x17) {
              v21 = 26;
            }
            else {
              v21 = (v18 | 7) + 1;
            }
            v20 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v21, 16, 0);
            v26[1] = v19;
            v27 = v20;
            v26[0] = v21 | 1;
          }
          else {
            LOBYTE(v26[0]) = 2 * v18;
            v20 = (char*)v26 + 1;
            if (v18 == 0) {
              goto LABEL_31;
            }
          }
          memmove(v20, v17, v19);
        LABEL_31:
          v20[v19] = 0;
          if ((v26[0] & 1) != 0) {
            v22 = v27;
          }
          else {
            v22 = (char*)v26 + 1;
          }
          result = GameRoutine_1562060(v7 + 848, "T_Text", v22);
          if ((a3 & 1) != 0) {
            v23 = game_gameui_MenuAnimator_instance_;
            if (game_gameui_MenuAnimator_instance_ != 0) {
              sprintf(v30, "%s%s", "Alpha", "In");
              result = GameRoutine_156af20(v23, 4, 0, v7 + 848, "T_Text", v30);
            }
            else {
              result = -1;
            }
            *(_QWORD*)(v7 + 1208) = result;
          }
          if ((v26[0] & 1) != 0 && v27 != nullptr) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v27);
          }
          if ((v28[0] & 1) != 0 && v29 != nullptr) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            return nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v29);
          }
          return result;
        }
      LABEL_50:
        GameRoutine_60a1d0();
      }
    }
    memmove(v13, v10, v12);
    goto LABEL_16;
  }
  return result;
}

__int64 ExDialog_Unknown100(__int64 a1)
{
  __int64 v1;
  bool v3;
  bool v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  int v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 1208);
  if (v1 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
    v3 = v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v4 = v3 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v5 = v4 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v6 = v5 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v7 = v6 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v8 = v7 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v9 = v8 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v10 = v9 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (v10 || v1 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
      return 0;
    }
  }
  if (*(int*)(a1 + 1056) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1056, 1, 0) & 1) == 0) {
    return 3;
  }
  v12 = *(_DWORD*)(a1 + 1060);
  v13 = *(_QWORD*)(a1 + 1072);
  if (v12 < (unsigned __int64)((*(_QWORD*)(a1 + 1080) - v13) >> 2)) {
    v12 = *(_DWORD*)(v13 + 4LL * v12);
  }
  ExDialog_1669470(a1, v12, 1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1096LL))(a1);
  return 13;
}

__int64 ExDialog_Unknown135(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  bool v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  bool v11;
  int v14;
  __int64 v15;

  v3 = *(_QWORD*)(a1 + 1208);
  if (v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
    v4 = v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v5 = v4 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v6 = v5 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v7 = v6 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v8 = v7 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v9 = v8 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v10 = v9 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v11 = v10 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (v11 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
      return 0;
    }
  }
  if (*(int*)(a1 + 1056) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1056, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v14 = *(_DWORD*)(a1 + 1060);
  v15 = *(_QWORD*)(a1 + 1072);
  if (v14 < (unsigned __int64)((*(_QWORD*)(a1 + 1080) - v15) >> 2)) {
    v14 = *(_DWORD*)(v15 + 4LL * v14);
  }
  ExDialog_1669470(a1, v14, 1);
  return 13;
}

__int64 ExDialog_1669920(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  bool v11;
  bool v12;
  int v14;
  __int64 v15;

  v3 = *(_QWORD*)(a1 + 1032);
  if (v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
    v5 = v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v6 = v5 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v7 = v6 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v8 = v7 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v9 = v8 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v10 = v9 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v11 = v10 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v12 = v11 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (v12 || v3 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
      return 0;
    }
  }
  if (*(int*)(a1 + 880) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 880, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v14 = *(_DWORD*)(a1 + 884);
  v15 = *(_QWORD*)(a1 + 896);
  if (v14 < (unsigned __int64)((*(_QWORD*)(a1 + 904) - v15) >> 2)) {
    v14 = *(_DWORD*)(v15 + 4LL * v14);
  }
  ExDialog_1669470(a1 - 176, v14, 1);
  return 13;
}

#pragma GCC visibility pop
