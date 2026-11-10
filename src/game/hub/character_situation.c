#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f99780(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff8b28[])();
extern __int64 (*game_hub_CharacterSituation_vtable[])();
extern __int64 GameData_21f3ce0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2228b18;
_QWORD* CharacterSituation_Destructor(_QWORD* result);
_QWORD* GameRoutine_112eec0(_QWORD* __return_ptr, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_f96ec0(__int64, _QWORD*, __int64, __int64, bool*);
__int64 GameRoutine_f991e0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_21ed530;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern int GameData_21ed528;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_f99760(void);
void __attribute__((noreturn)) GameRoutine_f9a220(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(void);
bool CharacterSituation_f94550();
__int64 CharacterSituation_f982e0(__int64 a1, __int64 a2);
__int64 CharacterSituation_f98e60(_QWORD* a1, __int64 a2);
__int64 CharacterSituation_f994e0(__int64* a1, __int64 a2);
__int64 game_hub_CharacterSituation_Rebuild_lambda0_Invoke(__int64 a1,
                                                           _QWORD** a2);
__int64 CharacterSituation_f9a100(__int64 a1, __int64 a2);
__int64 game_hub_CharacterSituation_GetCorpsTroop_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 CharacterSituation_f99780(__int64 a1);

_QWORD* CharacterSituation_Destructor(_QWORD* result)
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result[7];
  v2 = result;
  *result = game_hub_CharacterSituation_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[4];
  if (v6 != 0) {
    v7 = v2[5];
    if (v6 == v7) {
      goto LABEL_22;
    }
    do {
      v8 = v7;
      if ((*(_BYTE*)(v7 - 40) & 1) != 0 && *(_QWORD*)(v7 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
      }
      v7 -= 96;
      if ((*(_BYTE*)(v8 - 96) & 1) != 0 && *(_QWORD*)(v8 - 80) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      }
    } while (v7 != v6);
    v11 = v2[4];
    v2[5] = v6;
    if (v11 != 0) {
    LABEL_22:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
    }
  }
  v13 = v2[1];
  if (v13 != 0) {
    v14 = v2[2];
    if (v13 == v14) {
      goto LABEL_29;
    }
    do {
      v14 -= 80;
      result = (_QWORD*)GameRoutine_f99780(v14);
    } while (v14 != v13);
    v15 = v2[1];
    v2[2] = v13;
    if (v15 != 0) {
    LABEL_29:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
  }
  *v2 = GameData_1ff8b28;
  if ((_QWORD*)GameData_21f3ce0 == v2) {
    GameData_21f3ce0 = 0;
    GameData_2228b18 = 0;
  }
  return result;
}

bool CharacterSituation_f94550()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  int* v3;
  int v5;
  int v6;
  bool v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  __int64* v17;

  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return false;
  }
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(&v15, *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v0 = *(_QWORD*)(GameData_21f3d10 + 48);
    v1 = *(__int64**)(GameData_21f3d10 + 56);
    v15 = *(_QWORD*)(GameData_21f3d10 + 40);
    v16 = v0;
    v17 = v1;
  }
  v2 = v16;
  if ((v15 & 1) == 0) {
    v2 = (unsigned __int8)v15 >> 1;
  }
  if (v2 == 11) {
    v8 = v17;
    if ((v15 & 1) == 0) {
      v8 = (__int64*)((char*)&v15 + 1);
    }
    if (*v8 != 0x5F6C74425F627548LL ||
        *(__int64*)((char*)v8 + 3) != 0x3930345F6C74425FLL) {
      v10 = *v8;
      v11 = *(__int64*)((char*)v8 + 3);
      v7 = v10 == 0x5F6C74425F627548LL && v11 == 0x3231305F6C74425FLL;
      goto LABEL_28;
    }
  }
  else {
    if (v2 != 7) {
      v12 = 1;
      if ((v15 & 1) == 0) {
        return v12 == 0;
      }
      goto LABEL_36;
    }
    v3 = (int*)v17;
    if ((v15 & 1) == 0) {
      v3 = (int*)((char*)&v15 + 1);
    }
    if (*v3 != *(_DWORD*)"Hub_000" ||
        *(int*)((char*)v3 + 3) != *(_DWORD*)"_000") {
      v5 = *v3;
      v6 = *(int*)((char*)v3 + 3);
      v7 = v5 == 1600288072 && v6 == 808464991;
    LABEL_28:
      v12 = !v7;
      if ((v15 & 1) == 0) {
        return v12 == 0;
      }
      goto LABEL_36;
    }
  }
  v12 = 0;
  if ((v15 & 1) != 0) {
  LABEL_36:
    if (v17 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v13);
    }
  }
  return v12 == 0;
}

