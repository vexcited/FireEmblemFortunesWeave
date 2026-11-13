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
_QWORD** GameRoutine_1469c40(_QWORD** result, __int64, _QWORD*);
_QWORD* GameHr_1090da0(__int64);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__int64 GameHr_10d6d40(__int64*, int*, int*);
__int64 GameHr_7a88a0(__int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_combat_CombatSequenceImpl_CombatSequenceImpl(__int64, __int64,
                                                          __int64);
__int64 game_facility_14187c0(__int64 result);
__int64 game_facility_142b1a0(unsigned __int8, __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_21a61a0;
extern __int64* GameData_212d1e8;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int strcmp(const char*, const char*);
void GameHr_10eb860(__int64, __int64);
void GameHr_a0eb00(__int64);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcJobIntroCombat_Unknown23(__int64 a1);

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
  DWORD3(v35) = 0;
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

void ProcJobIntroCombat_Unknown23(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float32x4_t* v41;
  __int64 v42;
  float32x4_t v43;
  float32x4_t* v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float v49;
  int8x16_t v50;
  float32x4_t v51;
  int8x16_t v52;
  __int128 v53;
  float32x4_t v54;
  float v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float v60;
  int8x16_t v61;
  __int128 v62;
  float32x4_t v63;
  float v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  __int64 v69;
  __int64 v70;
  char v71;
  char v72;
  __int64 v73;
  __int64 v74;
  char v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int32 v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  const char* v90;
  int v91;
  unsigned __int64 v92;
  __int64 v93;
  int v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  int v102;
  __int64 v103;
  int v104;
  __int64 v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  int8x16_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  int8x16_t v114;
  float32x4_t v115;
  _BYTE v116[24];
  struct {
    unsigned __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    unsigned __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
  } v117_;
  struct {
    __int64 v141;
    unsigned __int64 v142;
    unsigned __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    int v157;
    char gap396_[4];
    const char* v158;
    int v159;
  } v141_;
  float32x4_t v160;

  v117_.v117 = 0;
  v117_.v118 = 0;
  v117_.v121 = 0;
  v117_.v122 = 0;
  v117_.v123 = 0;
  v117_.v124 = 0;
  v117_.v127 = 0;
  v117_.v128 = 0;
  v117_.v129 = 0;
  v117_.v130 = 0;
  v117_.v133 = 0;
  v117_.v134 = 0;
  v117_.v135 = 0;
  v117_.v136 = 0;
  v141_.v158 = nullptr;
  v141_.v159 = 0;
  v117_.v139 = 0;
  v117_.v140 = 0;
  v141_.v141 = 0;
  v141_.v142 = 0;
  v141_.v143 = 0;
  v141_.v144 = 0;
  v141_.v145 = 0;
  v141_.v146 = 0;
  v141_.v147 = 0;
  v141_.v148 = 0;
  v117_.v119 = 0x800000014LL;
  v117_.v120 = 0;
  v117_.v125 = 0x800000014LL;
  v117_.v126 = 0;
  v117_.v131 = 0x800000014LL;
  v117_.v132 = 0;
  v117_.v137 = 0x800000014LL;
  v117_.v138 = 0;
  v2 = (__int64*)GameData_212dce8;
  v3 = *(_QWORD*)GameData_212dce8;
  v141_.v149 = 0;
  v141_.v150 = 0;
  v141_.v151 = 0;
  v141_.v152 = 0;
  v141_.v153 = 0;
  v141_.v154 = 0;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  v141_.v155 = 0;
  v141_.v156 = 0;
  v141_.v157 = 0;
  v6 = fw_memory_HeapManager_Allocate_alt1(v5, 32, 16, 0);
  *(_BYTE*)(v6 + 28) = 0;
  *(_QWORD*)v116 = 33;
  *(_QWORD*)&v116[8] = 28;
  *(_QWORD*)&v116[16] = v6;
  *(_DWORD*)(v6 + 24) = -1132207196;
  *(_QWORD*)v6 = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)(v6 + 8) = 0x9783E35F8BBBE4B9LL;
  *(_QWORD*)(v6 + 16) = 0x83E3A482E3AC83E3LL;
  v7 = *(__int64**)(v3 + 160);
  v8 = *(__int64**)(v3 + 168);
  if (v7 == v8) {
    v9 = nullptr;
    v17 = *(_QWORD*)&v116[16];
    if (*(_QWORD*)&v116[16] == 0) {
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  while (1) {
    v10 = *v7++;
    v9 = (_QWORD*)v10;
    v11 = *(_QWORD*)(v10 + 40);
    v12 = v10 + 25;
    v13 = (*(_BYTE*)(v10 + 24) & 1) != 0 ? v11 : v12;
    v14 = *(_BYTE**)&v116[16];
    v15 = (unsigned __int64)v116[0] >> 1;
    if ((v116[0] & 1) != 0) {
      v15 = *(_QWORD*)&v116[8];
    }
    else {
      v14 = &v116[1];
    }
    LANES128(v160).n128_u64[0] = (unsigned __int64)v14;
    LANES128(v160).n128_u64[1] = v15;
    v16 = game_HashString_alt1(v13);
    if (v16 == GameHr_7a88a0((__int64*)&v160)) {
      break;
    }
    if (v7 == v8) {
      v9 = nullptr;
      break;
    }
  }
  if ((v116[0] & 1) != 0) {
    v17 = *(_QWORD*)&v116[16];
    if (*(_QWORD*)&v116[16] != 0) {
    LABEL_13:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v18, v17);
    }
  }
LABEL_16:
  v19 = *v2;
  v116[17] = 0;
  v116[0] = 32;
  v20 = *(__int64**)(v19 + 160);
  v21 = *(__int64**)(v19 + 168);
  *(_QWORD*)&v116[1] = 0xB4E7AEA8E7B585E5LL;
  *(_QWORD*)&v116[9] = 0xB595E65F8BBBE4B9LL;
  if (v20 == v21) {
    if (v9 == nullptr) {
      goto LABEL_122;
    }
    v22 = nullptr;
  }
  else {
    while (1) {
      v23 = *v20++;
      v22 = (_QWORD*)v23;
      v24 = *(_QWORD*)(v23 + 40);
      v25 = v23 + 25;
      v26 = (*(_BYTE*)(v23 + 24) & 1) != 0 ? v24 : v25;
      LANES128(v160).n128_u64[0] = (unsigned __int64)&v116[1];
      LANES128(v160).n128_u64[1] = (unsigned __int64)v116[0] >> 1;
      v27 = game_HashString_alt1(v26);
      if (v27 == GameHr_7a88a0((__int64*)&v160)) {
        break;
      }
      if (v20 == v21) {
        v22 = nullptr;
        break;
      }
    }
    if (v9 == nullptr) {
      if (v22 == nullptr) {
        goto LABEL_122;
      }
      v28 = 1;
      goto LABEL_37;
    }
  }
  v117_.v122 = *(_QWORD*)(a1 + 192);
  v117_.v118 = v9[1];
  v29 = v9[24];
  v30 = v9[25];
  if (v30 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                              memory_order_relaxed);
    v32 = *(_QWORD*)(v29 + 16);
    v31 = *(_QWORD*)(v29 + 24);
    *(_QWORD*)v116 = v32;
    *(_QWORD*)&v116[8] = v31;
    game_13f9200((void*)(&v160), (int8x16_t*)v116);
    v117_.v117 =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v160).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v160, v160, 8u)).n128_u64[0])))
            .n64_u64[0];
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt1(v30);
    }
    if (v22 == nullptr) {
    LABEL_95:
      v81 = v9[18];
      v82 = v9[19];
      v83 = -1193575789;
      if (v82 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                                  memory_order_relaxed);
        v84 = *(_QWORD*)(v81 + 8);
        if (v84 != 0 &&
            (v85 = *(_QWORD**)(v84 + 8), LANES128(v160).n128_u64[0] = 0,
             *(_QWORD*)v116 = &v160,
             GameRoutine_1469c40((_QWORD**)v116, (__int64)v116, v85),
             LANES128(v160).n128_u64[0] != 0)) {
          v87 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) +
                           LANES128(v160).n128_u64[0]);
          v86 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) +
                           LANES128(v160).n128_u64[0] + 8);
          if (v86 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v86 + 8), 1u,
                                      memory_order_relaxed);
          }
        }
        else {
          v87 = 0;
          v86 = 0;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
          std___1___shared_weak_count___release_weak_alt1(v82);
        }
      }
      else {
        v88 = *(_QWORD*)(v81 + 8);
        if (v88 == 0 ||
            (v89 = *(_QWORD**)(v88 + 8), LANES128(v160).n128_u64[0] = 0,
             *(_QWORD*)v116 = &v160,
             GameRoutine_1469c40((_QWORD**)v116, (__int64)v116, v89),
             LANES128(v160).n128_u64[0] == 0)) {
        LABEL_115:
          v91 = game_facility_142b1a0(3u, (__int64)v9);
          v92 = v141_.v142;
          *(_DWORD*)v116 = v91;
          LANES128(v160).n128_u32[0] = v83;
          if (v141_.v142 >= v141_.v143) {
            v93 = GameHr_10d6d40(&v141_.v141, (int*)v116, (int*)&v160);
          }
          else {
            *(_QWORD*)(v141_.v142 + 16) = 0;
            *(_QWORD*)(v92 + 24) = 0;
            *(_QWORD*)(v92 + 8) = 0;
            v93 = v92 + 32;
            *(_DWORD*)v92 = v91;
            *(_DWORD*)(v92 + 4) = v83;
          }
          v141_.v142 = v93;
          v94 = game_facility_142b1a0(2u, (__int64)v9);
          v95 = v141_.v142;
          *(_DWORD*)v116 = v94;
          LANES128(v160).n128_u32[0] = 1400556095;
          if (v141_.v142 >= v141_.v143) {
            v96 = GameHr_10d6d40(&v141_.v141, (int*)v116, (int*)&v160);
          }
          else {
            *(_QWORD*)(v141_.v142 + 16) = 0;
            *(_QWORD*)(v95 + 24) = 0;
            *(_QWORD*)(v95 + 8) = 0;
            v96 = v95 + 32;
            *(_DWORD*)v95 = v94;
            *(_DWORD*)(v95 + 4) = 1400556095;
          }
          v141_.v142 = v96;
          goto LABEL_122;
        }
        v87 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) +
                         LANES128(v160).n128_u64[0]);
        v86 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) +
                         LANES128(v160).n128_u64[0] + 8);
        if (v86 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v86 + 8), 1u,
                                    memory_order_relaxed);
        }
      }
      if (v87 != 0) {
        v90 = *(const char**)(v87 + 11616);
        if (v90 != nullptr) {
          if (strcmp(v90, "Rod_Lizaia") != 0) {
            v83 = -1193575789;
          }
          else {
            v83 = 232551549;
          }
        }
      }
      if (v86 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
        std___1___shared_weak_count___release_weak_alt1(v86);
      }
      goto LABEL_115;
    }
  }
  else {
    v34 = *(_QWORD*)(v29 + 16);
    v33 = *(_QWORD*)(v29 + 24);
    *(_QWORD*)v116 = v34;
    *(_QWORD*)&v116[8] = v33;
    game_13f9200((void*)(&v160), (int8x16_t*)v116);
    v117_.v117 =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v160).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v160, v160, 8u)).n128_u64[0])))
            .n64_u64[0];
    if (v22 == nullptr) {
      goto LABEL_95;
    }
  }
  v28 = 0;
