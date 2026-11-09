#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112ea40(_QWORD, _QWORD);
__int64 GameRoutine_1952140(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_facility_SceneCharacterAnimator_vtable[])();
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 SceneCharacterAnimator_Destructor(__int64 result);
__int64 SceneCharacterAnimator_DeletingDestructor(__int64 a1);
__int64 SceneCharacterAnimator_14112b0(__int64 a1);
__int64 SceneCharacterAnimator_14114e0(__int64 a1, unsigned int a2);
__int64 SceneCharacterAnimator_1411710(__int64 a1);

__int64 SceneCharacterAnimator_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)result = game_facility_SceneCharacterAnimator_vtable;
  if (*(_BYTE*)(result + 72) == 1 && (*(_BYTE*)(result + 24) & 1) != 0 &&
      *(_QWORD*)(result + 40) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  v3 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  if (v3 != 0) {
    GameRoutine_1952140(v3);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 SceneCharacterAnimator_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_SceneCharacterAnimator_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a1 + 72) == 1 && (*(_BYTE*)(a1 + 24) & 1) != 0 &&
      *(_QWORD*)(a1 + 40) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v4 != 0) {
    GameRoutine_1952140(v4);
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6);
}

__int64 SceneCharacterAnimator_14112b0(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  unsigned __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 result;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;

  if (*(_BYTE*)(a1 + 72) != 1) {
    return 0;
  }
  v1 = *(_DWORD*)(a1 + 48);
  if (*(_QWORD*)(a1 + 80) == 0) {
    if (v1 == 0) {
      return v1;
    }
    if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
      v7 = GameData_22356f8 - 1;
      if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
        v8 = (int)v1;
        if (GameData_22356f8 <= (unsigned __int64)(int)v1) {
          v8 = (int)v1 % (unsigned __int64)GameData_22356f8;
        }
      }
      else {
        v8 = v7 & (int)v1;
      }
      v14 = *(__int64***)(GameData_22356f0 + 8 * v8);
      if (v14 != nullptr) {
        v15 = *v14;
        if (v15 != nullptr) {
          if ((GameData_22356f8 & v7) == 0) {
            while (1) {
              v17 = v15[1];
              if (v17 == v1) {
                if (*((_DWORD*)v15 + 4) == v1) {
                  return v1;
                }
              }
              else if ((v17 & v7) != v8) {
                return 0;
              }
              v15 = (__int64*)*v15;
              result = 0;
              if (v15 == nullptr) {
                return result;
              }
            }
          }
          while (1) {
            v16 = v15[1];
            if (v16 == v1) {
              if (*((_DWORD*)v15 + 4) == v1) {
                return v1;
              }
            }
            else {
              if (v16 >= GameData_22356f8) {
                v16 %= (unsigned __int64)GameData_22356f8;
              }
              if (v16 != v8) {
                return 0;
              }
            }
            v15 = (__int64*)*v15;
            result = 0;
            if (v15 == nullptr) {
              return result;
            }
          }
        }
      }
    }
    return 0;
  }
  if (v1 == 0) {
    return v1;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = (int)v1;
      if (GameData_22356f8 <= (unsigned __int64)(int)v1) {
        v5 = (int)v1 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & (int)v1;
    }
    v9 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v9 != nullptr) {
      v10 = *v9;
      if (*v9 == nullptr) {
      LABEL_37:
        if (*(_QWORD*)(v2 + 5112) == 0) {
          return 0;
        }
        return v1;
      }
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v12 = v10[1];
          if (v12 == v1) {
            if (*((_DWORD*)v10 + 4) == v1) {
              goto LABEL_57;
            }
          }
          else if ((v12 & v4) != v5) {
            goto LABEL_37;
          }
          v10 = (__int64*)*v10;
          if (v10 == nullptr) {
            goto LABEL_37;
          }
        }
      }
      while (1) {
        v11 = v10[1];
        if (v11 == v1) {
          break;
        }
        if (v11 >= GameData_22356f8) {
          v11 %= (unsigned __int64)GameData_22356f8;
        }
        if (v11 != v5) {
          goto LABEL_37;
        }
      LABEL_25:
        v10 = (__int64*)*v10;
        if (v10 == nullptr) {
          goto LABEL_37;
        }
      }
      if (*((_DWORD*)v10 + 4) != v1) {
        goto LABEL_25;
      }
    LABEL_57:
      if (*(_QWORD*)(v2 + 8LL * *((int*)v10 + 5)) == 0) {
        return 0;
      }
      return v1;
    }
  }
  if (*(_QWORD*)(v2 + 5112) != 0) {
    return v1;
  }
  return 0;
}

