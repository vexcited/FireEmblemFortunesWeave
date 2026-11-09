#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdc0c0[])();
extern __int64 (*game_zview_Time_vtable[])();
extern __int64 GameData_220f820;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int GameData_220f8f8;
__int64 Time_Destructor_d46c80(__int64 result);

__int64 Time_Destructor_d46c80(__int64 result)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)result;
  *(_QWORD*)result = game_zview_Time_vtable;
  if (*(_BYTE*)(result + 16) == 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
    *(_BYTE*)(result + 16) = 0;
  }
  v2 = *(__int64**)(result + 8);
  *(_QWORD*)(result + 8) = 0;
  if (v2 != nullptr) {
    v3 = *v2;
    v4 = fw_memory_g_heap_manager_ptr;
    if (*v2 != 0) {
      v5 = v2[1];
      if (v3 == v5) {
        goto LABEL_12;
      }
      do {
        v6 = *(_QWORD*)(v5 - 8);
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
        v5 -= 16;
      } while (v5 != v3);
      v7 = *v2;
      v2[1] = v3;
      v3 = v7;
      if (v7 != 0) {
      LABEL_12:
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v3);
      }
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v2);
  }
  *v1 = GameData_1fdc0c0;
  if ((_QWORD*)GameData_220f820 == v1) {
    GameData_220f820 = 0;
    GameData_220f8f8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
