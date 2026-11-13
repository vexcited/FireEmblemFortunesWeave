#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_15a2880(__int64* result, __int64*, __int64*, __int64*);
__int64* game_821090(int);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64, __int64);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
extern __int64 game_GameModeData_instance_;
extern char* GameData_204f038[98];
__int64 game_gameui_157d910(char* a1, _QWORD* a2, unsigned __int8 a3);
bool game_gameui_15a2a40(__int64* a1, __int64* a2);

__int64 game_gameui_157d910(char* a1, _QWORD* a2, unsigned __int8 a3)
{
  const char* v6;
  bool v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((unsigned __int8)(a3 - 1) > 3u) {
    v6 = nullptr;
  }
  else {
    v6 = GameData_204f038[(unsigned __int8)(a3 - 1)];
    __asm__ volatile("" ::"r"(v6));
  }
  LayoutAccessor_1562060(a1, (__int64)"T_Rank", v6);
  {
    v7 = *a2 == 0 || a2[1] == 0;
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 || (v8 = a2 + 2, a2[a3 + 2] == 0)) {
    v11 = "None";
    return GameHr_1562680((__int64)a1, v11, 0x1.0000000000000p+0f);
  }
  v9 = game_821090(1);
  if (game_GameModeData_instance_ == 0 ||
      (v10 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v9)) == 0) {
    v11 = "CantTalk";
    return GameHr_1562680((__int64)a1, v11, 0x1.0000000000000p+0f);
  }
  v11 = "CantTalk";
  if (*(int*)(v10 + 32) >= 1) {
    v12 = 0;
    if (*a2 != 0) {
      if (a2[1] != 0) {
        v12 = v8[a3];
        __asm__ volatile("" ::"r"(v12));
      }
      v13 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
      LABEL_16:
        v14 = game_GameVariableTable_Find(
            *(_QWORD**)(v13 + 48),
            (unsigned __int64*)(*(_QWORD*)(v12 + 24) + 40LL));
        if (v14 != 0 && *(_DWORD*)(v14 + 32) != 0) {
          v11 = "Done";
          return GameHr_1562680((__int64)a1, v11, 0x1.0000000000000p+0f);
        }
      }
    }
    else {
      v13 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_16;
      }
    }
    if ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(
            v8[a3], (__int64)v11) != 0) {
      v11 = "CantTalk";
    }
    else {
      v11 = "CanTalk";
    }
  }
  return GameHr_1562680((__int64)a1, v11, 0x1.0000000000000p+0f);
}

