#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e74e0(_QWORD);
__int64 GameRoutine_19220e0(__int64 result, _BYTE*, char);
__int64 GameRoutine_1922fe0(unsigned __int8, __int64, unsigned __int64, __int64,
                            unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ec40(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memchr(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1_stoi(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1acaad4;
extern _UNKNOWN GameData_1ae0619;
extern _UNKNOWN GameData_1ae9560;
extern _UNKNOWN GameData_1af4ee0;
extern __int64 GameData_21c9f60;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char* GameData_2110a78;
extern char* GameData_2110bc0;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
__int64 SpineSlotChecker_Unknown3(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 SpineSlotChecker_Unknown4(__int64 result, int* a2);
__int64 SpineSlotChecker_19233d0_alt1(__int64 result) __asm__(
    "SpineSlotChecker_19233d0");
__int64 SpineSlotChecker_1923b20(__int64 result, __int64 a2);
__int64 SpineSlotChecker_19244a0(__int64 a1, unsigned __int8 a2);
__int64 SpineSlotChecker_19248c0(__int64 a1);
__int64 SpineSlotChecker_1924b40(_QWORD* a1);
__int64 SpineSlotChecker_Unknown2(__int64 result);
__int64 GameRoutine_1917900(__int64 result, _QWORD*);
__int64 GameRoutine_1922c00(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
extern char* GameData_2110a28[7];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 SpineSlotChecker_19220e0(__int64 result, _BYTE* a2, char a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
const char* SpineSlotChecker_19233d0(const char* result);

__int64 SpineSlotChecker_19220e0(__int64 result, _BYTE* a2, char a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _BYTE* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  _QWORD v16[2];
  char* v17;
  _QWORD v18[2];
  __int64 v19;

  if ((*(_BYTE*)result & 1) == 0) {
    *(_WORD*)result = 0;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    *(_WORD*)(result + 24) = 0;
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      goto LABEL_4;
    }
    goto LABEL_7;
  }
  **(_BYTE**)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  if ((*(_BYTE*)(result + 24) & 1) == 0) {
    goto LABEL_6;
  }

LABEL_3:
  **(_BYTE**)(result + 40) = 0;
  *(_QWORD*)(result + 32) = 0;
  if ((*(_BYTE*)(result + 48) & 1) != 0) {
  LABEL_4:
    **(_BYTE**)(result + 64) = 0;
    *(_QWORD*)(result + 56) = 0;
    goto LABEL_8;
  }

LABEL_7:
  *(_WORD*)(result + 48) = 0;

LABEL_8:
  v4 = result + 72;
  if ((*(_BYTE*)(result + 72) & 1) != 0) {
    **(_BYTE**)(result + 88) = 0;
    *(_QWORD*)(result + 80) = 0;
    if (a2 == nullptr) {
      return result;
    }
  }
  else {
    *(_WORD*)(result + 72) = 0;
    if (a2 == nullptr) {
      return result;
    }
  }
  if (*a2 != 0) {
    v5 = result;
    v7 = strlen(a2);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(v7);
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (v7 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                  16, 0);
      v16[1] = v8;
      v17 = v10;
      v9 = a2;
      v16[0] = v11 | 1;
    }
    else {
      v9 = a2;
      LOBYTE(v16[0]) = 2 * v7;
      v10 = (char*)v16 + 1;
      if (v7 == 0) {
      LABEL_22:
        v10[v8] = 0;
        v18[1] = 0;
        v19 = 0;
        v18[0] = 0;
        v12 = GameRoutine_1917900((__int64)v18, v16);
        GameRoutine_1922c00(v5, v12);
        if ((v18[0] & 1) != 0 && v19 != 0) {
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v13);
        }
        if ((v16[0] & 1) != 0 && v17 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v14);
        }
        if ((unsigned __int8)(a3 - 1) > 6u) {
          v15 = &GameData_1a9f09e;
        }
        else {
          v15 = GameData_2110a28[(unsigned __int8)(a3 - 1)];
        }
        return GameRoutine_60a020(v4, v15);
      }
    }
    memcpy(v10, v9, v8);
    goto LABEL_22;
  }
  return result;
}

__int64 SpineSlotChecker_Unknown3(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char** v3;
  __int64 i;
  __int64 v8;
  unsigned __int8 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8 v15;
  unsigned __int64 v16;

  v3 = &GameData_2110a78;
  for (i = 0; i != 16; i += 4) {
    v8 = (__int64)*(v3 - 2);
    if (v8 != 0) {
      v9 = *((_BYTE*)v3 - 24);
      if (v9 != 0) {
        v10 = strlen(*(v3 - 2));
        if ((GameRoutine_1922fe0(v9, a2, a3, v8, v10) & 1) != 0) {
          *(_DWORD*)(a1 + 8) |= 1 << i;
        }
      }
    }
    v11 = (__int64)*v3;
    if (*v3 != nullptr) {
      v12 = *((_BYTE*)v3 - 8);
      if (v12 != 0) {
        v13 = strlen(*v3);
        if ((GameRoutine_1922fe0(v12, a2, a3, v11, v13) & 1) != 0) {
          *(_DWORD*)(a1 + 8) |= 2 << i;
        }
      }
    }
    v14 = (__int64)v3[2];
    if (v14 != 0) {
      v15 = *((_BYTE*)v3 + 8);
      if (v15 != 0) {
        v16 = strlen(v3[2]);
        if ((GameRoutine_1922fe0(v15, a2, a3, v14, v16) & 1) != 0) {
          *(_DWORD*)(a1 + 8) |= 4 << i;
        }
      }
    }
    v3 += 8;
  }
  return a1;
}

__int64 SpineSlotChecker_Unknown4(__int64 result, int* a2)
{
  int v2;
  __int16 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = *(_DWORD*)(result + 8);
  v3 = 2 * v2;
  v4 = (2 * (_WORD)v2) & 8;
  if ((v2 & 3) != 0) {
    v5 = -2185;
  }
  else {
    v5 = -2188;
  }
  v6 = v5 & v2;
  if ((v2 & 3) != 0) {
    v4 = 8;
  }
  if ((v2 & 0x30) != 0) {
    v7 = -2177;
  }
  else {
    v7 = -2225;
  }
  v8 = v6 | v4;
  v9 = v3 & 0x80;
  v10 = v8 & v7;
  v11 = v3 & 0x800;
  if ((v2 & 0x30) != 0) {
    v9 = 128;
  }
  v12 = v10 | v9;
  if ((v2 & 0x300) != 0) {
    v13 = -2049;
  }
  else {
    v13 = -2817;
  }
  v14 = v12 & v13;
  if ((*(_DWORD*)(result + 8) & 0x300) != 0) {
    v11 = 2048;
  }
  v15 = v14 | v11;
  *(_DWORD*)(result + 8) = v15;
  *a2 = v15;
  return result;
}

const char* SpineSlotChecker_19233d0(const char* result)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    char* v26;
  } v24_;

  if (result == nullptr) {
    return result;
  }
  v1 = (__int64)result;
  v2 = strlen_alt1(result);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v5, 16, 0);
    v24_.v25 = v3;
    v24_.v26 = v4;
    v24_.v24 = v5 | 1;
    goto LABEL_10;
  }
  LOBYTE(v24_.v24) = 2 * v2;
  v4 = (char*)&v24_.v24 + 1;
  if (v2 != 0) {
  LABEL_10:
    memcpy_alt1((__int64)v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = (__int64)v24_.v26;
  if ((v24_.v24 & 1) != 0) {
    v7 = v24_.v25;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v24_.v24 >> 1;
  }
  if ((v24_.v24 & 1) != 0) {
    v8 = v24_.v26;
  }
  else {
    v8 = (char*)&v24_.v24 + 1;
  }
  if (v7 >= 0x1C) {
    v9 = 28;
  }
  else {
    v9 = v7;
  }
  if (memcmp_alt1((__int64)v8, (__int64)"Contents:/UI/Face/Hell.sprop", v9) ==
          0 &&
      v7 == 28) {
    result = (_BYTE*)(((_UNKNOWN*)0x0LL) + 1);
  }
  else {
    if (v7 >= 0x1E) {
      v11 = 30;
    }
    else {
      v11 = v7;
    }
    v12 = memcmp_alt1((__int64)v8, (__int64)"Contents:/UI/Face/Shadow.sprop",
                      v11);
    if (v7 != 30 || v12 != 0) {
      if (v7 >= 0x21) {
        v15 = 33;
      }
      else {
        v15 = v7;
      }
      v16 = memcmp_alt1((__int64)v8,
                        (__int64)"Contents:/UI/Face/EyeShadow.sprop", v15);
      if (v7 != 33 || v16 != 0) {
        v17 = memcmp_alt1((__int64)v8,
                          (__int64)"Contents:/UI/Face/Memory.sprop", v11);
        if (v7 != 30 || v17 != 0) {
          if (v7 >= 0x20) {
            v18 = 32;
          }
          else {
            v18 = v7;
          }
          v19 = memcmp_alt1((__int64)v8,
                            (__int64)"Contents:/UI/Face/Guardian.sprop", v18);
          if (v7 != 32 || v19 != 0) {
            if (v7 >= 0x1F) {
              v20 = 31;
            }
            else {
              v20 = v7;
            }
            v21 = memcmp_alt1((__int64)v8,
                              (__int64)"Contents:/UI/Face/Phantom.sprop", v20);
            if (v7 != 31 || v21 != 0) {
              if (v7 >= 0x1B) {
                v22 = 27;
              }
              else {
                v22 = v7;
              }
              if (memcmp_alt1((__int64)v8,
                              (__int64)"Contents:/UI/Face/God.sprop",
                              v22) == 0 &&
                  v7 == 27) {
                result = (_BYTE*)((_UNKNOWN*)0x7LL);
              }
              else {
                result = nullptr;
              }
            }
            else {
              result = (_BYTE*)((_UNKNOWN*)0x6LL);
            }
          }
          else {
            result = (_BYTE*)((_UNKNOWN*)0x5LL);
          }
        }
        else {
          result = (_BYTE*)((_UNKNOWN*)0x4LL);
        }
      }
      else {
        result = (_BYTE*)(((_UNKNOWN*)0x0LL) + 3);
      }
    }
    else {
      result = (_BYTE*)(((_UNKNOWN*)0x0LL) + 2);
    }
  }
  if ((v24_.v24 & 1) != 0 && v6 != 0) {
    v13 = (unsigned int)result;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v6);
    return (const char*)v13;
  }
  return result;
}

