#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_df9ca0(_QWORD);
__int64 GameRoutine_df9f60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fe1bd0[14])();
extern __int64 (*game_hub_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 Object_Destructor_df88c0(__int64 a1);
__int64 Object_df8cc0(__int64 result);
__int64 EventManager_cbbb40(_QWORD);
__int64 GameRoutine_d80dc0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f3c98;
extern __int64* GameData_212ebc0[5];
__int64 Object_df9f60(_QWORD* a1);
__int64 GameRoutine_d4eca0(_QWORD, _QWORD);
__int64 GameRoutine_dabc90(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fe1f70[])();
extern __int64 (*GameData_1fe1ff0[])();
extern __int64 (*GameData_1fe2070[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_hub_Object_EnableAccess_lambda0_Clone(_QWORD* a1);
__int64 game_hub_Object_EnableAccess_lambda0_CloneInto(__int64 a1, _QWORD* a2);
_QWORD* game_hub_Object_EnableHitPlayer_lambda0_Clone(__int64 a1);
__int64 game_hub_Object_EnableHitPlayer_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* game_hub_Object_EnableHitAttack_lambda0_Clone(__int64 a1);
__int64 game_hub_Object_EnableHitAttack_lambda0_Invoke(__int64 a1, __int64* a2,
                                                       __int64* a3);
_QWORD* GameRoutine_d4e4e0(__int64*, _QWORD*);
__attribute__((swiftcall)) void game_hub_dfbc80(PSEUDO_X8, __int64, __int64,
                                                __int64*, unsigned int);
__int64* HandlePtr_Unknown24_d5bee0(__int64* result, __int64);
__int64 CharacterModel_cf9f80(__int64*, __int64);
__int64 GameRoutine_cf62e0(__int64);
__int64 GameRoutine_d49ac0(__int64);
__int64 HubCharacterNatives_cb3e60(__int64*, __int64);
__int64 HubEventNatives_d5bb40(__int64*, __int64);
__int64 MapAnimModule_c08540(__int64, unsigned __int8*, unsigned __int64,
                             unsigned int, float);
__int64 ObjectTransparentModule_f3cec0(__int64 result, float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_hub_dfb3f0(_QWORD*);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212d308;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212ec70;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64* GameData_212ec78;
extern __int64* GameData_212ee20[6];
extern __int64 game_ProcFadeView_instance_;
extern int* GameData_212d300;
extern int* GameData_212df08;
extern int* GameData_212ea88;
extern int* GameData_212ec68;
long double GameRoutine_a7f140(__int64, __int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_hub_dfc300(__int64, int, float, __int64, __int64, __int64, __int64);
__int64 game_hub_Object_EnableAccess(__int64 (**a1)(), __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     float a7);
void Object_dfcd80(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 Object_dfcfa0(__int64 a1);
__int64 Object_dfd100(__int64 a1);
void game_hub_Object_EnableHitAttack(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Object_dfd7e0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2);
void Object_dfdc40(__int64 a1, float a2);
__int64 game_hub_Object_EnableAccess_lambda0_Invoke(__int64 a1);

__int64 Object_Destructor_df88c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
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
  __int64 result;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;

  *(_QWORD*)a1 = game_hub_Object_vtable;
  if (*(_BYTE*)(a1 + 848) != 0) {
    *(_BYTE*)(a1 + 848) = 0;
  }
  GameRoutine_df9ca0(a1);
  GameRoutine_df9f60(a1);
  v2 = *(_QWORD*)(a1 + 752);
  v3 = *(_QWORD*)(a1 + 760);
  if (v2 != v3) {
    v4 = (char*)as_g_context_slots_ptr;
    v5 = as_g_script_manager_ptr;
    do {
      v6 = *(unsigned int*)(v2 + 8);
      if ((_DWORD)v6 != 0x2000) {
        v7 = &v4[16 * v6];
        v8 = *((_QWORD*)v7 + 1);
        if (v8 != 0 && *(_QWORD*)v7 == *(_QWORD*)v2 &&
            *(_DWORD*)(v8 + 52) == 1) {
          GameRoutine_62bec0(*v5, v2, 1);
        }
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = *(_QWORD*)(a1 + 752);
  }
  v9 = *(_BYTE*)(a1 + 920);
  *(_QWORD*)(a1 + 760) = v2;
  if ((v9 & 1) != 0 && *(_QWORD*)(a1 + 936) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  v11 = *(_QWORD*)(a1 + 896);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 904);
    if (v11 == v12) {
      goto LABEL_28;
    }
    v13 = *(_QWORD*)(a1 + 904);
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      v15 = *(_BYTE*)(v13 - 24);
      v13 -= 24;
      if ((v15 & 1) != 0 && *(_QWORD*)(v12 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16);
      }
      v12 = v13;
    } while (v13 != v11);
    v17 = *(_QWORD*)(a1 + 896);
    *(_QWORD*)(a1 + 904) = v11;
    if (v17 != 0) {
    LABEL_28:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
    }
  }
  if ((*(_BYTE*)(a1 + 872) & 1) != 0 && *(_QWORD*)(a1 + 888) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = *(_QWORD*)(a1 + 864);
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = *(_QWORD*)(a1 + 824);
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 832);
    if (v21 == v22) {
      goto LABEL_49;
    }
    v23 = *(_QWORD*)(a1 + 832);
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = *(_BYTE*)(v23 - 24);
      v23 -= 24;
      if ((v25 & 1) != 0 && *(_QWORD*)(v22 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v26);
      }
      v22 = v23;
    } while (v23 != v21);
    v27 = *(_QWORD*)(a1 + 824);
    *(_QWORD*)(a1 + 832) = v21;
    if (v27 != 0) {
    LABEL_49:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 808);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
    if ((*(_BYTE*)(a1 + 776) & 1) == 0) {
      goto LABEL_60;
    }
  }
  else if ((*(_BYTE*)(a1 + 776) & 1) == 0) {
    goto LABEL_60;
  }
  if (*(_QWORD*)(a1 + 792) != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
  }

LABEL_60:
  v31 = *(_QWORD*)(a1 + 752);
  if (v31 != 0) {
    *(_QWORD*)(a1 + 760) = v31;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  v33 = *(_QWORD*)(a1 + 744);
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  v34 = *(_QWORD*)(a1 + 728);
  if (v34 != 0) {
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = *(_QWORD*)(a1 + 712);
  if (v35 != 0) {
    std___1___shared_weak_count___release_weak(v35);
  }
  result = Object_df8cc0(a1 + 16);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v37 = *(unsigned int*)(a1 + 8);
  v38 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v38 != 0x4000) {
    v39 = (_QWORD*)(util_g_handle_slots_ptr[0][v37] + 16 * v38);
    if (*v39 != 0 && v39[1] == a1) {
      *v39 = 0;
      v39[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v37);
  return result;
}

__int64 Object_df8cc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
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
  __int64 v13;
  __int64 v14;
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
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char v77;
  char v78;
  char v79;

  v1 = result;
  if ((*(_BYTE*)(result + 664) & 1) != 0 && *(_QWORD*)(result + 680) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(v1 + 640) & 1) != 0 && *(_QWORD*)(v1 + 656) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_BYTE*)(v1 + 632) == 1) {
    v4 = *(_QWORD*)(v1 + 608);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v1 + 616);
      if (v4 == v5) {
        goto LABEL_19;
      }
      do {
        v6 = *(unsigned int*)(v5 - 8);
        v7 = v5 - 32;
        if ((_DWORD)v6 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v6])(&v77,
                                                                       v5 - 32);
        }
        *(_DWORD*)(v5 - 8) = -1;
        v5 -= 32;
      } while (v7 != v4);
      v8 = *(_QWORD*)(v1 + 608);
      *(_QWORD*)(v1 + 616) = v4;
      if (v8 != 0) {
      LABEL_19:
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
      }
    }
    if ((*(_BYTE*)(v1 + 584) & 1) != 0 && *(_QWORD*)(v1 + 600) != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    }
  }
  if (*(_BYTE*)(v1 + 560) == 1) {
    v11 = *(_QWORD*)(v1 + 536);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v1 + 544);
      if (v11 == v12) {
        goto LABEL_35;
      }
      do {
        v13 = *(unsigned int*)(v12 - 8);
        v14 = v12 - 32;
        if ((_DWORD)v13 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v13])(
              &v78, v12 - 32);
        }
        *(_DWORD*)(v12 - 8) = -1;
        v12 -= 32;
      } while (v14 != v11);
      v15 = *(_QWORD*)(v1 + 536);
      *(_QWORD*)(v1 + 544) = v11;
      if (v15 != 0) {
      LABEL_35:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
      }
    }
    if ((*(_BYTE*)(v1 + 512) & 1) != 0 && *(_QWORD*)(v1 + 528) != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  if (*(_BYTE*)(v1 + 488) == 1) {
    v18 = *(_QWORD*)(v1 + 464);
    if (v18 != 0) {
      v19 = *(_QWORD*)(v1 + 472);
      if (v18 == v19) {
        goto LABEL_51;
      }
      do {
        v20 = *(unsigned int*)(v19 - 8);
        v21 = v19 - 32;
        if ((_DWORD)v20 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v20])(
              &v79, v19 - 32);
        }
        *(_DWORD*)(v19 - 8) = -1;
        v19 -= 32;
      } while (v21 != v18);
      v22 = *(_QWORD*)(v1 + 464);
      *(_QWORD*)(v1 + 472) = v18;
      if (v22 != 0) {
      LABEL_51:
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
      }
    }
    if ((*(_BYTE*)(v1 + 440) & 1) != 0 && *(_QWORD*)(v1 + 456) != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    }
  }
  v25 = *(_QWORD*)(v1 + 400);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v1 + 408);
    if (v25 == v26) {
      goto LABEL_70;
    }
    v27 = *(_QWORD*)(v1 + 408);
    v28 = fw_memory_g_heap_manager_ptr;
    do {
      v29 = *(_BYTE*)(v27 - 24);
      v27 -= 24;
      if ((v29 & 1) != 0 && *(_QWORD*)(v26 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v30);
      }
      v26 = v27;
    } while (v27 != v25);
    v31 = *(_QWORD*)(v1 + 400);
    *(_QWORD*)(v1 + 408) = v25;
    if (v31 != 0) {
    LABEL_70:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    }
  }
  if ((*(_BYTE*)(v1 + 376) & 1) != 0 && *(_QWORD*)(v1 + 392) != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  v34 = *(_QWORD*)(v1 + 352);
  if (v34 != 0) {
    v35 = *(_QWORD*)(v1 + 360);
    if (v34 == v35) {
      goto LABEL_89;
    }
    v36 = *(_QWORD*)(v1 + 360);
    v37 = fw_memory_g_heap_manager_ptr;
    do {
      v38 = *(_BYTE*)(v36 - 24);
      v36 -= 24;
      if ((v38 & 1) != 0 && *(_QWORD*)(v35 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v39);
      }
      v35 = v36;
    } while (v36 != v34);
    v40 = *(_QWORD*)(v1 + 352);
    *(_QWORD*)(v1 + 360) = v34;
    if (v40 != 0) {
    LABEL_89:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
    }
  }
  if ((*(_BYTE*)(v1 + 328) & 1) != 0 && *(_QWORD*)(v1 + 344) != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
  }
  v43 = *(_QWORD*)(v1 + 304);
  if (v43 != 0) {
    v44 = *(_QWORD*)(v1 + 312);
    if (v43 == v44) {
      goto LABEL_108;
    }
    v45 = *(_QWORD*)(v1 + 312);
    v46 = fw_memory_g_heap_manager_ptr;
    do {
      v47 = *(_BYTE*)(v45 - 24);
      v45 -= 24;
      if ((v47 & 1) != 0 && *(_QWORD*)(v44 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v48);
      }
      v44 = v45;
    } while (v45 != v43);
    v49 = *(_QWORD*)(v1 + 304);
    *(_QWORD*)(v1 + 312) = v43;
    if (v49 != 0) {
    LABEL_108:
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v50 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
    }
  }
  if ((*(_BYTE*)(v1 + 280) & 1) != 0 && *(_QWORD*)(v1 + 296) != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
  }
  v52 = *(_QWORD*)(v1 + 256);
  if (v52 != 0) {
    v53 = *(_QWORD*)(v1 + 264);
    if (v52 == v53) {
      goto LABEL_127;
    }
    v54 = *(_QWORD*)(v1 + 264);
    v55 = fw_memory_g_heap_manager_ptr;
    do {
      v56 = *(_BYTE*)(v54 - 24);
      v54 -= 24;
      if ((v56 & 1) != 0 && *(_QWORD*)(v53 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
          v57 = 128;
        }
        else {
          v57 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v57);
      }
      v53 = v54;
    } while (v54 != v52);
    v58 = *(_QWORD*)(v1 + 256);
    *(_QWORD*)(v1 + 264) = v52;
    if (v58 != 0) {
    LABEL_127:
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
    }
  }
  if ((*(_BYTE*)(v1 + 232) & 1) != 0 && *(_QWORD*)(v1 + 248) != 0) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
  }
  v61 = *(_QWORD*)(v1 + 208);
  if (v61 != 0) {
    v62 = *(_QWORD*)(v1 + 216);
    if (v61 == v62) {
      goto LABEL_146;
    }
    v63 = *(_QWORD*)(v1 + 216);
    v64 = fw_memory_g_heap_manager_ptr;
    do {
      v65 = *(_BYTE*)(v63 - 24);
      v63 -= 24;
      if ((v65 & 1) != 0 && *(_QWORD*)(v62 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v64 + 200LL) != 0) {
          v66 = 128;
        }
        else {
          v66 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v64 + v66);
      }
      v62 = v63;
    } while (v63 != v61);
    v67 = *(_QWORD*)(v1 + 208);
    *(_QWORD*)(v1 + 216) = v61;
    if (v67 != 0) {
    LABEL_146:
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
    }
  }
  v69 = *(_QWORD*)(v1 + 176);
  if (v69 != 0) {
    *(_QWORD*)(v1 + 184) = v69;
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
  }
  if ((*(_BYTE*)(v1 + 136) & 1) != 0 && *(_QWORD*)(v1 + 152) != 0) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
  }
  if ((*(_BYTE*)(v1 + 112) & 1) != 0 && *(_QWORD*)(v1 + 128) != 0) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  if ((*(_BYTE*)(v1 + 88) & 1) != 0 && *(_QWORD*)(v1 + 104) != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
  }
  return result;
}

