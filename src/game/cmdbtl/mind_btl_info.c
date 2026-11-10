#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b95a48[3];
extern __int64 GameData_2203490;
__int64 MindBtlInfo_Unknown2(__int64 a1);
__int64 MindBtlInfo_Unknown4(__int64 a1);
__int64 MindBtlInfo_Unknown3(__int64 a1);
__int64 MindBtlInfo_Unknown5(__int64 a1);
_QWORD* GameRoutine_e9af40(_QWORD* __return_ptr, _QWORD);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_cmdbtl_MindBase_Destroy_MindBase(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 (*GameData_1fef388[])();
extern __int64 (*GameData_1fef408[])();
extern __int64 (*game_cmdbtl_MindBtlInfo_vtable[])();
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_edd9e0(void);
__int64 MindBtlInfo_Destructor(_QWORD* a1);
__int64 MindBtlInfo_edb660(__int64 a1);
__int64 MindBtlInfo_edc200(__int64* a1, _DWORD* a2);
__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);

__int64 MindBtlInfo_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  *a1 = game_cmdbtl_MindBtlInfo_vtable;
  v2 = GameData_212ea58;
  v10[0] = GameData_1fef388;
  v11 = v10;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v10);
  if (v11 == v10) {
    v3 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11 + v3))((__int64)v11);
LABEL_6:
  v4 = *v2;
  v8[0] = GameData_1fef408;
  v9 = v8;
  CmdbtlPartyNatives_e9a800(v4, v8);
  if (v9 == v8) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v9 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v9 + v5))((__int64)v9);
  }
  v6 = a1[12];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return game_cmdbtl_MindBase_Destroy_MindBase(a1);
}

__int64 MindBtlInfo_Unknown2(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown4(__int64 a1)
{
  return GameData_2203490 + ((__int64)*(int*)(a1 + 12) << 7) + 672;
}

__int64 MindBtlInfo_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

__int64 MindBtlInfo_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(unsigned int*)(a1 + 12);
  if ((unsigned int)v1 > 2) {
    v2 = 3;
  }
  else {
    v2 = GameData_1b95a48[v1];
  }
  return GameData_2203490 + (v2 << 7) + 672;
}

__int64 MindBtlInfo_edb660(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = GameData_212ea58;
  v10[0] = GameData_1fef388;
  v11 = v10;
  CmdbtlPartyNatives_e9a800(*GameData_212ea58, v10);
  if (v11 == v10) {
    v3 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v11 + v3))((__int64)v11);
LABEL_6:
  v4 = *v2;
  v8[0] = GameData_1fef408;
  v9 = v8;
  CmdbtlPartyNatives_e9a800(v4, v8);
  result = (__int64)v9;
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_10:
    result = (*(__int64 (**)(__int64))(*v9 + v6))((__int64)v9);
  }
  v7 = *(_QWORD**)(a1 + 88);
  v7[3] = v7[2];
  v7[6] = v7[5];
  return result;
}

__int64 MindBtlInfo_edc200(__int64* a1, _DWORD* a2)
{
  _DWORD* v2;
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char v20;
  unsigned int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  int* v58;
  int v59;
  __int64 v60;
  int v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  unsigned int v77;
  __int64* v79;
  unsigned int v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  int v84;
  __int64* v85;
  __int64* v86;

  v2 = a2 + 2;
  result = game_HasSkill(*(_QWORD*)a2 + 1744LL, a2 + 2);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v7 = *(_QWORD*)(v6 + 8LL * (*v2 & 0xFFF));
  if (*(_WORD*)(v7 + 512) == 0) {
    return result;
  }
  v8 = *(unsigned __int8*)(v7 + 279);
  v77 = *(unsigned __int8*)(v7 + 278);
  if ((*v2 & 0xFFF) != 0) {
    v9 = GameRoutine_84edc0(*(_QWORD*)a2 + 1744LL, *(_QWORD*)(v7 + 24) + 224LL);
    v6 = *(_QWORD*)(*v5 + 64);
    v10 = a2[2] & 0xFFF;
  }
  else {
    v10 = 0;
    v9 = 0;
  }
  v11 = *(unsigned __int8*)(*(_QWORD*)(v6 + 8 * v10) + 106LL);
  if (v11 == 1) {
    v14 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v14 != 0) {
      v15 = *(unsigned __int8*)(v14 + 16);
      if (v15 <= 3) {
        v16 = GameData_1a82ec0[v15];
      LABEL_16:
        v80 = v16;
        goto LABEL_17;
      }
    }
  }
  else if (v11 == 2) {
    v12 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
    if (v12 != 0) {
      v13 = *(_BYTE*)(v12 + 16);
    }
    else {
      v13 = 9;
    }
    v16 = 1 << v13;
    goto LABEL_16;
  }
  v80 = 0;