__int64 SceneCharacterAnimator_14114e0(__int64 a1, unsigned int a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v8;
  unsigned __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;

  if (*(_QWORD*)(a1 + 80) == 0) {
    if (a2 == 0) {
      return a2;
    }
    if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
      return 0;
    }
    v8 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v9 = (int)a2;
      if (GameData_22356f8 <= (unsigned __int64)(int)a2) {
        v9 = (int)a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v9 = v8 & (int)a2;
    }
    v14 = *(__int64***)(GameData_22356f0 + 8 * v9);
    if (v14 != nullptr) {
      v15 = *v14;
      if (v15 != nullptr) {
        if ((GameData_22356f8 & v8) == 0) {
          while (1) {
            v17 = v15[1];
            if (v17 == a2) {
              if (*((_DWORD*)v15 + 4) == a2) {
                return a2;
              }
            }
            else if ((v17 & v8) != v9) {
              return 0;
            }
            v15 = (__int64*)*v15;
            result = 0;
            if (v15 == nullptr) {
              return result;
            }
          }
        }
        while (1) {
          v16 = v15[1];
          if (v16 == a2) {
            if (*((_DWORD*)v15 + 4) == a2) {
              return a2;
            }
          }
          else {
            if (v16 >= GameData_22356f8) {
              v16 %= (unsigned __int64)GameData_22356f8;
            }
            if (v16 != v9) {
              return 0;
            }
          }
          v15 = (__int64*)*v15;
          result = 0;
          if (v15 == nullptr) {
            return result;
          }
        }
      }
    }
    return 0;
  }
  if (a2 == 0) {
    return a2;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v4 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v5 = (int)a2;
      if (GameData_22356f8 <= (unsigned __int64)(int)a2) {
        v5 = (int)a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v5 = v4 & (int)a2;
    }
    v10 = *(__int64***)(GameData_22356f0 + 8 * v5);
    if (v10 != nullptr) {
      v11 = *v10;
      if (*v10 == nullptr) {
      LABEL_38:
        if (*(_QWORD*)(v2 + 5112) == 0) {
          return 0;
        }
        return a2;
      }
      if ((GameData_22356f8 & v4) == 0) {
        while (1) {
          v13 = v11[1];
          if (v13 == a2) {
            if (*((_DWORD*)v11 + 4) == a2) {
              goto LABEL_58;
            }
          }
          else if ((v13 & v4) != v5) {
            goto LABEL_38;
          }
          v11 = (__int64*)*v11;
          if (v11 == nullptr) {
            goto LABEL_38;
          }
        }
      }
      while (1) {
        v12 = v11[1];
        if (v12 == a2) {
          break;
        }
        if (v12 >= GameData_22356f8) {
          v12 %= (unsigned __int64)GameData_22356f8;
        }
        if (v12 != v5) {
          goto LABEL_38;
        }
      LABEL_26:
        v11 = (__int64*)*v11;
        if (v11 == nullptr) {
          goto LABEL_38;
        }
      }
      if (*((_DWORD*)v11 + 4) != a2) {
        goto LABEL_26;
      }
    LABEL_58:
      if (*(_QWORD*)(v2 + 8LL * *((int*)v11 + 5)) == 0) {
        return 0;
      }
      return a2;
    }
  }
  if (*(_QWORD*)(v2 + 5112) != 0) {
    return a2;
  }
  return 0;
}

__int64 SceneCharacterAnimator_1411710(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  if (*(_BYTE*)(a1 + 72) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 40);
  }
  else {
    v2 = a1 + 25;
  }
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v16[1] = v4;
    v17 = v5;
    v16[0] = v7 | 1;
    goto LABEL_14;
  }
  LOBYTE(v16[0]) = 2 * v3;
  v5 = (char*)v16 + 1;
  if (v3 != 0) {
  LABEL_14:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_BYTE*)(v8 + 48);
  v10 = *(_QWORD*)(v8 + 64);
  v11 = v8 + 49;
  if ((v9 & 1) != 0) {
    v12 = v10;
  }
  else {
    v12 = v11;
  }
  if ((v16[0] & 1) != 0) {
    v13 = v17;
  }
  else {
    v13 = (char*)v16 + 1;
  }
  result = GameRoutine_112ea40(v12, v13);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v14 = result;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
