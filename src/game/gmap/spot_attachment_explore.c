#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_135c2e0(void);
__int64 GameRoutine_151a420();
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 atoi(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab1630;
extern _UNKNOWN GameData_1ac136e;
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c99b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 SpotAttachmentExplore_Unknown30(__int64 a1);
__int64 SpotAttachmentExplore_Unknown40_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentExplore_Unknown40");
__int64 SpotAttachmentExplore_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentExplore_DeletingDestructor");
__int64 Impl_13261c0(_QWORD);
__int64 SpotAttachmentDungeon_151b000(void);
__int64 SpotAttachmentExplore_151a420(void);
__int64 SpotAttachmentFort_151b980(void);
__int64 game_gmap_SpotAttachmentDungeon_GetData(_QWORD);
__int64 game_gmap_SpotAttachmentExplore_GetData(void);
__int64 game_gmap_SpotAttachmentFort_GetData(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab7f34;
extern __int64 GameData_21c9ed0;
bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2);
__int64 SpotAttachmentExplore_151a420();
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_8ae640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8af240(_QWORD, _QWORD);
extern __int64 GameData_21f1618;
extern __int64 GameData_2241720;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
__int64 SpotAttachmentExplore_15197c0(_QWORD* a1, char a2);
__int64 SpotAttachmentExplore_15198a0(__int64 a1);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_gmap_SpotAttachmentExplore_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentExplore_GetData");
extern __int64 (*GameData_202c698[])();
extern __int64 GameData_21c96e8;
__int64 SpotAttachmentExplore_151a540();
__int64 GmapExploreInfo_135c2e0(__int64, __int64, char);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             __int64);
__int64
SpotAttachmentDungeon_151b000_alt1() __asm__("SpotAttachmentDungeon_151b000");
__int64 SpotAttachmentFort_151b980_alt1() __asm__("SpotAttachmentFort_151b980");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_SpotAttachmentDungeon_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentDungeon_GetData");
__int64 game_gmap_SpotAttachmentFort_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentFort_GetData");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int atoi_alt1(const char*) __asm__("atoi");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotAttachmentExplore_Unknown40(_QWORD* a1);
void SpotAttachmentExplore_DeletingDestructor(_QWORD* a1);
__int64 Dir_70e760(__int16*, __int16*);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void GmapExploreInfo_135d220(__int64, __int64*, int);
void SpotAttachmentExplore_Unknown17(__int64* a1, int a2);

__int64 SpotAttachmentExplore_15197c0(_QWORD* a1, char a2)
{
  __int64 result;
  __int64 v4;
  _QWORD v5[3];

  if ((a2 & 1) == 0) {
    return (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 88LL))(a1, 0);
  }
  GameRoutine_8af240(v5, a1 + 6);
  result = GameRoutine_8ae640(v5, 0, 0);
  if (v5[0] != 0) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v5[0]);
  }
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
  if (GameData_21f1618 != 0) {
    return GameRoutine_1328d60(a1[4]);
  }
  return result;
}

__int64 SpotAttachmentExplore_15198a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD v10[2];

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 != 0) {
    v2 = 0;
    v3 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v4 = GameData_212ceb0;
    v5 = GameData_212c780;
    while (1) {
      v6 = *(_QWORD*)(v3 + 48);
      if (*(_BYTE*)(v6 + v2) != 0) {
        v7 = *(_DWORD*)(v6 + v2 + 4);
        if (v7 != 0 && *v5 != 0) {
          v10[1] = &GameData_1a9f09e;
          v10[0] = v7;
          if (SpotMgr_132ffa0(v10) == v1) {
            break;
          }
        }
      }
      v2 += 8;
      if (v2 == 2400) {
        return *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                          8LL * *(unsigned __int8*)v4);
      }
    }
    v4 = (__int64*)(*(_QWORD*)(v3 + 48) + v2);
  }
  else {
    v4 = GameData_212ceb0;
  }
  return *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                    8LL * *(unsigned __int8*)v4);
}

bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int8 v5;
  __int64 v6;
  unsigned __int8* v7;
  int v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  unsigned __int8* v17;
  int v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  int v22;
  int v23;
  _BOOL8 result;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  int v35;
  int v36;

  v4 = game_gmap_SpotAttachmentExplore_GetData_alt1();
  v5 = Impl_13261c0_alt1(a1);
  v6 = *(unsigned __int16*)(v4 + 48);
  if (*(_WORD*)(v4 + 48) == 0) {
  LABEL_5:
    v9 = game_gmap_SpotAttachmentDungeon_GetData_alt1();
    v10 = Impl_13261c0_alt1(a1);
    v11 = *(unsigned __int16*)(v9 + 48);
    if (*(_WORD*)(v9 + 48) != 0) {
      v12 = *(unsigned __int8**)(v9 + 56);
      while (1) {
        v13 = *v12++;
        if (v13 == v10) {
          break;
        }
        if (--v11 == 0) {
          goto LABEL_9;
        }
      }
      if (*(_QWORD*)(a2 + 64) != 0) {
        v26 = SpotAttachmentDungeon_151b000_alt1();
        if (*(_WORD*)(v26 + 32) != 0) {
          v27 = *(unsigned __int8**)(v26 + 40);
          v28 = *(unsigned __int16*)(v26 + 32) - 1LL;
          v29 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
          do {
            v30 = *v27++;
            result = v30 == v29;
          } while (v30 != v29 && v28-- != 0);
          return result;
        }
      }
    }
    else {
    LABEL_9:
      v14 = game_gmap_SpotAttachmentFort_GetData_alt1();
      v15 = Impl_13261c0_alt1(a1);
      v16 = *(unsigned __int16*)(v14 + 48);
      if (*(_WORD*)(v14 + 48) != 0) {
        v17 = *(unsigned __int8**)(v14 + 56);
        while (1) {
          v18 = *v17++;
          if (v18 == v15) {
            break;
          }
          if (--v16 == 0) {
            return false;
          }
        }
        if (*(_QWORD*)(a2 + 64) != 0) {
          v32 = SpotAttachmentFort_151b980_alt1();
          if (*(_WORD*)(v32 + 32) != 0) {
            v33 = *(unsigned __int8**)(v32 + 40);
            v34 = *(unsigned __int16*)(v32 + 32) - 1LL;
            v35 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
            do {
              v36 = *v33++;
              result = v36 == v35;
            } while (v36 != v35 && v34-- != 0);
            return result;
          }
        }
      }
    }
    return false;
  }
  v7 = *(unsigned __int8**)(v4 + 56);
  while (1) {
    v8 = *v7++;
    if (v8 == v5) {
      break;
    }
    if (--v6 == 0) {
      goto LABEL_5;
    }
  }
  if (*(_QWORD*)(a2 + 64) == 0) {
    return false;
  }
  v19 = SpotAttachmentExplore_151a420();
  if (*(_WORD*)(v19 + 32) == 0) {
    return false;
  }
  v20 = *(unsigned __int8**)(v19 + 40);
  v21 = *(unsigned __int16*)(v19 + 32) - 1LL;
  v22 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
  do {
    v23 = *v20++;
    result = v23 == v22;
  } while (v23 != v22 && v21-- != 0);
  return result;
}