bool game_gameui_15a2a40(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      {
        v13 = *a1;
        __asm__ volatile("" ::"r"(v13));
      }
      {
        v14 = a1[1];
        __asm__ volatile("" ::"r"(v14));
      }
      {
        v15 = *(unsigned __int16*)(v14 + 16) +
              10000 * (6 - *(unsigned __int8*)(v14 + 49));
        __asm__ volatile("" ::"r"(v15));
      }
      {
        v16 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v16));
      }
      {
        v17 = *(unsigned __int16*)(v16 + 16) +
              10000 * (6 - *(unsigned __int8*)(v16 + 49));
        __asm__ volatile("" ::"r"(v17));
      }
      if (v15 >= *(unsigned __int16*)(*a1 + 16) +
                     10000 * (6 - *(unsigned __int8*)(*a1 + 49))) {
        if (v17 < v15) {
          a1[1] = v16;
          *(a2 - 1) = v14;
          {
            v25 = *a1;
            __asm__ volatile("" ::"r"(v25));
          }
          {
            v24 = a1[1];
            __asm__ volatile("" ::"r"(v24));
          }
          if (*(unsigned __int16*)(v24 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v24 + 49)) <
              *(unsigned __int16*)(*a1 + 16) +
                  10000 * (6 - *(unsigned __int8*)(*a1 + 49))) {
            *a1 = v24;
            a1[1] = v25;
          }
        }
      }
      else if (v17 >= v15) {
        *a1 = v14;
        a1[1] = v13;
        {
          v26 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v26));
        }
        if (*(unsigned __int16*)(v26 + 16) +
                10000 * (6 - *(unsigned __int8*)(v26 + 49)) <
            *(unsigned __int16*)(v13 + 16) +
                10000 * (6 - *(unsigned __int8*)(v13 + 49))) {
          a1[1] = v26;
          *(a2 - 1) = v13;
        }
      }
      else {
        *a1 = v16;
        *(a2 - 1) = v13;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 == 5) {
        GameRoutine_15a2880(a1, a1 + 1, a1 + 2, a1 + 3);
        {
          v7 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v7));
        }
        {
          v8 = a1[3];
          __asm__ volatile("" ::"r"(v8));
        }
        if (*(unsigned __int16*)(v7 + 16) +
                10000 * (6 - *(unsigned __int8*)(v7 + 49)) <
            *(unsigned __int16*)(v8 + 16) +
                10000 * (6 - *(unsigned __int8*)(v8 + 49))) {
          a1[3] = v7;
          *(a2 - 1) = v8;
          {
            v10 = a1[2];
            __asm__ volatile("" ::"r"(v10));
          }
          {
            v9 = a1[3];
            __asm__ volatile("" ::"r"(v9));
          }
          if (*(unsigned __int16*)(v9 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v9 + 49)) <
              *(unsigned __int16*)(v10 + 16) +
                  10000 * (6 - *(unsigned __int8*)(v10 + 49))) {
            a1[2] = v9;
            a1[3] = v10;
            {
              v11 = a1[1];
              __asm__ volatile("" ::"r"(v11));
            }
            if (*(unsigned __int16*)(v9 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v9 + 49)) <
                *(unsigned __int16*)(v11 + 16) +
                    10000 * (6 - *(unsigned __int8*)(v11 + 49))) {
              a1[1] = v9;
              a1[2] = v11;
              {
                v12 = *a1;
                __asm__ volatile("" ::"r"(v12));
              }
              if (*(unsigned __int16*)(v9 + 16) +
                      10000 * (6 - *(unsigned __int8*)(v9 + 49)) <
                  *(unsigned __int16*)(*a1 + 16) +
                      10000 * (6 - *(unsigned __int8*)(*a1 + 49))) {
                *a1 = v9;
                a1[1] = v12;
              }
            }
          }
        }
        return true;
      }
      goto LABEL_17;
    }
    GameRoutine_15a2880(a1, a1 + 1, a1 + 2, a2 - 1);
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    {
      v3 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *a1;
      __asm__ volatile("" ::"r"(v4));
    }
    if (*(unsigned __int16*)(v3 + 16) +
            10000 * (6 - *(unsigned __int8*)(v3 + 49)) <
        *(unsigned __int16*)(*a1 + 16) +
            10000 * (6 - *(unsigned __int8*)(*a1 + 49))) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_17:
  {
    v18 = *a1;
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = a1[1];
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = a1 + 2;
  {
    v21 = a1[2];
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = *(unsigned __int16*)(v19 + 16) +
          10000 * (6 - *(unsigned __int8*)(v19 + 49));
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(unsigned __int16*)(v21 + 16) +
          10000 * (6 - *(unsigned __int8*)(v21 + 49));
    __asm__ volatile("" ::"r"(v23));
  }
  if (v22 >= *(unsigned __int16*)(*a1 + 16) +
                 10000 * (6 - *(unsigned __int8*)(*a1 + 49))) {
    if (v23 < v22) {
      a1[1] = v21;
      a1[2] = v19;
      if (*(unsigned __int16*)(v21 + 16) +
              10000 * (6 - *(unsigned __int8*)(v21 + 49)) <
          *(unsigned __int16*)(v18 + 16) +
              10000 * (6 - *(unsigned __int8*)(v18 + 49))) {
        *a1 = v21;
        a1[1] = v18;
      }
    }
  }
  else {
    if (v23 >= v22) {
      *a1 = v19;
      a1[1] = v18;
      if (*(unsigned __int16*)(v21 + 16) +
              10000 * (6 - *(unsigned __int8*)(v21 + 49)) >=
          *(unsigned __int16*)(v18 + 16) +
              10000 * (6 - *(unsigned __int8*)(v18 + 49))) {
        goto LABEL_32;
      }
      a1[1] = v21;
    }
    else {
      *a1 = v21;
    }
    a1[2] = v18;
  }
LABEL_32:
  v27 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v28 = 24;
  v29 = 0;
  while (1) {
    {
      v31 = *v27;
      __asm__ volatile("" ::"r"(v31));
    }
    {
      v32 = *v20;
      __asm__ volatile("" ::"r"(v32));
    }
    if (*(unsigned __int16*)(*v27 + 16) +
            10000 * (6 - *(unsigned __int8*)(*v27 + 49)) <
        *(unsigned __int16*)(v32 + 16) +
            10000 * (6 - *(unsigned __int8*)(v32 + 49))) {
      v33 = v28;
      do {
        v34 = v33 - 8;
        *(__int64*)((char*)a1 + v33) = v32;
        if (v33 == 8) {
          v30 = a1;
          goto LABEL_35;
        }
        {
          v32 = *(__int64*)((char*)a1 + v33 - 16);
          __asm__ volatile("" ::"r"(v32));
        }
        v33 -= 8;
      } while (*(unsigned __int16*)(v31 + 16) +
                   10000 * (6 - *(unsigned __int8*)(v31 + 49)) <
               *(unsigned __int16*)(v32 + 16) +
                   10000 * (6 - *(unsigned __int8*)(v32 + 49)));
      v30 = (__int64*)((char*)a1 + v34);
    LABEL_35:
      ++v29;
      *v30 = v31;
      if (v29 == 8) {
        return v27 + 1 == a2;
      }
    }
    v20 = v27++;
    v28 += 8;
    if (v27 == a2) {
      return true;
    }
  }
}

#pragma GCC visibility pop
