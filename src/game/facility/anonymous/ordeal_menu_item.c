#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120e900(void);
__int64 GameRoutine_17ab020(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9608;
extern __int64 GameData_2243f70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char game_facility_g_unknown_2174af0;
extern char game_facility_g_unknown_2259368;
void OrdealMenuItem_Unknown24();
__int64 OrdealMenuItem_Unknown38(_QWORD* a1);

void OrdealMenuItem_Unknown24()
{
  game_facility_g_unknown_2174af0 = 1;
  game_facility_g_unknown_2259368 = 0;
}

__int64 OrdealMenuItem_Unknown38(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  game_facility_g_unknown_2259368 = 1;
  game_facility_g_unknown_2174af0 = 0;
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  if (GameData_2243f70 != 0 && GameData_21c9608 != 0) {
    v4 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v4 & 8) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v4 | 8;
      GameRoutine_120e900();
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  else {
    v5 = 0;
  }
  v10 = 5;
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v8 = v5;
  v11 = v8;
  v12 = v8 + 1;
  v13 = v8 + 1;
  GameRoutine_17ab020(v3, &v10, 0);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
  return 9;
}

#pragma GCC visibility pop
