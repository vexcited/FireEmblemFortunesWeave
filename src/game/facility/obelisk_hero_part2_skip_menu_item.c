#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ObeliskHeroPart2SkipMenuItem_Unknown55_alt1(__int64 a1) __asm__(
    "ObeliskHeroPart2SkipMenuItem_Unknown55");
__int64 GameRoutine_8799d0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2212268;
__int64
game_facility_ObeliskHeroPart2SkipMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(_QWORD* a1);
__attribute__((swiftcall)) void game_185a130(PSEUDO_X8, unsigned __int8);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 (*GameData_2077560[])();
extern __int64 (*GameData_20775e0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ObeliskHeroPart2SkipMenuItem_Unknown71(unsigned __int64 a1);

__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;

  game_menu_GameMenuItem_DrawText_alt1(a1);
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = (__int64*)a1[6];
      v4 = result;
      if (v3 != nullptr) {
        v5 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                     "MID_HeroMenu_Skip_Part2", 0);
        if (v5 != nullptr) {
          v6 = (__int64)v5;
          v7 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Txt");
          if (v7 != 0) {
            GameRoutine_156c5d0_alt1(v7, v6, 0);
          }
        }
        result = LayoutAccessor_1562cf0((__int64)v3, "Large_StatusOff");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

__int64 ObeliskHeroPart2SkipMenuItem_Unknown71(unsigned __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64* v8;
  const char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[2];
    char* v17;
    char gap72_[8];
    _QWORD* v18;
  } v16_;
  const char* v19;
  struct {
    __int64* v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
    unsigned __int64 v23;
    __int64** v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v20_;

  v2 = *(_QWORD*)(a1 + 8);
  v20_.v21 = a1;
  v19 = "MID_HeroMenu_Skip_Confirm";
  v20_.v20 = (__int64*)GameData_2077560;
  v14_.v15 = v14_.v14;
  v20_.v24 = &v20_.v20;
  v16_.v18 = v16_.v16;
  v16_.v16[0] = GameData_20775e0;
  v14_.v14[0] = GameData_20775e0;
  v3 = MapSortieMenu_871860(v2, (__int64)&v19, (__int64)&v20_.v20,
                            (__int64)v16_.v16, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v4 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v4))((__int64)v14_.v15);
LABEL_6:
  if (v16_.v18 == v16_.v16) {
    v5 = 32;
  }
  else {
    if (v16_.v18 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v16_.v18 + v5))((__int64)v16_.v18);
LABEL_11:
  if (v20_.v24 == &v20_.v20) {
    v6 = 4;
    goto LABEL_15;
  }
  if (v20_.v24 != nullptr) {
    v6 = 5;
  LABEL_15:
    ((void (*)(void*))(*v20_.v24)[v6])(v20_.v24);
  }
  Dialog_1649e50(v3, "MID_HeroMenu_Skip_Comment", 0, 0);
  if (*(_BYTE*)(a1 + 90) == 1) {
    game_185a130((void*)((__int64)v16_.v16), *(_BYTE*)(a1 + 83));
    v7 = (v16_.v16[0] & 1) != 0 ? v16_.v17 : (char*)v16_.v16 + 1;
    v8 = msg_MessageManager_instance__ptr[0];
    v9 = v7 != nullptr ? v7 : *msg_MessageManager_empty_text__ptr;
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v9);
    v10 = *v8;
    v20_.v25 = -1;
    v20_.v26 = -1;
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v35 = -1;
    v20_.v36 = -1;
    v20_.v20 = GameData_212e348 + 2;
    v20_.v21 = 0xFFFF0001FFFF0000LL;
    v20_.v22 = 0xFFFF0004FFFF0002LL;
    v20_.v23 = 0xFFFF0006FFFF0005LL;
    v20_.v37 = 8;
    v20_.v24 = (__int64**)0xFFFF0008FFFF0007LL;
    v11 = GameRoutine_a4dbe0_alt2(v10, "MID_HeroMenu_Skip_Attention", 0);
    Dialog_1649e50(v3, v11, 1, 1);
    if ((v16_.v16[0] & 1) != 0 && v16_.v17 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v16_.v17);
    }
  }
  return v3;
}

__int64

game_facility_ObeliskHeroPart2SkipMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (GameData_2212268 != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    v2 = *(_QWORD*)(v1 + 8);
    if (*(_QWORD*)(v2 + 152) != 0) {
      v3 = *(_QWORD*)(v2 + 152);
    }
    else {
      v3 = *(_QWORD*)(v1 + 8);
    }
    GameRoutine_8799d0(v3, (unsigned int)*(unsigned __int8*)(v1 + 89) + 5,
                       *(unsigned __int8*)(v1 + 83), 2);
  }
  return 4;
}

#pragma GCC visibility pop
