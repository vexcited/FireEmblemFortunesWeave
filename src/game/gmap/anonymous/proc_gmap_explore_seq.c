#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcGmapExploreSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGmapExploreSeq_Destructor(__int64 a1);
__int64 ProcGmapExploreSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_135c560(void);
__int64 GameRoutine_1769a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a8ac57;
extern _UNKNOWN GameData_1ac46e3;
extern __int64 GameData_21f61c0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 ProcGmapExploreSeq_135ece0(__int64 a1);
__int64 ProcGmapExploreSeq_135ed00(__int64 result);
__int64 ProcGmapExploreSeq_135f540(__int64 a1);
__int64
game_gmap_anonymous_ProcGmapExploreSeq_Initialize_closure_Invoke(__int64 result,
                                                                 __int64* a2);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_e67da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TelopParts_17cc5d0(_QWORD, _QWORD);
__int64 TransporterConst_89ca00(_QWORD);
__int64 Troop_133ed80(_QWORD, _QWORD);
__int64 game_8ae640(_QWORD, _QWORD, _QWORD);
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 GameRoutine_175b880(__int64, __n128 result);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_202ec28[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d728[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2130f48;
extern __int64 GameData_2241720;
__int64 game_gmap_anonymous_ProcGmapExploreSeq_Initialize(__int64 a1);
__int64 ProcGmapExploreSeq_135f000(__int64 result);
__int64 ProcGmapExploreSeq_135f2a0(__int64 result);
__n128 ProcGmapExploreSeq_135f500(__n128 a1);
__int64 GameRoutine_1769a80_alt1(__int64, __int64**, int,
                                 __int64) __asm__("GameRoutine_1769a80");
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_gmap_anonymous_ProcGmapExploreSeq_Initialize(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 result;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD* v30;
  char* v31;
  __int64 v32;

  v31 = nullptr;
  v32 = 0;
  v30 = nullptr;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  if (v3 < 0) {
    while (1) {
      v5 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v4;
    }
  }
  else {
    v7 = *v4;
    v6 = v4 + 1;
    v5 = v7;
    if (*(_DWORD*)(v7 + 84) != v3) {
      do {
        v8 = *v6++;
        v5 = v8;
      } while (*(_DWORD*)(v8 + 84) != v3);
    }
  }
  v28[0] = GameData_202ec28;
  v28[1] = &v30;
  v29 = v28;
  Troop_133ed80(v5, v28);
  if (v29 == v28) {
    v9 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v29 + v9))((__int64)v29);
LABEL_13:
  v10 = v30;
  v11 = (unsigned __int64)(v31 - (char*)v30) >> 3;
  if ((int)v11 >= 1) {
    v12 = ((unsigned __int64)(v31 - (char*)v30) >> 3) & 0x7FFFFFFF;
    v13 = 0;
    v14 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex(&game_g_random_mutex);
      v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14);
      v16 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4);
      v17 = *(_DWORD*)v14 ^ (*(_DWORD*)v14 << 11);
      *(_DWORD*)v14 = *((_DWORD*)v14 + 1);
      *((_DWORD*)v14 + 1) = v15;
      v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v16;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v18;
      v19 = v18 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v20 = v30;
      v21 = v30[v13];
      v30[v13++] = v30[v19 % (unsigned int)v11];
      v20[v19 % (unsigned int)v11] = v21;
    } while (v12 != v13);
    v10 = v30;
  }
  v22 = fw_memory_g_heap_manager_ptr;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v23 = *v10;
  GameRoutine_e67da0(*(_QWORD*)(a1 + 152) + 56LL, v23, v23 + 1, 1);
  v24 = 128;
  if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
    v24 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v24);
  if (v30 != nullptr) {
    v26 = *(_QWORD*)v22;
    v31 = (char*)v30;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    return nn_mem_StandardAllocator_Free(v26 + v27);
  }
  return result;
}

__int64 ProcGmapExploreSeq_135ece0(__int64 a1)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + 40LL) =
      *(_QWORD*)(*(_QWORD*)(a1 + 152) + 32LL);
  return GameRoutine_135c560();
}

