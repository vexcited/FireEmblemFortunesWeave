#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d99a0(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a48;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcEducateUnitMenu_Unknown100(__int64 a1);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_209c1e8[])();
extern __int64 (*GameData_209c368[])();
extern __int64 (*game_facility_anonymous_ProcEducateUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_facility_anonymous_ProcEducateUnitMenu_CreateBind(__int64 a1);

_QWORD* game_facility_anonymous_ProcEducateUnitMenu_CreateBind(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* result;
  __int64*** v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  _BOOL4 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1392, 16, 0);
  GameRoutine_1789cf0(v2, "EducateUnitMenu");
  *(_DWORD*)(v2 + 1184) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)(v2 + 1216) = 0;
  *(_QWORD*)(v2 + 1224) = 0;
  *(_QWORD*)(v2 + 1232) = 0;
  *(_QWORD*)(v2 + 1200) = 0xFFFFFFFFLL;
  *(_QWORD*)(v2 + 1280) = 0;
  *(_QWORD*)(v2 + 1296) = 0;
  *(_QWORD*)(v2 + 1304) = 0;
  *(_BYTE*)(v2 + 1312) = 0;
  *(_QWORD*)(v2 + 1328) = 0;
  *(_QWORD*)(v2 + 1336) = 0;
  *(_QWORD*)(v2 + 1344) = 0;
  *(_QWORD*)(v2 + 1352) = 0;
  *(_QWORD*)(v2 + 1360) = 0;
  *(_QWORD*)(v2 + 1368) = 0;
  *(_DWORD*)(v2 + 1240) = 2;
  *(_QWORD*)v2 = game_facility_anonymous_ProcEducateUnitMenu_vtable;
  *(_QWORD*)(v2 + 1376) = 0;
  *(_QWORD*)(v2 + 176) = GameData_209c1e8;
  *(_QWORD*)(v2 + 1056) =
      (__int64)((char*)&game_facility_anonymous_ProcEducateUnitMenu_vtable +
                1472);
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  ProcInst_657850(v2, GameData_212c730, "ProcEducateUnitMenu", 1, a1);
  result = v12;
  v12[0] = GameData_209c368;
  v12[1] = v2;
  v13 = v12;
  v5 = *(__int64****)(game_UnitListSet_instance_ + 40);
  v6 = *v5;
  v7 = v5[1];
  if (*v5 == v7) {
    goto LABEL_19;
  }
  do {
    v8 = *v6;
    v9 = v6[1];
    if (v9 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v8 != nullptr) {
      v10 = (v8[6] & 0x20) == 0;
      if (v9 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v10 = false;
      if (v9 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v9 + 16))(v9);
      std___1___shared_weak_count___release_weak(v9);
      if (!v10) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v10) {
    LABEL_12:
      v14 = **v6;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, v3);
      }
      (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14);
    }
  LABEL_3:
    v6 += 2;
  } while (v6 != v7);
  result = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v11 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                         v3);
    }
    return result;
  }
LABEL_19:
  v11 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

__int64 ProcEducateUnitMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_2131a48, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3);
  if ((v5 & 1) == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v4 + 88);
  if (v6 != 0) {
    v7 = (_QWORD*)*GameData_212dcd0;
    v8 = *(_QWORD**)(*GameData_212dcd0 + 48);
    v9 = *(_QWORD*)(*GameData_212dcd0 + 64);
    *(_QWORD*)(*GameData_212dcd0 + 56) = v8;
    if ((unsigned __int64)v8 >= v9) {
      v13 = v9 - (_QWORD)v8;
      v14 = v13 >> 2;
      if ((unsigned __int64)(v13 >> 2) <= 1) {
        v14 = 1;
      }
      if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
        v15 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v15 = v14;
      }
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(v5);
      }
      v16 = fw_memory_g_heap_manager_ptr;
      v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      *v17 = v6;
      v10 = v17 + 1;
      v7[6] = v17;
      v7[7] = v17 + 1;
      v7[8] = &v17[v15];
      if (v8 != nullptr) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v8);
      }
    }
    else {
      *v8 = v6;
      v10 = v8 + 1;
    }
    v7[7] = v10;
    v12 = *(_QWORD*)(v4 + 88);
  }
  else {
    v12 = 0;
  }
  GameRoutine_16d99a0(a1, v12);
  return 9;
}

#pragma GCC visibility pop
