#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e70;
__int64 ProcGmapTalkSeq_14d11b0(__int64 a1);
__int64 ProcGmapTalkSeq_14d12d0(__int64 result);
__int64 ProcGmapTalkSeq_14d1360();
__int64 ProcGmapTalkSeq_14d13e0(__int64 result);
__int64 ProcGmapTalkSeq_14d14c0(__int64 a1);
__int64 game_gmap_ProcGmapTalkSeq_SetCursorAtOpenSpot_closure_Invoke_alt1(
    __int64 a1, _QWORD* a2) __asm__("game_gmap_ProcGmapTalkSeq_"
                                    "SetCursorAtOpenSpot_closure_Invoke");
__attribute__((swiftcall)) void game_112eec0(PSEUDO_X8, __int64 result,
                                             unsigned int, unsigned int);
__int64 GameRoutine_ae3f80(__int64, int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
bool SpotMgr_1333de0(__int64);
extern _UNKNOWN GameData_216de68;
extern __int64 (*GameData_2046568[])();
extern __int64 (*GameData_20466d0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcGmapTalkSeq_vtable[])();
extern __int64* GameData_212d460[6];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_2251490;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int64 GameRoutine_1130770(__int64, char*, __int64*);
void ProcGmapTalkSeq_14d0630(__int64 a1);
__int64 game_gmap_ProcGmapTalkSeq_OpenSpots();
__n128 ProcGmapTalkSeq_Destructor_alt1(__int64 a1) __asm__(
    "ProcGmapTalkSeq_Destructor");
void ProcGmapTalkSeq_14d1c70(__int64 a1, __int64 a2, __int64 a3);
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
__int64
game_gmap_ProcGmapTalkSeq_SetCursorAtOpenSpot_closure_Invoke(__int64 a1,
                                                             float32x4_t** a2);
__int64 GameHr_ae3f80(__int64, int);
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapTalkSeq_Destructor(__int64 a1);

void ProcGmapTalkSeq_14d0630(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  const char* v3;
  bool v4;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = *(unsigned __int8*)(a1 + 216);
  v2 = *(_QWORD*)(a1 + 224);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = (v1 & 1) != 0 ? *(const char**)(a1 + 232) : (const char*)(a1 + 217);
    v4 = *GameData_212d460[0] != 0 || v3 == nullptr;
    if (!v4) {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770_alt1(v6, v3, nullptr);
      v7 = *(_QWORD*)(a1 + 40);
      if (v7 != 0) {
        *(_QWORD*)(v7 + 48) = v6;
        *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v6;
      *(_QWORD*)(v6 + 24) = "talk::Seq";
      *(_QWORD*)(v6 + 32) = a1;
      *(_DWORD*)(v6 + 140) = (unsigned int)game_HashString32_alt1("talk::Seq");
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 24;
      *(_QWORD*)(v6 + 80) = 1;
      *(_QWORD*)(v6 + 8) = &GameData_216de68;
      *(_QWORD*)(v6 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
          (*(_WORD*)(v6 + 136) & 0x100) == 0) {
        *(_WORD*)(v6 + 136) |= 0x100u;
      }
      v8 = *(_BYTE**)(v6 + 32);
      v9 = v8[138];
      if (v9 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v6 + 32));
        v9 = v8[138];
      }
      v8[138] = v9 + 1;
      *(_WORD*)(v6 + 136) |= 2u;
    }
  }
  v10 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v12 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v11 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v14 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v13 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v4 = v13 == v14;
    v15 = v11 - 1 + v12;
    v16 = v15 >> 7;
    v17 = v15 & 0x7F;
    v18 = 16 * (v13 - v14) - 1;
    v19 = *(_QWORD*)(v14 + 8 * v16);
    if (v4) {
      v18 = 0;
    }
    v20 = v19 + 32 * v17;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v20 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v10[21] = *(_QWORD*)(v20 + 24);
    v21 = *(_QWORD*)(v20 + 16);
    v10[27] = v11 - 1;
    v10[20] = v21;
    if ((unsigned __int64)(v18 - (v11 + v12) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v22 = *(_QWORD*)(v13 - 8);
      if (v22 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
        v13 = v10[24];
      }
      v10[24] = v13 - 8;
    }
  }
}