LABEL_17:
  result = (__int64)GameRoutine_e9af40(&v85, GameData_2203490);
  v17 = v85;
  v79 = v86;
  if (v85 != v86) {
    v76 = v9 + v8;
    while (1) {
      v18 = *v17;
      v19 = *(_QWORD*)(*v17 + 440);
      v20 = v19 != 0 ? *(_BYTE*)(v19 + 16) : 9;
      if (((v80 >> v20) & 1) != 0) {
        v21 = v18 != *(_QWORD*)a2;
        if (v77 <= v21 && v76 >= (int)v21) {
          v23 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*v2 & 0xFFF));
          v24 = *(unsigned __int16*)(v23 + 512);
          if (*(_WORD*)(v23 + 512) != 0) {
            break;
          }
        }
      }
    LABEL_19:
      if (++v17 == v79) {
        v17 = v85;
        goto LABEL_67;
      }
    }
    v25 = 0;
    v82 = v17;
    v83 = *(unsigned __int16*)(v23 + 512);
    v81 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*v2 & 0xFFF));
    while (1) {
      v27 = *(_QWORD*)(*(_QWORD*)(v23 + 520) + 16 * v25 + 8);
      v28 = v27 != 0 ? *(_WORD*)(v27 + 16) & 0xFFF : 0;
      v84 = v28;
      result = UnitSkillList_84cc00(v18 + 1648, &v84, 1);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_32:
      if (++v25 == v24) {
        goto LABEL_19;
      }
    }
    v29 = *(_QWORD*)(v18 + 1680);
    *(_QWORD*)(v18 + 1728) = 0;
    *(_QWORD*)(v18 + 1736) = 0;
    v30 = *(_QWORD*)(v18 + 1688) - v29;
    if ((int)((unsigned __int64)v30 >> 2) >= 1) {
      v31 = *v5;
      v32 = (int)(v30 >> 2);
      if (v32 <= 1) {
        v33 = 1;
      }
      else {
        v33 = (int)(v30 >> 2);
      }
      if (v32 < 4) {
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = v33 & 3;
        if (v39 == 0) {
          goto LABEL_49;
        }
        goto LABEL_47;
      }
      v40 = (_DWORD*)(v29 + 8);
      v41 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      do {
        v41 -= 4;
        v42 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 2) & 0xFFF));
        v43 = v37 | (1 << *(_BYTE*)(v42 + 104));
        *(_WORD*)(v18 + 1728) = v43;
        v44 = (1LL << *(_BYTE*)(v42 + 250)) | v36;
        *(_QWORD*)(v18 + 1736) = v44;
        v45 = (1 << *(_BYTE*)(v42 + 115)) | v35;
        *(_DWORD*)(v18 + 1732) = v45;
        v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v34;
        *(_WORD*)(v18 + 1730) = v46;
        v47 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 1) & 0xFFF));
        v48 = v43 | (1 << *(_BYTE*)(v47 + 104));
        *(_WORD*)(v18 + 1728) = v48;
        v49 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
        *(_QWORD*)(v18 + 1736) = v49;
        v50 = (1 << *(_BYTE*)(v47 + 115)) | v45;
        *(_DWORD*)(v18 + 1732) = v50;
        v51 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
        *(_WORD*)(v18 + 1730) = v51;
        v52 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*v40 & 0xFFF));
        v53 = v48 | (1 << *(_BYTE*)(v52 + 104));
        *(_WORD*)(v18 + 1728) = v53;
        v54 = (1LL << *(_BYTE*)(v52 + 250)) | v49;
        *(_QWORD*)(v18 + 1736) = v54;
        v55 = (1 << *(_BYTE*)(v52 + 115)) | v50;
        *(_DWORD*)(v18 + 1732) = v55;
        v56 = *(unsigned __int16*)(*(_QWORD*)(v52 + 24) + 1064LL) | v51;
        *(_WORD*)(v18 + 1730) = v56;
        LOWORD(v52) = v40[1];
        v40 += 4;
        v57 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8 * (v52 & 0xFFF));
        v37 = v53 | (1 << *(_BYTE*)(v57 + 104));
        *(_WORD*)(v18 + 1728) = v37;
        v36 = (1LL << *(_BYTE*)(v57 + 250)) | v54;
        *(_QWORD*)(v18 + 1736) = v36;
        result = (unsigned int)(1 << *(_BYTE*)(v57 + 115));
        v35 = result | v55;
        *(_DWORD*)(v18 + 1732) = v35;
        v34 = *(unsigned __int16*)(*(_QWORD*)(v57 + 24) + 1064LL) | v56;
        *(_WORD*)(v18 + 1730) = v34;
      } while (-(__int64)(v33 & 0xFFFFFFFFFFFFFFFCLL) != v41);
      v38 = -v41;
      v39 = v33 & 3;
      if (v39 != 0) {
      LABEL_47:
        v58 = (int*)(v29 + 4 * v38);
        do {
          v59 = *v58++;
          --v39;
          v60 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v59 & 0xFFF));
          v37 |= 1 << *(_BYTE*)(v60 + 104);
          *(_WORD*)(v18 + 1728) = v37;
          v36 |= 1LL << *(_BYTE*)(v60 + 250);
          *(_QWORD*)(v18 + 1736) = v36;
          v35 |= 1 << *(_BYTE*)(v60 + 115);
          *(_DWORD*)(v18 + 1732) = v35;
          v34 |= *(unsigned __int16*)(*(_QWORD*)(v60 + 24) + 1064LL);
          *(_WORD*)(v18 + 1730) = v34;
        } while (v39 != 0);
      }
    }
  LABEL_49:
    *(_DWORD*)(v18 + 416) |= 0x20000000u;
    if (*(_QWORD*)(*(_QWORD*)(v27 + 24) + 448LL) !=
        *(_QWORD*)(*(_QWORD*)(v27 + 24) + 456LL)) {
      v61 = *(_WORD*)(v27 + 16) & 0xFFF;
      v63 = a1[1];
      v62 = a1[2];
      if (v63 < v62) {
        *(_QWORD*)v63 = v18;
        *(_DWORD*)(v63 + 8) = v61;
        v26 = v63 + 16;
      }
      else {
        v64 = *a1;
        v65 = a1;
        v66 = v63 - *a1;
        v67 = (v66 >> 4) + 1;
        if (v67 >> 60 != 0) {
          GameRoutine_edd9e0();
        }
        v68 = v62 - v64;
        if (v68 >> 3 > v67) {
          v67 = v68 >> 3;
        }
        if ((unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFF0LL) {
          v69 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v69 = v67;
        }
        if (v69 != 0) {
          if (v69 >> 60 != 0) {
            GameRoutine_60a210(result);
          }
          v70 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v69, 16, 0);
        }
        else {
          v70 = 0;
        }
        v71 = v70 + v66;
        v72 = v70 + 16 * v69;
        *(_DWORD*)(v71 + 8) = v61;
        v73 = v70 + v66 - 16 * (v66 >> 4);
        *(_QWORD*)v71 = v18;
        v26 = v70 + v66 + 16;
        result = memcpy(v73, v64, v66);
        a1 = v65;
        *v65 = v73;
        v65[1] = v26;
        v65[2] = v72;
        if (v64 != 0) {
          v74 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v74 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v64);
        }
        v5 = &GameData_21c99b0;
        v23 = v81;
        v17 = v82;
      }
      v24 = v83;
      a1[1] = v26;
    }
    goto LABEL_32;
  }
