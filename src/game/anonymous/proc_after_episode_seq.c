#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SpineModel_1919040(_QWORD*, _QWORD*);
__int64 GameConverge_8e7ca0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1abfafc;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
bool ProcAfterEpisodeSeq_19bcbf0(__int64 a1);
__int64 ProcAfterEpisodeSeq_19bd810(__int64 result, int a2, __int64 a3,
                                    __int64 a4);
__int64 game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3);

bool ProcAfterEpisodeSeq_19bcbf0(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_QWORD*)a1 == 0) {
    return false;
  }
  v2 = game_GameModeData_instance_;
  GameRoutine_682bc0(&v6, *(_QWORD*)(*(_QWORD*)a1 + 32LL));
  if ((GameConverge_8e7ca0(*(_QWORD*)(v2 + 176), v6) & 1) != 0 &&
          *(_QWORD*)(a1 + 16) == 0 ||
      *(_OWORD*)(a1 + 8) == 0) {
    return false;
  }
  v4 = *(_QWORD*)(a1 + 88);
  if (v4 != 0 && ((v5 = game_GameModeData_instance_,
                   GameRoutine_682bc0(&v6, *(_QWORD*)(v4 + 32)),
                   (GameConverge_8e7ca0(*(_QWORD*)(v5 + 176), v6) & 1) == 0) ||
                  *(_QWORD*)(a1 + 104) != 0)) {
    return *(_OWORD*)(a1 + 96) == 0;
  }
  else {
    return true;
  }
}

__int64 ProcAfterEpisodeSeq_19bd810(__int64 result, int a2, __int64 a3,
                                    __int64 a4)
{
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  const char* v12;
  char* v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;

  if (a3 == 0 || a4 == 0) {
    return result;
  }
  v6 = result;
  v8 = strlen(a3);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v8);
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v15[1] = v9;
    v16 = v10;
    v15[0] = v11 | 1;
  }
  else {
    LOBYTE(v15[0]) = 2 * v8;
    v10 = (char*)v15 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memcpy(v10, a3, v9);
LABEL_12:
  v10[v9] = 0;
  if (a2 != 0) {
    v12 = "01";
  }
  else {
    v12 = (const char*)&GameData_1abfafc;
  }
  result = GameRoutine_1a09ce0(v15, v12, 2);
  if ((v15[0] & 1) != 0) {
    v13 = v16;
  }
  else {
    v13 = (char*)v15 + 1;
  }
  if (v13 != nullptr) {
    result = ui_LayoutAccessor_FindTextBox(v6 + 256, v13);
    if (result != 0) {
      result = GameRoutine_156c5d0(result, a4, 0);
    }
  }
  if ((v15[0] & 1) != 0 && v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  return result;
}

__int64 game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD v7[2];

  v4 = spine_Slot_getData(a3);
  v7[0] = *(_QWORD*)(spine_SlotData_getName(v4) + 16);
  v7[1] = strlen(v7[0]);
  v5 = SpineModel_1919040((_QWORD*)(a2 + 1280), v7);
  if (v5 != nullptr) {
    *((_DWORD*)v5 + 22) = -1082130432;
    *((_DWORD*)v5 + 24) = 2;
  }
  return 1;
}

#pragma GCC visibility pop
