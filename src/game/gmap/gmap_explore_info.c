#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_135c560(_QWORD*, char);
__int64 GameRoutine_135e360(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GmapExploreData_GetObtainedFirstFlagName(_QWORD);
__int64 game_GmapExploreData_GetShowRareFlagName(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 GmapExploreInfo_135d220(_QWORD* a1, __int64* a2, int a3);
__int64 GmapExploreInfo_135d3c0(_QWORD* a1, __int64 a2, int a3);
__int64 GmapExploreInfo_135d7a0(__int64 result, __int64* a2, __int64 a3,
                                char a4);
__int64* GmapExploreInfo_135e1e0(__int64* result, __int64* a2, __int64* a3,
                                 __int64* a4, __int64* a5);
__int64 game_gmap_GmapExploreInfo_LotItem_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
char* game_GmapExploreData_GetObtainedFirstFlagName_alt1(
    __int64, __int64, __int64, __int64, __int64, __int64, __int64,
    __int64) __asm__("game_GmapExploreData_GetObtainedFirstFlagName");
char* game_GmapExploreData_GetShowRareFlagName_alt1(
    __int64, __int64, __int64, __int64, __int64, __int64, __int64,
    __int64) __asm__("game_GmapExploreData_GetShowRareFlagName");
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
__int64 GmapExploreInfo_135c2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                __int64 a5, __int64 a6, __int64 a7, __int64 a8);
bool GmapExploreInfo_135e360(__int64* a1, __int64* a2);

__int64 GmapExploreInfo_135c2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  char* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64* v25;
  __int64* v26;
  unsigned int v27;
  __int64 v28;
  char* v29;
  char* v30;
  struct {
    __int64 v32;
    char* v33;
  } v32_;

  if ((a2 & 1) != 0) {
    if (*(_BYTE*)(a1 + 88) == 1) {
      v9 = *(char**)(a1 + 8);
      v10 = *(char**)(a1 + 16);
      if (v9 != v10) {
        v11 = v10 - v9 - 8;
        if ((~(_BYTE)v11 & 0x18) != 0) {
          v12 = ((unsigned __int8)((unsigned int)v11 >> 3) + 1) & 3;
          do {
            v14 = *(_QWORD*)v9;
            v9 += 8;
            v13 = v14;
            if ((*(_BYTE*)(v14 + 58) & 1) != 0) {
              goto LABEL_33;
            }
          } while (--v12 != 0);
        }
        if (v11 >= 0x18) {
          do {
            v13 = *(_QWORD*)v9;
            if ((*(_BYTE*)(*(_QWORD*)v9 + 58LL) & 1) != 0) {
              goto LABEL_33;
            }
            v13 = *((_QWORD*)v9 + 1);
            if ((*(_BYTE*)(v13 + 58) & 1) != 0) {
              goto LABEL_33;
            }
            v13 = *((_QWORD*)v9 + 2);
            if ((*(_BYTE*)(v13 + 58) & 1) != 0) {
              goto LABEL_33;
            }
            v13 = *((_QWORD*)v9 + 3);
            if ((*(_BYTE*)(v13 + 58) & 1) != 0) {
              goto LABEL_33;
            }
            v9 += 32;
          } while (v9 != v10);
        }
      }
    }
  }
  else if ((a3 & 1) != 0) {
    v15 = *(char**)(a1 + 8);
    v16 = *(char**)(a1 + 16);
    if (v15 != v16) {
      v17 = v16 - v15 - 8;
      if ((~(_BYTE)v17 & 0x18) != 0) {
        v18 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 3;
        do {
          v19 = *(_QWORD*)v15;
          v15 += 8;
          v13 = v19;
          if ((*(_BYTE*)(v19 + 57) & 1) != 0) {
            goto LABEL_33;
          }
        } while (--v18 != 0);
      }
      if (v17 >= 0x18) {
        do {
          v13 = *(_QWORD*)v15;
          if ((*(_BYTE*)(*(_QWORD*)v15 + 57LL) & 1) != 0) {
            goto LABEL_33;
          }
          v13 = *((_QWORD*)v15 + 1);
          if ((*(_BYTE*)(v13 + 57) & 1) != 0) {
            goto LABEL_33;
          }
          v13 = *((_QWORD*)v15 + 2);
          if ((*(_BYTE*)(v13 + 57) & 1) != 0) {
            goto LABEL_33;
          }
          v13 = *((_QWORD*)v15 + 3);
          if ((*(_BYTE*)(v13 + 57) & 1) != 0) {
            goto LABEL_33;
          }
          v15 += 32;
        } while (v15 != v16);
      }
    }
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v20 = game_map_MapRandom_instance__ptr[0];
  v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 4) = v21;
  v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 8) = v22;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v20 + 12) = v24;
  nn_os_UnlockMutex(&game_g_random_mutex);
  v25 = *(__int64**)(a1 + 8);
  v26 = *(__int64**)(a1 + 16);
  if (v25 == v26) {
    return 0;
  }
  v27 = 0;
  while (1) {
    v28 = *v25++;
    v13 = v28;
    v27 += *(unsigned __int8*)(v28 + 56);
    if ((v24 & 0x7FFFFFFFu) % 0x64 < v27) {
      break;
    }
    if (v25 == v26) {
      return 0;
    }
  }
