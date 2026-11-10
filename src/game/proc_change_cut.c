#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a96a0(float);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcChangeCut_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
__int64 ProcChangeCut_Destructor(__int64 a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcChangeCut_DeletingDestructor(__int64 a1);
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void BattleUtil_7a96a0(float);
void ProcChangeCut_Unknown3(__int64 a1);

__int64 ProcChangeCut_Destructor(__int64 a1)
{
  float v1;
  _QWORD* v3;
  __int64 v4;

  v1 = *(float*)(a1 + 160);
  *(_QWORD*)a1 = game_ProcChangeCut_vtable;
  if (v1 > 0.0f) {
    GameRoutine_7a96a0(1.0f);
  }
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_8:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__n128 ProcChangeCut_DeletingDestructor(__int64 a1)
{
  float v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(float*)(a1 + 160);
  *(_QWORD*)a1 = game_ProcChangeCut_vtable;
  if (v1 > 0.0f) {
    GameRoutine_7a96a0(1.0f);
  }
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

void ProcChangeCut_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  __int128 v9;
  float v10;

  v1 = *(float*)(a1 + 160);
  if (v1 > 0x0.0p+0f) {
    v2 = *(float*)(a1 + 224);
    v3 = fabsf(
        (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          160LL) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f);
    if (v2 <= v1) {
      if (v2 >= v1) {
        goto LABEL_9;
      }
      v2 = v2 + v3;
      if (v2 <= v1) {
        goto LABEL_9;
      }
    }
    else {
      v2 = v2 - v3;
      if (v2 >= v1) {
      LABEL_9:
        *(float*)(a1 + 224) = v2;
        if (game_ProcGameSkipView_instance_ == 0) {
          goto LABEL_25;
        }
        v4 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
        if ((unsigned int)(v4 - 1) > 2) {
          goto LABEL_25;
        }
        v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v6 = (v5 & 8) != 0 ? 2 : 3;
        if ((v6 & v5) != 0) {
          goto LABEL_25;
        }
        if (v4 != 3) {
          if (game_ProcFadeView_instance_ == 0) {
            goto LABEL_25;
          }
          v7 = a1;
          v8 = game_ProcFadeView_instance_ +
               ((unsigned __int64)*(
                    unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                << 6);
          if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 +
                                                                          160);
          }
          else {
            v9 = *(_OWORD*)(v8 + 208);
          }
          if (*((float*)&v9 + 3) != 0x1.0000000000000p+0f) {
            v1 = *(float*)(v7 + 160);
            a1 = v7;
            goto LABEL_25;
          }
          LODWORD(v10) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                      (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                                         v8 + 160, *((float*)&v9 + 3)))
                             .n128_u32[3];
          v1 = *(float*)(v7 + 160);
          a1 = v7;
          if (v10 != 0x1.0000000000000p+0f) {
            goto LABEL_25;
          }
        }
        *(float*)(a1 + 224) = v1;
      LABEL_25:
        BattleUtil_7a96a0(*(float*)(a1 + 224) / v1);
        return;
      }
    }
    v2 = *(float*)(a1 + 160);
    goto LABEL_9;
  }
}

#pragma GCC visibility pop
