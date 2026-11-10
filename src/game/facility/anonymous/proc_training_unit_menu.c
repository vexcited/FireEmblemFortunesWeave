#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTrainingUnitMenu_Unknown160();
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_FacilityUnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131a40[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
__int64 ProcTrainingUnitMenu_Unknown6();
__int64* ProcTrainingUnitMenu_15f9440(__int64* result, _QWORD* a2);
bool game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f9930(
    __int64 a1, __int64 a2);
__int64 game_facility_anonymous_ProcTrainingUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64
game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f97a0(
    __int64 a1, __int64 a2, _DWORD* a3);

__int64 ProcTrainingUnitMenu_Unknown160()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v3);
}

__int64 ProcTrainingUnitMenu_Unknown6()
{
  __int64* v0;
  __int64 v1;
  _QWORD v3[4];
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = msg_MessageManager_instance__ptr[0];
  Manager_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, 2, 0);
  v1 = *v0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(v1, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v3);
}

__int64* ProcTrainingUnitMenu_15f9440(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v2 = (__int64*)a2[148];
  v3 = (__int64*)a2[149];
  v4 = result;
  result[1] = 0;
  result[2] = 0;
  *result = 0;
  if (v2 != v3) {
    v5 = nullptr;
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v7 = *v2;
      if (*v2 != 0) {
        v8 = v4[2];
        if ((unsigned __int64)v5 < v8) {
          *v5++ = v7;
        }
        else {
          v9 = (_QWORD*)*v4;
          v10 = (__int64)v5 - *v4;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            goto LABEL_50;
          }
          v12 = v8 - (_QWORD)v9;
          if (v12 >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v11;
          }
          if (v13 != 0) {
            if (v13 >> 61 != 0) {
              goto LABEL_51;
            }
            v14 = fw_memory_HeapManager_Allocate(*v6, 8 * v13, 16, 0);
          }
          else {
            v14 = 0;
          }
          v15 = v14 + 8 * v13;
          v16 = v14 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v14 + v10) = v7;
          v5 = (__int64*)(v14 + v10 + 8);
          result = (__int64*)memcpy(v16, v9, v10);
          *v4 = v16;
          v4[2] = v15;
          if (v9 != nullptr) {
            v17 = 128;
            if (*(_QWORD*)(*v6 + 200LL) == 0) {
              v17 = 56;
            }
            result = (__int64*)nn_mem_StandardAllocator_Free(*v6 + v17, v9);
          }
        }
        v4[1] = (__int64)v5;
      }
      if (++v2 == v3) {
        goto LABEL_23;
      }
    }
  }
  v5 = nullptr;
LABEL_23:
  result = (__int64*)a2[42];
  if (result != nullptr) {
    result = (__int64*)__dynamic_cast(result, GameData_212e008[0],
                                      GameData_2131a40[0], 0);
    if (result != nullptr) {
      v18 = result[11];
      if (v18 != 0) {
        v19 = *v4;
        if ((__int64*)*v4 == v5) {
          goto LABEL_32;
        }
        v20 = (__int64*)*v4;
        while (*v20 != v18) {
          if (++v20 == v5) {
            goto LABEL_32;
          }
        }
        if (v20 == v5) {
        LABEL_32:
          v21 = v4[2];
          if ((unsigned __int64)v5 >= v21) {
            v23 = (char*)v5 - v19;
            v24 = ((__int64)v5 - v19) >> 3;
            v25 = v24 + 1;
            if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
            LABEL_50:
              GameRoutine_6c1f60();
            }
            v26 = v21 - v19;
            if (v26 >> 2 > v25) {
              v25 = v26 >> 2;
            }
            if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
              v27 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v27 = v25;
            }
            if (v27 != 0) {
              if (v27 >> 61 != 0) {
              LABEL_51:
                GameRoutine_60a210(result);
              }
              v28 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
            }
            else {
              v28 = 0;
            }
            v29 = v28 + 8 * v27;
            v30 = (char*)v5 - v19;
            v31 = (__int64)&v23[v28 + -8 * v24];
            *(_QWORD*)&v23[v28] = v18;
            v22 = (__int64)&v23[v28 + 8];
            result = (__int64*)memcpy(v31, v19, v30);
            *v4 = v31;
            v4[2] = v29;
            if (v19 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              result = (__int64*)nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v19);
            }
          }
          else {
            *v5 = v18;
            v22 = (__int64)(v5 + 1);
          }
          v4[1] = v22;
        }
      }
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f97a0(
    __int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = **(_QWORD**)(a1 + 8);
  v4 = game_util_Format("L_MasteryInfoItem%02d", *a3);
  GameRoutine_1560070((void*)&v8, v3, v4);
  result = v9;
  if (v9 != 0) {
    v6 = std___1___shared_weak_count_lock(v9);
    v7 = v8;
    result = v9;
    if (v9 != 0) {
      result = std___1___shared_weak_count___release_weak(v9);
    }
    if (v6 != 0 && v7 != 0) {
      result = LayoutAccessor_1562680(v7, "Accent_Off", 1.0);
    }
    else if (v6 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

bool game_facility_anonymous_ProcTrainingUnitMenu_OnInit_closure_Invoke_15f9930(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 88LL);
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v6 = v3;
  v5 = 241;
  return v2 == game_UnitPool_Find_6ead60(&v6, &v5);
}

__int64 game_facility_anonymous_ProcTrainingUnitMenu_CreateBind_closure_Invoke(
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
