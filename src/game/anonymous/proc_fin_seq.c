#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcFinSeq_vtable[])();
__int64 ProcFinSeq_Destructor(__int64 a1);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting;
__int64 ProcFinSeq_Unknown2(__int64 result);

__int64 ProcFinSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_anonymous_ProcFinSeq_vtable;
  if (*(_BYTE*)(a1 + 292) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 288));
    if (*(_BYTE*)(a1 + 292) == 1) {
      *(_BYTE*)(a1 + 292) = 0;
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    GameRoutine_155e140(a1 + 176);
    v2 = *(_QWORD*)(a1 + 160);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 2376) = 1;
    }
    v3 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(a1 + 160) = 0;
    *(_QWORD*)(a1 + 168) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  GameRoutine_155e140(a1 + 176);
  v4 = *(_QWORD*)(a1 + 272);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 224);
  GameRoutine_1563f90(a1 + 200, *(_QWORD*)(a1 + 208));
  v5 = *(_QWORD*)(a1 + 184);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 168);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcFinSeq_Unknown2(__int64 result)
{
  int v1;
  int v2;
  float v3;
  float v4;
  float v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int16 v11;
  __int64 v12;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v2 = 2)
           : (v2 = 3),
       (v2 & v1) != 0)) {
    if ((*(_BYTE*)(game_g_game_setting + 944) & 1) != 0 ||
        ((v3 = 0x1.e000000000000p+5f /
               (float)*(int*)(game_g_frame_clock + 476)) <= 0x0.0p+0f
             ? (v4 = 0x1.119ce00000000p-6f)
             : (v4 = v3 * 0x1.119ce00000000p-6f),
         v5 = *(float*)(result + 152) + (float)(v4 * 0x1.f400000000000p+9f),
         *(float*)(result + 152) = v5, v5 >= 0x1.3880000000000p+12f)) {
      v6 = *(unsigned __int8**)(result + 16);
      if (v6 != nullptr) {
        v7 = *v6;
        v8 = v7 > 0x10;
        v9 = (1 << v7) & 0x1CE00;
        if (!v8 && v9 != 0) {
          v11 = *(_WORD*)(result + 136) | 0x80;
          goto LABEL_18;
        }
      }
    }
    return result;
  }
  v12 = *(_QWORD*)(result + 8);
  if (v12 == 0) {
    return result;
  }
  while (*(_BYTE*)v12 != 2) {
    if (*(_BYTE*)v12 == 0) {
      return result;
    }
  LABEL_23:
    v12 += 64;
  }
  if (*(_DWORD*)(v12 + 32) != 1) {
    goto LABEL_23;
  }
  *(_QWORD*)(result + 16) = v12;
  v11 = *(_WORD*)(result + 136) & 0xFF7F;
LABEL_18:
  *(_WORD*)(result + 136) = v11;
  return result;
}

#pragma GCC visibility pop