__int64 Object_df9f60(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = a1[89];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      if (a1[88] != 0) {
        result = EventManager_cbbb40(GameData_21f3c98);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        result = std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  v4 = a1[91];
  if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1) {
    v5 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
    v6 = a1[90];
    v7 = v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d80dc0(v5, &v6);
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
    result = a1[91];
    a1[90] = 0;
    a1[91] = 0;
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 game_hub_Object_EnableAccess(__int64 (**a1)(), __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     float a7)
{

#pragma clang fp contract(off)
  __int64 (*v9)();
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 (***v17)();
  _QWORD* v18;
  __int64 (**v19)();
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _BYTE v27[32];
    _BYTE* v28;
    char gap40_[8];
    __int64 (**v29)();
  } v27_;
  struct {
    _BYTE v30[32];
    __int64 v31;
    char gap104_[8];
    unsigned int v32;
  } v30_;
  unsigned __int64 v33;

  game_hub_dfc300((__int64)a1, a3, a7, a3, a4, a5, a6);
  v9 = a1[89];
  if (v9 == nullptr) {
    return game_hub_dfb3f0(a1);
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    return game_hub_dfb3f0(a1);
  }
  v11 = (__int64*)a1[88];
  v12 = v10;
  if (v11 != nullptr) {
    v13 = *(_QWORD*)(a2 + 32);
    if (v13 != 0) {
      if (v13 == a2) {
        v27_.v28 = v27_.v27;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v13 + 24LL))(v13, v27_.v27);
        v14 = v27_.v28;
      }
      else {
        v14 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        v27_.v28 = v14;
      }
    }
    else {
      v14 = nullptr;
      v27_.v28 = nullptr;
    }
    v27_.v29 = a1;
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v16 = GameData_1fe1f70;
    v17 = (__int64 (***)(void))v15;
    *v15 = GameData_1fe1f70;
    v18 = v15 + 2;
    if (v14 != nullptr) {
      if (v14 == v27_.v27) {
        v15[6] = v18;
        (*(void (**)(_BYTE*))(*(_QWORD*)v14 + 24LL))(v14);
        v19 = v27_.v29;
        v16 = *v17;
      LABEL_15:
        v17[8] = v19;
        v20 = ((__int64 (*)(__int64 (***)(void), _QWORD*))v16[2])(v17, v18);
        v21 = v11[173];
        v22 = v11[174];
        v30_.v31 = v20;
        v30_.v32 = 1;
        if (v21 >= v22) {
          v23 = HubEventNatives_d5bb40(v11 + 172, (__int64)v30_.v30);
        }
        else {
          *(_BYTE*)v21 = 0;
          v33 = v21;
          *(_DWORD*)(v21 + 48) = -1;
          HandlePtr_Unknown24_d5bee0((__int64*)&v33, (__int64)v30_.v30);
          *(_DWORD*)(v21 + 48) = 1;
          v23 = v21 + 64;
        }
        v24 = v30_.v32;
        v11[173] = v23;
        if ((_DWORD)v24 != -1) {
          ((void (*)(unsigned __int64*, _BYTE*))GameData_1fdce28[v24])(
              &v33, v30_.v30);
        }
        ((void (*)(__int64 (***)(void)))(*v17)[5])(v17);
        if (v27_.v28 == v27_.v27) {
          v25 = 32;
        }
        else {
          if (v27_.v28 == nullptr) {
          LABEL_25:
            v11[218] = (__int64)a1;
            goto LABEL_26;
          }
          v25 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v27_.v28 + v25))((__int64)v27_.v28);
        goto LABEL_25;
      }
      v16 = GameData_1fe1f70;
      v15[6] = v14;
      v27_.v28 = nullptr;
    }
    else {
      v15[6] = 0;
    }
    v19 = a1;
    goto LABEL_15;
  }
