#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64
ProcThermaeUnitMenu_Unknown160_alt1() __asm__("ProcThermaeUnitMenu_Unknown160");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
ProcThermaeUnitMenu_Unknown6_alt1() __asm__("ProcThermaeUnitMenu_Unknown6");
__int64 game_facility_anonymous_ProcThermaeUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
char* ProcThermaeUnitMenu_Unknown160();
char* ProcThermaeUnitMenu_Unknown6();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void ThermaeFile_950ec0(PSEUDO_X8, __int16*);
__int64 GameRoutine_94b1e0(__int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 game_facility_15e8430(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ProcThermaeUnitMenu_Unknown84(__int64 a1);

__int64 ProcThermaeUnitMenu_Unknown84(__int64 a1)
{
  __int16* v2;
  __int64* v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;
  __int64 v18[3];

  game_facility_15e8430(a1);
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  ThermaeFile_950ec0((void*)(v18), v2);
  v3 = (__int64*)v18[0];
  v4 = v18[1];
  if (v18[0] != v18[1]) {
    v5 = 0;
    while (1) {
      v6 = *v3;
      v7 = game_util_Format("L_HelpItem0%d", v5);
      LayoutAccessor_1560070((void*)(&v16_.v16), (__int64*)(a1 + 848), v7);
      if (v16_.v17 != 0) {
        v8 = std___1___shared_weak_count_lock(v16_.v17);
        v9 = v16_.v16;
        if (v16_.v17 != 0) {
          std___1___shared_weak_count___release_weak(v16_.v17);
        }
        if (v8 != 0 && v9 != nullptr) {
          LayoutAccessor_1562060(v9, (__int64)"T_Txt",
                                 *(const char**)(v6 + 32));
          if ((unsigned int)GameRoutine_94b1e0(v6) >= 0x10000) {
            v10 = "Disable";
          }
          else {
            v10 = "Enable";
          }
          LayoutAccessor_1562cf0((__int64)v9, v10);
          if ((unsigned int)GameRoutine_94b1e0(v6) >= 0x10000) {
            v11 = "Icon_Disable";
          }
          else {
            v11 = "Icon_Default";
          }
          LayoutAccessor_1562cf0((__int64)v9, v11);
          if ((GameRoutine_94b1e0(v6) & 0x20) != 0) {
            LayoutAccessor_1562cf0((__int64)v9, "Disable");
          }
        LABEL_21:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v8);
          }
          goto LABEL_6;
        }
        if (v8 != 0) {
          goto LABEL_21;
        }
      }
    LABEL_6:
      ++v3;
      ++v5;
      if (v3 == (__int64*)v4) {
        v3 = (__int64*)v18[0];
        if (v18[0] != 0) {
          goto LABEL_24;
        }
        goto LABEL_27;
      }
    }
  }
  v5 = 0;
  if (v18[0] != 0) {
  LABEL_24:
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v3);
  }
LABEL_27:
  if (v5 >= 4) {
    v13 = 4;
  }
  else {
    v13 = v5;
  }
  v14 = game_util_Format("HelpItem0%d", v13);
  LayoutAccessor_1562cf0(a1 + 848, v14);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848,
                                   (__int64)"L_HubUnitInfo/L_UnitInfo/Bg00", 1);
  return ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"L_HubUnitInfo/L_UnitInfo/Bg02", 0);
}

char* ProcThermaeUnitMenu_Unknown160()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

char* ProcThermaeUnitMenu_Unknown6()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

__int64 game_facility_anonymous_ProcThermaeUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 88) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_facility_FacilityUnitMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 96) = 259;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