__int64 CharacterSituation_f982e0(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  int v10;
  unsigned __int64 v11;
  char* v12;
  signed __int64 v13;
  char* v14;
  signed __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  signed __int64 v30;
  char* v31;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_BYTE**)(a2 + 88);
  if (v2 == nullptr || *v2 == 0) {
    return 0;
  }
  v3 = strlen(*(_QWORD*)(a2 + 88));
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v30 = v4;
    v31 = v5;
    v29 = v7 | 1;
    goto LABEL_14;
  }
  LOBYTE(v29) = 2 * v3;
  v5 = (char*)&v29 + 1;
  if (v3 != 0) {
  LABEL_14:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v8 = v30;
  v9 = v31;
  v10 = v29 & 1;
  v11 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  if (v10 != 0) {
    v12 = v31;
  }
  else {
    v12 = (char*)&v29 + 1;
  }
  if ((v29 & 1) != 0) {
    v13 = v30;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  }
  if (v13 >= 2) {
    v14 = &v12[v13];
    v15 = v13;
    v16 = v12;
    do {
      v17 = (char*)memchr(v16, 95, v15 - 1);
      if (v17 == nullptr) {
        break;
      }
      if (*(_WORD*)v17 == 16735) {
        if (v17 != v14) {
          v18 = v17 - v12;
          if (v17 - v12 != -1) {
            if (v18 > v13) {
              String_60a230();
            }
            if (v10 != 0) {
              v30 = v17 - v12;
            }
            else {
              v9 = (char*)&v29 + 1;
              LOBYTE(v29) = 2 * v18;
            }
            v9[v18] = 0;
            v8 = v30;
            v10 = v29 & 1;
            v11 = (unsigned __int64)(unsigned __int8)v29 >> 1;
          }
        }
        break;
      }
      v16 = v17 + 1;
      v15 = v14 - v16;
    } while (v14 - v16 >= 2);
  }
  if (v10 != 0) {
    v19 = v8;
  }
  else {
    v19 = v11;
  }
  v20 = *(_QWORD*)GameData_212dbb8[0];
  v21 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
  v22 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
  if ((v21 & 1) == 0) {
    v22 = v21 >> 1;
  }
  if (v19 == v22) {
    if (v10 != 0) {
      v23 = v31;
    }
    else {
      v23 = (char*)&v29 + 1;
    }
    v24 = *(_QWORD*)(v20 + 56);
    v25 = v20 + 41;
    if ((v21 & 1) != 0) {
      v26 = v24;
    }
    else {
      v26 = v25;
    }
    result = (unsigned int)memcmp(v23, v26) == 0;
    if (v10 == 0) {
      return result;
    }
  }
  else {
    result = 0;
    if (v10 == 0) {
      return result;
    }
  }
  if (v31 != nullptr) {
    v27 = result;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    return v27;
  }
  return result;
}

__int64 CharacterSituation_f98e60(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int i;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  unsigned __int16 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v3 = a1[4];
  v4 = a1[5];
  v2 = a1 + 4;
  v7 = fw_memory_g_heap_manager_ptr;
  while (v4 != v3) {
    v8 = v4;
    if ((*(_BYTE*)(v4 - 40) & 1) != 0 && *(_QWORD*)(v4 - 24) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
    }
    v4 -= 96;
    if ((*(_BYTE*)(v8 - 96) & 1) != 0 && *(_QWORD*)(v8 - 80) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10);
    }
  }
  a1[5] = v3;
  LODWORD(v31) = 0;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a2 + 16LL))(a2, &v31);
  v11 = *(int*)(a2 + 20);
  v12 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v11 + 2;
  v13 = *(unsigned __int8*)(v12 + v11 + 1);
  *(_DWORD*)(a2 + 20) = v11 + 3;
  v14 = v13 | (*(unsigned __int8*)(v12 + v11 + 2) << 8);
  *(_DWORD*)(a2 + 20) = v11 + 4;
  LOWORD(v13) = *(unsigned __int8*)(v12 + v11 + 3);
  *(_DWORD*)(a2 + 20) = v11 + 5;
  v29 = v13 | (*(unsigned __int8*)(v12 + v11 + 4) << 8);
  v15 = v29;
  if (v29 >= v14) {
    v15 = v14;
  }
  v30 = v15;
  if (v15 != 0) {
    for (i = v15; i != 0; --i) {
      v32 = 0;
      v33 = 0;
      v31 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      GameRoutine_f991e0(&v31, a2);
      v17 = a1[5];
      if (v17 >= a1[6]) {
        v19 = CharacterSituation_f994e0(v2, &v31);
      }
      else {
        if ((v31 & 1) != 0) {
          fw_text_String_CopyTerminated(a1[5], v33, v32);
        }
        else {
          *(_QWORD*)(v17 + 8) = v32;
          v18 = v31;
          *(_QWORD*)(v17 + 16) = v33;
          *(_QWORD*)v17 = v18;
        }
        *(_QWORD*)(v17 + 40) = v35;
        *(_QWORD*)(v17 + 32) = v34;
        *(_DWORD*)(v17 + 48) = v36;
        if ((v37 & 1) != 0) {
          fw_text_String_CopyTerminated(v17 + 56, v39, v38);
        }
        else {
          v20 = v37;
          v21 = v39;
          *(_QWORD*)(v17 + 64) = v38;
          *(_QWORD*)(v17 + 72) = v21;
          *(_QWORD*)(v17 + 56) = v20;
        }
        v19 = v17 + 96;
        *(_QWORD*)(v17 + 80) = v40;
      }
      v22 = v37;
      a1[5] = v19;
      if ((v22 & 1) != 0 && v39 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v23);
      }
      if ((v31 & 1) != 0 && v33 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v24);
      }
    }
  }
  if (v14 > v29) {
    v25 = v14 - v30;
    do {
      v32 = 0;
      v33 = 0;
      v31 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      GameRoutine_f991e0(&v31, a2);
      if ((v37 & 1) != 0 && v39 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v26);
      }
      if ((v31 & 1) != 0 && v33 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27);
      }
      --v25;
    } while (v25 != 0);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