LABEL_26:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return game_hub_dfb3f0(a1);
}

void Object_dfcd80(__int64 a1, __int64 a2, unsigned __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_uchar* v9;
  int* v10;
  atomic_uchar* v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  atomic_uchar* v24;
  int* v25;
  atomic_uchar* v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 v29;

  v4 = a3;
  v5 = (unsigned __int8*)a2;
  GameRoutine_60a060((char*)(a1 + 776), a2, a3);
  v6 = *(_QWORD*)(a1 + 800);
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v6 + 16);
  if (v7 != v8) {
    v9 = (atomic_uchar*)GameData_212d308;
    v10 = GameData_212d300;
    v11 = (atomic_uchar*)GameData_212ea90;
    v12 = GameData_212ea88;
    do {
      v13 = *(_QWORD*)(v7 + 8);
      if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(v9) != 0) {
        *v10 = wld_Crc32(0, "MapAnimModule", 0xDu);
        __cxa_guard_release(v9);
      }
      v14 = *(_QWORD*)(v13 + 512);
      v15 = v14;
      while (v15 != *(_QWORD*)(v13 + 504)) {
        v16 = *(_DWORD*)(v15 - 16);
        v15 -= 16;
        v14 -= 16;
        if (v16 == *v10) {
          if (*(_QWORD*)(v13 + 512) != v14) {
            v17 = *(_QWORD*)(v14 + 8);
            if (v17 != 0) {
              MapAnimModule_c08540(v17, v5, v4, 0, 0x0.0p+0f);
            }
          }
          break;
        }
      }
      v18 = *(_QWORD*)(v7 + 8);
      if ((atomic_load_explicit(v11, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(v11) != 0) {
        *v12 = wld_Crc32(0, "AnimCtrlModule", 0xEu);
        __cxa_guard_release(v11);
      }
      v19 = *(_QWORD*)(v18 + 512);
      v20 = v19;
      while (v20 != *(_QWORD*)(v18 + 504)) {
        v21 = *(_DWORD*)(v20 - 16);
        v20 -= 16;
        v19 -= 16;
        if (v21 == *v12) {
          if (*(_QWORD*)(v18 + 512) != v19) {
            v22 = *(_QWORD*)(v19 + 8);
            if (v22 != 0) {
              v23 = **(_QWORD**)(v22 + 72);
              if (v23 != 0) {
                v24 = v11;
                v25 = v10;
                v26 = v9;
                v27 = v5;
                v28 = v4;
                v29 = *(_QWORD*)(v23 + 16);
                if (v29 != 0) {
                  *(float*)v29 = (*(float (**)(_QWORD, float, float, float))(
                      v29 + 16))(*(_QWORD*)(v29 + 24), *(float*)(v29 + 8),
                                 *(float*)(v29 + 4), *(float*)(v29 + 8));
                  *(_WORD*)(v23 + 168) = 0;
                }
                v4 = v28;
                v5 = v27;
                v9 = v26;
                v10 = v25;
                v11 = v24;
                *(_BYTE*)(v22 + 249) = 1;
                v12 = GameData_212ea88;
              }
            }
          }
          break;
        }
      }
      v7 += 32;
    } while (v7 != v8);
  }
}

