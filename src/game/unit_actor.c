#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* game_UnitActor_CreateLegionCharacter_alt1(
    _QWORD* result,
    unsigned __int8*) __asm__("game_UnitActor_CreateLegionCharacter");
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 CharacterAnimator_1079e10(_QWORD);
__int64 CharacterAppearance_10735d0(_QWORD);
__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_107e140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1084940(_QWORD, _QWORD, float);
__int64 GameRoutine_108c9c0(_QWORD);
__int64 GameRoutine_10e8690(void);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 GameRoutine_734a80(_QWORD, _QWORD);
__int64 GameRoutine_819a50(_QWORD);
__int64 GameRoutine_819c20(_QWORD);
__int64 GameRoutine_819c20_alt1(__int64 result) __asm__("GameRoutine_819c20");
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81b840(__int64 result);
__int64 GameRoutine_81c600(__int64 result);
__int64 GameRoutine_81f4e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8680c0(void);
__int64 GameRoutine_960f80(_QWORD);
__int64 GameRoutine_9664e0(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_d2b5f0(_QWORD);
__int64 TrickEntity_7d1480(__int64 result);
__int64 UnitActor_81a040_alt1(_QWORD, _QWORD) __asm__("UnitActor_81a040");
__int64 UnitActor_81de20_alt1(_QWORD, _QWORD) __asm__("UnitActor_81de20");
__int64 UnitActor_81e380_alt1(_QWORD, _QWORD) __asm__("UnitActor_81e380");
__int64 UnitActor_81fb20_alt1(_QWORD, _QWORD) __asm__("UnitActor_81fb20");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_UnitActor_CreateLegionCharacter(_QWORD, _QWORD);
__int64 game_UnitActor_CreateMainCharacter_alt1(_QWORD, _QWORD) __asm__(
    "game_UnitActor_CreateMainCharacter");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
extern _DWORD* GameData_212d280;
extern _DWORD* game_g_shared_system_skills_ptr;
extern _QWORD GameData_1fb0230[4];
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1f9e310[])();
extern __int64 (*GameData_1f9e420[])();
extern __int64 (*GameData_1f9e490[])();
extern __int64 (*GameData_1f9e5a0[])();
extern __int64 (*GameData_1f9e620[])();
extern __int64 (*GameData_1f9e6a0[])();
extern __int64 (*GameData_1f9e820[])();
extern __int64 (*GameData_2007558[])();
extern __int64 (*GameData_2007658[])();
extern __int64 (*eft_ClampCurve_ptr)();
extern __int64 GameData_21cd0d0;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_ProcMapSeqBattleView_instance_;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cfe0[6];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_2130068[12];
float Cursor_734120(_QWORD, _QWORD, float, float);
float GameRoutine_107a200(_QWORD);
float GameRoutine_966340(_QWORD, _QWORD);
long double GameRoutine_81ba20(__int64, long double result);
struct PseudoSret GameRoutine_108e3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_81e590(_QWORD);
__int64 UnitActor_819160(__int64 a1);
__int64 UnitActor_819400(__int64 a1);
__int64 UnitActor_8194d0(__int64 result);
__int64 game_UnitActor_CreateMainCharacter(__int64 result, __int64 a2);
__int64 UnitActor_81a040(__int64 result, __int64* a2);
__int64 game_UnitActor_TryReload(_QWORD* a1);
bool UnitActor_81a7a0(__int64 a1);
__int64 UnitActor_81ae00(__int64 a1, float a2);
__int64 UnitActor_81aee0(__int64 a1, float a2);
__int64 UnitActor_81b040(__int64 a1, float a2);
__int64 UnitActor_81b190(__int64 a1, float a2);
__int64 UnitActor_81b2f0(__int64 a1);
__int64 game_UnitActor_UpdateAlpha(__int64 result);
__int64 UnitActor_81bdc0(__int64 result);
unsigned __int64 UnitActor_81c000(unsigned __int64 result, _BYTE* a2);
unsigned __int64 UnitActor_81c4a0(unsigned __int64 result, _BYTE* a2);
__int64 game_UnitActor_UpdateEffect(__int64 result, __int64 a2, __int64 a3);
void UnitActor_81d540(__int64 a1, long double a2);
__int64 game_UnitActor_FuncBuildCompleteSubscribe(_QWORD* a1, _QWORD* a2);
__int64 UnitActor_81de20(__int64 result, __int64* a2);
__int64 UnitActor_81e020(__int64 result, __int64* a2);
__int64 UnitActor_81e380(__int64 result, __int64 a2);
__int64 game_UnitActor_TryReload_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_UnitActor_UpdateColor_lambda0_Invoke(__int64 result, __int64* a2);
__int64 game_UnitActor_UpdateAlpha_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 UnitActor_81fb20(__int64* a1, unsigned __int64* a2);
__int64 game_UnitActor_FuncBuildCompleteSubscribe_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2);

__int64 UnitActor_819160(__int64 a1)
{
  long double v2;
  long double v3;
  int v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int128 v17;
  int v18;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v16 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v16;
    __cxa_guard_release(&GameData_21a6130);
  }
  v17 = GameData_21a6120;
  GameRoutine_734a80(a1 + 48, &v17);
  v4 = *(unsigned __int8*)(a1 + 136);
  v18 = 0;
  if (v4 == 1) {
    v5 = *(_QWORD*)(a1 + 112);
    v6 = a1 + 112;
    *(_QWORD*)&v2 = 0;
  LABEL_6:
    *(_QWORD*)&v3 = 0;
  LABEL_7:
    (*(void (**)(__int64, long double, long double))(v5 + 24))(v6, v2, v3);
    *(_QWORD*)(a1 + 120) = 0;
    *(_WORD*)(a1 + 136) = 256;
    goto LABEL_8;
  }
  if (*(float*)(a1 + 120) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 112) + 16LL))(a1 + 112);
    v5 = *(_QWORD*)(a1 + 112);
    v6 = a1 + 112;
    goto LABEL_6;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 112) + 8LL))(
           a1 + 112, &v18, a1 + 144) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 112) + 16LL))(a1 + 112);
    v5 = *(_QWORD*)(a1 + 112);
    LODWORD(v3) = v18;
    v6 = a1 + 112;
    goto LABEL_7;
  }
LABEL_8:
  v18 = 1065353216;
  if (*(_BYTE*)(a1 + 176) == 1) {
    v9 = *(_QWORD*)(a1 + 152);
    v10 = a1 + 152;
    LODWORD(v7) = 1.0;
  LABEL_12:
    LODWORD(v8) = 1.0;
  LABEL_13:
    (*(void (**)(__int64, long double, long double))(v9 + 24))(v10, v7, v8);
    *(_QWORD*)(a1 + 160) = 0;
    *(_WORD*)(a1 + 176) = 256;
    goto LABEL_14;
  }
  if (*(float*)(a1 + 160) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
    v9 = *(_QWORD*)(a1 + 152);
    v10 = a1 + 152;
    goto LABEL_12;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 152) + 8LL))(
           a1 + 152, &v18, a1 + 184) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
    v9 = *(_QWORD*)(a1 + 152);
    LODWORD(v8) = v18;
    v10 = a1 + 152;
    goto LABEL_13;
  }
