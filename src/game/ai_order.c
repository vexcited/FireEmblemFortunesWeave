#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11ed160(__int64 result);
extern __int64 GameData_212d290;
__int64 AIOrder_11eeb10(__int64 a1);
__int64 AIOrder_11eeb40(__int64 a1);
__int64 AIOrder_11eeb70(__int64 a1);
__int64 AIDeploy_1274f90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11ed500(void);
__int64 game_11f30c0(__int64, unsigned __int16*, char);
__int64 game_11f5140(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_2017b68[])();
extern __int64 (*GameData_2017bf8[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ce90[3];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 AIOrder_11ec0a0(__int64 result);
__int64 AIOrder_11ec3e0(__int64 result);
__int64 AIOrder_11ec780(__int64 result);
__int64 AIOrder_11ecb20(__int64 result, __int64 a2);
__int64 AIOrder_11ed160(__int64 result);
__int64 AIOrder_11ed900(__int64 result);
__int64 AIOrder_11edea0(__int64 a1);
void AIOrder_11ee520();
__int64 AIOrder_11ee690(__int64 a1);
__int64 game_AIOrder_EnumerateEntrustSpecialSupport(__int64 a1);
__int64 AIOrder_11ee790(__int64 a1);
__int64 AIOrder_11ee810(__int64 a1);
__int64 AIOrder_11ee890(__int64 a1);
__int64 AIOrder_11ee920(__int64 result);
__int64 AIOrder_11eea90(__int64 a1);

__int64 AIOrder_11ec0a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  char v12;
  int v13;
  __int64 v14;
  _DWORD* v15;
  char* v16;
  __int64 v17;
  char v18;
  int v19;
  char v20;
  int v21;
  char v22;
  int v23;
  char v24;
  int v25;
  char v26;
  int v27;
  char v28;
  int v29;
  char v30;
  int v31;
  char v32;
  int v33;
  int v34;
  int v35;

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v34 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
        result = game_HasSkill(v2 + 1744, &v34);
        if ((result & 1) == 0) {
          if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
              (v35 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
               ((result = game_HasSkill(v2 + 1744, &v35)) & 1) == 0)) {
            v4 = *(unsigned __int8*)(v2 + 1983);
            *(_BYTE*)(v1 + *(int*)(v1 + 800)) = *(_BYTE*)(v2 + 490);
            *(_DWORD*)(v1 + 160 + 4LL * (int)(*(_DWORD*)(v1 + 800))++) = v4;
          }
        }
      }
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  v5 = *(_DWORD*)(v1 + 800);
  if (v5 >= 2) {
    v6 = 0;
    v7 = 7;
    do {
      if (v6 <= v5 - 2) {
        v8 = v5;
        if ((~((_BYTE)v6 - (_BYTE)v5) & 7) != 0) {
          v9 = 2LL - v5;
          v10 = (_BYTE*)(v1 - 1 + v5);
          result = v1 + 156 + 4LL * v5;
          v11 = (v7 + (_BYTE)v5) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v12 = *(v10 - 1);
              *(v10 - 1) = *v10;
              *v10 = v12;
              v13 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v13;
            }
            ++v9;
            --v11;
            --v10;
            result -= 4;
          } while (v11 != 0);
          v14 = -v9;
        }
        else {
          v14 = v5 - 2LL;
        }
        if ((unsigned __int64)(v8 - v6 - 2) >= 7) {
          v15 = (_DWORD*)(v1 + 164 + 4 * v14);
          v16 = (char*)(v1 - 3 + v14);
          v17 = v14 + 1;
          do {
            if (*(v15 - 1) < *v15) {
              v18 = v16[3];
              v16[3] = v16[4];
              v16[4] = v18;
              v19 = *(v15 - 1);
              *(v15 - 1) = *v15;
              *v15 = v19;
            }
            if (*(v15 - 2) < *(v15 - 1)) {
              v20 = v16[2];
              v16[2] = v16[3];
              v16[3] = v20;
              v21 = *(v15 - 2);
              *(v15 - 2) = *(v15 - 1);
              *(v15 - 1) = v21;
            }
            if (*(v15 - 3) < *(v15 - 2)) {
              v22 = v16[1];
              v16[1] = v16[2];
              v16[2] = v22;
              v23 = *(v15 - 3);
              *(v15 - 3) = *(v15 - 2);
              *(v15 - 2) = v23;
            }
            if (*(v15 - 4) < *(v15 - 3)) {
              v24 = *v16;
              *v16 = v16[1];
              v16[1] = v24;
              v25 = *(v15 - 4);
              *(v15 - 4) = *(v15 - 3);
              *(v15 - 3) = v25;
            }
            if (*(v15 - 5) < *(v15 - 4)) {
              v26 = *(v16 - 1);
              *(v16 - 1) = *v16;
              *v16 = v26;
              v27 = *(v15 - 5);
              *(v15 - 5) = *(v15 - 4);
              *(v15 - 4) = v27;
            }
            if (*(v15 - 6) < *(v15 - 5)) {
              v28 = *(v16 - 2);
              *(v16 - 2) = *(v16 - 1);
              *(v16 - 1) = v28;
              v29 = *(v15 - 6);
              *(v15 - 6) = *(v15 - 5);
              *(v15 - 5) = v29;
            }
            if (*(v15 - 7) < *(v15 - 6)) {
              v30 = *(v16 - 3);
              *(v16 - 3) = *(v16 - 2);
              *(v16 - 2) = v30;
              v31 = *(v15 - 7);
              *(v15 - 7) = *(v15 - 6);
              *(v15 - 6) = v31;
            }
            result = (unsigned int)*(v15 - 7);
            if (*(v15 - 8) < (unsigned int)result) {
              v32 = *(v16 - 4);
              *(v16 - 4) = *(v16 - 3);
              *(v16 - 3) = v32;
              v33 = *(v15 - 8);
              result = (unsigned int)*(v15 - 7);
              *(v15 - 8) = result;
              *(v15 - 7) = v33;
            }
            v15 -= 8;
            v16 -= 8;
            v17 -= 8;
          } while (v17 > v6);
        }
        v5 = *(_DWORD*)(v1 + 800);
      }
      ++v6;
      v7 += 7;
    } while (v6 < v5 - 1);
  }
  return result;
}