__int64 SpineSlotChecker_1923b20(__int64 result, __int64 a2)
{
  _BYTE* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;

  if ((*(_BYTE*)result & 1) != 0) {
    **(_BYTE**)(result + 16) = 0;
    *(_QWORD*)(result + 8) = 0;
    if (a2 == 0) {
      return result;
    }
  }
  else {
    *(_WORD*)result = 0;
    if (a2 == 0) {
      return result;
    }
  }
  v2 = *(_BYTE**)(a2 + 40);
  if (v2 != nullptr && *v2 != 0) {
    v3 = result;
    v4 = strlen(*(_QWORD*)(a2 + 40));
    if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_63;
    }
    v5 = v4;
    if (v4 >= 0x17) {
      if ((v4 | 7) == 0x17) {
        v7 = 26;
      }
      else {
        v7 = (v4 | 7) + 1;
      }
      v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7,
                                                 16, 0);
      v27 = v5;
      v28 = v6;
      v26 = v7 | 1;
    }
    else {
      LOBYTE(v26) = 2 * v4;
      v6 = (char*)&v26 + 1;
      if (v4 == 0) {
      LABEL_16:
        v6[v5] = 0;
        if ((v26 & 1) != 0) {
          v8 = v27;
        }
        else {
          v8 = (unsigned __int64)(unsigned __int8)v26 >> 1;
        }
        if ((v26 & 1) != 0) {
          v9 = v28;
        }
        else {
          v9 = (char*)&v26 + 1;
        }
        v4 = memchr(v9, 95);
        if (v4 == 0 || v4 - (_QWORD)v9 == -1) {
        LABEL_41:
          if ((*(_BYTE*)v3 & 1) != 0) {
            *(_QWORD*)(v3 + 8) = 18;
            v14 = *(char**)(v3 + 16);
          }
          else {
            *(_BYTE*)v3 = 36;
            v14 = (char*)(v3 + 1);
          }
          strcpy(v14, "Contents:/UI/Face/");
          if ((v26 & 1) != 0) {
            v15 = v28;
          }
          else {
            v15 = (char*)&v26 + 1;
          }
          if ((v26 & 1) != 0) {
            v16 = v27;
          }
          else {
            v16 = (unsigned __int64)(unsigned __int8)v26 >> 1;
          }
          v17 = GameRoutine_1a09ce0(v3, v15, v16);
          v18 = GameRoutine_1a09ce0(v17, "/", 1);
          if ((v26 & 1) != 0) {
            v19 = v28;
          }
          else {
            v19 = (char*)&v26 + 1;
          }
          if ((v26 & 1) != 0) {
            v20 = v27;
          }
          else {
            v20 = (unsigned __int64)(unsigned __int8)v26 >> 1;
          }
          v21 = GameRoutine_1a09ce0(v18, v19, v20);
          GameRoutine_1a09ce0(v21, ".spdb", 5);
          if ((v26 & 1) != 0 && v28 != nullptr) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
          }
          return v3;
        }
        if (v8 >= v4 - (unsigned __int64)v9) {
          v8 = v4 - (_QWORD)v9;
        }
        if (v8 < 0xFFFFFFFFFFFFFFF7LL) {
          if (v8 >= 0x17) {
            if ((v8 | 7) == 0x17) {
              v11 = 26;
            }
            else {
              v11 = (v8 | 7) + 1;
            }
            v10 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v11, 16, 0);
            v24 = v8;
            v25 = v10;
            v23 = v11 | 1;
          }
          else {
            LOBYTE(v23) = 2 * v8;
            v10 = (char*)&v23 + 1;
            if (v8 == 0) {
            LABEL_35:
              v12 = v26;
              v10[v8] = 0;
              if ((v12 & 1) != 0 && v28 != nullptr) {
                v13 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v13 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
              }
              v26 = v23;
              v27 = v24;
              v28 = v25;
              goto LABEL_41;
            }
          }
          memmove(v10, v9, v8);
          goto LABEL_35;
        }
      LABEL_63:
        GameRoutine_60a1d0(v4);
      }
    }
    memmove(v6, v2, v5);
    goto LABEL_16;
  }
  return result;
}

