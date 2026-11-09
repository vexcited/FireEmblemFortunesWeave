#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_151b980();
__int64 SpotMgr_132ffa0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2049fb0[])();
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 SpotAttachmentFort_Unknown30(__int64 a1);
_QWORD* SpotAttachmentFort_Unknown16(__int64 a1, __int64 a2);
__int64 SpotAttachmentFort_DeletingDestructor(_QWORD* a1);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9a50c;
extern __int64 GameData_21c9ed0;
__int64 SpotAttachmentFort_151b980();

__int64 SpotAttachmentFort_151b980()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a9a50c);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c9ed0 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c9ed0 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ed0 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 SpotAttachmentFort_Unknown30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v10;
  int v11;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v2 = GameRoutine_151b980();
  v3 = *(unsigned __int8*)(v1 + 50);
  if (v3 >= 3) {
    if (v3 >= 5) {
      if (v3 >= 7) {
        if (v3 >= 9) {
          v6 = v3 >= 0xB;
          v4 = 4;
          if (v6) {
            v4 = 5;
          }
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v4 = 3;
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
      }
      else {
        v4 = 2;
        v5 = *(_QWORD*)(v1 + 64);
        if (v5 == 0) {
          goto LABEL_21;
        }
      }
    }
    else {
      v4 = 1;
      v5 = *(_QWORD*)(v1 + 64);
      if (v5 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 64);
    if (v5 == 0) {
      goto LABEL_21;
    }
  }
  v7 = *(unsigned __int16*)(v2 + 32);
  if (*(_WORD*)(v2 + 32) == 0) {
  LABEL_21:
    v10 = 72;
    return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
  }
  v8 = *(unsigned __int8**)(v2 + 40);
  v9 = *(unsigned __int8*)(v5 + 250);
  v10 = 72;
  while (1) {
    v11 = *v8++;
    if (v11 == v9) {
      break;
    }
    if (--v7 == 0) {
      return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
    }
  }
  v10 = 56;
  return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
}

_QWORD* SpotAttachmentFort_Unknown16(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD* v10;

  v2 = *(_QWORD*)(a1 + 32);
  v8[0] = GameData_2049fb0;
  v8[1] = a1;
  result = v8;
  v9 = v8;
  if (v2 == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_QWORD**)(v4 + 8);
  v6 = *(_QWORD**)(v4 + 16);
  if (v5 == v6) {
    result = v8;
  LABEL_11:
    v7 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v7))(result,
                                                                      a2);
  }
  do {
    if (*(_QWORD*)*v5 == v2) {
      v10 = (_QWORD*)*v5;
      if (v9 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v9 + 48LL))(v9, &v10);
    }
    ++v5;
  } while (v5 != v6);
  result = v9;
  if (v9 == v8) {
    goto LABEL_11;
  }
  if (v9 == nullptr) {
    return result;
  }
  v7 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v7))(result, a2);
}

__int64 SpotAttachmentFort_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD v19[2];
  char* v20;

  v1 = a1[4];
  *a1 = &game_gmap_SpotAttachmentDispatch_vtable;
  if (v1 != 0) {
    v3 = 0;
    v4 = GameData_212cf80[0];
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v6 = GameData_212c780;
    while (1) {
      v7 = *(_QWORD*)(v5 + 48);
      if (*(_BYTE*)(v7 + v3) != 0) {
        v8 = *(_DWORD*)(v7 + v3 + 4);
        if (v8 != 0 && *v6 != 0) {
          v20 = &GameData_1a9f09e;
          v19[0] = v8;
          v19[1] = 0;
          if (SpotMgr_132ffa0(v19) == v1) {
            break;
          }
        }
      }
      v3 += 8;
      if (v3 == 2400) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) + v3;
    v11 = *(_DWORD*)(v10 + 4);
    if (v11 != 0 && *v6 != 0) {
      v20 = &GameData_1a9f09e;
      v19[0] = v11;
      v19[1] = 0;
      if (SpotMgr_132ffa0(v19) != 0) {
        *(_DWORD*)(v10 + 4) = 0;
      }
    }
  }

LABEL_19:
  v13 = a1[6];
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v13;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, a1);
}

#pragma GCC visibility pop
