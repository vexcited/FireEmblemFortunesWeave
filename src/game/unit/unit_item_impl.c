#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1599e20(_QWORD);
__int64 GameRoutine_66dd60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_6c9c00(_QWORD, _QWORD);
__int64 GameRoutine_6e8e50(_QWORD, _QWORD);
__int64 GameRoutine_6ed400(_QWORD);
__int64 GameRoutine_6ed540(_QWORD, _QWORD);
__int64 GameRoutine_6ed560(_QWORD, _QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_843780(_QWORD, _QWORD);
__int64 GameRoutine_8b0c90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_996d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb6230(_QWORD);
__int64 GameRoutine_eb6290(void);
__int64 UnitSkillList_84d140(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d340(_QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_RandomSeed_GetRange(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItem_Restore(_QWORD, _QWORD);
__int64 game_UnitPool_Count(_QWORD);
__int64 game_Unit_CanGrow(_QWORD, _QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_SkillList_CountActive(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2203490;
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern int GameData_21d97bc;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 UnitItem_6e6000(__int64 result, _DWORD* a2, _DWORD* a3);
__int64 UnitItem_6e6150(__int64 result, unsigned __int16* a2);
_QWORD* UnitItem_6e6280(_QWORD* result, _DWORD* a2);
__int64 UnitItem_6e63f0(__int64 result, _DWORD* a2);
__int64 UnitItem_6e6580(__int64 a1, __int64* a2);
__int64 UnitItem_6e66c0(__int64 a1, unsigned __int16* a2);
__int64 UnitItem_6e67e0(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e69b0(__int64 a1, __int64 a2);
__int64 UnitItem_6e6ab0(__int64 a1, __int64 a2);
__int64 UnitItem_6e6bc0(__int64 a1, __int64* a2);
__int64 UnitItem_6e6d00(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e6e30(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e7aa0(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e7ce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 UnitItem_6e7e00(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 UnitItem_6e7f30(__int64 result, _DWORD* a2);
__int64 UnitItem_6e8090(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e81c0(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e8300(__int64 result, unsigned __int16* a2);
__int64 UnitItem_6e8430(__int64 result, _DWORD* a2);
__int64 UnitItem_6e8560(__int64 result, unsigned __int8* a2, _WORD* a3,
                        int* a4);
__int64 UnitItem_6e86b0(__int64 result, unsigned __int8* a2, _WORD* a3);
__int64 UnitItem_6e8800(__int64 result, unsigned __int64* a2);
bool UnitItem_6e8bc0(unsigned __int16* a1, __int64 a2);
__int64 UnitItem_6e9140(unsigned __int16* a1);
__int64 UnitItem_6e91b0(__int64 a1, __int64 a2);
bool UnitItem_8439c0(unsigned int* a1, _QWORD* a2);
__int64 UnitItem_844700(__int64 a1, unsigned __int16* a2);
__int64 UnitItem_84bf80(__int64 a1, __int64* a2);

__int64 UnitItem_6e6000(__int64 result, _DWORD* a2, _DWORD* a3)
{
  unsigned int v3;
  __int64 v4;

  v3 = *a2 + 32 * *a3;
  if (v3 >= 0x400) {
    v3 = 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                  8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                        72) +
                                             2LL * v3 + 8));
  if (v4 != 0 && (*(_BYTE*)(v4 + 217) & 0x80) != 0) {
    **(_BYTE**)(result + 8) = 0;
  }
  return result;
}

__int64 UnitItem_6e6150(__int64 result, unsigned __int16* a2)
{
  **(_DWORD**)(result + 16) +=
      *(_DWORD*)(result + 8) *
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          90LL);
  return result;
}

_QWORD* UnitItem_6e6280(_QWORD* result, _DWORD* a2)
{
  _QWORD* v2;

  if ((*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (*a2 & 0xFFF)) +
                            24LL) +
                 12LL) &
       0xFFF) != 0) {
    v2 = result;
    result = *(_QWORD**)(result[1] + 32LL);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
    ++*(_DWORD*)v2[2];
  }
  return result;
}

__int64 UnitItem_6e63f0(__int64 result, _DWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                        8LL * (*a2 & 0xFFF)) +
                             24LL) +
                  1088LL);
  if (v2 != 0 && *(_WORD*)(*(_QWORD*)(v2 + 24) + 24LL) != 0) {
    v3 = *(_QWORD**)(*(_QWORD*)(result + 8) + 32LL);
    if (v3 != nullptr) {
      v4 = result;
      v5 = *(_QWORD*)(*(_QWORD*)(result + 8) + 32LL);
      v6 = *(_WORD*)(v2 + 16) & 0xFFF;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, int*))(
          *v3 + 48LL))((void*)v3, v5, &v6);
      result = v4;
    }
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

__int64 UnitItem_6e6580(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*a2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v2;
  return UnitSkillList_84d140(v3 + 1744, &v6, v4);
}

__int64 UnitItem_6e66c0(__int64 a1, unsigned __int16* a2)
{
  return UnitSkillList_84d340(
      *(_QWORD*)(a1 + 8) + 1744LL,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL) +
          8LL,
      *(_QWORD*)(a1 + 16));
}

__int64 UnitItem_6e67e0(__int64 result, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;

  v2 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL);
  if (*(_QWORD*)(v2 + 136) != *(_QWORD*)(v2 + 144)) {
    v3 = *(_QWORD*)(result + 8);
    result = UnitSkillList_84d340(v3 + 1744, v2 + 104, *(_QWORD*)(result + 16));
    if (*(_DWORD*)(v2 + 128) != 0) {
      v4 = *(_QWORD*)(v2 + 104);
      v5 = *(_QWORD*)(v2 + 112);
      v6 = (v5 - v4) >> 2;
      v7 = (__int64)(*(_QWORD*)(v3 + 1848) - *(_QWORD*)(v3 + 1840)) >> 2;
      if (v6 > v7) {
        v9 = 0;
        result = GameRoutine_66dd60(v3 + 1840, v6 - v7, &v9);
        v4 = *(_QWORD*)(v2 + 104);
        v5 = *(_QWORD*)(v2 + 112);
      }
      if (v5 != v4) {
        v8 = 0;
        do {
          *(_DWORD*)(*(_QWORD*)(v3 + 1840) + 4 * v8) |= *(_DWORD*)(v4 + 4 * v8);
          ++v8;
          v4 = *(_QWORD*)(v2 + 104);
        } while (v8 < (*(_QWORD*)(v2 + 112) - v4) >> 2);
      }
    }
  }
  return result;
}

__int64 UnitItem_6e69b0(__int64 a1, __int64 a2)
{
  return UnitSkillList_84d140(*(_QWORD*)(a1 + 8) + 1744LL, a2,
                              *(_QWORD*)(a1 + 16));
}

__int64 UnitItem_6e6ab0(__int64 a1, __int64 a2)
{
  return UnitSkillList_84d140(*(_QWORD*)(a1 + 8) + 1744LL, a2,
                              *(_QWORD*)(a1 + 16));
}

__int64 UnitItem_6e6bc0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*a2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v2;
  return UnitSkillList_84d140(v3 + 1744, &v6, v4);
}

