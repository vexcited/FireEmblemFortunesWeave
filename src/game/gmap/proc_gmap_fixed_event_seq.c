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
__int64 game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke_alt1(
    __int64 result, __int64* a2) __asm__("game_gmap_ProcGmapFixedEventSeq_"
                                         "LotteryUnit_closure_Invoke");
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
__int64 game_gmap_ProcGmapFixedEventSeq_LotteryUnit_alt1(__int64 a1) __asm__(
    "game_gmap_ProcGmapFixedEventSeq_LotteryUnit");
__int64 ProcGmapFixedEventSeq_14c3ff0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 a1,
                                                                __int64* a2);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 Troop_133ed80_alt1(__int64 result, __int64) __asm__("Troop_133ed80");
__int64 game_GmapFixedTalkData_IsCondition(__int64, __int64, __int64);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void GmapSituation_14dbeb0_alt1(__int64) __asm__("GmapSituation_14dbeb0");
void __attribute__((noreturn))
GameRoutine_14c2010_alt1() __asm__("GameRoutine_14c2010");
void game_gmap_ProcGmapFixedEventSeq_LotteryUnit(__int64 a1);

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

void game_gmap_ProcGmapFixedEventSeq_LotteryUnit(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64** v22;
  __int64* v23;
  __int64* v24;
  int v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  unsigned int* v37;
  char* v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64* v44;
  unsigned __int64 v45;
  int v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  int v78;
  unsigned int v79;
  unsigned __int64 v80;
  __int64* v81;
  unsigned __int64 v82;
  int v84;
  unsigned int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  __int64* v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64* v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  unsigned int* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  int v103;
  __int64 v104;
  __int64* v105;
  struct {
    _QWORD v106[4];
    _QWORD* v107;
  } v106_;
  struct {
    __int64 v108;
    __int64 v109;
    __int64 v110;
  } v108_;

  v108_.v109 = 0;
  v108_.v110 = 0;
  v108_.v108 = 0;
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
  v106_.v106[0] = GameData_2045840;
  v106_.v106[1] = &v108_.v108;
  v106_.v107 = v106_.v106;
  Troop_133ed80_alt1(v6, (__int64)v106_.v106);
  if (v106_.v107 == v106_.v106) {
    v10 = 32;
  }
  else {
    if (v106_.v107 == nullptr) {
      goto LABEL_13;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v106_.v107 + v10))((__int64)v106_.v107);
LABEL_13:
  v11 = v108_.v108;
  if (v108_.v109 != v108_.v108) {
    v12 = (unsigned __int64)(v108_.v109 - v108_.v108) >> 3;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v13 = game_map_MapRandom_instance__ptr[0];
    v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4) = v14;
    v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = v15;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12) = v17;
    v18 = v17 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v11 = v108_.v108;
    *(_QWORD*)(a1 + 168) =
        *(_QWORD*)(v108_.v108 + 8LL * (unsigned int)(v18 % (int)v12));
  LABEL_16:
    v108_.v109 = v11;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v11);
    goto LABEL_19;
  }
  if (v108_.v109 != 0) {
    goto LABEL_16;
  }
