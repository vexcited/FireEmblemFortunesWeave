#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_14ba0f0(__int64);
__int64 GameRoutine_14b9400(__int64, __int64, __int64);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e70;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 ProcGmapFixedEventSeq_14c3f50(__int64 result);
__int64 ProcGmapFixedEventSeq_14c4140();
__int64
game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 result,
                                                           __int64* a2);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14ba0f0_alt1(_QWORD) __asm__("GameRoutine_14ba0f0");
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GmapSituation_14dbeb0(_QWORD);
__int64 Troop_133ed80(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(void);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1ac493c;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_2045840[])();
extern __int64* GameData_212d460[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_14c2010(void);
bool ProcGmapFixedEventSeq_14c3670();
__int64 game_gmap_ProcGmapFixedEventSeq_LotteryUnit(__int64 a1);
__int64 ProcGmapFixedEventSeq_14c3ff0(__int64 result);

bool ProcGmapFixedEventSeq_14c3670()
{
  __int64* v0;
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  __int64 v6;
  _QWORD v8[2];

  nn_os_LockMutex(&game_g_random_mutex);
  v0 = game_map_MapRandom_instance__ptr[0];
  v1 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v2 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) ^
       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL))
        << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 4) = v1;
  v4 = (v3 >> 8) ^ (v2 >> 19) ^ v3 ^ v2;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = v2;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 12) = v4;
  nn_os_UnlockMutex(&game_g_random_mutex);
  v8[1] = &GameData_1ac493c;
  v8[0] = game_HashString(&GameData_1ac493c);
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
    if (v6 != 0) {
      v5 = *(_DWORD*)(v6 + 32);
    }
    else {
      v5 = 0;
    }
  }
  return (int)((v4 & 0x7FFFFFFFu) % 0x64) < v5;
}

__int64 game_gmap_ProcGmapFixedEventSeq_LotteryUnit(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  __int64* v25;
  int v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64** v34;
  __int64** v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  char* v39;
  char* v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  unsigned __int64 v44;
  __int64* v45;
  char* v46;
  int v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  char* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  int v79;
  unsigned int v80;
  unsigned __int64 v81;
  __int64* v82;
  unsigned __int64 v83;
  int v85;
  unsigned int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  __int64 v90;
  __int64* v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64** v96;
  __int64** v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  int v105;
  __int64 v106;
  __int64* v107;
  _QWORD v108[4];
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  v111 = 0;
  v112 = 0;
  v110 = 0;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v6 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v7 = v5 + 1;
    v6 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v7++;
        v6 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  v108[0] = GameData_2045840;
  v108[1] = &v110;
  v109 = v108;
  Troop_133ed80(v6, v108);
  result = (__int64)v109;
  if (v109 == v108) {
    v11 = 32;
  }
  else {
    if (v109 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v109 + v11))((__int64)v109);
LABEL_13:
  v12 = v110;
  if (v111 != v110) {
    v13 = (unsigned __int64)(v111 - v110) >> 3;
    nn_os_LockMutex(&game_g_random_mutex);
    v14 = game_map_MapRandom_instance__ptr[0];
    v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 4) = v15;
    v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8) = v16;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 12) = v18;
    v19 = v18 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v12 = v110;
    *(_QWORD*)(a1 + 168) =
        *(_QWORD*)(v110 + 8LL * (unsigned int)(v19 % (int)v13));
  LABEL_16:
    v111 = v12;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    goto LABEL_19;
  }
  if (v111 != 0) {
    goto LABEL_16;
  }