__int64 Object_dfcfa0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 (*v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 800);
  v2 = *(_QWORD*)(v1 + 8);
  v3 = *(_QWORD*)(v1 + 16);
  if (v2 == v3) {
    return 0;
  }
  v4 = (atomic_uchar*)GameData_212ea90;
  v5 = GameData_212ea88;
  v6 = eft_ClampCurve_ptr;
LABEL_4:
  v7 = *(_QWORD*)(v2 + 8);
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
    v18 = v3;
    v19 = v2;
    v20 = v7;
    v16 = __cxa_guard_acquire(GameData_212ea90);
    v7 = v20;
    v6 = eft_ClampCurve_ptr;
    v5 = GameData_212ea88;
    v3 = v18;
    v2 = v19;
    v4 = (atomic_uchar*)GameData_212ea90;
    if (v16 != 0) {
      *GameData_212ea88 = wld_Crc32(0, "AnimCtrlModule", 0xEu);
      __cxa_guard_release(GameData_212ea90);
      v7 = v20;
      v6 = eft_ClampCurve_ptr;
      v5 = GameData_212ea88;
      v3 = v18;
      v2 = v19;
      v4 = (atomic_uchar*)GameData_212ea90;
    }
  }
  v9 = *(_QWORD*)(v7 + 504);
  v8 = *(_QWORD*)(v7 + 512);
  v10 = v8;
  v11 = v8;
  do {
    if (v11 == v9) {
    LABEL_3:
      v2 += 32;
      if (v2 == v3) {
        return 0;
      }
      goto LABEL_4;
    }
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    v10 -= 16;
  } while (v12 != *v5);
  if (v8 == v10) {
    goto LABEL_3;
  }
  v13 = *(_QWORD*)(v10 + 8);
  if (v13 == 0) {
    goto LABEL_3;
  }
  v14 = **(_QWORD**)(v13 + 72);
  if (v14 == 0) {
    goto LABEL_3;
  }
  v15 = *(_QWORD*)(v14 + 16);
  if (v15 != 0 && *(__int64 (**)(void))(v15 + 16) == v6 &&
      *(_BYTE*)(v14 + 168) == 1) {
    goto LABEL_3;
  }
  return 1;
}