__int64 ProcGmapExploreSeq_135ed00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35[2];

  v1 = *(_QWORD*)(result + 152);
  v3 = *(__int64**)(v1 + 32);
  v2 = *(__int64**)(v1 + 40);
  if (v2 != v3) {
    v4 = (_QWORD*)result;
    do {
      v5 = *v3;
      v6 = *(_QWORD*)(*v3 + 48);
      if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
            (1LL << *(_BYTE*)(v6 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v8 = (_QWORD*)v4[24];
        v7 = v4[25];
        if ((unsigned __int64)v8 >= v7) {
          v12 = v4[23];
          v13 = (char*)v8 - v12;
          v14 = ((__int64)v8 - v12) >> 3;
          v15 = v14 + 1;
          if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
            goto LABEL_43;
          }
          v16 = v7 - v12;
          if (v16 >> 2 > v15) {
            v15 = v16 >> 2;
          }
          if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
            v17 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v17 = v15;
          }
          if (v17 != 0) {
            if (v17 >> 61 != 0) {
              goto LABEL_44;
            }
            v18 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
          }
          else {
            v18 = 0;
          }
          v26 = v18 + 8 * v17;
          v27 = (unsigned __int64)v8 - v12;
          v28 = (__int64)&v13[v18 + -8 * v14];
          *(_QWORD*)&v13[v18] = v6;
          v9 = (__int64)&v13[v18 + 8];
          memcpy_alt1(v28, v12, v27);
          v4[23] = v28;
          v4[24] = v9;
          v4[25] = v26;
          if (v12 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v12);
          }
        }
        else {
          *v8 = v6;
          v9 = (__int64)(v8 + 1);
        }
        v4[24] = v9;
      }
      else {
        v11 = (_QWORD*)v4[21];
        v10 = v4[22];
        if ((unsigned __int64)v11 >= v10) {
          v19 = v4[20];
          v20 = (char*)v11 - v19;
          v21 = ((__int64)v11 - v19) >> 3;
          v22 = v21 + 1;
          if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
          LABEL_43:
            GameRoutine_6e5c60_alt1();
          }
          v23 = v10 - v19;
          if (v23 >> 2 > v22) {
            v22 = v23 >> 2;
          }
          if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
            v24 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v24 = v22;
          }
          if (v24 != 0) {
            if (v24 >> 61 != 0) {
            LABEL_44:
              GameRoutine_60a210_alt1();
            }
            v25 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
          }
          else {
            v25 = 0;
          }
          v30 = v25 + 8 * v24;
          v31 = (unsigned __int64)v11 - v19;
          v32 = (__int64)&v20[v25 + -8 * v21];
          *(_QWORD*)&v20[v25] = v6;
          v33 = (__int64)&v20[v25 + 8];
          memcpy_alt1(v32, v19, v31);
          v4[20] = v32;
          v4[21] = v33;
          v4[22] = v30;
          if (v19 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v19);
          }
          v4[21] = v33;
        }
        else {
          *v11 = v6;
          v4[21] = v11 + 1;
        }
      }
      if (*(_BYTE*)(v5 + 58) == 1) {
        v35[1] = (unsigned __int64)&GameData_1ac46e3;
        v35[0] = game_HashString_alt1((__int64)&GameData_1ac46e3);
        GameRoutine_9b11a0_alt1(&GameData_21f61c0, v35, 1);
      }
      ++v3;
    } while (v3 != v2);
    return GameRoutine_1769a80_alt1((__int64)v4, (__int64**)(v4[19] + 32LL),
                                    *(_DWORD*)(v4[19] + 80LL),
                                    **(_QWORD**)(v4[19] + 56LL));
  }
  return result;
}