__int64 UnitItem_6e6d00(__int64 result, unsigned __int16* a2)
{
  if ((*((_BYTE*)a2 + 3) & 1) != 0) {
    **(_WORD**)(result + 8) += *(
        _WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                2LL * *(unsigned __int8*)(result + 16) + 126);
  }
  return result;
}

__int64 UnitItem_6e6e30(__int64 result, unsigned __int16* a2)
{
  _WORD* v2;
  __int64 v3;

  v2 = *(_WORD**)(result + 8);
  v3 = *GameData_212c878[0];
  v2[322] += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                    8LL * *a2) +
                         108LL) >>
             ((*((_BYTE*)a2 + 3) & 8) != 0);
  v2[326] += *(__int16*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 110LL) >>
             ((*((_BYTE*)a2 + 3) & 8) != 0);
  v2[330] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 112LL);
  v2[334] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 114LL);
  v2[338] += *(__int16*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 116LL) >>
             ((*((_BYTE*)a2 + 3) & 8) != 0);
  v2[342] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 118LL);
  v2[346] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 120LL);
  v2[350] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 122LL);
  v2[354] += *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 8LL * *a2) + 124LL);
  return result;
}

__int64 UnitItem_6e7aa0(__int64 result, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  int* v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
  if (v2 != 0) {
    if (*(unsigned __int8*)(v2 + 72) > 7u ||
        (v3 = *(_QWORD*)(v2 + 24), v4 = *(unsigned __int8**)(v3 + 488),
         v5 = *(unsigned __int8**)(v3 + 496), v4 == v5)) {
      LOBYTE(v2) = 0;
    }
    else {
      v6 = *(_QWORD*)(result + 8);
      LOBYTE(v2) = 0;
      v7 = v6 + 540;
      v8 = v6 + 514;
      do {
        v10 = *v4;
        v11 = v4[1];
        v12 = *(unsigned __int8*)(v7 + v10);
        if (v12 < v11) {
          v13 = (int*)GameData_21d99a8;
          v14 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          if ((int)v11 >= (int)v14) {
            v15 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          }
          else {
            v15 = v4[1];
          }
          if ((int)v14 >= 12) {
            v16 = 12;
          }
          else {
            v16 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
          }
          v17 = *(_DWORD*)(GameData_21d99a8 + 4LL * v15 - 4);
          v18 = *(_DWORD*)(GameData_21d99a8 + 4LL * v16 - 4);
          if (v18 >= v17) {
            v18 = v17;
          }
          if (v17 < 0) {
            v18 = 0;
          }
          *(_WORD*)(v8 + 2 * v10) = v18;
          if ((int)v14 < 1) {
            LOBYTE(v9) = 0;
          }
          else {
            v9 = 0;
            v19 = v13[(unsigned int)(v14 - 1)];
            if (v19 >= v18) {
              v19 = v18;
            }
            if (v18 >= *v13) {
              v20 = v19;
            }
            else {
              v20 = *v13;
            }
            while (1) {
              v21 = (unsigned int)(v9 + v14) >> 1;
              v22 = v13[v21];
              if (v20 == v22) {
                break;
              }
              if (v20 < v22) {
                LODWORD(v14) = (unsigned int)(v9 + v14) >> 1;
              }
              else {
                v9 = v21 + 1;
              }
              if (v9 >= (int)v14) {
                goto LABEL_6;
              }
            }
            LOBYTE(v9) = v21 + 1;
          }
        LABEL_6:
          *(_BYTE*)(v7 + v10) = v9;
        }
        v4 += 2;
        LOBYTE(v2) = v2 | (v12 < v11);
      } while (v4 != v5);
    }
  }
  **(_BYTE**)(result + 16) |= v2 & 1;
  return result;
}