__int64 CharacterSituation_f994e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
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

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 5);
  if (v3 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_f99760();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 5) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 5);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 5) >= 0x155555555555555LL) {
    v7 = 0x2AAAAAAAAAAAAAALL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x2AAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        96 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = v8 + v2;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, *(_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 8));
  }
  else {
    v10 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)v9 = *(_QWORD*)a2;
    *(_QWORD*)(v9 + 8) = v10;
    *(_QWORD*)(v9 + 16) = *(_QWORD*)(a2 + 16);
  }
  v11 = *(_BYTE*)(a2 + 56);
  v12 = *(_DWORD*)(a2 + 48);
  v13 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v9 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v9 + 40) = v13;
  *(_DWORD*)(v9 + 48) = v12;
  if ((v11 & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + 56, *(_QWORD*)(a2 + 72),
                                  *(_QWORD*)(a2 + 64));
  }
  else {
    v14 = *(_QWORD*)(a2 + 64);
    v15 = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(v9 + 56) = *(_QWORD*)(a2 + 56);
    *(_QWORD*)(v9 + 64) = v14;
    *(_QWORD*)(v9 + 72) = v15;
  }
  v16 = v8 + 96 * v7;
  v17 = *(_QWORD*)(a2 + 80);
  v18 = (__int64*)*a1;
  v19 = (__int64*)a1[1];
  v20 = v9 + 96;
  *(_QWORD*)(v9 + 80) = v17;
  v21 = v9 + (char*)v18 - (char*)v19;
  if (v18 != v19) {
    v22 = v18;
    v23 = v21;
    do {
      v24 = *v22;
      v25 = v22[2];
      *(_QWORD*)(v23 + 8) = v22[1];
      *(_QWORD*)(v23 + 16) = v25;
      *(_QWORD*)v23 = v24;
      v22[1] = 0;
      v22[2] = 0;
      *v22 = 0;
      v26 = v22[5];
      *(_QWORD*)(v23 + 32) = v22[4];
      *(_QWORD*)(v23 + 40) = v26;
      *(_DWORD*)(v23 + 48) = *((_DWORD*)v22 + 12);
      v27 = v22[7];
      v28 = v22[9];
      *(_QWORD*)(v23 + 64) = v22[8];
      *(_QWORD*)(v23 + 72) = v28;
      *(_QWORD*)(v23 + 56) = v27;
      v22[8] = 0;
      v22[9] = 0;
      v22[7] = 0;
      v29 = v22[10];
      v22 += 12;
      *(_QWORD*)(v23 + 80) = v29;
      v23 += 96;
    } while (v22 != v19);
    do {
      if ((v18[7] & 1) != 0 && v18[9] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v30);
      }
      if ((*(_BYTE*)v18 & 1) != 0 && v18[2] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v31);
      }
      v18 += 12;
    } while (v18 != v19);
    v18 = (__int64*)*a1;
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v16;
  if (v18 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v32);
  }
  return v20;
}

__n128 CharacterSituation_f99780(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 48);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v6 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = v1;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