LABEL_19:
  v21 = *(_QWORD*)(a1 + 168);
  if (v21 == 0) {
    return result;
  }
  result = GameRoutine_14ba0f0_alt1(*(_QWORD*)(v21 + 392));
  if (result == 0) {
    return result;
  }
  v23 = *(__int64***)(result + 40);
  v24 = *v23;
  v25 = v23[1];
  if (*v23 == v25) {
    return result;
  }
  v26 = 0;
  v27 = 0;
  v28 = nullptr;
  v29 = 0;
  v30 = GameData_2130e70;
  v103 = a1;
  do {
    v31 = *v24;
    v32 = *(_QWORD*)(*v2 + 8);
    v33 = *(_DWORD*)(v32 + 56);
    v34 = *(__int64***)(v32 + 8);
    v35 = *(__int64***)(v32 + 16);
    if (v33 < 0) {
      while (v34 != v35) {
        v36 = *v34;
        if ((*v34)[12] == 0 && v36[69] == 0) {
          goto LABEL_35;
        }
        ++v34;
      }
    LABEL_30:
      v38 = game_gmap_SpotMgr_GetCurrentSpot(result, v22);
      goto LABEL_36;
    }
    if (v34 == v35) {
      goto LABEL_30;
    }
    while (1) {
      v37 = *v34++;
      v36 = v37;
      if (*((_DWORD*)v37 + 21) == v33) {
        break;
      }
      if (v34 == v35) {
        goto LABEL_30;
      }
    }
  LABEL_35:
    v38 = *v36;
  LABEL_36:
    result = GameRoutine_14b9400(v31, v38, *(_QWORD*)(a1 + 168));
    if ((result & 1) == 0) {
      goto LABEL_25;
    }
    v40 = *(char**)(*v30 + 8);
    v39 = *(char**)(*v30 + 16);
    if (v40 == v39) {
      goto LABEL_53;
    }
    v41 = v39 - v40 - 8;
    if ((~(_BYTE)v41 & 0x18) != 0) {
      v42 = ((unsigned __int8)((unsigned int)v41 >> 3) + 1) & 3;
      while (*(_QWORD*)v40 != v31) {
        v40 += 8;
        if (--v42 == 0) {
          goto LABEL_42;
        }
      }
    LABEL_53:
      if (v40 != v39) {
        goto LABEL_25;
      }
      goto LABEL_54;
    }
  LABEL_42:
    if (v41 >= 0x18) {
      v40 += 16;
      while (1) {
        if (*((_QWORD*)v40 - 2) == v31) {
          if (v40 - 16 != v39) {
            goto LABEL_25;
          }
          goto LABEL_54;
        }
        if (*((_QWORD*)v40 - 1) == v31) {
          v40 -= 8;
          goto LABEL_53;
        }
        if (*(_QWORD*)v40 == v31) {
          goto LABEL_53;
        }
        if (*((_QWORD*)v40 + 1) == v31) {
          break;
        }
        v43 = v40 + 16;
        v40 += 32;
        if (v43 == v39) {
          goto LABEL_54;
        }
      }
      if (v40 + 8 != v39) {
        goto LABEL_25;
      }
    }
  LABEL_54:
    if ((unsigned __int64)v28 < v29) {
      *v28++ = v31;
    }
    else {
      v44 = v29;
      v45 = v30;
      v46 = (char*)v28 - v27;
      v47 = v26;
      v48 = ((__int64)v28 - v27) >> 3;
      v49 = v48 + 1;
      if ((unsigned __int64)(v48 + 1) >> 61 != 0) {
      LABEL_128:
        GameRoutine_14c2010();
      }
      v50 = v44 - v27;
      v106 = v27;
      v51 = (__int64)(v44 - v27) >> 2;
      if (v51 > v49) {
        v49 = v51;
      }
      if (v50 >= 0x7FFFFFFFFFFFFFF8LL) {
        v52 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v52 = v49;
      }
      if (v52 != 0) {
        if (v52 >> 61 != 0) {
        LABEL_129:
          GameRoutine_60a210(result);
        }
        v53 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v52, 16, 0);
      }
      else {
        v53 = 0;
      }
      v54 = v53 + 8 * v52;
      v27 = (__int64)&v46[v53 + -8 * v48];
      v104 = v54;
      *(_QWORD*)&v46[v53] = v31;
      v28 = (__int64*)&v46[v53 + 8];
      result = memcpy(v27, v106, v46);
      if (v106 != 0) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55);
      }
      v26 = v47;
      v30 = v45;
      a1 = v103;
      v29 = v104;
    }
    v26 += *(unsigned __int8*)(v31 + 40);
  LABEL_25:
    ++v24;
  } while (v24 != v25);
  if (v28 == (__int64*)v27) {
    if (v28 != nullptr) {
      goto LABEL_123;
    }
  }
  else {
    v105 = v26;
    v56 = 0;
    v57 = nullptr;
    v58 = nullptr;
    v59 = (__int64*)v27;
    v60 = game_map_MapRandom_instance__ptr[0];
    v107 = (__int64*)v27;
    do {
      v61 = *v59;
      if (*(_WORD*)(*v59 + 42) != 0) {
        nn_os_LockMutex(&game_g_random_mutex);
        v62 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8);
        v63 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12);
        v64 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4) = v62;
        v65 = (v64 >> 8) ^ (v63 >> 19) ^ v64 ^ v63;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8) = v63;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12) = v65;
        v66 = v65 & 0x7FFFFFFF;
        result = nn_os_UnlockMutex(&game_g_random_mutex);
        if (v66 % 0x64 < *(unsigned __int8*)(v61 + 41)) {
          if ((unsigned __int64)v57 < v56) {
            *(_QWORD*)v57 = v61;
            v57 += 8;
          }
          else {
            v67 = (char*)(v57 - v58);
            v68 = (v57 - v58) >> 3;
            v69 = v68 + 1;
            if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
              goto LABEL_128;
            }
            if ((__int64)(v56 - (_QWORD)v58) >> 2 > v69) {
              v69 = (__int64)(v56 - (_QWORD)v58) >> 2;
            }
            if (v56 - (unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
              v70 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v70 = v69;
            }
            if (v70 != 0) {
              if (v70 >> 61 != 0) {
                goto LABEL_129;
              }
              v71 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v70, 16, 0);
            }
            else {
              v71 = 0;
            }
            v56 = v71 + 8 * v70;
            v72 = (char*)(v57 - v58);
            v73 = (__int64)&v67[v71 + -8 * v68];
            *(_QWORD*)&v67[v71] = v61;
            v57 = &v67[v71 + 8];
            result = memcpy(v73, v58, v72);
            if (v58 != nullptr) {
              v74 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v74 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
            }
            v58 = (char*)v73;
          }
        }
      }
      ++v59;
    } while (v59 != v28);
    if (v57 != v58) {
      nn_os_LockMutex(&game_g_random_mutex);
      v75 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8);
      v76 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12);
      v77 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4) = v75;
      v78 = (v77 >> 8) ^ (v76 >> 19) ^ v77 ^ v76;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8) = v76;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12) = v78;
      v79 = v78 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v80 = v79 % (int)((unsigned __int64)(v57 - v58) >> 3);
      GameRoutine_60a020(v103 + 176,
                         *(_QWORD*)(*(_QWORD*)&v58[8 * v80] + 32LL));
      result = GmapSituation_14dbeb0(*(_QWORD*)&v58[8 * v80]);
    }
    v81 = *(unsigned __int8*)(v103 + 176);
    v82 = GameData_212c790;
    if ((v81 & 1) != 0) {
      v83 = *(_QWORD*)(v103 + 184);
    }
    else {
      v83 = v81 >> 1;
    }
    if (v83 == 0 && v105 >= 1) {
      nn_os_LockMutex(&game_g_random_mutex);
      v85 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8);
      v86 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12);
      v87 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 4) = v85;
      v88 = (v87 >> 8) ^ (v86 >> 19) ^ v87 ^ v86;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 8) = v86;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v60 + 12) = v88;
      v89 = v88 & 0x7FFFFFFF;
      result = nn_os_UnlockMutex(&game_g_random_mutex);
      v91 = v107;
      v92 = 0;
      while (1) {
        v93 = *v91;
        v94 = *(_QWORD*)(*v82 + 8);
        v95 = *(_DWORD*)(v94 + 56);
        v96 = *(__int64***)(v94 + 8);
        v97 = *(__int64***)(v94 + 16);
        if (v95 < 0) {
          break;
        }
        if (v96 == v97) {
          goto LABEL_109;
        }
        while (1) {
          v99 = *v96++;
          v98 = v99;
          if (*((_DWORD*)v99 + 21) == v95) {
            break;
          }
          if (v96 == v97) {
            goto LABEL_109;
          }
        }
      LABEL_114:
        v100 = *v98;
      LABEL_115:
        result = GameRoutine_14b9400(v93, v100, *(_QWORD*)(v103 + 168));
        if ((result & 1) != 0) {
          v92 += *(unsigned __int8*)(v93 + 40);
          if ((int)(v89 % v105) < v92) {
            GameRoutine_60a020(v103 + 176, *(_QWORD*)(v93 + 32));
            result = GmapSituation_14dbeb0(v93);
            goto LABEL_118;
          }
        }
        if (++v91 == v28) {
          goto LABEL_118;
        }
      }
      while (v96 != v97) {
        v98 = *v96;
        if ((*v96)[12] == 0 && v98[69] == 0) {
          goto LABEL_114;
        }
        ++v96;
      }
    LABEL_109:
      v100 = game_gmap_SpotMgr_GetCurrentSpot(result, v90);
      goto LABEL_115;
    }
  LABEL_118:
    if (v58 != nullptr) {
      v101 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v101 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v101);
    }
    if (v107 != nullptr) {
    LABEL_123:
      v102 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v102 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v102);
    }
  }
  return result;
}