__int64 AIOrder_11ec3e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  char v12;
  int v13;
  __int64 v14;
  _DWORD* v15;
  char* v16;
  __int64 v17;
  char v18;
  int v19;
  char v20;
  int v21;
  char v22;
  int v23;
  char v24;
  int v25;
  char v26;
  int v27;
  char v28;
  int v29;
  char v30;
  int v31;
  char v32;
  int v33;
  int v34;
  int v35;
  char v36[4];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v34 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
        result = game_HasSkill(v2 + 1744, &v34);
        if ((result & 1) == 0) {
          if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
              (v35 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
               ((result = game_HasSkill(v2 + 1744, &v35)) & 1) == 0)) {
            v4 = *(unsigned __int8*)(v2 + 1983);
            if (v4 >= 0x64) {
              v36[0] = 10;
              result = game_Unit_GetParam(v2, v36, 1);
              *(_BYTE*)(v1 + *(int*)(v1 + 800)) = *(_BYTE*)(v2 + 490);
              *(_DWORD*)(v1 + 160 + 4LL * (int)(*(_DWORD*)(v1 + 800))++) =
                  ((v4 << 8) | 0x10) - result;
            }
          }
        }
      }
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  v5 = *(_DWORD*)(v1 + 800);
  if (v5 >= 2) {
    v6 = 0;
    v7 = 7;
    do {
      if (v6 <= v5 - 2) {
        v8 = v5;
        if ((~((_BYTE)v6 - (_BYTE)v5) & 7) != 0) {
          v9 = 2LL - v5;
          v10 = (_BYTE*)(v1 - 1 + v5);
          result = v1 + 156 + 4LL * v5;
          v11 = (v7 + (_BYTE)v5) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v12 = *(v10 - 1);
              *(v10 - 1) = *v10;
              *v10 = v12;
              v13 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v13;
            }
            ++v9;
            --v11;
            --v10;
            result -= 4;
          } while (v11 != 0);
          v14 = -v9;
        }
        else {
          v14 = v5 - 2LL;
        }
        if ((unsigned __int64)(v8 - v6 - 2) >= 7) {
          v15 = (_DWORD*)(v1 + 164 + 4 * v14);
          v16 = (char*)(v1 - 3 + v14);
          v17 = v14 + 1;
          do {
            if (*(v15 - 1) < *v15) {
              v18 = v16[3];
              v16[3] = v16[4];
              v16[4] = v18;
              v19 = *(v15 - 1);
              *(v15 - 1) = *v15;
              *v15 = v19;
            }
            if (*(v15 - 2) < *(v15 - 1)) {
              v20 = v16[2];
              v16[2] = v16[3];
              v16[3] = v20;
              v21 = *(v15 - 2);
              *(v15 - 2) = *(v15 - 1);
              *(v15 - 1) = v21;
            }
            if (*(v15 - 3) < *(v15 - 2)) {
              v22 = v16[1];
              v16[1] = v16[2];
              v16[2] = v22;
              v23 = *(v15 - 3);
              *(v15 - 3) = *(v15 - 2);
              *(v15 - 2) = v23;
            }
            if (*(v15 - 4) < *(v15 - 3)) {
              v24 = *v16;
              *v16 = v16[1];
              v16[1] = v24;
              v25 = *(v15 - 4);
              *(v15 - 4) = *(v15 - 3);
              *(v15 - 3) = v25;
            }
            if (*(v15 - 5) < *(v15 - 4)) {
              v26 = *(v16 - 1);
              *(v16 - 1) = *v16;
              *v16 = v26;
              v27 = *(v15 - 5);
              *(v15 - 5) = *(v15 - 4);
              *(v15 - 4) = v27;
            }
            if (*(v15 - 6) < *(v15 - 5)) {
              v28 = *(v16 - 2);
              *(v16 - 2) = *(v16 - 1);
              *(v16 - 1) = v28;
              v29 = *(v15 - 6);
              *(v15 - 6) = *(v15 - 5);
              *(v15 - 5) = v29;
            }
            if (*(v15 - 7) < *(v15 - 6)) {
              v30 = *(v16 - 3);
              *(v16 - 3) = *(v16 - 2);
              *(v16 - 2) = v30;
              v31 = *(v15 - 7);
              *(v15 - 7) = *(v15 - 6);
              *(v15 - 6) = v31;
            }
            result = (unsigned int)*(v15 - 7);
            if (*(v15 - 8) < (unsigned int)result) {
              v32 = *(v16 - 4);
              *(v16 - 4) = *(v16 - 3);
              *(v16 - 3) = v32;
              v33 = *(v15 - 8);
              result = (unsigned int)*(v15 - 7);
              *(v15 - 8) = result;
              *(v15 - 7) = v33;
            }
            v15 -= 8;
            v16 -= 8;
            v17 -= 8;
          } while (v17 > v6);
        }
        v5 = *(_DWORD*)(v1 + 800);
      }
      ++v6;
      v7 += 7;
    } while (v6 < v5 - 1);
  }
  return result;
}