__int64 Object_dfd100(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 (*v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 800);
  v2 = *(_QWORD*)(v1 + 8);
  v3 = *(_QWORD*)(v1 + 16);
  if (v2 == v3) {
    return 0;
  }
  v4 = (atomic_uchar*)GameData_212ea90;
  v5 = GameData_212ea88;
  v6 = eft_ClampCurve_ptr;
LABEL_4:
  v7 = *(_QWORD*)(v2 + 8);
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
    v18 = v3;
    v19 = v2;
    v20 = v7;
    v16 = __cxa_guard_acquire(GameData_212ea90);
    v7 = v20;
    v6 = eft_ClampCurve_ptr;
    v5 = GameData_212ea88;
    v3 = v18;
    v2 = v19;
    v4 = (atomic_uchar*)GameData_212ea90;
    if (v16 != 0) {
      *GameData_212ea88 = wld_Crc32(0, "AnimCtrlModule", 0xEu);
      __cxa_guard_release(GameData_212ea90);
      v7 = v20;
      v6 = eft_ClampCurve_ptr;
      v5 = GameData_212ea88;
      v3 = v18;
      v2 = v19;
      v4 = (atomic_uchar*)GameData_212ea90;
    }
  }
  v9 = *(_QWORD*)(v7 + 504);
  v8 = *(_QWORD*)(v7 + 512);
  v10 = v8;
  v11 = v8;
  do {
    if (v11 == v9) {
    LABEL_3:
      v2 += 32;
      if (v2 == v3) {
        return 0;
      }
      goto LABEL_4;
    }
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    v10 -= 16;
  } while (v12 != *v5);
  if (v8 == v10) {
    goto LABEL_3;
  }
  v13 = *(_QWORD*)(v10 + 8);
  if (v13 == 0) {
    goto LABEL_3;
  }
  v14 = **(_QWORD**)(v13 + 72);
  if (v14 == 0) {
    goto LABEL_3;
  }
  v15 = *(_QWORD*)(v14 + 16);
  if (v15 == 0 || *(__int64 (**)(void))(v15 + 16) != v6 ||
      *(float*)(v15 + 8) > *(float*)v15) {
    goto LABEL_3;
  }
  return 1;
}