__int64 ProcGmapTalkSeq_14d11b0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v2 = GameData_212d718;
  result = GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*GameData_212d708 + 16) + 80LL, 0);
  if (*(float*)(*(_QWORD*)(*v2 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(*v2 + 16) + 792LL)) {
    v4 = *(unsigned __int8**)(a1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 game_gmap_ProcGmapTalkSeq_OpenSpots()
{
  __int64 result;
  __int64 v1;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;

  v2_.v2[0] = GameData_2046568;
  v2_.v3 = v2_.v2;
  SpotMgr_1333de0((__int64)v2_.v2);
  result = (__int64)v2_.v3;
  if (v2_.v3 == v2_.v2) {
    v1 = 32;
  }
  else {
    if (v2_.v3 == nullptr) {
      return result;
    }
    v1 = 40;
  }
  return (*(__int64 (**)(__int64))(*v2_.v3 + v1))((__int64)v2_.v3);
}

__int64 ProcGmapTalkSeq_14d12d0(__int64 result)
{
  float v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  if (game_GameModeData_instance_ != 0 &&
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0 ||
      (v1 = *(float*)(game_script_hub_g_frame_counter + 160) +
            *(float*)(result + 208),
       *(float*)(result + 208) = v1, v1 >= 5.0)) {
    v2 = *(unsigned __int8**)(result + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapTalkSeq_14d1360()
{

#pragma clang fp contract(off)
  __int64 v0;
  int v1;
  float32x4_t** v2;
  float32x4_t** v3;
  float32x4_t* v4;
  float32x4_t* v5;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(float32x4_t***)(v0 + 8);
  v3 = *(float32x4_t***)(v0 + 16);
  if (v1 < 0) {
    if (v2 != v3) {
      while (1) {
        v4 = *v2;
        if (LANES128((*v2)[6]).n128_u64[0] == 0 &&
            LANES128(v4[34]).n128_u64[1] == 0) {
          break;
        }
        if (++v2 == v3) {
          return result;
        }
      }
      return GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16),
                                      v4 + 3);
    }
  }
  else if (v2 != v3) {
    while (1) {
      v5 = *v2++;
      v4 = v5;
      if (LANES128(v5[5]).n128_u32[1] == v1) {
        break;
      }
      if (v2 == v3) {
        return result;
      }
    }
    return GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16),
                                    v4 + 3);
  }
  return result;
}

__int64 ProcGmapTalkSeq_14d13e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 2) {
    v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 1);
    result = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v2 + 5856) |= 0x10000u;
  }
  v3 = *(_QWORD*)(v1 + 240);
  if (v3 != 0 && *(_WORD*)(v3 + 80) != 0) {
    v4 = 8LL * *(unsigned __int16*)(v3 + 80);
    v5 = 0;
    do {
      v7 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + v5);
      v6 = game_HashString(v7);
      result = game_VariableManager_SetFlag(&v6, 1);
      v5 += 8;
    } while (v4 != v5);
  }
  return result;
}

