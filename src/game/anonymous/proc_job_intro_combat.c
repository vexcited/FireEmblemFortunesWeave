#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10d49d0(_QWORD);
__int64 GameRoutine_1495240(void);
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21fa488;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcJobIntroCombat_Unknown3();
__attribute__((swiftcall)) void CostumeFile_9fea70(PSEUDO_X8, __int64 result,
                                                   __int64);
__attribute__((swiftcall)) void SceneCharacterAppearance_140ff30(PSEUDO_X8,
                                                                 _QWORD);
__attribute__((swiftcall)) void
    SceneCharacterAppearance_14100c0(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, _QWORD);
__int64 GameRoutine_175ceb0(__int64, __int64, __int64);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 JobFile_6774a0(_QWORD, _QWORD);
__int64 SceneManager_138c360(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c7e0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariable_Impl_Pop(_QWORD);
__int64 game_GameVariable_Impl_Push(_QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1aac336;
extern _UNKNOWN GameData_1ab3d9f;
extern _UNKNOWN GameData_1ac6c8e;
extern _UNKNOWN GameData_21fa480;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212d590[3];
extern __int64 GameData_1acefbe;
extern __int64 GameData_212dce8;
extern __int64 GameData_21fa470;
extern __int64 GameData_21fa478;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_a0d980(_QWORD);
void __attribute__((noreturn))
GameRoutine_a0d980_alt1() __asm__("GameRoutine_a0d980");
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcJobIntroCombat_a0ccc0(__int64 a1);
__int64 ProcJobIntroCombat_a0d700(__int64 a1);

__int64 ProcJobIntroCombat_a0ccc0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64* v31;
  float v32;
  unsigned int v33;
  int v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  float v64;
  unsigned int v65;
  int v66;
  __int128 v67;
  __int64 v68;
  __int128 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  _QWORD v76[3];
  _BYTE v77[25];
  char v78[23];
  int v79;
  __int128 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int16 v85;
  __int64 v86;
  __int16 v87;
  __int64 v88;
  char v89;
  char v90;
  __int64 v91;
  _BYTE v92[24];
  unsigned int v93;

  v2 = (__int64*)GameData_212dce8;
  v3 = *(_QWORD*)GameData_212dce8;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_BYTE*)(v5 + 28) = 0;
  *(_QWORD*)v77 = 33;
  *(_QWORD*)&v77[8] = 28;
  *(_QWORD*)&v77[16] = v5;
  *(_DWORD*)(v5 + 24) = -1132207196;
  *(_QWORD*)v5 = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)(v5 + 8) = 0x9783E35F8BBBE4B9LL;
  *(_QWORD*)(v5 + 16) = 0x83E3A482E3AC83E3LL;
  SceneManager_138c7e0(v3, v77);
  if ((v77[0] & 1) != 0 && *(_QWORD*)&v77[16] != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, *(_QWORD*)&v77[16]);
  }
  v7 = *v2;
  v77[0] = 32;
  v77[17] = 0;
  *(_QWORD*)&v77[1] = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)&v77[9] = 0xB595E65F8BBBE4B9LL;
  result = SceneManager_138c7e0(v7, v77);
  if ((v77[0] & 1) != 0 && *(_QWORD*)&v77[16] != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, *(_QWORD*)&v77[16]);
  }
  v10 = *(_QWORD*)(a1 + 192);
  if (v10 == 0) {
    return result;
  }
  v11 = *(int*)(a1 + 200);
  v13 = *(__int64**)(v10 + 40);
  v12 = *v13;
  if (v11 >= (v13[1] - *v13) >> 3) {
    GameRoutine_a0d980(result);
  }
  v14 = *(_QWORD*)(v12 + 8 * v11);
  if (v14 == 0) {
    return result;
  }
  game_GameVariable_Impl_Push(*(_QWORD*)(game_GameModeData_instance_ + 48));
  if (*(_WORD*)(v14 + 88) != 0) {
    v16 = 8LL * *(unsigned __int16*)(v14 + 88);
    v17 = 0;
    do {
      *(_QWORD*)&v77[8] = *(_QWORD*)(*(_QWORD*)(v14 + 96) + v17);
      *(_QWORD*)v77 = game_HashString(*(_QWORD*)&v77[8], v15);
      game_VariableManager_SetFlag(v77, 1);
      v17 += 8;
    } while (v16 != v17);
  }
  v18 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 24LL);
  v19 = *(_QWORD*)(v18 + 1392);
  *(_QWORD*)v92 = GameData_212d590[0] + 2;
  *(_QWORD*)&v92[8] = v19;
  *(_QWORD*)&v92[16] = *(_QWORD*)(v18 + 1400);
  v20 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v21 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v18 + 1392);
    if (v21 != 0) {
      v20 = *(_DWORD*)(v21 + 32);
    }
    else {
      v20 = 0;
    }
  }
  v93 = v20;
  game_VariableManager_SetFlag(v18 + 1392, 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fa480,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fa480) != 0) {
    GameData_21fa478 = (__int64)&GameData_1ac6c8e;
    GameData_21fa470 = game_HashString(&GameData_1ac6c8e, v72);
    __cxa_guard_release(&GameData_21fa480);
  }
  if (game_GameModeData_instance_ != 0 &&
      (v22 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21fa470)) !=
          0) {
    v23 = *(_DWORD*)(v22 + 32);
    v24 = *(_QWORD*)(v14 + 40);
    if (v24 == 0) {
      goto LABEL_35;
    }
  }
  else {
    LOBYTE(v23) = 0;
    v24 = *(_QWORD*)(v14 + 40);
    if (v24 == 0) {
      goto LABEL_35;
    }
  }
  CostumeFile_9fea70((void*)(v77), v24, *(_QWORD*)(v14 + 56));
  v25 = (unsigned __int8)v23;
  if ((_BYTE)v23 == 0) {
  LABEL_34:
    game_VariableManager_SetFlag(*(_QWORD*)(v24 + 24) + 1392LL, v25);
    goto LABEL_35;
  }
  if ((unsigned __int8)v23 == 2) {
    if ((v77[0] & 8) == 0) {
      v25 = 2;
      goto LABEL_34;
    }
  }
  else if ((unsigned __int8)v23 == 1 && (v77[0] & 4) == 0) {
    v25 = 1;
    goto LABEL_34;
  }
