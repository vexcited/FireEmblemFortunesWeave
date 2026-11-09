#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
extern __int64* GameData_21319d0[2];
extern int game_g_shared_system_skills;
__int64 SubSkillMenuItem_Unknown25(_QWORD* a1);
__int64 SubSkillMenuItem_Unknown58(__int64 a1);

__int64 SubSkillMenuItem_Unknown25(_QWORD* a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;

  v2 = 1;
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v3 = a1[1];
    v4 = a1[18];
    if (*(_QWORD*)(v3 + 152) != 0) {
      v5 = *(_QWORD*)(v3 + 152);
    }
    else {
      v5 = a1[1];
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        384, 16, 0);
    v7 = GameData_212c608[0];
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)v6 = v7 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    game_ProcInst_Register();
    *(_QWORD*)(v6 + 232) = 0;
    v8 = GameData_2130240[0];
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 224) = v6 + 232;
    *(_BYTE*)(v6 + 168) = 0;
    *(_BYTE*)(v6 + 172) = 0;
    *(_QWORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 336) = 0;
    *(_QWORD*)(v6 + 344) = 0;
    *(_QWORD*)(v6 + 320) = 0;
    *(_QWORD*)(v6 + 328) = 0;
    *(_QWORD*)(v6 + 304) = 0;
    *(_QWORD*)(v6 + 312) = 0;
    *(_QWORD*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 296) = 0;
    *(_QWORD*)(v6 + 352) = 0;
    *(_QWORD*)(v6 + 360) = v4;
    *(_QWORD*)(v6 + 368) = 0;
    *(_QWORD*)(v6 + 152) = 0;
    *(_QWORD*)(v6 + 160) = v8 + 2;
    *(_DWORD*)(v6 + 280) = 1065353216;
    v9 = GameData_21319d0[0];
    *(_BYTE*)(v6 + 376) = 1;
    *(_QWORD*)v6 = v9 + 2;
    *(_QWORD*)(v6 + 176) = v9 + 55;
    *(_QWORD*)(v6 + 184) = 0;
    GameRoutine_657850(v6, GameData_21319e0, "SkillChangeMenu", 1, v5);
    return 9;
  }
  return v2;
}

__int64 SubSkillMenuItem_Unknown58(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  char v9;
  int v11;

  v1 = *(_QWORD**)(a1 + 144);
  if (v1 == nullptr) {
    goto LABEL_9;
  }
  v2 = v1[218];
  v3 = v1[219] - v2;
  v11 = game_g_shared_system_skills & 0xFFF;
  v4 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v4 + 1 > v3 >> 2) {
    goto LABEL_10;
  }
  if (((*(_DWORD*)(v2 + 4LL * (unsigned int)v4) >>
        game_g_shared_system_skills) &
       1) == 0) {
    goto LABEL_10;
  }
  v5 = a1;
  v6 = game_HasActiveSkill_843420(&v11, v1 + 218);
  a1 = v5;
  if ((v6 & 1) == 0) {
    goto LABEL_10;
  }
  v7 = v1[55];
  v8 = v7 != 0 ? *(_BYTE*)(v7 + 16) : 9;
  if (((1 << v8) & 0xF1) != 0) {
  LABEL_9:
    v9 = 0;
  }
  else {
  LABEL_10:
    v9 = *(_BYTE*)(a1 + 82);
  }
  return v9 & 1;
}

#pragma GCC visibility pop
