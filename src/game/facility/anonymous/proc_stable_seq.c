#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212cf88[4];
extern __int64 GameData_21c99a8;
__int64
game_facility_anonymous_ProcStableSeq_ReadyInstructionMind_closure_Invoke(
    __int64 result, int* a2);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__int64 FacilityUnitList_145d160(__int64*, __int64);
__int64 GameRoutine_1953c40(__int64);
__int64 GameRoutine_1954030(__int64, __int64);
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool RidePool_93cc20(_QWORD*, __int64);
extern __int64 (*GameData_203f930[])();
extern __int64 (*GameData_2062288[])();
extern __int64* GameData_212dcd0;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 game_facility_anonymous_ProcStableSeq_ReadyInstructionMind(__int64 a1);
__int64 ProcStableSeq_Unknown18();
__int64 ProcStableSeq_Destructor();

__int64 game_facility_anonymous_ProcStableSeq_ReadyInstructionMind(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  struct {
    __int64 v19[2];
    int v20;
    char gap20_[4];
    __int64 v21;
    __int64* v22;
  } v19_;
  _QWORD** v23;
  struct {
    _QWORD* v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    _BYTE* v28;
    int v29;
    char gap92_[4];
    __int64 v30;
    int v31;
  } v24_;
  int v32;

  v2 = *GameData_212dcd0;
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v19_.v19[0] = v3;
  v32 = 241;
  v4 = game_UnitPool_Find_6ead60(v19_.v19, &v32);
  if (v4 != nullptr) {
    v5 = *(_QWORD**)(v2 + 48);
    v6 = *(_QWORD*)(v2 + 64);
    *(_QWORD*)(v2 + 56) = v5;
    if ((unsigned __int64)v5 >= v6) {
      v8 = v6 - (_QWORD)v5;
      v9 = v8 >> 2;
      if ((unsigned __int64)(v8 >> 2) <= 1) {
        v9 = 1;
      }
      if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
        v10 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v10 = v9;
      }
      if (v10 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v11 = v4;
      v12 = fw_memory_g_heap_manager_ptr;
      v13 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      *v13 = v11;
      v7 = v13 + 1;
      *(_QWORD*)(v2 + 48) = v13;
      *(_QWORD*)(v2 + 56) = v13 + 1;
      *(_QWORD*)(v2 + 64) = &v13[v10];
      if (v5 != nullptr) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
      }
    }
    else {
      *v5 = v4;
      v7 = v5 + 1;
    }
    *(_QWORD*)(v2 + 56) = v7;
  }
  v19_.v22 = v19_.v19;
  v32 = -1;
  v19_.v19[0] = (__int64)GameData_2062288;
  v19_.v19[1] = (__int64)&v32;
  RidePool_93cc20(*(_QWORD**)(GameData_21f42d0 + 8), (__int64)v19_.v19);
  if (v19_.v22 == v19_.v19) {
    v15 = 32;
  }
  else {
    if (v19_.v22 == nullptr) {
      goto LABEL_22;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v19_.v22 + v15))((__int64)v19_.v22);
LABEL_22:
  v19_.v19[0] = 0;
  v19_.v19[1] = 0;
  *(_DWORD*)(v2 + 16) = v32;
  v19_.v21 = 0;
  LODWORD(v19_.v22) = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v27 = 0;
  v24_.v28 = nullptr;
  v24_.v30 = 0;
  v24_.v31 = 0;
  v19_.v20 = -1;
  v23 = &v24_.v24;
  v24_.v24 = nullptr;
  v24_.v29 = -1;
  GameRoutine_1953c40((__int64)v19_.v19);
  GameRoutine_1954030(a1, (__int64)v19_.v19);
  LODWORD(v19_.v22) = 0;
  v19_.v21 = 0;
  if ((v24_.v26 & 1) != 0) {
    *v24_.v28 = 0;
    v24_.v27 = 0;
  }
  else {
    LOWORD(v24_.v26) = 0;
  }
  GameRoutine_6e3b50((__int64)&v23, v24_.v24);
  v24_.v24 = nullptr;
  v24_.v25 = 0;
  v23 = &v24_.v24;
  if ((v24_.v26 & 1) != 0) {
    v16 = v24_.v28;
    if (v24_.v28 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v17);
      v16 = v24_.v24;
    }
  }
  else {
    v16 = nullptr;
  }
  return GameRoutine_6e3b50((__int64)&v23, v16);
}

__int64

game_facility_anonymous_ProcStableSeq_ReadyInstructionMind_closure_Invoke(
    __int64 result, int* a2)
{
  _DWORD* v2;
  __int64 v3;

  v2 = *(_DWORD**)(result + 8);
  if ((*v2 & 0x80000000) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL);
    if (*(_BYTE*)(v3 + ((__int64)*a2 << 6)) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                             8LL * *(unsigned __int8*)(v3 +
                                                       ((__int64)*a2 << 6))) +
                  108LL) == 0) {
      *v2 = *a2;
    }
  }
  return result;
}

__int64 ProcStableSeq_Unknown18()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(__int64**)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f930;
  v9_.v9[0] = GameData_203f930;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 ProcStableSeq_Destructor()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(__int64**)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f930;
  v9_.v9[0] = GameData_203f930;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

#pragma GCC visibility pop