LABEL_14:
  v18 = 1065353216;
  if (*(_BYTE*)(a1 + 216) == 1) {
    v13 = *(_QWORD*)(a1 + 192);
    v14 = a1 + 192;
    LODWORD(v11) = 1.0;
  LABEL_18:
    LODWORD(v12) = 1.0;
    goto LABEL_19;
  }
  if (*(float*)(a1 + 200) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 192) + 16LL))(a1 + 192);
    v13 = *(_QWORD*)(a1 + 192);
    v14 = a1 + 192;
    goto LABEL_18;
  }
  result = (*(__int64 (**)(__int64, int*, __int64))(
      *(_QWORD*)(a1 + 192) + 8LL))(a1 + 192, &v18, a1 + 224);
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 192) + 16LL))(a1 + 192);
    v13 = *(_QWORD*)(a1 + 192);
    LODWORD(v12) = v18;
    v14 = a1 + 192;
  LABEL_19:
    result = (*(__int64 (**)(__int64, long double, long double))(v13 + 24))(
        v14, v11, v12);
    *(_QWORD*)(a1 + 200) = 0;
    *(_WORD*)(a1 + 216) = 256;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_WORD*)(a1 + 20) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 128) = 0x300000005LL;
  return result;
}

__int64 UnitActor_819400(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  v1 = a1 + 232;
  if (*(_QWORD*)(a1 + 232) != 0) {
    UnitActor_81a040_alt1(a1, a1 + 232);
    GameRoutine_a867a0(v1);
  }
  v3 = *(_QWORD*)(a1 + 240);
  v4 = *(_QWORD*)(a1 + 248);
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  if (v4 != v3) {
    v5 = 0;
    v6 = 0;
    do {
      if (*(_QWORD*)(v3 + v5) != 0) {
        UnitActor_81a040_alt1(a1, v3 + v5);
        GameRoutine_a867a0(*(_QWORD*)(a1 + 240) + v5);
        v3 = *(_QWORD*)(a1 + 240);
        v4 = *(_QWORD*)(a1 + 248);
      }
      ++v6;
      v5 += 8;
    } while (v6 < (v4 - v3) >> 3);
    *(_QWORD*)(a1 + 248) = v3;
    v7 = *(_QWORD*)(a1 + 272);
    *(_QWORD*)(a1 + 296) = 0;
    *(_QWORD*)(a1 + 280) = v7;
  }
  return GameRoutine_819c20(a1);
}

__int64 UnitActor_8194d0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  _BYTE v6[480];

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v2 = result;
    v5 = "BMAP";
    AssetTableFile_7e9960((__int64)v6, v1, (__int64*)&v5);
    game_UnitActor_CreateMainCharacter_alt1(v2, v6);
    v3 = *(_QWORD*)(v2 + 8);
    if (*(_BYTE*)(v3 + 1944) != 0 &&
        *(_BYTE*)(*(_QWORD*)(v3 + 400) + 96LL) == 1) {
      v4 = GameData_212ceb0;
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL * *(unsigned __int8*)(v3 + 1944)) +
                              50LL) <=
              (unsigned int)*(unsigned __int8*)(v3 + 552) &&
          (game_GameModeData_instance_ == 0 ||
           (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
          *(_QWORD*)(v3 + 408) == 0) {
        v4 = (__int64*)(v3 + 1944);
      }
    }
    else {
      v4 = GameData_212ceb0;
    }
    game_UnitActor_CreateLegionCharacter(v2, v4);
    GameRoutine_819a50(v2);
    return TrickEntity_7d1480((__int64)v6);
  }
  return result;
}

__int64 game_UnitActor_CreateMainCharacter(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  if (*(_QWORD*)(result + 232) != 0) {
    return result;
  }
  v15 = v2;
  v16 = v3;
  v4 = result;
  *(_DWORD*)(result + 16) = GameRoutine_819f40(*(_QWORD*)(result + 8));
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v6[2] = 0;
  v7 = v6 + 3;
  v8 = v6;
  *v6 = GameData_212d3c8[0] + 2;
  v6[1] = 0;
  CharacterAppearance_10735d0(v6 + 3);
  v13 = v7;
  v14 = v8;
  GameRoutine_1072580(v7, a2);
  v11[0] = GameData_1f9e310;
  v11[1] = v4;
  v12 = v11;
  *(_QWORD*)(v4 + 232) = GameRoutine_10784f0(&v13, 0, v11);
  result = (__int64)v12;
  if (v12 == v11) {
    v9 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_7;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v12 + v9))((__int64)v12);
LABEL_7:
  v10 = v14;
  if (v14 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v14 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 UnitActor_81a040(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = *(__int64**)(result + 368);
  v2 = *(__int64**)(result + 376);
  v5 = result;
  v6 = v3;
  if (v3 != v2) {
    v6 = *(__int64**)(result + 368);
    while (1) {
      v7 = v6[1];
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        break;
      }
      v6 += 2;
      if (v6 == v2) {
        goto LABEL_21;
      }
    }
  }
  v8 = v6 + 2;
  if (v6 == v2 || v8 == v2) {
    if (v6 == v2) {
      goto LABEL_21;
    }
  }
  else {
    do {
      v10 = v8[1];
      if (v10 != 0 && *(_QWORD*)(v10 + 8) != -1) {
        v11 = *v8;
        *v8 = 0;
        v8[1] = 0;
        result = v6[1];
        *v6 = v11;
        v6[1] = v10;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v6 += 2;
      }
      v8 += 2;
    } while (v8 != v2);
    v3 = *(__int64**)(v5 + 368);
    v2 = *(__int64**)(v5 + 376);
    if (v6 == v2) {
    LABEL_21:
      v6 = v2;
      if (v3 == v2) {
        return result;
      }
      goto LABEL_27;
    }
  }
  for (; v2 != v6; v2 -= 2) {
    result = *(v2 - 1);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  v3 = *(__int64**)(v5 + 368);
  for (*(_QWORD*)(v5 + 376) = v6; v3 != v6; v3 += 2) {
  LABEL_27:
    result = v3[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v14 = result;
        if (*v3 != 0) {
          v15 = *(_QWORD*)(*v3 + 32);
          v16 = *a2;
          if (v15 == 0) {
            GameRoutine_60a310(0, v12, v13);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
              v15, &v16);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          result = std___1___shared_weak_count___release_weak(v14);
        }
      }
    }
  }
  return result;
}