__int64 AIOrder_11ec780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  int v6;
  int v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  char v14;
  int v15;
  __int64 v16;
  _DWORD* v17;
  char* v18;
  __int64 v19;
  char v20;
  int v21;
  char v22;
  int v23;
  char v24;
  int v25;
  char v26;
  int v27;
  char v28;
  int v29;
  char v30;
  int v31;
  char v32;
  int v33;
  char v34;
  int v35;
  int v36;
  int v37;
  char v38[4];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v36 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
        result = game_HasSkill(v2 + 1744, &v36);
        if ((result & 1) == 0) {
          if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
              (v37 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
               ((result = game_HasSkill(v2 + 1744, &v37)) & 1) == 0)) {
            v4 = *(unsigned __int8*)(v2 + 1983);
            v5 = game_11f5140(v2);
            v38[0] = 10;
            result = game_Unit_GetParam(v2, v38, 1);
            if ((v5 & 1) != 0) {
              v6 = 272;
            }
            else {
              v6 = 16;
            }
            *(_BYTE*)(v1 + *(int*)(v1 + 800)) = *(_BYTE*)(v2 + 490);
            *(_DWORD*)(v1 + 160 + 4LL * (int)(*(_DWORD*)(v1 + 800))++) =
                (v6 | (v4 << 9)) - result;
          }
        }
      }
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  v7 = *(_DWORD*)(v1 + 800);
  if (v7 >= 2) {
    v8 = 0;
    v9 = 7;
    do {
      if (v8 <= v7 - 2) {
        v10 = v7;
        if ((~((_BYTE)v8 - (_BYTE)v7) & 7) != 0) {
          v11 = 2LL - v7;
          v12 = (_BYTE*)(v1 - 1 + v7);
          result = v1 + 156 + 4LL * v7;
          v13 = (v9 + (_BYTE)v7) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v14 = *(v12 - 1);
              *(v12 - 1) = *v12;
              *v12 = v14;
              v15 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v15;
            }
            ++v11;
            --v13;
            --v12;
            result -= 4;
          } while (v13 != 0);
          v16 = -v11;
        }
        else {
          v16 = v7 - 2LL;
        }
        if ((unsigned __int64)(v10 - v8 - 2) >= 7) {
          v17 = (_DWORD*)(v1 + 164 + 4 * v16);
          v18 = (char*)(v1 - 3 + v16);
          v19 = v16 + 1;
          do {
            if (*(v17 - 1) < *v17) {
              v20 = v18[3];
              v18[3] = v18[4];
              v18[4] = v20;
              v21 = *(v17 - 1);
              *(v17 - 1) = *v17;
              *v17 = v21;
            }
            if (*(v17 - 2) < *(v17 - 1)) {
              v22 = v18[2];
              v18[2] = v18[3];
              v18[3] = v22;
              v23 = *(v17 - 2);
              *(v17 - 2) = *(v17 - 1);
              *(v17 - 1) = v23;
            }
            if (*(v17 - 3) < *(v17 - 2)) {
              v24 = v18[1];
              v18[1] = v18[2];
              v18[2] = v24;
              v25 = *(v17 - 3);
              *(v17 - 3) = *(v17 - 2);
              *(v17 - 2) = v25;
            }
            if (*(v17 - 4) < *(v17 - 3)) {
              v26 = *v18;
              *v18 = v18[1];
              v18[1] = v26;
              v27 = *(v17 - 4);
              *(v17 - 4) = *(v17 - 3);
              *(v17 - 3) = v27;
            }
            if (*(v17 - 5) < *(v17 - 4)) {
              v28 = *(v18 - 1);
              *(v18 - 1) = *v18;
              *v18 = v28;
              v29 = *(v17 - 5);
              *(v17 - 5) = *(v17 - 4);
              *(v17 - 4) = v29;
            }
            if (*(v17 - 6) < *(v17 - 5)) {
              v30 = *(v18 - 2);
              *(v18 - 2) = *(v18 - 1);
              *(v18 - 1) = v30;
              v31 = *(v17 - 6);
              *(v17 - 6) = *(v17 - 5);
              *(v17 - 5) = v31;
            }
            if (*(v17 - 7) < *(v17 - 6)) {
              v32 = *(v18 - 3);
              *(v18 - 3) = *(v18 - 2);
              *(v18 - 2) = v32;
              v33 = *(v17 - 7);
              *(v17 - 7) = *(v17 - 6);
              *(v17 - 6) = v33;
            }
            result = (unsigned int)*(v17 - 7);
            if (*(v17 - 8) < (unsigned int)result) {
              v34 = *(v18 - 4);
              *(v18 - 4) = *(v18 - 3);
              *(v18 - 3) = v34;
              v35 = *(v17 - 8);
              result = (unsigned int)*(v17 - 7);
              *(v17 - 8) = result;
              *(v17 - 7) = v35;
            }
            v17 -= 8;
            v18 -= 8;
            v19 -= 8;
          } while (v19 > v8);
        }
        v7 = *(_DWORD*)(v1 + 800);
      }
      ++v8;
      v9 += 7;
    } while (v8 < v7 - 1);
  }
  return result;
}