LABEL_37:
  v117_.v124 = v22[1];
  v35 = v22[24];
  v36 = v22[25];
  if (v36 == 0) {
    v40 = *(_QWORD*)(v35 + 16);
    v39 = *(_QWORD*)(v35 + 24);
    *(_QWORD*)v116 = v40;
    *(_QWORD*)&v116[8] = v39;
    game_13f9200((void*)(&v160), (int8x16_t*)v116);
    v117_.v123 =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v160).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v160, v160, 8u)).n128_u64[0])))
            .n64_u64[0];
    if ((v28 & 1) != 0) {
      goto LABEL_122;
    }
  LABEL_43:
    v41 = (float32x4_t*)v9[24];
    v42 = v9[25];
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
      v43 = v41[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v112 = v43;
        (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
        std___1___shared_weak_count___release_weak_alt1(v42);
        v43 = v112;
      }
      v44 = (float32x4_t*)v22[24];
      v45 = v22[25];
      if (v45 != 0) {
        goto LABEL_47;
      }
    }
    else {
      v43 = v41[1];
      v44 = (float32x4_t*)v22[24];
      v45 = v22[25];
      if (v45 != 0) {
      LABEL_47:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                  memory_order_relaxed);
        v46 = v44[1];
        if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v113 = v43;
          v106 = v46;
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          std___1___shared_weak_count___release_weak_alt1(v45);
          v46 = v106;
          v43 = v113;
        }
        goto LABEL_51;
      }
    }
    v46 = v44[1];
  LABEL_51:
    v47 = vsubq_f32(v43, v46);
    v48 = vmulq_f32(v47, v47);
    LANES128(v48).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_f32[0] >= 0x1.0c6f7c0000000p-20f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0) {
        v110 = v47;
        v115 = v43;
        v107 = v46;
        v102 = __cxa_guard_acquire_alt1((__int64)&GameData_21a61b0);
        v46 = v107;
        v47 = v110;
        v43 = v115;
        if (v102 != 0) {
          v103 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v103;
          __cxa_guard_release_alt1((__int64)&GameData_21a61b0);
          v46 = v107;
          v47 = v110;
          v43 = v115;
        }
      }
      v49 = 0x0.0p+0f;
      v50 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a61a0),
                      COERCE_AS(float32x4_t, GameData_21a61a0));
      LANES128(v50).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v51 = vsubq_f32(v46, v43);
        v52 = vmulq_f32(v51, v51);
        LANES128(v52).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                .n64_f32[0] > 0x0.0p+0f) {
          v108 = v47;
          *(_QWORD*)&v53 = (unsigned int)GameData_21a61a0;
          *((_QWORD*)&v53 + 1) =
              LANES128_OF(vextq_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                   COERCE_AS(int8x16_t, GameData_21a61a0), 8u))
                  .n128_u32[0];
          LANES128(v54).n128_u64[0] = LANES128(v51).n128_u32[0];
          v114 = v51;
          *(_OWORD*)v116 = v53;
          LANES128(v54).n128_u64[1] =
              LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u32[0];
          v160 = v54;
          v55 = math_Vec3_Angle((float32x4_t*)v116, &v160);
          LANES128(v56).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v57).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v56).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v58).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v57).n128_i8[8] =
              vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v58).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v59).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v59).n128_i8[8] =
              vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v59).n128_u32[0] =
              LANES128_OF(vmlsq_f32(vmulq_f32(v56, v57), v59, v58)).n128_u32[1];
          v47 = v108;
          if (LANES128(v59).n128_f32[0] < 0x0.0p+0f) {
            v55 = -v55;
          }
          v49 = v55 * 0x1.ca5dc00000000p+5f;
        }
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0) {
        v111 = v47;
        v104 = __cxa_guard_acquire_alt1((__int64)&GameData_21a61b0);
        v47 = v111;
        if (v104 != 0) {
          v105 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v105;
          __cxa_guard_release_alt1((__int64)&GameData_21a61b0);
          v47 = v111;
        }
      }
      v60 = 0x0.0p+0f;
      v61 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a61a0),
                      COERCE_AS(float32x4_t, GameData_21a61a0));
      LANES128(v61).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v109 = v47;
        *(_QWORD*)&v62 = (unsigned int)GameData_21a61a0;
        *((_QWORD*)&v62 + 1) =
            LANES128_OF(vextq_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                 COERCE_AS(int8x16_t, GameData_21a61a0), 8u))
                .n128_u32[0];
        LANES128(v63).n128_u64[0] = LANES128(v47).n128_u32[0];
        *(_OWORD*)v116 = v62;
        LANES128(v63).n128_u64[1] =
            LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u32[0];
        v160 = v63;
        v64 = math_Vec3_Angle((float32x4_t*)v116, &v160);
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v66).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v67).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v66).n128_i8[8] =
            vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v67).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v68).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v68).n128_i8[8] =
            vqtbl1_s8(v109, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        if (LANES128_OF(vmlsq_f32(vmulq_f32(v65, v66), v68, v67)).n128_f32[1] <
            0x0.0p+0f) {
          v64 = -v64;
        }
        v60 = v64 * 0x1.ca5dc00000000p+5f;
      }
      v69 = v9[24];
      v70 = v9[25];
      if (v70 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                  memory_order_relaxed);
        for (; v49 < -0x1.6800000000000p+7f; v49 = v49 + 0x1.6800000000000p+8f)
          ;
        for (; v49 >= 0x1.6800000000000p+7f; v49 = v49 + -0x1.6800000000000p+8f)
          ;
        v71 = *(_BYTE*)(v69 + 40);
        *(float*)(v69 + 32) = v49;
        *(_BYTE*)(v69 + 40) = v71 | 2;
        if (atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
          std___1___shared_weak_count___release_weak_alt1(v70);
        }
      }
      else {
        for (; v49 < -0x1.6800000000000p+7f; v49 = v49 + 0x1.6800000000000p+8f)
          ;
        for (; v49 >= 0x1.6800000000000p+7f; v49 = v49 + -0x1.6800000000000p+8f)
          ;
        v72 = *(_BYTE*)(v69 + 40);
        *(float*)(v69 + 32) = v49;
        *(_BYTE*)(v69 + 40) = v72 | 2;
      }
      v73 = v22[24];
      v74 = v22[25];
      if (v74 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 8), 1u,
                                  memory_order_relaxed);
        for (; v60 < -0x1.6800000000000p+7f; v60 = v60 + 0x1.6800000000000p+8f)
          ;
        for (; v60 >= 0x1.6800000000000p+7f; v60 = v60 + -0x1.6800000000000p+8f)
          ;
        v75 = *(_BYTE*)(v73 + 40);
        *(float*)(v73 + 32) = v60;
        *(_BYTE*)(v73 + 40) = v75 | 2;
        if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
          std___1___shared_weak_count___release_weak_alt1(v74);
        }
      }
      else {
        for (; v60 < -0x1.6800000000000p+7f; v60 = v60 + 0x1.6800000000000p+8f)
          ;
        for (; v60 >= 0x1.6800000000000p+7f; v60 = v60 + -0x1.6800000000000p+8f)
          ;
        v76 = *(_BYTE*)(v73 + 40);
        *(float*)(v73 + 32) = v60;
        *(_BYTE*)(v73 + 40) = v76 | 2;
      }
      v77 = v9[24];
      v78 = v9[25];
      if (v78 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 8), 1u,
                                  memory_order_relaxed);
        game_facility_14187c0(v77);
        if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
          std___1___shared_weak_count___release_weak_alt1(v78);
        }
      }
      else {
        game_facility_14187c0(v77);
      }
      v79 = v22[24];
      v80 = v22[25];
      if (v80 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 8), 1u,
                                  memory_order_relaxed);
        game_facility_14187c0(v79);
        if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
          std___1___shared_weak_count___release_weak_alt1(v80);
        }
      }
      else {
        game_facility_14187c0(v79);
      }
    }
    goto LABEL_95;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                            memory_order_relaxed);
  v38 = *(_QWORD*)(v35 + 16);
  v37 = *(_QWORD*)(v35 + 24);
  *(_QWORD*)v116 = v38;
  *(_QWORD*)&v116[8] = v37;
  game_13f9200((void*)(&v160), (int8x16_t*)v116);
  v117_.v123 =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v160).n128_u64[0]),
              COERCE_AS(int32x2_t,
                        LANES128_OF(vextq_s8(v160, v160, 8u)).n128_u64[0])))
          .n64_u64[0];
  if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak_alt1(v36);
  }
  if ((v28 & 1) == 0) {
    goto LABEL_43;
  }
