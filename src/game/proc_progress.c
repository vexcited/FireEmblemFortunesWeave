#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* GameRoutine_86b660(__int64, int);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_ProcProgress_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcProgress_Destructor(__int64 a1);
__int64 ProcProgress_DeletingDestructor(__int64 a1);
__int16* GameRoutine_8697c0(__int16* result, char, float);
__int64 Dir_70d7a0(_QWORD);
__int64 ScheduleNatives_869280(__int64 result, __int16*);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int16* ProcProgress_86b660(__int64 a1, int a2);
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_frame_clock;
__int16* ProcProgress_Unknown2(__int64 a1);

__int16* ProcProgress_86b660(__int64 a1, int a2)
{
  __int16 v2;
  __int16 v3;
  int v4;
  __int16 v5;
  __int64 v6;
  __int16* v7;
  float v8;
  __int16 v10;
  int v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;

  v2 = *(_WORD*)(a1 + 6);
  v3 = *(_WORD*)(a1 + 10);
  v10 = *(_WORD*)a1;
  v4 = *(_DWORD*)(a1 + 2);
  v12 = v2;
  v14 = v3;
  v11 = v4;
  v5 = *(_WORD*)(a1 + 8);
  v13 = v5;
  if (a2 != 0) {
    v14 = 0;
    v12 = v2 + a2 / 60;
    v13 = v5 + a2 % 60;
    Dir_70d7a0(&v10);
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    ScheduleNatives_869280(game_gmap_GmapClock_instance_, &v10);
    v6 = game_gmap_GmapClock_instance_;
  }
  else {
    v6 = 0;
  }
  if (v6 != 0) {
    v7 = (__int16*)(v6 + 32);
  }
  else {
    v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v7[1] * *v7 * v7[2] != 0 ||
      (v6 != 0 ? (v7 = (__int16*)(v6 + 8))
               : (v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       v6 == 0)) {
    v8 = 0.0;
  }
  else {
    v8 = *(float*)(v6 + 44);
  }
  return GameRoutine_8697c0(v7, 1, v8);
}

__int64 ProcProgress_Destructor(__int64 a1)
{
  float v1;
  float v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(float*)(a1 + 168);
  v1 = *(float*)(a1 + 172);
  *(_QWORD*)a1 = game_ProcProgress_vtable;
  if (v1 < v2) {
    GameRoutine_86b660(a1 + 152, *(_DWORD*)(a1 + 164));
  }
  v4 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v9 = v7 == v8;
    v10 = v5 - 1 + v6;
    v11 = v10 >> 7;
    v12 = v10 & 0x7F;
    v13 = 16 * (v7 - v8) - 1;
    v14 = *(_QWORD*)(v8 + 8 * v11);
    if (v9) {
      v13 = 0;
    }
    v15 = v14 + 32 * v12;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v15 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v4[21] = *(_QWORD*)(v15 + 24);
    v16 = *(_QWORD*)(v15 + 16);
    v4[27] = v5 - 1;
    v4[20] = v16;
    if ((unsigned __int64)(v13 - (v5 + v6) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v17 = *(_QWORD*)(v7 - 8);
      if (v17 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
        v7 = v4[24];
      }
      v4[24] = v7 - 8;
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcProgress_DeletingDestructor(__int64 a1)
{
  float v1;
  float v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(float*)(a1 + 168);
  v1 = *(float*)(a1 + 172);
  *(_QWORD*)a1 = game_ProcProgress_vtable;
  if (v1 < v2) {
    GameRoutine_86b660(a1 + 152, *(_DWORD*)(a1 + 164));
  }
  v4 = (_QWORD*)game_ProcGameSkipView_instance_;
  v5 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v9 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v10 = v8 == v9;
    v11 = v6 - 1 + v7;
    v12 = v11 >> 7;
    v13 = v11 & 0x7F;
    v14 = 16 * (v8 - v9) - 1;
    v15 = *(_QWORD*)(v9 + 8 * v12);
    if (v10) {
      v14 = 0;
    }
    v16 = v15 + 32 * v13;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v16 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v4[21] = *(_QWORD*)(v16 + 24);
    v17 = *(_QWORD*)(v16 + 16);
    v4[27] = v6 - 1;
    v4[20] = v17;
    if ((unsigned __int64)(v14 - (v6 + v7) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v18 = *(_QWORD*)(v8 - 8);
      if (v18 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19, v18);
        v8 = v4[24];
      }
      v4[24] = v8 - 8;
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v20 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v20 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v20, a1);
}

__int16* ProcProgress_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int16* result;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_14;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    *(_DWORD*)(a1 + 172) = *(_DWORD*)(a1 + 168);
    v6 = 0x1.0000000000000p+0f;
  }
  else {
  LABEL_14:
    v6 = 0x1.0000000000000p+0f;
    if ((float)(0x1.e000000000000p+5f /
                (float)*(int*)(game_g_frame_clock + 476)) <= 0x0.0p+0f) {
      v7 = 0x1.0000000000000p+0f;
    }
    else {
      v7 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    }
    v8 = *(float*)(a1 + 168);
    v9 = *(float*)(a1 + 172) + v7;
    if (v8 < v9) {
      v9 = *(float*)(a1 + 168);
    }
    *(float*)(a1 + 172) = v9;
    if (v9 < v8) {
      v10 = (float)(v9 / v8) + 0x0.0p+0f;
      v11 = v10 +
            (float)((float)(v9 *
                            (float)((float)(0x1.0000000000000p+0f -
                                            (float)((float)((float)(v8 - v9) *
                                                            (float)(v8 - v9)) /
                                                    (float)(v8 * v8))) -
                                    v10)) /
                    v8);
      if (v11 <= 0x1.0000000000000p+0f) {
        v12 =
            v10 +
            (float)((float)(v9 *
                            (float)((float)(0x1.0000000000000p+0f -
                                            (float)((float)((float)(v8 - v9) *
                                                            (float)(v8 - v9)) /
                                                    (float)(v8 * v8))) -
                                    v10)) /
                    v8);
      }
      else {
        v12 = 0x1.0000000000000p+0f;
      }
      if (v11 >= 0x0.0p+0f) {
        v6 = v12;
      }
      else {
        v6 = 0x0.0p+0f;
      }
    }
  }
  result = ProcProgress_86b660(
      a1 + 152,
      (int)(float)((float)(v6 * (float)*(int*)(a1 + 164)) + 0x0.0p+0f));
  if (*(float*)(a1 + 168) <= *(float*)(a1 + 172)) {
    v14 = *(unsigned __int8**)(a1 + 16);
    if (v14 != nullptr) {
      v15 = *v14;
      v16 = v15 > 0x10;
      v17 = (1 << v15) & 0x1CE00;
      if (!v16 && v17 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
