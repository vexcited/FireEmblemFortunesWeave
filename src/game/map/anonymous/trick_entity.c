#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e5dc0(_QWORD);
__int64 GameRoutine_6e9760(_QWORD);
__int64 GameRoutine_6e98a0(_QWORD);
__int64 GameRoutine_6ed580(_QWORD, _QWORD);
__int64 GameRoutine_6ed690(_QWORD, _QWORD);
__int64 GameRoutine_72ca20(_QWORD);
__int64 GameRoutine_7c8860(_QWORD);
__int64 GameRoutine_7cb980(__int64 result, int, int, int, int);
__int64 GameRoutine_7cbc00(__int64 result, __int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_UnitPool_GetNext(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21ca4e8;
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f9b028[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 TrickEntity_Unknown37(__int64 a1, _DWORD* a2);
__int64 TrickEntity_Unknown75(__int64 a1, int a2, int a3, char a4);
__int64 TrickEntity_Unknown92(__int64 a1, __int64 a2);
__int64 TrickEntity_Unknown95(__int64 a1, __int64 a2, __int64 a3);
__int64 TrickEntity_Unknown97(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 TrickEntity_7cbc00(__int64 result, __int64 a2);

__int64 TrickEntity_7cbc00(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  _BYTE v14[2];
  __int16 v15;

  *(_QWORD*)(result + 24) = -1;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 8) = *(_QWORD*)result;
  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_DWORD*)(result + 24) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v2);
  v3 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_DWORD*)(result + 28) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v3);
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_DWORD*)(result + 32) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v4);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_DWORD*)(result + 36) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v5);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  v7 = *(_QWORD*)(a2 + 8);
  v8 = *(unsigned __int8*)(v7 + v6);
  if (*(_BYTE*)(v7 + v6) != 0) {
    v10 = result;
    do {
      v11 = *(int*)(a2 + 20);
      v12 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      v13 = *(_BYTE*)(v12 + v11);
      *(_DWORD*)(a2 + 20) = v11 + 2;
      LOBYTE(v11) = *(_BYTE*)(v12 + v11 + 1);
      v15 = 0;
      v14[0] = v13;
      v14[1] = v11;
      result = GameRoutine_74e080(v10, v14);
      --v8;
    } while (v8 != 0);
  }
  return result;
}

__int64 TrickEntity_Unknown37(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  v4 = v3;
  if (v3 != 0) {
    if (*(_WORD*)(v3 + 224) != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                      8LL * (*a2 & 0xFFF));
      v6 = *(_QWORD*)(v3 + 24);
      if (v5 != 0) {
        LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
      }
      v8 = v5;
      LOBYTE(v3) = game_HasSkill(v6 + 384, &v8);
    }
    else {
      LOBYTE(v3) = 0;
    }
  }
  return (v4 != 0) & (unsigned __int8)v3;
}