__int64 ProcGmapFixedEventSeq_14c3f50(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned int v4;

  v1 = *(unsigned __int8*)(result + 176);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(result + 184);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v3 + 16), 0);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
    }
    result = game_gameui_Footer_instance_;
    v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v3 + 5856) = v4;
    if (result != 0) {
      result = LayoutAccessor_1567000(result, 0);
      v4 = *(_DWORD*)(v3 + 5856);
    }
    *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
  }
  return result;
}

__int64 ProcGmapFixedEventSeq_14c3ff0(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;

  v1 = *(unsigned __int8*)(result + 176);
  v2 = *(_QWORD*)(result + 184);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = (v1 & 1) != 0 ? *(_QWORD*)(result + 192) : result + 177;
    if (*GameData_212d460[0] == 0 && v3 != 0) {
      v5 = result;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v6, v3, 0);
      v7 = *(_QWORD*)(v5 + 40);
      if (v7 != 0) {
        *(_QWORD*)(v7 + 48) = v6;
        *(_QWORD*)(v6 + 56) = *(_QWORD*)(v5 + 40);
      }
      *(_QWORD*)(v5 + 40) = v6;
      *(_QWORD*)(v6 + 24) = "talk::Seq";
      *(_QWORD*)(v6 + 32) = v5;
      *(_DWORD*)(v6 + 140) = game_HashString32();
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 24;
      *(_QWORD*)(v6 + 80) = 1;
      *(_QWORD*)(v6 + 8) = &GameData_216de68;
      *(_QWORD*)(v6 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
      if ((result & 1) != 0 && (*(_WORD*)(v6 + 136) & 0x100) == 0) {
        *(_WORD*)(v6 + 136) |= 0x100u;
      }
      v8 = *(_BYTE**)(v6 + 32);
      v9 = v8[138];
      if (v9 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v6 + 32));
        v9 = v8[138];
      }
      v8[138] = v9 + 1;
      *(_WORD*)(v6 + 136) |= 2u;
    }
  }
  return result;
}

