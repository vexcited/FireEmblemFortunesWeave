#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2036570[])();
extern __int64 (*game_facility_anonymous_ProcTheaterSceneAct_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_2131208[3];
extern __int64 GameData_2131210[2];
extern __int64 GameData_224ade8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
extern int GameData_224ade4;
__int64 ProcTheaterSceneAct_Destructor(__int64 a1);
__int64 ProcTheaterSceneAct_Unknown21(__int64 a1);
_QWORD* GameRoutine_144f120(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_1950100(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_1113120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1113400(_QWORD, _QWORD);
__int64 GameRoutine_13da730(__int64 result, __int64);
__int64 GameRoutine_13e3560(_QWORD);
__int64 GameRoutine_13e3e50(_QWORD, _QWORD);
__int64 GameRoutine_13e4860(_QWORD, _QWORD);
__int64 GameRoutine_14107c0(_QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_144ef80(_QWORD);
__int64 GameRoutine_149edd0(_QWORD);
__int64 GameRoutine_149eed0(_QWORD);
__int64 GameRoutine_1952d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 ProcTheaterUI_1113db0(_QWORD);
__int64 SceneCharacter_14009a0(_QWORD, _QWORD);
__int64 SceneCharacter_1401180(_QWORD, double);
__int64 SceneCharacter_1401300(_QWORD, float);
__int64 SceneManager_138e5e0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_facility_anonymous_ProcTheaterUI_CreateBindChoice(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a966f7;
extern _UNKNOWN GameData_1ad7f83;
extern _UNKNOWN GameData_1af6bd7;
extern _UNKNOWN GameData_2241878;
extern _UNKNOWN game_g_random_mutex;
extern _UNKNOWN* GameData_2036610;
extern __int64 (*GameData_2035fb0[])();
extern __int64 (*GameData_20363b0[])();
extern __int64 GameData_1aa2351;
extern __int64 GameData_1ae74c5;
extern __int64 GameData_2131678;
extern __int64 GameData_21f4000;
extern __int64 GameData_2236778;
extern __int64 GameData_2241850;
extern __int64 GameData_2241868;
extern __int64 GameData_22420e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1a9f09e;
extern char GameData_2241870;
unsigned __int64 SceneManager_138d3a0(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_1115ca0(_QWORD);
void __attribute__((noreturn)) GameRoutine_13e0e50(void);
void __attribute__((noreturn)) GameRoutine_13eb280(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcTheaterSceneAct_13dc340(__int64 a1);
__int64 ProcTheaterSceneAct_13dca90(__int64 a1);
__int64 ProcTheaterSceneAct_13dcac0(__int64 a1);
_QWORD* game_facility_anonymous_ProcTheaterSceneAct_HideAudience(__int64 a1,
                                                                 __int64 a2);
bool ProcTheaterSceneAct_13dccf0() { return GameData_22420e0 != 0; };
__int64 ProcTheaterSceneAct_13dcdb0(__int64 a1);
__int64 ProcTheaterSceneAct_13dcea0(__int64 a1);
__int64 ProcTheaterSceneAct_13dd3a0(__int64 result);
__int64 ProcTheaterSceneAct_13dde20(__int64 a1);
__int64 ProcTheaterSceneAct_13de8d0(__int64 a1);
__int64 ProcTheaterSceneAct_13de9a0(__int64 a1);
__int64 ProcTheaterSceneAct_13deaa0(__int64 a1);
__int64 ProcTheaterSceneAct_13deec0();
__int64 ProcTheaterSceneAct_13def20(__int64 result);
unsigned __int64 ProcTheaterSceneAct_13defe0(unsigned __int64 result);
_QWORD* game_facility_anonymous_ProcTheaterSceneAct_ShowAudience(__int64 a1,
                                                                 __int64 a2);
__int64 ProcTheaterSceneAct_13df3b0(__int64 a1);
void ProcTheaterSceneAct_13df3e0();
__int64 ProcTheaterSceneAct_13df660(__int64 result);
void game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop_closure_Invoke();
__int64 ProcTheaterSceneAct_13e18a0(__int64* a1, _QWORD* a2, _BYTE* a3);
float ProcTheaterSceneAct_13e2420(__int64 a1);
__int64 ProcTheaterSceneAct_Unknown5(__int64 a1);

__int64 ProcTheaterSceneAct_13dc340(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  int v8;
  __int16 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int16 v30;
  __int64 v31;
  unsigned int v32;
  _BYTE* v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  char v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  float v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  char v57;
  int v58;
  float v59;
  int v60;
  __int16 v61;
  char v62;
  _BYTE v63[7];
  _BYTE* v64;
  int v65;
  char v66;
  int v67;
  float v68;
  int v69;
  __int16 v70;
  _BYTE* v71;

  v71 = v63;
  v2 = SceneManager_138e5e0(GameData_21f4000);
  if (v2 != 0) {
    v3 = v2;
    v4 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
    *(_BYTE*)(v4 + 38) = 0;
    v53 = 41;
    v54 = 38;
    v55 = v4;
    *(_QWORD*)(v4 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v4 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v4 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v4 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v4 + 8) = 0xE3BC83E3A283E3A9LL;
    GameRoutine_14107c0(&v62, &v53);
    if ((v53 & 1) != 0 && v55 != 0) {
      v5 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v5);
    }
    v6 = v67;
    v7 = v68;
    v8 = v69;
    v9 = v70;
    if ((v62 & 1) != 0) {
      v10 = v64;
    }
    else {
      v10 = v71;
    }
    v11 = strlen(v10);
    if (v11 > 0xFFFFFFFFFFFFFFF6LL) {
    LABEL_92:
      String_60a1d0(v11);
    }
    v12 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v14 = 26;
      }
      else {
        v14 = (v11 | 7) + 1;
      }
      v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                  16, 0);
      v51 = v12;
      v52 = v13;
      v50 = v14 | 1;
    }
    else {
      v13 = (char*)&v50 + 1;
      LOBYTE(v50) = 2 * v11;
      if (v11 == 0) {
      LABEL_19:
        v13[v12] = 0;
        v15 = v65;
        v16 = v66;
        if ((v50 & 1) != 0) {
          fw_text_String_CopyTerminated(&v53, v52, v51);
        }
        else {
          v53 = v50;
          v54 = v51;
          v55 = (__int64)v52;
        }
        v17 = *(_QWORD*)(v3 + 112);
        v18 = *(_QWORD*)(v3 + 120);
        v56 = v15;
        v57 = v16;
        v58 = v6;
        v59 = v7;
        v60 = v8;
        v61 = v9;
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_14127e0(v17, &v53);
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak(v18);
          }
          if ((v53 & 1) == 0) {
            goto LABEL_32;
          }
        }
        else {
          GameRoutine_14127e0(v17, &v53);
          if ((v53 & 1) == 0) {
          LABEL_32:
            if ((v50 & 1) != 0 && v52 != nullptr) {
              v20 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v20 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v20);
            }
            if ((v62 & 1) != 0 && v64 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v21);
            }
            goto LABEL_42;
          }
        }
        if (v55 != 0) {
          v19 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19);
        }
        goto LABEL_32;
      }
    }
    memmove(v13, v10, v12);
    goto LABEL_19;
  }