LABEL_33:
  if (*(_BYTE*)(v13 + 57) == 1) {
    v29 = game_GmapExploreData_GetObtainedFirstFlagName_alt1(
        *(_QWORD*)a1, a2, a3, a4, a5, a6, a7, a8);
    if (v29 != nullptr) {
      v32_.v33 = v29;
      v32_.v32 = game_HashString_alt1((__int64)v29);
      game_VariableManager_SetFlag_alt1((__int64)&v32_.v32, 1);
    }
  }
  if (*(_BYTE*)(v13 + 58) == 1) {
    v30 = game_GmapExploreData_GetShowRareFlagName_alt1(*(_QWORD*)a1, a2, a3,
                                                        a4, a5, a6, a7, a8);
    if (v30 != nullptr) {
      v32_.v33 = v30;
      v32_.v32 = game_HashString_alt1((__int64)v30);
      game_VariableManager_SetFlag_alt1((__int64)&v32_.v32, 1);
    }
  }
  return v13;
}

__int64 GmapExploreInfo_135d220(_QWORD* a1, __int64* a2, int a3)
{
  _QWORD* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;

  v5 = a1;
  result = GameRoutine_135c560(a1, 1);
  v7 = v5[4];
  v8 = v5[5];
  if (v7 != v8) {
    v9 = (_QWORD*)a2[1];
    v10 = a3;
    v24 = v5;
    do {
      v11 = *a2;
      v12 = (__int64)v9 - *a2;
      v13 = v12 >> 3;
      if (v12 >> 3 >= v10) {
        break;
      }
      v14 = *(_QWORD*)(*(_QWORD*)v7 + 48LL);
      if (v14 != 0) {
        v15 = a2[2];
        if ((unsigned __int64)v9 < v15) {
          *v9++ = v14;
        }
        else {
          v16 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            GameRoutine_6e5c60(result);
          }
          v17 = v15 - v11;
          if (v17 >> 2 > v16) {
            v16 = v17 >> 2;
          }
          if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
            v18 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v18 = v16;
          }
          if (v18 != 0) {
            if (v18 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v19 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
          }
          else {
            v19 = 0;
          }
          v20 = v19 + 8 * v18;
          v21 = v19 + v12 - 8 * v13;
          *(_QWORD*)(v19 + v12) = v14;
          v9 = (_QWORD*)(v19 + v12 + 8);
          result = memcpy(v21, v11, v12);
          *a2 = v21;
          a2[1] = (__int64)v9;
          a2[2] = v20;
          if (v11 != 0) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v22 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
          }
        }
        a2[1] = (__int64)v9;
      }
      v7 += 8;
    } while (v7 != v8);
    v5 = v24;
    v7 = v24[4];
  }
  v23 = v5[7];
  v5[5] = v7;
  *((_DWORD*)v5 + 20) = 1;
  v5[8] = v23;
  return result;
}

