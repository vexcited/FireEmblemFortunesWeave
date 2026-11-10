#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown136(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 SystemMenu_1854750(__int64 a1, __int64* a2);
__int64 SystemMenu_1854910(__int64 a1, __int64* a2);

__int64 SystemMenu_1854750(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[32];

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  if ((unsigned int)(result - 9) > 1) {
    return game_menu_GameMenu_Unknown135(a1, a2);
  }
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v20, "%s%s", "Alpha", "In");
    result = GameRoutine_156af20(v5, 4, 0, a1 + 848, 0, v20);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (__int64)v7 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          GameRoutine_874500();
        }
        v12 = v6 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        result = memcpy(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
    }
  }
  return result;
}

__int64 SystemMenu_1854910(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[32];

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  if ((unsigned int)(result - 9) > 1) {
    return game_menu_GameMenu_Unknown136(a1, a2);
  }
  v5 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v20, "%s%s", "Alpha", "Out");
    result = GameRoutine_156af20(v5, 4, 1, a1 + 848, 0, v20);
    if (result != -1) {
      v7 = (__int64*)a2[1];
      v6 = a2[2];
      if ((unsigned __int64)v7 >= v6) {
        v9 = *a2;
        v10 = (__int64)v7 - *a2;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          GameRoutine_874500();
        }
        v12 = v6 - v9;
        v13 = fw_memory_g_heap_manager_ptr;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v11;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v15 = result;
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          result = v15;
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v14;
        v18 = v16 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v16 + v10) = result;
        v8 = v16 + v10 + 8;
        result = memcpy(v18, v9, v10);
        *a2 = v18;
        a2[1] = v8;
        a2[2] = v17;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
        }
      }
      else {
        *v7 = result;
        v8 = (__int64)(v7 + 1);
      }
      a2[1] = v8;
    }
  }
  return result;
}

#pragma GCC visibility pop