__int64 AIOrder_11ecb20(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  char v21;
  int v22;
  __int64 v23;
  _DWORD* v24;
  char* v25;
  __int64 v26;
  char v27;
  int v28;
  char v29;
  int v30;
  char v31;
  int v32;
  char v33;
  int v34;
  char v35;
  int v36;
  char v37;
  int v38;
  char v39;
  int v40;
  char v41;
  int v42;
  __int64 v43;

  v2 = result;
  v3 = GameData_212ce90[0];
  v4 = *(_QWORD*)(GameData_21ca310 + 56) +
       24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v5 = *(_QWORD*)(v4 + 556000);
  if (v5 != 0) {
    v7 = *(_QWORD*)(v4 + 556000);
    do {
      if (game_GameModeData_instance_ != 0) {
        v8 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      else {
        v8 = 0;
      }
      if (*(_QWORD*)(v7 + 392) == v8) {
        goto LABEL_9;
      }
      v7 = *(_QWORD*)(v7 + 432);
    } while (v7 != 0);
    v7 = *(_QWORD*)(v4 + 556000);
  LABEL_9:
    v9 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v5 + 416) & 0x31) != 0) {
        goto LABEL_12;
      }
      LODWORD(v43) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v9) & 0xFFF;
      result = game_HasSkill_alt1((_QWORD*)(v5 + 1744), (unsigned int*)&v43);
      if ((result & 1) != 0) {
        goto LABEL_12;
      }
      if (*(_WORD*)(v5 + 492) == 0 && *(_BYTE*)(v5 + 496) == 0) {
        LODWORD(v43) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v9) & 0xFFF;
        result = game_HasSkill_alt1((_QWORD*)(v5 + 1744), (unsigned int*)&v43);
        if ((result & 1) != 0) {
          goto LABEL_12;
        }
      }
      LODWORD(v43) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v9 + 4) & 0xFFF;
      result = game_HasSkill_alt1((_QWORD*)(v5 + 1744), (unsigned int*)&v43);
      if ((result & 1) != 0) {
        goto LABEL_12;
      }
      v12 = *(_QWORD*)(a2 + 32);
      v43 = v5;
      if (v12 == 0) {
        GameRoutine_60a310();
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v12 + 48LL))(v12, &v43);
      if ((result & 1) == 0) {
        goto LABEL_12;
      }
      v13 = *(unsigned __int8*)(*v3 + 25);
      if (v13 > 4) {
        goto LABEL_12;
      }
      if (((1 << v13) & 0x13) != 0) {
        if (*(_BYTE*)(*v3 + 25) != 0) {
          goto LABEL_29;
        }
      }
      else {
        if (*(unsigned __int8*)(v7 + 2088) != *(unsigned __int8*)(v5 + 2088)) {
          v13 = 3;
        LABEL_29:
          if ((game_11f30c0(v5, (unsigned __int16*)(v5 + 876), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 884), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 892), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 900), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 908), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 916), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 924), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 932), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 940), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 948), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 956), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 964), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 972), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 980), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 988), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 996), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1004), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1012), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1020), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1028), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1036), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1044), 0) & 1) != 0 ||
              (game_11f30c0(v5, (unsigned __int16*)(v5 + 1052), 0) & 1) != 0) {
            v10 = 7;
          }
          else if ((game_11f30c0(v5, (unsigned __int16*)(v5 + 1060), 0) & 1) !=
                   0) {
            v10 = 7;
          }
          else {
            v10 = 8;
          }
          v11 = v10 - v13;
          LOBYTE(v43) = 10;
          result = game_Unit_GetParam_alt1(v5);
          *(_BYTE*)(v2 + *(int*)(v2 + 800)) = *(_BYTE*)(v5 + 490);
          *(_DWORD*)(v2 + 160 + 4LL * (int)(*(_DWORD*)(v2 + 800))++) =
              ((v11 << 8) | 0x10) - result;
          goto LABEL_12;
        }
        v13 = v13 == 2;
        if (v13 != 0) {
          goto LABEL_29;
        }
      }
    LABEL_12:
      v5 = *(_QWORD*)(v5 + 432);
    } while (v5 != 0);
  }
  v14 = *(_DWORD*)(v2 + 800);
  if (v14 >= 2) {
    v15 = 0;
    v16 = 7;
    do {
      if (v15 <= v14 - 2) {
        v17 = v14;
        if ((~((_BYTE)v15 - (_BYTE)v14) & 7) != 0) {
          v18 = 2LL - v14;
          v19 = (_BYTE*)(v2 - 1 + v14);
          result = v2 + 156 + 4LL * v14;
          v20 = (v16 + (_BYTE)v14) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v21 = *(v19 - 1);
              *(v19 - 1) = *v19;
              *v19 = v21;
              v22 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v22;
            }
            ++v18;
            --v20;
            --v19;
            result -= 4;
          } while (v20 != 0);
          v23 = -v18;
        }
        else {
          v23 = v14 - 2LL;
        }
        if ((unsigned __int64)(v17 - v15 - 2) >= 7) {
          v24 = (_DWORD*)(v2 + 164 + 4 * v23);
          v25 = (char*)(v2 - 3 + v23);
          v26 = v23 + 1;
          do {
            if (*(v24 - 1) < *v24) {
              v27 = v25[3];
              v25[3] = v25[4];
              v25[4] = v27;
              v28 = *(v24 - 1);
              *(v24 - 1) = *v24;
              *v24 = v28;
            }
            if (*(v24 - 2) < *(v24 - 1)) {
              v29 = v25[2];
              v25[2] = v25[3];
              v25[3] = v29;
              v30 = *(v24 - 2);
              *(v24 - 2) = *(v24 - 1);
              *(v24 - 1) = v30;
            }
            if (*(v24 - 3) < *(v24 - 2)) {
              v31 = v25[1];
              v25[1] = v25[2];
              v25[2] = v31;
              v32 = *(v24 - 3);
              *(v24 - 3) = *(v24 - 2);
              *(v24 - 2) = v32;
            }
            if (*(v24 - 4) < *(v24 - 3)) {
              v33 = *v25;
              *v25 = v25[1];
              v25[1] = v33;
              v34 = *(v24 - 4);
              *(v24 - 4) = *(v24 - 3);
              *(v24 - 3) = v34;
            }
            if (*(v24 - 5) < *(v24 - 4)) {
              v35 = *(v25 - 1);
              *(v25 - 1) = *v25;
              *v25 = v35;
              v36 = *(v24 - 5);
              *(v24 - 5) = *(v24 - 4);
              *(v24 - 4) = v36;
            }
            if (*(v24 - 6) < *(v24 - 5)) {
              v37 = *(v25 - 2);
              *(v25 - 2) = *(v25 - 1);
              *(v25 - 1) = v37;
              v38 = *(v24 - 6);
              *(v24 - 6) = *(v24 - 5);
              *(v24 - 5) = v38;
            }
            if (*(v24 - 7) < *(v24 - 6)) {
              v39 = *(v25 - 3);
              *(v25 - 3) = *(v25 - 2);
              *(v25 - 2) = v39;
              v40 = *(v24 - 7);
              *(v24 - 7) = *(v24 - 6);
              *(v24 - 6) = v40;
            }
            result = (unsigned int)*(v24 - 7);
            if (*(v24 - 8) < (unsigned int)result) {
              v41 = *(v25 - 4);
              *(v25 - 4) = *(v25 - 3);
              *(v25 - 3) = v41;
              v42 = *(v24 - 8);
              result = (unsigned int)*(v24 - 7);
              *(v24 - 8) = result;
              *(v24 - 7) = v42;
            }
            v24 -= 8;
            v25 -= 8;
            v26 -= 8;
          } while (v26 > v15);
        }
        v14 = *(_DWORD*)(v2 + 800);
      }
      ++v15;
      v16 += 7;
    } while (v15 < v14 - 1);
  }
  return result;
}

