#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_224ae18;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern int GameData_224ae10;
__int64 ForceContinueBGMBinder_DeletingDestructor(__int64 a1);
__int64 ForceContinueBGMBinder_Unknown4(__int64 result);
__int64 ForceContinueBGMBinder_Unknown5(__int64 result);

__int64 ForceContinueBGMBinder_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  if (GameData_224ae18 == a1) {
    GameData_224ae18 = 0;
    GameData_224ae10 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1);
}

__int64 ForceContinueBGMBinder_Unknown4(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(result + 20) = *(_BYTE*)(game_sound_g_game_sound + 3128);
  }
  return result;
}

__int64 ForceContinueBGMBinder_Unknown5(__int64 result)
{
  if (game_sound_g_game_sound != 0) {
    *(_BYTE*)(game_sound_g_game_sound + 3128) = *(_BYTE*)(result + 20);
  }
  return result;
}

#pragma GCC visibility pop