__int64 TrickEntity_Unknown75(__int64 a1, int a2, int a3, char a4)
{
  __int64 result;
  unsigned __int8* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  unsigned int v19;
  char v20;
  char v21;
  unsigned __int8 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  char* v26;
  __int64* v27;
  __int64* v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  int v38;
  __int64 v39;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  if (result != 0) {
    v9 = (unsigned __int8*)result;
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    v12 = a2 - v10;
    if (a2 - v10 < 0) {
      v12 = v10 - a2;
    }
    v13 = a3 - v11;
    if (a3 - v11 < 0) {
      v13 = v11 - a3;
    }
    v14 = v13 + v12;
    v15 = v9[59];
    if (v15 != 3) {
      if (v15 == 2) {
        if (v14 != 1) {
          return 0;
        }
      }
      else if (v15 != 1 || v14 != 0) {
        return 0;
      }
      return 1;
    }
    if (v14 != 1) {
      return 0;
    }
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    v19 = ((unsigned int)(a2 - v17) >> 30) & 2 | (a3 - v18 < 0) | 4;
    if (a3 <= v18) {
      v19 = ((unsigned int)(a2 - v17) >> 30) & 2 | (a3 - v18 < 0);
    }
    v20 = a2 - v17 <= 0 ? v19 : v19 | 8;
    v21 = v20 - 1;
    v22 = (v21 & 0xF8) != 0 ? -1 : 0x3FFFFFF02FF0100uLL >> (8 * v21);
    if (v9[112] != v22) {
      return 0;
    }
    if ((a4 & 1) == 0) {
      return 1;
    }
    v23 = GameData_212ce98[0];
    v24 = *GameData_212ce98[0];
    if (*GameData_212ce98[0] == 0) {
      return 1;
    }
    v25 = 1;
    v26 = (char*)GameData_212cf50;
    v27 = GameData_212c930;
    v28 = GameData_212ce90[0];
    while (1) {
      v29 = v9[113];
      result = v25 - 1 >= v29;
      if (v25 - 1 >= v29) {
        break;
      }
      v30 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1)-v25 *
            v26[v9[112] + 1280];
      v31 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
      if (*(unsigned __int8*)(v24 + 26) <=
          (unsigned int)(unsigned __int8)(v30 - *(_BYTE*)(v24 + 24))) {
        return 0;
      }
      v32 = v31 - v25 * v26[v9[112] + 1284];
      result = 0;
      if (*(unsigned __int8*)(v24 + 27) >
          (unsigned int)(unsigned __int8)(v32 - *(_BYTE*)(v24 + 25))) {
        v33 = v30 + 32 * v32;
        v34 = (unsigned int)v33 >= 0x400 ? 0LL : (unsigned int)v33;
        if (*(_BYTE*)(*(_QWORD*)(v24 + 96) + v34 + 8) == 0 ||
            ((v35 =
                  *(_QWORD*)(GameData_21ca310 + 56) +
                  2224LL * *(unsigned __int8*)(*(_QWORD*)(v24 + 96) + v34 + 8),
              *(unsigned __int8*)(*(_QWORD*)(v24 + 96) + v34 + 8) <= 0xFAu)
                 ? (v36 = v35 == 2224)
                 : (v36 = true),
             v36 || *(_QWORD*)(v35 - 1832) == 0)) {
          v37 = *(_QWORD*)(*(_QWORD*)(*v27 + 64) +
                           8LL * *(unsigned __int16*)(*(_QWORD*)(v24 + 72) +
                                                      2 * v34 + 8));
          if ((*(unsigned __int8*)(v37 + 62) | *(unsigned __int8*)(v37 + 63)) ==
                  0 &&
              *(unsigned __int8*)(*(_QWORD*)(v37 + 48) + 40LL) != 255 &&
              *(unsigned __int8*)(*v23 + 18) >
                  (unsigned int)(unsigned __int8)(v30 - *(_BYTE*)(*v23 + 16)) &&
              *(unsigned __int8*)(*v23 + 19) >
                  (unsigned int)(unsigned __int8)(v32 - *(_BYTE*)(*v23 + 17))) {
            v38 = v33 >> 5;
            ++v25;
            v39 = *(_BYTE*)(*v28 + *(unsigned __int8*)(*v28 + 24) + 16) == 1
                      ? *(unsigned __int8*)(*v28 + 24)
                      : 0LL;
            if (((*(_DWORD*)(*(_QWORD*)(v24 + 160) + (v39 << 7) + 4LL * v38 +
                             8) >>
                  v30) &
                 1) != 0) {
              continue;
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 TrickEntity_Unknown92(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64** v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64** v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v6 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_BYTE*)(a1 + 10) = *(_BYTE*)(v3 + v2 + 1);
  if (v6 < 5) {
    if (v6 > 2) {
      GameRoutine_7cbc00(a1 + 56, a2);
    }
    else {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v19 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v20 = *(unsigned __int8*)(v18 + v17 + 1);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v21 = *(unsigned __int8*)(v18 + v17 + 2);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v22 = *(unsigned __int8*)(v18 + v17 + 3);
      v23 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a1 + 80) = -1;
      *(_QWORD*)(a1 + 88) = 0;
      *(_QWORD*)(a1 + 64) = v23;
      GameRoutine_7cb980(a1 + 56, v19, v20, v21, v22);
    }
    v39 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(a1 + 11) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39);
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(a1 + 12) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(a1 + 13) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(a1 + 14) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42);
    v43 = *(int*)(a2 + 20);
    v44 = v43 + 1;
    *(_DWORD*)(a2 + 20) = v43 + 1;
    if (v6 != 0) {
      *(_BYTE*)(a1 + 15) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43);
      v44 = *(_DWORD*)(a2 + 20);
    }
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_BYTE*)(a1 + 16) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44);
    v45 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_BYTE*)(a1 + 17) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45);
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_WORD*)(a1 + 20) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v46);
    if (v6 < 2) {
      v47 = 0;
    }
    else {
      v47 = GameRoutine_6e98a0(a2);
    }
    *(_QWORD*)(a1 + 32) = v47;
    result = GameRoutine_72ca20(a2);
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = result;
    if (v6 != 4) {
      return result;
    }
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    v49 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v48);
    *(_DWORD*)(a1 + 24) = v49;
    if ((unsigned int)(v49 - 1) < 2) {
      v51 = *(int*)(a2 + 20);
      v52 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      v53 = *(unsigned __int8*)(v52 + v51);
      *(_DWORD*)(a2 + 20) = v51 + 2;
      v54 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v51 + 3;
      v55 = *(unsigned __int8*)(v52 + v51 + 2);
      *(_DWORD*)(a2 + 20) = v51 + 4;
      v50 = v54 | (v55 << 16) | (*(unsigned __int8*)(v52 + v51 + 3) << 24);
      goto LABEL_84;
    }
    if (v49 == 3) {
      result = GameRoutine_6e5dc0(a2);
      if (result != 0) {
      LABEL_26:
        v50 = *(unsigned __int16*)(result + 16);
      LABEL_84:
        *(_DWORD*)(a1 + 28) = v50;
        return result;
      }
    }
    else {
      if (v49 != 4) {
        return result;
      }
      result = GameRoutine_7c8860(a2);
      if (result != 0) {
        goto LABEL_26;
      }
    }
    v50 = -1;
    goto LABEL_84;
  }
  GameRoutine_7cbc00(a1 + 56, a2);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(a1 + 11) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(a1 + 12) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(a1 + 13) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(a1 + 14) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(a1 + 15) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(a1 + 16) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(a1 + 17) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  v15 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  v16 = *(unsigned __int8*)(v15 + v14);
  if (v6 < 8) {
    *(_WORD*)(a1 + 20) = v16;
    if (v6 == 5) {
      v24 = 0;
      goto LABEL_9;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = v14 + 2;
    *(_WORD*)(a1 + 20) = v16 | (*(unsigned __int8*)(v15 + v14 + 1) << 8);
  }
  v25 = *(int*)(a2 + 20);
  v26 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  v27 = *(unsigned __int8*)(v26 + v25);
  *(_DWORD*)(a2 + 20) = v25 + 2;
  v24 = v27 | (*(unsigned __int8*)(v26 + v25 + 1) << 8);

LABEL_9:
  *(_WORD*)(a1 + 18) = v24;
  result = GameRoutine_6e9760(a2);
  *(_QWORD*)(a1 + 32) = result;
  v29 = 0;
  v30 = *(int*)(a2 + 20);
  v31 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  v32 = *(unsigned __int8*)(v31 + v30);
  *(_DWORD*)(a2 + 20) = v30 + 2;
  v33 = v32 | (*(unsigned __int8*)(v31 + v30 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v30 + 3;
  v34 = *(unsigned __int8*)(v31 + v30 + 2);
  *(_DWORD*)(a2 + 20) = v30 + 4;
  v35 = v33 | (v34 << 16) | (*(unsigned __int8*)(v31 + v30 + 3) << 24);
  if ((_DWORD)v35 != 0) {
    v36 = *(_QWORD*)(GameData_21ca060 + 136);
    if (v36 != 0 && *(_QWORD*)(GameData_21ca060 + 152) != 0) {
      v37 = v36 - 1;
      if ((v36 & (v36 - 1)) != 0) {
        v38 = v35;
        if (v36 <= v35) {
          v38 = (unsigned int)v35 % (unsigned int)v36;
        }
      }
      else {
        v38 = ((_DWORD)v36 - 1) & (unsigned int)v35;
      }
      v56 = *(__int64***)(*(_QWORD*)(GameData_21ca060 + 128) + 8 * v38);
      if (v56 == nullptr || (v57 = *v56) == nullptr) {
      LABEL_44:
        v29 = 0;
        goto LABEL_45;
      }
      if ((v36 & v37) == 0) {
        while (1) {
          v59 = v57[1];
          if (v59 == v35) {
            if (*((_DWORD*)v57 + 4) == (_DWORD)v35) {
              goto LABEL_87;
            }
          }
          else if ((v59 & v37) != v38) {
            goto LABEL_44;
          }
          v57 = (__int64*)*v57;
          v29 = 0;
          if (v57 == nullptr) {
            goto LABEL_45;
          }
        }
      }
      while (1) {
        v58 = v57[1];
        if (v58 == v35) {
          if (*((_DWORD*)v57 + 4) == (_DWORD)v35) {
          LABEL_87:
            v29 = v57[3];
            break;
          }
        }
        else {
          if (v58 >= v36) {
            v58 %= v36;
          }
          if (v58 != v38) {
            goto LABEL_44;
          }
        }
        v57 = (__int64*)*v57;
        if (v57 == nullptr) {
          goto LABEL_44;
        }
      }
    }
  }

LABEL_45:
  *(_QWORD*)(a1 + 40) = v29;
  v60 = *(int*)(a2 + 20);
  v61 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v60 + 1;
  v62 = *(unsigned __int8*)(v61 + v60);
  *(_DWORD*)(a2 + 20) = v60 + 2;
  v63 = v62 | (*(unsigned __int8*)(v61 + v60 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v60 + 3;
  v64 = *(unsigned __int8*)(v61 + v60 + 2);
  *(_DWORD*)(a2 + 20) = v60 + 4;
  v65 = v63 | (v64 << 16) | (*(unsigned __int8*)(v61 + v60 + 3) << 24);
  if ((_DWORD)v65 == 0) {
    goto LABEL_69;
  }
  v66 = *(_QWORD*)(GameData_21c9bd0 + 136);
  if (v66 == 0 || *(_QWORD*)(GameData_21c9bd0 + 152) == 0) {
    goto LABEL_69;
  }
  v68 = v66 - 1;
  if ((v66 & (v66 - 1)) != 0) {
    v69 = v65;
    if (v66 <= v65) {
      v69 = (unsigned int)v65 % (unsigned int)v66;
    }
  }
  else {
    v69 = ((_DWORD)v66 - 1) & (unsigned int)v65;
  }
  v70 = *(__int64***)(*(_QWORD*)(GameData_21c9bd0 + 128) + 8 * v69);
  if (v70 == nullptr || (v71 = *v70) == nullptr) {
  LABEL_69:
    v73 = 0;
    goto LABEL_70;
  }
  if ((v66 & v68) == 0) {
    while (1) {
      v74 = v71[1];
      if (v74 == v65) {
        if (*((_DWORD*)v71 + 4) == (_DWORD)v65) {
          goto LABEL_86;
        }
      }
      else if ((v74 & v68) != v69) {
        goto LABEL_69;
      }
      v71 = (__int64*)*v71;
      v73 = 0;
      if (v71 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (1) {
    v72 = v71[1];
    if (v72 == v65) {
      break;
    }
    if (v72 >= v66) {
      v72 %= v66;
    }
    if (v72 != v69) {
      goto LABEL_69;
    }
  LABEL_59:
    v71 = (__int64*)*v71;
    if (v71 == nullptr) {
      goto LABEL_69;
    }
  }
  if (*((_DWORD*)v71 + 4) != (_DWORD)v65) {
    goto LABEL_59;
  }

LABEL_86:
  v73 = v71[3];

LABEL_70:
  *(_QWORD*)(a1 + 48) = v73;
  v75 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v75 + 1;
  v76 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v75);
  *(_DWORD*)(a1 + 24) = v76;
  if ((unsigned int)(v76 - 1) < 2) {
    v78 = *(int*)(a2 + 20);
    v79 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v78 + 1;
    v80 = *(unsigned __int8*)(v79 + v78);
    *(_DWORD*)(a2 + 20) = v78 + 2;
    v81 = v80 | (*(unsigned __int8*)(v79 + v78 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v78 + 3;
    v82 = *(unsigned __int8*)(v79 + v78 + 2);
    *(_DWORD*)(a2 + 20) = v78 + 4;
    v77 = v81 | (v82 << 16) | (*(unsigned __int8*)(v79 + v78 + 3) << 24);
    goto LABEL_78;
  }
  if (v76 == 3) {
    result = GameRoutine_6e5dc0(a2);
    if (result == 0) {
      goto LABEL_77;
    }
  LABEL_74:
    v77 = *(unsigned __int16*)(result + 16);
  LABEL_78:
    *(_DWORD*)(a1 + 28) = v77;
  }
  else if (v76 == 4) {
    result = GameRoutine_7c8860(a2);
    if (result != 0) {
      goto LABEL_74;
    }
  LABEL_77:
    v77 = -1;
    goto LABEL_78;
  }
  if (v6 < 7) {
    *(_BYTE*)(a1 + 96) = 0;
  }
  else {
    v83 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    *(_BYTE*)(a1 + 96) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83);
  }
  return result;
}

__int64 TrickEntity_Unknown95(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  bool v21;
  unsigned int v22;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  int v30;
  int v31;
  char* v32;
  int v33;
  unsigned __int8* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  signed int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v52;
  bool v53;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v85;
  bool v86;
  unsigned int v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  int v93;
  unsigned int v94;
  __int64 v95;
  unsigned int v96;
  unsigned int v97;
  int v98;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  if ((result & 1) != 0) {
    v9 = *(unsigned __int8*)(a1 + 10);
    if (v9 == 6) {
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 584LL))(a1, a2);
      if (result != 0) {
        v28 = result;
        v29 = GameData_212ce98[0];
        v95 = *GameData_212ce98[0];
        v30 = GameRoutine_6ed580(result, a2);
        result = GameRoutine_6ed690(v28, a2);
        if (v30 <= (int)result) {
          v31 = result;
          v32 = (char*)&GameData_21ca4e8 +
                (*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
          v91 = v32[1280];
          v93 = v32[1284];
          v33 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
          v34 = (unsigned __int8*)*v29;
          v35 = v33;
          v36 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
          if (v36 - v31 <= v34[28]) {
            v37 = v34[28];
          }
          else {
            v37 = v36 - v31;
          }
          v38 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          if (v38 - v31 <= v34[29]) {
            v39 = v34[29];
          }
          else {
            v39 = v38 - v31;
          }
          v40 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
          if (v40 + v31 >= v34[30]) {
            v41 = v34[30];
          }
          else {
            v41 = v40 + v31;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          v42 = result + v31;
          if ((int)result + v31 >= v34[31]) {
            v42 = v34[31];
          }
          v89 = v42;
          v90 = v37;
          if (v39 <= v42 && v37 <= v41) {
            v96 = v35 * v35;
            v44 = v30 * v30;
            if (v91 * v91 <= (unsigned int)(v93 * v93)) {
              v78 = v37 + 32 * v39;
              do {
                v79 = v90;
                v92 = v78;
                do {
                  v80 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                  v81 = v79 - v80;
                  if (v79 - v80 < 0) {
                    v81 = v80 - v79;
                  }
                  v82 = v39 - result;
                  if (v39 - (int)result < 0) {
                    v82 = result - v39;
                  }
                  v83 = v82 + v81;
                  if (v83 >= v30 && v83 <= v31) {
                    v85 = v79 -
                          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                    v86 = (v39 - (int)result) * v93 < 1 || v85 * v85 > v96;
                    if (!v86 &&
                        (v39 - (int)result) * (v39 - (int)result) >= v44) {
                      v88 = v78 >= 0x400 ? 0 : v78;
                      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c930 +
                                                           64) +
                                                8LL *
                                                    *(unsigned __int16*)(*(_QWORD*)(v95 +
                                                                                    72) +
                                                                         2LL *
                                                                             v88 +
                                                                         8)) +
                                     216LL) &
                           8) == 0) {
                        v27 = *(_QWORD*)(a3 + 32);
                        v97 = v39;
                        v98 = v79;
                        if (v27 == 0) {
                        LABEL_153:
                          GameRoutine_60a310(v27, v7, v8);
                        }
                        result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                            *(_QWORD*)v27 + 48LL))(v27, &v98, &v97);
                      }
                    }
                  }
                  ++v78;
                  v21 = v79++ < v41;
                } while (v21);
                v78 = v92 + 32;
                v21 = v39++ < v89;
              } while (v21);
            }
            else {
              v45 = v37 + 32 * v39;
              do {
                v46 = v90;
                v94 = v45;
                do {
                  v47 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                  v48 = v46 - v47;
                  if (v46 - v47 < 0) {
                    v48 = v47 - v46;
                  }
                  v49 = v39 - result;
                  if (v39 - (int)result < 0) {
                    v49 = result - v39;
                  }
                  v50 = v49 + v48;
                  if (v50 >= v30 && v50 <= v31) {
                    v52 = v46 -
                          (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
                    v53 = v52 * v91 < 1 ||
                          (v39 - (int)result) * (v39 - (int)result) > v96;
                    if (!v53 && v52 * v52 >= v44) {
                      v55 = v45 >= 0x400 ? 0 : v45;
                      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c930 +
                                                           64) +
                                                8LL *
                                                    *(unsigned __int16*)(*(_QWORD*)(v95 +
                                                                                    72) +
                                                                         2LL *
                                                                             v55 +
                                                                         8)) +
                                     216LL) &
                           8) == 0) {
                        v27 = *(_QWORD*)(a3 + 32);
                        v97 = v39;
                        v98 = v46;
                        if (v27 == 0) {
                          goto LABEL_153;
                        }
                        result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                            *(_QWORD*)v27 + 48LL))(v27, &v98, &v97);
                      }
                    }
                  }
                  ++v45;
                  v21 = v46++ < v41;
                } while (v21);
                v45 = v94 + 32;
                v21 = v39++ < v89;
              } while (v21);
            }
          }
        }
      }
    }
    else if (v9 == 13) {
      v10 = *(_DWORD*)(a1 + 24);
      if (v10 > 2) {
        if (v10 == 3) {
          v66 = *(unsigned int*)(a1 + 28);
          if ((v66 & 0x80000000) == 0) {
            v67 = *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v66);
            if (v67 != 0) {
              v98 = 15;
              v68 = game_UnitPool_GetFirst(&v98);
              v98 = 15;
              result = game_UnitPool_GetNext(v68, &v98);
              if (v68 != 0) {
                v69 = v68;
                while (1) {
                LABEL_112:
                  v74 = result;
                  if (*(_QWORD*)(v69 + 392) == v67) {
                    result = GameRoutine_6c8a80(
                        v69, (unsigned int)*(char*)(v69 + 584),
                        (unsigned int)*(char*)(v69 + 585), a3);
                  }
                  if (v74 == 0) {
                    break;
                  }
                  result = *(_QWORD*)(v74 + 432);
                  v69 = v74;
                  if (result == 0) {
                    v75 = *(_QWORD*)(v74 + 440);
                    v69 = v74;
                    if (v75 != 0) {
                      v76 = *(unsigned __int8*)(v75 + 16);
                      result = 0;
                      v69 = v74;
                      if (v76 <= 8) {
                        v77 = 24LL * (unsigned int)v76 + 556024;
                        while (1) {
                          if (v76 <= 2) {
                            result =
                                *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           v77);
                            if (result != 0) {
                              break;
                            }
                          }
                          ++v76;
                          v77 += 24;
                          if (v76 == 9) {
                            result = 0;
                            v69 = v74;
                            goto LABEL_112;
                          }
                        }
                        v69 = v74;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (v10 == 4) {
          v56 = *(unsigned int*)(a1 + 28);
          if ((v56 & 0x80000000) == 0) {
            v57 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v56);
            if (v57 != 0) {
              v98 = 15;
              v58 = game_UnitPool_GetFirst(&v98);
              v98 = 15;
              result = game_UnitPool_GetNext(v58, &v98);
              if (v58 != 0) {
                while (1) {
                LABEL_100:
                  v70 = result;
                  v98 = *(_WORD*)(v57 + 16) & 0xFFF;
                  result = game_HasSkill(v58 + 1744, &v98);
                  if ((result & 1) != 0) {
                    result = GameRoutine_6c8a80(
                        v58, (unsigned int)*(char*)(v58 + 584),
                        (unsigned int)*(char*)(v58 + 585), a3);
                  }
                  if (v70 == 0) {
                    break;
                  }
                  result = *(_QWORD*)(v70 + 432);
                  v58 = v70;
                  if (result == 0) {
                    v71 = *(_QWORD*)(v70 + 440);
                    v58 = v70;
                    if (v71 != 0) {
                      v72 = *(unsigned __int8*)(v71 + 16);
                      result = 0;
                      v58 = v70;
                      if (v72 <= 8) {
                        v73 = 24LL * (unsigned int)v72 + 556024;
                        while (1) {
                          if (v72 <= 2) {
                            result =
                                *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                           v73);
                            if (result != 0) {
                              break;
                            }
                          }
                          ++v72;
                          v73 += 24;
                          if (v72 == 9) {
                            result = 0;
                            v58 = v70;
                            goto LABEL_100;
                          }
                        }
                        v58 = v70;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (v10 == 1) {
        v59 = *(unsigned __int8*)(a1 + 31);
        if (*(_BYTE*)(a1 + 31) != 0) {
          v60 = *(unsigned __int8*)(a1 + 30);
          if (*(_BYTE*)(a1 + 30) != 0) {
            v61 = *(unsigned __int8*)(a1 + 28);
            v62 = *(unsigned __int8*)(a1 + 29);
            v63 = v60 + v61;
            v64 = v59 + v62;
            do {
              v65 = v61;
              do {
                v27 = *(_QWORD*)(a3 + 32);
                v97 = v62;
                v98 = v65;
                if (v27 == 0) {
                  goto LABEL_153;
                }
                result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                    *(_QWORD*)v27 + 48LL))(v27, &v98, &v97);
                ++v65;
              } while (v65 < v63);
              ++v62;
            } while (v62 < v64);
          }
        }
      }
      else if (v10 == 2) {
        v11 = *(unsigned __int8*)(a1 + 30);
        v12 = *(unsigned __int8*)(a1 + 28);
        v13 = v12 - v11;
        v14 = v12 + v11;
        if (v13 <= *(unsigned __int8*)(GameData_21ca300 + 28)) {
          v15 = *(unsigned __int8*)(GameData_21ca300 + 28);
        }
        else {
          v15 = v13;
        }
        v16 = *(unsigned __int8*)(a1 + 29);
        v17 = v16 - v11;
        v18 = v16 + v11;
        if (v17 <= *(unsigned __int8*)(GameData_21ca300 + 29)) {
          v19 = *(unsigned __int8*)(GameData_21ca300 + 29);
        }
        else {
          v19 = v17;
        }
        if (v14 >= *(unsigned __int8*)(GameData_21ca300 + 30)) {
          v14 = *(unsigned __int8*)(GameData_21ca300 + 30);
        }
        v20 = v18 >= *(unsigned __int8*)(GameData_21ca300 + 31)
                  ? *(unsigned __int8*)(GameData_21ca300 + 31)
                  : v18;
        v21 = v19 > v20 || v15 > v14;
        if (!v21) {
          v22 = v14 + 1;
          do {
            v24 = v15;
            do {
              v25 = v24 - *(unsigned __int8*)(a1 + 28);
              if (v25 < 0) {
                v25 = *(unsigned __int8*)(a1 + 28) - v24;
              }
              v26 = v19 - *(unsigned __int8*)(a1 + 29);
              if (v26 < 0) {
                v26 = *(unsigned __int8*)(a1 + 29) - v19;
              }
              if (v26 + v25 <= v11) {
                v27 = *(_QWORD*)(a3 + 32);
                v97 = v19;
                v98 = v24;
                if (v27 == 0) {
                  goto LABEL_153;
                }
                result = (*(__int64 (**)(__int64, int*, unsigned int*))(
                    *(_QWORD*)v27 + 48LL))(v27, &v98, &v97);
              }
              ++v24;
            } while (v22 != v24);
          } while (v19++ != v20);
        }
      }
    }
  }
  return result;
}

__int64 TrickEntity_Unknown97(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  void (*v3)(_QWORD*, _QWORD*);
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  char* v14;
  __int64 v15;
  int v16;
  int v17;
  char* v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char* v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  char* v30;
  int v31;
  int v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  int v36;
  int v37;
  char* v38;
  __int64 i;
  int v40;
  int v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  char* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v56;
  int v58;
  char* v59;
  char* v60;
  __int64 v61;
  _QWORD v62[4];
  _QWORD* v63;

  v1 = a1;
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v62[0] = GameData_1f9b028;
  v2 = *a1;
  v62[1] = &v58;
  v3 = *(void (**)(_QWORD*, _QWORD*))(v2 + 752);
  v63 = v62;
  v3(a1, v62);
  if (v63 == v62) {
    v4 = 32;
  }
  else {
    if (v63 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v63 + v4))((__int64)v63);

LABEL_6:
  v6 = v59;
  v5 = v60;
  v7 = v60 - v59;
  if (v60 != v59) {
    v8 = *v59;
    v9 = v7 >> 2;
    v10 = (v7 >> 2) & 7;
    if ((unsigned __int64)(v7 >> 2) >= 8) {
      v14 = v59 + 16;
      v15 = 0;
      v12 = *v59;
      do {
        v16 = *(v14 - 16);
        v15 -= 8;
        if (v12 < v16) {
          v16 = v12;
        }
        if (v16 >= *(v14 - 12)) {
          v16 = *(v14 - 12);
        }
        if (v16 >= *(v14 - 8)) {
          v16 = *(v14 - 8);
        }
        if (v16 >= *(v14 - 4)) {
          v16 = *(v14 - 4);
        }
        if (v16 >= *v14) {
          v16 = *v14;
        }
        if (v16 >= v14[4]) {
          v16 = v14[4];
        }
        if (v16 >= v14[8]) {
          v16 = v14[8];
        }
        v17 = v14[12];
        v14 += 32;
        if (v16 >= v17) {
          v12 = v17;
        }
        else {
          v12 = v16;
        }
      } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v15);
      v11 = -v15;
      if (v10 == 0) {
      LABEL_36:
        v21 = v59[1];
        v22 = ((unsigned __int64)v7 >> 2) & 7;
        if (v9 >= 8) {
          v25 = v59 + 17;
          v26 = 0;
          v24 = v59[1];
          do {
            v27 = *(v25 - 16);
            v26 -= 8;
            if (v24 < v27) {
              v27 = v24;
            }
            if (v27 >= *(v25 - 12)) {
              v27 = *(v25 - 12);
            }
            if (v27 >= *(v25 - 8)) {
              v27 = *(v25 - 8);
            }
            if (v27 >= *(v25 - 4)) {
              v27 = *(v25 - 4);
            }
            if (v27 >= *v25) {
              v27 = *v25;
            }
            if (v27 >= v25[4]) {
              v27 = v25[4];
            }
            if (v27 >= v25[8]) {
              v27 = v25[8];
            }
            v28 = v25[12];
            v25 += 32;
            if (v27 >= v28) {
              v24 = v28;
            }
            else {
              v24 = v27;
            }
          } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v26);
          v23 = -v26;
          if (v22 == 0) {
          LABEL_63:
            if (v9 >= 8) {
              v34 = v59 + 16;
              v35 = 0;
              do {
                v36 = *(v34 - 16);
                v35 -= 8;
                if (v8 > v36) {
                  v36 = v8;
                }
                if (v36 <= *(v34 - 12)) {
                  v36 = *(v34 - 12);
                }
                if (v36 <= *(v34 - 8)) {
                  v36 = *(v34 - 8);
                }
                if (v36 <= *(v34 - 4)) {
                  v36 = *(v34 - 4);
                }
                if (v36 <= *v34) {
                  v36 = *v34;
                }
                if (v36 <= v34[4]) {
                  v36 = v34[4];
                }
                if (v36 <= v34[8]) {
                  v36 = v34[8];
                }
                v37 = v34[12];
                v34 += 32;
                if (v36 <= v37) {
                  v8 = v37;
                }
                else {
                  v8 = v36;
                }
              } while (-(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL) != v35);
              v33 = -v35;
              if (v22 == 0) {
              LABEL_90:
                if (v9 >= 8) {
                  v43 = v59 + 17;
                  v44 = 0;
                  v45 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
                  do {
                    v46 = *(v43 - 16);
                    v44 -= 8;
                    if (v21 > v46) {
                      v46 = v21;
                    }
                    if (v46 <= *(v43 - 12)) {
                      v46 = *(v43 - 12);
                    }
                    if (v46 <= *(v43 - 8)) {
                      v46 = *(v43 - 8);
                    }
                    if (v46 <= *(v43 - 4)) {
                      v46 = *(v43 - 4);
                    }
                    if (v46 <= *v43) {
                      v46 = *v43;
                    }
                    if (v46 <= v43[4]) {
                      v46 = v43[4];
                    }
                    if (v46 <= v43[8]) {
                      v46 = v43[8];
                    }
                    v47 = v43[12];
                    v43 += 32;
                    if (v46 <= v47) {
                      v21 = v47;
                    }
                    else {
                      v21 = v46;
                    }
                  } while (v45 != v44);
                  v42 = -v44;
                  if (v22 == 0) {
                  LABEL_117:
                    v51 = (*(__int64 (**)(_QWORD*))(*v1 + 56LL))(v1);
                    v52 = (*(__int64 (**)(_QWORD*))(*v1 + 64LL))(v1);
                    v13 = v59;
                    LOBYTE(v1) =
                        v51 < v12 || v52 < v24 || v8 < v51 || v21 < v52;
                    if (v59 == nullptr) {
                      return (v5 != v6) & (unsigned __int8)v1;
                    }
                    goto LABEL_130;
                  }
                }
                else {
                  v42 = 0;
                  if (v22 == 0) {
                    goto LABEL_117;
                  }
                }
                v48 = &v59[4 * v42 + 1];
                do {
                  v50 = *v48;
                  v48 += 4;
                  v49 = v50;
                  if (v21 <= v50) {
                    v21 = v49;
                  }
                  --v22;
                } while (v22 != 0);
                goto LABEL_117;
              }
            }
            else {
              v33 = 0;
              if (v22 == 0) {
                goto LABEL_90;
              }
            }
            v38 = &v59[4 * v33];
            for (i = v22; i != 0; --i) {
              v41 = *v38;
              v38 += 4;
              v40 = v41;
              if (v8 <= v41) {
                v8 = v40;
              }
            }
            goto LABEL_90;
          }
        }
        else {
          v23 = 0;
          v24 = v59[1];
          if (v22 == 0) {
            goto LABEL_63;
          }
        }
        v29 = v22;
        v30 = &v59[4 * v23 + 1];
        do {
          v32 = *v30;
          v30 += 4;
          v31 = v32;
          if (v24 >= v32) {
            v24 = v31;
          }
          --v29;
        } while (v29 != 0);
        goto LABEL_63;
      }
    }
    else {
      v11 = 0;
      v12 = *v59;
      if (v10 == 0) {
        goto LABEL_36;
      }
    }
    v18 = &v59[4 * v11];
    do {
      v20 = *v18;
      v18 += 4;
      v19 = v20;
      if (v12 >= v20) {
        v12 = v19;
      }
      --v10;
    } while (v10 != 0);
    goto LABEL_36;
  }
  v13 = v59;
  if (v59 == nullptr) {
    return (v5 != v6) & (unsigned __int8)v1;
  }

LABEL_130:
  v60 = v13;
  v56 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v56 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
                                v13);
  return (v5 != v6) & (unsigned __int8)v1;
}

#pragma GCC visibility pop
