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
__int64 GameRoutine_f8a870(_QWORD, _QWORD);
extern __int64 GameData_212efc0;
__int64
game_facility_ObeliskHeroRestartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1);
bool game_879ce0(__int64, _QWORD*, __int64);
char* GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
extern __int64 (*GameData_2001310[])();
__int64 ObeliskHeroRestartMenuItem_Unknown27(__int64 a1);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_f8a870_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_f8a870");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __attribute__((noreturn)) String_60a1d0();
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 ObeliskHeroRestartMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  const char** v16;
  _BYTE* v17;
  __int64 v18;
  char* v19;
  __int64* v20;
  const char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[2];
    _BYTE* v28;
    __int64* v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    unsigned __int64 v32;
    int v33;
    int v34;
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
    __int64 v47;
  } v27_;

  game_menu_GameMenuItem_DrawText_alt1((_QWORD*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
        goto LABEL_39;
      }
      if (*(_DWORD*)(a1 + 84) != 1) {
        v27_.v35 = -1;
        v27_.v36 = -1;
        v27_.v37 = -1;
        v27_.v38 = -1;
        v7 = *msg_MessageManager_instance__ptr[0];
        v27_.v39 = -1;
        v27_.v40 = -1;
        v27_.v41 = -1;
        v27_.v42 = -1;
        v27_.v43 = -1;
        v27_.v44 = -1;
        v27_.v45 = -1;
        v27_.v46 = -1;
        v27_.v29 = GameData_212e348 + 2;
        v27_.v30 = 0xFFFF0001FFFF0000LL;
        v27_.v31 = 0xFFFF0004FFFF0002LL;
        v27_.v32 = 0xFFFF0006FFFF0005LL;
        v27_.v47 = 8;
        v27_.v33 = -65529;
        v27_.v34 = -65528;
        v8 = GameRoutine_a4dbe0_alt1(v7, "MID_HeroMenu_Continue_Part2", 0);
        if (v8 != nullptr) {
          v9 = (__int64)v8;
          v10 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Txt");
          if (v10 != 0) {
            GameRoutine_156c5d0_alt1(v10, v9, 0);
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
      v11 = game_util_Format_alt1("MCID_episode_%s", v6);
      v12 = strlen_alt1(v11);
      if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v13 = v12;
      if (v12 >= 0x17) {
        if ((v12 | 7) == 0x17) {
          v15 = 26;
        }
        else {
          v15 = (v12 | 7) + 1;
        }
        v14 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
        v27_.v27[1] = v13;
        v27_.v28 = v14;
        v27_.v27[0] = v15 | 1;
      }
      else {
        LOBYTE(v27_.v27[0]) = 2 * v12;
        v14 = (char*)v27_.v27 + 1;
        if (v12 == 0) {
          goto LABEL_20;
        }
      }
      memmove_alt1((__int64)v14, (__int64)v11, v13);
    LABEL_20:
      v14[v13] = 0;
      v16 = (const char**)msg_MessageManager_empty_text__ptr;
      if ((v27_.v27[0] & 1) != 0) {
        v17 = v27_.v28;
      }
      else {
        v17 = (char*)v27_.v27 + 1;
      }
      if (v17 != nullptr && *v17 != 0) {
        v27_.v35 = -1;
        v27_.v36 = -1;
        v27_.v37 = -1;
        v27_.v38 = -1;
        v18 = *msg_MessageManager_instance__ptr[0];
        v27_.v39 = -1;
        v27_.v40 = -1;
        v27_.v41 = -1;
        v27_.v42 = -1;
        v27_.v43 = -1;
        v27_.v44 = -1;
        v27_.v45 = -1;
        v27_.v46 = -1;
        v27_.v29 = GameData_212e348 + 2;
        v27_.v30 = 0xFFFF0001FFFF0000LL;
        v27_.v31 = 0xFFFF0004FFFF0002LL;
        v27_.v32 = 0xFFFF0006FFFF0005LL;
        v27_.v47 = 8;
        v27_.v33 = -65529;
        v27_.v34 = -65528;
        v19 = GameRoutine_a4dbe0_alt1(v18, v17, 0);
      }
      else {
        v19 = *msg_MessageManager_empty_text__ptr;
      }
      v20 = msg_MessageManager_instance__ptr[0];
      if (v19 != nullptr) {
        v21 = v19;
      }
      else {
        v21 = *v16;
      }
      GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704,
                              v21);
      v22 = *v20;
      v27_.v35 = -1;
      v27_.v36 = -1;
      v27_.v37 = -1;
      v27_.v38 = -1;
      v27_.v39 = -1;
      v27_.v40 = -1;
      v27_.v41 = -1;
      v27_.v42 = -1;
      v27_.v43 = -1;
      v27_.v44 = -1;
      v27_.v45 = -1;
      v27_.v46 = -1;
      v27_.v29 = GameData_212e348 + 2;
      v27_.v30 = 0xFFFF0001FFFF0000LL;
      v27_.v31 = 0xFFFF0004FFFF0002LL;
      v27_.v32 = 0xFFFF0006FFFF0005LL;
      v27_.v47 = 8;
      v27_.v33 = -65529;
      v27_.v34 = -65528;
      v23 = GameRoutine_a4dbe0_alt1(v22, "MID_HeroMenu_Continue_Part1", 0);
      if (v23 != nullptr) {
        v24 = (__int64)v23;
        v25 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Txt");
        if (v25 != 0) {
          GameRoutine_156c5d0_alt1(v25, v24, 0);
        }
      }
      if ((v27_.v27[0] & 1) != 0 && v27_.v28 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v27_.v28);
      }
    LABEL_38:
      result = LayoutAccessor_1562cf0((__int64)v3, "Large_StatusOn");
    LABEL_39:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

__int64 ObeliskHeroRestartMenuItem_Unknown27(__int64 a1)
{
  unsigned __int8 v2;
  unsigned __int8 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  _QWORD v11[2];

  v2 = *(_BYTE*)(a1 + 83);
  if (*(_DWORD*)(a1 + 84) == 1) {
    v3 = 4;
  }
  else {
    v3 = 5;
  }
  v4 = GameRoutine_874b20(v3, v2, 0, 0);
  v5 = *(_QWORD*)(a1 + 8);
  v11[0] = v4;
  if (*(_QWORD*)(v5 + 152) != 0) {
    v6 = *(_QWORD*)(v5 + 152);
  }
  else {
    v6 = v5;
  }
  v11[1] = strlen(v4);
  v9_.v9[0] = GameData_2001310;
  v9_.v10 = v9_.v9;
  game_879ce0(v6, v11, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_11;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return 10;
}

__int64

game_facility_ObeliskHeroRestartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v6;
  int v7;
  int v8;
  char v9;

  v2 = *(_QWORD*)GameData_212efc0;
  if (*(_QWORD*)GameData_212efc0 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    LODWORD(v6) = 2;
    v4 = *(_BYTE*)(v3 + 83);
    LODWORD(v3) = *(_DWORD*)(v3 + 84);
    BYTE4(v6) = v4;
    v7 = v3;
    v8 = -1;
    v9 = 1;
    GameRoutine_f8a870_alt1(v2, &v6);
  }
  return 4;
}

#pragma GCC visibility pop
