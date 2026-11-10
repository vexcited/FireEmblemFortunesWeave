#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EscapeMenuItem_752b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 (*GameData_1f94310[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD, _QWORD,
                        _QWORD) __asm__("GameRoutine_60a310");
__int64
game_map_anonymous_SupportSkillEnumerator_EachImpl_closure_Invoke_72dfc0(
    __int64 a1, _DWORD* a2);
__int64
game_map_anonymous_SupportSkillEnumerator_EachImpl_closure_Invoke_72e660(
    __int64 a1, _DWORD* a2);
__int64 game_map_anonymous_SupportSkillEnumerator_EachImpl_closure0_Invoke(
    __int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64

game_map_anonymous_SupportSkillEnumerator_EachImpl_closure_Invoke_72dfc0(
    __int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 i;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  _QWORD v40[4];
  _QWORD* v41;
  char v42;

  result = game_HasSkill(**(_QWORD**)(a1 + 8) + 1744LL, a2);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(GameData_21c99b0 + 64);
  v6 = *(_QWORD*)(v5 + 8LL * (*a2 & 0xFFF));
  v7 = *(_QWORD*)(v6 + 24);
  if ((*(_BYTE*)(v7 + 1123) & 1) != 0) {
    return result;
  }
  v8 = *(unsigned __int8*)(v6 + 278);
  v9 = *(unsigned __int8*)(v6 + 279);
  if ((*a2 & 0xFFF) != 0) {
    v10 = GameRoutine_84edc0(**(_QWORD**)(a1 + 8) + 1744LL, v7 + 224);
    v11 = *a2 & 0xFFF;
    v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
  }
  else {
    v11 = 0;
    v10 = 0;
  }
  v12 = *(_QWORD*)(v5 + 8 * v11);
  if (v12 == 0) {
    goto LABEL_14;
  }
  v13 = *(unsigned __int8*)(v12 + 106);
  v14 = **(_QWORD**)(a1 + 8);
  if (v13 == 1) {
    v17 = *(_QWORD*)(v14 + 440);
    if (v17 == 0) {
      goto LABEL_17;
    }
    v17 = *(unsigned __int8*)(v17 + 16);
    if (v17 <= 3) {
      LODWORD(v17) = GameData_1a82ec0[v17];
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  if (v13 != 2) {
  LABEL_14:
    LODWORD(v17) = 0;
    goto LABEL_17;
  }
  v15 = *(_QWORD*)(v14 + 440);
  if (v15 != 0) {
    v16 = *(_BYTE*)(v15 + 16);
  }
  else {
    v16 = 9;
  }
  LODWORD(v17) = 1 << v16;
LABEL_17:
  v39 = v17;
  result = game_UnitPool_GetFirst(&v39);
  if (result != 0) {
    v18 = *(_QWORD*)(result + 432);
    v19 = result;
    if (v18 == 0) {
      v18 = *(_QWORD*)(result + 440);
      if (v18 != 0) {
        v20 = *(unsigned __int8*)(v18 + 16);
        if (v20 <= 8) {
          while (1) {
            v38 = v20 + 1;
            if (((v39 >> v20) & 2) != 0) {
              v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v20 + 1) + 556000);
              if (v18 != 0) {
                break;
              }
            }
            v20 = v38;
            if (v38 == 9) {
              goto LABEL_21;
            }
          }
        }
        else {
        LABEL_21:
          v18 = 0;
        }
      }
    }
    v21 = v10 + v9;
    while (1) {
    LABEL_24:
      v22 = v18;
      v23 = **(_QWORD**)(a1 + 8);
      if (v23 == 0) {
        goto LABEL_39;
      }
      v24 = *(char*)(v19 + 584);
      v25 = *(char*)(v19 + 585);
      result = EscapeMenuItem_752b40(
          (unsigned int)*(char*)(v23 + 584), (unsigned int)*(char*)(v23 + 585),
          *(unsigned int*)(v23 + 592), *(unsigned int*)(v23 + 592), v24, v25,
          *(unsigned int*)(v19 + 592), *(unsigned int*)(v19 + 592));
      if ((unsigned int)result < v8 || (int)result > v21) {
        goto LABEL_39;
      }
      v27 = *(__int64**)(a1 + 16);
      v42 = 0;
      v28 = *v27;
      v41 = v40;
      v40[0] = GameData_1f94310;
      v40[1] = v28;
      v40[2] = &v42;
      Unit_6c8a80(v19, v24, v25, v40);
      result = (__int64)v41;
      if (v41 == v40) {
        break;
      }
      if (v41 != nullptr) {
        v29 = 40;
      LABEL_34:
        result = (*(__int64 (**)(__int64))(*v41 + v29))((__int64)v41);
      }
      if (v42 == 1) {
        v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*a2 & 0xFFF)) +
                         24LL);
        v31 = *(_QWORD*)(v30 + 448);
        for (i = *(_QWORD*)(v30 + 456); v31 != i; v31 += 4) {
          v33 = *(_QWORD*)(a1 + 24);
          v40[0] = v19;
          v34 = *(_QWORD*)(v33 + 32);
          if (v34 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, _QWORD*, __int64))(
              *(_QWORD*)v34 + 48LL))(v34, v40, v31);
        }
      }
    LABEL_39:
      if (v22 == 0) {
        return result;
      }
      v18 = *(_QWORD*)(v22 + 432);
      v19 = v22;
      if (v18 == 0) {
        v35 = *(_QWORD*)(v22 + 440);
        v19 = v22;
        if (v35 != 0) {
          v36 = *(unsigned __int8*)(v35 + 16);
          v18 = 0;
          v19 = v22;
          if (v36 <= 8) {
            while (1) {
              v37 = v36 + 1;
              if (((v39 >> v36) & 2) != 0) {
                v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v36 + 1) + 556000);
                if (v18 != 0) {
                  break;
                }
              }
              ++v36;
              if (v37 == 9) {
                v18 = 0;
                v19 = v22;
                goto LABEL_24;
              }
            }
            v19 = v22;
          }
        }
      }
    }
    v29 = 32;
    goto LABEL_34;
  }
  return result;
}