__int64 game_UnitActor_TryReload(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v15;
  __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23[4];
  __int64* v24;
  _QWORD* v25;
  _QWORD* v26;
  _BYTE v27[472];
  __int64 v28;

  v1 = a1[1];
  if (v1 != 0 && (*(_BYTE*)(v1 + 419) & 8) != 0 ||
      *GameData_212cfe0[0] != 0 &&
          *(int*)(*(_QWORD*)(*GameData_212cfe0[0] + 8) + 8LL) > 0 ||
      a1[33] == 0) {
    return 0;
  }
  v23[0] = (__int64)"BMAP";
  AssetTableFile_7e9960((__int64)v27, v1, v23);
  v3 = a1[33];
  v4 = **(_QWORD**)(v3 + 584);
  if (v4 != 0 || (v4 = *(_QWORD*)(v3 + 392)) != 0) {
    v4 = *(_QWORD*)(v4 + 168);
  }
  if (v4 != v28) {
    if ((*(_BYTE*)(v3 + 264) & 1) != 0) {
      goto LABEL_13;
    }
    GameRoutine_10e8690();
    v5 = *(_QWORD*)(v3 + 240);
    v6 = *(_QWORD*)(v3 + 248);
    if (v5 == v6) {
    LABEL_12:
      *(_QWORD*)(v3 + 248) = v5;
      v3 = a1[33];
    LABEL_13:
      v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
      v7[2] = 0;
      v8 = v7 + 3;
      v9 = v7;
      *v7 = GameData_212d3c8[0] + 2;
      v7[1] = 0;
      CharacterAppearance_10735d0(v7 + 3);
      v25 = v8;
      v26 = v9;
      GameRoutine_1072580(v8, v27);
      v23[0] = (__int64)GameData_1f9e420;
      v23[1] = (__int64)a1;
      v24 = v23;
      GameRoutine_107e140(v3, &v25, v23);
      if (v24 == v23) {
        v10 = 32;
      }
      else {
        if (v24 == nullptr) {
        LABEL_27:
          v15 = v26;
          if (v26 != nullptr &&
              atomic_fetch_add((atomic_ullong* volatile)(v26 + 1),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak(v15);
          }
          goto LABEL_30;
        }
        v10 = 40;
      }
      (*(void (**)(void))(*v24 + v10))();
      goto LABEL_27;
    }
    while (1) {
      v11 = *(_QWORD**)(v6 - 16);
      if ((_QWORD*)(v6 - 48) == v11) {
        break;
      }
      if (v11 != nullptr) {
        v12 = 40;
      LABEL_21:
        (*(void (**)(void))(*v11 + v12))();
      }
      v13 = *(_QWORD*)(v6 - 64);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak(v13);
      }
      v6 -= 80;
      if (v6 == v5) {
        goto LABEL_12;
      }
    }
    v12 = 32;
    goto LABEL_21;
  }
LABEL_30:
  v16 = a1[1];
  if (*(_BYTE*)(v16 + 1944) != 0 &&
      *(_BYTE*)(*(_QWORD*)(v16 + 400) + 96LL) == 1) {
    v17 = (unsigned __int8*)GameData_212ceb0;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                       8LL * *(unsigned __int8*)(v16 + 1944)) +
                            50LL) <=
            (unsigned int)*(unsigned __int8*)(v16 + 552) &&
        (game_GameModeData_instance_ == 0 ||
         (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
        *(_QWORD*)(v16 + 408) == 0) {
      v17 = (unsigned __int8*)(v16 + 1944);
    }
  }
  else {
    v17 = (unsigned __int8*)GameData_212ceb0;
  }
  if (a1[37] != *(_QWORD*)v17) {
    v18 = a1[30];
    v19 = a1[31];
    if (v19 != v18) {
      v20 = 0;
      v21 = 0;
      do {
        if (*(_QWORD*)(v18 + v20) != 0) {
          UnitActor_81a040((__int64)a1, (__int64*)(v18 + v20));
          GameRoutine_a867a0(a1[30] + v20);
          v18 = a1[30];
          v19 = a1[31];
        }
        ++v21;
        v20 += 8;
      } while (v21 < (v19 - v18) >> 3);
      a1[31] = v18;
      v22 = a1[34];
      a1[37] = 0;
      a1[35] = v22;
    }
    game_UnitActor_CreateLegionCharacter_alt1(a1, v17);
  }
  TrickEntity_7d1480((__int64)v27);
  return 1;
}

bool UnitActor_81a7a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BOOL8 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  float v18;

  v2 = *(_QWORD*)(a1 + 264);
  if (v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(v2 + 72);
  if (*(_BYTE*)(v3 + 16) != 1 || (CharacterAnimator_1079e10(v3) & 1) != 0) {
    return false;
  }
  if ((GameRoutine_108c9c0(*(unsigned int*)(v3 + 120)) & 1) != 0) {
    v5 = *(_QWORD*)(v3 + 96);
    if (v5 != 0) {
      v6 = GameRoutine_d2b5f0(*(_QWORD*)(v5 + 32) + 72LL);
      if ((v6 & 0x100000000LL) != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 72LL) +
                        104LL * (int)v6);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v7 + 16);
          if (v8 != 0 && *(__int64 (**)())(v8 + 16) == eft_ClampCurve_ptr &&
              *(float*)v8 < *(float*)(v8 + 8)) {
            return true;
          }
        }
      }
    }
  }
  v9 = *(_QWORD*)(v3 + 96);
  if (v9 == 0) {
    return true;
  }
  v10 = GameRoutine_d2b5f0(*(_QWORD*)(v9 + 32) + 72LL);
  if ((v10 & 0x100000000LL) == 0) {
    return true;
  }
  v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 72LL) + 104LL * (int)v10 +
                   16);
  if (v11 == 0) {
    return true;
  }
  v12 = *(__int64**)(v11 + 80);
  v13 = *(__int64**)(v11 + 88);
  if (v12 == v13) {
    return true;
  }
  while (1) {
    v14 = *v12;
    v15 = v12[1];
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(v14 + 8) < 0.0) {
      v16 = true;
      if (v15 == 0) {
        goto LABEL_27;
      }
    LABEL_25:
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
      goto LABEL_27;
    }
    v17 = __dynamic_cast();
    v16 = v17 == 0;
    if (v17 != 0) {
      v1 = v17;
    }
    if (v15 != 0) {
      goto LABEL_25;
    }
  LABEL_27:
    if (!v16) {
      break;
    }
    v12 += 2;
    result = true;
    if (v12 == v13) {
      return result;
    }
  }
  if (v1 != 0) {
    v18 = *(float*)(v1 + 8) / 60.0;
    return v18 > GameRoutine_107a200(v3);
  }
  return true;
}

__int64 UnitActor_81ae00(__int64 a1, float a2)
{
  int v2;
  __int64 v4;
  __int64 result;
  float v6;

  v2 = *(unsigned __int8*)(a1 + 176);
  v6 = a2;
  if (v2 == 1) {
    v4 = *(_QWORD*)(a1 + 152);
  LABEL_5:
    result = (*(__int64 (**)(__int64))(v4 + 24))(a1 + 152);
  LABEL_6:
    *(_QWORD*)(a1 + 160) = 0;
    *(_WORD*)(a1 + 176) = 256;
    *(_WORD*)(a1 + 20) |= 8u;
    return result;
  }
  if (*(float*)(a1 + 160) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
    v4 = *(_QWORD*)(a1 + 152);
    goto LABEL_5;
  }
  result = (*(__int64 (**)(__int64, float*, __int64))(
      *(_QWORD*)(a1 + 152) + 8LL))(a1 + 152, &v6, a1 + 184);
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 152) + 24LL))(a1 + 152);
    goto LABEL_6;
  }
  return result;
}

__int64 UnitActor_81aee0(__int64 a1, float a2)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  float v7;
  bool v8;
  __int64 result;
  __int64 v10;
  int v11;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v5 = a2 == 0.0;
    v6 = v4 & v3;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v5) {
      a2 = 0.3;
    }
    if (v6 != 0) {
      v7 = a2;
    }
    else {
      v7 = 0.0;
    }
  }
  else {
    v8 = a2 == 0.0;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v8) {
      v7 = 0.3;
    }
    else {
      v7 = a2;
    }
  }
  v11 = 1065353216;
  if (*(_BYTE*)(a1 + 176) == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(a1 + 152) +
                                                     24LL))(a1 + 152, 1.0, 1.0);
    *(_DWORD*)(a1 + 160) = 0;
  }
  else {
    if (v7 >= *(float*)(a1 + 160)) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(a1 + 152) + 8LL))(a1 + 152, &v11, a1 + 184);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v10 = *(_QWORD*)(a1 + 152);
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v10 = *(_QWORD*)(a1 + 152);
    }
    result = (*(__int64 (**)(__int64))(v10 + 24))(a1 + 152);
    *(float*)(a1 + 160) = v7;
  }
  *(_DWORD*)(a1 + 164) = 0;
  *(_WORD*)(a1 + 176) = 256;
  *(_WORD*)(a1 + 20) |= 8u;
  return result;
}

