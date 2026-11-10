#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80bdc0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcFade_vtable[])();
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
__int64 ProcFade_Destructor(__int64 a1);
__int64 ProcFade_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void snd_findSlot_100a50(PSEUDO_X8, int*);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_sound_g_game_sound;
extern int GameData_21fa938;
extern int GameData_21fa93c;
extern int GameData_21fa940;
void snd_Fade_Fade_10c830(__int64, float);
__int64 ProcFade_Unknown2(__int64 a1);

__int64 ProcFade_Destructor(__int64 a1)
{
  int v2;
  int v3;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcFade_DeletingDestructor(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcFade_vtable;
  v2 = *(_DWORD*)(a1 + 536);
  if (v2 != 0) {
    v3 = GameData_224b6d8;
    *(_DWORD*)(a1 + 536) = v2 - 1;
    LODWORD(GameData_224b6d8) = v3 - 1;
  }
  GameRoutine_80bdc0(a1 + 488);
  game_ProcFadeView_instance_ = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 ProcFade_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int v17;
  int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  int v24;
  int v25;
  __int64 result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  int v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float v42;
  struct {
    _QWORD v43[25];
    __int64 v44;
    __int64 v45;
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
    __int64 vars18;
  } v43_;

  v1 = *(float*)(a1 + 168);
  v2 = *(float*)(a1 + 172);
  *(_BYTE*)(a1 + 185) = 0;
  if (v2 < v1) {
    v4 = v2 + (**(float (***)(__int64))(a1 + 160))(a1 + 160);
    if (*(float*)(a1 + 168) < v4) {
      v4 = *(float*)(a1 + 168);
    }
    *(float*)(a1 + 172) = v4;
  }
  v5 = *(float*)(a1 + 232);
  v6 = *(float*)(a1 + 236);
  *(_BYTE*)(a1 + 249) = 0;
  if (v6 < v5) {
    v7 = v6 + (**(float (***)(__int64))(a1 + 224))(a1 + 224);
    if (*(float*)(a1 + 232) < v7) {
      v7 = *(float*)(a1 + 232);
    }
    *(float*)(a1 + 236) = v7;
  }
  v8 = *(float*)(a1 + 300);
  v9 = *(float*)(a1 + 296);
  *(_BYTE*)(a1 + 313) = 0;
  if (v8 < v9) {
    v10 = v8 + (**(float (***)(__int64))(a1 + 288))(a1 + 288);
    if (*(float*)(a1 + 296) < v10) {
      v10 = *(float*)(a1 + 296);
    }
    *(float*)(a1 + 300) = v10;
  }
  v11 = *(float*)(a1 + 364);
  v12 = *(float*)(a1 + 360);
  *(_BYTE*)(a1 + 377) = 0;
  if (v11 < v12) {
    v13 = v11 + (**(float (***)(__int64))(a1 + 352))(a1 + 352);
    if (*(float*)(a1 + 360) < v13) {
      v13 = *(float*)(a1 + 360);
    }
    *(float*)(a1 + 364) = v13;
  }
  v14 = *(float*)(a1 + 428);
  v15 = *(float*)(a1 + 424);
  *(_BYTE*)(a1 + 441) = 0;
  if (v14 < v15) {
    v16 = v14 + (**(float (***)(__int64))(a1 + 416))(a1 + 416);
    if (*(float*)(a1 + 424) < v16) {
      v16 = *(float*)(a1 + 424);
    }
    *(float*)(a1 + 428) = v16;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v18 = (v17 & 8) != 0 ? 2 : 3;
    if ((v18 & v17) == 0) {
      v19 = *(float*)(a1 + 232);
      v20 = *(float*)(a1 + 236);
      *(_BYTE*)(a1 + 249) = 0;
      if (v20 < v19) {
        *(float*)(a1 + 236) = v19;
      }
    }
  }
  LODWORD(v21) = LANES128_OF(((__n128 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)(a1 + 224) + 16LL))(a1 + 224))
                     .n128_u32[3];
  LODWORD(v22) = LANES128_OF(((__n128 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)(a1 + 160) + 16LL))(a1 + 160))
                     .n128_u32[3];
  v23 = *(_DWORD*)(a1 + 536);
  if (v21 >= v22) {
    v22 = v21;
  }
  if (v22 >= 0x1.0000000000000p+0f) {
    if (v23 != 0) {
      goto LABEL_37;
    }
    v24 = 1;
  }
  else {
    if (v23 == 0) {
      goto LABEL_37;
    }
    v24 = -1;
  }
  v25 = GameData_224b6d8;
  *(_DWORD*)(a1 + 536) = v24 + v23;
  LODWORD(GameData_224b6d8) = v25 + v24;
LABEL_37:
  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v28 = v43_.vars10;
    v27 = v43_.vars18;
    v29 = v43_.vars8;
    v30 = v43_.v44;
    v31 = *(float*)(game_sound_g_game_sound + 592);
    v32 = *(unsigned __int8*)(game_sound_g_game_sound + 600);
    *(float*)(game_sound_g_game_sound + 596) = v31;
    if (v22 >= v31) {
      v33 = v31;
    }
    else {
      v33 = v22;
    }
    if (v32 == 0) {
      v22 = v33;
    }
    if (v31 != v22) {
      v43_.v44 = v30;
      v43_.v45 = v43_.vars0;
      v43_.vars0 = v29;
      v43_.vars10 = v28;
      v43_.vars18 = v27;
      v34 = result;
      *(float*)(result + 592) = v22;
      snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa938);
      v35 = snd_fnd_WeakHandle_get((__int64)v43_.v43);
      if (v35 != 0) {
        v36 = v35;
        v37 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
        snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v36 - 5552) + 112LL))(
            v36 - 5552, v43_.v43, v37);
        snd_Fade_Destroy_Fade(v43_.v43);
      }
      if ((*(_BYTE*)(v34 + 612) & 1) == 0) {
        snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa93c);
        v38 = snd_fnd_WeakHandle_get((__int64)v43_.v43);
        if (v38 != 0) {
          v39 = v38;
          v40 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
          snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
          (*(void (**)(__int64, _QWORD*, float))(
              *(_QWORD*)(v39 - 5552) + 112LL))(v39 - 5552, v43_.v43, v40);
          snd_Fade_Destroy_Fade(v43_.v43);
        }
      }
      snd_findSlot_100a50((void*)((__int64)v43_.v43), &GameData_21fa940);
      result = snd_fnd_WeakHandle_get((__int64)v43_.v43);
      if (result != 0) {
        v41 = result;
        v42 = 0x1.0000000000000p+0f - *(float*)(v34 + 592);
        snd_Fade_Fade_10c830((__int64)v43_.v43, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v41 - 5552) + 112LL))(
            v41 - 5552, v43_.v43, v42);
        return snd_Fade_Destroy_Fade(v43_.v43);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