__int64 ProcGmapExploreSeq_135f000(__int64 result)
{
  __int64* v1;
  __int64* v2;
  char v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  char v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;

  v1 = *(__int64**)(result + 184);
  v2 = *(__int64**)(result + 192);
  if (v1 != v2) {
    v24 = result;
    v3 = 0;
    v4 = GameData_212c878[0];
    v5 = game_map_MapRandom_instance__ptr[0];
    do {
      v6 = *v1;
      v26 = 0;
      if (v6 != 0) {
        v7 = *v4;
        v8 = *(unsigned __int16*)(v6 + 16);
        HIDWORD(v26) = 1;
        v9 = *(_QWORD*)(v7 + 64);
        LOWORD(v26) = v8;
        if (*(_BYTE*)(*(_QWORD*)(v9 + 8 * v8) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
          v11 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
          v12 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
          *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
          *((_DWORD*)v5 + 1) = v10;
          v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v13;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v26) =
              HIDWORD(v26) & 0xFFFFC00F |
              (16 *
               (((16 * (v13 - 1000 * ((v13 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      v14 = TransporterConst_89ca00(&v26);
      v25 = nullptr;
      if (v6 != 0) {
        v15 = *v4;
        v16 = *(unsigned __int16*)(v6 + 16);
        HIDWORD(v25) = 1;
        v17 = *(_QWORD*)(v15 + 64);
        LOWORD(v25) = v16;
        if (*(_BYTE*)(*(_QWORD*)(v17 + 8LL * v16) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
          v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
          v20 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
          *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
          *((_DWORD*)v5 + 1) = v18;
          v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v19;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v21;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v16 = (unsigned __int16)v25;
          HIDWORD(v25) =
              HIDWORD(v25) & 0xFFFFC00F |
              (16 *
               (((16 * (v21 - 1000 * ((v21 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
        v27 = 0;
        v28 = 0;
        v26 = 0;
        if (v16 != 0) {
          game_8aef60(&v26, &v25);
        }
      }
      else {
        v27 = 0;
        v28 = 0;
        v26 = 0;
      }
      game_8ae640(&v26, 0, 0);
      if (v26 != 0) {
        v27 = v26;
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v22);
      }
      ++v1;
      v3 |= v14 ^ 1;
    } while (v1 != v2);
    result = v24;
    if ((v3 & 1) != 0) {
      v25 = "MID_Result_ItemFull_Message";
      result = game_menu_Dialog__CreateBind_game_menu_Dialog(v24, &v25);
      if (result != 0) {
        v29 = nullptr;
        GameRoutine_6680e0(&v26, result + 1248);
        result = (__int64)v29;
        if (v29 == &v26) {
          v23 = 32;
        }
        else {
          if (v29 == nullptr) {
            return result;
          }
          v23 = 40;
        }
        return (*(__int64 (**)(__int64))(*v29 + v23))((__int64)v29);
      }
    }
  }
  return result;
}

__int64 ProcGmapExploreSeq_135f2a0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(__int64**)(result + 160);
  v2 = *(__int64**)(result + 168);
  if (v1 != v2) {
    v3 = (__int64*)GameData_2130f48;
    v4 = GameData_212c878[0];
    v5 = game_map_MapRandom_instance__ptr[0];
    do {
      v6 = *v1;
      v23 = 0;
      if (v6 != 0) {
        v7 = *v4;
        v8 = *(unsigned __int16*)(v6 + 16);
        HIDWORD(v23) = 1;
        v9 = *(_QWORD*)(v7 + 64);
        LOWORD(v23) = v8;
        if (*(_BYTE*)(*(_QWORD*)(v9 + 8 * v8) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
          v11 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
          v12 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
          *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
          *((_DWORD*)v5 + 1) = v10;
          v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v13;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v23) =
              HIDWORD(v23) & 0xFFFFC00F |
              (16 *
               (((16 * (v13 - 1000 * ((v13 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
        if ((TransporterConst_89ca00(&v23) & 1) == 0) {
        LABEL_18:
          result = *v3;
          if (*v3 != 0) {
            result = TelopParts_17cc5d0(result, v6);
          }
          goto LABEL_3;
        }
        v14 = *v4;
        v22 = 0x100000000LL;
        v16 = *(_QWORD*)(v14 + 64);
        LOWORD(v22) = *(_WORD*)(v6 + 16);
        v15 = (unsigned __int16)v22;
        if (*(_BYTE*)(*(_QWORD*)(v16 + 8LL * (unsigned __int16)v22) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v17 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
          v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
          v19 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
          *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
          *((_DWORD*)v5 + 1) = v17;
          v20 = (v19 >> 8) ^ (v18 >> 19) ^ v19 ^ v18;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v18;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v20;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v15 = (unsigned __int16)v22;
          HIDWORD(v22) =
              HIDWORD(v22) & 0xFFFFC00F |
              (16 *
               (((16 * (v20 - 1000 * ((v20 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
        v24 = 0;
        v25 = 0;
        v23 = 0;
        if (v15 != 0) {
          game_8aef60(&v23, &v22);
        }
      }
      else {
        if ((TransporterConst_89ca00(&v23) & 1) == 0) {
          goto LABEL_18;
        }
        v22 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
      }
      result = game_8ae640(&v23, 0, 0);
      if (v23 != 0) {
        v24 = v23;
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
      }
    LABEL_3:
      ++v1;
    } while (v1 != v2);
  }
  return result;
}

__n128 ProcGmapExploreSeq_135f500(__n128 a1)
{
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
  return GameRoutine_175b880(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL, a1);
}

__int64 ProcGmapExploreSeq_135f540(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 152);
  v3[1] = &GameData_1a8ac57;
  *(_QWORD*)(v1 + 40) = *(_QWORD*)(v1 + 32);
  *(_QWORD*)(v1 + 64) = *(_QWORD*)(v1 + 56);
  *(_DWORD*)(v1 + 80) = 1;
  v3[0] = game_HashString(&GameData_1a8ac57);
  return GameRoutine_9b11a0(&GameData_21f61c0, v3, 1);
}

__int64

game_gmap_anonymous_ProcGmapExploreSeq_Initialize_closure_Invoke(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 416) & 8) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 ProcGmapExploreSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapExploreSeq_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcGmapExploreSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapExploreSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