LABEL_35:
  *(_OWORD*)v77 = (__typeof__(*(_OWORD*)v77)){0};
  LOBYTE(v79) = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v77[16] = 20;
  strcpy(v78, "_D");
  *(_QWORD*)&v77[17] = 0x335FAC9CE6BA9FE5LL;
  SceneCharacterAppearance_140ff30((void*)(v76), v14);
  v26 = *(_OWORD*)v76;
  v27 = *(_QWORD*)&v77[8];
  *(_OWORD*)v76 = (__typeof__(*(_OWORD*)v76)){0};
  *(_OWORD*)v77 = v26;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v76[1];
  if (v76[1] != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76[1] + 8LL),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v90 |= 2u;
  v29 = *(unsigned __int8*)(v14 + 128);
  v30 = *(unsigned __int8*)(v14 + 129);
  v31 = GameData_212ce80[0];
  v32 = (float)((float)((float)(v29 | 0x100u) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
  if (*GameData_212ce80[0] != 0) {
    v33 = v29 + 32 * v30;
    if (v33 >= 0x400) {
      v33 = 0;
    }
    v34 = *(_DWORD*)(*(_QWORD*)(*GameData_212ce80[0] + 61464) + 20LL * v33);
  }
  else {
    v34 = 0;
  }
  HIDWORD(v76[0]) = v34;
  *(float*)v76 = v32 + -2.5f;
  *(_QWORD*)&v35 = v76[0];
  *((float*)&v35 + 2) =
      (float)((float)((float)((float)(v30 | 0x100u) * 5.0f) + 2.5f) +
              -0x1.4000000000000p+10f) +
      -2.5f;
  HIDWORD(v35) = 0;
  *(_OWORD*)v76 = v35;
  game_13f9460((void*)(&v73), v76);
  v79 = 0;
  v76[0] = v73;
  *(_QWORD*)&v36 = v73;
  if (v89 == 1) {
    v81 = 0;
    *((_QWORD*)&v36 + 1) = (unsigned int)v74;
    v80 = v36;
    if ((v82 & 1) != 0 && v84 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v84);
    }
    v83 = 0;
    v84 = 0;
    v82 = 0;
    if ((v85 & 1) != 0 && v86 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v86);
    }
    v85 = 0;
    v86 = 0;
    if ((v87 & 1) != 0 && v88 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v88);
    }
    v87 = 0;
  }
  else {
    *((_QWORD*)&v36 + 1) = (unsigned int)v74;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    v89 = 1;
    v80 = v36;
  }
  v40 = *(_QWORD*)GameData_212dce8;
  v41 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  *(_QWORD*)v41 = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)(v41 + 8) = 0x9783E35F8BBBE4B9LL;
  *(_QWORD*)(v41 + 16) = 0x83E3A482E3AC83E3LL;
  *(_BYTE*)(v41 + 28) = 0;
  v76[0] = 33;
  v76[1] = 28;
  v76[2] = v41;
  *(_DWORD*)(v41 + 24) = -1132207196;
  v42 = *(_QWORD*)(*(_QWORD*)(v14 + 40) + 8LL);
  v43 = strlen(v42);
  if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v43);
  }
  v44 = v43;
  if (v43 >= 0x17) {
    if ((v43 | 7) == 0x17) {
      v46 = 26;
    }
    else {
      v46 = (v43 | 7) + 1;
    }
    v45 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v46, 16, 0);
    v74 = v44;
    v75 = v45;
    v73 = v46 | 1;
    goto LABEL_72;
  }
  LOBYTE(v73) = 2 * v43;
  v45 = (char*)&v73 + 1;
  if (v43 != 0) {
  LABEL_72:
    memmove(v45, v42, v44);
  }
  v45[v44] = 0;
  SceneManager_138c360(v40, v76, &v73, v77);
  if ((v73 & 1) != 0 && v75 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v75);
  }
  if ((v76[0] & 1) != 0 && v76[2] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  v76[2]);
  }
  GameRoutine_a0d9a0(v77);
  *(_QWORD*)v92 = GameData_212d590[0] + 2;
  game_VariableManager_SetFlag(&v92[8], v93);
  *(_QWORD*)&v77[17] = 0x335FAC9CE6BA9FE5LL;
  LOBYTE(v79) = 0;
  v77[16] = 20;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  strcpy(v78, "_D");
  GameRoutine_682bc0(v76, &GameData_1acefbe);
  JobFile_6774a0(&v73, &GameData_1aac336);
  v50 = game_HashString(&GameData_1ab3d9f, v49);
  v51 = 0;
  if (v50 == 0) {
    v54 = fw_memory_g_heap_manager_ptr;
    v55 = (__int64*)GameData_212dce8;
    goto LABEL_107;
  }
  v52 = *GameData_212c878[0];
  v53 = *(_QWORD*)(*GameData_212c878[0] + 96);
  v54 = fw_memory_g_heap_manager_ptr;
  v55 = (__int64*)GameData_212dce8;
  if (v53 != 0 && *(_QWORD*)(v52 + 112) != 0) {
    v56 = v53 - 1;
    if ((v53 & (v53 - 1)) != 0) {
      v57 = v50;
      if (v50 >= v53) {
        v57 = v50 % v53;
      }
    }
    else {
      v57 = v56 & v50;
    }
    v58 = *(_QWORD**)(*(_QWORD*)(v52 + 88) + 8 * v57);
    if (v58 == nullptr || (v59 = (_QWORD*)*v58) == nullptr) {
    LABEL_106:
      v51 = 0;
      goto LABEL_107;
    }
    if ((v53 & v56) == 0) {
      while (1) {
        v61 = v59[1];
        if (v61 == v50) {
          if (v59[2] == v50) {
            goto LABEL_124;
          }
        }
        else if ((v61 & v56) != v57) {
          goto LABEL_106;
        }
        v59 = (_QWORD*)*v59;
        v51 = 0;
        if (v59 == nullptr) {
          goto LABEL_107;
        }
      }
    }
    while (1) {
      v60 = v59[1];
      if (v60 == v50) {
        if (v59[2] == v50) {
        LABEL_124:
          v51 = v59[3];
          break;
        }
      }
      else {
        if (v60 >= v53) {
          v60 %= v53;
        }
        if (v60 != v57) {
          goto LABEL_106;
        }
      }
      v59 = (_QWORD*)*v59;
      if (v59 == nullptr) {
        goto LABEL_106;
      }
    }
  }
