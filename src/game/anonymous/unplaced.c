#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_18c4dd0(_QWORD* result, __int64, int, int);
_QWORD* GameRoutine_18c5140(_QWORD* result, int, int);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__attribute__((swiftcall)) void game_sound_80e4d0(PSEUDO_X8, __int64, __int64);
__int64** game_8aef60(__int64**, unsigned __int16*, __n128);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9c00(_QWORD*, __int64);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_6e9a40(_QWORD*);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_8206b0(__int64 result);
__int64 GameRoutine_89b900(_QWORD);
__int64 GameRoutine_95f930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_961420(__int64, _BYTE**, __int64);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 Impl_717b40();
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       long double);
__int64 ProcInst_657ca0(__int64 result, char, float);
__int64 ProcList_9bd480(__int64);
__int64 UnitActor_81b190(__int64, float);
__int64 UnitItem_6e91b0(__int64, __int64, long double);
__int64 Unit_6de0b0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_UnitActor_TryReload(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_os_UnlockMutex(_QWORD);
char* GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
char* game_util_Format(__int64, ...);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212d4d8;
extern _UNKNOWN GameData_1af1404;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82f30;
extern __int64 (*GameData_201d538[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212ea58;
extern __int64* GameData_21309c8[5];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern int* GameData_212d4d0;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned __int64 GameRoutine_6eafc0();
void GameRoutine_717660();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_892b20();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_anonymous_1261f00(float*, unsigned __int64);
__int64 game_anonymous_81ef20(__int64 result, __int64 a2);
__int64* game_anonymous_87c960(__int64 a1);
__int64 game_anonymous_87d710();
__int64 game_anonymous_87d880();
__attribute__((swiftcall)) void
game_anonymous_88d050(PSEUDO_X8 x8_, unsigned __int16* result, __int16* a2);
__attribute__((swiftcall)) void game_anonymous_88d260(PSEUDO_X8 x8_,
                                                      __int64 result);
__int64 game_anonymous_892b40(__int64 result, __int64* a2, __int64 a3);
void game_anonymous_8b17e0(__int64 a1, long double a2);
__int64 game_anonymous_8b34e0(__int64 a1, __int64* a2);
__int64 game_anonymous_8b9560(__int64 a1);
__int64 game_anonymous_12543a0(__int64 result);
__int64 game_anonymous_1254520(__int64 result);
__int64 game_anonymous_12625e0(float* a1, int* a2);
void game_anonymous_1262820(float* a1, int* a2, int* a3, int* a4);
__int64 game_anonymous_12669e0(__int64 result, __int64 a2, __int64 a3,
                               _QWORD* a4);

__int64 game_anonymous_81ef20(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v3 = GameData_212d4d0;
  if ((explicit & 1) == 0) {
    v14 = result;
    v15 = a2;
    v16 = __cxa_guard_acquire(GameData_212d4d8);
    a2 = v15;
    v17 = v16;
    result = v14;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "CharacterMaterial", 0x11u);
      __cxa_guard_release(GameData_212d4d8);
      a2 = v15;
      result = v14;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = *(_DWORD*)(result + 8);
          v9 = *(_QWORD*)(*(_QWORD*)(v7 + 240) + 24LL);
          if (v8 == 1) {
            *(_WORD*)(v7 + 113) = 256;
          }
          v10 = *(__int64**)(v9 + 312);
          v11 = *(__int64**)(v9 + 320);
          if (v10 != v11) {
            v12 = (float)v8;
            do {
              v13 = *v10;
              v10 += 2;
              result = (*(__int64 (**)(__int64, const char*, __int64, float))(
                  *(_QWORD*)v13 + 16LL))(v13, "Game_RimPattern", 15, v12);
            } while (v10 != v11);
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64* game_anonymous_87c960(__int64 a1)
{
  char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  int v11;
  __int64 v12;
  unsigned __int8 v13;
  int v14;
  unsigned __int8 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64* result;
  int v25;
  __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
    char* v29;
  } v27_;

  v2 = game_util_Format((__int64)"%s/%s", "000", "Auto");
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_45;
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6, 16,
                                               0);
    v27_.v28 = v4;
    v27_.v29 = v5;
    v27_.v27 = v6 | 1;
    goto LABEL_9;
  }
  LOBYTE(v27_.v27) = 2 * v3;
  v5 = (char*)&v27_.v27 + 1;
  if (v3 != 0) {
  LABEL_9:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v7 = *(__int64**)(a1 + 160);
  if ((unsigned __int64)v7 >= *(_QWORD*)(a1 + 168)) {
    v10 = Manager_66cc20((__int64*)(a1 + 152), &v27_.v27);
    v11 = v27_.v27 & 1;
    *(_QWORD*)(a1 + 160) = v10;
    if (v11 == 0) {
      goto LABEL_20;
    }
  }
  else {
    if ((v27_.v27 & 1) == 0) {
      v8 = v27_.v27;
      v9 = (__int64)v27_.v29;
      v7[1] = v27_.v28;
      v7[2] = v9;
      *v7 = v8;
      *(_QWORD*)(a1 + 160) = v7 + 3;
      goto LABEL_20;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 160), (__int64)v27_.v29,
                                  v27_.v28);
    *(_QWORD*)(a1 + 160) = v7 + 3;
  }
  if (v27_.v29 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v27_.v29);
  }
LABEL_20:
  v13 = 4;
  if (game_GameModeData_instance_ != 0) {
    v14 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v15 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    if (v14 == 2) {
      v13 = 5;
    }
    else {
      v13 = 4;
    }
  }
  else {
    v15 = 0;
    v14 = 0;
  }
  v16 = GameRoutine_874b20(v13, v15, v14, 0);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_45:
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v27_.v28 = v18;
    v27_.v29 = v19;
    v27_.v27 = v20 | 1;
    goto LABEL_33;
  }
  LOBYTE(v27_.v27) = 2 * v17;
  v19 = (char*)&v27_.v27 + 1;
  if (v17 != 0) {
  LABEL_33:
    memmove(v19, v16, v18);
  }
  v19[v18] = 0;
  v21 = *(__int64**)(a1 + 160);
  if ((unsigned __int64)v21 >= *(_QWORD*)(a1 + 168)) {
    result = Manager_66cc20((__int64*)(a1 + 152), &v27_.v27);
    v25 = v27_.v27 & 1;
    *(_QWORD*)(a1 + 160) = result;
    if (v25 == 0) {
      return result;
    }
  }
  else {
    if ((v27_.v27 & 1) == 0) {
      v22 = v27_.v27;
      v23 = (__int64)v27_.v29;
      v21[1] = v27_.v28;
      v21[2] = v23;
      *v21 = v22;
      *(_QWORD*)(a1 + 160) = v21 + 3;
      return v21 + 3;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 160), (__int64)v27_.v29,
                                  v27_.v28);
    result = v21 + 3;
    *(_QWORD*)(a1 + 160) = v21 + 3;
  }
  if (v27_.v29 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v27_.v29);
  }
  return result;
}