__int64 SpineSlotChecker_19244a0(__int64 a1, unsigned __int8 a2)
{
  int v4;
  void* v5;
  unsigned __int64 v6;
  unsigned __int8 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v19;
  _BYTE v20[23];

  v20[22] = 0;
  v19 = 44;
  *(_QWORD*)&v20[8] = 0x9E83E3A583E3B782LL;
  *(_QWORD*)&v20[14] = 0xAB83E3BC83E39E83LL;
  v4 = *(unsigned __int8*)(a1 + 32);
  *(_QWORD*)v20 = 0xE3A482E35F444946LL;
  if (v4 == 1) {
    v5 = &GameData_1ae9560;
  }
  else {
    if (v4 != 2) {
      goto LABEL_6;
    }
    v5 = &GameData_1acaad4;
  }
  GameRoutine_1a09ce0(&v19, v5, 3);

LABEL_6:
  v6 = *(unsigned __int8*)(a1 + 34);
  if (v6 <= 3) {
    GameRoutine_1a09ce0(&v19, (&GameData_2110bc0)[v6], 1);
  }
  v7 = v19;
  v8 = *(__int64**)(GameData_21c9f60 + 64);
  v9 = *(__int64**)(GameData_21c9f60 + 72);
  if (v8 == v9) {
  LABEL_24:
    v13 = 0;
    if ((v7 & 1) == 0) {
      return v13;
    }
    goto LABEL_25;
  }
  v10 = a2;
  if ((v19 & 1) != 0) {
    v11 = *(_BYTE**)&v20[15];
  }
  else {
    v11 = v20;
  }
  if ((v19 & 1) != 0) {
    v12 = *(_QWORD*)&v20[7];
  }
  else {
    v12 = v19 >> 1;
  }
  while (1) {
    v13 = *v8;
    v14 = *(_BYTE**)(*v8 + 40);
    if (v14 != nullptr && *v14 != 0 && *(unsigned __int8*)(v13 + 48) == v10) {
      v15 = *(_QWORD*)(v13 + 8);
      v16 = strlen(v15);
      if (v16 == v12) {
        if (v16 == -1) {
          GameRoutine_60a230(-1);
        }
        if ((unsigned int)memcmp(v11, v15, v16) == 0) {
          break;
        }
      }
    }
    if (++v8 == v9) {
      goto LABEL_24;
    }
  }
  if ((v7 & 1) != 0) {
  LABEL_25:
    if (*(_QWORD*)&v20[15] != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v17);
    }
  }
  return v13;
}