void game_hub_Object_EnableHitAttack(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __n128 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64* v24;
  float v25;
  float v26;
  _QWORD* v27;
  atomic_ullong* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int128 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __n128 v36;
  _QWORD* v37;
  __int64 v38;
  _BYTE* v39;
  unsigned __int8 v40;
  int* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  float32x4_t v46;
  float v47;
  int8x16_t v48;
  float v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  _BYTE* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  struct {
    _BYTE v63[32];
    _BYTE* v64;
  } v63_;
  struct {
    _BYTE v65[32];
    _BYTE* v66;
  } v65_;
  struct {
    _QWORD* v67;
    _QWORD* v68;
  } v67_;

  v2 = *(_QWORD*)(a1 + 800);
  v4 = *(_QWORD*)(v2 + 8);
  v3 = *(_QWORD*)(v2 + 16);
  if (v3 != v4) {
    while (1) {
      v5 = *(_QWORD*)(v4 + 8);
      if (*(_DWORD*)(v5 + 284) == 2) {
        break;
      }
      v4 += 32;
      if (v4 == v3) {
        return;
      }
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                                    memory_order_acquire);
    v8 = GameData_212ec68;
    if ((explicit & 1) == 0) {
      v59 = a1;
      v60 = v5;
      v61 = __cxa_guard_acquire(GameData_212ec70);
      v5 = v60;
      a1 = v59;
      if (v61 != 0) {
        *v8 = wld_Crc32(0, "HitboxModule", 0xCu);
        __cxa_guard_release(GameData_212ec70);
        v5 = v60;
        a1 = v59;
      }
    }
    v9 = *(_QWORD*)(v5 + 512);
    v10 = v9;
    do {
      if (v10 == *(_QWORD*)(v5 + 504)) {
        goto LABEL_17;
      }
      v11 = *(_DWORD*)(v10 - 16);
      v10 -= 16;
      v9 -= 16;
    } while (v11 != *v8);
    if (*(_QWORD*)(v5 + 512) == v9 || (v12 = *(_QWORD*)(v9 + 8)) == 0) {
    LABEL_17:
      v13 = a1;
      v12 = GameRoutine_cf62e0(v5);
      goto LABEL_18;
    }
    v13 = a1;
    v14 = *GameData_212ee20[0];
    v15 = nn_os_LockMutex(*GameData_212ee20[0] + 48);
    v16 = *(_QWORD*)(v12 + 24);
    for (i = *(_QWORD*)(v12 + 32); i != v16; i -= 16) {
      v18 = *(_QWORD*)(i - 8);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(
            v18, *(long double*)&v15);
        v15 = std___1___shared_weak_count___release_weak_alt1(v18);
      }
    }
    *(_QWORD*)(v12 + 32) = v16;
    nn_os_UnlockMutex(v14 + 48);
  LABEL_18:
    v19 = 0x1.0000000000000p+0f;
    v21 = *(_QWORD*)(*(_QWORD*)(v13 + 800) + 8LL);
    v20 = *(_QWORD*)(*(_QWORD*)(v13 + 800) + 16LL);
    if (v20 != v21) {
      while (1) {
        v22 = *(_QWORD*)(v21 + 8);
        if (*(_DWORD*)(v22 + 284) == 2) {
          break;
        }
        v21 += 32;
        if (v21 == v20) {
          goto LABEL_21;
        }
      }
      v40 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                 memory_order_acquire);
      v41 = GameData_212df08;
      if ((v40 & 1) == 0) {
        v62 = __cxa_guard_acquire(GameData_212df10);
        v19 = 0x1.0000000000000p+0f;
        if (v62 != 0) {
          *v41 = wld_Crc32(0, "ModelModule", 0xBu);
          __cxa_guard_release(GameData_212df10);
          v19 = 0x1.0000000000000p+0f;
        }
      }
      v42 = *(_QWORD*)(v22 + 512);
      v43 = v42;
      while (v43 != *(_QWORD*)(v22 + 504)) {
        v44 = *(_DWORD*)(v43 - 16);
        v43 -= 16;
        v42 -= 16;
        if (v44 == *v41) {
          if (*(_QWORD*)(v22 + 512) == v42) {
            break;
          }
          v45 = *(_QWORD*)(v42 + 8);
          v23 = 0x1.0000000000000p-1f;
          if (v45 != 0) {
            v46 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v45 + 24) + 64LL),
                            *(float32x4_t*)(*(_QWORD*)(v45 + 24) + 48LL));
            v47 = LANES128(v46).n128_f32[1];
            LANES128(v46).n128_u32[1] = 0;
            v48 = vmulq_f32(v46, v46);
            LANES128(v48).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
                    .n64_u64[0];
            LODWORD(v49) =
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]))))
                    .n64_u32[0];
            v19 = 0x0.0p+0f;
            if (v47 >= 0x0.0p+0f) {
              v19 = v47;
            }
            v23 = 0x1.0000000000000p-1f * v49;
          }
          goto LABEL_22;
        }
      }
    }
  LABEL_21:
    v23 = 0x1.0000000000000p-1f;
  LABEL_22:
    v24 = (__int64*)fw_memory_g_heap_manager_ptr;
    v25 = v19 + (float)(v23 * -0x1.0000000000000p+1f);
    if (v25 >= 0x0.0p+0f) {
      v26 = v25;
    }
    else {
      v26 = 0x0.0p+0f;
    }
    v27 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
    v27[1] = 0;
    v28 = (atomic_ullong*)(v27 + 1);
    v27[2] = 0;
    v29 = v27 + 4;
    v30 = v27;
    *v27 = GameData_212ec78 + 2;
    GameRoutine_d49ac0((__int64)(v27 + 4));
    *((_DWORD*)v30 + 28) = 0;
    *((_DWORD*)v30 + 32) = 0;
    v67_.v67 = v29;
    v67_.v68 = v30;
    *(_QWORD*)((char*)v30 + 148) = 0x400000000LL;
    *((float*)v30 + 36) = v23 * 0x1.0000000000000p-1f;
    *((float*)v30 + 29) = v23 * 0x1.0000000000000p-1f;
    *((float*)v30 + 33) =
        (float)(PSEUDO_UNFUSED(v23 * 0x1.0000000000000p-1f)) + v26;
    v31 = *((_OWORD*)v30 + 8);
    *((_OWORD*)v30 + 7) = (unsigned __int64)v30[14];
    *((_OWORD*)v30 + 8) = (unsigned __int64)v31;
    atomic_fetch_add_explicit(v28, 1u, memory_order_relaxed);
    v32 = GameData_212ee20[0];
    v33 = *GameData_212ee20[0];
    nn_os_LockMutex(*GameData_212ee20[0] + 48);
    v34 = *v32;
    v30[25] = v12;
    *((_BYTE*)v30 + 208) = 1;
    v35 = *(_QWORD*)(v34 + 8);
    v30[24] = v35;
    *(_QWORD*)(v34 + 8) = v35 + 1;
    GameRoutine_d4e4e0((__int64*)(v12 + 24), &v67_.v67);
    v36 = nn_os_UnlockMutex(v33 + 48);
    v37 = v67_.v68;
    if (v67_.v68 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)(v67_.v68 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*, long double))(*v37 + 16LL))(v37,
                                                        *(long double*)&v36);
      v36 = std___1___shared_weak_count___release_weak_alt1(v37);
      v38 = *(_QWORD*)(a2 + 32);
      if (v38 != 0) {
      LABEL_28:
        if (v38 == a2) {
          v63_.v64 = v63_.v63;
          (*(void (**)(__int64, _BYTE*, long double))(*(_QWORD*)v38 + 24LL))(
              v38, v63_.v63, *(long double*)&v36);
          v39 = v63_.v64;
        }
        else {
          v39 = (_BYTE*)(*(__int64 (**)(__int64, long double))(
              *(_QWORD*)v38 + 16LL))(v38, *(long double*)&v36);
          v63_.v64 = v39;
        }
        goto LABEL_42;
      }
    }
    else {
      v38 = *(_QWORD*)(a2 + 32);
      if (v38 != 0) {
        goto LABEL_28;
      }
    }
    v39 = nullptr;
    v63_.v64 = nullptr;
  LABEL_42:
    v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v24, 64, 16, 0);
    *v50 = GameData_1fe2070;
    v51 = v50 + 2;
    if (v39 != nullptr) {
      if (v39 == v63_.v63) {
        v50[6] = v51;
        v52 = v50;
        (*(void (**)(_BYTE*))(*(_QWORD*)v39 + 24LL))(v39);
        v50 = v52;
      }
      else {
        v50[6] = v39;
        v63_.v64 = nullptr;
      }
    }
    else {
      v50[6] = 0;
    }
    v53 = v30[35];
    v54 = v30[36];
    v65_.v66 = v50;
    if (v53 < v54) {
      *(_QWORD*)(v53 + 32) = v50;
      v65_.v66 = nullptr;
      v30[35] = v53 + 48;
      goto LABEL_55;
    }
    v55 = CharacterModel_cf9f80(v30 + 34, (__int64)v65_.v65);
    v56 = v65_.v66;
    v30[35] = v55;
    if (v56 == v65_.v65) {
      v57 = 32;
    }
    else {
      if (v56 == nullptr) {
        goto LABEL_55;
      }
      v57 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v56 + v57))((__int64)v56);
  LABEL_55:
    if (v63_.v64 == v63_.v63) {
      v58 = 32;
    }
    else {
      if (v63_.v64 == nullptr) {
        goto LABEL_60;
      }
      v58 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v63_.v64 + v58))((__int64)v63_.v64);
  LABEL_60:
    if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*, _QWORD*))(*v30 + 16LL))(v30, v51);
      std___1___shared_weak_count___release_weak_alt1(v30);
    }
  }
}

