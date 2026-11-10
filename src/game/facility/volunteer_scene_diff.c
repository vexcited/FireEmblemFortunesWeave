#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) VolunteerSceneDiff_141d730() { __udf(0x8002u); };
__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke();
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1400c40(__int64, __int64*, char, __int64);
__int64 GameRoutine_195b020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneCharacter_14020c0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138d3a0(_QWORD, _QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_facility_SceneManager_CreateMob(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern __int64 GameData_2241750;
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1aa238b[];
extern char GameData_1aa5e95[];
extern char GameData_1ab561d[];
extern char GameData_1ad7e93[];
extern const char GameData_1a9e31c[];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void VolunteerSceneDiff_141d200(PSEUDO_X8 x8_,
                                                           __int64 a1);
unsigned __int64
game_facility_VolunteerSceneDiff_Initialize_lambda0_Invoke(__int64 a1);
unsigned __int64
game_facility_VolunteerSceneDiff_Initialize_lambda2_Invoke(__int64 a1);

__attribute__((swiftcall)) void VolunteerSceneDiff_141d200(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  v4 = game_util_Format(GameData_1ab561d, v3);
  result = game_HashString(v4);
  if (result == 0) {
    goto LABEL_34;
  }
  v6 = *(_QWORD*)(GameData_2241750 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_2241750 + 112) == 0) {
    goto LABEL_34;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_2241750 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_34;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_34;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_34;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_34;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_34;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_34;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  if (v11[3] != 0) {
    result = strlen(v4);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(result);
    }
    v14 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (result | 7) + 1;
      }
      v15 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
      *(_QWORD*)(a2 + 8) = v14;
      *(_QWORD*)(a2 + 16) = v15;
      *(_QWORD*)a2 = v17 | 1;
    }
    else {
      *(_BYTE*)a2 = 2 * result;
      v15 = a2 + 1;
      if (result == 0) {
      LABEL_41:
        v16 = 1;
        *(_BYTE*)(v15 + v14) = 0;
        goto LABEL_35;
      }
    }
    result = memmove(v15, v4, v14);
    goto LABEL_41;
  }
LABEL_34:
  v16 = 0;
  *(_BYTE*)a2 = 0;
LABEL_35:
  *(_BYTE*)(a2 + 24) = v16;
  {
    result;
    return;
  }
}

unsigned __int64

