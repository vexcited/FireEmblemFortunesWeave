#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083780(__int64, _BYTE*);
_QWORD* GameRoutine_17db4d0(__int64*, _QWORD*);
__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8, __int64,
                                                       __int64, __int64, float);
__attribute__((swiftcall)) void
CharacterSound_10962d0(PSEUDO_X8, __int64, __int64, unsigned __int64);
__attribute__((swiftcall)) void
GameRoutine_109da60(PSEUDO_X8, float32x4_t*, float32x4_t*, int8x16_t result);
__int128* math_6225d0();
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_109ec70(_QWORD, _QWORD);
__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 Model_a661a0(__int64, int, __int64, int);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 islower(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_109ec70_alt1(__int64, __int64) __asm__("GameRoutine_109ec70");
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_21677a0;
extern _UNKNOWN GameData_1ac7f77;
extern _UNKNOWN GameData_1ad3c36;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_1fda2f8[])();
extern __int64 (*GameData_2006b00[])();
extern __int64 (*GameData_2006b58[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 (*game_character_CharacterBuilder_vtable[])();
extern __int64 (*game_character_Signal_Particle_vtable[])();
extern __int64* GameData_212ee00[3];
extern __int64* GameData_212fe80;
extern __int64 GameData_212e9b8[7];
extern __int64 GameData_212e9c0[6];
extern __int64 GameData_21ec7b0;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_2006880;
extern int* GameData_212df08;
extern int GameData_1ba81c8[];
extern int GameData_1ba81f0[];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__attribute__((swiftcall)) void game_character_d03230(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_character_1075be0(PSEUDO_X8 x8_,
                                                       unsigned int* a1);
_BYTE* game_character_1077790(_BYTE* result);
__int64 game_character_10778e0(__int64 result, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void game_character_1077d10(PSEUDO_X8 x8_,
                                                       __int64 result);
void game_character_107add0(__int64 a1, __int64 a2);
__int64 (***game_character_1084940(__int64 (***result)(), char a2, float a3))();
__int64 game_character_1084ea0(_QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void game_character_1085300(PSEUDO_X8 x8_,
                                                       _QWORD* a1, char a2);
_QWORD* game_character_1085470(_QWORD* result, float32x4_t* a2, float32x4_t* a3,
                               float32x4_t* a4, float32x4_t* a5);
__attribute__((swiftcall)) void
game_character_10b49e0(PSEUDO_X8 x8_, __int64 result, _BYTE* a2);
__attribute__((swiftcall)) void game_character_10b4c40(PSEUDO_X8 x8_,
                                                       __int64 a1, _BYTE* a2);
__attribute__((swiftcall)) void game_character_10f6aa0(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2);
void game_character_10fd340(unsigned __int64* a1, float32x4_t* a2);
__attribute__((swiftcall)) void
game_character_111a1c0(PSEUDO_X8 x8_, __int64 a1, int8x16_t* a2);

__attribute__((swiftcall)) void game_character_d03230(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[9] = 0;
  v2[10] = 0;
  *v2 = GameData_1fda2f8;
  v2[10] = 0;
  v2[11] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[13] = 0;
  v2[14] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_character_Signal_Particle_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_character_1075be0(PSEUDO_X8 x8_,
                                                       unsigned int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  void* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  char* v18;

  v3 = *a1;
  if ((unsigned int)v3 <= 0x10) {
    v5 = *(&GameData_21677a0 + v3);
  }
  else {
    v5 = &GameData_1ac7f77;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a2[1] = v7;
    a2[2] = v8;
    *a2 = v9 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * v6;
  v8 = (__int64)a2 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove(v8, v5, v7);
  }
  *(_BYTE*)(v8 + v7) = 0;
  GameRoutine_1a09ce0(a2, ":", 1);
  v10 = *((unsigned __int8*)a1 + 8);
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = (char*)a1 + 9;
  }
  else {
    v13 = *((char**)a1 + 3);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *((_QWORD*)a1 + 2);
  }
  if (v14 != 0) {
    v15 = 0;
    v16 = v13;
    while (v14 != v15) {
      v17 = &v16[v14];
      ++v15;
      --v16;
      if (*(v17 - 1) == 47) {
        if (v14 + 1 != v15) {
          if (v14 < v15) {
            String_60a250("string_view::substr");
          }
          v18 = &v16[v14];
          v14 = v15 - 1;
          v13 = v18 + 1;
        }
        {
          GameRoutine_1a09ce0(a2, v13, v14);
          return;
        }
      }
    }
  }
  {
    GameRoutine_1a09ce0(a2, v13, v14);
    return;
  }
}

_BYTE* game_character_1077790(_BYTE* result)
{
  int v1;
  _BYTE* v2;

  if (result != nullptr) {
    v1 = (unsigned __int8)*result;
    v2 = result;
    if (*result != 0) {
      if ((unsigned int)strncmp(result, "Magic_", 6) != 0) {
        if (v1 == 87 && v2[1] == 80 && v2[2] == 95) {
          return (_BYTE*)(((_UNKNOWN*)0x0LL) + 1);
        }
        else if ((unsigned int)strncmp(v2, "Rod_", 4) != 0) {
          if ((unsigned int)strncmp(v2, "MagicWP_", 8) != 0) {
            if ((unsigned int)strncmp(v2, "MagicDark_", 10) != 0) {
              if ((GameRoutine_109ec70(v2, "MagicConron_") & 1) != 0) {
                return (_BYTE*)((_UNKNOWN*)0x5LL);
              }
              else if ((GameRoutine_109ec70(v2, "MagicBlaze_") & 1) != 0) {
                return (_BYTE*)((_UNKNOWN*)0x7LL);
              }
              else if ((GameRoutine_109ec70(v2, "Monster_") & 1) != 0) {
                return (_BYTE*)((_UNKNOWN**)0x8LL);
              }
              else {
                return nullptr;
              }
            }
            else {
              return (_BYTE*)((_UNKNOWN*)0x4LL);
            }
          }
          else {
            return (_BYTE*)((_UNKNOWN*)0x6LL);
          }
        }
        else {
          return (_BYTE*)(((_UNKNOWN*)0x0LL) + 3);
        }
      }
      else {
        return (_BYTE*)(((_UNKNOWN*)0x0LL) + 2);
      }
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 game_character_10778e0(__int64 result, __int64 a2, unsigned __int64 a3)
{
  _BYTE* v3;
  unsigned __int64 v4;
  int v5;
  _BYTE* v6;
  int v7;
  __int64 v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;

  *(_QWORD*)(result + 12) = 0;
  v3 = (_BYTE*)(result + 12);
  *(_WORD*)(result + 20) = 0;
  *(_QWORD*)result = -1;
  *(_DWORD*)(result + 8) = -1;
  if (a3 != 0) {
    v4 = a3;
    while (v4 != 0) {
      v5 = *(unsigned __int8*)(a2 - 1 + v4--);
      if (v5 == 47) {
        if (v4 == -1) {
          v4 = 0;
        }
        else {
          if (v4 >= a3) {
            String_60a250("string_view::substr");
          }
          ++v4;
        }
        break;
      }
    }
    if (a3 - v4 >= 7) {
      v6 = (_BYTE*)(a2 + v4);
      if (*(_BYTE*)(a2 + v4) == 65 && v6[2] == 95) {
        v7 = (unsigned __int8)v6[1];
        if (v7 == 69 || v7 == 66) {
          v8 = result;
          *(_BYTE*)(result + 13) = 1;
          *(_BYTE*)(result + 14) = *v6;
          v9 = (unsigned __int8)v6[1];
          *(_BYTE*)(result + 15) = v9;
          v10 = v6[2];
          *(_BYTE*)(result + 17) = 0;
          *(_BYTE*)(result + 16) = v10;
          *(_BYTE*)(result + 18) = v6[3];
          *(_BYTE*)(result + 19) = v6[4];
          *(_WORD*)(result + 20) = (unsigned __int8)v6[5];
          v11 = (unsigned __int8)v6[6];
          result = islower((unsigned __int8)v6[6]);
          if ((_DWORD)result != 0) {
            *v3 = v11;
            v11 = (unsigned __int8)v6[7];
            ++v6;
          }
          if (v11 <= 81) {
            if (v11 != 70) {
              if (v11 == 77) {
                v12 = 0;
                *(_DWORD*)(v8 + 4) = 0;
                if (v9 == 69) {
                LABEL_32:
                  *(_DWORD*)v8 = 0;
                  return result;
                }
              LABEL_24:
                v13 = (unsigned __int8)v6[7];
                if (v12 == 4) {
                  if (v13 == 90) {
                  LABEL_34:
                    v14 = 34;
                  LABEL_35:
                    *(_DWORD*)v8 = v14;
                    goto LABEL_53;
                  }
                }
                else {
                  if (v12 == 3) {
                    switch (v6[7]) {
                    case 'A':
                      v14 = 9;
                      goto LABEL_35;
                    case 'B':
                      v14 = 10;
                      goto LABEL_35;
                    case 'C':
                      v14 = 11;
                      goto LABEL_35;
                    case 'D':
                      v14 = 12;
                      goto LABEL_35;
                    case 'E':
                      v14 = 13;
                      goto LABEL_35;
                    case 'F':
                      v14 = 14;
                      goto LABEL_35;
                    case 'G':
                      v14 = 15;
                      goto LABEL_35;
                    case 'H':
                      v14 = 16;
                      goto LABEL_35;
                    case 'I':
                      v14 = 17;
                      goto LABEL_35;
                    case 'J':
                      v14 = 18;
                      goto LABEL_35;
                    case 'K':
                      v14 = 19;
                      goto LABEL_35;
                    case 'L':
                      v14 = 20;
                      goto LABEL_35;
                    case 'M':
                      v14 = 21;
                      goto LABEL_35;
                    case 'N':
                      v14 = 22;
                      goto LABEL_35;
                    case 'O':
                      v14 = 23;
                      goto LABEL_35;
                    case 'P':
                      v14 = 24;
                      goto LABEL_35;
                    case 'Q':
                      v14 = 25;
                      goto LABEL_35;
                    case 'R':
                      v14 = 26;
                      goto LABEL_35;
                    case 'S':
                      v14 = 27;
                      goto LABEL_35;
                    case 'T':
                      v14 = 28;
                      goto LABEL_35;
                    case 'U':
                      v14 = 29;
                      goto LABEL_35;
                    case 'V':
                      v14 = 30;
                      goto LABEL_35;
                    case 'W':
                      v14 = 31;
                      goto LABEL_35;
                    case 'X':
                      v14 = 32;
                      goto LABEL_35;
                    case 'Y':
                      v14 = 33;
                      goto LABEL_35;
                    case 'Z':
                      goto LABEL_34;
                    default:
                      goto LABEL_52;
                    }
                  }
                  if ((unsigned __int8)v6[7] <= 0x44u) {
                    if ((unsigned __int8)v6[7] > 0x42u) {
                      if (v13 == 67) {
                        v14 = 2;
                      }
                      else {
                        v14 = 3;
                      }
                      goto LABEL_35;
                    }
                    if (v13 == 65) {
                      *(_DWORD*)v8 = 0;
                    LABEL_53:
                      v15 = (unsigned __int8)v6[10];
                      if (v15 <= 0x33) {
                        if ((unsigned __int8)v6[10] > 0x31u) {
                          if (v15 == 50) {
                            v16 = 2;
                            goto LABEL_74;
                          }
                          if (v15 == 51) {
                            v16 = 3;
                            goto LABEL_74;
                          }
                        }
                        else {
                          if (v15 == 48) {
                            *(_DWORD*)(v8 + 8) = 0;
                            return result;
                          }
                          if (v15 == 49) {
                            v16 = 1;
                            goto LABEL_74;
                          }
                        }
                      }
                      else if ((unsigned __int8)v6[10] <= 0x35u) {
                        if (v15 == 52) {
                          v16 = 4;
                          goto LABEL_74;
                        }
                        if (v15 == 53) {
                          v16 = 5;
                          goto LABEL_74;
                        }
                      }
                      else {
                        switch (v15) {
                        case '6':
                          v16 = 6;
                          goto LABEL_74;
                        case '7':
                          v16 = 7;
                          goto LABEL_74;
                        case '8':
                          v16 = 8;
                        LABEL_74:
                          *(_DWORD*)(v8 + 8) = v16;
                          return result;
                        default:
                          break;
                        }
                      }
                      *(_BYTE*)(v8 + 13) = 0;
                      return result;
                    }
                    if (v13 == 66) {
                      v14 = 1;
                      goto LABEL_35;
                    }
                  }
                  else {
                    if ((unsigned __int8)v6[7] <= 0x46u) {
                      if (v13 == 69) {
                        v14 = 4;
                      }
                      else {
                        v14 = 5;
                      }
                      goto LABEL_35;
                    }
                    switch (v13) {
                    case 'G':
                      v14 = 6;
                      goto LABEL_35;
                    case 'H':
                      v14 = 7;
                      goto LABEL_35;
                    case 'I':
                      v14 = 8;
                      goto LABEL_35;
                    default:
                      break;
                    }
                  }
                }
              LABEL_52:
                *(_BYTE*)(v8 + 13) = 0;
                goto LABEL_53;
              }
              goto LABEL_42;
            }
            v12 = 1;
          }
          else {
            switch (v11) {
            case 'R':
              v12 = 2;
              break;
            case 'T':
              v12 = 3;
              break;
            case 'Z':
              v12 = 4;
              break;
            default:
            LABEL_42:
              *(_BYTE*)(v8 + 13) = 0;
              v12 = -1;
              if (v9 == 69) {
                goto LABEL_32;
              }
              goto LABEL_24;
            }
          }
          *(_DWORD*)(v8 + 4) = v12;
          if (v9 == 69) {
            goto LABEL_32;
          }
          goto LABEL_24;
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_character_1077d10(PSEUDO_X8 x8_,
                                                       __int64 result)
{
  unsigned __int8* a2 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  unsigned int* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  __int64 v28;

  if ((*(_BYTE*)(result + 13) & 1) == 0) {
    *(_WORD*)a2 = 0;
    {
      result;
      return;
    }
  }
  v3 = (unsigned int*)result;
  *((_QWORD*)a2 + 1) = 0;
  *((_QWORD*)a2 + 2) = 0;
  *(_QWORD*)a2 = 0;
  v4 = strlen(result + 14);
  GameRoutine_1a09ce0(a2, (char*)v3 + 14, v4);
  v5 = strlen((char*)v3 + 18);
  GameRoutine_1a09ce0(a2, (char*)v3 + 18, v5);
  v6 = *((_BYTE*)v3 + 12);
  if (v6 != 0) {
    v7 = *a2;
    if ((v7 & 1) != 0) {
      v11 = *((_QWORD*)a2 + 1);
      v10 = (*(_QWORD*)a2 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if (v11 != v10) {
      LABEL_24:
        v15 = *((unsigned __int8**)a2 + 2);
        *((_QWORD*)a2 + 1) = v11 + 1;
        goto LABEL_25;
      }
      v8 = *((unsigned __int8**)a2 + 2);
      if (v10 > 0x7FFFFFFFFFFFFFF2LL) {
        v14 = false;
        v9 = -9;
      LABEL_18:
        v11 = v10;
        v16 = fw_memory_g_heap_manager_ptr;
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
        memmove(v17, v8, v11);
        if (!v14 && v8 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18);
        }
        *((_QWORD*)a2 + 2) = v17;
        *(_QWORD*)a2 = v9 | 1;
        goto LABEL_24;
      }
      v12 = (2 * v10) | 7;
      if (v12 == 23) {
        v13 = 26;
      }
      else {
        v13 = v12 + 1;
      }
      if (v10 >= 0xC) {
        v9 = v13;
      }
      else {
        v9 = 23;
      }
    }
    else {
      if ((_DWORD)v7 != 44) {
        v11 = v7 >> 1;
        *a2 = v7 + 2;
        v15 = a2 + 1;
      LABEL_25:
        v19 = &v15[v11];
        *v19 = v6;
        v19[1] = 0;
        goto LABEL_26;
      }
      v8 = a2 + 1;
      v9 = 48;
      v10 = 22;
    }
    v14 = v10 == 22;
    goto LABEL_18;
  }
LABEL_26:
  v20 = v3[1];
  if ((unsigned int)v20 <= 4) {
    v21 = (char*)GameData_1ba81c8 + GameData_1ba81c8[v20];
  }
  else {
    v21 = "?";
  }
  v22 = strlen(v21);
  result = GameRoutine_1a09ce0(a2, v21, v22);
  if (*((_BYTE*)v3 + 15) != 69) {
    v23 = *v3;
    if ((unsigned int)v23 <= 0x22) {
      v24 = (&GameData_2006880)[v23];
    }
    else {
      v24 = "?";
    }
    v25 = strlen(v24);
    GameRoutine_1a09ce0(a2, v24, v25);
    GameRoutine_1a09ce0(a2, &GameData_1ad3c36, 2);
    v26 = v3[2];
    if ((unsigned int)v26 <= 8) {
      v27 = (char*)GameData_1ba81f0 + GameData_1ba81f0[v26];
    }
    else {
      v27 = "?";
    }
    v28 = strlen(v27);
    {
      GameRoutine_1a09ce0(a2, v27, v28);
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_character_107add0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v3 = GameData_212ee00[0];
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 17) = 33686018;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v6 = GameData_212fe80 + 2;
  *(_DWORD*)(v5 + 24) = 0;
  *(_QWORD*)v5 = v6;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(a1 + 32) = v5 + 24;
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(a1 + 48) = v5 + 24;
  *(_QWORD*)(a1 + 56) = v5;
  *(_QWORD*)(v5 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  *(_DWORD*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 164) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = game_character_CharacterBuilder_vtable;
  v7 = *v4;
  *(_QWORD*)(a1 + 24) = GameData_2006b00;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v7, 64, 16, 0);
  v8[2] = 0;
  v8[6] = 0;
  v8[7] = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 328) = v8;
  *(_QWORD*)(a1 + 336) = 1065353216;
  v8[5] = 0;
  *v8 = GameData_2006b58;
  v8[1] = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  v8[4] = v8 + 5;
  v8[3] = 0;
  *(_QWORD*)(a1 + 344) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 320) = v8 + 3;
  v9 = *v4;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 152, 16, 0);
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[11] = 0;
  v10[12] = 0;
  v10[13] = 0;
  v10[14] = 0;
  v10[15] = 0;
  v10[16] = 0;
  v10[17] = 0;
  v10[18] = 0;
  *(_QWORD*)(a1 + 584) = v10;
  v11 = fw_memory_HeapManager_Allocate_alt1(*v4, 32, 16, 0);
  *(_DWORD*)(v11 + 24) = 0;
  *(_QWORD*)v11 = v6;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(a1 + 600) = v11;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(a1 + 616) = v11;
  *(_QWORD*)(a1 + 592) = v11 + 24;
  *(_QWORD*)(a1 + 608) = v11 + 24;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 624) = a1;
  v12 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 304LL;
  v13 = fw_memory_HeapManager_Allocate_alt1(*v4, 56, 16, 0);
  *(_QWORD*)(v13 + 16) = 0;
  v14 = GameData_212e9b8[0];
  v15 = GameData_212e9c0[0];
  v16 = *(_QWORD*)(a1 + 312);
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 48) = v12;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 24) = v15 + 16;
  *(_QWORD*)(v13 + 36) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 304) = v13 + 24;
  *(_QWORD*)(a1 + 312) = v13;
  if (v16 == 0) {
    v19_.v19 = v13 + 24;
    v19_.v20 = v13;
    v17 = as_g_base_frame_counter;
  LABEL_7:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_8;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v13 = *(_QWORD*)(a1 + 312);
  v17 = as_g_base_frame_counter;
  v19_.v19 = *(_QWORD*)(a1 + 304);
  v19_.v20 = v13;
  if (v13 != 0) {
    goto LABEL_7;
  }
LABEL_8:
  GameRoutine_17db4d0((__int64*)(v17 + 224), &v19_.v19);
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak(v19_.v20);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) = *(_QWORD*)(a1 + 304);
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL) = 8;
  v18 = *(_QWORD*)(a1 + 8);
  strcpy((char*)(v18 + 16), "Character");
  *(_QWORD*)(v18 + 272) = 9;
}

__int64 (***game_character_1084940(__int64 (***result)(), char a2, float a3))()
{

#pragma clang fp contract(off)
  __int64 (***v4)();
  __int64 v5;
  float v6;
  __int64 v7;
  struct {
    __int64 (**v8)();
    float v9;
    char gap12_[20];
    __int64 (***v10)();
  } v8_;

  v4 = result;
  if ((a2 & 1) == 0) {
    v6 = *((float*)result + 87);
    if (a3 <= 0x0.0p+0f || a3 >= 0x1.0000000000000p+0f) {
      if (v6 == a3) {
        return result;
      }
    }
    else if (vabds_f32(v6, a3) < 0x1.0000000000000p-8f) {
      return result;
    }
  }
  *((float*)result + 87) = a3;
  v8_.v9 = a3;
  v8_.v8 = GameData_20076d8;
  v8_.v10 = &v8_.v8;
  CharacterBuilder_1083e90(result, (__int64)&v8_.v8);
  if (v8_.v10 == &v8_.v8) {
    v5 = 4;
    goto LABEL_10;
  }
  if (v8_.v10 != nullptr) {
    v5 = 5;
  LABEL_10:
    ((__int64 (*)(__int64))(*v8_.v10)[v5])((__int64)v8_.v10);
  }
  v8_.v9 = a3;
  v8_.v8 = GameData_2007758;
  v8_.v10 = &v8_.v8;
  CharacterBuilder_1083e90(v4, (__int64)&v8_.v8);
  result = v8_.v10;
  if (v8_.v10 == &v8_.v8) {
    v7 = 4;
  }
  else {
    if (v8_.v10 == nullptr) {
      return result;
    }
    v7 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v8_.v10)[v7])(
      (__int64)v8_.v10);
}

__int64 game_character_1084ea0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int16* v22;
  _QWORD* v24;
  __int64 v25;
  int v26;
  int v27;

  v2 = *a1;
  if (*a1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v4 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v24 = a1;
      v25 = a2;
      v26 = __cxa_guard_acquire(GameData_212df10);
      a2 = v25;
      v27 = v26;
      a1 = v24;
      if (v27 != 0) {
        *v4 = wld_Crc32(0, "ModelModule", 0xBu);
        __cxa_guard_release(GameData_212df10);
        a2 = v25;
        a1 = v24;
      }
    }
    v5 = *(_QWORD*)(v2 + 512);
    for (i = v5; i != *(_QWORD*)(v2 + 504); i -= 16) {
      v7 = *(_DWORD*)(i - 16);
      v5 -= 16;
      if (v7 == *v4) {
        if (*(_QWORD*)(v2 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          if (v8 != 0) {
            v9 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 168LL);
            if (v9 != 0) {
              v10 = *(_QWORD*)(*(_QWORD*)v9 + 8LL);
              if (v10 != 0) {
                v11 = a1;
                if (a2 != 0) {
                  v12 = a2;
                  v13 = strlen(a2);
                  a2 = v12;
                  v14 = v13;
                }
                else {
                  v14 = 0;
                }
                v15 = v10 + 8;
                v16 = *(unsigned __int16*)(v10 + 12);
                v17 = v10 + 8 + 16 * v16;
                v18 = *(_DWORD*)v17;
                if (*(_DWORD*)(v10 + 8) < *(_DWORD*)v17) {
                  do {
                    v21 = (__int64)v18 >> 3;
                    if (v14 > v21) {
                      v19 =
                          (*(unsigned __int8*)(a2 + v14 + ~v21) >> (v18 & 7)) &
                          1;
                    }
                    else {
                      v19 = 0;
                    }
                    v16 = *(unsigned __int16*)(v10 + 12 + 16 * v16 + 2 * v19);
                    v20 = v18 < *(_DWORD*)(v15 + 16 * v16);
                    v18 = *(_DWORD*)(v15 + 16 * v16);
                  } while (v20);
                  v17 = v15 + 16 * v16;
                }
                v22 = *(unsigned __int16**)(v17 + 8);
                if (v14 == *v22 &&
                    (unsigned int)memcmp(v22 + 1, a2, v14) == 0) {
                  if ((~(v17 - v10 - 24) & 0xFFFFFFFF0LL) != 0) {
                    return *v11;
                  }
                  else {
                    return 0;
                  }
                }
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

__attribute__((swiftcall)) void game_character_1085300(PSEUDO_X8 x8_,
                                                       _QWORD* a1, char a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  char* v8;
  unsigned int v9;
  unsigned int v10;
  bool v11;
  char* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  bool v19;

  v3 = a1[49];
  v4 = a1[50];
  if (v4 != 0) {
    v8 = "Jnt_C_Head";
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v9 = *(_DWORD*)(v3 + 11784);
    if (v9 - 24 >= 3 && v9 != 32) {
      if (v9 == 5) {
        v8 = "Jnt_C_Neck1";
      }
      else if ((a2 & 1) == 0 ||
               (v9 <= 0x21 ? (v11 = ((1LL << v9) & 0x248240000LL) == 0)
                           : (v11 = true),
                v11)) {
        v8 = "Loc_C_Center";
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v12 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v8 = v12;
    }
  }
  else {
    v10 = *(_DWORD*)(v3 + 11784);
    v8 = "Jnt_C_Head";
    if (v10 - 24 >= 3 && v10 != 32) {
      if (v10 == 5) {
        v8 = "Jnt_C_Neck1";
      }
      else if ((a2 & 1) == 0 ||
               ((v17 = v10 > 0x21, v18 = (1LL << v10) & 0x248240000LL, !v17)
                    ? (v19 = v18 == 0)
                    : (v19 = true),
                v19)) {
        v8 = "Loc_C_Center";
      }
    }
  }
  result = CharacterBuilder_1084a50((__int64)a1, v8);
  if (result != 0 ||
      (result = a1[51]) != 0 &&
          (result = GameRoutine_109f1e0(result, "Jnt_C_Spine1")) != 0) {
    *(_OWORD*)a3 = *(_OWORD*)(result + 48);
  }
  else {
    v14 = a1[1];
    v16 = *(_QWORD*)(v14 + 304);
    v15 = *(_QWORD*)(v14 + 312);
    *(_QWORD*)a3 = v16;
    *(_QWORD*)(a3 + 8) = v15;
  }
  {
    result;
    return;
  }
}

_QWORD* game_character_1085470(_QWORD* result, float32x4_t* a2, float32x4_t* a3,
                               float32x4_t* a4, float32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 v9;
  int16x4_t v10;
  int16x4_t v11;
  int16x4_t v12;
  int16x4_t v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int128 v17;
  char v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int128 v25;
  char v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int32* v31;
  _QWORD* v32;
  unsigned __int32 v33;
  __int64 v34;
  __int128 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int128 v41;
  char v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int128 v49;
  char v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int128 v55;
  char v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  struct {
    _QWORD v62[2];
    _QWORD* v63;
    char gap24_[8];
    _QWORD* v64;
  } v62_;

  v9 = (__int64)result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = (_QWORD*)__cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v61 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v61;
      result = (_QWORD*)__cxa_guard_release(&GameData_21a6130);
    }
  }
  LANES64(v10).n64_u64[0] =
      LANES64_OF(
          vmovn_s32(vceqq_f32(*a4, COERCE_AS(float32x4_t, GameData_21a6120))))
          .n64_u64[0];
  if ((LANES64(v10).n64_u8[0] & 1) == 0 || (LANES64(v10).n64_u8[2] & 1) == 0 ||
      (LANES64(v10).n64_u8[4] & 1) == 0 ||
      (LANES64(v11).n64_u64[0] =
           LANES64_OF(vmovn_s32(vceqq_f32(
                          *a5, COERCE_AS(float32x4_t, GameData_21a6120))))
               .n64_u64[0],
       (LANES64(v11).n64_u8[0] & 1) == 0) ||
      (LANES64(v11).n64_u8[2] & 1) == 0 || (LANES64(v11).n64_u8[4] & 1) == 0 ||
      (LANES64(v12).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(
                          *a2, COERCE_AS(float32x4_t, GameData_21a6120)))))
               .n64_u64[0],
       (LANES64(v12).n64_u8[0] & 1) == 0) &&
          (LANES64(v12).n64_u8[2] & 1) == 0 &&
          (LANES64(v12).n64_u8[4] & 1) == 0 &&
          (LANES64(v13).n64_u64[0] =
               LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(
                              *a3, COERCE_AS(float32x4_t, GameData_21a6120)))))
                   .n64_u64[0],
           (LANES64(v13).n64_u8[0] & 1) == 0) &&
          (LANES64(v13).n64_u8[2] & 1) == 0 &&
          (LANES64(v13).n64_u8[4] & 1) == 0) {
    v14 = CharacterBuilder_1083780(v9, "Loc_R_Weapon");
    if (v14 == nullptr) {
      goto LABEL_32;
    }
    v15 = *v14;
    v16 = v14;
    *((_DWORD*)v14 + 20) = LANES128(*(a2)).n128_u32[0];
    *((_DWORD*)v14 + 21) = LANES128(*(a2)).n128_u32[1];
    v17 = *((_OWORD*)v14 + 5);
    DWORD2(v17) = LANES128(*(a2)).n128_u32[2];
    *((_DWORD*)v14 + 32) |= 8u;
    v18 = *((_BYTE*)v14 + 28);
    *((_QWORD*)&v17 + 1) = DWORD2(v17);
    *((_OWORD*)v14 + 5) = v17;
    if ((v18 & 1) != 0) {
    LABEL_24:
      *(_BYTE*)(*(_QWORD*)(v15 + 24) + 504LL) = 1;
      v24 = *v16;
      *((_DWORD*)v16 + 24) = LANES128(*(a3)).n128_u32[0];
      *((_DWORD*)v16 + 25) = LANES128(*(a3)).n128_u32[1];
      v25 = *((_OWORD*)v16 + 6);
      DWORD2(v25) = LANES128(*(a3)).n128_u32[2];
      *((_DWORD*)v16 + 32) |= 0x10u;
      v26 = *((_BYTE*)v16 + 28);
      *((_QWORD*)&v25 + 1) = DWORD2(v25);
      *((_OWORD*)v16 + 6) = v25;
      if ((v26 & 1) != 0) {
      LABEL_31:
        *(_BYTE*)(*(_QWORD*)(v24 + 24) + 504LL) = 1;
      LABEL_32:
        result = CharacterBuilder_1083780(v9, "Loc_L_Weapon");
        if (result == nullptr) {
          return result;
        }
        v31 = &LANES128(*(a4)).n128_u32[2];
        v32 = result;
        *((_DWORD*)result + 20) = LANES128(*(a4)).n128_u32[0];
        v33 = LANES128(*(a4)).n128_u32[1];
        v34 = *result;
        *((_DWORD*)result + 21) = v33;
        v35 = *((_OWORD*)result + 5);
        DWORD2(v35) = *v31;
        *((_DWORD*)result + 32) |= 8u;
        LOBYTE(v31) = *((_BYTE*)result + 28);
        *((_QWORD*)&v35 + 1) = DWORD2(v35);
        *((_OWORD*)result + 5) = v35;
        if (((unsigned __int8)v31 & 1) != 0) {
        LABEL_40:
          *(_BYTE*)(*(_QWORD*)(v34 + 24) + 504LL) = 1;
          v40 = *v32;
          *((_DWORD*)v32 + 24) = LANES128(*(a5)).n128_u32[0];
          *((_DWORD*)v32 + 25) = LANES128(*(a5)).n128_u32[1];
          v41 = *((_OWORD*)v32 + 6);
          DWORD2(v41) = LANES128(*(a5)).n128_u32[2];
          *((_DWORD*)v32 + 32) |= 0x10u;
          v42 = *((_BYTE*)v32 + 28);
          *((_QWORD*)&v41 + 1) = DWORD2(v41);
          *((_OWORD*)v32 + 6) = v41;
          if ((v42 & 1) != 0) {
          LABEL_47:
            *(_BYTE*)(*(_QWORD*)(v40 + 24) + 504LL) = 1;
            return result;
          }
          v43 = *(_QWORD*)(v40 + 24);
          v44 = *((_DWORD*)v32 + 4);
          v62_.v63 = v32;
          v62_.v62[0] = GameData_1fc0970;
          v62_.v62[1] = v40;
          v62_.v64 = v62_.v62;
          v45 = Model_a661a0(v43, v44, (__int64)v62_.v62, 0);
          result = v62_.v64;
          if (v62_.v64 == v62_.v62) {
            v46 = 32;
          }
          else {
            if (v62_.v64 == nullptr) {
            LABEL_46:
              *((_DWORD*)v32 + 6) = v45;
              *((_BYTE*)v32 + 28) = 1;
              goto LABEL_47;
            }
            v46 = 40;
          }
          result = (_QWORD*)(*(__int64 (**)(__int64))(*v62_.v64 + v46))(
              (__int64)v62_.v64);
          goto LABEL_46;
        }
        v36 = *(_QWORD*)(v34 + 24);
        v37 = *((_DWORD*)v32 + 4);
        v62_.v63 = v32;
        v62_.v62[0] = GameData_1fc0970;
        v62_.v62[1] = v34;
        v62_.v64 = v62_.v62;
        v38 = Model_a661a0(v36, v37, (__int64)v62_.v62, 0);
        result = v62_.v64;
        if (v62_.v64 == v62_.v62) {
          v39 = 32;
        }
        else {
          if (v62_.v64 == nullptr) {
          LABEL_39:
            *((_DWORD*)v32 + 6) = v38;
            *((_BYTE*)v32 + 28) = 1;
            goto LABEL_40;
          }
          v39 = 40;
        }
        result = (_QWORD*)(*(__int64 (**)(__int64))(*v62_.v64 + v39))(
            (__int64)v62_.v64);
        goto LABEL_39;
      }
      v27 = *(_QWORD*)(v24 + 24);
      v28 = *((_DWORD*)v16 + 4);
      v62_.v63 = v16;
      v62_.v62[0] = GameData_1fc0970;
      v62_.v62[1] = v24;
      v62_.v64 = v62_.v62;
      v29 = Model_a661a0(v27, v28, (__int64)v62_.v62, 0);
      if (v62_.v64 == v62_.v62) {
        v30 = 32;
      }
      else {
        if (v62_.v64 == nullptr) {
        LABEL_30:
          *((_DWORD*)v16 + 6) = v29;
          *((_BYTE*)v16 + 28) = 1;
          goto LABEL_31;
        }
        v30 = 40;
      }
      (*(void (**)(__int64))(*v62_.v64 + v30))((__int64)v62_.v64);
      goto LABEL_30;
    }
    v19 = *(_QWORD*)(v15 + 24);
    v20 = *((_DWORD*)v16 + 4);
    v62_.v63 = v16;
    v62_.v62[0] = GameData_1fc0970;
    v62_.v62[1] = v15;
    v62_.v64 = v62_.v62;
    v21 = Model_a661a0(v19, v20, (__int64)v62_.v62, 0);
    if (v62_.v64 == v62_.v62) {
      v22 = 32;
    }
    else {
      if (v62_.v64 == nullptr) {
      LABEL_23:
        *((_DWORD*)v16 + 6) = v21;
        *((_BYTE*)v16 + 28) = 1;
        goto LABEL_24;
      }
      v22 = 40;
    }
    (*(void (**)(__int64))(*v62_.v64 + v22))((__int64)v62_.v64);
    goto LABEL_23;
  }
  if (*(_QWORD*)(v9 + 440) != 0) {
    v23 = "Loc_R_Weapon";
  }
  else {
    if (*(_QWORD*)(v9 + 432) == 0) {
      return result;
    }
    v23 = "Loc_L_Weapon";
  }
  result = CharacterBuilder_1083780(v9, v23);
  if (result != nullptr) {
    v47 = *result;
    v48 = result;
    *((_DWORD*)result + 20) = LANES128(*(a2)).n128_u32[0];
    *((_DWORD*)result + 21) = LANES128(*(a2)).n128_u32[1];
    v49 = *((_OWORD*)result + 5);
    DWORD2(v49) = LANES128(*(a2)).n128_u32[2];
    *((_DWORD*)result + 32) |= 8u;
    v50 = *((_BYTE*)result + 28);
    *((_QWORD*)&v49 + 1) = DWORD2(v49);
    *((_OWORD*)result + 5) = v49;
    if ((v50 & 1) != 0) {
      goto LABEL_59;
    }
    v51 = *(_QWORD*)(v47 + 24);
    v52 = *((_DWORD*)v48 + 4);
    v62_.v63 = v48;
    v62_.v62[0] = GameData_1fc0970;
    v62_.v62[1] = v47;
    v62_.v64 = v62_.v62;
    v53 = Model_a661a0(v51, v52, (__int64)v62_.v62, 0);
    result = v62_.v64;
    if (v62_.v64 == v62_.v62) {
      v54 = 32;
    }
    else {
      if (v62_.v64 == nullptr) {
      LABEL_58:
        *((_DWORD*)v48 + 6) = v53;
        *((_BYTE*)v48 + 28) = 1;
      LABEL_59:
        *(_BYTE*)(*(_QWORD*)(v47 + 24) + 504LL) = 1;
        v40 = *v48;
        *((_DWORD*)v48 + 24) = LANES128(*(a3)).n128_u32[0];
        *((_DWORD*)v48 + 25) = LANES128(*(a3)).n128_u32[1];
        v55 = *((_OWORD*)v48 + 6);
        DWORD2(v55) = LANES128(*(a3)).n128_u32[2];
        *((_DWORD*)v48 + 32) |= 0x10u;
        v56 = *((_BYTE*)v48 + 28);
        *((_QWORD*)&v55 + 1) = DWORD2(v55);
        *((_OWORD*)v48 + 6) = v55;
        if ((v56 & 1) != 0) {
          goto LABEL_47;
        }
        v57 = *(_QWORD*)(v40 + 24);
        v58 = *((_DWORD*)v48 + 4);
        v62_.v63 = v48;
        v62_.v62[0] = GameData_1fc0970;
        v62_.v62[1] = v40;
        v62_.v64 = v62_.v62;
        v59 = Model_a661a0(v57, v58, (__int64)v62_.v62, 0);
        result = v62_.v64;
        if (v62_.v64 == v62_.v62) {
          v60 = 32;
        }
        else {
          if (v62_.v64 == nullptr) {
          LABEL_65:
            *((_DWORD*)v48 + 6) = v59;
            *((_BYTE*)v48 + 28) = 1;
            goto LABEL_47;
          }
          v60 = 40;
        }
        result = (_QWORD*)(*(__int64 (**)(__int64))(*v62_.v64 + v60))(
            (__int64)v62_.v64);
        goto LABEL_65;
      }
      v54 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*v62_.v64 + v54))((__int64)v62_.v64);
    goto LABEL_58;
  }
  return result;
}

__attribute__((swiftcall)) void

game_character_10b49e0(PSEUDO_X8 x8_, __int64 result, _BYTE* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;

  if (a2 == nullptr) {
    goto LABEL_15;
  }
  v3 = *(_QWORD*)(result + 8);
  if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
    v4 = 0;
    v5 = *(_QWORD*)(result + 32);
    if (v5 == 0) {
    LABEL_15:
      *a3 = 0;
      a3[1] = 0;
      {
        result;
        return;
      }
    }
  }
  else {
    v4 = *(_QWORD*)(result + 16);
    v5 = *(_QWORD*)(result + 32);
    if (v5 == 0) {
      goto LABEL_15;
    }
  }
  v6 = *(_QWORD*)(result + 40);
  if (*(_QWORD*)(v5 + 8) == -1 || v4 == 0 || v6 == 0) {
    goto LABEL_15;
  }
  if (*a2 != 62) {
    result = CharacterBuilder_1084a50(v4, a2);
    if (result == 0) {
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  v10 = a2 + 1;
  v11 = result;
  if ((unsigned int)strcmp(a2 + 1, "Loc_C_Center") == 0) {
    v17 = *(unsigned __int8*)(v11 + 48);
    v18 = *(_QWORD*)(v6 + 392);
    v19 = *(_QWORD*)(v6 + 400);
    if (v19 != 0) {
      v10 = "Jnt_C_Head";
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      v20 = *(_DWORD*)(v18 + 11784);
      if (v20 - 24 >= 3 && v20 != 32) {
        if (v20 == 5) {
          v10 = "Jnt_C_Neck1";
        }
        else if (v17 == 0 || v20 > 0x21 ||
                 ((1LL << v20) & 0x248240000LL) == 0) {
          v10 = "Loc_C_Center";
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
    else {
      v23 = *(_DWORD*)(v18 + 11784);
      v10 = "Jnt_C_Head";
      if (v23 - 24 >= 3 && v23 != 32) {
        if (v23 == 5) {
          v10 = "Jnt_C_Neck1";
        }
        else if (*(_BYTE*)(v11 + 48) == 0 || v23 > 0x21 ||
                 ((1LL << v23) & 0x248240000LL) == 0) {
          v10 = "Loc_C_Center";
        }
      }
    }
  }
  if (GameData_21ec7b0 != 0) {
    v12 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v12 != 0 && (*(_BYTE*)(v12 + 113) & 0x80) != 0 &&
        GameRoutine_109ec70_alt1((__int64)v10, (__int64)"Loc_Reserve")) {
      v10 = "Loc_C_Trans";
    }
  }
  result = CharacterBuilder_1084a50(v6, v10);
  v13 = *(_QWORD*)(v11 + 56);
  v14 = *(_QWORD*)(v11 + 64) - v13;
  if (v14 == 0) {
  LABEL_27:
    if (result == 0) {
    LABEL_28:
      *a3 = 0;
      a3[1] = 0;
      {
        result;
        return;
      }
    }
  LABEL_30:
    *(_OWORD*)a3 = *(_OWORD*)(result + 48);
    {
      result;
      return;
    }
  }
  v15 = v14 >> 5;
  v16 = (__int64*)(v13 + 16);
  while (result != *(v16 - 2)) {
    v16 += 4;
    if (--v15 == 0) {
      goto LABEL_27;
    }
  }
  v22 = *v16;
  v21 = v16[1];
  *a3 = v22;
  a3[1] = v21;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_character_10b4c40(PSEUDO_X8 x8_,
                                                       __int64 a1, _BYTE* a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v10;
  __int64 v12;
  __int64 v13;
  long double result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _OWORD* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  unsigned int v34;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a2 != nullptr) {
    v3 = *(_QWORD*)(a1 + 8);
    if (v3 == 0 || *(_QWORD*)(v3 + 8) == -1) {
      v4 = 0;
      v5 = *(_QWORD*)(a1 + 32);
      if (v5 == 0) {
        result;
        return;
      }
    }
    else {
      v4 = *(_QWORD*)(a1 + 16);
      v5 = *(_QWORD*)(a1 + 32);
      if (v5 == 0) {
        result;
        return;
      }
    }
    v6 = *(_QWORD*)(a1 + 40);
    if (*(_QWORD*)(v5 + 8) != -1 && v4 != 0 && v6 != 0) {
      if (*a2 == 62) {
        v10 = a2 + 1;
        if ((unsigned int)strcmp(a2 + 1, "Loc_C_Center") == 0) {
          v25 = *(unsigned __int8*)(a1 + 48);
          v26 = *(_QWORD*)(v6 + 392);
          v27 = *(_QWORD*)(v6 + 400);
          if (v27 != 0) {
            v10 = "Jnt_C_Head";
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                      memory_order_relaxed);
            v28 = *(_DWORD*)(v26 + 11784);
            if (v28 - 24 >= 3 && v28 != 32) {
              if (v28 == 5) {
                v10 = "Jnt_C_Neck1";
              }
              else if (v25 == 0 || v28 > 0x21 ||
                       ((1LL << v28) & 0x248240000LL) == 0) {
                v10 = "Loc_C_Center";
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak(v27),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          else {
            v34 = *(_DWORD*)(v26 + 11784);
            v10 = "Jnt_C_Head";
            if (v34 - 24 >= 3 && v34 != 32) {
              if (v34 == 5) {
                v10 = "Jnt_C_Neck1";
              }
              else if (*(_BYTE*)(a1 + 48) == 0 || v34 > 0x21 ||
                       ((1LL << v34) & 0x248240000LL) == 0) {
                v10 = "Loc_C_Center";
              }
            }
          }
        }
        if (GameData_21ec7b0 != 0) {
          v12 = *(_QWORD*)(GameData_21ec7b0 + 8);
          if (v12 != 0 && (*(_BYTE*)(v12 + 113) & 0x80) != 0 &&
              GameRoutine_109ec70_alt1((__int64)v10, (__int64)"Loc_Reserve")) {
            v10 = "Loc_C_Trans";
          }
        }
        v13 = CharacterBuilder_1084a50(v6, v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v15 = *(_QWORD*)(a1 + 56);
        v16 = *(_QWORD*)(a1 + 64);
        if (v15 == v16) {
          v29 = a3;
          if (v13 == 0) {
            v13 = (__int64)math_6225d0(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            v29 = a3;
          }
          v30 = *(_OWORD*)(v13 + 16);
          *(_OWORD*)v29 = *(_OWORD*)v13;
          *(_OWORD*)(v29 + 16) = v30;
          result = *(long double*)(v13 + 32);
          v31 = *(_OWORD*)(v13 + 48);
          *(long double*)(v29 + 32) = result;
          *(_OWORD*)(v29 + 48) = v31;
        }
        else {
          v17 = v16 - v15;
          v18 = (_OWORD*)(v15 + 16);
          v19 = v17 >> 5;
          while (v13 != *((_QWORD*)v18 - 2)) {
            v18 += 2;
            if (--v19 == 0) {
              result;
              return;
            }
          }
          v32 = *(_OWORD*)(v13 + 16);
          *(_OWORD*)a3 = *(_OWORD*)v13;
          *(_OWORD*)(a3 + 16) = v32;
          result = *(long double*)(v13 + 32);
          v33 = *v18;
          *(long double*)(a3 + 32) = result;
          *(_OWORD*)(a3 + 48) = v33;
        }
      }
      else {
        v20 = (_QWORD*)CharacterBuilder_1084a50(v4, a2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v21 = v20[5];
        *(_QWORD*)(a3 + 32) = v20[4];
        *(_QWORD*)(a3 + 40) = v21;
        v22 = v20[7];
        *(_QWORD*)(a3 + 48) = v20[6];
        *(_QWORD*)(a3 + 56) = v22;
        v23 = v20[1];
        *(_QWORD*)a3 = *v20;
        *(_QWORD*)(a3 + 8) = v23;
        v24 = v20[3];
        *(_QWORD*)(a3 + 16) = v20[2];
        *(_QWORD*)(a3 + 24) = v24;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_character_10f6aa0(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __n128 result;
  __int64 v14;
  struct {
    __int64 v15[2];
    char* v16;
  } v15_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(unsigned __int8*)(a2 + 32);
  v5 = *(_QWORD*)(a2 + 40);
  v7 = (v4 & 1) == 0;
  v8 = *(_QWORD*)(a1 + 136);
  v9 = v4 >> 1;
  if (v7) {
    v10 = a2 + 33;
  }
  else {
    v10 = *(_QWORD*)(a2 + 48);
  }
  if (v7) {
    v11 = v9;
  }
  else {
    v11 = v5;
  }
  CharacterSound_10962d0((void*)(v15_.v15), v8, v10, v11),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v15_.v15[0] & 1) != 0) {
    v12 = v15_.v16;
  }
  else {
    v12 = (char*)v15_.v15 + 1;
  }
  CharacterSound_1095750((void*)(a3), v8, (__int64)v12, 0, *(float*)(a2 + 56)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_character_10fd340(unsigned __int64* a1, float32x4_t* a2)
{
  float32x4_t v2;
  int8x16_t v4;
  float32x4_t v5;
  float32x4_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float v9;
  int8x16_t v10;
  float v11;
  float v12;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  __int128* v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned __int32 v34;
  float32x4_t* v35;
  float32x4_t* v36;
  float32x4_t* v37;
  int8x16_t v38;

  v2 = *a2;
  v4 = vmulq_f32(v2, v2);
  LANES128(v4).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
          .n64_u64[0];
  LANES128(v4).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v4).n128_f32[0] == 0x0.0p+0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v37 = a2;
      v31 = __cxa_guard_acquire(&GameData_21a6190);
      a2 = v37;
      if (v31 != 0) {
        v32 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v32;
        __cxa_guard_release(&GameData_21a6190);
        a2 = v37;
      }
    }
    v7 = COERCE_AS(int8x16_t, GameData_21a6180);
  }
  else {
    LANES128(v4).n128_u64[1] = LANES128(v4).n128_u64[0];
    v5 = vrsqrteq_f32(v4);
    v6 = vmulq_f32(v5, vrsqrtsq_f32(v5, vmulq_f32(v4, v5)));
    v7 = vbicq_s8(
        vmulq_f32(v2, vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v4, v6)))),
        vceqzq_f32(v4));
    if (LANES128(v7).n128_f32[1] < 0x0.0p+0f) {
      v7 = vnegq_f32(v7);
    }
  }
  LANES128(*(a2)).n128_u64[0] = LANES128(v7).n128_u64[0];
  v8 = *a2;
  LANES128(v8).n128_u64[1] = LANES128(v7).n128_u32[2];
  *a2 = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v35 = a2;
    v13 = __cxa_guard_acquire(&GameData_21a6190);
    a2 = v35;
    if (v13 != 0) {
      v14 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v14;
      __cxa_guard_release(&GameData_21a6190);
      a2 = v35;
    }
  }
  v10 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), *a2);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  v9 = fminf(fmaxf(LANES128(v10).n128_f32[0], -0x1.0000000000000p+0f),
             0x1.0000000000000p+0f);
  PSEUDO_LOW_LANE128(v10, n128_f32,
                     sqrtf(0x1.0000000000000p+0f - (float)(v9 * v9)));
  if (v9 >= 0x0.0p+0f) {
    v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v16 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v18 = v9 / LANES128(v10).n128_f32[0];
    v19 = LANES128(v10).n128_f32[0] / v9;
    PSEUDO_LOW_LANE128(v10, n128_f32,
                       v19 *
                           (float)((float)((float)((float)((float)(v17 +
                                                                   (float)((float)((
                                                                                       float)((
                                                                                                  float)(v16 + (float)((float)((float)((float)(v15 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v19 * v19)) - *((float*)GameData_212c2f0 + 1)) * (float)(v19 * v19))) * (float)(v19 * v19)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v19 *
                                                                                                                               v19))) *
                                                                                              (float)(v19 *
                                                                                                      v19)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v19 *
                                                                                   v19))) *
                                                           (float)(v19 * v19)) -
                                                   *(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                             (_QWORD)
                                                                 GameData_212c2f0 +
                                                             12)) *
                                           (float)(v19 * v19)) +
                                   0x1.0000000000000p+0f));
    v20 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v18 * (float)((
                              float)((float)((float)((float)(v17 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v16 + (float)((float)((float)((float)(v15 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v18 * v18)) - *((float*)GameData_212c2f0 + 1)) * (float)(v18 * v18))) * (float)(v18 * v18)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v18 *
                                                                                                                               v18))) *
                                                                                              (float)(v18 *
                                                                                                      v18)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v18 *
                                                                                   v18))) *
                                                     (float)(v18 * v18)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v18 * v18)) +
                          0x1.0000000000000p+0f)));
    if (v9 <= 0x1.6a09e60000000p-1f) {
      PSEUDO_LOW_LANE128(v10, n128_f32, v20);
    }
  }
  else if (v9 >= -0x1.6a09e60000000p-1f) {
    v12 = (float)-v9 / LANES128(v10).n128_f32[0];
    PSEUDO_LOW_LANE128(
        v10, n128_f32,
        (float)(PSEUDO_UNFUSED(
            v12 *
            (float)((
                        float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v12 *
                                                                                                                                                                                                                                                                                                                                                                                                v12))) *
                                                                                                                                                                                                                                                                                                       (float)(v12 *
                                                                                                                                                                                                                                                                                                               v12))) *
                                                                                                                                                                                                                                                                                    (float)(v12 *
                                                                                                                                                                                                                                                                                            v12))) *
                                                                                                                                                                                                                                                            (float)(v12 *
                                                                                                                                                                                                                                                                    v12))) *
                                                                                                                                                                         (float)(v12 *
                                                                                                                                                                                 v12))) *
                                                                          (float)(v12 *
                                                                                  v12))) *
                                                       (float)(v12 * v12))) *
                               (float)(v12 * v12)) +
                    0x1.0000000000000p+0f))) +
            0x1.921fb60000000p+0f);
  }
  else {
    v11 = (float)-LANES128(v10).n128_f32[0] / v9;
    PSEUDO_LOW_LANE128(
        v10, n128_f32,
        0x1.921fb60000000p+1f -
            (float)(PSEUDO_UNFUSED(
                v11 *
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c2f0 +
                                                     12) -
                                           (float)((
                                                       float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((float)-(
                                                                                                                                                 float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(
                                                                                                                                                                                                                                                   float*)((char*)((
                                                                                                                                                                                                                                                               __int128*)0x10LL) +
                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                           float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((
                                                                                                                                                                                                                                                                                                                                                                       _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                                                                                   (_QWORD)
                                                                                                                                                                                                                                                                                                                                                                       GameData_212c2f0) +
                                                                                                                                                                                                                                                                                                                                                         (float)((
                                                                                                                                                                                                                                                                                                                                                                     float)-(float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                          GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                      1) -
                                                                                                                                                                                                                                                                                                                                                                                    (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                            (float)(v11 *
                                                                                                                                                                                                                                                                                                                                                                                                    v11))) *
                                                                                                                                                                                                                                                                                                                                                                 (float)(v11 *
                                                                                                                                                                                                                                                                                                                                                                         v11))) *
                                                                                                                                                                                                                                                                                                                                                 (float)(v11 *
                                                                                                                                                                                                                                                                                                                                                         v11))) *
                                                                                                                                                                                                                                                       (float)(v11 *
                                                                                                                                                                                                                                                               v11))) *
                                                                                                                                                                                                                                       (float)(v11 *
                                                                                                                                                                                                                                               v11))) *
                                                                                                                                             (float)(v11 *
                                                                                                                                                     v11))) *
                                                   (float)(v11 * v11))) *
                                (float)(v11 * v11)) +
                        0x1.0000000000000p+0f))));
  }
  if (LANES128(v10).n128_f32[0] > 0x1.a36e2e0000000p-14f &&
      LANES128(v10).n128_f32[0] > 0x1.0c15240000000p-1f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v36 = a2;
      v34 = LANES128(v10).n128_u32[0];
      v29 = __cxa_guard_acquire(&GameData_21a6190);
      PSEUDO_LOW_LANE128(v10, n128_u32, v34);
      a2 = v36;
      if (v29 != 0) {
        v30 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v30;
        __cxa_guard_release(&GameData_21a6190);
        PSEUDO_LOW_LANE128(v10, n128_u32, v34);
        a2 = v36;
      }
    }
    PSEUDO_LOW_LANE128(v10, n128_f32,
                       0x1.0c15240000000p-1f / LANES128(v10).n128_f32[0]);
    GameRoutine_109da60((void*)(&v38), (float32x4_t*)&GameData_21a6180, a2,
                        v10);
    v24 = vmulq_f32(v38, v38);
    LANES128(v24).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
            .n64_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
    v25 = vrsqrteq_f32(v24);
    v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v24, v25)));
    v27 = vbicq_s8(
        vmulq_f32(v38, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v24, v26)))),
        vceqzq_f32(v24));
    v38 = v27;
    if (LANES128(v24).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) != 0) {
        v28 = &GameData_21a6180;
      }
      else {
        v28 = &GameData_21a6180;
        if ((unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
          v33 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v33;
          __cxa_guard_release(&GameData_21a6190);
        }
      }
    }
    else {
      if (LANES128(v27).n128_f32[1] < 0x0.0p+0f) {
        v38 = vnegq_f32(v27);
      }
      v28 = (__int128*)&v38;
    }
    v22 = *(_QWORD*)v28;
    v23 = *((_QWORD*)v28 + 1);
  }
  else {
    v22 = LANES128(*(a2)).n128_u64[0];
    v23 = LANES128(*(a2)).n128_u64[1];
  }
  *a1 = v22;
  a1[1] = v23;
}

__attribute__((swiftcall)) void

game_character_111a1c0(PSEUDO_X8 x8_, __int64 a1, int8x16_t* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  __int64 v8;

  v3 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v8 = 0;
  v6 = (__typeof__(v6)){0};
  GameRoutine_109ded0(&v6, a2, v3);
  *(_OWORD*)a3 = v6;
  v5 = v8;
  *(_QWORD*)(a3 + 16) = v7;
  *(_QWORD*)(a3 + 24) = v5;
}

#pragma GCC visibility pop