LABEL_19:
  v20 = *(_QWORD*)(a1 + 168);
  if (v20 == 0) {
    return;
  }
  v21 = GameRoutine_14ba0f0(*(_QWORD*)(v20 + 392));
  if (v21 == nullptr) {
    return;
  }
  v22 = (__int64**)v21[5];
  v23 = *v22;
  v24 = v22[1];
  if (*v22 == v24) {
    return;
  }
  v25 = 0;
  v26 = 0;
  v27 = nullptr;
  v28 = 0;
  v29 = GameData_2130e70;
  v101 = a1;
  do {
    v30 = *v23;
    v31 = *(_QWORD*)(*v2 + 8);
    v32 = *(_DWORD*)(v31 + 56);
    v33 = *(__int64**)(v31 + 8);
    v34 = *(__int64**)(v31 + 16);
    if (v32 < 0) {
      while (v33 != v34) {
        v35 = *v33;
        if (*(_QWORD*)(*v33 + 96) == 0 && *(_QWORD*)(v35 + 552) == 0) {
          goto LABEL_35;
        }
        ++v33;
      }
    LABEL_30:
      v37 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
      goto LABEL_36;
    }
    if (v33 == v34) {
      goto LABEL_30;
    }
    while (1) {
      v36 = *v33++;
      v35 = v36;
      if (*(_DWORD*)(v36 + 84) == v32) {
        break;
      }
      if (v33 == v34) {
        goto LABEL_30;
      }
    }
  LABEL_35:
    v37 = *(unsigned int**)v35;
  LABEL_36:
    if ((game_GmapFixedTalkData_IsCondition(v30, (__int64)v37,
                                            *(_QWORD*)(a1 + 168)) &
         1) == 0) {
      goto LABEL_25;
    }
    v39 = *(char**)(*v29 + 8);
    v38 = *(char**)(*v29 + 16);
    if (v39 == v38) {
      goto LABEL_53;
    }
    v40 = v38 - v39 - 8;
    if ((~(_BYTE)v40 & 0x18) != 0) {
      v41 = ((unsigned __int8)((unsigned int)v40 >> 3) + 1) & 3;
      while (*(_QWORD*)v39 != v30) {
        v39 += 8;
        if (--v41 == 0) {
          goto LABEL_42;
        }
      }
    LABEL_53:
      if (v39 != v38) {
        goto LABEL_25;
      }
      goto LABEL_54;
    }
  LABEL_42:
    if (v40 >= 0x18) {
      v39 += 16;
      while (1) {
        if (*((_QWORD*)v39 - 2) == v30) {
          if (v39 - 16 != v38) {
            goto LABEL_25;
          }
          goto LABEL_54;
        }
        if (*((_QWORD*)v39 - 1) == v30) {
          v39 -= 8;
          goto LABEL_53;
        }
        if (*(_QWORD*)v39 == v30) {
          goto LABEL_53;
        }
        if (*((_QWORD*)v39 + 1) == v30) {
          break;
        }
        v42 = v39 + 16;
        v39 += 32;
        if (v42 == v38) {
          goto LABEL_54;
        }
      }
      if (v39 + 8 != v38) {
        goto LABEL_25;
      }
    }
  LABEL_54:
    if ((unsigned __int64)v27 < v28) {
      *v27++ = v30;
    }
    else {
      v43 = v28;
      v44 = v29;
      v45 = (unsigned __int64)v27 - v26;
      v46 = v25;
      v47 = ((__int64)v27 - v26) >> 3;
      v48 = v47 + 1;
      if ((unsigned __int64)(v47 + 1) >> 61 != 0) {
      LABEL_128:
        GameRoutine_14c2010_alt1();
      }
      v49 = v43 - v26;
      v104 = v26;
      v50 = (__int64)(v43 - v26) >> 2;
      if (v50 > v48) {
        v48 = v50;
      }
      if (v49 >= 0x7FFFFFFFFFFFFFF8LL) {
        v51 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v51 = v48;
      }
      if (v51 != 0) {
        if (v51 >> 61 != 0) {
        LABEL_129:
          GameRoutine_60a210_alt1();
        }
        v52 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v51, 16, 0);
      }
      else {
        v52 = 0;
      }
      v53 = v52 + 8 * v51;
      v26 = v52 + v45 - 8 * v47;
      v102 = v53;
      *(_QWORD*)(v52 + v45) = v30;
      v27 = (__int64*)(v52 + v45 + 8);
      memcpy_alt1(v26, v104, v45);
      if (v104 != 0) {
        v54 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v104);
      }
      v25 = v46;
      v29 = v44;
      a1 = v101;
      v28 = v102;
    }
    v25 += *(unsigned __int8*)(v30 + 40);
  LABEL_25:
    ++v23;
  } while (v23 != v24);
  if (v27 == (__int64*)v26) {
    if (v27 != nullptr) {
      goto LABEL_123;
    }
  }
  else {
    v103 = v25;
    v55 = 0;
    v56 = nullptr;
    v57 = 0;
    v58 = (__int64*)v26;
    v59 = game_map_MapRandom_instance__ptr[0];
    v105 = (__int64*)v26;
    do {
      v60 = *v58;
      if (*(_WORD*)(*v58 + 42) != 0) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v61 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8);
        v62 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12);
        v63 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4) = v61;
        v64 = (v63 >> 8) ^ (v62 >> 19) ^ v63 ^ v62;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8) = v62;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12) = v64;
        v65 = v64 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        if (v65 % 0x64 < *(unsigned __int8*)(v60 + 41)) {
          if ((unsigned __int64)v56 < v55) {
            *(_QWORD*)v56 = v60;
            v56 += 8;
          }
          else {
            v66 = &v56[-v57];
            v67 = (__int64)&v56[-v57] >> 3;
            v68 = v67 + 1;
            if ((unsigned __int64)(v67 + 1) >> 61 != 0) {
              goto LABEL_128;
            }
            if ((__int64)(v55 - v57) >> 2 > v68) {
              v68 = (__int64)(v55 - v57) >> 2;
            }
            if (v55 - v57 >= 0x7FFFFFFFFFFFFFF8LL) {
              v69 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v69 = v68;
            }
            if (v69 != 0) {
              if (v69 >> 61 != 0) {
                goto LABEL_129;
              }
              v70 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v69, 16, 0);
            }
            else {
              v70 = 0;
            }
            v55 = v70 + 8 * v69;
            v71 = (unsigned __int64)&v56[-v57];
            v72 = (__int64)&v66[v70 + -8 * v67];
            *(_QWORD*)&v66[v70] = v60;
            v56 = &v66[v70 + 8];
            memcpy_alt1(v72, v57, v71);
            if (v57 != 0) {
              v73 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v73 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v57);
            }
            v57 = v72;
          }
        }
      }
      ++v58;
    } while (v58 != v27);
    if (v56 != (char*)v57) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v74 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8);
      v75 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12);
      v76 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4) = v74;
      v77 = (v76 >> 8) ^ (v75 >> 19) ^ v76 ^ v75;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8) = v75;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12) = v77;
      v78 = v77 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v79 = v78 % (int)((unsigned __int64)&v56[-v57] >> 3);
      GameRoutine_60a020_alt1(
          v101 + 176, *(const char**)(*(_QWORD*)(v57 + 8LL * v79) + 32LL));
      GmapSituation_14dbeb0_alt1(*(_QWORD*)(v57 + 8LL * v79));
    }
    v80 = *(unsigned __int8*)(v101 + 176);
    v81 = GameData_212c790;
    if ((v80 & 1) != 0) {
      v82 = *(_QWORD*)(v101 + 184);
    }
    else {
      v82 = v80 >> 1;
    }
    if (v82 == 0 && v103 >= 1) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v84 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8);
      v85 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12);
      v86 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 4) = v84;
      v87 = (v86 >> 8) ^ (v85 >> 19) ^ v86 ^ v85;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 8) = v85;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v59 + 12) = v87;
      v88 = v87 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v89 = v105;
      v90 = 0;
      while (1) {
        v91 = *v89;
        v92 = *(_QWORD*)(*v81 + 8);
        v93 = *(_DWORD*)(v92 + 56);
        v94 = *(__int64**)(v92 + 8);
        v95 = *(__int64**)(v92 + 16);
        if (v93 < 0) {
          break;
        }
        if (v94 == v95) {
          goto LABEL_109;
        }
        while (1) {
          v97 = *v94++;
          v96 = v97;
          if (*(_DWORD*)(v97 + 84) == v93) {
            break;
          }
          if (v94 == v95) {
            goto LABEL_109;
          }
        }
      LABEL_114:
        v98 = *(unsigned int**)v96;
      LABEL_115:
        if ((game_GmapFixedTalkData_IsCondition(v91, (__int64)v98,
                                                *(_QWORD*)(v101 + 168)) &
             1) != 0) {
          v90 += *(unsigned __int8*)(v91 + 40);
          if ((int)(v88 % v103) < v90) {
            GameRoutine_60a020_alt1(v101 + 176, *(const char**)(v91 + 32));
            GmapSituation_14dbeb0_alt1(v91);
            goto LABEL_118;
          }
        }
        if (++v89 == v27) {
          goto LABEL_118;
        }
      }
      while (v94 != v95) {
        v96 = *v94;
        if (*(_QWORD*)(*v94 + 96) == 0 && *(_QWORD*)(v96 + 552) == 0) {
          goto LABEL_114;
        }
        ++v94;
      }
    LABEL_109:
      v98 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
      goto LABEL_115;
    }
  LABEL_118:
    if (v57 != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v57);
    }
    v26 = (__int64)v105;
    if (v105 != nullptr) {
    LABEL_123:
      v100 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v100 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v26);
    }
  }
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