__int64 UnitItem_6e7ce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 UnitItem_6e7e00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 UnitItem_6e7f30(__int64 result, _DWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)) +
       2LL * *(unsigned __int8*)(result + 16);
  v3 = *(__int16*)(v2 + 474);
  if (*(_WORD*)(v2 + 474) != 0) {
    v4 = result;
    result = GameRoutine_843780(a2, *(_QWORD*)(result + 8));
    if ((result & 1) != 0) {
      **(_DWORD**)(v4 + 24) += v3;
    }
  }
  return result;
}

__int64 UnitItem_6e8090(__int64 result, unsigned __int16* a2)
{
  **(_DWORD**)(result + 8) |=
      1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * *a2) +
                     73LL);
  return result;
}

__int64 UnitItem_6e81c0(__int64 result, unsigned __int16* a2)
{
  if ((*((_BYTE*)a2 + 3) & 2) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 337LL) &
       2) != 0) {
    ++**(_DWORD**)(result + 8);
  }
  return result;
}

__int64 UnitItem_6e8300(__int64 result, unsigned __int16* a2)
{
  **(_DWORD**)(result + 8) +=
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          89LL);
  return result;
}

__int64 UnitItem_6e8430(__int64 result, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_QWORD*)(v2 + 592) == *(_QWORD*)(result + 8)) {
    **(_QWORD**)(result + 16) = v2;
  }
  return result;
}