__int64 GmapExploreInfo_135d3c0(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v3;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char* v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  v3 = a1[4];
  *((_BYTE*)a1 + 88) = 0;
  LODWORD(v44) = 0;
  a1[5] = v3;
  a1[8] = a1[7];
  *((_DWORD*)a1 + 20) = 1;
  v7 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a2 + 16LL))(a2, &v44);
  if ((unsigned int)(a3 - 14) > 5 || (v7 & 1) == 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  }
  v8 = *(int*)(a2 + 20);
  v9 = *(_QWORD*)(a2 + 8);
  v10 = v8 + 1;
  *(_DWORD*)(a2 + 20) = v8 + 1;
  v11 = *(unsigned __int8*)(v9 + v8);
  v12 = (char*)a1[1];
  v13 = (char*)a1[2];
  if (v12 == v13) {
    if (v11 == 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    }
    goto LABEL_44;
  }
  v14 = (char*)a1[1];
  v15 = v13 - v12 - 8;
  v16 = (unsigned int)v15 >> 3;
  if ((~(_BYTE)v15 & 0x18) != 0) {
    v17 = ((_BYTE)v16 + 1) & 3;
    v14 = (char*)a1[1];
    while (1) {
      v19 = *(_QWORD*)v14;
      v14 += 8;
      v18 = v19;
      if ((*(_BYTE*)(v19 + 58) & 1) != 0) {
        break;
      }
      if (--v17 == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
  LABEL_8:
    if (v15 >= 0x18) {
      while (1) {
        v18 = *(_QWORD*)v14;
        if (*(_BYTE*)(*(_QWORD*)v14 + 58LL) == 1) {
          break;
        }
        v18 = *((_QWORD*)v14 + 1);
        if ((*(_BYTE*)(v18 + 58) & 1) != 0) {
          break;
        }
        v18 = *((_QWORD*)v14 + 2);
        if ((*(_BYTE*)(v18 + 58) & 1) != 0) {
          break;
        }
        v18 = *((_QWORD*)v14 + 3);
        if ((*(_BYTE*)(v18 + 58) & 1) != 0) {
          break;
        }
        v14 += 32;
        if (v14 == v13) {
          goto LABEL_9;
        }
      }
    }
    else {
    LABEL_9:
      v18 = 0;
    }
  }
  if ((~(_BYTE)v15 & 0x18) != 0) {
    v20 = ((_BYTE)v16 + 1) & 3;
    while (1) {
      v22 = *(_QWORD*)v12;
      v12 += 8;
      v21 = v22;
      if ((*(_BYTE*)(v22 + 57) & 1) != 0) {
        break;
      }
      if (--v20 == 0) {
        goto LABEL_14;
      }
    }
  }
  else {
  LABEL_14:
    if (v15 >= 0x18) {
      while (1) {
        v21 = *(_QWORD*)v12;
        if (*(_BYTE*)(*(_QWORD*)v12 + 57LL) == 1) {
          break;
        }
        v21 = *((_QWORD*)v12 + 1);
        if ((*(_BYTE*)(v21 + 57) & 1) != 0) {
          break;
        }
        v21 = *((_QWORD*)v12 + 2);
        if ((*(_BYTE*)(v21 + 57) & 1) != 0) {
          break;
        }
        v21 = *((_QWORD*)v12 + 3);
        if ((*(_BYTE*)(v21 + 57) & 1) != 0) {
          break;
        }
        v12 += 32;
        if (v12 == v13) {
          goto LABEL_15;
        }
      }
    }
    else {
    LABEL_15:
      v21 = 0;
    }
  }
  if (v11 != 0) {
    if (v18 != 0) {
      if (v21 != 0) {
        do {
          v23 = *(int*)(a2 + 20);
          v24 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v23 + 1;
          v25 = *(unsigned __int8*)(v24 + v23);
          *(_DWORD*)(a2 + 20) = v23 + 2;
          v26 = v25 | (*(unsigned __int8*)(v24 + v23 + 1) << 8);
          *(_DWORD*)(a2 + 20) = v23 + 3;
          v27 = *(unsigned __int8*)(v24 + v23 + 2);
          *(_DWORD*)(a2 + 20) = v23 + 4;
          v28 = v26 | (v27 << 16) | (*(unsigned __int8*)(v24 + v23 + 3) << 24);
          if (v28 == *(_DWORD*)(*(_QWORD*)(v18 + 24) + 48LL)) {
            v29 = game_GmapExploreData_GetShowRareFlagName(*a1);
            if (v29 != 0) {
              v45 = v29;
              v44 = game_HashString(v29);
              game_VariableManager_SetFlag(&v44, 1);
            }
          }
          if (v28 == *(_DWORD*)(*(_QWORD*)(v21 + 24) + 48LL)) {
            v30 = game_GmapExploreData_GetObtainedFirstFlagName(*a1);
            if (v30 != 0) {
              v45 = v30;
              v44 = game_HashString(v30);
              game_VariableManager_SetFlag(&v44, 1);
            }
          }
          --v11;
        } while (v11 != 0);
      }
      else {
        do {
          v31 = *(int*)(a2 + 20);
          v32 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v31 + 1;
          v33 = *(unsigned __int8*)(v32 + v31);
          *(_DWORD*)(a2 + 20) = v31 + 2;
          v34 = v33 | (*(unsigned __int8*)(v32 + v31 + 1) << 8);
          *(_DWORD*)(a2 + 20) = v31 + 3;
          v35 = *(unsigned __int8*)(v32 + v31 + 2);
          *(_DWORD*)(a2 + 20) = v31 + 4;
          if ((v34 | (v35 << 16) |
               (*(unsigned __int8*)(v32 + v31 + 3) << 24)) ==
              *(_DWORD*)(*(_QWORD*)(v18 + 24) + 48LL)) {
            v36 = game_GmapExploreData_GetShowRareFlagName(*a1);
            if (v36 != 0) {
              v45 = v36;
              v44 = game_HashString(v36);
              game_VariableManager_SetFlag(&v44, 1);
            }
          }
          --v11;
        } while (v11 != 0);
      }
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    }
    if (v21 == 0) {
    LABEL_44:
      *(_DWORD*)(a2 + 20) = v10 + 4 * v11;
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    }
    do {
      v38 = *(int*)(a2 + 20);
      v39 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v38 + 1;
      v40 = *(unsigned __int8*)(v39 + v38);
      *(_DWORD*)(a2 + 20) = v38 + 2;
      v41 = v40 | (*(unsigned __int8*)(v39 + v38 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v38 + 3;
      v42 = *(unsigned __int8*)(v39 + v38 + 2);
      *(_DWORD*)(a2 + 20) = v38 + 4;
      if ((v41 | (v42 << 16) | (*(unsigned __int8*)(v39 + v38 + 3) << 24)) ==
          *(_DWORD*)(*(_QWORD*)(v21 + 24) + 48LL)) {
        v43 = game_GmapExploreData_GetObtainedFirstFlagName(*a1);
        if (v43 != 0) {
          v45 = v43;
          v44 = game_HashString(v43);
          game_VariableManager_SetFlag(&v44, 1);
        }
      }
      --v11;
    } while (v11 != 0);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

__int64 GmapExploreInfo_135d7a0(__int64 result, __int64* a2, __int64 a3,
                                char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  unsigned int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(unsigned __int8*)(v76 + 56);
            v79 = *(unsigned __int8*)(v77 + 56);
            if (v78 > *(unsigned __int8*)(*v8 + 56)) {
              if (v79 <= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(unsigned __int8*)(v127 + 56) >
                    (unsigned int)*(unsigned __int8*)(v75 + 56)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 <= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(unsigned __int8*)(v124 + 56) >
                (unsigned int)*(unsigned __int8*)(*v8 + 56)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GmapExploreInfo_135e1e0(v8, v8 + 1, v8 + 2, v8 + 3,
                                             a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(unsigned __int8*)(v80 + 56);
          v84 = *(unsigned __int8*)(v82 + 56);
          if (v83 <= *(unsigned __int8*)(*v8 + 56)) {
            if (v84 > v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*(unsigned __int8*)(v82 + 56) >
                  (unsigned int)*(unsigned __int8*)(v81 + 56)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 > v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(unsigned __int8*)(v82 + 56) >
                (unsigned int)*(unsigned __int8*)(v81 + 56)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(unsigned __int8*)(v128 + 56) <=
              (unsigned int)*(unsigned __int8*)(v80 + 56)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(unsigned __int8*)(v124 + 56) <=
              (unsigned int)*(unsigned __int8*)(v129 + 56)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(unsigned __int8*)(v73 + 56) >
              (unsigned int)*(unsigned __int8*)(*v8 + 56)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(unsigned __int8*)(v91 + 56) >
                    (unsigned int)*(unsigned __int8*)(v92 + 56)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while (*(unsigned __int8*)(v91 + 56) >
                           (unsigned int)*(unsigned __int8*)(v92 + 56));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(unsigned __int8*)(v125 + 56) >
                  (unsigned int)*(unsigned __int8*)(v126 + 56)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(unsigned __int8*)(v125 + 56) >
                         (unsigned int)*(unsigned __int8*)(v126 + 56));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    *(unsigned __int8*)(v101 + 56) >
                        (unsigned int)*(unsigned __int8*)(v100[1] + 56)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if (*(unsigned __int8*)(v101 + 56) <=
                    (unsigned int)*(unsigned __int8*)(*v102 + 56)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        *(unsigned __int8*)(v101 + 56) >
                            (unsigned int)*(unsigned __int8*)(v100[1] + 56)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(unsigned __int8*)(v103 + 56);
                    v102 = v104;
                    v99 = v105;
                  } while (*(unsigned __int8*)(v101 + 56) <=
                           (unsigned int)result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned __int8*)(v112 + 56);
                  if (*(unsigned __int8*)(v113 + 56) <= (unsigned int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(unsigned __int8*)(*v121 + 56) >
                      (unsigned int)*(unsigned __int8*)(*v114 + 56)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while (*(unsigned __int8*)(*v121 + 56) >
                             (unsigned int)*(unsigned __int8*)(v120 + 56));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(unsigned __int8*)(v10 + 56);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(unsigned __int8*)(*v11 + 56);
          if (v15 <= *(unsigned __int8*)(*v8 + 56)) {
            if (v12 > v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(unsigned __int8*)(*v11 + 56) >
                  (unsigned int)*(unsigned __int8*)(*v8 + 56)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 <= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(unsigned __int8*)(v21 + 56) <=
                  (unsigned int)*(unsigned __int8*)(v14 + 56)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(unsigned __int8*)(v22 + 56);
          v26 = *(unsigned __int8*)(v24 + 56);
          if (v25 <= *(unsigned __int8*)(v23 + 56)) {
            if (v26 > v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(unsigned __int8*)(v27 + 56) >
                  (unsigned int)*(unsigned __int8*)(v28 + 56)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 <= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(unsigned __int8*)(v30 + 56) <=
                  (unsigned int)*(unsigned __int8*)(v23 + 56)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(unsigned __int8*)(v31 + 56);
          v35 = *(unsigned __int8*)(v33 + 56);
          if (v34 <= *(unsigned __int8*)(v32 + 56)) {
            if (v35 > v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(unsigned __int8*)(v36 + 56) >
                  (unsigned int)*(unsigned __int8*)(v37 + 56)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 <= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(unsigned __int8*)(v38 + 56) <=
                  (unsigned int)*(unsigned __int8*)(v32 + 56)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(unsigned __int8*)(*v11 + 56);
          v43 = *(unsigned __int8*)(v41 + 56);
          if (v42 <= *(unsigned __int8*)(v39 + 56)) {
            if (v43 <= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*(unsigned __int8*)(v41 + 56) >
                (unsigned int)*(unsigned __int8*)(v39 + 56)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 > v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(unsigned __int8*)(v41 + 56) <=
                (unsigned int)*(unsigned __int8*)(v39 + 56)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(unsigned __int8*)(*v8 + 56);
        if (v18 <= *(unsigned __int8*)(*v11 + 56)) {
          if (v12 > v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(unsigned __int8*)(*v8 + 56) >
                (unsigned int)*(unsigned __int8*)(*v11 + 56)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 <= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(unsigned __int8*)(v29 + 56) <=
                (unsigned int)*(unsigned __int8*)(v17 + 56)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(unsigned __int8*)(v45 + 56);
        if (*(unsigned __int8*)(*(v8 - 1) + 56) > v46) {
          goto LABEL_63;
        }
        if (v46 <= *(unsigned __int8*)(*(a2 - 1) + 56)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 <= *(unsigned __int8*)(*v8 + 56));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 <= *(unsigned __int8*)(v63 + 56));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 > *(unsigned __int8*)(v66 + 56));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(unsigned __int8*)(v45 + 56);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 <= *(unsigned __int8*)(v70 + 56));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 > *(unsigned __int8*)(v71 + 56));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(unsigned __int8*)(v45 + 56);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(unsigned __int8*)(v49 + 56) > v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(unsigned __int8*)(v53 + 56) <= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(unsigned __int8*)(v52 + 56) <= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(unsigned __int8*)(v45 + 56);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(unsigned __int8*)(v58 + 56) > v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(unsigned __int8*)(v59 + 56) <= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_135e360(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_135e360(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GmapExploreInfo_135d7a0(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

__int64* GmapExploreInfo_135e1e0(__int64* result, __int64* a2, __int64* a3,
                                 __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(unsigned __int8*)(*a2 + 56);
  v9 = *(unsigned __int8*)(*a3 + 56);
  if (v8 <= *(unsigned __int8*)(*result + 56)) {
    if (v9 <= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if (*(unsigned __int8*)(*a2 + 56) >
          (unsigned int)*(unsigned __int8*)(*result + 56)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 > v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if (*(unsigned __int8*)(*a3 + 56) >
        (unsigned int)*(unsigned __int8*)(v6 + 56)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if (*(unsigned __int8*)(*a4 + 56) >
      (unsigned int)*(unsigned __int8*)(v5 + 56)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if (*(unsigned __int8*)(*a3 + 56) >
        (unsigned int)*(unsigned __int8*)(*a2 + 56)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if (*(unsigned __int8*)(*a2 + 56) >
          (unsigned int)*(unsigned __int8*)(*result + 56)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if (*(unsigned __int8*)(*a5 + 56) >
      (unsigned int)*(unsigned __int8*)(*a4 + 56)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if (*(unsigned __int8*)(*a4 + 56) >
        (unsigned int)*(unsigned __int8*)(*a3 + 56)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if (*(unsigned __int8*)(*a3 + 56) >
          (unsigned int)*(unsigned __int8*)(*a2 + 56)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if (*(unsigned __int8*)(*a2 + 56) >
            (unsigned int)*(unsigned __int8*)(*result + 56)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool GmapExploreInfo_135e360(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(unsigned __int8*)(v6 + 56);
      v9 = *(unsigned __int8*)(v7 + 56);
      if (v8 > *(unsigned __int8*)(*a1 + 56)) {
        if (v9 <= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*(unsigned __int8*)(v22 + 56) >
              (unsigned int)*(unsigned __int8*)(v5 + 56)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 <= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*(unsigned __int8*)(v21 + 56) >
          (unsigned int)*(unsigned __int8*)(*a1 + 56)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GmapExploreInfo_135e1e0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(unsigned __int8*)(v16 + 56);
    v20 = *(unsigned __int8*)(v18 + 56);
    if (v19 <= *(unsigned __int8*)(*a1 + 56)) {
      if (v20 > v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*(unsigned __int8*)(v18 + 56) >
            (unsigned int)*(unsigned __int8*)(v17 + 56)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 > v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*(unsigned __int8*)(v18 + 56) >
          (unsigned int)*(unsigned __int8*)(v17 + 56)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*(unsigned __int8*)(v32 + 56) <=
        (unsigned int)*(unsigned __int8*)(v16 + 56)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*(unsigned __int8*)(v21 + 56) <=
        (unsigned int)*(unsigned __int8*)(v33 + 56)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*(unsigned __int8*)(v3 + 56) >
        (unsigned int)*(unsigned __int8*)(*a1 + 56)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(unsigned __int8*)(v13 + 56);
  v15 = *(unsigned __int8*)(v10 + 56);
  if (v14 <= *(unsigned __int8*)(*a1 + 56)) {
    if (v15 > v14) {
      a1[1] = v10;
      a1[2] = v13;
      if (*(unsigned __int8*)(v10 + 56) >
          (unsigned int)*(unsigned __int8*)(v12 + 56)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 <= v14) {
      *a1 = v13;
      a1[1] = v12;
      if (*(unsigned __int8*)(v10 + 56) <=
          (unsigned int)*(unsigned __int8*)(v12 + 56)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if (*(unsigned __int8*)(*v23 + 56) >
        (unsigned int)*(unsigned __int8*)(v28 + 56)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while (*(unsigned __int8*)(v27 + 56) >
               (unsigned int)*(unsigned __int8*)(v28 + 56));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_gmap_GmapExploreInfo_LotItem_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64* v16;
  int v17;
  __int64* v18;
  __int64 v19;

  v2 = *a2;
  v19 = 0x200000000000LL;
  result = game_UnitSkillList_GetMaxValue(v2 + 1744, &v19);
  v5 = **(_QWORD**)(a1 + 8);
  v8 = *(_DWORD*)(v5 + 20);
  v6 = v5 + 20;
  v7 = v8;
  v9 = (__int64*)(v6 + 4);
  v10 = *(_DWORD*)(v6 + 4);
  LODWORD(v19) = *(_DWORD*)(v6 + 12) - result;
  if (v10 >= (int)v19) {
    v9 = &v19;
  }
  if ((int)v19 >= v7) {
    v11 = v9;
  }
  else {
    v11 = (__int64*)v6;
  }
  *(_DWORD*)(v6 + 12) = *(_DWORD*)v11;
  v12 = **(_QWORD**)(a1 + 16);
  v15 = *(_DWORD*)(v12 + 20);
  v13 = v12 + 20;
  v14 = v15;
  v16 = (__int64*)(v13 + 4);
  v17 = *(_DWORD*)(v13 + 4);
  LODWORD(v19) = *(_DWORD*)(v13 + 12) + result;
  if (v17 >= (int)v19) {
    v16 = &v19;
  }
  if ((int)v19 >= v14) {
    v18 = v16;
  }
  else {
    v18 = (__int64*)v13;
  }
  *(_DWORD*)(v13 + 12) = *(_DWORD*)v18;
  return result;
}

#pragma GCC visibility pop