__int64 ProcGmapTalkSeq_14d14c0(__int64 a1)
{
  char* v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v15;
  char* v16;
  char* v17;
  __int64 v20;
  __int64 v21;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(char**)(a1 + 16);
  }
  else {
    v1 = (char*)(a1 + 1);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 8);
  }
  else {
    v2 = *(_BYTE*)a1 >> 1;
  }
  if (v2 >= 22) {
    v3 = &v1[v2];
    v4 = v2;
    v5 = v1;
    do {
      v6 = (char*)memchr(v5, 230, v4 - 21);
      if (v6 == nullptr) {
        break;
      }
      if (*(_QWORD*)v6 == 0xE35FA2B4E7A28EE6LL &&
          *((_QWORD*)v6 + 1) == 0x8B96E9A282E3AC83LL &&
          *(_QWORD*)(v6 + 14) == 0x88B8E6BAA4E78B96LL) {
        if (v6 != v3 && v6 - v1 != -1) {
          return 1;
        }
        break;
      }
      v5 = v6 + 1;
      v4 = v3 - v5;
    } while (v3 - v5 >= 22);
    v10 = v2;
    v11 = v1;
    do {
      v12 = (char*)memchr(v11, 229, v10 - 21);
      if (v12 == nullptr) {
        break;
      }
      if (*(_QWORD*)v12 == 0xE35FA989E7958BE5LL &&
          *((_QWORD*)v12 + 1) == 0x8B96E9A282E3AC83LL &&
          *(_QWORD*)(v12 + 14) == 0x88B8E6BAA4E78B96LL) {
        if (v12 != v3 && v12 - v1 != -1) {
          return 2;
        }
        break;
      }
      v11 = v12 + 1;
      v10 = v3 - v11;
    } while (v3 - v11 >= 22);
    v15 = v2;
    v16 = v1;
    do {
      v17 = (char*)memchr(v16, 230, v15 - 21);
      if (v17 == nullptr) {
        break;
      }
      if (*(_QWORD*)v17 == 0xE35FB99FE5BDA0E6LL &&
          *((_QWORD*)v17 + 1) == 0x8B96E9A282E3AC83LL &&
          *(_QWORD*)(v17 + 14) == 0x88B8E6BAA4E78B96LL) {
        if (v17 != v3 && v17 - v1 != -1) {
          return 3;
        }
        break;
      }
      v16 = v17 + 1;
      v15 = v3 - v16;
    } while (v3 - v16 >= 22);
    if (v2 >= 28) {
      v20 = (__int64)v1;
      do {
        v21 = memchr(v20, 229, v2 - 27);
        if (v21 == 0) {
          break;
        }
        if (*(_QWORD*)v21 == 0x8BE5ABA3E5B585E5LL &&
            *(_QWORD*)(v21 + 8) == 0xAC83E35F869BE99FLL &&
            *(_QWORD*)(v21 + 16) == 0xA4E78B96E9A282E3LL &&
            *(_DWORD*)(v21 + 24) == -2001148230) {
          if ((char*)v21 != v3 && v21 - (_QWORD)v1 != -1) {
            return 4;
          }
          return 0;
        }
        v20 = v21 + 1;
        v2 = (__int64)&v3[-v20];
      } while ((__int64)&v3[-v20] >= 28);
    }
  }
  return 0;
}

__int64

game_gmap_ProcGmapTalkSeq_SetCursorAtOpenSpot_closure_Invoke(__int64 a1,
                                                             float32x4_t** a2)
{

#pragma clang fp contract(off)
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*a2 != nullptr) {
    return GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16),
                                    *a2 + 2);
  }
  return result;
}

void ProcGmapTalkSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_gmap_ProcGmapTalkSeq_vtable;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 232);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_20466d0;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_11:
  GameData_2251490 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcGmapTalkSeq_14d1c70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[3];

  v6 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v6 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_WORD*)(a1 + 216) = 0;
  v7 = (_BYTE*)(a1 + 216);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = a2;
  *(_QWORD*)(a1 + 256) = a3;
  *(_QWORD*)(a1 + 264) = 0;
  GameData_2251490 = a1;
  *(_QWORD*)a1 = game_gmap_ProcGmapTalkSeq_vtable;
  if (game_gmap_GmapClock_instance_ != 0) {
    v8 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
  }
  else {
    v8 = 0;
  }
  if ((GameHr_ae3f80(a2, v8) & 1) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    }
    else {
      v9 = 0;
    }
    if (*(_QWORD*)GameData_212c6c8 != 0) {
      if (game_gmap_GmapClock_instance_ != 0) {
        v10 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v10 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      v11 = *(__int16*)(v10 + 2);
    }
    else {
      v11 = 1;
    }
    if (v9 == 3) {
      v12 = 0;
    }
    else {
      v12 = v11;
    }
    if (game_GameModeData_instance_ != 0 && v9 == 3) {
      v12 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    game_112eec0((void*)(v16), a2, v9, v12);
    if ((*v7 & 1) != 0) {
      v13 = *(_QWORD*)(a1 + 232);
      if (v13 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
      }
    }
    v15 = v16[1];
    *(_QWORD*)v7 = v16[0];
    *(_QWORD*)(a1 + 224) = v15;
    *(_QWORD*)(a1 + 232) = v16[2];
  }
}

#pragma GCC visibility pop