__int64 SpotAttachmentExplore_151a420()
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

  v0 = game_HashString(&GameData_1ab7f34);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c9ed0 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c9ed0 + 112) != 0) {
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
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ed0 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 SpotAttachmentExplore_151a540()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  unsigned __int8 v11;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = *v2++;
      v4 = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *(_QWORD*)(game_gmap_SpotAttachmentExplore_GetData_alt1() + 40);
  v11 = 0;
  v9_.v9[0] = GameData_202c698;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  v9_.v9[2] = v6;
  Troop_133ed80(v4, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return v11;
}

void SpotAttachmentExplore_Unknown17(__int64* a1, int a2)
{
  __int16* v3;
  __int64 v4;
  __int64 v6;
  __int16* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  int v12;

  v3 = (__int16*)a1 + 10;
  {
    v4 = *((__int16*)a1 + 10);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v6 = *((__int16*)a1 + 11);
    __asm__ volatile("" ::"r"(v6));
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((v6 << 24) + (v4 << 32) + ((__int64)v3[2] << 18) +
          ((__int64)v3[3] << 12) + ((__int64)v3[4] << 6) + v3[5] >=
      (unsigned __int64)(((__int64)v7[1] << 24) + ((__int64)*v7 << 32) +
                         ((__int64)v7[2] << 18) + ((__int64)v7[3] << 12) +
                         ((__int64)v7[4] << 6) + v7[5])) {
    a2 += ~(unsigned int)Dir_70e760(v7, v3);
  }
  {
    v8 = a1[4];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = Impl_13261c0_alt1(v8);
  if (a2 >= 1) {
    {
      v10 = *(_QWORD*)(v8 + 144);
      __asm__ volatile("" ::"r"(v10));
    }
    if (v9 == 5 && v10 != 0) {
      do {
        if ((*(unsigned int (**)(__int64*))(*a1 + 256))(a1) == 0) {
          break;
        }
        v12 = (*(__int64 (**)(__int64*))(*a1 + 240))(a1);
        GmapExploreInfo_135d220(v10, a1 + 6, v12);
        --a2;
      } while (a2 != 0);
    }
  }
}

__int64 SpotAttachmentExplore_Unknown30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v10;
  int v11;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v2 = GameRoutine_151a420();
  v3 = *(unsigned __int8*)(v1 + 50);
  if (v3 >= 3) {
    if (v3 >= 5) {
      if (v3 >= 7) {
        if (v3 >= 9) {
          v6 = v3 >= 0xB;
          v4 = 4;
          if (v6) {
            v4 = 5;
          }
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v4 = 3;
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
      }
      else {
        v4 = 2;
        v5 = *(_QWORD*)(v1 + 64);
        if (v5 == 0) {
          goto LABEL_21;
        }
      }
    }
    else {
      v4 = 1;
      v5 = *(_QWORD*)(v1 + 64);
      if (v5 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 64);
    if (v5 == 0) {
      goto LABEL_21;
    }
  }
  v7 = *(unsigned __int16*)(v2 + 32);
  if (*(_WORD*)(v2 + 32) == 0) {
  LABEL_21:
    v10 = 72;
    return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
  }
  v8 = *(unsigned __int8**)(v2 + 40);
  v9 = *(unsigned __int8*)(v5 + 250);
  v10 = 72;
  while (1) {
    v11 = *v8++;
    if (v11 == v9) {
      break;
    }
    if (--v7 == 0) {
      return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
    }
  }
  v10 = 56;
  return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
}

void SpotAttachmentExplore_Unknown40(_QWORD* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int* v20;
  int* v21;
  __int64 v22;
  int* v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  bool v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  struct {
    __int64 v89;
    __int64 v90;
    __int64 v91;
  } v89_;
  unsigned __int64 v92[2];

  v2 = game_HashString_alt1((__int64)&GameData_1ac136e);
  if (v2 == 0) {
    goto LABEL_25;
  }
  v7 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v2;
    if (v2 >= v7) {
      v10 = v2 % v7;
    }
  }
  else {
    v10 = v9 & v2;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v10);
  if (v11 == nullptr || (v12 = (_QWORD*)*v11) == nullptr) {
  LABEL_25:
    v14 = 0;
    goto LABEL_26;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v15 = v12[1];
      if (v15 == v2) {
        if (v12[2] == v2) {
          goto LABEL_136;
        }
      }
      else if ((v15 & v9) != v10) {
        goto LABEL_25;
      }
      v12 = (_QWORD*)*v12;
      v14 = 0;
      if (v12 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v2) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      goto LABEL_25;
    }
  LABEL_15:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v12[2] != v2) {
    goto LABEL_15;
  }
LABEL_136:
  v14 = v12[3];
LABEL_26:
  v89_.v90 = 0;
  v89_.v91 = 0;
  v89_.v89 = 0;
  v16 = *(_QWORD**)(*(_QWORD*)GameData_212d740[0] + 8LL);
  v18 = v16[3];
  v17 = v16[4];
  v19 = v16[1];
  v20 = (int*)(v16 + 6);
  v21 = (int*)v16 + 13;
  if (v17 == v18) {
    v22 = *v16;
  }
  else {
    v19 = v16[4];
    v22 = v16[3];
  }
  if (v17 == v18) {
    v23 = v20;
  }
  else {
    v23 = v21;
  }
  v24 = *v23;
  if (0xAAAAAAAAAAAAAAABLL * ((v19 - v22) >> 3) <= v24) {
    v30 = 0;
    v29 = 0;
  }
  else {
    v25 = (unsigned __int8*)(v22 + 24LL * (int)v24);
    v26 = *v25;
    if ((v26 & 1) != 0) {
      v27 = *((_QWORD*)v25 + 2);
    }
    else {
      v27 = (__int64)(v25 + 1);
    }
    if ((v26 & 1) != 0) {
      v28 = *((_QWORD*)v25 + 1);
    }
    else {
      v28 = v26 >> 1;
    }
    RuntimeBuffer_8924a0((__int64)&v89_.v89, v27, v28, 47);
    v30 = v89_.v89;
    v29 = v89_.v90;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v29 - v30) >> 3) < 4) {
    v32 = 0;
  }
  else {
    if ((*(_BYTE*)(v30 + 72) & 1) != 0) {
      v31 = *(const char**)(v30 + 88);
    }
    else {
      v31 = (const char*)(v30 + 73);
    }
    v32 = atoi_alt1(v31);
    if ((*(_BYTE*)(v30 + 48) & 1) != 0) {
      v33 = *(_QWORD*)(v30 + 64);
    }
    else {
      v33 = v30 + 49;
    }
    v34 = game_HashString_alt1(v33);
    if (v34 != 0) {
      v35 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v35 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
        v37 = v35 - 1;
        if ((v35 & (v35 - 1)) != 0) {
          v38 = v34;
          if (v34 >= v35) {
            v38 = v34 % v35;
          }
        }
        else {
          v38 = v37 & v34;
        }
        v39 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v38);
        if (v39 != nullptr) {
          v40 = (_QWORD*)*v39;
          if (v40 != nullptr) {
            if ((v35 & v37) == 0) {
              while (1) {
                v42 = v40[1];
                if (v42 == v34) {
                  if (v40[2] == v34) {
                    goto LABEL_137;
                  }
                }
                else if ((v42 & v37) != v38) {
                  goto LABEL_73;
                }
                v40 = (_QWORD*)*v40;
                if (v40 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            do {
              v41 = v40[1];
              if (v41 == v34) {
                if (v40[2] == v34) {
                LABEL_137:
                  v14 = v40[3];
                  goto LABEL_74;
                }
              }
              else {
                if (v41 >= v35) {
                  v41 %= v35;
                }
                if (v41 != v38) {
                  break;
                }
              }
              v40 = (_QWORD*)*v40;
            } while (v40 != nullptr);
          }
        }
      }
    }
  LABEL_73:
    v14 = 0;
  }
LABEL_74:
  v43 = -1;
  do {
    v92[1] = (unsigned __int64)&GameData_1ab1630;
    v46 = game_HashString_alt1((__int64)&GameData_1ab1630);
    v47 = game_GameModeData_instance_;
    v92[0] = v46;
    if (game_GameModeData_instance_ != 0) {
      v48 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v92);
      if (v48 != 0) {
        v47 = *(_DWORD*)(v48 + 32);
      }
      else {
        v47 = 0;
      }
    }
    if (++v43 >= v47) {
      break;
    }
    if ((*(int (**)(_QWORD*))(*a1 + 248LL))(a1) < v32 ||
        ((v49 = a1[4], v50 = (unsigned __int8)Impl_13261c0_alt1(v49),
          v51 = *(_QWORD*)(v49 + 144), v50 == 5)
             ? (v52 = v51 == 0)
             : (v52 = true),
         v52)) {
      v54 = (_QWORD*)a1[7];
      v53 = a1[8];
      if ((unsigned __int64)v54 < v53) {
        *v54 = v14;
        v44 = (__int64)(v54 + 1);
      }
      else {
        v55 = a1[6];
        v56 = (char*)v54 - v55;
        v57 = ((__int64)v54 - v55) >> 3;
        v58 = v57 + 1;
        if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
          goto LABEL_138;
        }
        v59 = v53 - v55;
        if (v59 >> 2 > v58) {
          v58 = v59 >> 2;
        }
        if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
          v60 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v60 = v58;
        }
        if (v60 != 0) {
          if (v60 >> 61 != 0) {
            goto LABEL_139;
          }
          v61 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
        }
        else {
          v61 = 0;
        }
        v67 = v61 + 8 * v60;
        v68 = (unsigned __int64)v54 - v55;
        v69 = (__int64)&v56[v61 + -8 * v57];
        *(_QWORD*)&v56[v61] = v14;
        v44 = (__int64)&v56[v61 + 8];
        memcpy_alt1(v69, v55, v68);
        a1[6] = v69;
        a1[7] = v44;
        a1[8] = v67;
        if (v55 != 0) {
          v70 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v70 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v55);
        }
      }
    }
    else {
      v62 = v32;
      v63 = v14;
      v64 = *(_QWORD*)(GmapExploreInfo_135c2e0(v51, 0, 0) + 48);
      v66 = (_QWORD*)a1[7];
      v65 = a1[8];
      if ((unsigned __int64)v66 >= v65) {
        v71 = a1[6];
        v72 = (char*)v66 - v71;
        v73 = ((__int64)v66 - v71) >> 3;
        v74 = v73 + 1;
        if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
        LABEL_138:
          GameRoutine_6e5c60_alt1();
        }
        v75 = v65 - v71;
        if (v75 >> 2 > v74) {
          v74 = v75 >> 2;
        }
        if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
          v76 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v76 = v74;
        }
        if (v76 != 0) {
          if (v76 >> 61 != 0) {
          LABEL_139:
            GameRoutine_60a210_alt1();
          }
          v77 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v76, 16, 0);
        }
        else {
          v77 = 0;
        }
        v78 = v77 + 8 * v76;
        v79 = (unsigned __int64)v66 - v71;
        v80 = (__int64)&v72[v77 + -8 * v73];
        *(_QWORD*)&v72[v77] = v64;
        v44 = (__int64)&v72[v77 + 8];
        memcpy_alt1(v80, v71, v79);
        a1[6] = v80;
        a1[7] = v44;
        a1[8] = v78;
        if (v71 != 0) {
          v81 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v81 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, v71);
        }
        v14 = v63;
        v32 = v62;
      }
      else {
        *v66 = v64;
        v44 = (__int64)(v66 + 1);
        v14 = v63;
        v32 = v62;
      }
    }
    v45 = *a1;
    a1[7] = v44;
  } while ((*(unsigned int (**)(_QWORD*))(v45 + 256))(a1) != 0);
  v82 = v89_.v89;
  if (v89_.v89 != 0) {
    v83 = v89_.v90;
    if (v89_.v89 == v89_.v90) {
      goto LABEL_132;
    }
    v84 = v89_.v90;
    do {
      v85 = *(_BYTE*)(v84 - 24);
      v84 -= 24;
      if ((v85 & 1) != 0) {
        v86 = *(_QWORD*)(v83 - 8);
        if (v86 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v87 = 128;
          }
          else {
            v87 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v87,
                                             v86);
        }
      }
      v83 = v84;
    } while (v84 != v82);
    v89_.v90 = v82;
    v82 = v89_.v89;
    if (v89_.v89 != 0) {
    LABEL_132:
      v88 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v88 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v82);
    }
  }
}

