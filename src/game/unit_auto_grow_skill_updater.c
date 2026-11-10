#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_67ef00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d980(_QWORD, _QWORD);
__int64 Unit_6cc580(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc9e0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2022c10[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
__int64 game_UnitAutoGrowSkillUpdater_Update(__int64* a1);
__int64 game_UnitAutoGrowSkillUpdater_Update_lambda0_Invoke(__int64 result,
                                                            __int64 a2);

__int64 game_UnitAutoGrowSkillUpdater_Update(__int64* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int* v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  char v22;
  int v23;
  int v24;
  __int64 v25;
  char v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[4];
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v1 = *a1;
  v42 = 0;
  v43 = 0;
  v41 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v44 = 0;
  v51 = 0;
  v52 = 0;
  result = UnitSkillList_84cf20(&v41, v1 + 1072, 1);
  v4 = a1[5];
  v5 = a1[6];
  if (v4 == v5) {
    v7 = v45;
    v8 = v46;
  }
  else {
    v6 = 0;
    do {
      result = UnitSkillList_84d980(&v41, v4);
      v4 += 4;
      v6 |= result;
    } while (v4 != v5);
    v7 = v45;
    v8 = v46;
    if ((v6 & 1) != 0) {
      v51 = 0;
      v52 = 0;
      if ((int)((unsigned __int64)(v46 - v45) >> 2) >= 1) {
        v9 = (int)((v46 - v45) >> 2);
        v10 = v9 <= 1 ? 1LL : (int)((v46 - v45) >> 2);
        v11 = *GameData_212c880[0];
        if (v9 >= 2) {
          v17 = (int*)(v45 + 4);
          v12 = 0;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v16 = 0;
          do {
            v16 += 2;
            v18 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*(v17 - 1) & 0xFFF));
            v19 = v15 | (1 << *(_BYTE*)(v18 + 104));
            v20 = *(_BYTE*)(v18 + 250);
            LOWORD(v51) = v19;
            v21 = (1LL << v20) | v14;
            v22 = *(_BYTE*)(v18 + 115);
            v52 = v21;
            HIDWORD(v51) = (1 << v22) | v13;
            v23 = *(unsigned __int16*)(*(_QWORD*)(v18 + 24) + 1064LL) | v12;
            WORD1(v51) = v23;
            v24 = *v17;
            v17 += 2;
            v25 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (v24 & 0xFFF));
            v15 = v19 | (1 << *(_BYTE*)(v25 + 104));
            v26 = *(_BYTE*)(v25 + 250);
            LOWORD(v51) = v15;
            v14 = (1LL << v26) | v21;
            v27 = *(_BYTE*)(v25 + 115);
            v52 = v14;
            result = (unsigned int)(1 << v27);
            v13 = result | HIDWORD(v51);
            HIDWORD(v51) |= result;
            v12 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
            WORD1(v51) = v12;
          } while ((v10 & 0x7FFFFFFFFFFFFFFELL) != v16);
        }
        else {
          LOWORD(v12) = 0;
          v13 = 0;
          v14 = 0;
          LOWORD(v15) = 0;
          v16 = 0;
        }
        if ((v10 & 1) != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(v11 + 64) +
                           8LL * (*(_DWORD*)(v45 + 4 * v16) & 0xFFF));
          LOWORD(v51) = v15 | (1 << *(_BYTE*)(v28 + 104));
          v52 = (1LL << *(_BYTE*)(v28 + 250)) | v14;
          HIDWORD(v51) = (1 << *(_BYTE*)(v28 + 115)) | v13;
          WORD1(v51) = *(_WORD*)(*(_QWORD*)(v28 + 24) + 1064LL) | v12;
        }
      }
    }
  }
  for (; v7 != v8; v7 += 4) {
    v30 = *a1;
    v39[0] = GameData_2022c10;
    v39[1] = v7;
    v39[2] = a1;
    v31 = *(_QWORD*)(v30 + 392);
    v40 = v39;
    GameRoutine_67ef00(v31, v30, v39);
    result = (__int64)v40;
    if (v40 == v39) {
      v29 = 32;
    }
    else {
      if (v40 == nullptr) {
        continue;
      }
      v29 = 40;
    }
    result = (*(__int64 (**)(void*))(*v40 + v29))(v40);
  }
  v32 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v48 != 0) {
    v33 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v49 = v48;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v33 + v34);
  }
  if (v45 != 0) {
    v35 = *v32;
    v46 = v45;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v35 + v36);
  }
  if (v41 != 0) {
    v37 = *v32;
    v42 = v41;
    v38 = 128;
    if (*(_QWORD*)(v37 + 200) == 0) {
      v38 = 56;
    }
    return nn_mem_StandardAllocator_Free(v37 + v38);
  }
  return result;
}

__int64 game_UnitAutoGrowSkillUpdater_Update_lambda0_Invoke(__int64 result,
                                                            __int64 a2)
{
  _DWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = *(_DWORD**)(result + 8);
  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v2 & 0xFFF));
  if (*(_QWORD*)(*(_QWORD*)a2 + 48LL) == v4 && (*v2 & 0xFFF) != 0) {
    v5 = **(_QWORD**)(result + 16);
    result = GameRoutine_6fcb20(v4, v5 + 1840);
    if ((result & 1) != 0) {
      v6 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                          8LL * (*v2 & 0xFFF)) +
                               104LL);
      if (v6 == 2) {
        return Unit_6cc580(v5, v2, 0);
      }
      else if (v6 == 1) {
        return Unit_6cc9e0(v5, v2, 0);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
