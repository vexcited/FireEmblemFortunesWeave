#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7f9b60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a854c2;
extern _UNKNOWN GameData_1a891bb;
extern _UNKNOWN GameData_1a8d213;
extern _UNKNOWN GameData_1a8d257;
extern _UNKNOWN GameData_1a98bab;
extern _UNKNOWN GameData_1a9c804;
extern _UNKNOWN GameData_1a9c809;
extern _UNKNOWN GameData_1aa828d;
extern _UNKNOWN GameData_1aabf8a;
extern _UNKNOWN GameData_1aafdec;
extern _UNKNOWN GameData_1aafe28;
extern _UNKNOWN GameData_1aafe2d;
extern _UNKNOWN GameData_1ab397f;
extern _UNKNOWN GameData_1ab7cf6;
extern _UNKNOWN GameData_1ab7d01;
extern _UNKNOWN GameData_1abb9fd;
extern _UNKNOWN GameData_1abba08;
extern _UNKNOWN GameData_1abba0e;
extern _UNKNOWN GameData_1abba14;
extern _UNKNOWN GameData_1abf8b7;
extern _UNKNOWN GameData_1abf8bc;
extern _UNKNOWN GameData_1abf8c1;
extern _UNKNOWN GameData_1abf8cc;
extern _UNKNOWN GameData_1abf8d7;
extern _UNKNOWN GameData_1ac3020;
extern _UNKNOWN GameData_1ac6a36;
extern _UNKNOWN GameData_1ac6a41;
extern _UNKNOWN GameData_1acaaf4;
extern _UNKNOWN GameData_1aced1c;
extern _UNKNOWN GameData_1aced27;
extern _UNKNOWN GameData_1aced32;
extern _UNKNOWN GameData_1aced3d;
extern _UNKNOWN GameData_1aced48;
extern _UNKNOWN GameData_1ad2914;
extern _UNKNOWN GameData_1ad6545;
extern _UNKNOWN GameData_1ad6550;
extern _UNKNOWN GameData_1addf8f;
extern _UNKNOWN GameData_1ae1d8f;
extern _UNKNOWN GameData_1ae1d94;
extern _UNKNOWN GameData_1ae5792;
extern _UNKNOWN GameData_1ae5797;
extern _UNKNOWN GameData_1ae9564;
extern _UNKNOWN GameData_1ae9569;
extern _UNKNOWN GameData_1aed6f3;
extern _UNKNOWN GameData_1af12de;
extern _UNKNOWN GameData_1af12e3;
extern _UNKNOWN GameData_1af12ee;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_1af5041;
extern _UNKNOWN GameData_1af504c;
extern _UNKNOWN GameData_1af5058;
extern _UNKNOWN GameData_1af8d9e;
extern _UNKNOWN GameData_1afcd20;
extern _UNKNOWN* GameData_1f9cab8;
extern _UNKNOWN* GameData_1f9cad8;
extern _UNKNOWN* GameData_1f9cc38;
extern _UNKNOWN* GameData_1f9cca8;
extern _UNKNOWN* GameData_1f9cd18;
extern _UNKNOWN* GameData_1f9cd88;
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa0;
extern __int64 GameData_21d9fa8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_1aced17;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GameConst_7f8610(__int64 a1, __int64 a2, __int64 a3);
const char* GameConst_7f8760(unsigned __int8 a1, __int64 a2);
__int64 GameConst_7f8980(int a1, __int64 a2, __int64 a3);
__int64 GameConst_7f8b80(int a1, __int64 a2, __int64 a3);
__int64 GameConst_7f8cc0(int a1, __int64 a2, __int64 a3);
__int64 GameConst_7f8fd0(int a1, __int64 a2, __int64 a3);
__int64 GameConst_7f97f0(__int64 a1, __int64 a2, __int64 a3);
__int64 GameConst_7f9920(unsigned __int64* a1);
__int64 GameConst_7f9a10(unsigned __int64* a1, char* a2);
_QWORD* game_GameConst_Initialize_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___next_prime(_QWORD);
extern int GameData_21d9fb0;
void __attribute__((noreturn)) GameRoutine_60a210();
_QWORD* GameConst_7f9b60(unsigned __int64 a1, __int64* a2);