void game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  signed __int64 v28;
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
    return;
  }
  v4 = GameRoutine_14ba0f0(*(_QWORD*)(v2 + 392));
  if (v4 == nullptr) {
    return;
  }
  v5 = (__int64**)v4[5];
  v6 = *v5;
  v7 = v5[1];
  if (*v5 == v7) {
    return;
  }
  v8 = GameData_212c790;
  v9 = GameData_2130e70;
  while (1) {
    v11 = *v6;
    v12 = *(_QWORD*)(*v8 + 8);
    v13 = *(_DWORD*)(v12 + 56);
    v14 = *(__int64**)(v12 + 8);
    v15 = *(__int64**)(v12 + 16);
    if (v13 < 0) {
      while (v14 != v15) {
        v16 = *v14;
        if (*(_QWORD*)(*v14 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
          goto LABEL_17;
        }
        ++v14;
      }
    LABEL_12:
      v18 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
      goto LABEL_18;
    }
    if (v14 == v15) {
      goto LABEL_12;
    }
    while (1) {
      v17 = *v14++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v13) {
        break;
      }
      if (v14 == v15) {
        goto LABEL_12;
      }
    }
  LABEL_17:
    v18 = *(unsigned int**)v16;
  LABEL_18:
    if ((GameRoutine_14b9400(v11, (__int64)v18, v2) & 1) != 0) {
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
      return;
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
  v23 = *(__int64**)(a1 + 8);
  v25 = (__int64*)v23[1];
  v24 = v23[2];
  if ((unsigned __int64)v25 >= v24) {
    v27 = *v23;
    v28 = (signed __int64)v25 - *v23;
    v29 = (v28 >> 3) + 1;
    if (v29 >> 61 != 0) {
      GameRoutine_6c1f60_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v33 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = v33 + v28 - 8 * (v28 >> 3);
    *(_QWORD*)(v33 + v28) = v2;
    v26 = v33 + v28 + 8;
    memcpy_alt1(v35, v27, v28);
    *v23 = v35;
    v23[1] = v26;
    v23[2] = v34;
    if (v27 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v31 + v36, v27);
    }
  }
  else {
    *v25 = v2;
    v26 = (__int64)(v25 + 1);
  }
  v23[1] = v26;
}

#pragma GCC visibility pop