LABEL_42:
  v22 = 1;
  do {
    result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
    if (result == 0) {
      goto LABEL_43;
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40, 16, 0);
    *(_BYTE*)(v26 + 38) = 0;
    v53 = 41;
    v54 = 38;
    v55 = v26;
    *(_QWORD*)(v26 + 16) = 0xB383E3A783E3B782LL;
    *(_QWORD*)(v26 + 24) = 0x5F94BCE6BA87E55FLL;
    *(_QWORD*)(v26 + 30) = 0x94BCE68B96E95F94LL;
    *(_QWORD*)v26 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v26 + 8) = 0xE3BC83E3A283E3A9LL;
    GameRoutine_14107c0(&v62, &v53);
    if ((v53 & 1) != 0 && v55 != 0) {
      v27 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v27);
    }
    v28 = v67;
    v29 = v69;
    v30 = v70;
    if ((*(_BYTE*)(v25 + 72) & 1) != 0) {
      v31 = *(_QWORD*)(v25 + 88);
    }
    else {
      v31 = v25 + 73;
    }
    v32 = game_HashString32(v31);
    nn_os_LockMutex(&game_g_random_mutex);
    nn_os_UnlockMutex(&game_g_random_mutex);
    nn_os_LockMutex(&game_g_random_mutex);
    nn_os_UnlockMutex(&game_g_random_mutex);
    if ((v62 & 1) != 0) {
      v33 = v64;
    }
    else {
      v33 = v71;
    }
    v11 = strlen(v33);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_92;
    }
    v34 = v11;
    if (v11 >= 0x17) {
      v36 = a1;
      if ((v11 | 7) == 0x17) {
        v37 = 26;
      }
      else {
        v37 = (v11 | 7) + 1;
      }
      v38 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v37, 16, 0);
      v39 = v37 | 1;
      v35 = (char*)v38;
      v51 = v34;
      v52 = (char*)v38;
      a1 = v36;
      v50 = v39;
    LABEL_67:
      memmove(v35, v33, v34);
      goto LABEL_68;
    }
    v35 = (char*)&v50 + 1;
    LOBYTE(v50) = 2 * v11;
    if (v11 != 0) {
      goto LABEL_67;
    }
  LABEL_68:
    v35[v34] = 0;
    v40 = v65;
    v41 = v66;
    if ((v50 & 1) != 0) {
      fw_text_String_CopyTerminated(&v53, v52, v51);
    }
    else {
      v53 = v50;
      v54 = v51;
      v55 = (__int64)v52;
    }
    v42 = v32 ^ (v32 >> 30);
    v43 = *(_QWORD*)(v25 + 112);
    v44 = *(_QWORD*)(v25 + 120);
    v56 = v40;
    v57 = v41;
    v60 = v29;
    v61 = v30;
    v45 = 1812433253 *
              ((1812433253 * ((1812433253 * v42) ^
                              ((unsigned int)(1812433253 * v42) >> 30)) +
                1) ^
               ((1812433253 * ((1812433253 * v42) ^
                               ((unsigned int)(1812433253 * v42) >> 30)) +
                 1) >>
                30)) +
          2;
    v46 = (float)(unsigned __int16)((((1011558400 * v42) ^
                                      (unsigned int)(1812433253 * v42)) >>
                                     8) ^
                                    ((1812433253 * (v45 ^ (v45 >> 30)) + 3) >>
                                     19) ^
                                    (10240 * v42) ^ (-30363 * v42) ^
                                    (-30363 * (v45 ^ (v45 >> 30)) + 3));
    v58 = v28;
    v59 = (float)(v46 / 65535.0) + (float)(v46 / 65535.0);
    if (v44 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_14127e0(v43, &v53);
      if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
        result = std___1___shared_weak_count___release_weak(v44);
      }
      if ((v53 & 1) == 0) {
        goto LABEL_81;
      }
    LABEL_77:
      if (v55 != 0) {
        v47 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v47 = 56;
        }
        result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v47);
      }
      goto LABEL_81;
    }
    result = GameRoutine_14127e0(v43, &v53);
    if ((v53 & 1) != 0) {
      goto LABEL_77;
    }
  LABEL_81:
    if ((v50 & 1) != 0 && v52 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v48 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v48);
    }
    if ((v62 & 1) != 0 && v64 != nullptr) {
      v49 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v49);
    }
  LABEL_43:
    ++v22;
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v23 = 5;
    }
    else {
      v23 = 3;
    }
  } while (v22 < v23);
  return result;
}