__int64 AIOrder_11ed160(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  char v11;
  int v12;
  __int64 v13;
  _DWORD* v14;
  char* v15;
  __int64 v16;
  char v17;
  int v18;
  char v19;
  int v20;
  char v21;
  int v22;
  char v23;
  int v24;
  char v25;
  int v26;
  char v27;
  int v28;
  char v29;
  int v30;
  char v31;
  int v32;
  int v33;
  int v34;
  int v35;
  char v36[4];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v34 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
        result = game_HasSkill(v2 + 1744, &v34);
        if ((result & 1) == 0) {
          if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
              (v35 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
               ((result = game_HasSkill(v2 + 1744, &v35)) & 1) == 0)) {
            v33 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v3 + 4) & 0xFFF;
            result = game_HasSkill(v2 + 1744, &v33);
            if ((result & 1) != 0) {
              v36[0] = 10;
              result = game_Unit_GetParam(v2, v36, 1);
              *(_BYTE*)(v1 + *(int*)(v1 + 800)) = *(_BYTE*)(v2 + 490);
              *(_DWORD*)(v1 + 160 + 4LL * (int)(*(_DWORD*)(v1 + 800))++) =
                  16 - result;
            }
          }
        }
      }
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  v4 = *(_DWORD*)(v1 + 800);
  if (v4 >= 2) {
    v5 = 0;
    v6 = 7;
    do {
      if (v5 <= v4 - 2) {
        v7 = v4;
        if ((~((_BYTE)v5 - (_BYTE)v4) & 7) != 0) {
          v8 = 2LL - v4;
          v9 = (_BYTE*)(v1 - 1 + v4);
          result = v1 + 156 + 4LL * v4;
          v10 = (v6 + (_BYTE)v4) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v11 = *(v9 - 1);
              *(v9 - 1) = *v9;
              *v9 = v11;
              v12 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v12;
            }
            ++v8;
            --v10;
            --v9;
            result -= 4;
          } while (v10 != 0);
          v13 = -v8;
        }
        else {
          v13 = v4 - 2LL;
        }
        if ((unsigned __int64)(v7 - v5 - 2) >= 7) {
          v14 = (_DWORD*)(v1 + 164 + 4 * v13);
          v15 = (char*)(v1 - 3 + v13);
          v16 = v13 + 1;
          do {
            if (*(v14 - 1) < *v14) {
              v17 = v15[3];
              v15[3] = v15[4];
              v15[4] = v17;
              v18 = *(v14 - 1);
              *(v14 - 1) = *v14;
              *v14 = v18;
            }
            if (*(v14 - 2) < *(v14 - 1)) {
              v19 = v15[2];
              v15[2] = v15[3];
              v15[3] = v19;
              v20 = *(v14 - 2);
              *(v14 - 2) = *(v14 - 1);
              *(v14 - 1) = v20;
            }
            if (*(v14 - 3) < *(v14 - 2)) {
              v21 = v15[1];
              v15[1] = v15[2];
              v15[2] = v21;
              v22 = *(v14 - 3);
              *(v14 - 3) = *(v14 - 2);
              *(v14 - 2) = v22;
            }
            if (*(v14 - 4) < *(v14 - 3)) {
              v23 = *v15;
              *v15 = v15[1];
              v15[1] = v23;
              v24 = *(v14 - 4);
              *(v14 - 4) = *(v14 - 3);
              *(v14 - 3) = v24;
            }
            if (*(v14 - 5) < *(v14 - 4)) {
              v25 = *(v15 - 1);
              *(v15 - 1) = *v15;
              *v15 = v25;
              v26 = *(v14 - 5);
              *(v14 - 5) = *(v14 - 4);
              *(v14 - 4) = v26;
            }
            if (*(v14 - 6) < *(v14 - 5)) {
              v27 = *(v15 - 2);
              *(v15 - 2) = *(v15 - 1);
              *(v15 - 1) = v27;
              v28 = *(v14 - 6);
              *(v14 - 6) = *(v14 - 5);
              *(v14 - 5) = v28;
            }
            if (*(v14 - 7) < *(v14 - 6)) {
              v29 = *(v15 - 3);
              *(v15 - 3) = *(v15 - 2);
              *(v15 - 2) = v29;
              v30 = *(v14 - 7);
              *(v14 - 7) = *(v14 - 6);
              *(v14 - 6) = v30;
            }
            result = (unsigned int)*(v14 - 7);
            if (*(v14 - 8) < (unsigned int)result) {
              v31 = *(v15 - 4);
              *(v15 - 4) = *(v15 - 3);
              *(v15 - 3) = v31;
              v32 = *(v14 - 8);
              result = (unsigned int)*(v14 - 7);
              *(v14 - 8) = result;
              *(v14 - 7) = v32;
            }
            v14 -= 8;
            v15 -= 8;
            v16 -= 8;
          } while (v16 > v5);
        }
        v4 = *(_DWORD*)(v1 + 800);
      }
      ++v5;
      v6 += 7;
    } while (v5 < v4 - 1);
  }
  return result;
}