__int64 ProcGmapFixedEventSeq_14c4140()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64

game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 result,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64** v14;
  __int64** v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v3 = result;
  result = (__int64)GameRoutine_14ba0f0(*(_QWORD*)(v2 + 392));
  if (result == 0) {
    return result;
  }
  v5 = *(__int64***)(result + 40);
  v6 = *v5;
  v7 = v5[1];
  if (*v5 == v7) {
    return result;
  }
  v8 = GameData_212c790;
  v9 = GameData_2130e70;
  while (1) {
    v11 = *v6;
    v12 = *(_QWORD*)(*v8 + 8);
    v13 = *(_DWORD*)(v12 + 56);
    v14 = *(__int64***)(v12 + 8);
    v15 = *(__int64***)(v12 + 16);
    if (v13 < 0) {
      while (v14 != v15) {
        v16 = *v14;
        if ((*v14)[12] == 0 && v16[69] == 0) {
          goto LABEL_17;
        }
        ++v14;
      }
    LABEL_12:
      v18 = game_gmap_SpotMgr_GetCurrentSpot(result, v4);
      goto LABEL_18;
    }
    if (v14 == v15) {
      goto LABEL_12;
    }
    while (1) {
      v17 = *v14++;
      v16 = v17;
      if (*((_DWORD*)v17 + 21) == v13) {
        break;
      }
      if (v14 == v15) {
        goto LABEL_12;
      }
    }
  LABEL_17:
    v18 = *v16;
  LABEL_18:
    result = GameRoutine_14b9400(v11, v18, v2);
    if ((result & 1) != 0) {
      v10 = *(char**)(*v9 + 8);
      v19 = *(char**)(*v9 + 16);
      if (v10 != v19) {
        break;
      }
    LABEL_6:
      if (v10 == v19) {
        goto LABEL_34;
      }
    }
    if (++v6 == v7) {
      return result;
    }
  }
  v20 = v19 - v10 - 8;
  if ((~(_BYTE)v20 & 0x18) != 0) {
    v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
    while (*(_QWORD*)v10 != v11) {
      v10 += 8;
      if (--v21 == 0) {
        goto LABEL_24;
      }
    }
    goto LABEL_6;
  }
