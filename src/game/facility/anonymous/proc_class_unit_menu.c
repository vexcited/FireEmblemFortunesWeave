#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1467a30(_QWORD);
__int64 GameRoutine_16babb0(__int64, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_208e5a0[])();
extern __int64 (*game_facility_anonymous_ClassMenuItem_vtable[])();
extern __int64 GameData_208e578;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcClassUnitMenu_16bdb80(__int64 a1);
_QWORD* ProcClassUnitMenu_16bdc20(__int64 a1, __int64 a2);
__int64 ProcClassUnitMenu_Unknown153(__int64 a1, __int64 a2);

__int64 ProcClassUnitMenu_16bdb80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208e578, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  GameRoutine_1467a30(*(_QWORD*)(v5 + 88));
  GameRoutine_16babb0(v3, *(_QWORD*)(v5 + 88), *(_BYTE*)(v3 + 1384));
  return 9;
}

_QWORD* ProcClassUnitMenu_16bdc20(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64*** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  _BOOL4 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  v10[0] = GameData_208e5a0;
  v10[1] = a1;
  result = v10;
  v3 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v11 = v10;
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_19;
  }
  do {
    v6 = *v4;
    v7 = v4[1];
    if (v7 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v6 != nullptr) {
      v8 = (v6[6] & 0x20) == 0;
      if (v7 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v8 = false;
      if (v7 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v7 + 16))(v7);
      std___1___shared_weak_count___release_weak(v7);
      if (!v8) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v8) {
    LABEL_12:
      v12 = **v4;
      if (v11 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v12);
    }
  LABEL_3:
    v4 += 2;
  } while (v4 != v5);
  result = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v9 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v9))(result,
                                                                        a2);
    }
    return result;
  }

LABEL_19:
  v9 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v9))(result, a2);
}

__int64 ProcClassUnitMenu_Unknown153(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  char v5;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_WORD*)(result + 16) = 0;
  *(_DWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 88) = a2;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  if (a2 != 0) {
    v4 = result;
    v5 = game_Unit_IsUnlocked(a2) & 1;
    result = v4;
    *(_BYTE*)(v4 + 82) = v5;
  }
  *(_BYTE*)(result + 96) = 3;
  *(_QWORD*)result = game_facility_anonymous_ClassMenuItem_vtable;
  return result;
}

#pragma GCC visibility pop