game_facility_VolunteerSceneDiff_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 result;
  __int64 v43;
  __int16 v44[12];
  __int16 v45[12];
  _QWORD v46[2];
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int128 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int128 v63;
  __int64 v64;
  __int64 v65;
  __int128* v66;
  __int64 v67;
  __int128 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char v79;
  char v80;
  __int64 v81;

  v66 = nullptr;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v63 = (__typeof__(v63)){0};
  *(_QWORD*)&v68 = 0;
  v2 = *(_QWORD*)(v1 + 24);
  v3 = v1 + 9;
  v61 = GameData_2131338[0] + 16;
  v62 = 0;
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 + 9;
  }
  v5 = strlen(v4);
  GameRoutine_1389160(&v61, v4, v5);
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, &v61);
  v61 = GameData_212e1c0 + 16;
  if (v66 == &v63) {
    v6 = 32;
    goto LABEL_8;
  }
  if (v66 != nullptr) {
    v6 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*(_QWORD*)v66 + v6))((__int64)v66);
  }
  v7 = 0;
  v8 = 1;
  do {
    v9 = v8;
    if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
      v10 = *(_QWORD*)(v1 + 24);
    }
    else {
      v10 = v3;
    }
    v11 = game_util_Format(GameData_1aa238b, v10, (unsigned int)v7);
    v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 16LL) + 8 * v7);
    LOBYTE(v66) = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    LOBYTE(v63) = 20;
    strcpy((char*)&v63 + 9, "_D");
    *(_QWORD*)((char*)&v63 + 1) = 0x335FAC9CE6BA9FE5LL;
    if (v12 != 0) {
      v13 = *(_QWORD*)(v12 + 392);
    }
    else {
      v13 = 0;
    }
    v46[0] = v13;
    SceneCharacterAppearance_140f320((void*)(&v48), (__int64)v46, v11);
    v61 = v48;
    v62 = v49;
    if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
      v14 = *(_QWORD*)(v1 + 24);
    }
    else {
      v14 = v3;
    }
    v15 = game_util_Format(GameData_1a9e31c, v14, (unsigned int)v7);
    v16 = strlen(v15);
    if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_85:
      String_60a1d0(v16);
    }
    v17 = v16;
    if (v16 >= 0x17) {
      if ((v16 | 7) == 0x17) {
        v19 = 26;
      }
      else {
        v19 = (v16 | 7) + 1;
      }
      v18 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0);
      v46[1] = v17;
      v47 = v18;
      v46[0] = v19 | 1;
    LABEL_28:
      memmove(v18, v15, v17);
      goto LABEL_29;
    }
    v18 = (char*)v46 + 1;
    LOBYTE(v46[0]) = 2 * v16;
    if (v16 != 0) {
      goto LABEL_28;
    }
  LABEL_29:
    v18[v17] = 0;
    v45[0] = 0;
    v44[0] = 0;
    GameRoutine_195b020(&v48, 1669996436, v46, v45, v44);
    LODWORD(v66) = v48;
    if (v79 != 1) {
      v25 = v52;
      v26 = v53;
      v52 = 0;
      v53 = 0;
      v70 = v25;
      v71 = v26;
      v27 = v56;
      v28 = v57;
      v68 = v50;
      v56 = 0;
      v57 = 0;
      v69 = v51;
      v74 = v27;
      v75 = v28;
      v29 = v54;
      v30 = v55;
      v54 = 0;
      v55 = 0;
      v72 = v29;
      v73 = v30;
      v32 = v59;
      v31 = v60;
      v59 = 0;
      v60 = 0;
      v77 = v32;
      v78 = v31;
      v33 = v58;
      v58 = 0;
      v76 = v33;
      v79 = 1;
    LABEL_51:
      if ((v52 & 1) == 0) {
        goto LABEL_58;
      }
    LABEL_54:
      if (v54 != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v34);
      }
      goto LABEL_58;
    }
    *(_QWORD*)&v20 = v50;
    *((_QWORD*)&v20 + 1) = DWORD2(v50);
    v69 = v51;
    v68 = v20;
    if ((v70 & 1) != 0 && v72 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v21);
    }
    v70 = v52;
    v71 = v53;
    LOWORD(v52) = 0;
    v72 = v54;
    if ((v73 & 1) != 0 && v75 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v22);
    }
    v73 = v55;
    v74 = v56;
    LOWORD(v55) = 0;
    v75 = v57;
    if ((v76 & 1) == 0 || v78 == 0) {
      v76 = v58;
      v77 = v59;
      LOWORD(v58) = 0;
      v78 = v60;
      if ((v52 & 1) == 0) {
        goto LABEL_58;
      }
      goto LABEL_54;
    }
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
    v76 = v58;
    v77 = v59;
    LOWORD(v58) = 0;
    v78 = v60;
    if ((v55 & 1) == 0 || v57 == 0) {
      goto LABEL_51;
    }
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    if ((v52 & 1) != 0) {
      goto LABEL_54;
    }
  LABEL_58:
    if ((v46[0] & 1) != 0 && v47 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v35);
    }
    v36 = *(_QWORD*)GameData_212dce8;
    v37 = game_util_Format(GameData_1aa5e95, (unsigned int)v7);
    v16 = strlen(v37);
    if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_85;
    }
    v38 = v16;
    if (v16 >= 0x17) {
      if ((v16 | 7) == 0x17) {
        v40 = 26;
      }
      else {
        v40 = (v16 | 7) + 1;
      }
      v39 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
      v49 = v38;
      *(_QWORD*)&v50 = v39;
      v48 = v40 | 1;
    }
    else {
      v39 = (char*)&v48 + 1;
      LOBYTE(v48) = 2 * v16;
      if (v16 == 0) {
        goto LABEL_72;
      }
    }
    memmove(v39, v37, v38);
  LABEL_72:
    v39[v38] = 0;
    SceneManager_138c000(v36, &v48, v12, &v61);
    if ((v48 & 1) != 0 && (_QWORD)v50 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v41);
    }
    GameRoutine_a0d9a0(&v61);
    v3 = v1 + 9;
    v7 = 1;
    v8 = 0;
  } while ((v9 & 1) != 0);
  result = X8CALL_X0(unsigned __int64,
                     VolunteerSceneDiff_141d200((void*)((__int64)&v61), v1));
  if ((BYTE8(v63) & 1) != 0) {
    result =
        game_facility_SceneManager_CreateMob(*(_QWORD*)GameData_212dce8, &v61);
    if (BYTE8(v63) == 1 && (v61 & 1) != 0 && (_QWORD)v63 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
    }
  }
  return result;
}