LABEL_107:
  SceneCharacterAppearance_14100c0((void*)(v92), v76, &v73, v51);
  *(_OWORD*)v77 = *(_OWORD*)v92;
  v62 = *(unsigned __int8*)(v14 + 128);
  v63 = *(unsigned __int8*)(v14 + 129);
  v90 = 2;
  v64 = (float)((float)((float)(v62 | 0x100u) * 5.0f) + 2.5f) +
        -0x1.4000000000000p+10f;
  if (*v31 != 0) {
    v65 = v62 + 32 * v63;
    if (v65 >= 0x400) {
      v65 = 0;
    }
    v66 = *(_DWORD*)(*(_QWORD*)(*v31 + 61464) + 20LL * v65 + 8);
  }
  else {
    v66 = 0;
  }
  *(_DWORD*)&v92[4] = v66;
  *(float*)v92 = v64 + 2.5f;
  *(_QWORD*)&v67 = *(_QWORD*)v92;
  *((_QWORD*)&v67 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)(v63 | 0x100u) * 5.0f) + 2.5f) +
              -0x1.4000000000000p+10f) +
      2.5f);
  *(_OWORD*)v92 = v67;
  game_13f9460((void*)(v76), v92);
  v68 = *v55;
  v79 = 0;
  v81 = 0;
  v82 = 0;
  v85 = 0;
  v87 = 0;
  v92[17] = 0;
  v89 = 1;
  BYTE6(v76[2]) = 0;
  *(_QWORD*)&v69 = v76[0];
  v92[0] = 32;
  *(_QWORD*)&v92[1] = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)&v92[9] = 0xB595E65F8BBBE4B9LL;
  LOBYTE(v76[0]) = 42;
  *((_QWORD*)&v69 + 1) = LODWORD(v76[1]);
  *(_QWORD*)((char*)v76 + 1) = 0xE3A283E35F444950LL;
  *(_QWORD*)((char*)&v76[1] + 1) = 0xA3E59897E95F9683LL;
  *(_QWORD*)((char*)&v76[1] + 6) = 0xB794E75FABA3E598LL;
  v80 = v69;
  SceneManager_138c360(v68, v92, v76, v77);
  if ((v76[0] & 1) != 0 && v76[2] != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v54 + v70, v76[2]);
  }
  if ((v92[0] & 1) != 0 && *(_QWORD*)&v92[16] != 0) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v54 + v71, *(_QWORD*)&v92[16]);
  }
  GameRoutine_a0d9a0(v77);
  return game_GameVariable_Impl_Pop(
      *(_QWORD*)(game_GameModeData_instance_ + 48));
}