__int64 game_anonymous_87d710()
{
  GameRoutine_717660();
  return GameRoutine_6e9a40((_QWORD*)GameData_21ca310);
}

__int64 game_anonymous_87d880()
{
  GameRoutine_6eafc0();
  return Impl_717b40();
}

__attribute__((swiftcall)) void

game_anonymous_88d050(PSEUDO_X8 x8_, unsigned __int16* result, __int16* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int v4;
  int v5;
  int v6;
  __int16 v7;
  int v8;
  int v9;
  __int16 v10;
  int v11;
  int v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  int v16;
  __int64 v17;
  __int16 v18;
  int v19;

  v3 = *((_QWORD*)result + 3);
  v4 = *(__int16*)(v3 + 96);
  v5 = *(__int16*)(v3 + 98);
  v6 = *(__int16*)(v3 + 100);
  if (v5 * v4 * v6 != 0) {
    *(_WORD*)(a3 + 2) = v5;
    v7 = *(_WORD*)(v3 + 102);
    v8 = *(_DWORD*)(v3 + 104);
    *(_WORD*)a3 = v4;
    *(_WORD*)(a3 + 4) = v6;
    *(_WORD*)(a3 + 6) = v7;
    *(_DWORD*)(a3 + 8) = v8;
  }
  else {
    v9 = (__int16)result[47];
    v10 = *a2;
    if (v9 < 0) {
      v18 = a2[1];
      *(_WORD*)a3 = v10;
      *(_WORD*)(a3 + 2) = v18;
      v19 = *((_DWORD*)a2 + 2);
      *(_DWORD*)(a3 + 4) = *((_DWORD*)a2 + 1);
      *(_DWORD*)(a3 + 8) = v19;
    }
    else {
      v11 = a2[3];
      v12 = a2[4];
      v13 = a2[1];
      v14 = a2[2];
      v15 = a2[5];
      *(_WORD*)a3 = v10;
      v16 = v12 + 100 * v11;
      *(_WORD*)(a3 + 2) = v13;
      *(_WORD*)(a3 + 4) = v14;
      *(_WORD*)(a3 + 6) = v11;
      *(_WORD*)(a3 + 8) = v12;
      *(_WORD*)(a3 + 10) = v15;
      if (v16 != v9) {
        if (v16 > v9) {
          *(_DWORD*)(a3 + 6) = 0;
          *(_WORD*)(a3 + 10) = 0;
          v17 = a3;
          *(_WORD*)(a3 + 4) = v14 + 1;
          result = Dir_70d7a0((unsigned __int16*)a3);
          a3 = v17;
        }
        *(_WORD*)(a3 + 10) = 0;
        *(_WORD*)(a3 + 6) = (unsigned __int16)v9 / 0x64u;
        *(_WORD*)(a3 + 8) = (unsigned __int16)v9 % 0x64u;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_anonymous_88d260(PSEUDO_X8 x8_,
                                                      __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*(_BYTE*)(result + 33) == 6) {
    v3 = result;
    v4 = nullptr;
    v5 = 0;
    v6 = result;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (*(unsigned __int8*)(v6 + 33) != *(unsigned __int8*)(v3 + 33)) {
        break;
      }
      v9 = a2[2];
      if ((unsigned __int64)v4 < v9) {
        *v4++ = v6;
      }
      else {
        v10 = (char*)v4 - v5;
        v11 = ((__int64)v4 - v5) >> 3;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
          *a2 = v5;
          GameRoutine_892b20();
        }
        v13 = v9 - v5;
        if (v13 >> 2 > v12) {
          v12 = v13 >> 2;
        }
        v14 = (unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL
                  ? 0x1FFFFFFFFFFFFFFFLL
                  : v12;
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            *a2 = v5;
            GameRoutine_60a210();
          }
          v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 8 * v14;
        v17 = (char*)v4 - v5;
        v18 = (__int64)&v10[v15 + -8 * v11];
        *(_QWORD*)&v10[v15] = v6;
        v4 = (__int64*)&v10[v15 + 8];
        result = memcpy(v18, v5, v17);
        a2[1] = (__int64)v4;
        a2[2] = v16;
        if (v5 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v7 + v19, v5);
        }
        v5 = v18;
      }
      v8 = *(_QWORD*)(v6 + 24);
      a2[1] = (__int64)v4;
      v6 = *(_QWORD*)(v8 + 16);
    } while (v6 != 0);
    *a2 = v5;
  }
  {
    result;
    return;
  }
}

