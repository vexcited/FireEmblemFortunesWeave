#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64
ProcDiningUnitMenu_Unknown160_alt1() __asm__("ProcDiningUnitMenu_Unknown160");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64
ProcDiningUnitMenu_Unknown6_alt1() __asm__("ProcDiningUnitMenu_Unknown6");
__int64 game_facility_anonymous_ProcDiningUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);
char* ProcDiningUnitMenu_Unknown160();
char* ProcDiningUnitMenu_Unknown6();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Dir_70df40(__int16*, __int16*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 game_facility_15e8430(__int64);
__int64 game_facility_94abe0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_21f4318;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern int GameData_21f4314;
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_21f430c __attribute__((aligned(4)));
extern GameAlign_21f430c GameData_21f430c;
void CookingFile_9249e0(__int64*, char);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ProcDiningUnitMenu_Unknown84(__int64 a1);

__int64 ProcDiningUnitMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  __int16* v3;
  int v4;
  char v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  struct {
    char* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64* v22;
    __int64* v23;
    __int64 v24;
  } v22_;

  game_facility_15e8430(a1);
  v22_.v22 = nullptr;
  v22_.v23 = nullptr;
  v22_.v24 = 0;
  v2 = game_gmap_GmapClock_instance_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f4318) != 0) {
    GameData_21f4314 = 0;
    GameData_21f430c = 0x10000205A5LL;
    __cxa_guard_release((__int64)&GameData_21f4318);
  }
  if (v2 != 0) {
    v3 = (__int16*)(v2 + 8);
  }
  else {
    v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v4 = Dir_70df40((__int16*)&GameData_21f430c, v3);
  if (v4 >= 1440) {
    v5 = (v4 / 0x2760u) & 3;
  }
  else {
    v5 = 0;
  }
  CookingFile_9249e0((__int64*)&v22_.v22, v5);
  v6 = v22_.v22;
  v7 = v22_.v23;
  if (v22_.v22 != v22_.v23) {
    v8 = 0;
    while (1) {
      v9 = *v6;
      v10 = game_util_Format("L_HelpItem0%d", v8);
      LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(a1 + 848), v10);
      if (v20_.v21 != 0) {
        v11 = std___1___shared_weak_count_lock(v20_.v21);
        if (v11 != 0) {
          v12 = v20_.v20;
          v13 = v11;
          if (v20_.v20 != nullptr) {
            LayoutAccessor_1562060(v20_.v20, (__int64)"T_Txt",
                                   *(const char**)(v9 + 32));
            if ((unsigned int)game_facility_94abe0(v9) >= 0x10000) {
              v14 = "Disable";
            }
            else {
              v14 = "Enable";
            }
            LayoutAccessor_1562cf0((__int64)v12, v14);
            if ((unsigned int)game_facility_94abe0(v9) >= 0x10000) {
              v15 = "Icon_Disable";
            }
            else {
              v15 = "Icon_Default";
            }
            LayoutAccessor_1562cf0((__int64)v12, v15);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak(v13);
            v16 = v20_.v21;
            if (v20_.v21 == 0) {
              goto LABEL_10;
            }
          LABEL_23:
            std___1___shared_weak_count___release_weak(v16);
            goto LABEL_10;
          }
        }
        v16 = v20_.v21;
        if (v20_.v21 != 0) {
          goto LABEL_23;
        }
      }
    LABEL_10:
      ++v6;
      ++v8;
      if (v6 == v7) {
        v6 = v22_.v22;
        if (v22_.v22 != nullptr) {
          goto LABEL_27;
        }
        goto LABEL_30;
      }
    }
  }
  v8 = 0;
  if (v22_.v22 != nullptr) {
  LABEL_27:
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  (__int64)v6);
  }
LABEL_30:
  v18 = game_util_Format("HelpItem0%d", v8);
  LayoutAccessor_1562cf0(a1 + 848, v18);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848,
                                   (__int64)"L_HubUnitInfo/L_UnitInfo/Bg00", 0);
  return ui_LayoutAccessor_SetPaneVisible(
      a1 + 848, (__int64)"L_HubUnitInfo/L_UnitInfo/Bg02", 1);
}

char* ProcDiningUnitMenu_Unknown160()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 3u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

char* ProcDiningUnitMenu_Unknown6()
{
  __int64* v0;

  v0 = msg_MessageManager_instance__ptr[0];
  GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 3u, 0);
  return GameRoutine_a4dbe0_alt1(*v0, "MID_Menu_Facility_UnitSelect_Help", 0);
}

__int64 game_facility_anonymous_ProcDiningUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = **(_QWORD**)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 104, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 88) = v2;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_facility_FacilityUnitMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 96) = 259;
  return BasicMenuCursor_16e0c00(v3, v4);
}

#pragma GCC visibility pop