__int64 UnitItem_6e8560(__int64 result, unsigned __int8* a2, _WORD* a3, int* a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;

  v4 = *(_QWORD*)(result + 8);
  v5 = v4 + 2LL * *a2;
  v6 = *a4;
  v7 = (__int16)(*(_WORD*)(v5 + 468) + *a3);
  if (v7 <= -255) {
    v7 = -255;
  }
  if (v7 >= 255) {
    LOWORD(v7) = 255;
  }
  *(_WORD*)(v5 + 468) = v7;
  *(_BYTE*)(v4 + *a2 + 456) = v6;
  return result;
}

__int64 UnitItem_6e86b0(__int64 result, unsigned __int8* a2, _WORD* a3)
{
  __int64 v3;
  int v4;

  v3 = *(_QWORD*)(result + 8) + 2LL * *a2;
  v4 = (__int16)(*(_WORD*)(v3 + 468) + *a3);
  if (v4 <= -255) {
    v4 = -255;
  }
  if (v4 >= 255) {
    LOWORD(v4) = 255;
  }
  *(_WORD*)(v3 + 468) = v4;
  return result;
}

__int64 UnitItem_6e8800(__int64 result, unsigned __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *a2;
  if (*a2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = *a2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    *(_QWORD*)result = 0;
    return result;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v2) {
        if (v8[2] == v2) {
          goto LABEL_27;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        goto LABEL_25;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }

LABEL_27:
  v11 = v8[3];
  *(_QWORD*)result = 0;
  if (v11 != 0) {
    v12 = *(unsigned __int16*)(v11 + 16);
    *(_DWORD*)(result + 4) = 1;
    *(_WORD*)result = v12;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v12) +
                  73LL) == 17) {
      v13 = result;
      result = game_RandomSeed_GetRange(game_map_MapRandom_instance__ptr[0], 1,
                                        1000);
      *(_DWORD*)(v13 + 4) =
          *(_DWORD*)(v13 + 4) & 0xFFFFC00F | (16 * (result & 0x3FF));
    }
  }
  return result;
}

bool UnitItem_6e8bc0(unsigned __int16* a1, __int64 a2)
{
  __int64* v4;
  unsigned __int8* v5;
  __int64 v6;
  _BOOL8 result;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned __int64 v17;

  if (*a1 == 0) {
    return false;
  }
  v4 = GameData_212c878[0];
  if ((GameRoutine_6ed400(
           *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1)) &
       1) == 0) {
    return false;
  }
  v5 = *(unsigned __int8**)(*(_QWORD*)(*v4 + 64) + 8LL * *a1);
  v6 = v5[72];
  if ((_DWORD)v6 == 13) {
    return true;
  }
  if ((*((_BYTE*)a1 + 3) & 0x20) != 0 || (v5[336] & 8) != 0) {
    return false;
  }
  v8 = (1LL << v5[73]) & 0x7DC;
  if ((unsigned int)v6 <= 7 && v8 != 0) {
    return false;
  }
  if (((1LL << v6) & 0x20FF) == 0) {
    return false;
  }
  v10 = game_Unit_GetJob(a2);
  if ((unsigned int)v6 > 0xC ||
      (_DWORD)v6 != 7 && *(char*)(v10 + v6 + 398) < 0) {
    return false;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * *a1) + 24LL);
  v12 = *(unsigned __int8**)(v11 + 488);
  v13 = *(unsigned __int8**)(v11 + 496);
  if (v12 == v13) {
    return true;
  }
  do {
    v17 = *v12;
    if (v17 <= 0xC) {
      v14 = *(unsigned __int8*)(a2 + 540 + v17);
    }
    else {
      v14 = 0;
    }
    v15 = v12[1];
    v12 += 2;
    result = v14 >= v15;
  } while (v14 >= v15 && v12 != v13);
  return result;
}

__int64 UnitItem_6e9140(unsigned __int16* a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 result;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a1);
  if (*(_BYTE*)(v1 + 73) != 17) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 376);
  if (v2 == 0) {
    return 0;
  }
  v3 = *((_DWORD*)a1 + 1);
  if ((v3 & 0x3FF0) == 0) {
    return 0;
  }
  result = GameRoutine_996d60(v2, ((v3 >> 4) & 0x3FF) - 1, 1000);
  if (result != 0) {
    return *(_QWORD*)(result + 40);
  }
  return result;
}