LABEL_122:
  v97 = *(_QWORD*)v4;
  v141_.v144 |= 0x4008005800uLL;
  v141_.v158 = "Intro";
  v98 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v97, 792, 16, 0);
  v98[2] = 0;
  v99 = (__int64)(v98 + 3);
  v100 = v98;
  *v98 = GameData_212d1e8 + 2;
  v98[1] = 0;
  memset((__int64)(v98 + 3), 0, 0x2D8u);
  v100[32] = 0;
  v100[33] = 0;
  v100[44] = 0;
  v100[45] = 0;
  v100[56] = 0;
  v100[57] = 0;
  *(_DWORD*)((char*)v100 + 367) = 0;
  v100[22] = 0;
  v100[23] = 0;
  v100[24] = 0;
  v100[25] = 0;
  *((_WORD*)v100 + 104) = 0;
  v100[35] = 0;
  v100[36] = 0;
  *((_BYTE*)v100 + 296) = 0;
  v100[30] = 0;
  v100[31] = 0;
  *((_DWORD*)v100 + 82) = -1;
  v100[42] = 0;
  v100[43] = 0;
  v100[47] = 0;
  v100[48] = 0;
  *((_BYTE*)v100 + 392) = 0;
  v100[18] = 0x43FA000043FA0000LL;
  v100[19] = 0xC3FA0000C3FA0000LL;
  v100[20] = 0x43FA000043FA0000LL;
  v100[21] = 0xC3FA0000C3FA0000LL;
  v100[29] = 0;
  *(_DWORD*)((char*)v100 + 463) = 0;
  *((_DWORD*)v100 + 106) = -1;
  v100[54] = 0;
  v100[55] = 0;
  *((_BYTE*)v100 + 488) = 0;
  v100[59] = 0;
  v100[60] = 0;
  *(_DWORD*)((char*)v100 + 271) = 0;
  *((_DWORD*)v100 + 130) = -1;
  *(_DWORD*)((char*)v100 + 559) = 0;
  v100[69] = 0;
  v100[68] = 0;
  v100[67] = 0;
  v100[66] = 0;
  *((_BYTE*)v100 + 584) = 0;
  v100[72] = 0;
  v100[71] = 0;
  *((_DWORD*)v100 + 154) = -1;
  v100[78] = 0;
  v100[79] = 0;
  v100[80] = 0;
  v100[81] = 0;
  v100[82] = 0;
  v100[83] = 0;
  v100[84] = 0;
  v100[85] = 0;
  v100[86] = 0;
  v100[87] = 0;
  v100[88] = 0;
  *(_QWORD*)((char*)v100 + 300) = 0x6300000063LL;
  *(_QWORD*)((char*)v100 + 396) = 0x6300000063LL;
  *(_QWORD*)((char*)v100 + 492) = 0x6300000063LL;
  v100[89] = 0;
  v100[90] = 0;
  v100[91] = 0;
  v100[92] = 0;
  *((_DWORD*)v100 + 186) = 0;
  v100[98] = 0;
  v100[97] = 0;
  v100[96] = 0;
  v100[95] = 0;
  v100[94] = 0;
  *(_QWORD*)v116 = v99;
  *(_QWORD*)&v116[8] = v100;
  v100[40] = -4294967197LL;
  v100[52] = -4294967197LL;
  v100[64] = -4294967197LL;
  *(_QWORD*)((char*)v100 + 588) = 0x6300000063LL;
  v100[76] = -4294967197LL;
  GameHr_10eb860(v99, (__int64)&v117_.v117);
  GameHr_1090da0(v99);
  game_combat_CombatSequenceImpl_CombatSequenceImpl(a1, (__int64)v116,
                                                    a1 + 184);
  v101 = *(_QWORD*)&v116[8];
  if (*(_QWORD*)&v116[8] != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(*(_QWORD*)&v116[8] + 8LL),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
    std___1___shared_weak_count___release_weak_alt1(v101);
  }
  GameHr_a0eb00((__int64)&v117_.v117);
}

#pragma GCC visibility pop