__int64 AIOrder_11ed900(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  int v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;
  char v23;
  int v24;
  __int64 v25;
  _DWORD* v26;
  char* v27;
  __int64 v28;
  char v29;
  int v30;
  char v31;
  int v32;
  char v33;
  int v34;
  char v35;
  int v36;
  char v37;
  int v38;
  char v39;
  int v40;
  char v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  char v47[4];

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    v4 = GameData_212c878[0];
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v45 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v3) & 0xFFF;
        result = game_HasSkill(v2 + 1744, &v45);
        if ((result & 1) == 0) {
          if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
              (v46 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
               ((result = game_HasSkill(v2 + 1744, &v46)) & 1) == 0)) {
            v5 = *v4;
            v6 = 0;
            while (1) {
              v7 = v2 + v6;
              if (*(_WORD*)(v2 + v6 + 828) != 0 &&
                  (*(_BYTE*)(v7 + 831) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v2 +
                                                                          v6 +
                                                                          828)) +
                                      72LL) < 8u) {
                break;
              }
              v8 = *(unsigned __int16*)(v7 + 836);
              if (v8 != 0 && (*(_BYTE*)(v2 + v6 + 839) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) + 8 * v8) +
                                      72LL) < 8u) {
                break;
              }
              v9 = v2 + v6;
              if (*(_WORD*)(v2 + v6 + 844) != 0 &&
                  (*(_BYTE*)(v9 + 847) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v2 +
                                                                          v6 +
                                                                          844)) +
                                      72LL) < 8u) {
                break;
              }
              v10 = *(unsigned __int16*)(v9 + 852);
              if (v10 != 0 && (*(_BYTE*)(v2 + v6 + 855) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                 8 * v10) +
                                      72LL) < 8u) {
                break;
              }
              v11 = v2 + v6;
              if (*(_WORD*)(v2 + v6 + 860) != 0 &&
                  (*(_BYTE*)(v11 + 863) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v2 +
                                                                          v6 +
                                                                          860)) +
                                      72LL) < 8u) {
                break;
              }
              v12 = *(unsigned __int16*)(v11 + 868);
              if (v12 != 0 && (*(_BYTE*)(v2 + v6 + 871) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                                 8 * v12) +
                                      72LL) < 8u) {
                break;
              }
              v6 += 48;
              if (v6 == 240) {
                goto LABEL_3;
              }
            }
            if ((*(_BYTE*)(v2 + 1978) & 8) != 0) {
              v13 = *(unsigned __int8*)(v2 + 1983);
              v14 = game_11f5140(v2);
              v47[0] = 10;
              result = game_Unit_GetParam(v2, v47, 1);
              if ((v14 & 1) != 0) {
                v15 = 272;
              }
              else {
                v15 = 16;
              }
              *(_BYTE*)(v1 + *(int*)(v1 + 800)) = *(_BYTE*)(v2 + 490);
              *(_DWORD*)(v1 + 160 + 4LL * (int)(*(_DWORD*)(v1 + 800))++) =
                  (v15 | (v13 << 9)) - result;
            }
          }
        }
      }
    LABEL_3:
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
  v16 = *(_DWORD*)(v1 + 800);
  if (v16 >= 2) {
    v17 = 0;
    v18 = 7;
    do {
      if (v17 <= v16 - 2) {
        v19 = v16;
        if ((~((_BYTE)v17 - (_BYTE)v16) & 7) != 0) {
          v20 = 2LL - v16;
          v21 = (_BYTE*)(v1 - 1 + v16);
          result = v1 + 156 + 4LL * v16;
          v22 = (v18 + (_BYTE)v16) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v23 = *(v21 - 1);
              *(v21 - 1) = *v21;
              *v21 = v23;
              v24 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v24;
            }
            ++v20;
            --v22;
            --v21;
            result -= 4;
          } while (v22 != 0);
          v25 = -v20;
        }
        else {
          v25 = v16 - 2LL;
        }
        if ((unsigned __int64)(v19 - v17 - 2) >= 7) {
          v26 = (_DWORD*)(v1 + 164 + 4 * v25);
          v27 = (char*)(v1 - 3 + v25);
          v28 = v25 + 1;
          do {
            if (*(v26 - 1) < *v26) {
              v29 = v27[3];
              v27[3] = v27[4];
              v27[4] = v29;
              v30 = *(v26 - 1);
              *(v26 - 1) = *v26;
              *v26 = v30;
            }
            if (*(v26 - 2) < *(v26 - 1)) {
              v31 = v27[2];
              v27[2] = v27[3];
              v27[3] = v31;
              v32 = *(v26 - 2);
              *(v26 - 2) = *(v26 - 1);
              *(v26 - 1) = v32;
            }
            if (*(v26 - 3) < *(v26 - 2)) {
              v33 = v27[1];
              v27[1] = v27[2];
              v27[2] = v33;
              v34 = *(v26 - 3);
              *(v26 - 3) = *(v26 - 2);
              *(v26 - 2) = v34;
            }
            if (*(v26 - 4) < *(v26 - 3)) {
              v35 = *v27;
              *v27 = v27[1];
              v27[1] = v35;
              v36 = *(v26 - 4);
              *(v26 - 4) = *(v26 - 3);
              *(v26 - 3) = v36;
            }
            if (*(v26 - 5) < *(v26 - 4)) {
              v37 = *(v27 - 1);
              *(v27 - 1) = *v27;
              *v27 = v37;
              v38 = *(v26 - 5);
              *(v26 - 5) = *(v26 - 4);
              *(v26 - 4) = v38;
            }
            if (*(v26 - 6) < *(v26 - 5)) {
              v39 = *(v27 - 2);
              *(v27 - 2) = *(v27 - 1);
              *(v27 - 1) = v39;
              v40 = *(v26 - 6);
              *(v26 - 6) = *(v26 - 5);
              *(v26 - 5) = v40;
            }
            if (*(v26 - 7) < *(v26 - 6)) {
              v41 = *(v27 - 3);
              *(v27 - 3) = *(v27 - 2);
              *(v27 - 2) = v41;
              v42 = *(v26 - 7);
              *(v26 - 7) = *(v26 - 6);
              *(v26 - 6) = v42;
            }
            result = (unsigned int)*(v26 - 7);
            if (*(v26 - 8) < (unsigned int)result) {
              v43 = *(v27 - 4);
              *(v27 - 4) = *(v27 - 3);
              *(v27 - 3) = v43;
              v44 = *(v26 - 8);
              result = (unsigned int)*(v26 - 7);
              *(v26 - 8) = result;
              *(v26 - 7) = v44;
            }
            v26 -= 8;
            v27 -= 8;
            v28 -= 8;
          } while (v28 > v17);
        }
        v16 = *(_DWORD*)(v1 + 800);
      }
      ++v17;
      v18 += 7;
    } while (v17 < v16 - 1);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 4;
  return result;
}

