#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda1_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda1_Invoke(
    __int64 a1, __int64* a2);
__int64
game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda2_Invoke(
    __int64 a1, __int64* a2);

_BYTE* SkillReinforceSceneDiff_1476ca0(_QWORD* a1, __int64* a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  _BYTE* result;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v4 = a1 + 1;
  if (v4 != a2) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_64dde0();
    }
    else if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v4, a2[2], a2[1]);
    }
    else {
      v6 = *a2;
      v7 = a2[2];
      v4[1] = a2[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  result = a1 + 4;
  if (a1 + 4 == a3) {
  LABEL_13:
    if (a1[10] == 0) {
      return result;
    }
    goto LABEL_14;
  }
  if ((*result & 1) != 0) {
    result = (_BYTE*)GameRoutine_64dde0();
    goto LABEL_13;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    result = (_BYTE*)GameRoutine_64df20(result, a3[2], a3[1]);
    if (a1[10] == 0) {
      return result;
    }
  }
  else {
    v9 = *a3;
    v10 = a3[2];
    a1[5] = a3[1];
    a1[6] = v10;
    *(_QWORD*)result = v9;
    if (a1[10] == 0) {
      return result;
    }
  }

LABEL_14:
  v11 = (_QWORD*)a1[9];
  if (v11 != nullptr) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = v11;
      v11 = (_QWORD*)*v11;
      v15 = (_QWORD*)v14[10];
      if (v15 == v14 + 6) {
        v16 = 32;
      }
      else {
        if (v15 == nullptr) {
          goto LABEL_25;
        }
        v16 = 40;
      }
      (*(void (**)(void))(*v15 + v16))();
    LABEL_25:
      if ((v14[2] & 1) != 0) {
        v17 = v14[4];
        if (v17 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18, v17);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, v14);
    } while (v11 != nullptr);
  }
  v19 = a1[8];
  a1[9] = 0;
  if (v19 != 0) {
    v20 = v19 & 7;
    if (v19 >= 8) {
      v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      v21 = 0;
      do {
        *(_QWORD*)(a1[7] + 8 * v21) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 8) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 16) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 24) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 32) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 40) = 0;
        *(_QWORD*)(a1[7] + 8 * v21 + 48) = 0;
        v23 = a1[7] + 8 * v21;
        v21 += 8;
        *(_QWORD*)(v23 + 56) = 0;
      } while (v22 != v21);
    }
    else {
      v21 = 0;
    }
    if (v20 != 0) {
      v24 = 8 * v21;
      do {
        --v20;
        *(_QWORD*)(a1[7] + v24) = 0;
        v24 += 8;
      } while (v20 != 0);
    }
  }
  a1[10] = 0;
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Reinforce_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

__int64

game_facility_SkillReinforceSceneDiff_LoadCharacter_Educate_lambda2_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
