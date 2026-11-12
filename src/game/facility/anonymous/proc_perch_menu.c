#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int game_facility_g_perch_view;
__int64 ProcPerchMenu_Unknown88(__int64 result);
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__attribute__((swiftcall)) void ProcPerchMenu_Unknown66(PSEUDO_X8 x8_);
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__attribute__((swiftcall)) void ProcPerchMenu_Unknown66(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  char v4;
  unsigned __int64 v5;
  _BYTE v6[15];

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v6[13] = 0;
  v4 = 42;
  v5 = 0x81E389B4E9BD99E7LL;
  *(_QWORD*)v6 = 0xE3BE81E3A2ADE6AELL;
  *(_QWORD*)&v6[5] = 0xA89CE68A82E3BE81LL;
  GameRoutine_7a8220_alt1(a1, &v4);
  if ((v4 & 1) != 0 && *(_QWORD*)&v6[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, *(__int64*)&v6[7]);
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v6[4] = 0;
    v4 = 24;
    *(_DWORD*)v6 = -1467488115;
    v5 = 0x99E9AE81E386B5E7LL;
    GameRoutine_7a8220_alt1(a1, &v4);
    if ((v4 & 1) != 0 && *(_QWORD*)&v6[7] != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, *(__int64*)&v6[7]);
    }
  }
}

__int64 ProcPerchMenu_Unknown88(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = *(_QWORD**)(result + 232);
  v2 = *(_QWORD**)(result + 240);
  if (v1 != v2) {
    v3 = result;
    v4 = 0;
    do {
      v5 = *v1;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 48LL))(*v1);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
        if ((result & 1) != 0) {
          if (v5 == *(_QWORD*)(v3 + 336)) {
            goto LABEL_9;
          }
          ++v4;
        }
      }
      ++v1;
    } while (v1 != v2);
  }
  v4 = -1;

LABEL_9:
  game_facility_g_perch_view = v4;
  return result;
}

#pragma GCC visibility pop