__int64 game_anonymous_892b40(__int64 result, __int64* a2, __int64 a3)
{
  __int64* i;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;

  if ((__int64*)result != a2) {
    for (i = (__int64*)result; i != a2; ++i) {
      v8 = *i;
      LODWORD(v19) = 241;
      v20 = v8;
      result = game_UnitPool_Find_6ead60(&v20, &v19);
      if (result != 0) {
        v10 = *(_QWORD*)(result + 440);
        if (v10 == 0 || *(_BYTE*)(v10 + 16) != 6) {
          continue;
        }
        v11 = game_GameModeData_instance_;
        LOBYTE(v19) = 4;
        if (game_GameModeData_instance_ != 0) {
          v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (*(_QWORD*)(result + 392) == v11 ||
            (*(_BYTE*)(result + 418) & 8) != 0) {
          v14 = 0;
        }
        else {
          v12 = result;
          LODWORD(v20) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
          v13 = game_HasSkill(result + 1744, &v20) ^ 1;
          result = v12;
          v14 = v13 | ((unsigned __int8)v19 == 9);
        }
        v7 = v14 & 1;
      }
      else {
        v15 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
        if (v15 == 0) {
          continue;
        }
        v16 = *(_QWORD*)(a3 + 32);
        v19 = v8;
        v20 = v15;
        if (v16 == 0) {
          GameRoutine_60a310(0, v9);
        }
        (*(void (**)(__int64, __int64*, __int64*))(*(_QWORD*)v16 + 48LL))(
            v16, &v20, &v19);
        v17 = game_GameModeData_instance_;
        LOBYTE(v19) = 4;
        if (game_GameModeData_instance_ != 0) {
          v17 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (*(_QWORD*)(v15 + 392) == v17 || (*(_BYTE*)(v15 + 418) & 8) != 0) {
          v6 = 0;
        }
        else {
          LODWORD(v20) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
          v18 = game_HasSkill(v15 + 1744, &v20) ^ 1;
          v6 = v18 | ((unsigned __int8)v19 == 9);
        }
        v7 = v6 & 1;
        result = v15;
      }
      result = GameRoutine_6c47b0(result, &v19, v7, 0);
    }
  }
  return result;
}

void game_anonymous_8b17e0(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  char v10;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int16* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int16* v22;
  __int64 v23;
  int v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  unsigned int* v28;
  unsigned int* v29;
  int v30;
  int v31;
  int v32;
  float v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  char v37;
  int v38;
  int v39;
  float v40;
  float32x4_t v41;
  float32x4_t v42;

  v2 = *(_QWORD*)(a1 + 264);
  if (v2 != 0) {
    v4 = *(_QWORD*)(v2 + 440);
    if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 3u &&
        game_script_map_effect_g_sequence != 0) {
      v6 = *(_QWORD*)(game_script_map_effect_g_sequence + 8);
      v5 = *(_QWORD*)(game_script_map_effect_g_sequence + 16);
      if (v6 > v5) {
        goto LABEL_8;
      }
      while (*(_BYTE*)v5 != 2) {
        v5 -= 64LL;
        if (v6 > v5) {
          goto LABEL_8;
        }
      }
      if (*(_DWORD*)(v5 + 32) != 2) {
      LABEL_8:
        v7 = *(_QWORD*)(a1 + 152);
        v8 = *(int*)(a1 + 256);
        if (v7 != 0) {
          v9 = (unsigned __int16*)(v7 + 8 * v8 + 828);
          if (*v9 == 0) {
            return;
          }
        }
        else {
          v9 =
              (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            game_TransporterConst_List_instance__ptr
                                                                [0] +
                                                        8LL) +
                                             8LL) +
                                  12LL * (int)v8 + 4);
          if (*v9 == 0) {
            return;
          }
        }
        UnitActor_81b190(*(_QWORD*)(a1 + 264), 0x0.0p+0f);
        v10 = GameRoutine_8206b0(*GameData_212cfd0[0]);
        v16 = GameData_212c878[0];
        if (v10 != 0) {
          v17 = *(_QWORD*)(a1 + 152);
          v18 = *(int*)(a1 + 256);
          if (v17 != 0) {
            v19 = (unsigned __int16*)(v17 + 8 * v18 + 828);
          }
          else {
            v19 =
                (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              game_TransporterConst_List_instance__ptr
                                                                  [0] +
                                                          8LL) +
                                               8LL) +
                                    12LL * (int)v18 + 4);
          }
          if (GameRoutine_961420(
                  a1,
                  (_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *v19) +
                            408LL),
                  *(_QWORD*)(a1 + 264)) != 0) {
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v31 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v32 = 2)
                     : (v32 = 3),
                 (v32 & v31) != 0)) {
              v33 = *(float*)(a1 + 144);
              *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
              if (v33 < 0x1.2000000000000p+4f) {
                v33 = 0x1.2000000000000p+4f;
              }
              *(float*)(a1 + 144) = v33;
            }
          }
        LABEL_50:
          v34 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * *v9);
          if (*(_BYTE*)(v34 + 73) == 2) {
            v35 = *(_QWORD*)(a1 + 264);
            if (v35 != 0) {
              v36 = *(unsigned __int8*)(v34 + 88);
              v37 = *((_BYTE*)v9 + 3);
              UnitActor_81d430((void*)(&v42), v35);
              if (*GameData_212d570[0] != 0) {
                GameRoutine_18c4dd0(*(_QWORD**)GameData_212d570[0],
                                    (__int64)&v42, -(v36 >> ((v37 & 8) != 0)),
                                    0);
              }
            }
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v39 = 2)
                     : (v39 = 3),
                 (v39 & v38) != 0)) {
              v40 = *(float*)(a1 + 144);
              *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
              if (v40 < 0x1.8000000000000p+3f) {
                v40 = 0x1.8000000000000p+3f;
              }
              *(float*)(a1 + 144) = v40;
            }
          }
          return;
        }
        v26 = *(_QWORD**)(a1 + 264);
        if (v26 != nullptr) {
          v27 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *v9) +
                           24LL);
          v28 = *(unsigned int**)(v27 + 424);
          v29 = *(unsigned int**)(v27 + 432);
          if (v28 == v29) {
          LABEL_33:
            if ((GameRoutine_6c9c00(v26, v27 + 296) & 1) == 0) {
              goto LABEL_48;
            }
            v30 = 1024;
          }
          else {
            while ((game_HasSkill_alt1(v26 + 170, v28) & 1) == 0) {
              if (++v28 == v29) {
                v27 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * *v9) +
                                 24LL);
                goto LABEL_33;
              }
            }
            v30 = 0x2000;
          }
          GameRoutine_18c5140(*(_QWORD**)(a1 + 264), 0, v30);
          ProcInst_657ca0(a1, 2, 0x1.99999a0000000p-3f);
        }
      LABEL_48:
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * *v9) + 73LL) ==
            2) {
          game_sound_80e4d0((void*)((__int64)&v42),
                            (__int64)"SE_ACT_LD_Hit_Recovery_Common",
                            *(_QWORD*)(a1 + 264));
        }
        goto LABEL_50;
      }
    }
  }
  if (*GameData_212ea58 == 0) {
    return;
  }
  v20 = *(_QWORD*)(a1 + 152);
  v21 = *(int*)(a1 + 256);
  if (v20 != 0) {
    v22 = (unsigned __int16*)(v20 + 8 * v21 + 828);
    if (*v22 == 0) {
      return;
    }
  }
  else {
    v22 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v21 + 4);
    if (*v22 == 0) {
      return;
    }
  }
  if ((UnitItem_6e91b0((__int64)v22, v2, a2) & 1) == 0) {
    return;
  }
  UnitActor_81d430((void*)(&v41), *(_QWORD*)(a1 + 264));
  v42 = vaddq_f32(v41, COERCE_AS(float32x4_t, GameData_1a82f30));
  v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v22);
  v24 = *(unsigned __int8*)(v23 + 73);
  if (v24 == 2) {
    v25 = 0;
  }
  else {
    if (v24 != 3) {
      return;
    }
    v25 = 64;
  }
  if (*GameData_212d570[0] != 0) {
    GameRoutine_18c4dd0(
        *(_QWORD**)GameData_212d570[0], (__int64)&v42,
        -(*(unsigned __int8*)(v23 + 88) >> ((*((_BYTE*)v22 + 3) & 8) != 0)),
        v25);
  }
}