__int64 ProcTheaterSceneAct_13dca90(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 208);
  if (v1 != 0 && *(_BYTE*)(v1 + 72) == 3) {
    return GameRoutine_149edd0(&GameData_1a966f7);
  }
  else {
    return GameRoutine_149edd0(&GameData_1ad7f83);
  }
}

__int64 ProcTheaterSceneAct_13dcac0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  result = a1 + 152;
  if (a1 == 0) {
    return result;
  }
  v3 = a1;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = *(_QWORD*)GameData_212dce8;
    if ((v4 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = *(_QWORD*)(v5 + 256);
    v8 = *(_QWORD*)(v5 + 264);
    if ((v6 & v4) == 0) {
      if (v8 != 0) {
        v12 = *(_QWORD*)(v5 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v13 = std___1___shared_weak_count_lock(v12);
        result = std___1___shared_weak_count___release_weak(v8);
        if (v13 != 0) {
          if (v7 != 0) {
            result = GameRoutine_144ef80(v7);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
        }
      }
      goto LABEL_27;
    }
    if (v8 == 0) {
    LABEL_27:
      v14 = *(unsigned __int8**)(v3 + 16);
      if (v14 != nullptr) {
        v15 = *v14;
        v16 = v15 > 0x10;
        v17 = (1 << v15) & 0x1CE00;
        if (!v16 && v17 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(GameData_21f4000 + 264);
    if (v8 == 0) {
      goto LABEL_27;
    }
    v7 = *(_QWORD*)(GameData_21f4000 + 256);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock(v8);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v9 == 0) {
    goto LABEL_27;
  }
  v11 =
      v7 == 0 || (v10 = *(_QWORD*)(v7 + 424)) == 0 || *(_QWORD*)(v10 + 80) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if (v11) {
    goto LABEL_27;
  }
  return result;
}

_QWORD* game_facility_anonymous_ProcTheaterSceneAct_HideAudience(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = *(_QWORD*)(a1 + 208);
  result = v10;
  v10[0] = GameData_2035fb0;
  v11 = v10;
  if (*(_WORD*)(v2 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v2 + 160);
  v5 = 0;
  do {
    v6 = v11;
    if (v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310(v6, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11,
                                                  *(_QWORD*)(v2 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v11;
  if (v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v2 + 176) != 0) {
      v7 = 8LL * *(unsigned __int16*)(v2 + 176);
      v8 = 0;
      do {
        v6 = v11;
        if (v11 == nullptr) {
          goto LABEL_17;
        }
        (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(
            v11, *(_QWORD*)(v2 + 184) + v8);
        v8 += 8;
      } while (v7 != v8);
      result = v11;
    }
    if (result == v10) {
      v9 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dcdb0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int16 v8;
  char v9;

  v2 = (__int64*)GameData_212dce8;
  v8 = 257;
  v9 = 1;
  SceneCharacter_14009a0(**(_QWORD**)(*(_QWORD*)GameData_212dce8 + 160LL), &v8);
  v3 = *v2;
  v9 = 1;
  v8 = 257;
  SceneCharacter_14009a0(*(_QWORD*)(*(_QWORD*)(v3 + 160) + 8LL), &v8);
  v4 = *v2;
  v9 = 1;
  v8 = 257;
  result = SceneCharacter_14009a0(*(_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL), &v8);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
    v6 = *v2;
    v9 = 1;
    v8 = 257;
    result =
        SceneCharacter_14009a0(*(_QWORD*)(*(_QWORD*)(v6 + 160) + 24LL), &v8);
    if (*(_BYTE*)(*(_QWORD*)(a1 + 208) + 72LL) == 3) {
      v7 = *v2;
      v9 = 1;
      v8 = 257;
      return SceneCharacter_14009a0(*(_QWORD*)(*(_QWORD*)(v7 + 160) + 32LL),
                                    &v8);
    }
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dcea0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;

  v2 = GameRoutine_13e4860(*(_QWORD*)(a1 + 208), *(unsigned int*)(a1 + 264));
  v3 = *(_QWORD*)(a1 + 208);
  *(_QWORD*)(a1 + 280) = v2;
  *(_BYTE*)(a1 + 330) = 0;
  v4 = *(int*)(a1 + 264);
  v6 = *(__int64**)(*(_QWORD*)(v3 + 40) + 40LL);
  v5 = *v6;
  v7 = v6[1] - *v6;
  if ((int)v4 >= (int)((unsigned __int64)v7 >> 3)) {
    v8 = 0;
  }
  else {
    if (v4 >= v7 >> 3) {
      GameRoutine_13eb280();
    }
    v8 = *(_QWORD*)(v5 + 8 * v4);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 48);
      v10 = 0;
      goto LABEL_7;
    }
  }
  v9 = 0;
  v10 = 1;
LABEL_7:
  v11 = SceneManager_138e5e0(GameData_21f4000);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 96);
    if (*(_BYTE*)(v12 + 2136) != 0) {
      v13 = GameRoutine_97b2f0(v12 + 2104);
    }
    else {
      v13 = GameRoutine_67ed20(*(_QWORD*)(v12 + 392));
    }
    v14 = (char*)v13;
    if ((v10 & 1) != 0) {
      goto LABEL_14;
    }
  }
  else {
    v14 = &GameData_1a9f09e;
    if ((v10 & 1) != 0) {
    LABEL_14:
      v15 = &GameData_1a9f09e;
      return GameRoutine_1113120((unsigned int)(*(_DWORD*)(a1 + 264) + 1), v15,
                                 v9, v14);
    }
  }
  v15 = *(char**)(v8 + 40);
  return GameRoutine_1113120((unsigned int)(*(_DWORD*)(a1 + 264) + 1), v15, v9,
                             v14);
}

__int64 ProcTheaterSceneAct_13dd3a0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;

  if (*(_QWORD*)(result + 280) != 0) {
    v1 = result;
    v2 = 0;
    v3 = GameData_212dce8;
    if (*(_BYTE*)(*(_QWORD*)(result + 208) + 72LL) == 3) {
      LODWORD(v4) = 5;
    }
    else {
      LODWORD(v4) = 3;
    }
    do {
      v5 = *(__int64**)(*(_QWORD*)(v1 + 280) + 40LL);
      v6 = *v5;
      if (v2 >= (v5[1] - *v5) >> 3) {
        GameRoutine_13e0e50();
      }
      v7 = *(_QWORD*)(*(_QWORD*)v3 + 160LL);
      v8 = *(char*)(*(_QWORD*)(v6 + 8 * v2) + 52LL);
      v9 = *(_QWORD*)(v7 + 8 * v2);
      if ((v8 & 0x80000000) == 0 &&
          v2 != *(char*)(*(_QWORD*)(v6 + 8 * v2) + 52LL) && (int)v4 > v8) {
        v10 =
            *(_QWORD*)(*(_QWORD*)(v7 + 8LL * *(char*)(*(_QWORD*)(v6 + 8 * v2) +
                                                      52LL)) +
                       8LL);
        if (v10 != 0 && *(_BYTE*)(v10 + 289) == 1 &&
            (*(_BYTE*)(v10 + 288) & 1) != 0) {
          while ((*(_BYTE*)(v10 + 300) & 0xFD) != 1) {
            v10 = *(_QWORD*)(v10 + 736);
            if (v10 == 0) {
              result = SceneCharacter_1401300(v9, 1.0);
              goto LABEL_17;
            }
            if (*(_BYTE*)(v10 + 289) != 1 || *(_BYTE*)(v10 + 288) != 1) {
              break;
            }
          }
        }
      }
      result = SceneCharacter_1401180(v9, 0.0);
    LABEL_17:
      ++v2;
      if (*(_BYTE*)(*(_QWORD*)(v1 + 208) + 72LL) == 3) {
        v4 = 5;
      }
      else {
        v4 = 3;
      }
    } while (v2 < v4);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13dde20(__int64 a1)
{
  __int64 v2;
  char v3;
  unsigned __int64 v4;
  __int64 v5;
  char v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
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
  __int64* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 result;
  __int64 v49;
  unsigned __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  _QWORD v54[4];
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _BYTE v59[4];
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;

  v61 = 0;
  v62 = 0;
  v60 = 0;
  v2 = GameRoutine_13e3e50(a1 + 312, 0);
  v3 = *(_BYTE*)(a1 + 312);
  v54[0] = v2;
  v59[0] = v3;
  v4 = ProcTheaterSceneAct_13e18a0(&v60, v54, v59);
  v61 = v4;
  v5 = GameRoutine_13e3e50(a1 + 312, 1);
  v6 = *(_BYTE*)(a1 + 313);
  v54[0] = v5;
  v59[0] = v6;
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v4 >= v62) {
    v12 = ProcTheaterSceneAct_13e18a0(&v60, v54, v59);
    goto LABEL_13;
  }
  v8 = v5;
  v9 = strlen(v5);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_84;
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(*v7, v13, 16, 0);
    *(_QWORD*)(v4 + 8) = v10;
    *(_QWORD*)(v4 + 16) = v11;
    *(_QWORD*)v4 = v13 | 1;
  }
  else {
    *(_BYTE*)v4 = 2 * v9;
    v11 = v4 + 1;
    if (v9 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v11, v8, v10);
LABEL_12:
  *(_BYTE*)(v11 + v10) = 0;
  *(_BYTE*)(v4 + 24) = v6;
  v12 = v4 + 32;
LABEL_13:
  v61 = v12;
  v14 = GameRoutine_13e3e50(a1 + 312, 2);
  v15 = *(_BYTE*)(a1 + 314);
  v54[0] = v14;
  v59[0] = v15;
  if (v12 >= v62) {
    v9 = ProcTheaterSceneAct_13e18a0(&v60, v54, v59);
    v19 = v9;
    goto LABEL_25;
  }
  v16 = v14;
  v9 = strlen(v14);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_84:
    String_60a1d0(v9);
  }
  v17 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v9 | 7) + 1;
    }
    v18 = fw_memory_HeapManager_Allocate(*v7, v20, 16, 0);
    *(_QWORD*)(v12 + 8) = v17;
    *(_QWORD*)(v12 + 16) = v18;
    *(_QWORD*)v12 = v20 | 1;
  }
  else {
    *(_BYTE*)v12 = 2 * v9;
    v18 = v12 + 1;
    if (v9 == 0) {
      goto LABEL_24;
    }
  }
  v9 = memmove(v18, v16, v17);
LABEL_24:
  *(_BYTE*)(v18 + v17) = 0;
  *(_BYTE*)(v12 + 24) = v15;
  v19 = v12 + 32;
LABEL_25:
  v21 = v60;
  v61 = v19;
  v56 = 0;
  v57 = 0;
  v22 = v19 - v60;
  v58 = 0;
  if (v19 != v60) {
    if (v22 < 0) {
      GameRoutine_1115ca0(v9);
    }
    v23 = fw_memory_HeapManager_Allocate(*v7, v19 - v60, 16, 0);
    v24 = 0;
    v56 = v23;
    v58 = v23 + v22;
    do {
      v30 = (__int64*)(v21 + v24);
      v31 = (_QWORD*)(v23 + v24);
      if ((*(_BYTE*)(v21 + v24) & 1) != 0) {
        fw_text_String_CopyTerminated(v31, v30[2], v30[1]);
      }
      else {
        v25 = *v30;
        v26 = v30[1];
        v27 = v30[2];
        v31[1] = v26;
        v31[2] = v27;
        *v31 = v25;
      }
      v28 = v21 + v24;
      v29 = v23 + v24;
      v24 += 32;
      *(_BYTE*)(v29 + 24) = *(_BYTE*)(v28 + 24);
    } while (v21 + v24 != v19);
    v57 = v23 + v24;
  }
  v32 = *(_QWORD*)(a1 + 320);
  if (v32 != 0) {
    v33 = *(unsigned __int8*)(a1 + 312);
    v34 = v32 + 32;
    if (v33 == 8) {
      v35 = 0;
    }
    else {
      v35 = *(char*)(v34 + v33);
    }
    v37 = *(unsigned __int8*)(a1 + 313);
    if (v37 == 8) {
      v38 = 0;
    }
    else {
      v38 = *(char*)(v34 + v37);
    }
    if (v35 > v38) {
      LODWORD(v33) = *(unsigned __int8*)(a1 + 313);
    }
    v39 = *(unsigned __int8*)(a1 + 314);
    if (v35 >= v38) {
      v35 = v38;
    }
    if (v39 == 8) {
      v40 = 0;
    }
    else {
      v40 = *(char*)(v34 + v39);
    }
    if (v35 <= v40) {
      v36 = (unsigned int)v33;
    }
    else {
      v36 = *(unsigned __int8*)(a1 + 314);
    }
  }
  else {
    v36 = 8;
  }
  game_facility_anonymous_ProcTheaterUI_CreateBindChoice(a1, &v56, v36,
                                                         a1 + 352);
  v41 = v56;
  if (v56 != 0) {
    v42 = v57;
    if (v56 == v57) {
      goto LABEL_62;
    }
    v43 = v57;
    do {
      v44 = *(_BYTE*)(v43 - 32);
      v43 -= 32;
      if ((v44 & 1) != 0 && *(_QWORD*)(v42 - 16) != 0) {
        if (*(_QWORD*)(*v7 + 200LL) != 0) {
          v45 = 128;
        }
        else {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v45);
      }
      v42 = v43;
    } while (v43 != v41);
    v57 = v41;
    if (v56 != 0) {
    LABEL_62:
      v46 = 128;
      if (*(_QWORD*)(*v7 + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v46);
    }
  }
  v47 = *(_QWORD*)(a1 + 352);
  v55 = nullptr;
  GameRoutine_1952d00(v47, 0, v54);
  result = (__int64)v55;
  if (v55 == v54) {
    v49 = 32;
  }
  else {
    if (v55 == nullptr) {
      goto LABEL_70;
    }
    v49 = 40;
  }
  result = (*(__int64 (**)(_QWORD*))(*v55 + v49))(v55);
LABEL_70:
  if (v21 != 0) {
    if (v19 != v21) {
      v50 = v19;
      do {
        v51 = *(_BYTE*)(v50 - 32);
        v50 -= 32LL;
        if ((v51 & 1) != 0 && *(_QWORD*)(v19 - 16) != 0) {
          if (*(_QWORD*)(*v7 + 200LL) != 0) {
            v52 = 128;
          }
          else {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v52);
        }
        v19 = v50;
      } while (v50 != v21);
    }
    v53 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v53 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v7 + v53);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13de8d0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int v6;
  unsigned __int64 v7;
  __int64 v8;

  v1 = *(int*)(a1 + 264);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v1;
    v8 = a1;
    v6 = __cxa_guard_acquire(&GameData_2241878);
    v1 = v7;
    a1 = v8;
    if (v6 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560(&GameData_2241868);
      __cxa_guard_release(&GameData_2241878);
      v1 = v7;
      a1 = v8;
    }
  }
  v2 = *(_QWORD*)(a1 + 216);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 224) - v2) >> 2);
  v4 = v2 + 12LL * (int)v1;
  if (v3 <= v1) {
    return GameRoutine_149eed0(&GameData_2241868);
  }
  else {
    return GameRoutine_149eed0(v4);
  }
}

