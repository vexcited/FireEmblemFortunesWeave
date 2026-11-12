#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_18d3900(__int64);
__int64 GameRoutine_18d3a00(__int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_YieldThread(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool GameRoutine_185a200(unsigned int, unsigned int);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format(const char*, ...);
extern __int64 (**game_anonymous_MountBind_vtable_ptr)();
extern __int64 (*game_facility_ObeliskHeroRetryMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_RestartMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_StartMenuItem_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_2265e90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_21668e0;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_1662dc0(__int64);
__int64 ProcObeliskHero3Menu_Unknown128_alt1(__int64 a1) __asm__(
    "ProcObeliskHero3Menu_Unknown128");
__int64 ProcObeliskHero3Menu_Unknown143(__int64 a1);
__int64 save_Task_Mount(__int64);
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void nn_os_YieldThread_alt1() __asm__("nn_os_YieldThread");
void ProcObeliskHero3Menu_Unknown128(__int64 a1);

void ProcObeliskHero3Menu_Unknown128(__int64 a1)
{
  int v2;
  bool v3;
  _QWORD* v4;
  unsigned int* v5;
  unsigned int v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  char v10;
  int v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  _QWORD* v16;
  unsigned int* v17;
  unsigned int v18;
  unsigned int v19;

  v2 = GameData_21668e0++;
  if (v2 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v4 = (_QWORD*)GameData_2265e90;
    save_Task_Mount(*(_QWORD*)GameData_2265e90);
    v5 = (unsigned int*)(*v4 + 804LL);
    v6 = atomic_load(v5);
    if (v6 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v7 = atomic_load(v5);
      } while (v7 != 0);
    }
  }
  v3 = game_GameModeData_instance_ != 0 &&
       *(_DWORD*)(game_GameModeData_instance_ + 60) == 3;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  v10 = *(_BYTE*)(a1 + 1064);
  v11 = *(_DWORD*)(a1 + 1068);
  v12 = v9;
  *(_QWORD*)(v9 + 8) = 0;
  *(_WORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  *(_BYTE*)(v9 + 83) = v10;
  *(_DWORD*)(v9 + 84) = v11;
  if (v3) {
    *(_BYTE*)(v9 + 88) = 1;
    *(_QWORD*)v9 = game_facility_anonymous_RestartMenuItem_vtable;
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v9);
    v13 = fw_memory_HeapManager_Allocate(*v8, 96, 16, 0);
    v14 = *(_BYTE*)(a1 + 1064);
    v15 = *(_DWORD*)(a1 + 1068);
    *(_WORD*)(v13 + 16) = 0;
    v12 = v13;
    *(_DWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_WORD*)(v13 + 80) = 257;
    *(_BYTE*)(v13 + 82) = 1;
    *(_BYTE*)(v13 + 83) = v14;
    *(_DWORD*)(v13 + 84) = v15;
    *(_BYTE*)(v13 + 88) = 2;
    *(_QWORD*)v13 = game_facility_ObeliskHeroRetryMenuItem_vtable;
    *(_QWORD*)(v13 + 8) = 0;
  }
  else {
    *(_BYTE*)(v9 + 88) = 0;
    *(_QWORD*)v9 = game_facility_anonymous_StartMenuItem_vtable;
  }
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v12);
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v16 = (_QWORD*)GameData_2265e90;
    GameRoutine_18d3a00(*(_QWORD*)GameData_2265e90);
    v17 = (unsigned int*)(*v16 + 804LL);
    v18 = atomic_load(v17);
    if (v18 != 0) {
      do {
        nn_os_YieldThread_alt1();
        v19 = atomic_load(v17);
      } while (v19 != 0);
    }
  }
}

__int64 ProcObeliskHero3Menu_Unknown143(__int64 a1)
{
  char* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  const char* v6;

  GameRoutine_1662dc0(a1);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = game_util_Format("MID_Obelisk_3ISM_c0%d_Digest",
                          *(_DWORD*)(game_GameModeData_instance_ + 64));
  }
  else {
    v2 = "MID_Obelisk_3ISM_c01_Digest";
  }
  v3 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0], v2, 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                       (__int64)"T_StoryInfo");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  if (GameRoutine_185a200(*(unsigned __int8*)(a1 + 1064), 3u)) {
    v6 = "StoryOff";
  }
  else {
    v6 = "StoryOn";
  }
  return LayoutAccessor_1562cf0(a1 + 848, (__int64)v6);
}

#pragma GCC visibility pop