__int64 game_anonymous_8b34e0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _DWORD v29[2];
  __int64 v30;
  _QWORD v31[2];

  result = *a2;
  v5 = *((int*)a2 + 2);
  if (result != 0) {
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL *
                                  *(unsigned __int16*)(result + 8 * v5 + 828)) +
                   352LL) == 0) {
      return result;
    }
    Unit_6de0b0();
    result = game_UnitActor_TryReload(*a2);
    v6 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0) {
      v7 = *a2;
      if (*a2 != 0 && *(_BYTE*)(v6 + 8) == 1 && (*(_BYTE*)(v6 + 9) & 1) == 0) {
        v8 = *(_QWORD*)(v7 + 440);
        if (v8 != 0 && *(unsigned __int8*)(v8 + 16) <= 8u &&
            game_map_UnitFlags_instance_ != 0) {
          v9 = *(unsigned __int8*)(v7 + 2088);
          if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) & 1) != 0) {
            *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) |= 2u;
          }
        }
      }
    }
  }
  else {
    v10 = game_TransporterConst_List_instance__ptr[0];
    result =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v11 = *(_QWORD*)(result + 8);
    v12 = GameData_212c878[0];
    v13 = *GameData_212c878[0];
    v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)(v11 + 12LL * (int)v5 + 4));
    v15 = *(_QWORD*)(v14 + 352);
    if (v15 == 0) {
      return result;
    }
    if ((v5 & 0x80000000) == 0 && *(_WORD*)(v11 + 12LL * (int)v5 + 4) != 0) {
      v16 = v11 + 12LL * (int)v5;
      v17 = *(unsigned __int16*)(v16 + 2);
      if ((((0x10000000000LL << *(_BYTE*)(v14 + 72)) |
            (1LL << *(_BYTE*)(v14 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v18 = 1;
      }
      else {
        v18 = 999;
      }
      if (v18 >= v17 - 1) {
        LOWORD(v18) = v17 - 1;
      }
      if (*(_WORD*)(v16 + 2) == 0) {
        LOWORD(v18) = 0;
      }
      *(_WORD*)(v16 + 2) = v18;
      v13 = *v12;
      if ((_WORD)v18 == 0) {
        v19 = *(_QWORD*)(result + 8) + 12LL * (int)v5;
        v20 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                         8LL * *(unsigned __int16*)(v19 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v20 + 72)) |
              (1LL << *(_BYTE*)(v20 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          *(_QWORD*)(v19 + 4) = 0;
        }
        *(_WORD*)(v19 + 2) = 0;
        GameRoutine_89b900(result);
        v13 = *v12;
      }
    }
    v21 = *(_QWORD*)(v13 + 64);
    v30 = 0x100000000LL;
    LOWORD(v30) = *(_WORD*)(v15 + 16);
    if (*(_BYTE*)(*(_QWORD*)(v21 + 8LL * (unsigned __int16)v30) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v22 = game_map_MapRandom_instance__ptr[0];
      v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v22 + 1) = v23;
      v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v30) =
          (16 * ((_WORD)v26 -
                 1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    result = X8CALL_X0(__int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                                    (void*)((__int64)v29),
                                    *(_QWORD*)(*(_QWORD*)v10 + 8LL),
                                    (unsigned __int16*)&v30, 1));
    if ((v29[1] & 0x80000000) == 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                             8LL * (unsigned __int16)v30) +
                  73LL) == 13) {
      v31[1] = &GameData_1af1404;
      v31[0] = game_HashString(&GameData_1af1404, v27);
      result = GameRoutine_9b11a0(&GameData_21f61c0, v31, 1);
    }
    v28 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v28 + 8) == 1 &&
        (*(_BYTE*)(v28 + 9) & 1) == 0) {
      *(_DWORD*)(v28 + 12) |= 0x40u;
    }
  }
  **(_BYTE**)(a1 + 8) = 1;
  return result;
}