LABEL_67:
  if (v17 != nullptr) {
    v86 = v17;
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, v17);
  }
  return result;
}

__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 16);
  v5 = *(_QWORD*)(v4 + 1680);
  if ((int)((unsigned __int64)(*(_QWORD*)(v4 + 1688) - v5) >> 2) >= 1) {
    *(_QWORD*)(v4 + 1688) = v5;
    v6 = *(_DWORD*)(v4 + 416) | 0x20000000;
    *(_QWORD*)(v4 + 1656) = *(_QWORD*)(v4 + 1648);
    *(_DWORD*)(v4 + 1672) = 0;
    *(_QWORD*)(v4 + 1728) = 0;
    *(_QWORD*)(v4 + 1736) = 0;
    *(_DWORD*)(v4 + 416) = v6;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_cmdbtl_MindBtlInfo_ClearSupportSkill_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 16);
  v5 = *(_DWORD*)(v4 + 416);
  if ((v5 & 0x20000000) != 0) {
    *(_DWORD*)(v4 + 416) = v5 & 0xDFFFFFFF;
    if ((v5 & 0x10000000) == 0) {
      *(_DWORD*)(v4 + 416) = v5 & 0xCFFFFFFF | 0x10000000;
      GameRoutine_6c51e0(v4);
      GameRoutine_6c6da0(v4);
      result = GameRoutine_6c6ec0(v4);
      *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