__int64 UnitItem_6e91b0(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int16* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  unsigned __int8 v14;
  char v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  char v25;
  int v27;
  _BYTE v28[4];
  _BYTE v29[4];
  int v30;

  v2 = GameData_212c878[0];
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)a1);
  if (*(_BYTE*)(v3 + 72) != 14) {
    goto LABEL_66;
  }
  v4 = *(unsigned __int8*)(v3 + 73);
  v5 = (unsigned __int16*)a1;
  LOBYTE(a1) = 0;
  if (v4 > 0x11) {
    return a1 & 1;
  }
  if (((1 << v4) & 0x800C) != 0) {
    if (*(unsigned __int8*)(v3 + 88) >> ((*((_BYTE*)v5 + 3) & 8) != 0) == 0) {
      goto LABEL_66;
    }
  }
  else if (((1 << v4) & 0x10030) == 0) {
    if (v4 != 17) {
      return a1 & 1;
    }
    a1 = *(_QWORD*)(v3 + 376);
    if (a1 == 0) {
      return a1 & 1;
    }
    v6 = *((_DWORD*)v5 + 1);
    if ((v6 & 0x3FF0) == 0) {
      goto LABEL_66;
    }
    v7 = a2;
    a1 = GameRoutine_996d60(a1, ((v6 >> 4) & 0x3FF) - 1, 1000);
    if (a1 == 0) {
      return a1 & 1;
    }
    if (*(_QWORD*)(a1 + 40) == 0) {
      goto LABEL_66;
    }
    a2 = v7;
    v3 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v5);
  }
  v8 = a2;
  if ((GameRoutine_6ed400(v3) & 1) == 0) {
    goto LABEL_66;
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_66;
  }
  v9 = *(unsigned __int8*)(game_GameModeData_instance_ + 56);
  if (*(_BYTE*)(game_GameModeData_instance_ + 56) == 0) {
    goto LABEL_66;
  }
  LOBYTE(a1) = 0;
  v10 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v5);
  v11 = *(unsigned __int8*)(v10 + 73);
  if (v11 > 9) {
    if (v11 - 16 >= 2) {
      if (v11 == 10) {
        v30 = 15;
        if ((int)game_UnitPool_Count(&v30) >= 160) {
          goto LABEL_66;
        }
      }
      else {
        if (v11 != 15) {
          return a1 & 1;
        }
        if (v9 - 4 >= 3) {
          if (v9 == 2) {
            LOBYTE(a1) = *(_BYTE*)(game_GameModeData_instance_ + 92) & 1;
            return a1 & 1;
          }
          goto LABEL_66;
        }
        v14 = GameRoutine_6ed540(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v5),
                                 16);
        v15 = GameRoutine_6ed560(v10, 11);
        if (v15 != 11) {
          v28[0] = v15;
          LOBYTE(a1) = game_Unit_CanGrow(v8, v28);
          return a1 & 1;
        }
        if (v14 == 16) {
          goto LABEL_66;
        }
        if (v14 <= 0xCu) {
          LOBYTE(a1) = *(_BYTE*)(v8 + v14 + 540) != 12;
          return a1 & 1;
        }
      }
    LABEL_63:
      LOBYTE(a1) = 1;
      return a1 & 1;
    }
    v12 = v8;
    if (v9 > 6 || ((1 << v9) & 0x74) == 0) {
      goto LABEL_66;
    }
  LABEL_37:
    if (*(unsigned __int8*)(v10 + 73) > 0xFu) {
      if (v11 != 16) {
        a1 = UnitItem_6e9140(v5);
        if (a1 == 0) {
          return a1 & 1;
        }
        goto LABEL_63;
      }
      v21 = *(_QWORD*)(v10 + 24);
      v22 = *(_QWORD*)(v21 + 328);
      v23 = *(_QWORD*)(v21 + 336);
      if (v22 == v23) {
        goto LABEL_66;
      }
      v24 = 0;
      do {
        v25 = UnitItem_8439c0(v22, v8);
        v22 += 4;
        v24 |= v25;
      } while (v22 != v23);
      if ((v24 & 1) == 0) {
        goto LABEL_66;
      }
    }
    else {
      if (v11 == 4) {
        LOBYTE(a1) = (*(_WORD*)(v12 + 1440) & 0x80) != 0;
        return a1 & 1;
      }
      if ((GameRoutine_6c9c00(v12, *(_QWORD*)(v10 + 24) + 296LL) & 1) == 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *v5) + 24LL);
        v18 = *(_QWORD*)(v17 + 424);
        v19 = *(_QWORD*)(v17 + 432);
        if (v18 != v19) {
          v20 = v8;
          while ((game_HasSkill(v20 + 1360, v18) & 1) == 0) {
            v18 += 4;
            LOBYTE(a1) = 0;
            v20 = v8;
            if (v18 == v19) {
              return a1 & 1;
            }
          }
          goto LABEL_63;
        }
        goto LABEL_66;
      }
    }
    goto LABEL_63;
  }
  v12 = v8;
  if (v11 - 4 < 2) {
    if (v9 != 2 || (*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) != 0) {
      goto LABEL_66;
    }
    goto LABEL_37;
  }
  if (v11 == 2) {
    if (v9 != 7 && v9 != 2 ||
        (*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) != 0) {
      goto LABEL_66;
    }
    if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
            *(_DWORD*)(GameData_21f3d10 + 136) == 1 ||
        GameData_2203490 != 0) {
      LOBYTE(a1) = GameRoutine_1599e20(0);
    }
    else {
      v27 = *(__int16*)(v8 + 492);
      v29[0] = 0;
      LOBYTE(a1) = (int)game_Unit_GetParam(v12, v29, 1) > v27;
    }
  }
  else if (v11 == 3) {
    if (v9 == 7) {
      v13 = GameRoutine_eb6230(0);
      if (v13 < (int)GameRoutine_eb6290()) {
        goto LABEL_63;
      }
    }
  LABEL_66:
    LOBYTE(a1) = 0;
  }
  return a1 & 1;
}

