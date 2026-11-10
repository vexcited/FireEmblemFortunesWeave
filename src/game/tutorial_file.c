#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
_QWORD* TutorialFile_97ffe0(__int64 a1);
_QWORD* TutorialFile_980100(__int64 a1);
__int64 Format_7a7fc0(const char**);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed1a0(void);
__int64 GameRoutine_6fbd80(_QWORD, _QWORD);
__int64 GameRoutine_7a7e90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ab0047;
extern _UNKNOWN GameData_1ada40b;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_21f4d10;
extern _UNKNOWN GameData_21f4d30;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ca0a8;
extern __int64 GameData_21f4cc8[];
extern __int64 GameData_21f4cd0;
extern __int64 GameData_21f4ce0;
extern __int64 GameData_21f4ce8;
extern __int64 GameData_21f4cf8;
extern __int64 GameData_21f4d00;
extern __int64 GameData_21f4d08;
extern __int64 GameData_21f4d18;
extern __int64 GameData_21f4d20;
extern __int64 GameData_21f4d28;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9829b0();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void TutorialFile_Unknown4();
void TutorialFile_Unknown5();
void TutorialFile_Unknown6();
__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2);
__int64* TutorialFile_980b00();

void TutorialFile_Unknown4()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
  v0 = *(__int64**)(GameData_21ca0a8 + 64);
  for (i = *(__int64**)(GameData_21ca0a8 + 72); v0 != i; v6[1] = v2) {
    v3 = *v0;
    v4 = **(__int64***)(*v0 + 40);
    if ((int)((*(_QWORD*)(*(_QWORD*)(*v0 + 40) + 8LL) - (_QWORD)v4) >> 3) < 1) {
      LODWORD(v5) = 0;
    }
    else {
      v5 = *v4;
      if (v5 != 0) {
        LODWORD(v5) = *(unsigned __int8*)(v5 + 96);
      }
    }
    v6 = &GameData_21f4cc8[3 * (unsigned int)v5];
    v8 = (_QWORD*)v6[1];
    v7 = v6[2];
    if ((unsigned __int64)v8 < v7) {
      *v8 = v3;
      v2 = (__int64)(v8 + 1);
    }
    else {
      v9 = *v6;
      v10 = (__int64)v8 - *v6;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_9829b0();
      }
      v12 = v7 - v9;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v11;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = v14 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v14 + v10) = v3;
      v2 = v14 + v10 + 8;
      memcpy(v16, v9, v10);
      *v6 = v16;
      v6[1] = v2;
      v6[2] = v15;
      if (v9 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v17);
      }
    }
    ++v0;
  }
}

void TutorialFile_Unknown5()
{
  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
}

void TutorialFile_Unknown6()
{
  GameData_21f4cd0 = GameData_21f4cc8[0];
  GameData_21f4ce8 = GameData_21f4ce0;
}

__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8 x8_, __int64 a1,
                                                    __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 result;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;

  v4 = *(unsigned __int8*)(a1 + 32);
  if (v4 <= 1) {
    if (*(_BYTE*)(a1 + 32) != 0) {
      v11 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
      if (v11 != 0) {
        v12 = *(_QWORD*)(GameData_21c99b8 + 96);
        if (v12 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
          v14 = v12 - 1;
          if ((v12 & (v12 - 1)) != 0) {
            v15 = v11;
            if (v11 >= v12) {
              v15 = v11 % v12;
            }
          }
          else {
            v15 = v14 & v11;
          }
          v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v15);
          if (v35 != nullptr) {
            v36 = (_QWORD*)*v35;
            if (v36 != nullptr) {
              if ((v12 & v14) == 0) {
                while (1) {
                  v38 = v36[1];
                  if (v38 == v11) {
                    if (v36[2] == v11) {
                      goto LABEL_73;
                    }
                  }
                  else if ((v38 & v14) != v15) {
                    goto LABEL_78;
                  }
                  v36 = (_QWORD*)*v36;
                  if (v36 == nullptr) {
                    goto LABEL_78;
                  }
                }
              }
              while (1) {
                v37 = v36[1];
                if (v37 == v11) {
                  if (v36[2] == v11) {
                  LABEL_73:
                    if (v36[3] != 0) {
                      v40 = GameRoutine_6ed1a0();
                      goto LABEL_75;
                    }
                    goto LABEL_78;
                  }
                }
                else {
                  if (v37 >= v12) {
                    v37 %= v12;
                  }
                  if (v37 != v15) {
                    goto LABEL_78;
                  }
                }
                v36 = (_QWORD*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_78;
                }
              }
            }
          }
        }
      }
      goto LABEL_78;
    }
  LABEL_21:
    v49 = 0;
    v50 = 0;
    v48 = nullptr;
    v16 = msg_MessageManager_instance__ptr[0];
    if (*(_WORD*)(a1 + 56) != 0) {
      v17 = 8LL * *(unsigned __int16*)(a1 + 56);
      v18 = 0;
      do {
        v19 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + v18);
        v47 = 0;
        v46 = v19;
        GameRoutine_7a7e90(&v48, &v46);
        v18 += 8;
      } while (v17 != v18);
      v20 = v48;
      if ((__int64*)v49 != v48) {
        v21 = 1;
        v22 = 0;
        do {
          v23 = Format_7a7fc0((const char**)&v20[v21 - 1]);
          v24 = *v16;
          if (v23 != 0) {
            v25 = v22;
            if (v22 > 7) {
              v25 = 0;
            }
            GameRoutine_60a020(v24 + 24LL * v25 + 14704, v23);
          }
          else {
            Manager_a51e10(v24 + 14704, (unsigned int)v22, LODWORD(v48[v21]),
                           0);
          }
          v20 = v48;
          ++v22;
          v21 += 2;
        } while (v22 < (__int64)(v49 - (_QWORD)v48) >> 4);
      }
      if (v20 != nullptr) {
        v49 = (unsigned __int64)v20;
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v20);
      }
    }
    v27 = *v16;
    v28 = *(_QWORD*)(a1 + 48);
    v54 = -1;
    v55 = -1;
    v56 = -1;
    v57 = -1;
    v58 = -1;
    v59 = -1;
    v60 = -1;
    v61 = -1;
    v62 = -1;
    v63 = -1;
    v64 = -1;
    v65 = -1;
    v48 = GameData_212e348 + 2;
    v49 = 0xFFFF0001FFFF0000LL;
    v50 = 0xFFFF0004FFFF0002LL;
    v51 = 0xFFFF0006FFFF0005LL;
    v66 = 8;
    v52 = -65529;
    v53 = -65528;
    v29 = GameRoutine_a4dbe0(v27, v28, 0, &v48);
    v30 = (char*)v29;
    goto LABEL_80;
  }
  if (v4 - 2 >= 2) {
    if (v4 != 4) {
      goto LABEL_78;
    }
    goto LABEL_21;
  }
  v6 = game_HashString_alt1(*(_QWORD*)(a1 + 40), a2);
  if (v6 == 0) {
    goto LABEL_78;
  }
  v7 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    goto LABEL_78;
  }
  v9 = v7 - 1;
  if ((v7 & (v7 - 1)) != 0) {
    v10 = v6;
    if (v6 >= v7) {
      v10 = v6 % v7;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v10);
  if (v31 == nullptr) {
    goto LABEL_78;
  }
  v32 = (_QWORD*)*v31;
  if (v32 == nullptr) {
    goto LABEL_78;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v34 = v32[1];
      if (v34 == v6) {
        if (v32[2] == v6) {
          goto LABEL_71;
        }
      }
      else if ((v34 & v9) != v10) {
        goto LABEL_78;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_78;
      }
    }
  }
  while (1) {
    v33 = v32[1];
    if (v33 == v6) {
      break;
    }
    if (v33 >= v7) {
      v33 %= v7;
    }
    if (v33 != v10) {
      goto LABEL_78;
    }
  LABEL_43:
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_78;
    }
  }
  if (v32[2] != v6) {
    goto LABEL_43;
  }
