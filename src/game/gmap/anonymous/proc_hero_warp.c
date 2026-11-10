#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_22532c0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcHeroWarp_vtable[])();
__int64 ProcHeroWarp_Destructor(__int64 a1);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
extern __int64 GameData_22400f8;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
void ProcHeroWarp_Unknown2(__int64 a1);

__int64 ProcHeroWarp_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcHeroWarp_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  *((_QWORD*)&GameData_22532c0 + 1) = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcHeroWarp_Unknown2(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int16 v11;
  float v12;
  _BYTE* v13;
  unsigned __int8 v14;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 1.0f) {
      goto LABEL_15;
    }
  }
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 2) {
  LABEL_15:
    GameRoutine_14a1390(a1 + 168, 1);
    v6 = *(unsigned __int8**)(a1 + 16);
    *(_DWORD*)(a1 + 184) = 0;
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    v11 = 8;
    goto LABEL_22;
  }
  v12 = *(float*)(a1 + 184) - *(float*)(game_script_hub_g_frame_counter + 160);
  *(float*)(a1 + 184) = v12;
  if (v12 <= 0.0f) {
    v13 = *(_BYTE**)(a1 + 16);
    if (v13 != nullptr) {
      v14 = *v13 - 9;
      if (v14 <= 7u && ((0xE7u >> v14) & 1) != 0) {
        v11 = 128;
      LABEL_22:
        *(_WORD*)(a1 + 136) |= v11;
      }
    }
  }
}

#pragma GCC visibility pop
