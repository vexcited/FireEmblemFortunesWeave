#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15d2f60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_209b890;
extern __int64* GameData_212e008[9];
__int64 ProcEducateSkillMenu_Unknown88(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_94d380(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_EducateSkillMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, _DWORD* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_15d2f60(__int64, unsigned int*, __int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8, __int64,
                                                         __int64);
__int64 game_Unit_EachEducateTargetSkill(__int64, __int64);
extern _UNKNOWN GameData_1aed6ab;
extern __int64 (*GameData_209b8b8[])();
extern __int64 game_UnitListSet_instance_;
__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList(__int64 a1);

__int64 ProcEducateSkillMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  struct {
    __int64 v4;
    __int64 v5;
  } v4_;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_209b890, 0);
    if (result != 0) {
      v3 = result;
      LayoutAccessor_1560070((void*)(&v4_.v4), (__int64*)(a1 + 848),
                             "L_InfoDetail_Before");
      GameHr_15d2f60((__int64)&v4_.v4, (unsigned int*)(v3 + 96),
                     *(_QWORD*)(v3 + 88), 0);
      result = v4_.v5;
      if (v4_.v5 != 0) {
        return std___1___shared_weak_count___release_weak_alt1(v4_.v5);
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList(__int64 a1)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    __int64 v8;
    char gap16_[16];
    __int64 (***v9)();
  } v7_;

  result = X8CALL_X0(
      unsigned __int64,
      FacilityUnitList_145eea0((void*)(&v7_.v7),
                               *(_QWORD*)(game_UnitListSet_instance_ + 40),
                               (__int64)&GameData_1aed6ab));
  if (v7_.v7 != nullptr && ((_WORD)v7_.v7[6] & 0x21) == 0) {
    v4 = (__int64)*v7_.v7;
    v5 = v7_.v8;
    if (v7_.v8 == 0) {
      goto LABEL_8;
    }
  }
  else {
    v4 = 0;
    v5 = v7_.v8;
    if (v7_.v8 == 0) {
      goto LABEL_8;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak_alt1(v5);
  }
LABEL_8:
  if (v4 == 0) {
    return result;
  }
  v7_.v7 = GameData_209b8b8;
  v7_.v8 = a1;
  v7_.v9 = &v7_.v7;
  game_Unit_EachEducateTargetSkill(v4, (__int64)&v7_.v7);
  result = (__int64)v7_.v9;
  if (v7_.v9 == &v7_.v7) {
    v6 = 4;
  }
  else {
    if (v7_.v9 == nullptr) {
      return result;
    }
    v6 = 5;
  }
  return ((__int64 (*)(__int64))(*v7_.v9)[v6])((__int64)v7_.v9);
}

__int64 game_facility_anonymous_ProcEducateSkillMenu_AddItemList_closure_Invoke(
    __int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  v6 = v4;
  v7 = GameRoutine_94d380(v5, a2);
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 88) = v5;
  *(_WORD*)(v6 + 80) = 257;
  *(_BYTE*)(v6 + 82) = 1;
  *(_DWORD*)(v6 + 96) = *a2;
  *(_DWORD*)(v6 + 100) = v7;
  *(_QWORD*)v6 = game_facility_anonymous_EducateSkillMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v6);
}

#pragma GCC visibility pop
