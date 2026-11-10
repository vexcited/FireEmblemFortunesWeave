#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157ac20(__int64, __int64, __int64, char);
__int64 GameRoutine_15baf60(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EquipMenuItem_SkillPool_Unknown55(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_15deb50(_QWORD, _QWORD, _QWORD);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 SkillChangeMenu_15b8900(_QWORD);
__int64 Unit_6cc580(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 EquipMenuItem_SkillPool_ACall(__int64 a1);

__int64 EquipMenuItem_SkillPool_ACall(__int64 a1)
{
  _QWORD* v1;
  int v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 result;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];
  _QWORD v27[25];

  v1 = *(_QWORD**)(a1 + 88);
  v3 = *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL);
  v4 = *(unsigned __int8*)(a1 + 104);
  if (v1 == nullptr || ((v5 = *(unsigned int*)(a1 + 108), v4 != 2)
                            ? (v6 = v1[159], v7 = v1[158])
                            : (v6 = v1[147], v7 = v1[146]),
                        ((v5 >> 5) & 0x7F) + 1 > (v6 - v7) >> 2)) {
    v8 = 0;
    if ((v3 & 1) == 0) {
      goto LABEL_7;
    }
  LABEL_10:
    if ((v8 & 1) != 0) {
      return 1;
    }
    snd_Fade_Fade_10c830(v27, 0.0f);
    snd_play_ff2d0((void*)(v26), "SE_SYS_Skill_Equip", "SE_SYS_Skill_Equip",
                   v27, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v27);
    v13 = *(_QWORD*)(a1 + 96);
    v14 = *(_QWORD*)(v13 + 304);
    *(_DWORD*)(v13 + 356) &= ~1u;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 240LL))(v14, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 248LL))(v14, 1);
    MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 0, 0);
    SkillChangeMenu_15b8900(*(_QWORD*)(a1 + 96));
  LABEL_16:
    v15 = *(_QWORD**)(a1 + 96);
    v16 = v15[38];
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 1080LL))(v16);
    }
    v17 = v15[39];
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 1080LL))(v17);
    }
    result = v15[40];
    if (result != 0) {
      goto LABEL_21;
    }
    return result;
  }
  v8 = (*(_DWORD*)(v7 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1;
  if ((v3 & 1) != 0) {
    goto LABEL_10;
  }
LABEL_7:
  if (v8 != 0) {
    snd_Fade_Fade_10c830(v27, 0.0f);
    snd_play_ff2d0((void*)(v26), "SE_SYS_Skill_Remove", "SE_SYS_Skill_Remove",
                   v27, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v27);
    GameRoutine_15deb50(*(unsigned __int8*)(*(_QWORD*)(a1 + 96) + 376LL),
                        *(_QWORD*)(*(_QWORD*)(a1 + 96) + 360LL), a1 + 108);
    goto LABEL_16;
  }
  if (v1 == nullptr ||
      (v4 != 2 ? (v10 = 5, v11 = 163, v12 = 162)
               : (v27[0] = 32,
                  v10 = game_UnitSkillList_GetMaxValue(v1 + 218, v27) + 3,
                  v11 = 151, v12 = 150),
       v10 <= (int)((v1[v11] - v1[v12]) >> 2))) {
    snd_Fade_Fade_10c830(v27, 0.0f);
    snd_play_ff2d0((void*)(v26), "SE_SYS_Decide_L_Next", "SE_SYS_Decide_L_Next",
                   v27, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v27);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
    v22 = *(_QWORD*)(a1 + 96);
    v23 = *(_QWORD*)(v22 + 304);
    *(_DWORD*)(v22 + 356) |= 1u;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v23 + 240LL))(v23, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v23 + 248LL))(v23, 0);
    MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96), 0, 0);
    return 0;
  }
  snd_Fade_Fade_10c830(v27, 0.0f);
  snd_play_ff2d0((void*)(v26), "SE_SYS_Skill_Equip", "SE_SYS_Skill_Equip", v27,
                 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v27);
  v18 = *(_QWORD*)(a1 + 96);
  v19 = *(_QWORD*)(v18 + 360);
  if (v19 != 0) {
    v20 = a1 + 108;
    v21 = *(_QWORD*)(v18 + 360);
    if (*(_BYTE*)(v18 + 376) == 2) {
      Unit_6cc580(v21, v20, 1);
    }
    else {
      Unit_6cc9e0(v21, v20, 1);
    }
    game_Unit_Unknown6c4610(v19);
    *(_WORD*)(v19 + 20) |= 1u;
    v18 = *(_QWORD*)(a1 + 96);
  }
  v24 = *(_QWORD*)(v18 + 304);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 1080LL))(v24);
  }
  v25 = *(_QWORD*)(v18 + 312);
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 1080LL))(v25);
  }
  result = *(_QWORD*)(v18 + 320);
  if (result != 0) {
  LABEL_21:
    (*(void (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
    return 0;
  }
  return result;
}

__int64 EquipMenuItem_SkillPool_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  char v11;

  GameRoutine_15baf60(a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_8;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_8;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_5;
    }
  LABEL_8:
    v4 = &ui_LayoutAccessor_empty_;
    v5 = *(_QWORD**)(a1 + 88);
    if (v5 == nullptr) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v6 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v6);
  if (v4 == nullptr) {
    goto LABEL_8;
  }

LABEL_5:
  v5 = *(_QWORD**)(a1 + 88);
  if (v5 != nullptr) {
  LABEL_9:
    v7 = *(unsigned int*)(a1 + 108);
    if (*(_BYTE*)(a1 + 104) == 2) {
      v8 = v5[147];
      v9 = v5[146];
    }
    else {
      v8 = v5[159];
      v9 = v5[158];
    }
    if (((v7 >> 5) & 0x7F) + 1 <= (v8 - v9) >> 2) {
      v10 = (*(_DWORD*)(v9 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1;
      goto LABEL_15;
    }
  }

LABEL_13:
  v10 = 0;

LABEL_15:
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  return GameRoutine_157ac20((__int64)v4, (__int64)"IconEquip", v10, v11 & 1);
}

#pragma GCC visibility pop