__int64 UnitActor_81b040(__int64 a1, float a2)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  float v7;
  bool v8;
  int v9;
  __int64 result;
  __int64 v11;
  int v12;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v5 = a2 == 0.0;
    v6 = v4 & v3;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v5) {
      a2 = 0.3;
    }
    if (v6 != 0) {
      v7 = a2;
    }
    else {
      v7 = 0.0;
    }
  }
  else {
    v8 = a2 == 0.0;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v8) {
      v7 = 0.3;
    }
    else {
      v7 = a2;
    }
  }
  v9 = *(unsigned __int8*)(a1 + 176);
  v12 = 0;
  if (v9 == 1) {
    result = (*(__int64 (**)(__int64, double, double))(
        *(_QWORD*)(a1 + 152) + 24LL))(a1 + 152, 0.0, 0.0);
    *(_DWORD*)(a1 + 160) = 0;
  }
  else {
    if (v7 >= *(float*)(a1 + 160)) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(a1 + 152) + 8LL))(a1 + 152, &v12, a1 + 184);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v11 = *(_QWORD*)(a1 + 152);
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v11 = *(_QWORD*)(a1 + 152);
    }
    result = (*(__int64 (**)(__int64))(v11 + 24))(a1 + 152);
    *(float*)(a1 + 160) = v7;
  }
  *(_DWORD*)(a1 + 164) = 0;
  *(_WORD*)(a1 + 176) = 256;
  *(_WORD*)(a1 + 20) |= 8u;
  return result;
}

__int64 UnitActor_81b190(__int64 a1, float a2)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  float v7;
  bool v8;
  __int64 result;
  __int64 v10;
  int v11;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v5 = a2 == 0.0;
    v6 = v4 & v3;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v5) {
      a2 = 0.3;
    }
    if (v6 != 0) {
      v7 = a2;
    }
    else {
      v7 = 0.0;
    }
  }
  else {
    v8 = a2 == 0.0;
    if (a2 < 0.0) {
      a2 = 0.3;
    }
    if (v8) {
      v7 = 0.3;
    }
    else {
      v7 = a2;
    }
  }
  v11 = 0x40000000;
  if (*(_BYTE*)(a1 + 216) == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(a1 + 192) +
                                                     24LL))(a1 + 192, 2.0, 2.0);
    *(_DWORD*)(a1 + 200) = 0;
  }
  else {
    if (v7 >= *(float*)(a1 + 200)) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(a1 + 192) + 8LL))(a1 + 192, &v11, a1 + 224);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 192) + 16LL))(a1 + 192);
      v10 = *(_QWORD*)(a1 + 192);
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 192) + 16LL))(a1 + 192);
      v10 = *(_QWORD*)(a1 + 192);
    }
    result = (*(__int64 (**)(__int64))(v10 + 24))(a1 + 192);
    *(float*)(a1 + 200) = v7;
  }
  *(_DWORD*)(a1 + 204) = 0;
  *(_WORD*)(a1 + 216) = 256;
  *(_WORD*)(a1 + 20) |= 0x10u;
  return result;
}

__int64 UnitActor_81b2f0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v5;
  char v6;
  int v7;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 440);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned __int8*)(v2 + 16);
  if (v3 > 1) {
    if (v3 == 2) {
      return 3;
    }
    if (v3 == 3) {
      return 4;
    }
    return 0;
  }
  if (v3 != 0) {
    return 2;
  }
  v7 = *game_g_shared_system_skills_ptr & 0xFFF;
  if ((game_HasSkill(v1 + 1744, &v7) & 1) == 0) {
    return 1;
  }
  v5 = *(_QWORD*)(v1 + 440);
  if (v5 != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  if (((1 << v6) & 0xF1) != 0) {
    return 5;
  }
  else {
    return 1;
  }
}

__int64 game_UnitActor_UpdateAlpha(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* i;
  __int64 (**v13)();
  float v14;
  __int64 (***v15)();
  __int64 v16;

  if ((*(_WORD*)(result + 20) & 8) != 0) {
    v1 = *(_QWORD*)(result + 8);
    v2 = result;
    if (v1 == 0 || (*(_BYTE*)(v1 + 419) & 8) == 0) {
      v3 = GameData_21cd0d0;
      if (GameData_21cd0d0 != 0) {
        v3 = *(_DWORD*)(*(_QWORD*)(GameData_21cd0d0 + 8) + 8LL) > 0;
      }
      if ((v3 & 1) == 0) {
        result = *(_QWORD*)(result + 264);
        if (result != 0) {
          v4 = *(float*)(v2 + 184);
          if (*(float*)(v2 + 164) >= *(float*)(v2 + 160)) {
            v14 = *(float*)(v2 + 184);
            v13 = GameData_1f9e5a0;
            v15 = &v13;
          }
          else {
            v7 = Cursor_734120(*(unsigned int*)(v2 + 168),
                               *(unsigned int*)(v2 + 172), *(float*)(v2 + 180),
                               *(float*)(v2 + 184));
            result = *(_QWORD*)(v2 + 264);
            v4 = v7;
            v14 = v7;
            v13 = GameData_1f9e5a0;
            v15 = &v13;
            if (result == 0) {
            LABEL_13:
              v8 = *(__int64**)(v2 + 272);
              v9 = *(__int64**)(v2 + 280);
              while (v8 != v9) {
                v10 = *v8++;
                v16 = v10;
                if (v15 == nullptr) {
                  GameRoutine_60a310(0, v5, v6);
                }
                ((void (*)(__int64 (***)(), __int64*))(*v15)[6])(v15, &v16);
              }
              result = (__int64)v15;
              if (v15 == &v13) {
                v11 = 4;
              }
              else {
                if (v15 == nullptr) {
                LABEL_21:
                  for (i = *(_QWORD**)(v2 + 320); i != nullptr;
                       i = (_QWORD*)*i) {
                    result = GameRoutine_14a1b00(i[3], v4);
                  }
                  if (*(float*)(v2 + 164) == *(float*)(v2 + 160)) {
                    *(_WORD*)(v2 + 20) &= ~8u;
                  }
                  return result;
                }
                v11 = 5;
              }
              result =
                  ((__int64 (*)(__int64 (***)(), __int64))(*v15)[v11])(v15, v5);
              goto LABEL_21;
            }
          }
          GameRoutine_1084940(result, 0, v4);
          goto LABEL_13;
        }
      }
    }
  }
  return result;
}