__int64 AIOrder_11edea0(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  int v21;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  _BYTE* v49;
  __int64 v50;
  char v51;
  int v52;
  __int64 v53;
  _DWORD* v54;
  char* v55;
  __int64 v56;
  char v57;
  int v58;
  char v59;
  int v60;
  char v61;
  int v62;
  char v63;
  int v64;
  char v65;
  int v66;
  char v67;
  int v68;
  char v69;
  int v70;
  char v71;
  int v72;
  int v73;
  int v74;
  int v75;

  result = GameRoutine_11ed500();
  v3 = GameData_212ce90[0];
  v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                  556000);
  if (v4 != 0) {
    v5 = game_g_shared_system_skills_ptr;
    v6 = GameData_21306a0[0];
    do {
      if ((*(_BYTE*)(v4 + 416) & 0x31) != 0) {
        goto LABEL_4;
      }
      v74 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v5) & 0xFFF;
      result = game_HasSkill(v4 + 1744, &v74);
      if ((result & 1) != 0) {
        goto LABEL_4;
      }
      if (*(_WORD*)(v4 + 492) == 0 && *(_BYTE*)(v4 + 496) == 0) {
        v75 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
        result = game_HasSkill(v4 + 1744, &v75);
        if ((result & 1) != 0) {
          goto LABEL_4;
        }
      }
      v7 = *(unsigned __int8*)(v4 + 1983);
      v8 = 0;
      v9 = *GameData_212c878[0];
      do {
        v10 = v4 + v8;
        if (*(_WORD*)(v4 + v8 + 828) != 0 && (*(_BYTE*)(v10 + 831) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                               8LL *
                                                   *(unsigned __int16*)(v4 +
                                                                        v8 +
                                                                        828)) +
                                    72LL) < 8u ||
            (v11 = *(unsigned __int16*)(v10 + 836)) != 0 &&
                (*(_BYTE*)(v4 + v8 + 839) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v11) +
                                    72LL) < 8u ||
            (v12 = v4 + v8, *(_WORD*)(v4 + v8 + 844) != 0) &&
                (*(_BYTE*)(v12 + 847) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                               8LL *
                                                   *(unsigned __int16*)(v4 +
                                                                        v8 +
                                                                        844)) +
                                    72LL) < 8u ||
            (v13 = *(unsigned __int16*)(v12 + 852)) != 0 &&
                (*(_BYTE*)(v4 + v8 + 855) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v13) +
                                    72LL) < 8u ||
            (v14 = v4 + v8, *(_WORD*)(v4 + v8 + 860) != 0) &&
                (*(_BYTE*)(v14 + 863) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                               8LL *
                                                   *(unsigned __int16*)(v4 +
                                                                        v8 +
                                                                        860)) +
                                    72LL) < 8u ||
            (v15 = *(unsigned __int16*)(v14 + 868)) != 0 &&
                (*(_BYTE*)(v4 + v8 + 871) & 1) != 0 &&
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v15) +
                                    72LL) < 8u) {
          v16 = 256;
          goto LABEL_32;
        }
        v8 += 48;
      } while (v8 != 240);
      v16 = 0;
    LABEL_32:
      v17 = *(_QWORD*)v6;
      v73 = *(_DWORD*)(v4 + 1976) & 0x400 | 0x28000;
      result = AIDeploy_1274f90(v17, v4, 100, &v73);
      v18 = *(_QWORD*)(GameData_21ca310 + 56);
      v19 = (_QWORD*)(v18 + 552960);
      v20 = (__int64*)(v18 + 556000);
      v21 = LOBYTE(v20[3 * *(unsigned __int8*)(*v3 + 24) + 2]);
      if (LOBYTE(v20[3 * *(unsigned __int8*)(*v3 + 24) + 2]) == 0 || v21 == 3) {
        v23 = 128;
      }
      else {
        v29 = *v20;
        if (*v20 != 0) {
          v23 = 128;
          do {
            v30 = *(char*)(v29 + 584);
            v31 = *(char*)(v29 + 585);
            v29 = *(_QWORD*)(v29 + 432);
            v32 = v30 + 32 * v31;
            if (v32 >= 0x400) {
              v32 = 0;
            }
            v33 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v6 + 12880LL) +
                                      64LL + v32);
            if (v23 >= v33) {
              v23 = v33;
            }
          } while (v29 != 0);
          if (v21 == 1) {
          LABEL_56:
            v34 = v19[386];
            while (v34 != 0) {
              v35 = *(char*)(v34 + 584);
              v36 = *(char*)(v34 + 585);
              v34 = *(_QWORD*)(v34 + 432);
              v37 = v35 + 32 * v36;
              if (v37 >= 0x400) {
                v37 = 0;
              }
              v38 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v6 + 12880LL) +
                                        64LL + v37);
              if (v23 >= v38) {
                v23 = v38;
              }
            }
            if (v21 == 0 || v21 == 3) {
              goto LABEL_3;
            }
            goto LABEL_64;
          }
        }
        else {
          v23 = 128;
          if (v21 == 1) {
            goto LABEL_56;
          }
        }
      }
      v24 = v19[383];
      while (v24 != 0) {
        v25 = *(char*)(v24 + 584);
        v26 = *(char*)(v24 + 585);
        v24 = *(_QWORD*)(v24 + 432);
        v27 = v25 + 32 * v26;
        if (v27 >= 0x400) {
          v27 = 0;
        }
        v28 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v6 + 12880LL) + 64LL +
                                  v27);
        if (v23 >= v28) {
          v23 = v28;
        }
      }
      if (v21 != 2) {
        goto LABEL_56;
      }
    LABEL_64:
      v39 = v19[389];
      while (v39 != 0) {
        v40 = *(char*)(v39 + 584);
        v41 = *(char*)(v39 + 585);
        v39 = *(_QWORD*)(v39 + 432);
        v42 = v40 + 32 * v41;
        if (v42 >= 0x400) {
          v42 = 0;
        }
        v43 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v6 + 12880LL) + 64LL +
                                  v42);
        if (v23 >= v43) {
          v23 = v43;
        }
      }
    LABEL_3:
      *(_BYTE*)(a1 + *(int*)(a1 + 800)) = *(_BYTE*)(v4 + 490);
      *(_DWORD*)(a1 + 160 + 4LL * (int)(*(_DWORD*)(a1 + 800))++) =
          (v16 | (v7 << 9) | 0x80) - v23;
    LABEL_4:
      v4 = *(_QWORD*)(v4 + 432);
    } while (v4 != 0);
  }
  v44 = *(_DWORD*)(a1 + 800);
  if (v44 >= 2) {
    v45 = 0;
    v46 = 7;
    do {
      if (v45 <= v44 - 2) {
        v47 = v44;
        if ((~((_BYTE)v45 - (_BYTE)v44) & 7) != 0) {
          v48 = 2LL - v44;
          v49 = (_BYTE*)(a1 - 1 + v44);
          result = a1 + 156 + 4LL * v44;
          v50 = (v46 + (_BYTE)v44) & 7;
          do {
            if (*(_DWORD*)(result - 4) < *(_DWORD*)result) {
              v51 = *(v49 - 1);
              *(v49 - 1) = *v49;
              *v49 = v51;
              v52 = *(_DWORD*)(result - 4);
              *(_DWORD*)(result - 4) = *(_DWORD*)result;
              *(_DWORD*)result = v52;
            }
            ++v48;
            --v50;
            --v49;
            result -= 4;
          } while (v50 != 0);
          v53 = -v48;
        }
        else {
          v53 = v44 - 2LL;
        }
        if ((unsigned __int64)(v47 - v45 - 2) >= 7) {
          v54 = (_DWORD*)(a1 + 164 + 4 * v53);
          v55 = (char*)(a1 - 3 + v53);
          v56 = v53 + 1;
          do {
            if (*(v54 - 1) < *v54) {
              v57 = v55[3];
              v55[3] = v55[4];
              v55[4] = v57;
              v58 = *(v54 - 1);
              *(v54 - 1) = *v54;
              *v54 = v58;
            }
            if (*(v54 - 2) < *(v54 - 1)) {
              v59 = v55[2];
              v55[2] = v55[3];
              v55[3] = v59;
              v60 = *(v54 - 2);
              *(v54 - 2) = *(v54 - 1);
              *(v54 - 1) = v60;
            }
            if (*(v54 - 3) < *(v54 - 2)) {
              v61 = v55[1];
              v55[1] = v55[2];
              v55[2] = v61;
              v62 = *(v54 - 3);
              *(v54 - 3) = *(v54 - 2);
              *(v54 - 2) = v62;
            }
            if (*(v54 - 4) < *(v54 - 3)) {
              v63 = *v55;
              *v55 = v55[1];
              v55[1] = v63;
              v64 = *(v54 - 4);
              *(v54 - 4) = *(v54 - 3);
              *(v54 - 3) = v64;
            }
            if (*(v54 - 5) < *(v54 - 4)) {
              v65 = *(v55 - 1);
              *(v55 - 1) = *v55;
              *v55 = v65;
              v66 = *(v54 - 5);
              *(v54 - 5) = *(v54 - 4);
              *(v54 - 4) = v66;
            }
            if (*(v54 - 6) < *(v54 - 5)) {
              v67 = *(v55 - 2);
              *(v55 - 2) = *(v55 - 1);
              *(v55 - 1) = v67;
              v68 = *(v54 - 6);
              *(v54 - 6) = *(v54 - 5);
              *(v54 - 5) = v68;
            }
            if (*(v54 - 7) < *(v54 - 6)) {
              v69 = *(v55 - 3);
              *(v55 - 3) = *(v55 - 2);
              *(v55 - 2) = v69;
              v70 = *(v54 - 7);
              *(v54 - 7) = *(v54 - 6);
              *(v54 - 6) = v70;
            }
            result = (unsigned int)*(v54 - 7);
            if (*(v54 - 8) < (unsigned int)result) {
              v71 = *(v55 - 4);
              *(v55 - 4) = *(v55 - 3);
              *(v55 - 3) = v71;
              v72 = *(v54 - 8);
              result = (unsigned int)*(v54 - 7);
              *(v54 - 8) = result;
              *(v54 - 7) = v72;
            }
            v54 -= 8;
            v55 -= 8;
            v56 -= 8;
          } while (v56 > v45);
        }
        v44 = *(_DWORD*)(a1 + 800);
      }
      ++v45;
      v46 += 7;
    } while (v45 < v44 - 1);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 8;
  return result;
}