__attribute__((swiftcall)) void Object_dfd7e0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2)
{

#pragma clang fp contract(off)
  _OWORD* a3 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  int v14;
  __int64 v15;
  long double result;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  _OWORD* v26;
  _OWORD* v27;
  __int64 v28;
  __int64 v29;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v24 = a1;
    v28 = a2;
    v26 = a3;
    v17 = __cxa_guard_acquire(&GameData_21a55c0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    a2 = v28;
    v18 = v17;
    a1 = v24;
    a3 = v26;
    if (v18 != 0) {
      v19 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v19;
      v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v20;
      v21 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v21;
      v22 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v22;
      __cxa_guard_release(&GameData_21a55c0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      a1 = v24;
      a3 = v26;
      a2 = v28;
    }
  }
  *a3 = GameData_21a5580;
  a3[1] = GameData_21a5590;
  a3[3] = GameData_21a55b0;
  a3[2] = GameData_21a55a0;
  v3 = *(_QWORD*)(a1 + 800);
  v5 = *(_QWORD*)(v3 + 8);
  v4 = *(_QWORD*)(v3 + 16);
  if (v4 != v5) {
    while (1) {
      v6 = *(_QWORD*)(v5 + 8);
      if (*(_DWORD*)(v6 + 284) == 2) {
        break;
      }
      v5 += 32;
      if (v5 == v4) {
        result;
        return;
      }
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v8 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v29 = a2;
      v25 = v6;
      v27 = a3;
      v23 = __cxa_guard_acquire(GameData_212df10),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v8 = GameData_212df08;
      v6 = v25;
      a3 = v27;
      a2 = v29;
      if (v23 != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        __cxa_guard_release(GameData_212df10),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v8 = GameData_212df08;
        v6 = v25;
        a3 = v27;
        a2 = v29;
      }
    }
    v9 = *v8;
    v11 = *(_QWORD*)(v6 + 504);
    v10 = *(_QWORD*)(v6 + 512);
    v12 = v10;
    for (i = v10; i != v11; i -= 16) {
      v14 = *(_DWORD*)(i - 16);
      v12 -= 16;
      if (v14 == v9) {
        if (v10 != v12) {
          v15 = *(_QWORD*)(v12 + 8);
          if (v15 != 0) {
            GameRoutine_a7f140(v15, (__int64)a3, a2),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            return;
          }
        }
        {
          result;
          return;
        }
      }
    }
  }
  {
    result;
    return;
  }
}

void Object_dfdc40(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v9;
  float v10;
  float v11;

  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      a2 = 0x0.0p+0f;
    }
  }
  v6 = *(_QWORD*)(a1 + 800);
  v7 = *(_QWORD*)(v6 + 8);
  for (i = *(_QWORD*)(v6 + 16); v7 != i; v7 += 32) {
    v9 = *(_QWORD*)(v7 + 16);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 84) = 0;
      *(float*)(v9 + 88) = a2;
      if (a2 == 0x0.0p+0f) {
        v10 = *(float*)(v9 + 72) * *(float*)(v9 + 44);
        v11 = 0x1.0000000000000p+0f - *(float*)(v9 + 60);
        *(_DWORD*)(v9 + 80) = 0;
        ObjectTransparentModule_f3cec0(
            v9, v10 * 0x0.0p+0f,
            v11 * fminf(fmaxf(v10 * 0x0.0p+0f, 0x0.0p+0f),
                        0x1.0000000000000p+0f));
      }
    }
  }
}

