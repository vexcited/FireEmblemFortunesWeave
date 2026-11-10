#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2);
__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2);
_QWORD* GameRoutine_74d660(__int64, int, char, char);
__int64 GameRoutine_68e840(__int64, _QWORD*);
__int64 GameRoutine_748580(__int64, unsigned __int8);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
char** GameRoutine_7fb7c0(char** result, __int64, __int64, unsigned __int64);
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_21c9bd0;
__int64 IDeploy_7480e0(__int64 a1, int a2, int a3, int* a4, __int64 a5,
                       __int64 a6);

__int64 IDeploy_7480e0(__int64 a1, int a2, int a3, int* a4, __int64 a5,
                       __int64 a6)
{
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  unsigned __int8* v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  bool v46;
  __int64 v47;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v6 = *(_QWORD*)(a1 + 8);
  *(_WORD*)(v6 + 4) = 9;
  *(_DWORD*)v6 = 0;
  *(_DWORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 8) = 0x100000000LL;
  *(_QWORD*)(v6 + 32) = *(_QWORD*)(v6 + 24);
  memset(v6 + 64, 255, 1024, a4, a5, a6),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  memset(v6 + 1096, 0, 1536, v11, v12, v13),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v14 = *(_QWORD*)(v6 + 2640);
  *(_DWORD*)(v6 + 2632) = 0;
  *(_QWORD*)(v6 + 2664) = 0;
  *(_QWORD*)(v6 + 2672) = 0;
  *(_QWORD*)(v6 + 2648) = v14;
  v15 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v15 + 4) = *((_BYTE*)a4 + 4);
  v16 = *((unsigned __int8*)a4 + 5);
  *(_BYTE*)(v15 + 5) = v16;
  *(_DWORD*)(v15 + 12) = a4[3];
  *(_DWORD*)(v15 + 16) = a4[4];
  *(_DWORD*)(v15 + 8) = a4[2];
  if ((int*)v15 != a4) {
    GameRoutine_7fb7c0((char**)(v15 + 24), *((_QWORD*)a4 + 3),
                       *((_QWORD*)a4 + 4),
                       (__int64)(*((_QWORD*)a4 + 4) - *((_QWORD*)a4 + 3)) >> 2),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    v16 = *(unsigned __int8*)(v15 + 5);
  }
  v17 = a2 + 32 * a3;
  *(_DWORD*)(v15 + 48) = a4[12];
  if (v16 != 8) {
    v19 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    if (v17 >= 0x400) {
      v20 = 0;
    }
    else {
      v20 = a2 + 32 * a3;
    }
    v21 = *(__int16*)(v19 + 2LL * v20 + 104);
    if (v21 < 0 || (v22 = *(_QWORD*)(v19 + 8)) == 0 ||
        (v23 = v22 + 144LL * (unsigned int)v21,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v23 + 40LL))(v23) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23) & 1) == 0 ||
        (v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 224LL))(v23)) == 0) {
      v24 = **(_QWORD**)(GameData_21c9bd0 + 64);
      if (v24 == 0) {
        goto LABEL_17;
      }
    }
    v18 = GameRoutine_68e840(v24, (_QWORD*)(v15 + 24)),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    if (v18 == 0) {
      goto LABEL_17;
    }
  LABEL_16:
    v25 = *(unsigned __int8*)(v18 + 75);
    goto LABEL_18;
  }
  v18 = **(_QWORD**)(GameData_21c9bd0 + 64);
  if (v18 != 0) {
    goto LABEL_16;
  }
LABEL_17:
  v25 = 0;
