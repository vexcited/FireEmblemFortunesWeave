#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
void BaseQuestMenu_Unknown85(__int64 a1);

void BaseQuestMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  snd_Fade_Fade_10c830(&v6, 0.0);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_QuestWindow_Open",
                 "SE_SYS_QuestWindow_Open", &v6, 0, 65537, 0, 0.0, 1.0);
  snd_Fade_Destroy_Fade(&v6);
  LayoutAccessor_1560070((void*)(&v6), a1 + 848, "L_Img");
  if (v7 != 0) {
    v2 = std___1___shared_weak_count_lock(v7);
    v4 = v6;
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
    if (v2 != 0 && v4 != 0) {
      LayoutAccessor_1562cf0(v4, "Img01");
      *(__n128*)&v3 = ui_LayoutAccessor_SetPaneVisible(v4, "N_State", 0);
    }
    else if (v2 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(v2, v3);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
}

#pragma GCC visibility pop