bool UnitItem_8439c0(unsigned int* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL8 result;
  unsigned int v12;
  unsigned int v13;

  if (a2 == nullptr) {
    return false;
  }
  v2 = *a1;
  v3 = a2[134];
  v4 = (v2 >> 5) & 0x7F;
  if (v4 + 1 <= (unsigned __int64)((a2[135] - v3) >> 2) &&
      ((*(_DWORD*)(v3 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    return false;
  }
  v5 = v2 & 0xFFF;
  if ((v2 & 0xFFF) == 0) {
    return false;
  }
  v6 = a2[170];
  if (v4 + 1 > (unsigned __int64)((a2[171] - v6) >> 2) ||
      ((*(_DWORD*)(v6 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) == 0) {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5) +
                      576LL) != 0;
  }
  v7 = a2[175];
  v8 = a2[174];
  if (v7 == v8) {
    return false;
  }
  v9 = (v7 - v8) >> 2;
  v10 = 0;
  while (((*(_DWORD*)(v8 + 4 * v10) ^ (unsigned int)v2) & 0xFFF) != 0) {
    ++v10;
    result = false;
    if (v9 == v10) {
      return result;
    }
  }
  if (v10 < 0) {
    return false;
  }
  v12 = *(_DWORD*)(v8 + 4LL * (unsigned int)v10);
  v13 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                       8LL * (v12 & 0xFFF)) +
                            281LL);
  if (v13 <= 1) {
    v13 = 1;
  }
  return ((v12 & 0x1F000000) != 0 || ((v12 >> 19) & 0x1F) < v13 - 1) &&
         *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5) +
                    576LL) != 0;
}

