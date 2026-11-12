#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006910(void);
extern __int64 (*GameData_20008b8[])();
extern __int64 (*game_cmdbtl_CmdBtlSkipInput_vtable[])();
extern __int64 GameData_22190c0;
extern int GameData_22330fc;
__int64 CmdBtlSkipInput_Destructor(_QWORD* a1);
__int64 GameRoutine_1006e20(void);
__int64 GameRoutine_100b330(_QWORD);
__int64 GameRoutine_100b790(_QWORD);
__int64 GameRoutine_828800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec1530(_QWORD);
__int64 GameRoutine_f82bc0(__int64, int);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1abc9d5;
extern _UNKNOWN GameData_1acfb96;
extern __int64 GameData_212f518[5];
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212f4e0[3];
__int64 CmdBtlSkipInput_1006910(__int64 result);
__int64 CmdbtlPartyNatives_e9ba00(__int64, __int64, unsigned int,
                                  unsigned __int8, __int64*, __n128);
__int64 GameRoutine_100b790_alt1(__int64 result) __asm__("GameRoutine_100b790");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ea58;
extern __int64 GameData_2219098;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
__int64
CmdBtlSkipInput_1006e20_alt1(__int64 result,
                             __n128 a2) __asm__("CmdBtlSkipInput_1006e20");
__int64 CmdbtlPartyNatives_e9ba00_alt1(
    __int64, __int64, unsigned int, unsigned __int8, __int64*,
    long double) __asm__("CmdbtlPartyNatives_e9ba00");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_100b790_alt2(__int64) __asm__("GameRoutine_100b790");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CmdBtlSkipInput_1006e20(__int64 a1, long double a2);
__int64 AutoPlay_f82bc0(__int64, int);
__int64 GameRoutine_100b330_alt1(__int64 result) __asm__("GameRoutine_100b330");
__int64 GameRoutine_ec1530_alt1() __asm__("GameRoutine_ec1530");
__int64 GameVariable_828800(__int64, unsigned __int64*, int);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
void CmdBtlSkipInput_1006e20_alt2(__int64) __asm__("CmdBtlSkipInput_1006e20");

__int64 CmdBtlSkipInput_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_cmdbtl_CmdBtlSkipInput_vtable;
  result = GameRoutine_1006910();
  *a1 = GameData_20008b8;
  if ((_QWORD*)GameData_22190c0 == a1) {
    GameData_22190c0 = 0;
    GameData_22330fc = 0;
  }
  return result;
}

__int64 CmdBtlSkipInput_1006910(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  char v4;
  __int64* v5;
  __int64 v6;
  int v7;
  struct {
    __int64 v8;
    void* v9;
  } v8_;

  if ((*(_BYTE*)(result + 9) & 1) == 0) {
    v1 = result;
    CmdBtlSkipInput_1006e20_alt2(result);
    v2 = (__int64*)GameData_212f518[0];
    if (*(_BYTE*)(v1 + 12) != 0) {
      v3 = *(_QWORD*)GameData_212f518[0];
      *(_BYTE*)(v1 + 12) = 0;
      GameRoutine_100b790_alt2(v3);
      if ((*(_BYTE*)(v1 + 11) & 1) == 0 && (*(_BYTE*)(*v2 + 10) & 1) == 0 &&
          (GameRoutine_ec1530_alt1() & 1) == 0 &&
          game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
      }
    }
    if (*(_BYTE*)(v1 + 11) == 1) {
      v4 = *(_BYTE*)(v1 + 20);
      *(_BYTE*)(v1 + 11) = 0;
      if ((v4 & 1) != 0) {
        AutoPlay_f82bc0(*GameData_212f4e0[0], *(_DWORD*)(v1 + 16));
      }
      else {
        v5 = GameData_212f4e0[0];
        v8_.v9 = &GameData_1acfb96;
        v6 = *GameData_212f4e0[0];
        v8_.v8 = game_HashString_alt1((__int64)&GameData_1acfb96);
        if (game_GameModeData_instance_ != 0) {
          GameVariable_828800(game_GameModeData_instance_ + 40,
                              (unsigned __int64*)&v8_.v8, -1);
        }
        v8_.v9 = &GameData_1abc9d5;
        v8_.v8 = game_HashString_alt1((__int64)&GameData_1abc9d5);
        if (game_GameModeData_instance_ != 0) {
          GameVariable_828800(game_GameModeData_instance_ + 40,
                              (unsigned __int64*)&v8_.v8, 0);
        }
        v7 = *(unsigned __int8*)(v6 + 28);
        *(_BYTE*)(v6 + 13) = 0;
        if (v7 == 1) {
          *(_BYTE*)(v6 + 28) = 0;
        }
        if (*(_BYTE*)(*v5 + 20) == 1) {
          *(_BYTE*)(*v5 + 20) = 0;
        }
      }
    }
    result = GameRoutine_100b330_alt1(*v2);
    *(_BYTE*)(v1 + 9) = 1;
  }
  return result;
}

void CmdBtlSkipInput_1006e20(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  unsigned __int64 v5;
  __int128 v6;
  __int64* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  if (*(_BYTE*)(a1 + 10) != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v4 = (v3 & 8) != 0 ? 2 : 3;
      if ((v4 & v3) == 0) {
        goto LABEL_14;
      }
    }
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
      }
      else {
        v6 = *(_OWORD*)(v5 + 208);
      }
      if (*((float*)&v6 + 3) == 0x1.0000000000000p+0f) {
        *((_QWORD*)&a2 + 1) =
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                            v5 + 160, *((float*)&v6 + 3)))
                .n128_u64[1];
        if (*((float*)&a2 + 3) == 0x1.0000000000000p+0f) {
        LABEL_14:
          *(_QWORD*)&a2 = 0;
          v11_.v11 = 0;
          v11_.v12 = 0;
          CmdbtlPartyNatives_e9ba00_alt1(*GameData_212ea58, 0, 0, 1u, &v11_.v11,
                                         a2);
          if (v11_.v12 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v11_.v12);
          }
        }
      }
    }
    GameRoutine_100b790_alt2(GameData_2219098);
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v9 = *v7;
    strcpy(v8, "Skip = PopEventSkipEnable");
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v9 + v10, (__int64)v8);
    *(_BYTE*)(a1 + 10) = 0;
  }
}

#pragma GCC visibility pop
