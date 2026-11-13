#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_149e9e0(unsigned __int8);
__int64* game_821090(int);
__int64 Dir_70df40(__int16*, __int16*);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameRoutine_143d0a0(__int64, __int16*);
__int64 GameRoutine_2b0();
__int64 GameRoutine_86b4e0(__int64*);
__int64 GameRoutine_94a700(__int16*);
__int64 GameVariable_828dc0(__int64, unsigned __int64*, int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1aa850c;
extern _UNKNOWN GameData_1aac1ab;
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN GameData_1af1483;
extern _UNKNOWN GameData_21f4318;
extern _UNKNOWN GameData_2242118;
extern __int16 GameData_2242774;
extern __int64 (*GameData_1faf458[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_2242748;
extern __int64 GameData_2242760;
extern __int64 GameData_2242768;
extern __int64 GameData_2249208;
extern __int64 GameData_2249218;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern int GameData_21f4314;
extern int GameData_2242770;
int __cxa_guard_acquire(__int64);
typedef __int64 GameAlign_21f430c __attribute__((aligned(4)));
extern GameAlign_21f430c GameData_21f430c;
typedef __int64 GameAlign_2242104 __attribute__((aligned(4)));
extern GameAlign_2242104 GameData_2242104;
typedef __int64 GameAlign_224210c __attribute__((aligned(4)));
extern GameAlign_224210c GameData_224210c;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned __int64 FacilityVariable_1472560(unsigned __int64 result);
void CookingFile_9249e0(__int64*, char);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_94a540();
__int64 game_facility_94a820();
__int64 game_facility_94bf40();
__int64 game_facility_1410d30();

__int64 game_facility_94a540()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  bool v2;
  unsigned __int8 explicit;
  __int16* v4;
  int v5;
  char v6;
  double v7;
  __int64 v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int16* v13;
  double v14;
  unsigned int v15;
  double v16;
  double v17;
  double v18;
  int v19;
  __int64 v20;
  __int16* v22;
  int v23;
  struct {
    __int64* v24;
    __int64* v25;
    __int64 v26;
  } v24_;

  v0 = game_gmap_GmapClock_kDefaultTime_ptr;
  v24_.v24 = nullptr;
  v24_.v25 = nullptr;
  v24_.v26 = 0;
  v1 = game_gmap_GmapClock_instance_ + 8;
  v2 = game_gmap_GmapClock_instance_ == 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                                  memory_order_acquire);
  if (v2) {
    v4 = (__int16*)v0;
  }
  else {
    v4 = (__int16*)v1;
  }
  if ((explicit & 1) == 0) {
    v22 = v4;
    v23 = __cxa_guard_acquire((__int64)&GameData_21f4318);
    v4 = v22;
    if (v23 != 0) {
      GameData_21f4314 = 0;
      GameData_21f430c = 0x10000205A5LL;
      __cxa_guard_release((__int64)&GameData_21f4318);
      v4 = v22;
    }
  }
  v5 = Dir_70df40((__int16*)&GameData_21f430c, v4);
  if (v5 >= 1440) {
    v6 = (v5 / 0x2760u) & 3;
  }
  else {
    v6 = 0;
  }
  CookingFile_9249e0((__int64*)&v24_.v24, v6);
  v8 = (__int64)v24_.v24;
  v9 = v24_.v25;
  v10 = 0x7FFFFFFF;
  if (v24_.v24 != v24_.v25) {
    v11 = v24_.v24;
    do {
      v12 = *v11++;
      {
        __typeof__(v7) z_ = (__typeof__(v7)){0};
        LOWORD(z_) = *(_WORD*)(v12 + 52);
        v7 = z_;
      }
      if (game_gmap_GmapClock_instance_ != 0) {
        v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
      }
      else {
        v13 = (__int16*)v0;
      }
      v14 = (double)*(unsigned __int64*)&v7;
      v15 = GameRoutine_94a700(v13);
      v16 = (double)v15 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      if (v16 <= 0x1.0000000000000p+0) {
        v17 = (double)v15 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      }
      else {
        v17 = 0x1.0000000000000p+0;
      }
      if (v16 >= 0x1.47ae147ae147bp-7) {
        v18 = v17;
      }
      else {
        v18 = 0x1.47ae147ae147bp-7;
      }
      v7 = v18 * v14;
      v19 = (int)v7;
      if ((int)v7 <= 1) {
        v19 = 1;
      }
      if (v19 < v10) {
        v10 = v19;
      }
    } while (v11 != v9);
  }
  if (v8 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v8);
  }
  return (unsigned int)v10;
}