__int64 GameConst_7f8610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _BYTE v6[4];

  v4 = *(_QWORD*)(a1 + 32);
  v6[0] = 1;
  if (v4 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
    v4 = *(_QWORD*)(a1 + 32);
    v6[0] = 2;
    if (v4 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
      v4 = *(_QWORD*)(a1 + 32);
      v6[0] = 3;
      if (v4 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
        v4 = *(_QWORD*)(a1 + 32);
        v6[0] = 4;
        if (v4 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
          v4 = *(_QWORD*)(a1 + 32);
          v6[0] = 5;
          if (v4 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
            v4 = *(_QWORD*)(a1 + 32);
            v6[0] = 6;
            if (v4 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
              v4 = *(_QWORD*)(a1 + 32);
              v6[0] = 7;
              if (v4 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                v4 = *(_QWORD*)(a1 + 32);
                v6[0] = 8;
                if (v4 != 0) {
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                  v4 = *(_QWORD*)(a1 + 32);
                  v6[0] = 9;
                  if (v4 != 0) {
                    return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                             48LL))(v4, v6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

const char* GameConst_7f8760(unsigned __int8 a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* result;

  v2 = game_HashString(*(&game_g_hero_ids + a1), a2);
  if (v2 == 0) {
    return "null";
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return "null";
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr) {
    return "null";
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    return "null";
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v2) {
        if (v8[2] == v2) {
          goto LABEL_26;
        }
      }
      else if ((v10 & v5) != v6) {
        return "null";
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        return "null";
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      return "null";
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      return "null";
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }
LABEL_26:
  v11 = v8[3];
  if (v11 == 0) {
    return "null";
  }
  result = *(const char**)(v11 + 40);
  if (result == nullptr) {
    return "null";
  }
  return result;
}

__int64 GameConst_7f8980(int a1, __int64 a2, __int64 a3)
{
  void* v3;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  void* v9;
  _BOOL4 v11;
  void* v13;

  v3 = &GameData_1af4ee0;
  if ((a1 & 0x80000000) == 0) {
    v6 = *(_QWORD*)(a2 + 32);
    v13 = &GameData_1aced27;
    if (v6 == 0) {
      goto LABEL_31;
    }
    (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
    if (a1 == 0) {
      goto LABEL_14;
    }
    v6 = *(_QWORD*)(a2 + 32);
    v13 = &GameData_1ac3020;
    if (v6 == 0) {
      goto LABEL_31;
    }
    (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
    if (a1 == 1) {
      goto LABEL_14;
    }
    v6 = *(_QWORD*)(a2 + 32);
    v13 = &GameData_1af12e3;
    if (v6 == 0) {
      goto LABEL_31;
    }
    (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
    if (a1 == 2) {
      goto LABEL_14;
    }
    v6 = *(_QWORD*)(a2 + 32);
    v13 = &GameData_1aced32;
    if (v6 == 0) {
      goto LABEL_31;
    }
    (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
    if (a1 == 3) {
      goto LABEL_14;
    }
    v7 = (unsigned int)(a1 + 1) - 4LL;
    do {
      v6 = *(_QWORD*)(a2 + 32);
      v13 = &GameData_1af4ee0;
      if (v6 == 0) {
        goto LABEL_31;
      }
      (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
      --v7;
    } while (v7 != 0);
    if ((unsigned int)a1 <= 3) {
    LABEL_14:
      v3 = *(&GameData_1f9cab8 + (unsigned int)a1);
    }
    else {
      v3 = &GameData_1af4ee0;
    }
  }
  v6 = *(_QWORD*)(a2 + 32);
  v13 = v3;
  if (v6 == 0) {
  LABEL_31:
    GameRoutine_60a310(v6, a2, a3);
  }
  (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
  if (a1 <= 3) {
    v8 = a1;
    do {
      v9 = &GameData_1af4ee0;
      if (v8 <= 3) {
        v9 = *(&GameData_1f9cad8 + v8);
      }
      v6 = *(_QWORD*)(a2 + 32);
      v13 = v9;
      if (v6 == 0) {
        goto LABEL_31;
      }
      (*(void (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
    } while (++v8 != 4);
  }
  v6 = *(_QWORD*)(a2 + 32);
  v11 = a1 == 0 || a1 == 3;
  v13 = *(&GameData_1f9cd88 + v11);
  if (v6 == 0) {
    goto LABEL_31;
  }
  return (*(__int64 (**)(__int64, void**))(*(_QWORD*)v6 + 48LL))(v6, &v13);
}

__int64 GameConst_7f8b80(int a1, __int64 a2, __int64 a3)
{
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v6;
  void* v7;
  __int64 v8;
  void* v9;
  __int64 result;
  void* v11;
  void* v12;

  v4 = a1;
  if (a1 >= 1) {
    v5 = (unsigned int)(a1 + 1);
    v6 = 1;
    while (1) {
      v7 = &GameData_1af4ee0;
      if (v6 <= 0xD) {
        v7 = *(&GameData_1f9cd18 + v6);
      }
      v8 = *(_QWORD*)(a2 + 32);
      v12 = v7;
      if (v8 == 0) {
        break;
      }
      (*(void (**)(__int64, void**))(*(_QWORD*)v8 + 48LL))(v8, &v12);
      if (v5 == ++v6) {
        goto LABEL_7;
      }
    }
  LABEL_17:
    GameRoutine_60a310(v8, a2, a3);
  }
LABEL_7:
  if (v4 > 0xD) {
    v9 = &GameData_1af4ee0;
  }
  else {
    v9 = *(&GameData_1f9cc38 + v4);
  }
  v8 = *(_QWORD*)(a2 + 32);
  v12 = v9;
  if (v8 == 0) {
    goto LABEL_17;
  }
  result = (*(__int64 (**)(__int64, void**))(*(_QWORD*)v8 + 48LL))(v8, &v12);
  if ((int)v4 <= 13) {
    while (1) {
      v11 = &GameData_1af4ee0;
      if (v4 <= 0xD) {
        v11 = *(&GameData_1f9cca8 + v4);
      }
      v8 = *(_QWORD*)(a2 + 32);
      v12 = v11;
      if (v8 == 0) {
        break;
      }
      result =
          (*(__int64 (**)(__int64, void**))(*(_QWORD*)v8 + 48LL))(v8, &v12);
      if (++v4 == 14) {
        return result;
      }
    }
    goto LABEL_17;
  }
  return result;
}

__int64 GameConst_7f8cc0(int a1, __int64 a2, __int64 a3)
{
  int v4;
  __int64 v5;
  bool v7;
  bool v8;
  _BYTE v10[4];
  int* v11;

  v11 = (int*)&GameData_1aced27;
  v4 = ~a1;
  v5 = *(_QWORD*)(a2 + 32);
  v10[0] = v4 < 0;
  if (v5 != 0) {
    (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v11, v10);
    v5 = *(_QWORD*)(a2 + 32);
    v11 = (int*)&GameData_1ac3020;
    v10[0] = a1 > 0;
    if (v5 != 0) {
      (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v11,
                                                                  v10);
      v5 = *(_QWORD*)(a2 + 32);
      v11 = (int*)&GameData_1af12e3;
      v10[0] = a1 > 1;
      if (v5 != 0) {
        (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v11,
                                                                    v10);
        v5 = *(_QWORD*)(a2 + 32);
        v11 = (int*)&GameData_1aced32;
        v10[0] = a1 > 2;
        if (v5 != 0) {
          (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v11,
                                                                      v10);
          v5 = *(_QWORD*)(a2 + 32);
          v11 = (int*)&GameData_1af12de;
          v10[0] = a1 == 0;
          if (v5 != 0) {
            (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                v5, &v11, v10);
            v5 = *(_QWORD*)(a2 + 32);
            v11 = (int*)&GameData_1ae9564;
            v10[0] = a1 == 1;
            if (v5 != 0) {
              (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                  v5, &v11, v10);
              v5 = *(_QWORD*)(a2 + 32);
              v11 = &GameData_1aced17;
              v10[0] = a1 == 2;
              if (v5 != 0) {
                (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                    v5, &v11, v10);
                v5 = *(_QWORD*)(a2 + 32);
                v11 = (int*)&GameData_1a8d213;
                v10[0] = a1 == 3;
                if (v5 != 0) {
                  (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                      v5, &v11, v10);
                  v5 = *(_QWORD*)(a2 + 32);
                  v11 = (int*)&GameData_1aced1c;
                  v10[0] = a1 < 1;
                  if (v5 != 0) {
                    (*(void (**)(__int64, int**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                        v5, &v11, v10);
                    v5 = *(_QWORD*)(a2 + 32);
                    v11 = (int*)&GameData_1ad6545;
                    v10[0] = a1 < 2;
                    if (v5 != 0) {
                      (*(void (**)(__int64, int**, _BYTE*))(
                          *(_QWORD*)v5 + 48LL))(v5, &v11, v10);
                      v5 = *(_QWORD*)(a2 + 32);
                      v11 = (int*)&GameData_1abb9fd;
                      v10[0] = a1 < 3;
                      if (v5 != 0) {
                        (*(void (**)(__int64, int**, _BYTE*))(
                            *(_QWORD*)v5 + 48LL))(v5, &v11, v10);
                        v5 = *(_QWORD*)(a2 + 32);
                        v11 = (int*)&GameData_1aafdec;
                        v10[0] = a1 < 4;
                        if (v5 != 0) {
                          (*(void (**)(__int64, int**, _BYTE*))(
                              *(_QWORD*)v5 + 48LL))(v5, &v11, v10);
                          v5 = *(_QWORD*)(a2 + 32);
                          v7 = a1 == 0 || a1 == 3;
                          v11 = (int*)&GameData_1ac6a41;
                          v8 = v7;
                          v10[0] = !v8;
                          if (v5 != 0) {
                            (*(void (**)(__int64, int**, _BYTE*))(
                                *(_QWORD*)v5 + 48LL))(v5, &v11, v10);
                            v5 = *(_QWORD*)(a2 + 32);
                            v10[0] = v8;
                            v11 = (int*)&GameData_1a854c2;
                            if (v5 != 0) {
                              return (*(__int64 (**)(__int64, int**, _BYTE*))(
                                  *(_QWORD*)v5 + 48LL))(v5, &v11, v10);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3);
}

__int64 GameConst_7f8fd0(int a1, __int64 a2, __int64 a3)
{
  bool v4;
  __int64 v5;
  char v6;
  _BYTE v9[4];
  void* v10;

  v4 = a1 <= 0;
  v5 = *(_QWORD*)(a2 + 32);
  v6 = !v4;
  v10 = &GameData_1aced3d;
  v9[0] = v6;
  if (v5 != 0) {
    (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v10, v9);
    v5 = *(_QWORD*)(a2 + 32);
    v10 = &GameData_1abf8cc;
    v9[0] = a1 > 1;
    if (v5 != 0) {
      (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v10,
                                                                   v9);
      v5 = *(_QWORD*)(a2 + 32);
      v10 = &GameData_1ab7cf6;
      v9[0] = a1 > 2;
      if (v5 != 0) {
        (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v10,
                                                                     v9);
        v5 = *(_QWORD*)(a2 + 32);
        v10 = &GameData_1af8d9e;
        v9[0] = a1 > 3;
        if (v5 != 0) {
          (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, &v10,
                                                                       v9);
          v5 = *(_QWORD*)(a2 + 32);
          v10 = &GameData_1aced48;
          v9[0] = a1 > 4;
          if (v5 != 0) {
            (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                v5, &v10, v9);
            v5 = *(_QWORD*)(a2 + 32);
            v10 = &GameData_1a8d257;
            v9[0] = a1 > 5;
            if (v5 != 0) {
              (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                  v5, &v10, v9);
              v5 = *(_QWORD*)(a2 + 32);
              v10 = &GameData_1af12ee;
              v9[0] = a1 > 6;
              if (v5 != 0) {
                (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                    v5, &v10, v9);
                v5 = *(_QWORD*)(a2 + 32);
                v10 = &GameData_1af5041;
                v9[0] = a1 > 7;
                if (v5 != 0) {
                  (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 + 48LL))(
                      v5, &v10, v9);
                  v5 = *(_QWORD*)(a2 + 32);
                  v10 = &GameData_1a98bab;
                  v9[0] = a1 > 8;
                  if (v5 != 0) {
                    (*(void (**)(__int64, void**, _BYTE*))(*(_QWORD*)v5 +
                                                           48LL))(v5, &v10, v9);
                    v5 = *(_QWORD*)(a2 + 32);
                    v10 = &GameData_1abf8d7;
                    v9[0] = a1 > 9;
                    if (v5 != 0) {
                      (*(void (**)(__int64, void**, _BYTE*))(
                          *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                      v5 = *(_QWORD*)(a2 + 32);
                      v10 = &GameData_1af504c;
                      v9[0] = a1 > 10;
                      if (v5 != 0) {
                        (*(void (**)(__int64, void**, _BYTE*))(
                            *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                        v5 = *(_QWORD*)(a2 + 32);
                        v10 = &GameData_1ab7d01;
                        v9[0] = a1 > 11;
                        if (v5 != 0) {
                          (*(void (**)(__int64, void**, _BYTE*))(
                              *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                          v5 = *(_QWORD*)(a2 + 32);
                          v10 = &GameData_1af5058;
                          v9[0] = a1 > 12;
                          if (v5 != 0) {
                            (*(void (**)(__int64, void**, _BYTE*))(
                                *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                            v5 = *(_QWORD*)(a2 + 32);
                            v10 = &GameData_1a9c804;
                            v9[0] = a1 == 1;
                            if (v5 != 0) {
                              (*(void (**)(__int64, void**, _BYTE*))(
                                  *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                              v5 = *(_QWORD*)(a2 + 32);
                              v10 = &GameData_1aafe28;
                              v9[0] = a1 == 2;
                              if (v5 != 0) {
                                (*(void (**)(__int64, void**, _BYTE*))(
                                    *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                                v5 = *(_QWORD*)(a2 + 32);
                                v10 = &GameData_1abf8b7;
                                v9[0] = a1 == 3;
                                if (v5 != 0) {
                                  (*(void (**)(__int64, void**, _BYTE*))(
                                      *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                                  v5 = *(_QWORD*)(a2 + 32);
                                  v10 = &GameData_1ab397f;
                                  v9[0] = a1 == 4;
                                  if (v5 != 0) {
                                    (*(void (**)(__int64, void**, _BYTE*))(
                                        *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                                    v5 = *(_QWORD*)(a2 + 32);
                                    v10 = &GameData_1abf8bc;
                                    v9[0] = a1 == 5;
                                    if (v5 != 0) {
                                      (*(void (**)(__int64, void**, _BYTE*))(
                                          *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                                      v5 = *(_QWORD*)(a2 + 32);
                                      v10 = &GameData_1ad6550;
                                      v9[0] = a1 == 6;
                                      if (v5 != 0) {
                                        (*(void (**)(__int64, void**, _BYTE*))(
                                            *(_QWORD*)v5 + 48LL))(v5, &v10, v9);
                                        v5 = *(_QWORD*)(a2 + 32);
                                        v10 = &GameData_1ae5792;
                                        v9[0] = a1 == 7;
                                        if (v5 != 0) {
                                          (*(void (**)(__int64, void**,
                                                       _BYTE*))(*(_QWORD*)v5 +
                                                                48LL))(v5, &v10,
                                                                       v9);
                                          v5 = *(_QWORD*)(a2 + 32);
                                          v10 = &GameData_1a891bb;
                                          v9[0] = a1 == 8;
                                          if (v5 != 0) {
                                            (*(void (**)(__int64, void**,
                                                         _BYTE*))(
                                                *(_QWORD*)v5 + 48LL))(v5, &v10,
                                                                      v9);
                                            v5 = *(_QWORD*)(a2 + 32);
                                            v10 = &GameData_1ae1d8f;
                                            v9[0] = a1 == 9;
                                            if (v5 != 0) {
                                              (*(void (**)(__int64, void**,
                                                           _BYTE*))(
                                                  *(_QWORD*)v5 + 48LL))(
                                                  v5, &v10, v9);
                                              v5 = *(_QWORD*)(a2 + 32);
                                              v10 = &GameData_1aabf8a;
                                              v9[0] = a1 == 10;
                                              if (v5 != 0) {
                                                (*(void (**)(__int64, void**,
                                                             _BYTE*))(
                                                    *(_QWORD*)v5 + 48LL))(
                                                    v5, &v10, v9);
                                                v5 = *(_QWORD*)(a2 + 32);
                                                v10 = &GameData_1aa828d;
                                                v9[0] = a1 == 11;
                                                if (v5 != 0) {
                                                  (*(void (**)(__int64, void**,
                                                               _BYTE*))(
                                                      *(_QWORD*)v5 + 48LL))(
                                                      v5, &v10, v9);
                                                  v5 = *(_QWORD*)(a2 + 32);
                                                  v10 = &GameData_1abba08;
                                                  v9[0] = a1 == 12;
                                                  if (v5 != 0) {
                                                    (*(void (**)(__int64,
                                                                 void**,
                                                                 _BYTE*))(
                                                        *(_QWORD*)v5 + 48LL))(
                                                        v5, &v10, v9);
                                                    v5 = *(_QWORD*)(a2 + 32);
                                                    v10 = &GameData_1abba0e;
                                                    v9[0] = a1 == 13;
                                                    if (v5 != 0) {
                                                      (*(void (**)(__int64,
                                                                   void**,
                                                                   _BYTE*))(
                                                          *(_QWORD*)v5 + 48LL))(
                                                          v5, &v10, v9);
                                                      v5 = *(_QWORD*)(a2 + 32);
                                                      v10 = &GameData_1abba14;
                                                      v9[0] = a1 < 2;
                                                      if (v5 != 0) {
                                                        (*(void (**)(__int64,
                                                                     void**,
                                                                     _BYTE*))(
                                                            *(_QWORD*)v5 +
                                                            48LL))(v5, &v10,
                                                                   v9);
                                                        v5 =
                                                            *(_QWORD*)(a2 + 32);
                                                        v10 = &GameData_1ae9569;
                                                        v9[0] = a1 < 3;
                                                        if (v5 != 0) {
                                                          (*(void (**)(__int64,
                                                                       void**,
                                                                       _BYTE*))(
                                                              *(_QWORD*)v5 +
                                                              48LL))(v5, &v10,
                                                                     v9);
                                                          v5 = *(_QWORD*)(a2 +
                                                                          32);
                                                          v10 =
                                                              &GameData_1addf8f;
                                                          v9[0] = a1 < 4;
                                                          if (v5 != 0) {
                                                            (*(void (**)(
                                                                __int64, void**,
                                                                _BYTE*))(
                                                                *(_QWORD*)v5 +
                                                                48LL))(v5, &v10,
                                                                       v9);
                                                            v5 = *(_QWORD*)(a2 +
                                                                            32);
                                                            v10 =
                                                                &GameData_1ac6a36;
                                                            v9[0] = a1 < 5;
                                                            if (v5 != 0) {
                                                              (*(void (**)(
                                                                  __int64,
                                                                  void**,
                                                                  _BYTE*))(
                                                                  *(_QWORD*)v5 +
                                                                  48LL))(
                                                                  v5, &v10, v9);
                                                              v5 = *(
                                                                  _QWORD*)(a2 +
                                                                           32);
                                                              v10 =
                                                                  &GameData_1ad2914;
                                                              v9[0] = a1 < 6;
                                                              if (v5 != 0) {
                                                                (*(void (**)(
                                                                    __int64,
                                                                    void**,
                                                                    _BYTE*))(
                                                                    *(_QWORD*)
                                                                        v5 +
                                                                    48LL))(v5,
                                                                           &v10,
                                                                           v9);
                                                                v5 = *(
                                                                    _QWORD*)(a2 +
                                                                             32);
                                                                v10 =
                                                                    &GameData_1acaaf4;
                                                                v9[0] = a1 < 7;
                                                                if (v5 != 0) {
                                                                  (*(void (**)(
                                                                      __int64,
                                                                      void**,
                                                                      _BYTE*))(
                                                                      *(_QWORD*)
                                                                          v5 +
                                                                      48LL))(
                                                                      v5, &v10,
                                                                      v9);
                                                                  v5 = *(
                                                                      _QWORD*)(a2 +
                                                                               32);
                                                                  v10 =
                                                                      &GameData_1abf8c1;
                                                                  v9[0] =
                                                                      a1 < 8;
                                                                  if (v5 != 0) {
                                                                    (*(void (**)(
                                                                        __int64,
                                                                        void**,
                                                                        _BYTE*))(
                                                                        *(_QWORD*)
                                                                            v5 +
                                                                        48LL))(
                                                                        v5,
                                                                        &v10,
                                                                        v9);
                                                                    v5 = *(
                                                                        _QWORD*)(a2 +
                                                                                 32);
                                                                    v10 =
                                                                        &GameData_1a9c809;
                                                                    v9[0] =
                                                                        a1 < 9;
                                                                    if (v5 !=
                                                                        0) {
                                                                      (*(void (**)(
                                                                          __int64,
                                                                          void**,
                                                                          _BYTE*))(
                                                                          *(_QWORD*)
                                                                              v5 +
                                                                          48LL))(
                                                                          v5,
                                                                          &v10,
                                                                          v9);
                                                                      v5 = *(
                                                                          _QWORD*)(a2 +
                                                                                   32);
                                                                      v10 =
                                                                          &GameData_1afcd20;
                                                                      v9[0] =
                                                                          a1 <
                                                                          10;
                                                                      if (v5 !=
                                                                          0) {
                                                                        (*(void (**)(
                                                                            __int64,
                                                                            void**,
                                                                            _BYTE*))(
                                                                            *(_QWORD*)
                                                                                v5 +
                                                                            48LL))(
                                                                            v5,
                                                                            &v10,
                                                                            v9);
                                                                        v5 = *(
                                                                            _QWORD*)(a2 +
                                                                                     32);
                                                                        v10 =
                                                                            &GameData_1ae1d94;
                                                                        v9[0] =
                                                                            a1 <
                                                                            11;
                                                                        if (v5 !=
                                                                            0) {
                                                                          (*(void (**)(
                                                                              __int64,
                                                                              void**,
                                                                              _BYTE*))(
                                                                              *(_QWORD*)
                                                                                  v5 +
                                                                              48LL))(
                                                                              v5,
                                                                              &v10,
                                                                              v9);
                                                                          v5 = *(
                                                                              _QWORD*)(a2 +
                                                                                       32);
                                                                          v10 =
                                                                              &GameData_1aafe2d;
                                                                          v9[0] =
                                                                              a1 <
                                                                              12;
                                                                          if (v5 !=
                                                                              0) {
                                                                            (*(void (**)(
                                                                                __int64,
                                                                                void**,
                                                                                _BYTE*))(
                                                                                *(_QWORD*)
                                                                                    v5 +
                                                                                48LL))(
                                                                                v5,
                                                                                &v10,
                                                                                v9);
                                                                            v5 = *(
                                                                                _QWORD*)(a2 +
                                                                                         32);
                                                                            v10 =
                                                                                &GameData_1ae5797;
                                                                            v9[0] =
                                                                                a1 <
                                                                                13;
                                                                            if (v5 !=
                                                                                0) {
                                                                              (*(void (**)(
                                                                                  __int64,
                                                                                  void**,
                                                                                  _BYTE*))(
                                                                                  *(_QWORD*)
                                                                                      v5 +
                                                                                  48LL))(
                                                                                  v5,
                                                                                  &v10,
                                                                                  v9);
                                                                              v5 = *(
                                                                                  _QWORD*)(a2 +
                                                                                           32);
                                                                              v10 =
                                                                                  &GameData_1aed6f3;
                                                                              v9[0] =
                                                                                  a1 <
                                                                                  14;
                                                                              if (v5 !=
                                                                                  0) {
                                                                                return (*(__int64 (**)(
                                                                                    __int64,
                                                                                    void**,
                                                                                    _BYTE*))(
                                                                                    *(_QWORD*)
                                                                                        v5 +
                                                                                    48LL))(
                                                                                    v5,
                                                                                    &v10,
                                                                                    v9);
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3);
}

__int64 GameConst_7f97f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _BYTE v6[4];

  v4 = *(_QWORD*)(a1 + 32);
  v6[0] = 1;
  if (v4 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
    v4 = *(_QWORD*)(a1 + 32);
    v6[0] = 2;
    if (v4 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
      v4 = *(_QWORD*)(a1 + 32);
      v6[0] = 3;
      if (v4 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
        v4 = *(_QWORD*)(a1 + 32);
        v6[0] = 4;
        if (v4 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
          v4 = *(_QWORD*)(a1 + 32);
          v6[0] = 5;
          if (v4 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
            v4 = *(_QWORD*)(a1 + 32);
            v6[0] = 6;
            if (v4 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
              v4 = *(_QWORD*)(a1 + 32);
              v6[0] = 7;
              if (v4 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                v4 = *(_QWORD*)(a1 + 32);
                v6[0] = 8;
                if (v4 != 0) {
                  return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                           48LL))(v4, v6);
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

__int64 GameConst_7f9920(unsigned __int64* a1)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64*** v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;

  if (GameData_21d9f98 == 0 || GameData_21d9fa8 == 0) {
    return 0;
  }
  v2 = *a1;
  v3 = GameData_21d9f98 - 1;
  if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
    v4 = *a1;
    if (v2 >= GameData_21d9f98) {
      v4 = v2 % GameData_21d9f98;
    }
  }
  else {
    v4 = v3 & v2;
  }
  v5 = *(__int64****)(GameData_21d9f90 + 8 * v4);
  if (v5 == nullptr) {
    return 0;
  }
  v6 = *v5;
  if (v6 == nullptr) {
    return 0;
  }
  if ((GameData_21d9f98 & v3) == 0) {
    while (1) {
      v8 = v6[1];
      if (v8 == (__int64*)v2) {
        if (v6[2] == (__int64*)v2) {
          return *((unsigned __int8*)v6 + 24);
        }
      }
      else if (((unsigned __int64)v8 & v3) != v4) {
        return 0;
      }
      v6 = (__int64**)*v6;
      if (v6 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v7 = (unsigned __int64)v6[1];
    if (v7 == v2) {
      break;
    }
    if (v7 >= GameData_21d9f98) {
      v7 %= (unsigned __int64)GameData_21d9f98;
    }
    if (v7 != v4) {
      return 0;
    }
  LABEL_14:
    v6 = (__int64**)*v6;
    if (v6 == nullptr) {
      return 0;
    }
  }
  if (v6[2] != (__int64*)v2) {
    goto LABEL_14;
  }
  return *((unsigned __int8*)v6 + 24);
}

__int64 GameConst_7f9a10(unsigned __int64* a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;

  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  v6 = *a1;
  v7 = *a2;
  v8 = v5;
  *(_QWORD*)(v5 + 16) = v6;
  *(_BYTE*)(v5 + 24) = v7;
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = v6;
  result = GameRoutine_7f9b60(v6, v5 + 16);
  if (result != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v8);
  }
  else {
    v11 = GameData_21d9f98;
    v12 = GameData_21d9f98 - 1;
    if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
      if (v6 >= GameData_21d9f98) {
        v6 %= (unsigned __int64)GameData_21d9f98;
      }
    }
    else {
      v6 &= v12;
    }
    v13 = GameData_21d9f90;
    v14 = *(__int64**)(GameData_21d9f90 + 8 * v6);
    if (v14 != nullptr) {
      *(_QWORD*)v8 = *v14;
      *v14 = v8;
    }
    else {
      v15 = GameData_21d9fa0;
      GameData_21d9fa0 = v8;
      *(_QWORD*)v8 = v15;
      *(_QWORD*)(v13 + 8 * v6) = &GameData_21d9fa0;
      if (*(_QWORD*)v8 != 0) {
        v16 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
        if ((v11 & v12) != 0) {
          if (v16 >= v11) {
            v16 %= v11;
          }
        }
        else {
          v16 &= v12;
        }
        *(_QWORD*)(GameData_21d9f90 + 8 * v16) = v8;
      }
    }
    ++GameData_21d9fa8;
  }
  return result;
}

_QWORD* GameConst_7f9b60(unsigned __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  float v10;
  float v12;
  _BOOL8 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 primeEm;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* i;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = GameData_21d9f98;
  if (GameData_21d9f98 != 0) {
    v3 = GameData_21d9f98 - 1;
    if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
      v4 = a1;
      if (a1 >= GameData_21d9f98) {
        v4 = a1 % GameData_21d9f98;
      }
    }
    else {
      v4 = v3 & a1;
    }
    v5 = *(_QWORD**)(GameData_21d9f90 + 8 * v4);
    if (v5 != nullptr) {
      v6 = (_QWORD*)*v5;
      if (v6 != nullptr) {
        v7 = *a2;
        if ((GameData_21d9f98 & v3) == 0) {
          while (1) {
            v9 = v6[1];
            if (v9 == a1) {
              if (v6[2] == v7) {
                return v6;
              }
            }
            else if ((v9 & v3) != v4) {
              goto LABEL_21;
            }
            v6 = (_QWORD*)*v6;
            if (v6 == nullptr) {
              goto LABEL_21;
            }
          }
        }
        do {
          v8 = v6[1];
          if (v8 == a1) {
            if (v6[2] == v7) {
              return v6;
            }
          }
          else {
            if (v8 >= GameData_21d9f98) {
              v8 %= (unsigned __int64)GameData_21d9f98;
            }
            if (v8 != v4) {
              break;
            }
          }
          v6 = (_QWORD*)*v6;
        } while (v6 != nullptr);
      }
    }
  }
LABEL_21:
  v10 = (float)(unsigned __int64)(GameData_21d9fa8 + 1);
  if (GameData_21d9f98 != 0 &&
      (float)(*(float*)&GameData_21d9fb0 *
              (float)(unsigned __int64)GameData_21d9f98) >= v10) {
    return nullptr;
  }
  v12 = v10 / *(float*)&GameData_21d9fb0;
  v13 = true;
  if ((unsigned __int64)GameData_21d9f98 >= 3) {
    v13 = (GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0;
  }
  v14 = v13 | (2 * GameData_21d9f98);
  v15 = vcvtps_u64_f32(v12);
  if (v14 <= v15) {
    v16 = v15;
  }
  else {
    v16 = v14;
  }
  if (v16 == 1) {
    v16 = 2;
  }
  else if ((v16 & (v16 - 1)) != 0) {
    primeEm = std___1___next_prime(v16);
    v2 = GameData_21d9f98;
    v16 = primeEm;
  }
  if (v16 <= v2) {
    if (v16 >= v2) {
      return nullptr;
    }
    v24 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21d9fa8 /
                         *(float*)&GameData_21d9fb0);
    if (v2 < 3 || (v2 & (v2 - 1)) != 0) {
      v24 = std___1___next_prime(v24);
    }
    else {
      v25 = 1LL << (-(char)__clz(v24 - 1) & 63);
      if (v24 >= 2) {
        v24 = v25;
      }
    }
    if (v16 <= v24) {
      v16 = v24;
    }
    if (v16 >= v2) {
      return nullptr;
    }
    if (v16 == 0) {
      v35 = GameData_21d9f90;
      GameData_21d9f90 = 0;
      if (v35 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v35);
      }
      v6 = nullptr;
      GameData_21d9f98 = 0;
      return v6;
    }
  }
  if (v16 >> 61 != 0) {
    GameRoutine_60a210();
  }
  v18 = fw_memory_g_heap_manager_ptr;
  v19 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
  v20 = GameData_21d9f90;
  GameData_21d9f90 = v19;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v21, v20);
  }
  v22 = v16 & 7;
  GameData_21d9f98 = v16;
  if (v16 >= 8) {
    v23 = 0;
    do {
      *(_QWORD*)(GameData_21d9f90 + 8 * v23) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 8) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 16) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 24) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 32) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 40) = 0;
      *(_QWORD*)(GameData_21d9f90 + 8 * v23 + 48) = 0;
      v26 = GameData_21d9f90 + 8 * v23;
      v23 += 8;
      *(_QWORD*)(v26 + 56) = 0;
    } while ((v16 & 0x1FFFFFFFFFFFFFF8LL) != v23);
  }
  else {
    v23 = 0;
  }
  if ((v16 & 7) != 0) {
    v27 = 8 * v23;
    do {
      --v22;
      *(_QWORD*)(GameData_21d9f90 + v27) = 0;
      v27 += 8;
    } while (v22 != 0);
  }
  v6 = (_QWORD*)GameData_21d9fa0;
  if (GameData_21d9fa0 == 0) {
    return v6;
  }
  v28 = *(_QWORD*)(GameData_21d9fa0 + 8);
  v29 = v16 - 1;
  if ((v16 & (v16 - 1)) == 0) {
    v32 = v28 & v29;
    *(_QWORD*)(GameData_21d9f90 + 8 * v32) = &GameData_21d9fa0;
    for (i = (_QWORD*)*v6; *v6 != 0; i = (_QWORD*)*v6) {
      v34 = i[1] & v29;
      if (v34 == v32) {
        v6 = i;
      }
      else if (*(_QWORD*)(GameData_21d9f90 + 8 * v34) != 0) {
        *v6 = *i;
        *i = **(_QWORD**)(GameData_21d9f90 + 8 * v34);
        **(_QWORD**)(GameData_21d9f90 + 8 * v34) = i;
      }
      else {
        *(_QWORD*)(GameData_21d9f90 + 8 * v34) = v6;
        v6 = i;
        v32 = v34;
      }
    }
    return nullptr;
  }
  if (v28 >= v16) {
    v28 %= v16;
  }
  *(_QWORD*)(GameData_21d9f90 + 8 * v28) = &GameData_21d9fa0;
  v30 = (_QWORD*)*v6;
  if (*v6 == 0) {
    return nullptr;
  }
  while (1) {
    v31 = v30[1];
    if (v31 >= v16) {
      v31 %= v16;
    }
    if (v31 != v28) {
      if (*(_QWORD*)(GameData_21d9f90 + 8 * v31) == 0) {
        *(_QWORD*)(GameData_21d9f90 + 8 * v31) = v6;
        goto LABEL_61;
      }
      *v6 = *v30;
      *v30 = **(_QWORD**)(GameData_21d9f90 + 8 * v31);
      **(_QWORD**)(GameData_21d9f90 + 8 * v31) = v30;
      v30 = v6;
    }
    v31 = v28;
  LABEL_61:
    v6 = v30;
    v30 = (_QWORD*)*v30;
    v28 = v31;
    if (v30 == nullptr) {
      return nullptr;
    }
  }
}

_QWORD* game_GameConst_Initialize_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;

  v2 = *a2;
  v3 = game_HashString(*(&game_g_hero_ids + v2), a2);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_QWORD*)(v5 + 16) = v3;
  v6 = v5;
  *(_BYTE*)(v5 + 24) = v2;
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = v3;
  result = GameRoutine_7f9b60(v3, (__int64*)(v5 + 16));
  if (result != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v6);
  }
  else {
    v9 = GameData_21d9f98;
    v10 = GameData_21d9f98 - 1;
    if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
      if (v3 >= GameData_21d9f98) {
        v3 %= (unsigned __int64)GameData_21d9f98;
      }
    }
    else {
      v3 &= v10;
    }
    v11 = GameData_21d9f90;
    v12 = *(__int64**)(GameData_21d9f90 + 8 * v3);
    if (v12 != nullptr) {
      *(_QWORD*)v6 = *v12;
      *v12 = v6;
    }
    else {
      v13 = GameData_21d9fa0;
      GameData_21d9fa0 = v6;
      *(_QWORD*)v6 = v13;
      *(_QWORD*)(v11 + 8 * v3) = &GameData_21d9fa0;
      if (*(_QWORD*)v6 != 0) {
        v14 = *(_QWORD*)(*(_QWORD*)v6 + 8LL);
        if ((v9 & v10) != 0) {
          if (v14 >= v9) {
            v14 %= v9;
          }
        }
        else {
          v14 &= v10;
        }
        *(_QWORD*)(GameData_21d9f90 + 8 * v14) = v6;
      }
    }
    ++GameData_21d9fa8;
  }
  return result;
}

#pragma GCC visibility pop