unsigned __int64

game_facility_VolunteerSceneDiff_Initialize_lambda2_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 result;
  __int64 v14;
  _BYTE v15[16];
  __int64 v16;
  char v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (_QWORD*)GameData_212dce8;
  v3 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v3 == 0) {
    goto LABEL_10;
  }
  v4 = v3;
  v5 = game_util_Format(GameData_1ad7e93, 0);
  v19 = SceneCharacter_14020c0(v4);
  SceneCharacterAppearance_140f320((void*)(&v20), (__int64)&v19, v5);
  v18 = nullptr;
  GameRoutine_1400c40(v4, &v20, 0, (__int64)v15);
  if (v18 == v15) {
    v6 = 32;
    goto LABEL_6;
  }
  if (v18 != nullptr) {
    v6 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*(_QWORD*)v18 + v6))((__int64)v18);
  }
  v7 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
LABEL_10:
  v8 = SceneManager_138e5e0(*v2, 1);
  if (v8 == 0) {
    goto LABEL_19;
  }
  v9 = v8;
  v10 = game_util_Format(GameData_1ad7e93, 1);
  v19 = SceneCharacter_14020c0(v9);
  SceneCharacterAppearance_140f320((void*)(&v20), (__int64)&v19, v10);
  v18 = nullptr;
  GameRoutine_1400c40(v9, &v20, 0, (__int64)v15);
  if (v18 == v15) {
    v11 = 32;
    goto LABEL_15;
  }
  if (v18 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*(_QWORD*)v18 + v11))((__int64)v18);
  }
  v12 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
LABEL_19:
  result = X8CALL_X0(unsigned __int64,
                     VolunteerSceneDiff_141d200((void*)((__int64)v15), v1));
  if (v17 == 1) {
    result = SceneManager_138d3a0(*v2, v15);
    if (v17 == 1 && (v15[0] & 1) != 0 && v16 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  return result;
}

__int64 game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _WORD v6[8];
  __int64 v7;
  _WORD v8[8];
  __int64 v9;
  _QWORD v10[2];
  __int64 v11;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 38) = 0;
  v8[0] = 0;
  v6[0] = 0;
  v10[0] = 41;
  v10[1] = 38;
  v11 = v1;
  *(_QWORD*)(v1 + 16) = 0xBBE489A5E55FA983LL;
  *(_QWORD*)(v1 + 24) = 0xB682E3AA83E35F95LL;
  *(_QWORD*)(v1 + 30) = 0x8883E3AB83E3B682LL;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  result = GameRoutine_1451020(v10, v8, v6);
  if ((v6[0] & 1) != 0 && v7 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
  }
  if ((v8[0] & 1) != 0 && v9 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v4);
  }
  if ((v10[0] & 1) != 0 && v11 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v5);
  }
  return result;
}

#pragma GCC visibility pop
