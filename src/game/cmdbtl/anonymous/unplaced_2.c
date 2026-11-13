#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void game_sound_PlayVibration(PSEUDO_X8,
                                                         __int64 result, char);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__n128 GameRoutine_159e540(__int64);
__n128 game_cmdbtl_anonymous_e70790(__int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ea58;
extern __int64* GameData_212f628[9];
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_cmdbtl_anonymous_e724e0(__int64 a1, char a2);

__int64 game_cmdbtl_anonymous_e724e0(__int64 a1, char a2)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  int* v7;
  __int64 v8;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  char v14;
  const char* v15;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v2 = *(_QWORD*)(*GameData_212ea58 + 640);
  if (v2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 88);
  v3 = *(_QWORD*)(v2 + 96);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = a1;
      v6 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
      a1 = v5;
      a2 = v6;
    }
  }
  v7 = *(int**)(v4 + 40);
  v8 = *(_QWORD*)(v4 + 48) - (_QWORD)v7;
  if ((unsigned __int64)(v8 >> 2) < 2) {
    return 0;
  }
  v10 = 0;
  while (v7[v10] != *(_DWORD*)(v2 + 48)) {
    if (v8 >> 2 == ++v10) {
      LODWORD(v10) = -1;
      break;
    }
  }
  v11 = (unsigned __int64)v8 >> 2;
  if ((_DWORD)v11 != 0) {
    if ((a2 & 1) != 0) {
      v12 = v10 - 1;
    }
    else {
      v12 = v10 + 1;
    }
    v13 = v7[(int)((v11 & ((v12 % (int)v11) >> 31)) + v12 % (int)v11)];
    if (v13 < 0) {
      return 0;
    }
  }
  else {
    v13 = *v7;
    if (v13 < 0) {
      return 0;
    }
  }
  *(_DWORD*)(v2 + 48) = v13;
  v14 = a2;
  game_cmdbtl_anonymous_e70790(a1);
  snd_Fade_Fade_10c830((__int64)&v17_.v17, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_LinkUnit_Change",
                 (__int64)"SE_SYS_LinkUnit_Change", (__int64)&v17_.v17, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&v17_.v17);
  game_sound_PlayVibration((void*)((__int64)&v17_.v17),
                           (__int64)"VIB_Cursor_Chara", 0);
  if ((v14 & 1) != 0) {
    v15 = "L_Link_Key_L";
  }
  else {
    v15 = "L_Link_Key_R";
  }
  LayoutAccessor_1560070((void*)(&v17_.v17),
                         (__int64*)(*GameData_212f628[0] + 24), (__int64)v15);
  GameRoutine_159e540((__int64)&v17_.v17);
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak(v17_.v18);
  }
  return 1;
}

#pragma GCC visibility pop