__int64 ProcTheaterSceneAct_13de9a0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64* v5;
  int v7;
  unsigned __int64 v8;
  __int64 v9;

  v1 = *(int*)(a1 + 264);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v8 = v1;
    v9 = a1;
    v7 = __cxa_guard_acquire(&GameData_2241878);
    v1 = v8;
    a1 = v9;
    if (v7 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560(&GameData_2241868);
      __cxa_guard_release(&GameData_2241878);
      v1 = v8;
      a1 = v9;
    }
  }
  v2 = *(_QWORD*)(a1 + 216);
  v3 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 224) - v2) >> 2);
  v4 = (__int64*)(v2 + 12LL * (int)v1);
  if (v3 <= v1) {
    v5 = &GameData_2241868;
  }
  else {
    v5 = v4;
  }
  return GameRoutine_1113400(
      *((unsigned __int8*)v5 + 8) == 1,
      *(_QWORD*)(*(_QWORD*)(a1 + 184) + 8LL * *(int*)(a1 + 264)));
}

__int64 ProcTheaterSceneAct_13deaa0(__int64 a1)
{
  unsigned __int64 v1;
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64 result;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 i;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  _BYTE v34[8];
  _BYTE v35[40];
  _BYTE v36[16];
  __int64 v37;

  v1 = *(int*)(a1 + 264);
  v2 = &GameData_2241868;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241878,
                            memory_order_acquire) &
       1) == 0) {
    v30 = a1;
    v31 = __cxa_guard_acquire(&GameData_2241878);
    a1 = v30;
    if (v31 != 0) {
      GameData_2241868 = 0;
      GameData_2241870 = GameRoutine_13e3560(&GameData_2241868);
      __cxa_guard_release(&GameData_2241878);
      a1 = v30;
    }
  }
  v3 = *(_QWORD*)(a1 + 216);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = (*(_QWORD*)(a1 + 224) - v3) >> 2;
  v6 = (__int64*)(v3 + 12LL * (int)v1);
  if (0xAAAAAAAAAAAAAAABLL * v5 > v1) {
    v2 = v6;
  }
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  v8 = (atomic_ullong*)(result + 8);
  *(_QWORD*)(result + 16) = 0;
  v9 = result;
  v10 = GameData_2131678;
  *(_QWORD*)(result + 24) = 0;
  v11 = result + 24;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 0;
  *(_WORD*)(result + 116) = 0;
  *(_WORD*)(result + 136) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 288) = 0;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 248) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_DWORD*)(result + 127) = 0;
  *(_QWORD*)result = v10 + 16;
  *(_DWORD*)(result + 48) = 0x2000;
  *(_WORD*)(result + 108) = 256;
  *(_DWORD*)(result + 112) = -1082130432;
  *(_DWORD*)(result + 292) = 2;
  v12 = *((unsigned __int8*)v2 + 8);
  if (v12 == 2) {
    v20 = fw_memory_HeapManager_Allocate(*v4, 26, 16, 0);
    *(_BYTE*)(v20 + 23) = 0;
    v15 = 23;
    v16 = v20;
    *(_QWORD*)v20 = 0xE95F94BCE6BA87E5LL;
    *(_QWORD*)(v20 + 8) = 0xA282E89E8AE6B881LL;
    *(_QWORD*)(v20 + 15) = 0xA39BE9A184E75FA2LL;
  }
  else {
    if (v12 == 1) {
      v13 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
      v14 = &GameData_1aa2351;
    }
    else {
      if (*((_BYTE*)v2 + 8) != 0) {
        v22 = result;
        v25 = *(_QWORD*)v11;
        if (*(_QWORD*)v11 == 0) {
          goto LABEL_39;
        }
        goto LABEL_31;
      }
      v13 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
      v14 = &GameData_1ae74c5;
    }
    *(_BYTE*)(v13 + 29) = 0;
    v15 = 29;
    v16 = v13;
    v17 = v14[1];
    *(_QWORD*)v13 = *v14;
    *(_QWORD*)(v13 + 8) = v17;
    v18 = v14[2];
    v19 = *(__int64*)((char*)v14 + 21);
    *(_QWORD*)(v13 + 16) = v18;
    *(_QWORD*)(v13 + 21) = v19;
  }
  fw_text_String_CopyTerminated(v36, v16, v15);
  v35[0] = 0;
  v35[16] = 0;
  v34[0] = 0;
  v34[4] = 0;
  GameRoutine_1950100(&v32, v36, v35, v34, 1);
  if ((v36[0] & 1) != 0 && v37 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v21);
  }
  v11 = v32;
  v22 = v33;
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  v23 = v33;
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = 128;
  if (*(_QWORD*)(*v4 + 200LL) == 0) {
    v24 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*v4 + v24);
  v25 = *(_QWORD*)v11;
  if (*(_QWORD*)v11 != 0) {
  LABEL_31:
    if (*(_DWORD*)(v25 + 16) == *(_DWORD*)(v11 + 8)) {
      result = ProcTheaterUI_1113db0(result);
      v26 = *(_QWORD*)v11;
      if (*(_QWORD*)v11 != 0 && *(_DWORD*)(v26 + 16) == *(_DWORD*)(v11 + 8)) {
        v27 = *(unsigned int*)(v26 + 36);
        if ((_DWORD)v27 != 0) {
          for (i = 0; i < v27; ++i) {
            v29 = *(_QWORD*)(v26 + 40 + 8 * i);
            if (v29 != 0) {
              *(_DWORD*)(v29 + 408) = result - 1;
              v27 = *(unsigned int*)(v26 + 36);
            }
          }
        }
      }
    }
  }
