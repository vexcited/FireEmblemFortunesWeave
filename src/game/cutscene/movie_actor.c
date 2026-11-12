#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18d0ec0(_QWORD, _QWORD);
__int64 GameRoutine_18d1b90(_QWORD);
__int64 GameRoutine_b86660(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_cutscene_MovieActor_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c598[2];
__int64 MovieActor_Destructor(__int64 result);
__int64 MovieActor_DeletingDestructor(__int64 a1);
__int64 MovieActor_Unknown3(__int64 a1);
__int64*
GameRoutine_18d0ec0_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_18d0ec0");
__int64 GameHr_b86660(__int64);
__int64 Manager_18cfa40(__int64, __int64);
__int64 Manager_18cfba0(__int64);
__int64 nn_os_TryWaitLightEvent(__int64);
__int64 MovieActor_Unknown4(__int64 result, float a2, float a3);

__int64 MovieActor_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = result;
  *(_QWORD*)result = game_cutscene_MovieActor_vtable;
  if (*(_BYTE*)(result + 40) == 1) {
    result = GameRoutine_b86660(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL));
  }
  if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
    v2 = *(_QWORD*)(v1 + 32);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  return result;
}

__int64 MovieActor_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_cutscene_MovieActor_vtable;
  if (*(_BYTE*)(a1 + 40) == 1) {
    GameRoutine_b86660(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL));
  }
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

__int64 MovieActor_Unknown3(__int64 a1)
{
  __int64 result;

  result = GameRoutine_18d0ec0(*GameData_212c598[0] + 144, a1 + 16);
  if (result != 0) {
    return GameRoutine_18d1b90(*(_QWORD*)(result + 40));
  }
  return result;
}

__int64 MovieActor_Unknown4(__int64 result, float a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v10;
  char v12;

  v3 = result;
  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v5 = *(float*)(result + 8);
    v4 = *(float*)(result + 12);
    v6 = vabds_f32(v4, v5);
    if (v6 <= 0x1.0000000000000p-23f) {
      goto LABEL_17;
    }
    v7 = fabsf(v4);
    v8 = fabsf(v5);
    if (v7 >= v8) {
      v8 = v7;
    }
    if (v6 <= (float)(v8 * 0x1.0000000000000p-23f)) {
    LABEL_17:
      result = (__int64)GameRoutine_18d0ec0_alt1(
          (_QWORD*)(*GameData_212c598[0] + 144),
          (unsigned __int8*)(result + 16));
      if (result != 0) {
        result = nn_os_TryWaitLightEvent(*(_QWORD*)(result + 40) + 684LL);
        if ((result & 1) != 0) {
        LABEL_19:
          Manager_18cfba0(*GameData_212c598[0]);
          result = GameHr_b86660(
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) +
                         40LL));
          v12 = 0;
          goto LABEL_20;
        }
      }
    }
    else if (v4 > a2 && v4 <= a3) {
      goto LABEL_19;
    }
  }
  else {
    v10 = *(float*)(result + 8);
    if (v10 > a2 && v10 <= a3) {
      result = Manager_18cfa40(*GameData_212c598[0], result + 16);
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 +
                                                            32) -
                                                 8LL) +
                                      40LL) +
                           16LL) +
                48LL) = 0;
      v12 = 1;
    LABEL_20:
      *(_BYTE*)(v3 + 40) = v12;
    }
  }
  return result;
}

#pragma GCC visibility pop