__int64 UnitActor_81bdc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 (***v9)();
  __int64 (***v10)();
  __int64 (**v11)();
  __int64 v12;
  float v13;
  int v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  __int64 (**v18)();
  float v19;
  __int64 (***v20)();
  __int64 (**v21)();
  float v22;
  __int64 (***v23)();

  if ((*(_WORD*)(result + 20) & 0x10) == 0) {
    return result;
  }
  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (v1 != 0 && (*(_BYTE*)(v1 + 419) & 8) != 0) {
    return result;
  }
  v3 = GameData_21cd0d0;
  if (GameData_21cd0d0 != 0) {
    v3 = *(_DWORD*)(*(_QWORD*)(GameData_21cd0d0 + 8) + 8LL) > 0;
  }
  if ((v3 & 1) != 0) {
    return result;
  }
  result = *(_QWORD*)(result + 264);
  if (result == 0) {
    return result;
  }
  v4 = *(float*)(v2 + 224);
  if (*(float*)(v2 + 204) >= *(float*)(v2 + 200)) {
    v19 = *(float*)(v2 + 224);
    v18 = GameData_1f9e620;
    v20 = &v18;
  }
  else {
    v7 = Cursor_734120(*(unsigned int*)(v2 + 208), *(unsigned int*)(v2 + 212),
                       *(float*)(v2 + 220), *(float*)(v2 + 224));
    result = *(_QWORD*)(v2 + 264);
    v4 = v7;
    v19 = v7;
    v18 = GameData_1f9e620;
    v20 = &v18;
    if (result == 0) {
      goto LABEL_17;
    }
  }
  v22 = v4;
  v21 = GameData_2007658;
  v23 = &v21;
  CharacterBuilder_1083e90(result, &v21);
  if (v23 == &v21) {
    v8 = 4;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_17;
    }
    v8 = 5;
  }
  ((void (*)(__int64 (***)(), __int64))(*v23)[v8])(v23, v5);
LABEL_17:
  v9 = *(__int64 (****)())(v2 + 272);
  v10 = *(__int64 (****)())(v2 + 280);
  while (v9 != v10) {
    v11 = *v9++;
    v21 = v11;
    if (v20 == nullptr) {
      GameRoutine_60a310(0, v5, v6);
    }
    ((void (*)(__int64 (***)(), __int64 (***)()))(*v20)[6])(v20, &v21);
  }
  result = (__int64)v20;
  if (v20 == &v18) {
    v12 = 4;
    goto LABEL_24;
  }
  if (v20 != nullptr) {
    v12 = 5;
  LABEL_24:
    result = ((__int64 (*)(__int64 (***)(), __int64))(*v20)[v12])(v20, v5);
  }
  v13 = *(float*)(v2 + 200);
  if (*(float*)(v2 + 204) != v13) {
    return result;
  }
  if (v4 == 1.0) {
    *(_WORD*)(v2 + 20) &= ~0x10u;
    return result;
  }
  v14 = *(unsigned __int8*)(v2 + 216);
  v15 = v2 + 192;
  LODWORD(v21) = 1065353216;
  v16 = *(_QWORD*)(v2 + 192);
  if (v14 == 1) {
    result = (*(__int64 (**)(__int64))(v16 + 24))(v2 + 192);
    v13 = 0.0;
  }
  else {
    result = (*(__int64 (**)(__int64, __int64 (***)(), __int64))(v16 + 8))(
        v2 + 192, &v21, v2 + 224);
    if ((result & 1) == 0) {
      return result;
    }
    v17 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v15 + 16LL))(v2 +
                                                                         192);
    result = (*(__int64 (**)(__int64, long double, float))(
        *(_QWORD*)v15 + 24LL))(v2 + 192, v17, *(float*)&v21);
  }
  *(float*)(v2 + 200) = v13;
  *(_DWORD*)(v2 + 204) = 0;
  *(_WORD*)(v2 + 216) = 256;
  return result;
}