__int64 game_hub_CharacterSituation_Rebuild_lambda0_Invoke(__int64 a1,
                                                           _QWORD** a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  char* v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
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
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  _DWORD* v60;
  _QWORD v61[2];
  char* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char v70;
  bool v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v72 = 0;
  v73 = 0;
  v71 = false;
  result = GameRoutine_f96ec0(v4, v3, (__int64)&v75, (__int64)&v72, &v71);
  if ((result & 1) != 0) {
    v70 = 0;
    v68 = 0;
    v69 = 0;
    v66 = 0;
    v67 = 0;
    v64 = 0;
    v65 = 0;
    v63 = v3;
    if ((v75 & 1) != 0) {
      GameRoutine_64df20(&v64, v77, v76);
    }
    else {
      v64 = v75;
      v65 = v76;
      v66 = v77;
    }
    GameRoutine_6b7aa0(&v67);
    if (v71) {
      GameRoutine_112eec0(v61, v3);
      if ((v61[0] & 1) != 0) {
        v7 = v62;
      }
      else {
        v7 = (char*)v61 + 1;
      }
      v60 = v7;
      v8 = game_HashString(v7);
      v10 = game_GameModeData_instance_;
      v59 = v8;
      if (game_GameModeData_instance_ != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21ed530) != 0) {
          GameData_21ed528 = 1598310733;
          __cxa_guard_release(&GameData_21ed530);
        }
        v9 = v60 != nullptr && *v60 == GameData_21ed528 &&
             (v11 = game_GameVariableTable_Find(*(_QWORD*)(v10 + 48), &v59)) !=
                 0 &&
             *(_DWORD*)(v11 + 32) != 0;
      }
      if (v10 != 0 && v9) {
        v6 = 2;
      }
      else {
        v6 = 1;
      }
      if ((v61[0] & 1) != 0 && v62 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v12);
      }
    }
    else {
      v6 = 0;
    }
    v13 = (__int64*)(*(_QWORD*)(a1 + 16) + 24 * v6);
    v14 = v13[1];
    v15 = v13[2];
    if (v14 >= v15) {
      v17 = v14 - *v13;
      v18 = (v17 >> 6) + 1;
      if (v18 >> 58 != 0) {
        GameRoutine_f9a220();
      }
      v19 = v15 - *v13;
      v20 = v19 >> 5;
      if (v19 >> 5 <= v18) {
        v20 = (v17 >> 6) + 1;
      }
      if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFC0LL) {
        v21 = 0x3FFFFFFFFFFFFFFLL;
      }
      else {
        v21 = v20;
      }
      if (v21 != 0) {
        if (v21 >> 58 != 0) {
          GameRoutine_60a210(v14);
        }
        v22 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v21 << 6, 16, 0);
      }
      else {
        v22 = 0;
      }
      v23 = v22 + v17;
      v24 = v22 + (v21 << 6);
      result = CharacterSituation_f9a100(v22 + v17, &v63);
      v25 = *v13;
      v26 = v13[1];
      v16 = v23 + 64;
      v27 = v23 + *v13 - v26;
      if (v26 != *v13) {
        v58 = v24;
        v28 = *v13;
        v29 = v23 + *v13 - v26;
        do {
          *(_QWORD*)v29 = *(_QWORD*)v28;
          v30 = *(_QWORD*)(v28 + 8);
          v31 = *(_QWORD*)(v28 + 24);
          *(_QWORD*)(v29 + 16) = *(_QWORD*)(v28 + 16);
          *(_QWORD*)(v29 + 24) = v31;
          *(_QWORD*)(v29 + 8) = v30;
          *(_QWORD*)(v28 + 16) = 0;
          *(_QWORD*)(v28 + 24) = 0;
          *(_QWORD*)(v28 + 8) = 0;
          *(_QWORD*)(v29 + 40) = 0;
          *(_QWORD*)(v29 + 48) = 0;
          *(_QWORD*)(v29 + 32) = 0;
          *(_QWORD*)(v29 + 32) = *(_QWORD*)(v28 + 32);
          *(_QWORD*)(v29 + 40) = *(_QWORD*)(v28 + 40);
          *(_QWORD*)(v29 + 48) = *(_QWORD*)(v28 + 48);
          *(_QWORD*)(v28 + 40) = 0;
          *(_QWORD*)(v28 + 48) = 0;
          *(_QWORD*)(v28 + 32) = 0;
          LOBYTE(v30) = *(_BYTE*)(v28 + 56);
          v28 += 64;
          *(_BYTE*)(v29 + 56) = v30;
          v29 += 64;
        } while (v28 != v26);
        v32 = fw_memory_g_heap_manager_ptr;
        do {
          v33 = *(_QWORD*)(v25 + 32);
          if (v33 != 0) {
            v34 = *(_QWORD*)(v25 + 40);
            if (v33 == v34) {
              goto LABEL_53;
            }
            v35 = *(_QWORD*)(v25 + 40);
            do {
              v36 = *(_BYTE*)(v35 - 24);
              v35 -= 24;
              if ((v36 & 1) != 0 && *(_QWORD*)(v34 - 8) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
                  v37 = 128;
                }
                else {
                  v37 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v37);
              }
              v34 = v35;
            } while (v35 != v33);
            v38 = *(_QWORD*)(v25 + 32);
            *(_QWORD*)(v25 + 40) = v33;
            if (v38 != 0) {
            LABEL_53:
              if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
                v39 = 128;
              }
              else {
                v39 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v39);
            }
          }
          if ((*(_BYTE*)(v25 + 8) & 1) != 0 && *(_QWORD*)(v25 + 24) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
              v40 = 128;
            }
            else {
              v40 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v40);
          }
          v25 += 64;
        } while (v25 != v26);
        v25 = *v13;
        v24 = v58;
      }
      *v13 = v27;
      v13[1] = v16;
      v13[2] = v24;
      if (v25 != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
      }
    }
    else {
      result = CharacterSituation_f9a100(v14, &v63);
      v16 = result + 64;
    }
    v13[1] = v16;
    v42 = v67;
    if (v67 != 0) {
      v43 = v68;
      if (v67 == v68) {
        goto LABEL_79;
      }
      v44 = v68;
      v45 = fw_memory_g_heap_manager_ptr;
      do {
        v46 = *(_BYTE*)(v44 - 24);
        v44 -= 24;
        if ((v46 & 1) != 0 && *(_QWORD*)(v43 - 8) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v45 + v47);
        }
        v43 = v44;
      } while (v44 != v42);
      v68 = v42;
      if (v67 != 0) {
      LABEL_79:
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
      }
    }
    if ((v64 & 1) != 0 && v66 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49);
    }
  }
  v50 = v72;
  if (v72 != 0) {
    v51 = v73;
    v52 = fw_memory_g_heap_manager_ptr;
    if (v72 == v73) {
      goto LABEL_98;
    }
    v53 = v73;
    do {
      v54 = *(_BYTE*)(v53 - 24);
      v53 -= 24;
      if ((v54 & 1) != 0 && *(_QWORD*)(v51 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v55);
      }
      v51 = v53;
    } while (v53 != v50);
    v73 = v50;
    if (v72 != 0) {
    LABEL_98:
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) == 0) {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v56);
    }
  }
  if ((v75 & 1) != 0 && v77 != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
  }
  return result;
}