__int64 ProcJobIntroCombat_a0d700(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;

  v1 = *(int*)(a1 + 200);
  v2 = **(_QWORD**)(*(_QWORD*)(a1 + 192) + 40LL);
  if (v1 >= (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 192) + 40LL) + 8LL) - v2) >>
      3) {
    GameRoutine_a0d980_alt1();
  }
  return GameRoutine_175ceb0(a1, *(_QWORD*)(*(_QWORD*)(v2 + 8 * v1) + 56LL),
                             *(_QWORD*)(*(_QWORD*)(v2 + 8 * v1) + 40LL));
}

__int64 ProcJobIntroCombat_Unknown3()
{
  int v0;
  int v1;
  __int64 result;
  __int64 v3;
  __int64 v4;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 >
          2 ||
      (((v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v1 = 2)
           : (v1 = 3),
       (v1 & v0) != 0)) {
    if ((((__int64 (*)(void))GameRoutine_10d49d0)() & 1) != 0 &&
        GameData_21fa488 != 0) {
      *(_BYTE*)(GameData_21fa488 + 204) = 1;
    }
  }
  result = GameRoutine_1495240();
  if (GameData_21ec7b0 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v3 != 0 && (*(_BYTE*)(v3 + 113) & 8) != 0 &&
        game_ProcGameSkipView_instance_ != 0 &&
        (*(_BYTE*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0) {
      result = GameRoutine_10d49d0(result);
      if ((result & 1) != 0) {
        v4 = game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
          *(_DWORD*)(v4 + 156) &= ~2u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
