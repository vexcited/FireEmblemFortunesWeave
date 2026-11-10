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
__int64 ProcObeliskHero3Menu_Unknown128(__int64 a1);
__int64 ProcObeliskHero3Menu_Unknown143(__int64 a1);

__int64 ProcObeliskHero3Menu_Unknown128(__int64 a1)
{
  int v2;
  bool v3;
  _QWORD* v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int v7;
  unsigned int v8;
  __int64* v9;
  __int64 v10;
  char v11;
  int v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  __int64 result;
  _QWORD* v18;
  unsigned int* v19;
  unsigned int v20;
  unsigned int v21;

  v2 = GameData_21668e0++;
  if (v2 == 0) {
    ((__int64 (*)(__int64))*game_anonymous_MountBind_vtable_ptr)(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v4 = (_QWORD*)GameData_2265e90;
    v5 = GameRoutine_18d3900(*(_QWORD*)GameData_2265e90);
    v6 = (unsigned int*)(*v4 + 804LL);
    v7 = atomic_load(v6);
    if (v7 != 0) {
      do {
        v5 = nn_os_YieldThread(v5);
        v8 = atomic_load(v6);
      } while (v8 != 0);
    }
  }
  v3 = game_GameModeData_instance_ != 0 &&
       *(_DWORD*)(game_GameModeData_instance_ + 60) == 3;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       96, 16, 0);
  v11 = *(_BYTE*)(a1 + 1064);
  v12 = *(_DWORD*)(a1 + 1068);
  v13 = v10;
  *(_QWORD*)(v10 + 8) = 0;
  *(_WORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 257;
  *(_BYTE*)(v10 + 82) = 1;
  *(_BYTE*)(v10 + 83) = v11;
  *(_DWORD*)(v10 + 84) = v12;
  if (v3) {
    *(_BYTE*)(v10 + 88) = 1;
    *(_QWORD*)v10 = game_facility_anonymous_RestartMenuItem_vtable;
    BasicMenuCursor_16e0c00((_QWORD*)a1, v10);
    v14 = fw_memory_HeapManager_Allocate(*v9, 96, 16, 0);
    v15 = *(_BYTE*)(a1 + 1064);
    v16 = *(_DWORD*)(a1 + 1068);
    *(_WORD*)(v14 + 16) = 0;
    v13 = v14;
    *(_DWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_BYTE*)(v14 + 83) = v15;
    *(_DWORD*)(v14 + 84) = v16;
    *(_BYTE*)(v14 + 88) = 2;
    *(_QWORD*)v14 = game_facility_ObeliskHeroRetryMenuItem_vtable;
    *(_QWORD*)(v14 + 8) = 0;
  }
  else {
    *(_BYTE*)(v10 + 88) = 0;
    *(_QWORD*)v10 = game_facility_anonymous_StartMenuItem_vtable;
  }
  result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)a1, v13);
  if (--GameData_21668e0 == 0) {
    (*(void (**)(__int64))((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)game_anonymous_MountBind_vtable_ptr))(
        (__int64)&game_anonymous_MountBind_vtable_ptr);
    v18 = (_QWORD*)GameData_2265e90;
    result = GameRoutine_18d3a00(*(_QWORD*)GameData_2265e90);
    v19 = (unsigned int*)(*v18 + 804LL);
    v20 = atomic_load(v19);
    if (v20 != 0) {
      do {
        result = nn_os_YieldThread(result);
        v21 = atomic_load(v19);
      } while (v21 != 0);
    }
  }
  return result;
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