LABEL_39:
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    return std___1___shared_weak_count___release_weak(v22);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13deec0()
{
  __int64 v0;
  __int64 result;

  v0 = GameData_2236778;
  if (GameData_2236778 != 0) {
    LayoutAccessor_155cda0(GameData_2236778 + 624, "Out", 0);
    result = LayoutAccessor_155d940(v0 + 624);
    *(_DWORD*)(v0 + 816) = 3;
  }
  return result;
}

__int64 ProcTheaterSceneAct_13def20(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(int*)(result + 264) + 1LL;
  v2 = *(_QWORD*)(result + 192) - *(_QWORD*)(result + 184);
  *(_DWORD*)(result + 264) = v1;
  if (v1 >= v2 >> 3) {
    if (GameData_2236778 != 0) {
      v3 = result;
      LayoutAccessor_155cda0(GameData_2236778 + 448, "CinemaOut", 0);
      result = v3;
    }
    v4 = *(_QWORD*)(result + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 3) {
            *(_QWORD*)(result + 16) = v4;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          return result;
        }
        v4 += 64;
      }
    }
  }
  return result;
}

unsigned __int64 ProcTheaterSceneAct_13defe0(unsigned __int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _BYTE* v4;

  v1 = *(unsigned __int8*)(result + 288);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(result + 296);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = result;
    result = SceneManager_138d3a0(*(_QWORD**)GameData_212dce8, result + 288);
    if ((*(_BYTE*)(v3 + 288) & 1) != 0) {
      v4 = *(_BYTE**)(v3 + 304);
      *(_QWORD*)(v3 + 296) = 0;
    }
    else {
      v4 = (_BYTE*)(v3 + 289);
      *(_BYTE*)(v3 + 288) = 0;
    }
    *v4 = 0;
  }
  return result;
}