__int64 UnitItem_844700(__int64 a1, unsigned __int16* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;
  unsigned __int8* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v3 = *(_DWORD**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  result = UnitItem_6e8bc0(a2, v2);
  if ((result & 1) == 0) {
    if (*a2 == 0 ||
        ((v7 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * *a2),
          (unsigned int)(v8 = v7[72]) <= 7)
             ? (v9 = v7[73] == 1)
             : (v9 = false),
         !v9)) {
    LABEL_7:
      result = GameRoutine_6e8e50(a2, v2);
      if ((result & 1) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    if ((unsigned int)(v8 - 5) > 1) {
      if ((*((_BYTE*)a2 + 3) & 0x20) != 0) {
        goto LABEL_7;
      }
    }
    else if ((*((_DWORD*)a2 + 1) & 0xF) * (unsigned int)v7[87] - 1 <
                 *((unsigned __int8*)a2 + 2) ||
             (*((_BYTE*)a2 + 3) & 0x20) != 0 ||
             (game_Unit_Unknown6c90c0(v2) & 1) == 0) {
      goto LABEL_7;
    }
    result = UnitItem_6e8bc0(a2, v2);
    if ((result & 1) == 0) {
      goto LABEL_7;
    }
  }

LABEL_8:
  v10 = *v3 & 0xFFF;
  if ((*v3 & 0xFFF) != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2) +
                     24LL);
    v12 = GameData_212c880[0];
    v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v10);
    result = GameRoutine_6fc510(v13);
    if ((result & 1) != 0 ||
        *(_BYTE*)(v13 + 273) != 0 &&
            ((v14 = *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8 * (*v3 & 0xFFFLL)),
              v15 = *(unsigned __int8*)(v14 + 104),
              v16 = *(unsigned __int8*)(v14 + 273),
              (unsigned int)(v15 - 5) >= 2)
                 ? (v17 = 0)
                 : (v17 = (*v3 >> 19) & 0x1F),
             v17 - ((*v3 >> 12) & 0x7F) + v16 < 1)) {
    LABEL_10:
      LOBYTE(v10) = 0;
    }
    else {
      v18 = *(_QWORD*)(v13 + 24);
      if (*(_BYTE*)(v18 + 1122) != 1) {
        goto LABEL_36;
      }
      v19 = *(_QWORD*)(v18 + 896);
      v20 = *(_QWORD*)(v18 + 904);
      if (v20 != v19) {
        while (1) {
          result = game_Unit_SkillList_CountActive(v19, v11 + 8);
          if ((_DWORD)result ==
              (unsigned int)((*(_QWORD*)(v19 + 40) - *(_QWORD*)(v19 + 32)) >>
                             2)) {
            break;
          }
          v19 += 96;
          if (v19 == v20) {
            goto LABEL_10;
          }
        }
      }
      v21 = *(_QWORD*)(v18 + 920);
      v22 = *(_QWORD*)(v18 + 928);
      if (v22 == v21) {
      LABEL_36:
        LOBYTE(v10) = 1;
      }
      else {
        do {
          result = game_Unit_SkillList_CountActive(v21, v11 + 8);
          v24 = *(_QWORD*)(v21 + 32);
          v23 = *(_QWORD*)(v21 + 40);
          v21 += 96;
          v10 = (unsigned __int64)(v23 - v24) >> 2;
          v9 = (_DWORD)result == (_DWORD)v10;
          LOBYTE(v10) = (_DWORD)result != (_DWORD)v10;
        } while (!v9 && v21 != v22);
      }
    }
  }
  **(_BYTE**)(a1 + 24) |= v10;
  return result;
}

__int64 UnitItem_84bf80(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  _BYTE* i;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  bool v30;
  unsigned int v31;
  int v33;
  int v34;
  __int64 v36;

  v2 = *(__int64**)(a1 + 8);
  v4 = *a2;
  v5 = 2;
  result = *v2;
  v7 = GameData_212c878[0];
  v8 = *GameData_212c878[0];
  for (i = (_BYTE*)(*v2 + 847);; i += 24) {
    if (*(_WORD*)(i - 19) != 0 && (*(i - 16) & 1) != 0) {
      v10 = *(_QWORD*)(v8 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(i - 19)) +
                              72LL) < 8u) {
        LODWORD(v5) = v5 - 2;
        goto LABEL_15;
      }
    }
    if (*(_WORD*)(i - 11) != 0 && (*(i - 8) & 1) != 0) {
      v10 = *(_QWORD*)(v8 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(i - 11)) +
                              72LL) < 8u) {
        break;
      }
    }
    if (*(_WORD*)(i - 3) != 0 && (*i & 1) != 0) {
      v10 = *(_QWORD*)(v8 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v10 +
                                         8LL * *(unsigned __int16*)(i - 3)) +
                              72LL) < 8u) {
        goto LABEL_15;
      }
    }
    v5 += 3;
    if (v5 == 32) {
      return result;
    }
  }
  LODWORD(v5) = v5 - 1;