__int64 CharacterSituation_f9a100(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = *(_QWORD*)a2;
  v4 = (_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v4 = (_QWORD*)fw_text_String_CopyTerminated(v4, *(_QWORD*)(a2 + 24),
                                                *(_QWORD*)(a2 + 16));
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v6 = *(_QWORD*)(a2 + 24);
    v4[1] = *(_QWORD*)(a2 + 16);
    v4[2] = v6;
    *v4 = v5;
  }
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v7 = *(char**)(a2 + 32);
  v8 = *(char**)(a2 + 40);
  v9 = v8 - v7;
  if (v8 != v7) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(v4);
    }
    v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 - v7, 16, 0);
    *(_QWORD*)(a1 + 32) = v10;
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(a1 + 48) = (char*)v10 + v9;
    do {
      if ((*v7 & 1) != 0) {
        fw_text_String_CopyTerminated(v10, *((_QWORD*)v7 + 2),
                                      *((_QWORD*)v7 + 1));
      }
      else {
        v11 = *(_QWORD*)v7;
        v12 = *((_QWORD*)v7 + 2);
        v10[1] = *((_QWORD*)v7 + 1);
        v10[2] = v12;
        *v10 = v11;
      }
      v7 += 24;
      v10 += 3;
    } while (v7 != v8);
    *(_QWORD*)(a1 + 40) = v10;
  }
  *(_BYTE*)(a1 + 56) = *(_BYTE*)(a2 + 56);
  return a1;
}

__int64 game_hub_CharacterSituation_GetCorpsTroop_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2)
{
  __int64 v2;

  if (*a2 == **(_QWORD**)(result + 8)) {
    v2 = *(_QWORD*)(result + 16);
    *(_DWORD*)v2 = **(_DWORD**)(result + 24);
    *(_BYTE*)(v2 + 4) = 1;
  }
  return result;
}

#pragma GCC visibility pop