__int64 SpineSlotChecker_19248c0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned int v4;
  __int64 v5;
  _BYTE* v6;
  unsigned int v7;
  __int64 v8;
  char* v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = AssetTableFile_7e74e0(a1);
  if (v2 != 0) {
    result = *(unsigned __int8*)(v2 + 48);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v4 = (unsigned __int8)GameRoutine_67ec40(a1);
  if (v4 > 2) {
    if (v4 == 3) {
      return 5;
    }
    if (v4 != 6) {
      return 0;
    }
  }
  else if (v4 != 1) {
    if (v4 == 2) {
      return 6;
    }
    return 0;
  }
  v5 = AssetTableFile_7e74e0(a1);
  v20 = 0;
  v21 = 0;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if (v5 != 0 && (v6 = *(_BYTE**)(v5 + 40)) != nullptr) {
    v7 = (unsigned __int8)*v6;
    if (*v6 != 0) {
      GameRoutine_19220e0((__int64)&v20, v6, *(_BYTE*)(v5 + 48));
      v7 = (unsigned __int8)v20;
      v8 = v21;
    }
    else {
      v8 = 0;
    }
  }
  else {
    v8 = 0;
    v7 = 0;
  }
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 3) {
    goto LABEL_28;
  }
  v9 = (v7 & 1) != 0 ? v22 : (char*)&v20 + 1;
  if ((unsigned int)(unsigned __int8)*v9 - 58 < 0xFFFFFFF6) {
    goto LABEL_28;
  }
  v10 = (unsigned __int8*)&v20 + 2;
  if ((v7 & 1) != 0) {
    v10 = (unsigned __int8*)(v22 + 1);
  }
  if ((unsigned int)*v10 - 58 >= 0xFFFFFFF6 &&
      ((v7 & 1) != 0 ? (v11 = (unsigned __int8*)(v22 + 2))
                     : (v11 = (unsigned __int8*)&v20 + 3),
       (unsigned int)*v11 - 58 >= 0xFFFFFFF6)) {
    result = (unsigned int)std___1_stoi(&v20, 0, 10) - 550 < 0xFFFFFFE2;
    if ((v29 & 1) != 0) {
    LABEL_29:
      if (v31 != 0) {
        v12 = result;
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v13);
        result = v12;
      }
    }
  }
  else {
  LABEL_28:
    result = 1;
    if ((v29 & 1) != 0) {
      goto LABEL_29;
    }
  }
  if ((v26 & 1) != 0 && v28 != 0) {
    v14 = result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    result = v14;
  }
  if ((v23 & 1) != 0 && v25 != 0) {
    v16 = result;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    result = v16;
  }
  if ((v20 & 1) != 0 && v22 != nullptr) {
    v18 = result;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    return v18;
  }
  return result;
}