unsigned __int64 UnitActor_81c000(unsigned __int64 result, _BYTE* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  _QWORD* v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  long double v25;
  float v26;
  char v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  _QWORD** v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD** v39;
  __int64 v40;
  _QWORD* v41;

  if (a2 != nullptr && *a2 != 0) {
    v3 = result;
    result = game_HashString(a2);
    v4 = *(_QWORD*)(v3 + 312);
    v5 = result;
    if (v4 != 0 && *(_QWORD*)(v3 + 328) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(v3 + 304) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_58;
                }
              }
              else if ((v11 & v6) != v7) {
                goto LABEL_24;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                goto LABEL_24;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_58:
                v41 = (_QWORD*)result;
                v39 = &v41;
                result = GameRoutine_81f4e0(v3 + 304, &v41, &v39);
                ++*(_DWORD*)(result + 40);
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  LABEL_24:
    if (*a2 != 0) {
      result = strlen(a2);
      if ((int)result >= 4) {
        v12 = result << 32;
        if (a2[(__int64)((result << 32) - 0x100000000LL) >> 32] == 112 &&
            a2[(__int64)(v12 - 0x200000000LL) >> 32] == 111 &&
            a2[(__int64)(v12 - 0x300000000LL) >> 32] == 111 &&
            a2[(__int64)(v12 - 0x400000000LL) >> 32] == 76) {
          v13 = *(_QWORD*)(eft_g_effectSystem + 112);
          v14 = *(_QWORD*)(v13 + 24);
          if (v14 != 0 && (v15 = *(_DWORD*)(v13 + 32)) != 0) {
            v16 = 0;
            while (1) {
              v17 = (v15 + v16) >> 1;
              v18 = (_QWORD*)(v14 + 336LL * v17);
              v19 = strcmp(*v18, a2);
              if (v19 == 0) {
                break;
              }
              if (v19 < 0) {
                v16 = v17 + 1;
              }
              else {
                v15 = (v15 + v16) >> 1;
              }
              if (v16 == v15) {
                goto LABEL_38;
              }
            }
            v20 = v18[14];
          }
          else {
          LABEL_38:
            v20 = 0;
          }
          result = GameRoutine_960f80(v20);
          v21 = (unsigned __int8)result;
          if ((result & 0xFE) == 0) {
            v21 = 1;
          }
          v22 = *(_QWORD*)(*(_QWORD*)(v3 + 264) + 80LL);
          if (v22 != 0) {
            v23 = GameData_1fb0230[v21];
            v24 = strstr(a2, "Aura");
            v26 = GameRoutine_966340(a2, *(_QWORD*)(v3 + 8));
            v27 = game_map_ProcMapSeqBattleView_instance_;
            if (game_map_ProcMapSeqBattleView_instance_ != 0) {
              v27 = *(_BYTE*)(game_map_ProcMapSeqBattleView_instance_ +
                              23032) == 0;
            }
            if ((v27 & 1) == 0 && (*(_WORD*)(v3 + 20) & 0x180) == 0) {
              v28 = GameRoutine_9664e0(a2);
              if (v28 != 0) {
                *(float*)&v25 = v26;
                v29 = v24 != 0 ? 8 : 5;
                *(_DWORD*)(v22 + 68) = v29;
                *(struct PseudoSret*)(&v39) =
                    GameRoutine_108e3e0(v22, v28, v23, 1, 1, v25);
                v30 = v40;
                if (v40 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                  std___1___shared_weak_count___release_weak(v30);
                }
              }
            }
            *(float*)&v25 = v26;
            if (v24 != 0) {
              v31 = 8;
            }
            else {
              v31 = 5;
            }
            *(_DWORD*)(v22 + 68) = v31;
            *(struct PseudoSret*)(&v39) =
                GameRoutine_108e3e0(v22, a2, v23, 1, 1, v25);
            v33 = v39;
            v32 = v40;
            if (v40 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                        memory_order_relaxed);
              v38 = v5;
              v41 = &v38;
              result = GameRoutine_81f4e0(v3 + 304, &v38, &v41);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                        memory_order_relaxed);
            }
            else {
              v38 = v5;
              v41 = &v38;
              result = GameRoutine_81f4e0(v3 + 304, &v38, &v41);
            }
            v34 = result;
            v35 = *(_QWORD*)(result + 32);
            *(_QWORD*)(result + 24) = v33;
            *(_QWORD*)(result + 32) = v32;
            v36 = v32;
            if (v35 != 0) {
              if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
                result = std___1___shared_weak_count___release_weak(v35);
              }
              v36 = *(_QWORD*)(v34 + 32);
            }
            if (v36 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                result = std___1___shared_weak_count___release_weak(v36);
              }
            }
            *(_DWORD*)(v34 + 40) = 1;
            if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              result = std___1___shared_weak_count___release_weak(v32);
            }
            v37 = v40;
            if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
              return std___1___shared_weak_count___release_weak(v37);
            }
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 UnitActor_81c4a0(unsigned __int64 result, _BYTE* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;

  if (a2 != nullptr && *a2 != 0) {
    v2 = (_QWORD*)result;
    result = game_HashString_alt1(a2, a2);
    v3 = v2[39];
    if (v3 != 0 && v2[41] != 0) {
      v4 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v5 = result;
        if (result >= v3) {
          v5 = result % v3;
        }
      }
      else {
        v5 = v4 & result;
      }
      v6 = *(_QWORD**)(v2[38] + 8 * v5);
      if (v6 != nullptr) {
        v7 = (_QWORD*)*v6;
        if (*v6 != 0) {
          if ((v3 & v4) == 0) {
            while (1) {
              v9 = v7[1];
              if (v9 == result) {
                if (v7[2] == result) {
                  goto LABEL_25;
                }
              }
              else if ((v9 & v4) != v5) {
                return result;
              }
              v7 = (_QWORD*)*v7;
              if (v7 == nullptr) {
                return result;
              }
            }
          }
          do {
            v8 = v7[1];
            if (v8 == result) {
              if (v7[2] == result) {
              LABEL_25:
                v12 = (_QWORD*)v7[3];
                v11 = v7 + 3;
                v10 = v12;
                v13 = *v12;
                if (*v12 != 0 && *(_DWORD*)(v13 + 16) == *((_DWORD*)v10 + 2)) {
                  v14 = result;
                  if ((GameRoutine_8680c0() & 1) != 0) {
                    GameRoutine_14a1390(v11, 1);
                  }
                  else {
                    GameRoutine_14a16a0(v11, 1, 20.0);
                  }
                  result = v14;
                }
                v15 = result;
                return UnitActor_81fb20_alt1(v2 + 38, &v15);
              }
            }
            else {
              if (v8 >= v3) {
                v8 %= v3;
              }
              if (v8 != v5) {
                return result;
              }
            }
            v7 = (_QWORD*)*v7;
          } while (v7 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 game_UnitActor_UpdateEffect(__int64 result, __int64 a2, __int64 a3)
{
  __int16 v3;
  __int64 v5;
  __int64* i;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;

  v3 = *(_WORD*)(result + 20);
  if ((v3 & 0x1C0) != 0 && *(_QWORD*)(result + 264) != 0) {
    v5 = result;
    if (*(_QWORD*)(result + 8) != 0 && *GameData_2130068[0] == 0) {
      if ((v3 & 0x80) != 0) {
        GameRoutine_819c20_alt1(result);
      }
      for (i = *(__int64**)(v5 + 320); i != nullptr; i = (__int64*)*i) {
        *((_DWORD*)i + 10) = 0;
      }
      v8 = *(_QWORD*)(v5 + 8);
      v9 = v14;
      v14[0] = GameData_1f9e6a0;
      v14[1] = v5;
      v15 = v14;
      v10 = *(_QWORD*)(v8 + 1776);
      if ((int)((unsigned __int64)(*(_QWORD*)(v8 + 1784) - v10) >> 2) < 1) {
        goto LABEL_21;
      }
      v11 = 0;
      v12 = 0;
      do {
        if (v15 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v15 + 48LL))(v15, v10 + v11);
        v10 = *(_QWORD*)(v8 + 1776);
        ++v12;
        v11 += 4;
      } while (v12 <
               (int)((unsigned __int64)(*(_QWORD*)(v8 + 1784) - v10) >> 2));
      v9 = v15;
      if (v15 == v14) {
      LABEL_21:
        v13 = 32;
      }
      else {
        if (v15 == nullptr) {
        LABEL_23:
          result = GameRoutine_81c600(v5);
          *(_WORD*)(v5 + 20) &= 0xFE3Fu;
          return result;
        }
        v13 = 40;
      }
      (*(void (**)(_QWORD*, __int64))(*v9 + v13))(v9, a2);
      goto LABEL_23;
    }
  }
  return result;
}

void UnitActor_81d540(__int64 a1, long double a2)
{
  int v3;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;

  if (*(_DWORD*)(a1 + 32) == 0) {
    v3 = *GameData_212d280;
    if (*GameData_212d280 != *(_DWORD*)(a1 + 28)) {
      v4 = *(float*)(a1 + 56);
      v5 = *(float*)(a1 + 60);
      *(_BYTE*)(a1 + 73) = 0;
      if (v5 < v4) {
        v6 = a1 + 48;
        *(float*)&a2 = v5 + (**(float (***)(__int64))(a1 + 48))(a1 + 48);
        if (*(float*)(a1 + 56) < *(float*)&a2) {
          LODWORD(a2) = *(_DWORD*)(v6 + 8);
        }
        *(_DWORD*)(a1 + 60) = LODWORD(a2);
      }
      v7 = *(float*)(a1 + 120);
      v8 = *(float*)(a1 + 124);
      *(_BYTE*)(a1 + 137) = 0;
      if (v8 < v7) {
        *(float*)&a2 = v8 + (**(float (***)(__int64))(a1 + 112))(a1 + 112);
        if (*(float*)(a1 + 120) < *(float*)&a2) {
          LODWORD(a2) = *(_DWORD*)(a1 + 120);
        }
        *(_DWORD*)(a1 + 124) = LODWORD(a2);
      }
      v9 = *(float*)(a1 + 160);
      v10 = *(float*)(a1 + 164);
      *(_BYTE*)(a1 + 177) = 0;
      if (v10 < v9) {
        *(float*)&a2 = v10 + (**(float (***)(__int64))(a1 + 152))(a1 + 152);
        if (*(float*)(a1 + 160) < *(float*)&a2) {
          LODWORD(a2) = *(_DWORD*)(a1 + 160);
        }
        *(_DWORD*)(a1 + 164) = LODWORD(a2);
      }
      LODWORD(a2) = *(_DWORD*)(a1 + 200);
      v11 = *(float*)(a1 + 204);
      *(_BYTE*)(a1 + 217) = 0;
      if (v11 < *(float*)&a2) {
        *(float*)&a2 = v11 + (**(float (***)(__int64))(a1 + 192))(a1 + 192);
        if (*(float*)(a1 + 200) < *(float*)&a2) {
          LODWORD(a2) = *(_DWORD*)(a1 + 200);
        }
        *(_DWORD*)(a1 + 204) = LODWORD(a2);
      }
      *(_DWORD*)(a1 + 28) = v3;
    }
    if ((*(_WORD*)(a1 + 20) & 1) != 0 &&
        (game_UnitActor_TryReload((_QWORD*)a1) & 1) != 0) {
      *(_WORD*)(a1 + 20) &= ~1u;
    }
    GameRoutine_81ba20(a1, a2);
    GameRoutine_81b840(a1);
    game_UnitActor_UpdateAlpha(a1);
    UnitActor_81bdc0(a1);
    game_UnitActor_UpdateEffect(a1, v12, v13);
    v14 = *(_QWORD*)(a1 + 8);
    if ((v14 == 0 || (*(_BYTE*)(v14 + 419) & 8) == 0) &&
        (GameData_21cd0d0 == 0 ||
         *(int*)(*(_QWORD*)(GameData_21cd0d0 + 8) + 8LL) <= 0) &&
        *(_QWORD*)(a1 + 232) != 0) {
      v15 = v14 == 0 || (*(_BYTE*)(v14 + 417) & 0x1C) == 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 232) + 289LL) =
          (*(float (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152) !=
              0.0 &&
          v15;
    }
  }
}

__int64 game_UnitActor_FuncBuildCompleteSubscribe(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (***v30)();
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  __int64 (**v36)();
  __int64 v37;
  __int64 v38;
  __int64 (***v39)();
  _QWORD v40[2];
  __int64 v41;

  v2 = a2[1];
  v40[0] = *a2;
  v40[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    UnitActor_81de20_alt1(a1, v40);
    v5 = std___1___shared_weak_count___release_weak(v2);
  }
  else {
    v5 = UnitActor_81de20_alt1(a1, v40);
  }
  v8 = (_QWORD*)a1[44];
  v9 = a1[45];
  if ((unsigned __int64)v8 >= v9) {
    v12 = a1[43];
    v13 = (__int64)v8 - v12;
    v14 = ((__int64)v8 - v12) >> 4;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 60 != 0) {
      GameRoutine_81e590(v5);
    }
    v16 = v9 - v12;
    if (v16 >> 3 > v15) {
      v15 = v16 >> 3;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF0LL) {
      v17 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 >> 60 != 0) {
      GameRoutine_60a210(v5);
    }
    v18 = fw_memory_g_heap_manager_ptr;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v17, 16, 0);
    v20 = a2[1];
    v21 = (_QWORD*)(v19 + v13);
    v22 = v19 + 16 * v17;
    *v21 = *a2;
    v21[1] = v20;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                memory_order_relaxed);
      v12 = a1[43];
      v13 = a1[44] - v12;
      v14 = v13 >> 4;
    }
    v23 = &v21[-2 * v14];
    v11 = v21 + 2;
    memcpy(v23, v12, v13);
    a1[43] = v23;
    a1[44] = v11;
    a1[45] = v22;
    if (v12 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v24, v12);
    }
  }
  else {
    *v8 = *a2;
    v10 = a2[1];
    v8[1] = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
    }
    v11 = v8 + 2;
  }
  a1[44] = v11;
  v26 = *a2;
  v25 = a2[1];
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
    v38 = v25;
    v27 = a1[33];
    v36 = GameData_1f9e820;
    v37 = v26;
    v39 = &v36;
    if (v27 != 0) {
      v28 = std___1___shared_weak_count_lock(v25);
      if (v28 != 0) {
        v29 = v28;
        if (v37 != 0) {
          v30 = *(__int64 (****)())(v37 + 32);
          v41 = v27;
          if (v30 == nullptr) {
            goto LABEL_39;
          }
          ((void (*)(__int64 (***)(), __int64*))(*v30)[6])(v30, &v41);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
        }
      }
    }
  }
  else {
    v38 = 0;
    v36 = GameData_1f9e820;
    v37 = v26;
    v39 = &v36;
  }
  v32 = (__int64*)a1[34];
  v31 = (__int64*)a1[35];
  if (v32 != v31) {
    while (1) {
      v33 = *v32++;
      v30 = v39;
      v41 = v33;
      if (v39 == nullptr) {
        break;
      }
      ((void (*)(__int64 (***)(), __int64*))(*v39)[6])(v39, &v41);
      if (v32 == v31) {
        goto LABEL_33;
      }
    }
  LABEL_39:
    GameRoutine_60a310(v30, v6, v7);
  }
