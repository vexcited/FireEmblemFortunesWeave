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
__int64
game_gmap_ProcGmapTalkSeq_SetCursorAtOpenSpot_closure_Invoke(__int64 a1,
                                                             _QWORD* a2);

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
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if (v1 < 0) {
    if (v2 != v3) {
      while (1) {
        v4 = *v2;
        if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
          break;
        }
        if (++v2 == v3) {
          return result;
        }
      }
      return GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v4 + 48);
    }
  }
  else if (v2 != v3) {
    while (1) {
      v5 = *v2++;
      v4 = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        break;
      }
      if (v2 == v3) {
        return result;
      }
    }
    return GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v4 + 48);
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

__int64 game_gmap_ProcGmapTalkSeq_SetCursorAtOpenSpot_closure_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 result;

  if (*a2 != 0) {
    return GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), *a2 + 32LL);
  }
  return result;
}

#pragma GCC visibility pop