_QWORD* game_facility_anonymous_ProcTheaterSceneAct_ShowAudience(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  v2 = *(_QWORD*)(a1 + 208);
  result = v10;
  v10[0] = GameData_20363b0;
  v11 = v10;
  if (*(_WORD*)(v2 + 160) == 0) {
    goto LABEL_6;
  }
  v4 = 8LL * *(unsigned __int16*)(v2 + 160);
  v5 = 0;
  do {
    v6 = v11;
    if (v11 == nullptr) {
    LABEL_17:
      GameRoutine_60a310(v6, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(v11,
                                                  *(_QWORD*)(v2 + 168) + v5);
    v5 += 8;
  } while (v4 != v5);
  result = v11;
  if (v11 != nullptr) {
  LABEL_6:
    if (*(_WORD*)(v2 + 176) != 0) {
      v7 = 8LL * *(unsigned __int16*)(v2 + 176);
      v8 = 0;
      do {
        v6 = v11;
        if (v11 == nullptr) {
          goto LABEL_17;
        }
        (*(void (**)(_QWORD*, __int64))(*v11 + 48LL))(
            v11, *(_QWORD*)(v2 + 184) + v8);
        v8 += 8;
      } while (v7 != v8);
      result = v11;
    }
    if (result == v10) {
      v9 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
  }
  return result;
}

__int64 ProcTheaterSceneAct_13df3b0(__int64 a1)
{
  unsigned int v1;

  v1 = *(_DWORD*)(a1 + 240) - 1;
  if (v1 > 2) {
    return GameRoutine_149edd0(&GameData_1af6bd7);
  }
  else {
    return GameRoutine_149edd0(*(&GameData_2036610 + v1));
  }
}

void ProcTheaterSceneAct_13df3e0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = fw_memory_g_heap_manager_ptr;
        v5 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *(_BYTE*)(v5 + 32) = 0;
        v8[0] = 41;
        v8[1] = 32;
        v9 = v5;
        *(_QWORD*)v5 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v5 + 8) = 0xE3BC83E3AF83E3A9LL;
        *(_QWORD*)(v5 + 16) = 0xBCE6BA87E55FAF82LL;
        *(_QWORD*)(v5 + 24) = 0x94BCE682B5E75F94LL;
        GameRoutine_144f120(&v10, v1, v8);
        v6 = v11;
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
        if ((v8[0] & 1) != 0 && v9 != 0) {
          v7 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__int64 ProcTheaterSceneAct_13df660(__int64 result)
{
  if (*(_QWORD*)(result + 256) != 0) {
    return GameRoutine_13da730(result + 184, result);
  }
  return result;
}

void game_facility_anonymous_ProcTheaterSceneAct_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

__int64 ProcTheaterSceneAct_13e18a0(__int64* a1, _QWORD* a2, _BYTE* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 5) + 1;
  if (v4 >> 59 != 0) {
    GameRoutine_1115ca0(a1);
  }
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = a1[2] - *a1;
  if (v9 >> 4 > v4) {
    v4 = v9 >> 4;
  }
  if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFE0LL) {
    v10 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v10 = v4;
  }
  if (v10 != 0) {
    if (v10 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = *a2;
  v13 = strlen(*a2);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v13);
  }
  v14 = v11 + v3;
  v15 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v13 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(*v8, v17, 16, 0);
    *(_QWORD*)(v14 + 8) = v15;
    *(_QWORD*)(v14 + 16) = v16;
    *(_QWORD*)v14 = v17 | 1;
    goto LABEL_19;
  }
  *(_BYTE*)v14 = 2 * v13;
  v16 = v14 + 1;
  if (v13 != 0) {
  LABEL_19:
    memmove(v16, v12, v15);
  }
  *(_BYTE*)(v16 + v15) = 0;
  v18 = v11 + 32 * v10;
  v19 = (__int64*)*a1;
  v20 = (__int64*)a1[1];
  *(_BYTE*)(v14 + 24) = *a3;
  v21 = v14 + (char*)v19 - (char*)v20;
  if (v19 != v20) {
    v22 = v19;
    v23 = v14 + (char*)v19 - (char*)v20;
    do {
      v24 = *v22;
      v25 = v22[2];
      *(_QWORD*)(v23 + 8) = v22[1];
      *(_QWORD*)(v23 + 16) = v25;
      *(_QWORD*)v23 = v24;
      v22[1] = 0;
      v22[2] = 0;
      *v22 = 0;
      LOBYTE(v24) = *((_BYTE*)v22 + 24);
      v22 += 4;
      *(_BYTE*)(v23 + 24) = v24;
      v23 += 32;
    } while (v22 != v20);
    do {
      if ((*(_BYTE*)v19 & 1) != 0 && v19[2] != 0) {
        if (*(_QWORD*)(*v8 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v26);
      }
      v19 += 4;
    } while (v19 != v20);
    v19 = (__int64*)*a1;
  }
  *a1 = v21;
  a1[1] = v14 + 32;
  a1[2] = v18;
  if (v19 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v27);
  }
  return v14 + 32;
}