LABEL_24:
  if (v20 >= 0x18) {
    v10 += 16;
    while (1) {
      if (*((_QWORD*)v10 - 2) == v11) {
        v10 -= 16;
        goto LABEL_6;
      }
      if (*((_QWORD*)v10 - 1) == v11) {
        v10 -= 8;
        goto LABEL_6;
      }
      if (*(_QWORD*)v10 == v11) {
        goto LABEL_6;
      }
      if (*((_QWORD*)v10 + 1) == v11) {
        break;
      }
      v22 = v10 + 16;
      v10 += 32;
      if (v22 == v19) {
        goto LABEL_34;
      }
    }
    v10 += 8;
    goto LABEL_6;
  }
LABEL_34:
  v23 = *(__int64**)(v3 + 8);
  v25 = (__int64*)v23[1];
  v24 = v23[2];
  if ((unsigned __int64)v25 >= v24) {
    v27 = *v23;
    v28 = (__int64)v25 - *v23;
    v29 = (v28 >> 3) + 1;
    if (v29 >> 61 != 0) {
      GameRoutine_6c1f60(result);
    }
    v30 = v24 - v27;
    v31 = fw_memory_g_heap_manager_ptr;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v29;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v33 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = v33 + v28 - 8 * (v28 >> 3);
    *(_QWORD*)(v33 + v28) = v2;
    v26 = v33 + v28 + 8;
    result = memcpy(v35, v27, v28);
    *v23 = v35;
    v23[1] = v26;
    v23[2] = v34;
    if (v27 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v36, v27);
    }
  }
  else {
    *v25 = v2;
    v26 = (__int64)(v25 + 1);
  }
  v23[1] = v26;
  return result;
}

#pragma GCC visibility pop
