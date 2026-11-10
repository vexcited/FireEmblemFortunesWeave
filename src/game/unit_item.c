#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitPool_Count(int*);
__int64 game_Unit_GetJob(__int64);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212c878[6];
extern __int64 GameData_21c99b8;
bool UnitItem_6e8b20(unsigned __int16* a1);
bool UnitItem_6e8d00(unsigned __int16* a1, __int64 a2);
bool UnitItem_6e8e50(unsigned __int16* a1, __int64 a2);

bool UnitItem_6e8b20(unsigned __int16* a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1);
  v2 = *(unsigned int*)((char*)((_UNKNOWN*)0x60LL) +
                        game_g_shared_system_skills_ptr + 4);
  v3 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 8LL);
  v4 = (*(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL) - v3) >> 2;
  if (v4 >= ((v2 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v3 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    return false;
  }
  v6 = *(unsigned int*)((char*)((_UNKNOWN*)0x6CLL) +
                        game_g_shared_system_skills_ptr);
  return v4 >= ((v6 >> 5) & 0x7F) + 1 &&
             ((*(_DWORD*)(v3 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) != 0 ||
         (unsigned int)*(unsigned __int8*)(v1 + 72) - 5 < 2;
}

bool UnitItem_6e8d00(unsigned __int16* a1, __int64 a2)
{
  unsigned __int8* v2;
  unsigned int v3;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  char v11;
  char v12;
  int v13;
  int v14;
  int v15;

  if (a2 == 0 || *a1 == 0) {
    return false;
  }
  v2 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a1);
  v3 = v2[72];
  if (v3 > 7 || v2[73] != 1) {
    return false;
  }
  if (v3 - 5 <= 1) {
    if ((*((_DWORD*)a1 + 1) & 0xF) * (unsigned int)v2[87] - 1 >=
            *((unsigned __int8*)a1 + 2) &&
        (*((_BYTE*)a1 + 3) & 0x20) == 0) {
      v6 = a1;
      v7 = a2;
      v8 = game_g_shared_system_skills_ptr;
      v14 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v14) & 1) == 0) {
        v9 = v7;
        if (*(_WORD*)(v7 + 492) != 0 || *(_BYTE*)(v7 + 496) != 0 ||
            (v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8) & 0xFFF,
             v10 = game_HasSkill((_QWORD*)(v7 + 1744), (unsigned int*)&v15),
             v9 = v7, (v10 & 1) == 0)) {
          v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v8 + 4) & 0xFFF;
          v11 = game_HasSkill((_QWORD*)(v9 + 1744), (unsigned int*)&v13);
          a2 = v7;
          v12 = v11;
          a1 = v6;
          if ((v12 & 1) == 0) {
            return UnitItem_6e8bc0(a1, a2);
          }
        }
      }
    }
    return false;
  }
  if ((*((_BYTE*)a1 + 3) & 0x20) != 0) {
    return false;
  }
  return UnitItem_6e8bc0(a1, a2);
}

bool UnitItem_6e8e50(unsigned __int16* a1, __int64 a2)
{
  __int64* v2;
  unsigned __int8* v3;
  int v4;
  unsigned int v5;
  _BOOL8 result;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned __int16* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  unsigned int v23;
  unsigned int v24;
  unsigned __int64 v26;
  int v27;

  if (a2 == 0 || *a1 == 0) {
    return false;
  }
  v2 = GameData_212c878[0];
  v3 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1);
  v4 = v3[73];
  v5 = v3[72];
  if (v5 > 7 || ((1LL << v4) & 0x7DC) == 0) {
    return false;
  }
  if (v5 - 5 > 1) {
    if ((*((_BYTE*)a1 + 3) & 0x20) != 0) {
      return false;
    }
  }
  else {
    if ((*((_DWORD*)a1 + 1) & 0xF) * (unsigned int)v3[87] - 1 <
        *((unsigned __int8*)a1 + 2)) {
      return false;
    }
    if ((*((_BYTE*)a1 + 3) & 0x20) != 0) {
      return false;
    }
    v8 = a1;
    v9 = a2;
    v10 = game_g_shared_system_skills_ptr;
    v27 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v27) & 1) != 0) {
      return false;
    }
    v11 = v9;
    if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
      v27 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
      v12 = game_HasSkill((_QWORD*)(v9 + 1744), (unsigned int*)&v27);
      v11 = v9;
      if ((v12 & 1) != 0) {
        return false;
      }
    }
    v27 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v27) & 1) != 0) {
      return false;
    }
    a1 = v8;
    a2 = v9;
    v4 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v8) +
                             73LL);
  }
  v13 = a1;
  if (v4 == 10) {
    v14 = a2;
    v27 = 15;
    v15 = game_UnitPool_Count(&v27);
    a2 = v14;
    if (v15 > 159) {
      return false;
    }
  }
  v16 = a2;
  v17 = game_Unit_GetJob(a2);
  v18 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v13);
  v19 = *(unsigned __int8*)(v18 + 72);
  if ((unsigned int)v19 > 0xC ||
      (_DWORD)v19 != 7 && *(char*)(v17 + v19 + 398) < 0) {
    return false;
  }
  v20 = *(_QWORD*)(v18 + 24);
  v21 = *(unsigned __int8**)(v20 + 488);
  v22 = *(unsigned __int8**)(v20 + 496);
  if (v21 == v22) {
    return true;
  }
  do {
    v26 = *v21;
    if (v26 <= 0xC) {
      v23 = *(unsigned __int8*)(v16 + 540 + v26);
    }
    else {
      v23 = 0;
    }
    v24 = v21[1];
    v21 += 2;
    result = v23 >= v24;
  } while (v23 >= v24 && v21 != v22);
  return result;
}

#pragma GCC visibility pop