__int64 SpineSlotChecker_1924b40(_QWORD* a1)
{
  char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;

  if (a1[41] != 0) {
    v2 = (char*)a1[41];
  }
  else {
    v2 = &GameData_1a9f09e;
  }
  v3 = strlen(v2);
  v4 = v3;
  if (v3 >= 6) {
    v5 = 6;
  }
  else {
    v5 = v3;
  }
  v6 = memcmp(v2, &GameData_1af4ee0, v5);
  if (v4 == 6 && v6 == 0) {
  LABEL_32:
    LODWORD(v10) = 1;
  }
  else {
    v8 = game_HashString(&GameData_1ae0619);
    v9 = a1[45];
    LODWORD(v10) = 0;
    if (v9 != 0 && a1[47] != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = v8;
        if (v8 >= v9) {
          v12 = v8 % v9;
        }
      }
      else {
        v12 = v11 & v8;
      }
      v10 = *(_QWORD**)(a1[44] + 8 * v12);
      if (v10 != nullptr) {
        v13 = (_QWORD*)*v10;
        if (*v10 != 0) {
          if ((v9 & v11) == 0) {
            while (1) {
              v15 = v13[1];
              if (v8 == v15) {
                if (v13[2] == v8) {
                  goto LABEL_32;
                }
              }
              else if ((v15 & v11) != v12) {
                goto LABEL_34;
              }
              v13 = (_QWORD*)*v13;
              LODWORD(v10) = 0;
              if (v13 == nullptr) {
                return (unsigned int)v10;
              }
            }
          }
          while (1) {
            v14 = v13[1];
            if (v8 == v14) {
              if (v13[2] == v8) {
                goto LABEL_32;
              }
            }
            else {
              if (v14 >= v9) {
                v14 %= v9;
              }
              if (v14 != v12) {
                break;
              }
            }
            v13 = (_QWORD*)*v13;
            LODWORD(v10) = 0;
            if (v13 == nullptr) {
              return (unsigned int)v10;
            }
          }
        }
      LABEL_34:
        LODWORD(v10) = 0;
      }
    }
  }
  return (unsigned int)v10;
}

__int64 SpineSlotChecker_Unknown2(__int64 result)
{
  *(_DWORD*)(result + 8) = 0;
  return result;
}

#pragma GCC visibility pop