void SpotAttachmentExplore_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

  v1 = a1[4];
  *a1 = &game_gmap_SpotAttachmentDispatch_vtable;
  if (v1 != 0) {
    v3 = 0;
    v4 = GameData_212cf80[0];
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v6 = GameData_212c780;
    while (1) {
      v7 = *(_QWORD*)(v5 + 48);
      if (*(_BYTE*)(v7 + v3) != 0) {
        v8 = *(_DWORD*)(v7 + v3 + 4);
        if (v8 != 0 && *v6 != 0) {
          v18_.v19 = &GameData_1a9f09e;
          v18_.v18[0] = v8;
          v18_.v18[1] = 0;
          if (SpotMgr_132ffa0_alt1(v18_.v18) == v1) {
            break;
          }
        }
      }
      v3 += 8;
      if (v3 == 2400) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) + v3;
    v11 = *(_DWORD*)(v10 + 4);
    if (v11 != 0 && *v6 != 0) {
      v18_.v19 = &GameData_1a9f09e;
      v18_.v18[0] = v11;
      v18_.v18[1] = 0;
      if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
        *(_DWORD*)(v10 + 4) = 0;
      }
    }
  }
LABEL_19:
  v13 = a1[6];
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v13;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v17, (__int64)a1);
}

#pragma GCC visibility pop
