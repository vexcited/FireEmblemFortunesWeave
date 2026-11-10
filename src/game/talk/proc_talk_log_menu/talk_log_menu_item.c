#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuItem_16e5720(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenuItem_Update(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20d9a00;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d630[11];
extern __int64* GameData_212e030[4];
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TalkLogMenuItem_Destructor(__int64 a1);
__int64 TalkLogMenuItem_PlayCursorAnimation(__int64 a1);
__int64 TalkLogMenuItem_PlayIdleAnimation(__int64 a1);
__int64 TalkLogMenuItem_OnSelect(__int64 a1);
__int64 TalkLogMenuItem_OnDeselect(__int64 a1);
__int64 TalkLogMenuItem_Update(__int64 result);
__int64 TalkLogMenuItem_Unknown9(__int64 result, __int64 a2);

__int64 TalkLogMenuItem_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_212d630[0] + 2;
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  return result;
}

__int64 TalkLogMenuItem_PlayCursorAnimation(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  const char* v7;
  __int64* v9;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v9;
  if (v9 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  if (*(_BYTE*)(a1 + 98) != 0) {
    v7 = "Choice_Select";
  }
  else {
    v7 = "Select";
  }
  return GameRoutine_1562680(v6, v7, 1.0);
}

__int64 TalkLogMenuItem_PlayIdleAnimation(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  const char* v7;
  __int64* v9;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v9;
  if (v9 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  if (*(_BYTE*)(a1 + 98) != 0) {
    v7 = "Choice_Default";
  }
  else {
    v7 = "Default";
  }
  return GameRoutine_1562680(v6, v7, 1.0);
}

__int64 TalkLogMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  const char* v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 v16;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e030[0], &GameData_20d9a00, 0);
  }
  else {
    v3 = 0;
  }
  v4 = *(_DWORD*)(a1 + 84);
  v5 = snd_fnd_WeakHandle_isValid(v3 + 1192) & (*(_DWORD*)(v3 + 1692) == v4);
  if ((*(_BYTE*)(a1 + 93) & 1) != 0 || (*(_BYTE*)(a1 + 94) & 1) == 0) {
    if ((v5 & 1) == 0 && (*(_BYTE*)(a1 + 95) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 56);
      if (v11 == 0) {
        goto LABEL_23;
      }
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 == 0) {
        goto LABEL_23;
      }
      v13 = v12;
      v14 = (atomic_ullong*)(v12 + 8);
      v8 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
        v8 = v15;
      }
      if (v8 == nullptr) {
      LABEL_23:
        v8 = ui_LayoutAccessor_empty__ptr[0];
      }
      v10 = "SoundSelect";
      goto LABEL_25;
    }
  }
  else {
    v6 = GameData_212d460[0];
    v7 = *GameData_212d460[0];
    if (*GameData_212d460[0] != 0) {
      GameRoutine_1562680(game_talk_g_window_layout_ptr[0], "Select", 1.0);
      *(_BYTE*)(v7 + 306) = 1;
      if (*v6 != 0) {
        v8 = game_talk_g_window_layout_ptr[0];
        if (*(_BYTE*)(*v6 + 306) != 0) {
          v9 = "SoundSelect";
        }
        else {
          v9 = "SoundDefault";
        }
        if (*(_BYTE*)(a1 + 95) == 0) {
          v9 = "SoundDisable";
        }
        if (v5 != 0) {
          v10 = "SoundDecide";
        }
        else {
          v10 = v9;
        }
      LABEL_25:
        GameRoutine_1562680(v8, v10, 1.0);
      }
    }
  }
  v16 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v16 = 520;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v16))(a1);
}

__int64 TalkLogMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64 v17;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e030[0], &GameData_20d9a00, 0);
  }
  else {
    v3 = 0;
  }
  v4 = *(_DWORD*)(a1 + 84);
  v5 = snd_fnd_WeakHandle_isValid(v3 + 1192) & (*(_DWORD*)(v3 + 1692) == v4);
  if ((*(_BYTE*)(a1 + 93) & 1) != 0 || (*(_BYTE*)(a1 + 94) & 1) == 0) {
    if ((v5 & 1) == 0 && (*(_BYTE*)(a1 + 95) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 56);
      if (v12 == 0) {
        goto LABEL_23;
      }
      v13 = std___1___shared_weak_count_lock(v12);
      if (v13 == 0) {
        goto LABEL_23;
      }
      v14 = v13;
      v15 = (atomic_ullong*)(v13 + 8);
      v9 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v16 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
        v9 = v16;
      }
      if (v9 == nullptr) {
      LABEL_23:
        v9 = ui_LayoutAccessor_empty__ptr[0];
      }
      v11 = "SoundDefault";
      goto LABEL_25;
    }
  }
  else {
    v6 = GameData_212d460[0];
    v7 = *GameData_212d460[0];
    if (*GameData_212d460[0] != 0) {
      GameRoutine_1562680(game_talk_g_window_layout_ptr[0], "Default", 1.0);
      v8 = *v6;
      *(_BYTE*)(v7 + 306) = 0;
      if (v8 != 0) {
        v9 = game_talk_g_window_layout_ptr[0];
        if (*(_BYTE*)(v8 + 306) != 0) {
          v10 = "SoundSelect";
        }
        else {
          v10 = "SoundDefault";
        }
        if (*(_BYTE*)(a1 + 95) == 0) {
          v10 = "SoundDisable";
        }
        if (v5 != 0) {
          v11 = "SoundDecide";
        }
        else {
          v11 = v10;
        }
      LABEL_25:
        GameRoutine_1562680(v9, v11, 1.0);
      }
    }
  }
  v17 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v17 = 520;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + v17))(a1);
}

__int64 TalkLogMenuItem_Update(__int64 result)
{
  if ((*(_BYTE*)(result + 93) & 1) != 0 || (*(_BYTE*)(result + 94) & 1) == 0) {
    return game_menu_BasicMenuItem_Update();
  }
  return result;
}

__int64 TalkLogMenuItem_Unknown9(__int64 result, __int64 a2)
{
  if ((*(_BYTE*)(result + 93) & 1) != 0 || (*(_BYTE*)(result + 94) & 1) == 0) {
    return BasicMenuItem_16e5720(result, a2);
  }
  return result;
}

#pragma GCC visibility pop