LABEL_71:
  v39 = v32[3];
  if (v39 == 0) {
  LABEL_78:
    v30 = msg_MessageManager_empty_text_;
    goto LABEL_79;
  }
  v40 = GameRoutine_6fbd80(v39, *(unsigned __int8*)(v39 + 304));
LABEL_75:
  if (v40 != 0) {
    v30 = (char*)v40;
  }
  else {
    v30 = *msg_MessageManager_empty_text__ptr;
  }
LABEL_79:
  v29 = (__int64)v30;
LABEL_80:
  result = strlen(v29);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v42 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v44 = 26;
    }
    else {
      v44 = (result | 7) + 1;
    }
    v45 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v44, 16,
                                              0);
    a3[1] = v42;
    a3[2] = v45;
    *a3 = v44 | 1;
    v43 = (char*)v45;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v43 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_89;
    }
  }
  result = memmove(v43, v30, v42);
LABEL_89:
  v43[v42] = 0;
  {
    result;
    return;
  }
}

_QWORD* TutorialFile_97ffe0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(a1 + 32) != 1) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

_QWORD* TutorialFile_980100(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  if ((*(_BYTE*)(a1 + 32) & 0xFE) != 2) {
    return nullptr;
  }
  v1 = game_HashString(*(_QWORD*)(a1 + 40));
  if (v1 == 0) {
    return nullptr;
  }
  v2 = *(_QWORD*)(GameData_21c99b0 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b0 + 112) == 0) {
    return nullptr;
  }
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = v1;
    if (v1 >= v2) {
      v7 = v1 % v2;
    }
  }
  else {
    v7 = v6 & v1;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v7);
  if (v4 != nullptr) {
    v8 = (_QWORD*)*v4;
    if (*v4 != 0) {
      if ((v2 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v1) {
            if (v8[2] == v1) {
              return (_QWORD*)v8[3];
            }
          }
          else if ((v10 & v6) != v7) {
            return nullptr;
          }
          v8 = (_QWORD*)*v8;
          v4 = nullptr;
          if (v8 == nullptr) {
            return v4;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v1) {
          if (v8[2] == v1) {
            return (_QWORD*)v8[3];
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v7) {
            return nullptr;
          }
        }
        v8 = (_QWORD*)*v8;
        v4 = nullptr;
        if (v8 == nullptr) {
          return v4;
        }
      }
    }
    return nullptr;
  }
  return v4;
}

__int64* TutorialFile_980b00()
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d10,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d10) != 0) {
    GameData_21f4cf8 = (__int64)&GameData_1af4ee0;
    GameData_21f4d00 = (__int64)&GameData_1ab0047;
    GameData_21f4d08 = (__int64)&GameData_1ada40b;
    __cxa_guard_release(&GameData_21f4d10);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d30,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4d30) != 0) {
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    GameData_21f4d18 = (__int64)v1;
    v2 = GameData_21f4d00;
    v3 = GameData_21f4d08;
    GameData_21f4d20 = (__int64)(v1 + 3);
    GameData_21f4d28 = (__int64)(v1 + 3);
    *v1 = GameData_21f4cf8;
    v1[1] = v2;
    v1[2] = v3;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f4d30);
  }
  return &GameData_21f4d18;
}

#pragma GCC visibility pop