LABEL_18:
  v26 = *(_DWORD*)(v15 + 12);
  if (v26 > 1) {
    v25 = 0;
  }
  v27 = v25 + *(_DWORD*)(v15 + 16);
  if (v27 >= 1) {
    *(_DWORD*)(v15 + 8) =
        (*(_DWORD*)(v15 + 8) - v27) & ~((*(_DWORD*)(v15 + 8) - v27) >> 31);
  }
  GameRoutine_74d660(v15 + 2632, v26, 0, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  v28 = *a4;
  *(_DWORD*)v15 = *a4;
  v29 = (v28 & 1) == 0;
  v30 = 16;
  if (v29) {
    v30 = 24;
  }
  v31 = 17;
  if (v29) {
    v31 = 25;
  }
  v32 = 18;
  if (v29) {
    v32 = 26;
  }
  v33 = 19;
  if (v29) {
    v33 = 27;
  }
  v34 = *GameData_212ce98[0];
  *(_DWORD*)(v15 + 2664) = *(unsigned __int8*)(*GameData_212ce98[0] + v30);
  *(_DWORD*)(v15 + 2668) = *(unsigned __int8*)(v34 + v31);
  *(_DWORD*)(v15 + 2672) = *(unsigned __int8*)(v34 + v32);
  *(_DWORD*)(v15 + 2676) = *(unsigned __int8*)(v34 + v33);
  v35 = *(_DWORD*)(a1 + 12852);
  if (v35 >= 1 && *(int*)(a1 + 12856) >= 1 && *(int*)(a1 + 12860) >= 1 &&
      *(int*)(a1 + 12864) >= 1) {
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2664LL) = v35;
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2668LL) = *(_DWORD*)(a1 + 12856);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2672LL) = *(_DWORD*)(a1 + 12860);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2676LL) = *(_DWORD*)(a1 + 12864);
  }
  *(_BYTE*)(a1 + 11808) = a2;
  *(_BYTE*)(a1 + 11809) = a3;
  if (v17 >= 0x400) {
    v36 = 0;
  }
  else {
    v36 = v17;
  }
  *(_WORD*)(a1 + 11810) = 255;
  v37 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 11814) = 0;
  *(_BYTE*)(v37 + v36 + 64) = 0;
  *(_QWORD*)(a1 + 12832) = a1 + 11808;
  *(_QWORD*)(a1 + 12840) = a1 + 10784;
  *(_DWORD*)(a1 + 12848) = 0;
  v38 = *(unsigned __int8*)(a1 + 11810);
  if (*(_BYTE*)(a1 + 11810) != 0) {
    v39 = 1;
    v40 = 0;
    v41 = (unsigned __int8*)(a1 + 11808);
    while (1) {
      LODWORD(v43) = *v41 + 32 * v41[1];
      if ((unsigned int)v43 >= 0x400) {
        v43 = 0;
      }
      else {
        v43 = (unsigned int)v43;
      }
      if (v41[3] <=
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a1 + 8) + v43 + 64)) {
        if (v38 != 4) {
          v44 = GameRoutine_748580(a1, 1u),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v41 = *(unsigned __int8**)(a1 + 12832);
          v40 |= v44;
        }
        if (v41[2] != 1 && (v40 |= GameRoutine_748580(a1, 4u),
                            *(_BYTE*)(*(_QWORD*)(a1 + 12832) + 2LL) == 8) ||
            (v45 = GameRoutine_748580(a1, 2u),
             v41 = *(unsigned __int8**)(a1 + 12832), v40 |= v45, v41[2] != 2)) {
          v42 = GameRoutine_748580(a1, 8u),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
          v41 = *(unsigned __int8**)(a1 + 12832);
          v40 |= v42;
        }
      }
      *(_QWORD*)(a1 + 12832) = v41 + 4;
      v38 = v41[6];
      v41 += 4;
      if (v38 == 0) {
        v46 = (v39 & 1) == 0;
        v39 ^= 1u;
        v47 = v46 ? a1 + 10784 : a1 + 11808;
        *(_BYTE*)(*(_QWORD*)(a1 + 12840) + 2LL) = 0;
        v41 = (unsigned __int8*)(v46 ? a1 + 11808 : a1 + 10784);
        *(_QWORD*)(a1 + 12840) = v47;
        *(_DWORD*)(a1 + 12848) = 0;
        *(_QWORD*)(a1 + 12832) = v41;
        v38 = v41[2];
        if (v41[2] == 0) {
          break;
        }
      }
    }
  }
  else {
    LOBYTE(v40) = 0;
  }
  return v40 & 1;
}

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(char*)(a2 + 1);
  v4 = *(_QWORD*)(v2 + 8) + 4LL * ((v3 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v4 + 2120) |= 1 << v3;
  LODWORD(v4) = *(char*)(a2 + 1);
  v5 = *(_QWORD*)(v2 + 8) + 4LL * (((int)v4 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v5 + 2376) |= 1 << v4;
  return result;
}

__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;

  v2 = *(char*)(a2 + 1);
  v3 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) +
       4LL * ((v2 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v3 + 2120) |= 1 << v2;
  return result;
}

#pragma GCC visibility pop