LABEL_15:
  v11 = (__int64*)(*v2 + 828 + 8LL * (unsigned int)v5);
  v12 = *v11;
  v13 = HIDWORD(*v11);
  v36 = v12;
  if ((_WORD)v12 != 0) {
    if (*(unsigned __int8*)(*(_QWORD*)(v10 + 8LL * (unsigned __int16)v12) +
                            72LL) > 7u ||
        (v14 = *(_QWORD*)(result + 1744),
         (v15 =
              ((unsigned __int64)(unsigned int)GameData_21d97bc >> 5) & 0x7F) +
                 1 >
             (*(_QWORD*)(result + 1752) - v14) >> 2) ||
        (LOBYTE(v16) = v13, LODWORD(v17) = v12,
         ((*(_DWORD*)(v14 + 4LL * (unsigned int)v15) >> GameData_21d97bc) &
          1) == 0)) {
      v18 = (unsigned int)v5;
      game_UnitItem_Restore(v11, **(unsigned int**)(a1 + 16));
      result = *v2;
      v17 = *(_QWORD*)(*v2 + 8 * v18 + 828);
      v16 = HIDWORD(v17);
    }
  }
  else {
    LOBYTE(v16) = v13;
    LODWORD(v17) = v12;
  }
  result = game_Unit_CheckEquipment(result);
  v19 = *v2;
  v20 = *(_DWORD*)(*v2 + 416);
  if ((v20 & 0x10000000) == 0) {
    v21 = *v2;
    *(_DWORD*)(v19 + 416) = v20 | 0x10000000;
    GameRoutine_6c51e0(v21);
    GameRoutine_6c6da0(v19);
    result = GameRoutine_6c6ec0(v19);
    *(_DWORD*)(v19 + 416) &= ~0x10000000u;
    v19 = *v2;
  }
  if (GameData_22400f8 == 0 || v19 == 0 ||
      *(_BYTE*)(GameData_22400f8 + 8) != 1 ||
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) != 0) {
  LABEL_32:
    if (v19 == 0) {
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  v22 = *(_QWORD*)(v19 + 440);
  if (v22 != 0 && *(unsigned __int8*)(v22 + 16) <= 8u &&
      game_map_UnitFlags_instance_ != 0) {
    v23 = *(unsigned __int8*)(v19 + 2088);
    if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) & 1) != 0) {
      *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v23) |= 2u;
      v19 = *v2;
      goto LABEL_32;
    }
  }

LABEL_33:
  v24 = *(_QWORD*)(v19 + 440);
  if (v24 != 0) {
    v25 = *(_BYTE*)(v24 + 16);
    goto LABEL_36;
  }

LABEL_35:
  v25 = 9;

LABEL_36:
  if (((1 << v25) & 0xF1) != 0) {
    v26 = *(_QWORD*)(*v7 + 64);
    v27 = *(_QWORD*)(v26 + 8LL * (unsigned __int16)v12);
    v28 = *(unsigned __int8*)(v27 + 87);
    if (*(_BYTE*)(v27 + 87) != 0) {
      v29 = *(unsigned __int8*)(v27 + 72);
      v30 = v29 >= 7;
      v31 = v29 - 7;
      if ((v31 == 0 || !v30) && v31 <= 0xFFFFFFFD) {
        v33 = ((v13 & 0xF) * v28 - BYTE2(v12)) &
              ~((int)((v13 & 0xF) * v28 - BYTE2(v12)) >> 31);
        v34 = (v16 & 0xF) *
                  *(unsigned __int8*)(*(_QWORD*)(v26 +
                                                 8LL * (unsigned __int16)v17) +
                                      87LL) -
              BYTE2(v17);
        if (v34 <= 0 && v33 != (v34 & ~(v34 >> 31))) {
          return GameRoutine_8b0c90(v4, v19, &v36);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
