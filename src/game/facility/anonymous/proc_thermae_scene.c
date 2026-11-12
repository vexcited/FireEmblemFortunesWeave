#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9e2d1;
extern __int64 GameData_21f4010;
__int64 ProcThermaeScene_StartFade();
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_138ff80(_QWORD* result, _QWORD*);
_QWORD* SceneManager_138a920(__int64, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__int64 SceneManager_138c000(_QWORD*, __int64*, __int64, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a0d9a0(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
bool GameRoutine_1389160(__int64, __int64, __int64);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN GameData_1a9e2e2;
extern _UNKNOWN GameData_1aa5e95;
extern _UNKNOWN GameData_1af2a36;
extern _UNKNOWN GameData_1af6a12;
extern __int64 (*GameData_2039088[])();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_195ab40(__int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void game_facility_SceneManager_CreateMob(_QWORD*, __int64);
__n128 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7,
    __int64
        a8) __asm__("game_facility_anonymous_ProcThermaeScene_InitialLoadImpl");
__int64 SceneManager_138c000_alt1(_QWORD*, unsigned __int8*, __int64,
                                  __int64) __asm__("SceneManager_138c000");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern char GameData_1a9e2e2_alt1[] __asm__("GameData_1a9e2e2");
extern char GameData_1aa5e95_alt1[] __asm__("GameData_1aa5e95");
extern char GameData_1af2a36_alt1[] __asm__("GameData_1af2a36");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
void SceneManager_138a920_alt1(__int64,
                               __int64) __asm__("SceneManager_138a920");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcThermaeScene_InitialLoadImpl(__int64 a1);

__int64 ProcThermaeScene_StartFade()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a9e2d1);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_27;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_27:
                v8 = v6[3];
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v8 = 0;
  return GameRoutine_14877f0(v8, 0x13F000000LL);
}

void game_facility_anonymous_ProcThermaeScene_InitialLoadImpl(__int64 a1)
{
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  __int64 v20;
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
  _QWORD* v35;
  char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  struct {
    _QWORD v45[2];
    char* v46;
  } v45_;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    __int128 v49;
    __int64* v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
  } v47_;
  struct {
    __int64 v60;
    __int64 v61;
  } v60_;
  struct {
    __int128 v62;
    __int64 v63;
    __int64 v64;
    __int128* v65;
    __int64 v66;
    __int128 v67;
    int v68;
    char gap244_[4];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    char v78;
    char gap321_[15];
    char v79;
  } v62_;
  _QWORD v80[8];

  v62_.v65 = nullptr;
  v62_.v66 = 0;
  v62_.v63 = 0;
  v62_.v64 = 0;
  v62_.v62 = (__typeof__(v62_.v62)){0};
  *(_QWORD*)&v62_.v67 = 0;
  v60_.v60 = (__int64)game_facility_SceneManager_FacilityMapArgs_vtable;
  v60_.v61 = 0;
  v2 = game_util_Format_alt1(
      GameData_1a9e2e2_alt1,
      *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 216) + 24LL) + 32LL));
  v3 = strlen_alt1(v2);
  GameRoutine_1389160((__int64)&v60_.v60, (__int64)v2, v3);
  SceneManager_138a920_alt1(*(_QWORD*)GameData_212dce8, (__int64)&v60_.v60);
  v60_.v60 = GameData_212e1c0 + 16;
  if (v62_.v65 == &v62_.v62) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v62_.v65 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*(_QWORD*)v62_.v65 + v4))((__int64)v62_.v65);
  }
  v5 = 0;
  v6 = 1;
  do {
    v7 = v6;
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v5);
    if (v8 == 0) {
      goto LABEL_8;
    }
    v60_.v60 = 0;
    v60_.v61 = 0;
    LOBYTE(v62_.v65) = 0;
    v62_.v78 = 0;
    v62_.v79 = 0;
    v80[4] = 0;
    LOBYTE(v62_.v62) = 20;
    strcpy((char*)&v62_.v62 + 9, "_D");
    *(_QWORD*)((char*)&v62_.v62 + 1) = 0x335FAC9CE6BA9FE5LL;
    v45_.v45[0] = *(_QWORD*)(v8 + 392);
    SceneCharacterAppearance_140f320((void*)(&v47_.v47), (__int64)v45_.v45,
                                     (__int64)&GameData_1af6a12);
    v9 = v47_.v47;
    v10 = v47_.v48;
    v11 = v60_.v61;
    v47_.v47 = 0;
    v47_.v48 = 0;
    v60_.v60 = v9;
    v60_.v61 = v10;
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
      v12 = v47_.v48;
      if (v47_.v48 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v12 = v47_.v48;
      if (v47_.v48 == 0) {
        goto LABEL_16;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  LABEL_16:
    v13 = game_util_Format_alt1(GameData_1af2a36_alt1, (unsigned int)v5);
    v14 = strlen_alt1(v13);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_84;
    }
    v15 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v14 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
      v45_.v45[1] = v15;
      v45_.v46 = v16;
      v45_.v45[0] = v17 | 1;
    LABEL_24:
      memmove_alt1((__int64)v16, (__int64)v13, v15);
      goto LABEL_25;
    }
    v16 = (char*)v45_.v45 + 1;
    LOBYTE(v45_.v45[0]) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_24;
    }
  LABEL_25:
    v16[v15] = 0;
    GameRoutine_195ab40((__int64)&v47_.v47, (__int64)v45_.v45);
    LODWORD(v62_.v65) = v47_.v47;
    if (v62_.v78 != 1) {
      v23 = v47_.v51;
      v24 = v47_.v52;
      v47_.v51 = 0;
      v47_.v52 = 0;
      v62_.v69 = v23;
      v62_.v70 = v24;
      v25 = v47_.v55;
      v26 = v47_.v56;
      v62_.v67 = v47_.v49;
      v47_.v55 = 0;
      v47_.v56 = 0;
      v62_.v68 = (int)v47_.v50;
      v62_.v73 = v25;
      v62_.v74 = v26;
      v27 = v47_.v53;
      v28 = v47_.v54;
      v47_.v53 = 0;
      v47_.v54 = 0;
      v62_.v71 = v27;
      v62_.v72 = v28;
      v30 = v47_.v58;
      v29 = v47_.v59;
      v47_.v58 = 0;
      v47_.v59 = 0;
      v62_.v76 = v30;
      v62_.v77 = v29;
      v31 = v47_.v57;
      v47_.v57 = 0;
      v62_.v75 = v31;
      v62_.v78 = 1;
    LABEL_47:
      if ((v47_.v51 & 1) == 0) {
        goto LABEL_54;
      }
    LABEL_50:
      if (v47_.v53 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v47_.v53);
      }
      goto LABEL_54;
    }
    *(_QWORD*)&v18 = v47_.v49;
    *((_QWORD*)&v18 + 1) = DWORD2(v47_.v49);
    v62_.v68 = (int)v47_.v50;
    v62_.v67 = v18;
    if ((v62_.v69 & 1) != 0 && v62_.v71 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v62_.v71);
    }
    v62_.v69 = v47_.v51;
    v62_.v70 = v47_.v52;
    LOWORD(v47_.v51) = 0;
    v62_.v71 = v47_.v53;
    if ((v62_.v72 & 1) != 0 && v62_.v74 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v62_.v74);
    }
    v62_.v72 = v47_.v54;
    v62_.v73 = v47_.v55;
    LOWORD(v47_.v54) = 0;
    v62_.v74 = v47_.v56;
    if ((v62_.v75 & 1) == 0 || v62_.v77 == 0) {
      v62_.v75 = v47_.v57;
      v62_.v76 = v47_.v58;
      LOWORD(v47_.v57) = 0;
      v62_.v77 = v47_.v59;
      if ((v47_.v51 & 1) == 0) {
        goto LABEL_54;
      }
      goto LABEL_50;
    }
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v62_.v77);
    v62_.v75 = v47_.v57;
    v62_.v76 = v47_.v58;
    LOWORD(v47_.v57) = 0;
    v62_.v77 = v47_.v59;
    if ((v47_.v54 & 1) == 0 || v47_.v56 == 0) {
      goto LABEL_47;
    }
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v47_.v56);
    if ((v47_.v51 & 1) != 0) {
      goto LABEL_50;
    }
  LABEL_54:
    if ((v45_.v45[0] & 1) != 0 && v45_.v46 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v45_.v46);
    }
    v47_.v50 = &v47_.v47;
    v47_.v47 = (__int64)GameData_2039088;
    GameRoutine_138ff80(&v47_.v47, v80);
    if (v47_.v50 == &v47_.v47) {
      v34 = 32;
    }
    else {
      if (v47_.v50 == nullptr) {
        goto LABEL_64;
      }
      v34 = 40;
    }
    (*(void (**)(__int64))(*v47_.v50 + v34))((__int64)v47_.v50);
  LABEL_64:
    v35 = *(_QWORD**)GameData_212dce8;
    v36 = game_util_Format_alt1(GameData_1aa5e95_alt1, (unsigned int)v5);
    v37 = strlen_alt1(v36);
    if (v37 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_84:
      String_60a1d0();
    }
    v38 = v37;
    if (v37 >= 0x17) {
      if ((v37 | 7) == 0x17) {
        v40 = 26;
      }
      else {
        v40 = (v37 | 7) + 1;
      }
      v39 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
      v47_.v48 = v38;
      *(_QWORD*)&v47_.v49 = v39;
      v47_.v47 = v40 | 1;
    LABEL_72:
      memmove_alt1((__int64)v39, (__int64)v36, v38);
      goto LABEL_73;
    }
    v39 = (char*)&v47_.v47 + 1;
    LOBYTE(v47_.v47) = 2 * v37;
    if (v37 != 0) {
      goto LABEL_72;
    }
  LABEL_73:
    v39[v38] = 0;
    SceneManager_138c000_alt1(v35, (unsigned __int8*)&v47_.v47, v8,
                              (__int64)&v60_.v60);
    if ((v47_.v47 & 1) != 0 && (_QWORD)v47_.v49 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v47_.v49);
    }
    GameRoutine_a0d9a0_alt1((__int64)&v60_.v60);
  LABEL_8:
    v5 = 1;
    v6 = 0;
  } while ((v7 & 1) != 0);
  v42 = *(_QWORD**)GameData_212dce8;
  v43 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  *(_BYTE*)(v43 + 28) = 0;
  v60_.v60 = 33;
  v60_.v61 = 28;
  *(_QWORD*)&v62_.v62 = v43;
  *(_DWORD*)(v43 + 24) = -1467817058;
  *(_QWORD*)v43 = 0x83E39683E3A283E3LL;
  *(_QWORD*)(v43 + 8) = 0x5F8883E3B982E3AALL;
  *(_QWORD*)(v43 + 16) = 0x83E3AB83E38683E3LL;
  game_facility_SceneManager_CreateMob(v42, (__int64)&v60_.v60);
  if ((v60_.v60 & 1) != 0 && (_QWORD)v62_.v62 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v62_.v62);
  }
}

__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