float ProcTheaterSceneAct_13e2420(__int64 a1)
{
  float v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = 0.0;
  if (a1 != 0 && GameData_2241850 != 0) {
    v2 = game_HashString(a1);
    if (v2 != 0) {
      v3 = *(_QWORD*)(GameData_2241850 + 96);
      if (v3 != 0 && *(_QWORD*)(GameData_2241850 + 112) != 0) {
        v5 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v6 = v2;
          if (v2 >= v3) {
            v6 = v2 % v3;
          }
        }
        else {
          v6 = v5 & v2;
        }
        v7 = *(_QWORD**)(*(_QWORD*)(GameData_2241850 + 88) + 8 * v6);
        if (v7 != nullptr) {
          v8 = (_QWORD*)*v7;
          if (v8 != nullptr) {
            if ((v3 & v5) == 0) {
              while (1) {
                v10 = v8[1];
                if (v10 == v2) {
                  if (v8[2] == v2) {
                    goto LABEL_28;
                  }
                }
                else if ((v10 & v5) != v6) {
                  return v1;
                }
                v8 = (_QWORD*)*v8;
                if (v8 == nullptr) {
                  return v1;
                }
              }
            }
            do {
              v9 = v8[1];
              if (v9 == v2) {
                if (v8[2] == v2) {
                LABEL_28:
                  v11 = v8[3];
                  if (v11 != 0) {
                    return *(float*)(v11 + 32);
                  }
                  return v1;
                }
              }
              else {
                if (v9 >= v3) {
                  v9 %= v3;
                }
                if (v9 != v6) {
                  return v1;
                }
              }
              v8 = (_QWORD*)*v8;
            } while (v8 != nullptr);
          }
        }
      }
    }
  }
  return v1;
}