void AIOrder_11ee520()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;

  v0 = GameData_212ce90[0];
  v1 = *(_QWORD*)(GameData_21ca310 + 56) +
       24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v2 = *(_QWORD*)(v1 + 556000);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 556000);
    do {
      if (game_GameModeData_instance_ != 0) {
        v4 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      else {
        v4 = 0;
      }
      if (*(_QWORD*)(v3 + 392) == v4) {
        goto LABEL_9;
      }
      v3 = *(_QWORD*)(v3 + 432);
    } while (v3 != 0);
    v3 = *(_QWORD*)(v1 + 556000);
  LABEL_9:
    v5 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
        v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v5) & 0xFFF;
        if ((game_HasSkill(v2 + 1744, &v7) & 1) != 0) {
          goto LABEL_11;
        }
        if (*(_WORD*)(v2 + 492) == 0 && *(_BYTE*)(v2 + 496) == 0) {
          v8 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
          if ((game_HasSkill(v2 + 1744, &v8) & 1) != 0) {
            goto LABEL_11;
          }
        }
        v6 = *(unsigned __int8*)(*v0 + 25);
        if (v6 <= 4) {
          if (((1 << v6) & 0x13) != 0) {
            if (*(_BYTE*)(*v0 + 25) != 0) {
              goto LABEL_11;
            }
          }
          else if (*(unsigned __int8*)(v3 + 2088) !=
                       *(unsigned __int8*)(v2 + 2088) ||
                   v6 == 2) {
            goto LABEL_11;
          }
        }
        *(_DWORD*)(v2 + 1976) |= 0x20000u;
      }
    LABEL_11:
      v2 = *(_QWORD*)(v2 + 432);
    } while (v2 != 0);
  }
}

__int64 AIOrder_11ee690(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017b68;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 1;
  return result;
}

__int64 game_AIOrder_EnumerateEntrustSpecialSupport(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017bf8;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 2;
  return result;
}

__int64 AIOrder_11ee790(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017b68;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 3;
  return result;
}

__int64 AIOrder_11ee810(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017b68;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 4;
  return result;
}

__int64 AIOrder_11ee890(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017b68;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 5;
  return result;
}

__int64 AIOrder_11ee920(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  int v9;
  int v11;
  int v12;

  v1 = GameData_212ce90[0];
  if (*(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                 24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                 556000) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                    556000);
    while (1) {
      v3 = game_GameModeData_instance_ != 0
               ? *(_QWORD*)(game_GameModeData_instance_ + 96)
               : 0LL;
      if (*(_QWORD*)(v2 + 392) == v3) {
        break;
      }
      v2 = *(_QWORD*)(v2 + 432);
      if (v2 == 0) {
        v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                        24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                        556000);
        break;
      }
    }
    if ((*(_BYTE*)(v2 + 416) & 0x31) == 0) {
      v4 = result;
      v5 = game_g_shared_system_skills_ptr;
      v11 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      result = game_HasSkill(v2 + 1744, &v11);
      if ((result & 1) == 0) {
        v6 = v4;
        if (*(_WORD*)(v2 + 492) != 0 || *(_BYTE*)(v2 + 496) != 0 ||
            (v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF,
             result = game_HasSkill(v2 + 1744, &v12), v6 = v4,
             (result & 1) == 0)) {
          v7 = *(unsigned __int8*)(*v1 + 25);
          v8 = v7 > 4;
          v9 = (unsigned __int8)(0x400010100uLL >> (8 * (unsigned __int8)v7));
          if (!v8 && v9 == 1) {
            *(_BYTE*)(v6 + *(int*)(v6 + 800)) = *(_BYTE*)(v2 + 490);
            *(_DWORD*)(v6 + 4LL * (int)(*(_DWORD*)(v6 + 800))++ + 160) = 0;
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) =
                5;
          }
        }
      }
    }
  }
  return result;
}

__int64 AIOrder_11eea90(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_2017b68;
  v3_.v4 = v3_.v3;
  AIOrder_11ecb20(a1, (__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v2 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
  }
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 6;
  return result;
}

__int64 AIOrder_11eeb10(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 1;
  return result;
}

__int64 AIOrder_11eeb40(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 2;
  return result;
}

__int64 AIOrder_11eeb70(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 3;
  return result;
}

#pragma GCC visibility pop
