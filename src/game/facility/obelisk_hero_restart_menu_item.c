#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20660e0[8];
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 ObeliskHeroRestartMenuItem_Unknown55(__int64 a1);

__int64 ObeliskHeroRestartMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  char** v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[2];
  _BYTE* v28;
  _QWORD v29[2];
  unsigned __int64 v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 == 0) {
        goto LABEL_39;
      }
      if (*(_DWORD*)(a1 + 84) != 1) {
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v37 = -1;
        v7 = *msg_MessageManager_instance__ptr[0];
        v38 = -1;
        v39 = -1;
        v40 = -1;
        v41 = -1;
        v42 = -1;
        v43 = -1;
        v44 = -1;
        v45 = -1;
        v29[0] = GameData_212e348 + 2;
        v29[1] = 0xFFFF0001FFFF0000LL;
        v30 = 0xFFFF0004FFFF0002LL;
        v31 = 0xFFFF0006FFFF0005LL;
        v46 = 8;
        v32 = -65529;
        v33 = -65528;
        v8 = GameRoutine_a4dbe0(v7, "MID_HeroMenu_Continue_Part2", 0, v29);
        if (v8 != 0) {
          v9 = v8;
          v10 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v10 != 0) {
            GameRoutine_156c5d0(v10, v9, 0);
          }
        }
        goto LABEL_38;
      }
      v5 = *(unsigned __int8*)(a1 + 83);
      if (v5 == 10) {
        v6 = nullptr;
      }
      else {
        v6 = GameData_20660e0[v5];
      }
      v11 = game_util_Format("MCID_episode_%s", v6);
      v12 = strlen(v11);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0();
      }
      v13 = v12;
      if (v12 >= 0x17) {
        if ((v12 | 7) == 0x17) {
          v15 = 26;
        }
        else {
          v15 = (v12 | 7) + 1;
        }
        v14 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
        v27[1] = v13;
        v28 = v14;
        v27[0] = v15 | 1;
      }
      else {
        LOBYTE(v27[0]) = 2 * v12;
        v14 = (char*)v27 + 1;
        if (v12 == 0) {
          goto LABEL_20;
        }
      }
      memmove(v14, v11, v13);
    LABEL_20:
      v14[v13] = 0;
      v16 = msg_MessageManager_empty_text__ptr;
      if ((v27[0] & 1) != 0) {
        v17 = v28;
      }
      else {
        v17 = (char*)v27 + 1;
      }
      if (v17 != nullptr && *v17 != 0) {
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v37 = -1;
        v18 = *msg_MessageManager_instance__ptr[0];
        v38 = -1;
        v39 = -1;
        v40 = -1;
        v41 = -1;
        v42 = -1;
        v43 = -1;
        v44 = -1;
        v45 = -1;
        v29[0] = GameData_212e348 + 2;
        v29[1] = 0xFFFF0001FFFF0000LL;
        v30 = 0xFFFF0004FFFF0002LL;
        v31 = 0xFFFF0006FFFF0005LL;
        v46 = 8;
        v32 = -65529;
        v33 = -65528;
        v19 = GameRoutine_a4dbe0(v18, v17, 0, v29);
      }
      else {
        v19 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      v20 = msg_MessageManager_instance__ptr[0];
      if (v19 != 0) {
        v21 = v19;
      }
      else {
        v21 = (__int64)*v16;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v21);
      v22 = *v20;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v29[0] = GameData_212e348 + 2;
      v29[1] = 0xFFFF0001FFFF0000LL;
      v30 = 0xFFFF0004FFFF0002LL;
      v31 = 0xFFFF0006FFFF0005LL;
      v46 = 8;
      v32 = -65529;
      v33 = -65528;
      v23 = GameRoutine_a4dbe0(v22, "MID_HeroMenu_Continue_Part1", 0, v29);
      if (v23 != 0) {
        v24 = v23;
        v25 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
        if (v25 != 0) {
          GameRoutine_156c5d0(v25, v24, 0);
        }
      }
      if ((v27[0] & 1) != 0 && v28 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v28);
      }
    LABEL_38:
      result = GameRoutine_1562cf0(v3, "Large_StatusOn");
    LABEL_39:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