__int64

game_map_anonymous_SupportSkillEnumerator_EachImpl_closure_Invoke_72e660(
    __int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  signed int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char v19;
  unsigned __int64 v20;
  int v21;
  signed int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  signed int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v35;
  __int64 v36;
  __int64 i;
  __int64 v38;

  result = game_HasSkill(**(_QWORD**)(a1 + 8) + 1744LL, a2);
  if ((result & 1) == 0) {
    return result;
  }
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v10 = *(_QWORD*)(v9 + 8LL * (*a2 & 0xFFF));
  v11 = *(_QWORD*)(v10 + 24);
  if ((*(_BYTE*)(v11 + 1123) & 1) != 0) {
    return result;
  }
  v12 = *(unsigned __int8*)(v10 + 278);
  v13 = *(unsigned __int8*)(v10 + 279);
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_84edc0(**(_QWORD**)(a1 + 8) + 1744LL, v11 + 224);
    v9 = *(_QWORD*)(*v8 + 64);
    v14 = *a2 & 0xFFF;
  }
  else {
    v14 = 0;
    result = 0;
  }
  v15 = *(_QWORD*)(v9 + 8 * v14);
  v16 = **(_QWORD**)(a1 + 8);
  if (v15 == 0) {
    goto LABEL_14;
  }
  v17 = *(unsigned __int8*)(v15 + 106);
  if (v17 == 1) {
    v20 = *(_QWORD*)(v16 + 440);
    if (v20 == 0) {
      goto LABEL_17;
    }
    v20 = *(unsigned __int8*)(v20 + 16);
    if (v20 <= 3) {
      LODWORD(v20) = GameData_1a82ec0[v20];
      goto LABEL_17;
    }
  LABEL_14:
    LODWORD(v20) = 0;
    goto LABEL_17;
  }
  if (v17 != 2) {
    goto LABEL_14;
  }
  v18 = *(_QWORD*)(v16 + 440);
  if (v18 != 0) {
    v19 = *(_BYTE*)(v18 + 16);
  }
  else {
    v19 = 9;
  }
  LODWORD(v20) = 1 << v19;
LABEL_17:
  if ((((unsigned int)v20 >> **(_BYTE**)(a1 + 16)) & 1) != 0 && v16 != 0) {
    v21 = *(char*)(v16 + 584);
    v22 = result + v13;
    v23 = *(char*)(v16 + 585);
    v24 = *(_DWORD*)(v16 + 592);
    v25 = **(_DWORD**)(a1 + 24);
    v26 = **(_DWORD**)(a1 + 32);
    if ((unsigned int)(v24 * v24) < 2) {
      v32 = v25 - v21;
      if (v25 - v21 < 0) {
        v32 = v21 - v25;
      }
      v33 = v26 - v23;
      if (v33 < 0) {
        v33 = -v33;
      }
      v29 = v33 + v32;
    }
    else if (v24 < 1) {
      v29 = 10000;
    }
    else {
      v27 = v24 + v23;
      v28 = v24 + v21;
      v29 = 10000;
      do {
        v30 = v26 - v23;
        LODWORD(result) = v25 - v21;
        LODWORD(v5) = v21;
        if (v26 - v23 < 0) {
          v30 = v23 - v26;
        }
        do {
          v5 = (unsigned int)(v5 + 1);
          if ((int)result >= 0) {
            v31 = result;
          }
          else {
            v31 = -(int)result;
          }
          result = (unsigned int)(result - 1);
          v6 = (unsigned int)(v31 + v30);
          if ((unsigned int)v6 < v29) {
            v29 = v6;
          }
        } while ((int)v5 < v28);
        ++v23;
      } while (v23 < v27);
    }
    if (v29 >= v12 && v29 <= v22 &&
        *(unsigned __int8*)(GameData_21ca300 + 18) >
            (unsigned int)(unsigned __int8)(v25 -
                                            *(_BYTE*)(GameData_21ca300 + 16)) &&
        *(unsigned __int8*)(GameData_21ca300 + 19) >
            (unsigned int)(unsigned __int8)(v26 -
                                            *(_BYTE*)(GameData_21ca300 + 17)) &&
        ((*(_DWORD*)(**(_QWORD**)(a1 + 40) + 4LL * ((v25 + 32 * v26) >> 5)) >>
          v25) &
         1) != 0) {
      v35 = *(_QWORD*)(v15 + 24);
      v36 = *(_QWORD*)(v35 + 448);
      for (i = *(_QWORD*)(v35 + 456); v36 != i; v36 += 4) {
        v38 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 32LL);
        if (v38 == 0) {
          GameRoutine_60a310_alt1(0, v5, v6, v7);
        }
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v38 + 48LL))(v38, v36);
      }
    }
  }
  return result;
}

__int64 game_map_anonymous_SupportSkillEnumerator_EachImpl_closure0_Invoke(
    __int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(unsigned __int8*)(*(_QWORD*)a2 + 61LL) >> **(_BYTE**)(result + 8)) &
       1) != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v5 = *(_QWORD*)(v4 + 32);
    v6 = *(_QWORD*)(v4 + 40);
    if (v5 != v6) {
      v7 = result;
      do {
        v8 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 32LL);
        if (v8 == 0) {
          GameRoutine_60a310_alt1(0, a2, a3, a4);
        }
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 48LL))(v8, v5);
        v5 += 4;
      } while (v5 != v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