LABEL_33:
  result = (__int64)v39;
  if (v39 == &v36) {
    v35 = 4;
  }
  else {
    if (v39 == nullptr) {
      return result;
    }
    v35 = 5;
  }
  return ((__int64 (*)(__int64 (***)()))(*v39)[v35])(v39);
}

__int64 UnitActor_81de20(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 add;
  bool v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(__int64**)(result + 344);
  v3 = *(__int64**)(result + 352);
  v4 = a2[1];
  v5 = result;
  if (v4 != 0) {
    v6 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    if (v2 != v3) {
      while (1) {
        v7 = std___1___shared_weak_count_lock(v4);
        v8 = v2[1];
        v9 = v7 != 0 ? v6 : 0LL;
        if (v8 != 0 && (v10 = std___1___shared_weak_count_lock(v8)) != 0) {
          v11 = v9 == *v2;
          add = atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v13 = v11;
          if (add == 0) {
            v14 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak(v14);
          }
        }
        else {
          v13 = v9 == 0;
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        if (v13) {
          break;
        }
        v2 += 2;
        if (v2 == v3) {
          v2 = v3;
          break;
        }
      }
    }
    result = std___1___shared_weak_count___release_weak(v4);
  }
  else if (v2 != v3) {
    while (1) {
      result = v2[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v19 = *v2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v20);
      }
      if (v19 == 0) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = v3;
        break;
      }
    }
  }
  v15 = *(__int64**)(v5 + 352);
  if (v2 != v15) {
    v16 = v2 + 2;
    if (v2 + 2 == v15) {
      if (v2 == v15) {
      LABEL_29:
        *(_QWORD*)(v5 + 352) = v2;
        return result;
      }
    }
    else {
      do {
        v18 = *v16;
        v17 = v16[1];
        result = *(v16 - 1);
        *v16 = 0;
        v16[1] = 0;
        *(v16 - 2) = v18;
        *(v16 - 1) = v17;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v16 += 2;
      } while (v16 != v15);
      v15 = *(__int64**)(v5 + 352);
      v2 = v16 - 2;
      if (v16 - 2 == v15) {
        goto LABEL_29;
      }
    }
    do {
      result = *(v15 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v15 -= 2;
    } while (v15 != v2);
    goto LABEL_29;
  }
  return result;
}