__int64 game_anonymous_8b9560(__int64 a1)
{
  __n128 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  GameRoutine_95f930(2, *(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160));
  v3 = *(_QWORD*)(a1 + 160);
  v16 = 0;
  v4 = *(_QWORD*)(v3 + 480);
  if (v4 != 0) {
    v5 = *(unsigned __int16*)(v4 + 16);
    HIDWORD(v16) = 1;
    LOWORD(v16) = v5;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v6 = game_map_MapRandom_instance__ptr[0];
      v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v9 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v6 + 1) = v7;
      v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v8;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v10;
      v2 = nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v16) =
          (16 * ((_WORD)v10 -
                 1000 * (unsigned __int16)((v10 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v14 = nullptr;
    v15 = 0;
    v13 = nullptr;
    if ((_DWORD)v5 != 0) {
      game_8aef60(&v13, (unsigned __int16*)&v16, v2);
    }
  }
  else {
    v14 = nullptr;
    v15 = 0;
    v13 = nullptr;
  }
  result = ItemSeq_8af940(a1, &v13, 0, game_vstring_kEmpty_ptr[0],
                          game_vstring_kEmpty_ptr[0], 0, *(long double*)&v2);
  if (v13 != nullptr) {
    v14 = v13;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v13);
  }
  return result;
}

__int64 game_anonymous_12543a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v1 = **(_QWORD**)(result + 152);
  if (*(_BYTE*)(v1 + 112) == 5 && *(_WORD*)(v1 + 552) != 0) {
    result = ProcList_9bd480(result);
    if (result != 0 && *(_WORD*)(v1 + 552) != 0) {
      v2 = 8LL * *(unsigned __int16*)(v1 + 552);
      v3 = result;
      for (i = 0; v2 != i; i += 8) {
        v6 = *(_QWORD*)(*(_QWORD*)(v1 + 560) + i);
        v7_.v8 = v7_.v7;
        v7_.v7[0] = GameData_201d538;
        v7_.v7[1] = v6;
        game_ProcList_Call_9bcfa0(v3, (__int64)v7_.v7);
        result = (__int64)v7_.v8;
        if (v7_.v8 == v7_.v7) {
          v5 = 32;
        }
        else {
          if (v7_.v8 == nullptr) {
            continue;
          }
          v5 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v7_.v8 + v5))((__int64)v7_.v8);
      }
    }
  }
  return result;
}

