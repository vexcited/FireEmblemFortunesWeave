#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15deb50(_QWORD, _QWORD, _QWORD);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64
game_menu_anonymous_EquipMenuItem_SkillEquip_ACall_closure_Invoke(__int64 a1);
__int64
game_menu_anonymous_EquipMenuItem_SkillEquip_ACall_closure0_Invoke(__int64 a1);
__int64

game_menu_anonymous_EquipMenuItem_SkillEquip_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD**)(v1 + 88);
  if (v2 == nullptr) {
    return 1;
  }
  v3 = *(unsigned int*)(v1 + 108);
  if (*(_BYTE*)(v1 + 104) == 2) {
    v4 = v2[147];
    v5 = v2[146];
  }
  else {
    v4 = v2[159];
    v5 = v2[158];
  }
  if (((v3 >> 5) & 0x7F) + 1 > (v4 - v5) >> 2 ||
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v1 + 96);
  v7 = *(_QWORD*)(v6 + 304);
  *(_DWORD*)(v6 + 356) |= 1u;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 240LL))(v7, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 248LL))(v7, 0);
  MultiMenuSequence_17871c0(*(_QWORD*)(v1 + 96), 1, 0);
  return 2;
}

__int64

game_menu_anonymous_EquipMenuItem_SkillEquip_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD**)(v1 + 88);
  if (v2 == nullptr) {
    return 1;
  }
  v3 = *(unsigned int*)(v1 + 108);
  if (*(_BYTE*)(v1 + 104) == 2) {
    v4 = v2[147];
    v5 = v2[146];
  }
  else {
    v4 = v2[159];
    v5 = v2[158];
  }
  if (((v3 >> 5) & 0x7F) + 1 > (v4 - v5) >> 2 ||
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
    return 1;
  }
  GameRoutine_15deb50(*(unsigned __int8*)(*(_QWORD*)(v1 + 96) + 376LL),
                      *(_QWORD*)(*(_QWORD*)(v1 + 96) + 360LL), v1 + 108);
  v6 = *(_QWORD**)(v1 + 96);
  v7 = v6[38];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 1080LL))(v7);
  }
  v8 = v6[39];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 1080LL))(v8);
  }
  v9 = v6[40];
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 1080LL))(v9);
  }
  return 2;
}

#pragma GCC visibility pop