_QWORD* game_hub_Object_EnableAccess_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1fe1f70;
  v3 = result + 2;
  v4 = (_QWORD*)a1[6];
  if (v4 != nullptr) {
    if (v4 == a1 + 2) {
      result[6] = v3;
      v7 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
      result = v7;
    }
    else {
      v5 = result;
      v6 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                  PSEUDO_X8, _QWORD, _QWORD*))(*v4 + 16LL))(
                                  (void*)v4, a1[6], v3));
      result = v5;
      v5[6] = v6;
    }
  }
  else {
    result[6] = 0;
  }
  result[8] = a1[8];
  return result;
}

__int64 game_hub_Object_EnableAccess_lambda0_CloneInto(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 result;

  *a2 = GameData_1fe1f70;
  v4 = a2 + 2;
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    if (result == a1 + 16) {
      a2[6] = v4;
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 24LL))(
          *(_QWORD*)(a1 + 48));
    }
    else {
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 16LL))(
          result, v4);
      a2[6] = result;
    }
  }
  else {
    a2[6] = 0;
  }
  a2[8] = *(_QWORD*)(a1 + 64);
  return result;
}

__int64 game_hub_Object_EnableAccess_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v13;
    unsigned int v14;
  } v13_;

  v1 = *(_QWORD*)(a1 + 64);
  v3 = *(unsigned __int8*)(v1 + 872);
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 880);
  }
  else {
    v4 = v3 >> 1;
  }
  if (v4 != 0) {
    game_hub_dfbc80((void*)((__int64)&v13_.v13), *(_QWORD*)(a1 + 64), v1 + 872,
                    (__int64*)(v1 + 896), 0);
    v5 = *(_QWORD*)(v1 + 760);
    if (v5 >= *(_QWORD*)(v1 + 768)) {
      v10 =
          HubCharacterNatives_cb3e60((__int64*)(v1 + 752), (__int64)&v13_.v13);
    }
    else if (v13_.v14 != 0x2000 &&
             (v6 = &as_g_context_slots[2 * v13_.v14], (v7 = v6[1]) != 0) &&
             *v6 == v13_.v13) {
      *(_QWORD*)v5 = 0;
      *(_QWORD*)(v5 + 16) = 0;
      *(_DWORD*)(v5 + 8) = 0x2000;
      v8 = *(unsigned int*)(v7 + 8);
      if ((_DWORD)v8 != 0x2000) {
        v9 = &as_g_context_slots[2 * v8];
        if (v9[1] == v7) {
          *(_DWORD*)(v5 + 8) = v8;
          *(_QWORD*)v5 = *v9;
        }
      }
      *(_QWORD*)(v5 + 16) = v7;
      v10 = v5 + 24;
    }
    else {
      *(_QWORD*)v5 = 0;
      *(_QWORD*)(v5 + 16) = 0;
      v10 = v5 + 24;
      *(_DWORD*)(v5 + 8) = 0x2000;
    }
    *(_QWORD*)(v1 + 760) = v10;
  }
  v11 = *(_QWORD*)(a1 + 48);
  if (v11 == 0) {
    GameRoutine_60a310_alt1();
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
}

_QWORD* game_hub_Object_EnableHitPlayer_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fe1ff0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_hub_Object_EnableHitPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

_QWORD* game_hub_Object_EnableHitAttack_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fe2070;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_hub_Object_EnableHitAttack_lambda0_Invoke(__int64 a1, __int64* a2,
                                                       __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  _QWORD v16[2];
  __int64 v17;
  __int64 v18;

  v4 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v17 = v4;
  v18 = v3;
  v6 = *a3;
  v5 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_QWORD*)(a1 + 48);
  if (v7 == 0) {
    GameRoutine_60a310(0, a2);
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v17);
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak(v18);
  }
  v16[0] = 0;
  v15[0] = v4;
  v15[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v8 = GameRoutine_d4eca0(v15, v16);
    result = std___1___shared_weak_count___release_weak(v3);
    if ((v8 & 1) == 0) {
      goto LABEL_17;
    }
    v13 = v4;
    v14 = v3;
    v10 = *(_QWORD*)(v16[0] + 32LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v11 = v6;
    v12 = v5;
    if (v5 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  result = GameRoutine_d4eca0(v15, v16);
  if ((result & 1) != 0) {
    v13 = v4;
    v14 = 0;
    v10 = *(_QWORD*)(v16[0] + 32LL);
    v11 = v6;
    v12 = v5;
    if (v5 != 0) {
    LABEL_9:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
  LABEL_10:
    GameRoutine_dabc90(v10, &v13, &v11);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
    result = v14;
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
LABEL_17:
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  if (v3 != 0) {
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