__int64 game_anonymous_1254520(__int64 result)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  v1 = *(_QWORD*)(**(_QWORD**)(result + 152) + 496LL);
  if (v1 != 0 && GameData_21ec7b8 == 0) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770(v4, v1, 0);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = game_HashString32("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

__int64 game_anonymous_12625e0(float* a1, int* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  _BOOL8 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;

  v3 = *a2;
  v4 = *((_QWORD*)a1 + 1);
  if (v4 != 0) {
    v6 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v2 = v3;
      if (v4 <= v3) {
        v2 = v3 % v4;
      }
    }
    else {
      v2 = v6 & v3;
    }
    v7 = *(__int64**)(*(_QWORD*)a1 + 8 * v2);
    if (v7 != nullptr) {
      v8 = *v7;
      if (*v7 != 0) {
        if ((v4 & v6) == 0) {
          while (1) {
            v10 = *(_QWORD*)(v8 + 8);
            if (v10 == v3) {
              if (*(_DWORD*)(v8 + 16) == v3) {
                return v8 + 24;
              }
            }
            else if ((v10 & v6) != v2) {
              goto LABEL_22;
            }
            v8 = *(_QWORD*)v8;
            if (v8 == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v9 = *(_QWORD*)(v8 + 8);
          if (v9 == v3) {
            if (*(_DWORD*)(v8 + 16) == v3) {
              return v8 + 24;
            }
          }
          else {
            if (v9 >= v4) {
              v9 %= v4;
            }
            if (v9 != v2) {
              break;
            }
          }
          v8 = *(_QWORD*)v8;
        } while (v8 != 0);
      }
    }
  }
LABEL_22:
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  v12 = *((_QWORD*)a1 + 3);
  v13 = a1[8];
  v8 = v11;
  *(_QWORD*)(v11 + 8) = v3;
  *(_DWORD*)(v11 + 16) = v3;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  v14 = (float)(unsigned __int64)(v12 + 1);
  if (v4 == 0 || (float)(v13 * (float)v4) < v14) {
    v15 = v14 / v13;
    v16 = true;
    if (v4 >= 3) {
      v16 = (v4 & (v4 - 1)) != 0;
    }
    v17 = v16 | (2 * v4);
    v18 = vcvtps_u64_f32(v15);
    if (v17 <= v18) {
      v19 = v18;
    }
    else {
      v19 = v17;
    }
    game_anonymous_1261f00(a1, v19);
    v4 = *((_QWORD*)a1 + 1);
    if ((v4 & (v4 - 1)) != 0) {
      if (v4 <= v3) {
        v2 = v3 % v4;
      }
      else {
        v2 = v3;
      }
    }
    else {
      v2 = (v4 - 1) & v3;
    }
  }
  v20 = *(_QWORD*)a1;
  v21 = *(__int64**)(*(_QWORD*)a1 + 8 * v2);
  if (v21 != nullptr) {
    *(_QWORD*)v8 = *v21;
    *v21 = v8;
  }
  else {
    v22 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v8;
    *(_QWORD*)v8 = v22;
    *(_QWORD*)(v20 + 8 * v2) = a1 + 4;
    if (v22 != 0) {
      v23 = *(_QWORD*)(v22 + 8);
      if ((v4 & (v4 - 1)) != 0) {
        if (v23 >= v4) {
          v23 %= v4;
        }
      }
      else {
        v23 &= v4 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v23) = v8;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v8 + 24;
}

void game_anonymous_1262820(float* a1, int* a2, int* a3, int* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  _QWORD* v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;

  v5 = *a2;
  v6 = *((_QWORD*)a1 + 1);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = v5;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (*((_DWORD*)v12 + 4) == v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (*((_DWORD*)v12 + 4) == v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  v16 = *a3;
  v17 = *a4;
  v18 = a1[8];
  v19 = (_QWORD*)v15;
  *(_QWORD*)(v15 + 8) = v5;
  *(_DWORD*)(v15 + 16) = v5;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_DWORD*)(v15 + 24) = v16;
  *(_DWORD*)(v15 + 28) = v17;
  v20 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    game_anonymous_1261f00(a1, v25);
    v6 = *((_QWORD*)a1 + 1);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v26 = *(_QWORD*)a1;
  v27 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v27 != nullptr) {
    *v19 = *v27;
    *v27 = v19;
  }
  else {
    v28 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v19;
    *v19 = v28;
    *(_QWORD*)(v26 + 8 * v4) = a1 + 4;
    if (v28 != 0) {
      v29 = *(_QWORD*)(v28 + 8);
      if ((v6 & (v6 - 1)) != 0) {
        if (v29 >= v6) {
          v29 %= v6;
        }
      }
      else {
        v29 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = v19;
    }
  }
  ++*((_QWORD*)a1 + 3);
}

__int64 game_anonymous_12669e0(__int64 result, __int64 a2, __int64 a3,
                               _QWORD* a4)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;

  if (a2 == a3) {
    return result;
  }
  v6 = a2;
  v7 = result;
  do {
    v8 = a4[1];
    if (v8 == 0 || a4[3] == 0) {
      goto LABEL_26;
    }
    v10 = v8 - 1;
    v11 = *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) + 600LL) +
                           16LL);
    if ((v8 & (v8 - 1)) != 0) {
      v12 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) +
                                            600LL) +
                                 16LL);
      if (v8 <= v11) {
        v12 = (unsigned int)v11 % (unsigned __int16)a4[1];
      }
    }
    else {
      v12 = ((_DWORD)v8 - 1) & (unsigned int)v11;
    }
    v13 = *(__int64***)(*a4 + 8 * v12);
    if (v13 == nullptr || (v14 = *v13) == nullptr) {
    LABEL_26:
      v22 = 0;
      result = GameRoutine_6e5900(v7, &v22);
      goto LABEL_27;
    }
    if ((v8 & v10) == 0) {
      while (1) {
        v16 = v14[1];
        if (v16 == v11) {
          if (*((_DWORD*)v14 + 4) == (_DWORD)v11) {
            goto LABEL_29;
          }
        }
        else if ((v16 & v10) != v12) {
          goto LABEL_26;
        }
        v14 = (__int64*)*v14;
        if (v14 == nullptr) {
          goto LABEL_26;
        }
      }
    }
    while (1) {
      v15 = v14[1];
      if (v15 == v11) {
        break;
      }
      if (v15 >= v8) {
        v15 %= v8;
      }
      if (v15 != v12) {
        goto LABEL_26;
      }
    LABEL_16:
      v14 = (__int64*)*v14;
      if (v14 == nullptr) {
        goto LABEL_26;
      }
    }
    if (*((_DWORD*)v14 + 4) != (_DWORD)v11) {
      goto LABEL_16;
    }
  LABEL_29:
    if ((v8 & v10) != 0) {
      v17 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 24LL) +
                                            600LL) +
                                 16LL);
      if (v8 <= v11) {
        v17 = v11 % v8;
      }
    }
    else {
      v17 = ((_DWORD)v8 - 1) & (unsigned int)v11;
    }
    v18 = *(__int64***)(*a4 + 8 * v17);
    if (v18 == nullptr || (v19 = *v18) == nullptr) {
    LABEL_50:
      String_60a250("unordered_map::at: key not found");
    }
    if ((v8 & v10) == 0) {
      while (1) {
        v21 = v19[1];
        if (v21 == v11) {
          if (*((_DWORD*)v19 + 4) == (_DWORD)v11) {
            goto LABEL_48;
          }
        }
        else if ((v21 & v10) != v17) {
          goto LABEL_50;
        }
        v19 = (__int64*)*v19;
        if (v19 == nullptr) {
          goto LABEL_50;
        }
      }
    }
    while (2) {
      v20 = v19[1];
      if (v20 != v11) {
        if (v20 >= v8) {
          v20 %= v8;
        }
        if (v20 != v17) {
          goto LABEL_50;
        }
      LABEL_38:
        v19 = (__int64*)*v19;
        if (v19 == nullptr) {
          goto LABEL_50;
        }
        continue;
      }
      break;
    }
    if (*((_DWORD*)v19 + 4) != (_DWORD)v11) {
      goto LABEL_38;
    }
  LABEL_48:
    result = GameRoutine_7d6200(v7, (char*)v19 + 20);
  LABEL_27:
    v6 += 8;
  } while (v6 != a3);
  return result;
}

#pragma GCC visibility pop
