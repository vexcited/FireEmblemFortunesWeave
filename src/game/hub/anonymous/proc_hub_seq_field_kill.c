#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a96a0(float);
__int64 GameRoutine_d783a0(_QWORD, float);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqEncounterBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqFieldKill_vtable[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_220d638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212ec50[3];
float GameRoutine_d78a40(_QWORD);
float powf(_QWORD, float, float);
__int64 ProcHubSeqFieldKill_Destructor(__int64 a1);
__int64 ProcHubSeqFieldKill_DeletingDestructor(__int64 a1);
void ProcHubSeqFieldKill_Unknown3(__int64 a1);

__int64 ProcHubSeqFieldKill_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFieldKill_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqFieldKill_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqFieldKill_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqEncounterBase_vtable;
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

void ProcHubSeqFieldKill_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;

  v1 = a1;
  v2 = game_script_hub_g_frame_counter_ptr[0];
  v3 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         104LL) *
               16.683f) /
       1000.0f;
  if (*(_BYTE*)(a1 + 225) == 1) {
    v4 = 1.0f;
    if (*(_BYTE*)(a1 + 224) == 0) {
      v4 = 0.0f;
    }
    v5 = *(float*)(a1 + 228);
    v6 = fabsf(v3 / 0.05f);
    if (v5 <= v4) {
      if (v5 >= v4) {
        goto LABEL_10;
      }
      v5 = v6 + v5;
      if (v5 <= v4) {
        goto LABEL_10;
      }
    }
    else {
      v5 = v5 - v6;
      if (v5 >= v4) {
        goto LABEL_10;
      }
    }
    v5 = v4;
  LABEL_10:
    *(float*)(a1 + 228) = v5;
    v7 = powf(a1, v5, 0.5f);
    a1 = GameRoutine_7a96a0(v7 * 0.05f);
    v8 = *(_QWORD*)GameData_212dc38[0];
    v9 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1016LL);
    *(float*)(v8 + 1012) = -v7;
    *(float*)(v8 + 1008) = (float)(0.0f - v7) + v9;
  }
  if (*(_BYTE*)(v1 + 216) == 0) {
    return;
  }
  v10 = *(float*)(v1 + 220);
  v11 = fabsf(v3 / 1.1f);
  if (v10 > 0.0f) {
    v10 = v10 - v11;
    if (v10 >= 0.0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v10 = 0.0f;
    goto LABEL_18;
  }
  if (v10 < 0.0f) {
    v10 = v11 + v10;
    if (v10 > 0.0f) {
      goto LABEL_17;
    }
  }

LABEL_18:
  *(float*)(v1 + 220) = v10;
  **(float**)(GameData_220d638 + 16) = powf(a1, v10, 1.25f) * 0.3f;
  v12 = *GameData_212ec50[0];
  GameRoutine_d783a0(*(_QWORD*)(*GameData_212ec50[0] + 8), 0.0f);
  v13 = GameRoutine_d78a40(*(_QWORD*)(v12 + 8));
  if (v13 == 1.0f) {
    if (*(_BYTE*)(v12 + 16) != 1) {
      return;
    }
  }
  else {
    *(_BYTE*)(v12 + 16) = 1;
  }
  *(float*)(*(_QWORD*)v2 + 156LL) = v13;
}

#pragma GCC visibility pop
