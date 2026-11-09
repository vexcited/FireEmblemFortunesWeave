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
__int64 SubArtsMenuItem_Unknown25(_QWORD* a1);
__int64 SubArtsMenuItem_Unknown58(__int64 a1);

__int64 SubArtsMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v3 = a1[18];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v4 = *(_QWORD*)(v2 + 152);
  }
  else {
    v4 = a1[1];
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      384, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 224) = v5 + 232;
  v7 = GameData_2130240[0];
  *(_BYTE*)(v5 + 168) = 0;
  *(_BYTE*)(v5 + 172) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 336) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 320) = 0;
  *(_QWORD*)(v5 + 328) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = v3;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = v7 + 2;
  *(_DWORD*)(v5 + 280) = 1065353216;
  v8 = GameData_21319d0[0] + 2;
  *(_QWORD*)(v5 + 176) = GameData_21319d0[0] + 55;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)v5 = v8;
  *(_BYTE*)(v5 + 376) = 2;
  GameRoutine_657850(v5, GameData_21319e0, "SkillChangeMenu", 1, v4);
  return 9;
}

__int64 SubArtsMenuItem_Unknown58(__int64 a1)
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