__int64 game_facility_94a820()
{
  __int64* v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  bool v10;
  unsigned __int8 explicit;
  __int16* v12;
  int v13;
  char v14;
  __int64 v15;
  int* v16;
  __int64 (**v17)();
  __int16 v18;
  unsigned int v19;
  __int64 v20;
  __int16* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  __int16* v27;
  __int16* v29;
  int v30;
  struct {
    __int64 (**v31)();
    int* v32;
    __int64 v33;
    char gap40_[8];
    __int64* v34;
    char gap56_[20];
    int v35;
  } v31_;

  v0 = game_821090(1);
  if (game_GameModeData_instance_ != 0) {
    v1 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
    v2 = 0x400000;
    if (v1 != 0) {
      if (*(int*)(v1 + 32) <= 0) {
        v2 = 0x400000;
      }
      else {
        v2 = 0;
      }
    }
  }
  else {
    v2 = 0x400000;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v31_.v32 = (int*)&GameData_1adebe5,
            v31_.v31 =
                (__int64 (**)(void))game_HashString((__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v3 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v31_.v31)) == 0 ||
           *(_DWORD*)(v3 + 32) == 0)) {
    v2 |= 8u;
  }
  v31_.v35 = 0;
  v4 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v31_.v34 = (__int64*)&v31_.v31;
  v31_.v31 = GameData_1faf458;
  v31_.v32 = &v31_.v35;
  FacilityUnitList_145e440(v4, (__int64)&v31_.v31, 2);
  if (v31_.v34 == (__int64*)&v31_.v31) {
    v5 = 32;
  }
  else {
    if (v31_.v34 == nullptr) {
      goto LABEL_19;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v31_.v34 + v5))((__int64)v31_.v34);
LABEL_19:
  v6 = game_gmap_GmapClock_kDefaultTime_ptr;
  v31_.v31 = nullptr;
  v31_.v32 = nullptr;
  v31_.v33 = 0;
  if (v31_.v35 >= 3) {
    v7 = v2;
  }
  else {
    v7 = v2 | 0x40;
  }
  v8 = v7 | 0x20000;
  v9 = game_gmap_GmapClock_instance_ + 8;
  v10 = game_gmap_GmapClock_instance_ == 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4318,
                                  memory_order_acquire);
  if (v10) {
    v12 = (__int16*)v6;
  }
  else {
    v12 = (__int16*)v9;
  }
  if ((explicit & 1) == 0) {
    v29 = v12;
    v30 = __cxa_guard_acquire((__int64)&GameData_21f4318);
    v12 = v29;
    if (v30 != 0) {
      GameData_21f4314 = 0;
      GameData_21f430c = 0x10000205A5LL;
      __cxa_guard_release((__int64)&GameData_21f4318);
      v12 = v29;
    }
  }
  v13 = Dir_70df40((__int16*)&GameData_21f430c, v12);
  if (v13 >= 1440) {
    v14 = (v13 / 0x2760u) & 3;
  }
  else {
    v14 = 0;
  }
  CookingFile_9249e0((__int64*)&v31_.v31, v14);
  v15 = (__int64)v31_.v31;
  v16 = v31_.v32;
  if (v31_.v31 == (__int64 (**)(void))v31_.v32) {
  LABEL_46:
    if (v15 == 0) {
      goto LABEL_50;
    }
    goto LABEL_47;
  }
  v17 = v31_.v31;
  do {
    if (*v17 == nullptr) {
      goto LABEL_45;
    }
    v18 = *((_WORD*)*v17 + 8);
    v19 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v20 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_2249208);
      if (v20 != 0) {
        v19 = *(_DWORD*)(v20 + 32);
      }
      else {
        v19 = 0;
      }
    }
    v21 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    if (game_gmap_GmapClock_instance_ != 0) {
      v21 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    if (v19 <= 10000 * *v21 + 100 * v21[1] + v21[2]) {
      goto LABEL_45;
    }
    v22 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v23 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_2249218);
      if (v23 == 0) {
        goto LABEL_45;
      }
      v22 = *(_DWORD*)(v23 + 32);
    }
    if (((v22 >> v18) & 1) == 0) {
    LABEL_45:
      v8 = v7;
      goto LABEL_46;
    }
    ++v17;
  } while (v17 != (__int64 (**)(void))v16);
  if (v15 != 0) {
  LABEL_47:
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v15);
  }