__int64 UnitActor_81e020(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 add;
  bool v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(__int64**)(result + 368);
  v3 = *(__int64**)(result + 376);
  v4 = a2[1];
  v5 = result;
  if (v4 != 0) {
    v6 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    if (v2 != v3) {
      while (1) {
        v7 = std___1___shared_weak_count_lock(v4);
        v8 = v2[1];
        v9 = v7 != 0 ? v6 : 0LL;
        if (v8 != 0 && (v10 = std___1___shared_weak_count_lock(v8)) != 0) {
          v11 = v9 == *v2;
          add = atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v13 = v11;
          if (add == 0) {
            v14 = v10;
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak(v14);
          }
        }
        else {
          v13 = v9 == 0;
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        if (v13) {
          break;
        }
        v2 += 2;
        if (v2 == v3) {
          v2 = v3;
          break;
        }
      }
    }
    result = std___1___shared_weak_count___release_weak(v4);
  }
  else if (v2 != v3) {
    while (1) {
      result = v2[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock(result);
      if (result == 0) {
        break;
      }
      v19 = *v2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v20);
      }
      if (v19 == 0) {
        break;
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = v3;
        break;
      }
    }
  }
  v15 = *(__int64**)(v5 + 376);
  if (v2 != v15) {
    v16 = v2 + 2;
    if (v2 + 2 == v15) {
      if (v2 == v15) {
      LABEL_29:
        *(_QWORD*)(v5 + 376) = v2;
        return result;
      }
    }
    else {
      do {
        v18 = *v16;
        v17 = v16[1];
        result = *(v16 - 1);
        *v16 = 0;
        v16[1] = 0;
        *(v16 - 2) = v18;
        *(v16 - 1) = v17;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v16 += 2;
      } while (v16 != v15);
      v15 = *(__int64**)(v5 + 376);
      v2 = v16 - 2;
      if (v16 - 2 == v15) {
        goto LABEL_29;
      }
    }
    do {
      result = *(v15 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v15 -= 2;
    } while (v15 != v2);
    goto LABEL_29;
  }
  return result;
}

__int64 UnitActor_81e380(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = *(__int64**)(result + 344);
  v2 = *(__int64**)(result + 352);
  v5 = result;
  v6 = v3;
  if (v3 != v2) {
    v6 = *(__int64**)(result + 344);
    while (1) {
      v7 = v6[1];
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        break;
      }
      v6 += 2;
      if (v6 == v2) {
        goto LABEL_21;
      }
    }
  }
  v8 = v6 + 2;
  if (v6 == v2 || v8 == v2) {
    if (v6 == v2) {
      goto LABEL_21;
    }
  }
  else {
    do {
      v10 = v8[1];
      if (v10 != 0 && *(_QWORD*)(v10 + 8) != -1) {
        v11 = *v8;
        *v8 = 0;
        v8[1] = 0;
        result = v6[1];
        *v6 = v11;
        v6[1] = v10;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v6 += 2;
      }
      v8 += 2;
    } while (v8 != v2);
    v3 = *(__int64**)(v5 + 344);
    v2 = *(__int64**)(v5 + 352);
    if (v6 == v2) {
    LABEL_21:
      v6 = v2;
      if (v3 == v2) {
        return result;
      }
      goto LABEL_27;
    }
  }
  for (; v2 != v6; v2 -= 2) {
    result = *(v2 - 1);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  v3 = *(__int64**)(v5 + 344);
  for (*(_QWORD*)(v5 + 352) = v6; v3 != v6; v3 += 2) {
  LABEL_27:
    result = v3[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v14 = result;
        if (*v3 != 0) {
          v15 = *(_QWORD*)(*v3 + 32);
          v16 = a2;
          if (v15 == 0) {
            GameRoutine_60a310(0, v12, v13);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
              v15, &v16);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          result = std___1___shared_weak_count___release_weak(v14);
        }
      }
    }
  }
  return result;
}

__int64 game_UnitActor_TryReload_lambda0_Invoke(__int64 a1, __int64* a2)
{
  _WORD* v2;
  __int64 v3;
  char v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *a2;
  v2 = *(_WORD**)(a1 + 8);
  v4 = (*(__int64 (**)(_WORD*))(*(_QWORD*)v2 + 16LL))(v2);
  (*(void (**)(_WORD*))(*(_QWORD*)v2 + 24LL))(v2);
  if (v3 == 0) {
    goto LABEL_15;
  }
  v6 = v5;
  v12[0] = GameData_1f9e490;
  v7 = (unsigned __int8)(v4 - 1);
  v13 = v12;
  if (v7 < 5) {
    v8 = v7 + 1;
  }
  else {
    v8 = 0;
  }
  LODWORD(v12[1]) = v8;
  CharacterBuilder_1083e90(v3, v12);
  if (v13 == v12) {
    v9 = 32;
    goto LABEL_9;
  }
  if (v13 != nullptr) {
    v9 = 40;
  LABEL_9:
    (*(void (**)(_QWORD*))(*v13 + v9))(v13);
  }
  v12[0] = GameData_2007558;
  v12[1] = "ActedBlendRate";
  v13 = v12;
  v12[2] = v6;
  CharacterBuilder_1083e90(v3, v12);
  if (v13 == v12) {
    v10 = 32;
    goto LABEL_14;
  }
  if (v13 != nullptr) {
    v10 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v13 + v10))((__int64)v13);
  }
LABEL_15:
  result = UnitActor_81e380_alt1(v2, v3);
  v2[10] |= 0x80u;
  return result;
}

__int64 game_UnitActor_UpdateColor_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v2 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 8);
  v4 = *(unsigned int*)(result + 12);
  v7[0] = GameData_1f9e490;
  v8 = v7;
  LODWORD(v7[1]) = v3;
  CharacterBuilder_1083e90(v2, v7);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_6;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v8 + v5))((__int64)v8);
  }
  v7[2] = v4;
  v7[0] = GameData_2007558;
  v7[1] = "ActedBlendRate";
  v8 = v7;
  CharacterBuilder_1083e90(v2, v7);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 game_UnitActor_UpdateAlpha_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 result;

  result = *a2;
  if (*a2 != 0) {
    return GameRoutine_1084940(result, 0, *(float*)(a1 + 8));
  }
  return result;
}

__int64 UnitActor_81fb20(__int64* a1, unsigned __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = *a2;
    if (v5 >= v2) {
      v7 = v5 % v2;
    }
  }
  else {
    v7 = v5 & v6;
  }
  v8 = *a1;
  v9 = *(__int64***)(*a1 + 8 * v7);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = *v9;
  if (*v9 == nullptr) {
    return 0;
  }
  if ((v2 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v5) {
        if (v10[2] == v5) {
          goto LABEL_28;
        }
      }
      else if ((v12 & v6) != v7) {
        return 0;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v5) {
      break;
    }
    if (v11 >= v2) {
      v11 %= v2;
    }
    if (v11 != v7) {
      return 0;
    }
  LABEL_16:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (v10[2] != v5) {
    goto LABEL_16;
  }
LABEL_28:
  if ((v2 & v6) != 0) {
    if (v5 >= v2) {
      v5 %= v2;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != v10);
  if (v14 == a1 + 2) {
    goto LABEL_45;
  }
  v15 = v14[1];
  if ((v2 & v6) != 0) {
    if (v15 >= v2) {
      v15 %= v2;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_45:
    if (*v10 == 0) {
      goto LABEL_46;
    }
    v16 = *(_QWORD*)(*v10 + 8);
    if ((v2 & v6) != 0) {
      if (v16 >= v2) {
        v16 %= v2;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_46:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = *v10;
  if (*v10 != 0) {
    v18 = *(_QWORD*)(v17 + 8);
    if ((v2 & v6) != 0) {
      if (v18 >= v2) {
        v18 %= v2;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*a1 + 8 * v18) = v14;
      v17 = *v10;
    }
  }
  *v14 = v17;
  *v10 = 0;
  --a1[3];
  v19 = v10[4];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v10;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    v10 = v20;
  }
  v21 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v21 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                v10);
  return 1;
}

__int64 game_UnitActor_FuncBuildCompleteSubscribe_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    v4 = *a2;
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v7 = *(_QWORD*)(a1 + 8);
      v8 = result;
      if (v7 != 0) {
        v9 = *(_QWORD*)(v7 + 32);
        v10 = v4;
        if (v9 == 0) {
          GameRoutine_60a310(0, v5, v6);
        }
        result =
            (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v10);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        return std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