__int64 ProcTheaterSceneAct_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTheaterSceneAct_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2036570;
  v2 = a1 + 152;
  v3 = (_QWORD*)GameData_2131210[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131210[0] + 24LL))(
      *(_QWORD*)GameData_2131210[0]);
  if (*v3 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = (_QWORD*)GameData_2131208[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131208[0] + 24LL))(
      *(_QWORD*)GameData_2131208[0]);
  if (*v4 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
  }
  *v4 = 0;
  if (GameData_224ade8 != 0) {
    v5 = GameData_224ade4-- <= 1;
    if (v5) {
      (*(void (**)(void))(*(_QWORD*)GameData_224ade8 + 24LL))();
      if (GameData_224ade8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_224ade8 + 8LL))(
            GameData_224ade8);
      }
      GameData_224ade8 = 0;
    }
  }
  v6 = *(_QWORD*)(a1 + 376);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 360);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 344);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
      goto LABEL_25;
    }
  }
  else if ((*(_BYTE*)(a1 + 288) & 1) == 0) {
    goto LABEL_25;
  }
  if (*(_QWORD*)(a1 + 304) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }

LABEL_25:
  v10 = *(_QWORD*)(a1 + 216);
  if (v10 != 0) {
    *(_QWORD*)(a1 + 224) = v10;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  v12 = *(_QWORD*)(a1 + 184);
  if (v12 != 0) {
    *(_QWORD*)(a1 + 192) = v12;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  v14 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v14;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v15 = (_QWORD*)GameData_212dce8;
  v16 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v5 = (*GameData_2130fb8)-- <= 1;
    if (v5) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
      if (*v15 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v15 + 8LL))(*v15);
      }
      *v15 = 0;
    }
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcTheaterSceneAct_Unknown21(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 248);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 34);
  }
  else {
    return 0;
  }
}

__int64 ProcTheaterSceneAct_Unknown5(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 34);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