LABEL_50:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v31_.v32 = (int*)&GameData_1af1483;
    v31_.v31 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af1483);
    v26 = game_GameModeData_instance_ == 0 ||
          (v25 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v31_.v31)) == 0 ||
          (signed __int32)*(_DWORD*)(v25 + 32) < 1;
    v8 |= v26;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v27 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v27 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0((__int64)&GameData_1aa850c, v27) & 1) != 0) {
    return v8;
  }
  else {
    return v8 | 2;
  }
}

__int64 game_facility_94bf40()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  __int64 result;
  int v5;
  __int64 v6;
  bool v7;
  unsigned __int16* v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  struct {
    __int64 v13;
    void* v14;
    __int16 v15;
    __int16 v16;
  } v13_;

  FacilityVariable_1472560(1u);
  v13_.v14 = &GameData_1aac1ab;
  v13_.v13 = game_HashString((__int64)&GameData_1aac1ab);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v13_.v13);
    if (v0 != 0) {
      v1 = *(_DWORD*)(v0 + 32);
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_7;
      }
    }
    else {
      v1 = 0;
      v2 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_7;
      }
    }
    v3 = (*(int*)(v2 + 72) - v1) & ~((*(int*)(v2 + 72) - v1) >> 31);
    if (v3 >= 9999999) {
      v3 = 9999999;
    }
    *(_DWORD*)(v2 + 72) = v3;
  }
LABEL_7:
  result = (__int64)game_149e9e0(4u);
  if (game_GameModeData_instance_ != 0) {
    result = GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                 (unsigned __int64*)result, 1);
    if (game_GameModeData_instance_ != 0 &&
        *(_BYTE*)(game_GameModeData_instance_ + 56) == 5) {
      v13_.v14 = &GameData_1a856ca;
      result = game_HashString((__int64)&GameData_1a856ca);
      v13_.v13 = result;
      if (game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v13_.v13);
        if (result != 0) {
          v5 = *(_DWORD*)(result + 32);
          v6 = game_gmap_GmapClock_instance_;
          v7 = v5 == 0 || game_gmap_GmapClock_instance_ == 0;
          if (!v7 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                             *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                             *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                         0) {
            v8 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
            v9 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
            v10 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
            v11 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
            v13_.v13 = game_gmap_GmapClock_instance_;
            LOWORD(v13_.v14) = v9;
            *(_DWORD*)((char*)&v13_.v14 + 2) =
                *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
            v12 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
            v13_.v16 = v10;
            v13_.v15 = v11;
            *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
            HIWORD(v13_.v14) = v12;
            *(_WORD*)(v6 + 14) = v12 + v5 / 60;
            *(_WORD*)(v6 + 16) = v11 + v5 % 60;
            Dir_70d7a0(v8);
            *(_DWORD*)(v6 + 44) = 0;
            return GameRoutine_86b4e0(&v13_.v13);
          }
        }
      }
    }
  }
  return result;
}

__int64 game_facility_1410d30()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2242118,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2242118) != 0) {
    WORD2(GameData_224210c) = 0;
    GameData_2242104 = 0xBF800000BF800000LL;
    LODWORD(GameData_224210c) = -1082130432;
    __cxa_guard_release((__int64)GameData_2131330);
  }
  LODWORD(GameData_2242760) = 0;
  BYTE4(GameData_2242760) = 0;
  GameData_2242770 = GameData_224210c;
  GameData_2242748 = 0xB8B8E59A80E90CLL;
  GameData_2242768 = GameData_2242104;
  GameData_2242774 = WORD2(GameData_224210c);
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
