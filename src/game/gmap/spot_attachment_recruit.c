#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1329000(_QWORD, _QWORD);
__int64 GameRoutine_1329200(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14de000(_QWORD);
__int64 GameRoutine_14de4e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotAttachmentRecruit_GetData(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern __int64 (*game_gmap_SpotAttachmentRecruit_vtable[])();
extern __int64 GameData_21c9ea8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 SpotAttachmentRecruit_Destructor(__int64 result);
__int64 SpotAttachmentRecruit_DeletingDestructor(_QWORD* a1);
unsigned __int64 SpotAttachmentRecruit_15189e0(__int64 a1, __int64 a2,
                                               unsigned int a3);
__int64 SpotAttachmentRecruit_Unknown36(__int64 a1, __int64 a2);

__int64 SpotAttachmentRecruit_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  int v4;
  int v5;

  *(_QWORD*)result = game_gmap_SpotAttachmentRecruit_vtable;
  v1 = *(_QWORD*)(result + 32);
  if (*(_BYTE*)(v1 + 116) == 1) {
    *(_BYTE*)(v1 + 116) = 0;
    v2 = *(_QWORD*)(result + 32);
    result = GameRoutine_1329200(v2, 5);
    v3 = *(_DWORD**)(v2 + 264);
    if (*(_QWORD*)v3 == 0) {
      if ((result & 1) == 0) {
        return result;
      }
      return GameRoutine_1329000(v2, 5);
    }
    v4 = *(_DWORD*)(*(_QWORD*)v3 + 16LL);
    v5 = v3[2];
    if ((result & 1) != 0) {
      if (v4 == v5) {
        return result;
      }
      return GameRoutine_1329000(v2, 5);
    }
    if (v4 == v5) {
      return GameRoutine_14a1520(v2 + 264, 1);
    }
  }
  return result;
}

__int64 SpotAttachmentRecruit_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _DWORD* v5;
  int v6;
  int v7;
  __int64 v8;

  *a1 = game_gmap_SpotAttachmentRecruit_vtable;
  v2 = a1[4];
  if (*(_BYTE*)(v2 + 116) == 1) {
    *(_BYTE*)(v2 + 116) = 0;
    v3 = a1[4];
    v4 = GameRoutine_1329200(v3, 5);
    v5 = *(_DWORD**)(v3 + 264);
    if (*(_QWORD*)v5 == 0) {
      if ((v4 & 1) == 0) {
        goto LABEL_10;
      }
      goto LABEL_7;
    }
    v6 = *(_DWORD*)(*(_QWORD*)v5 + 16LL);
    v7 = v5[2];
    if ((v4 & 1) != 0) {
      if (v6 == v7) {
        goto LABEL_10;
      }
    LABEL_7:
      GameRoutine_1329000(v3, 5);
      goto LABEL_10;
    }
    if (v6 == v7) {
      GameRoutine_14a1520(v3 + 264, 1);
    }
  }

LABEL_10:
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, a1);
}

unsigned __int64 SpotAttachmentRecruit_15189e0(__int64 a1, __int64 a2,
                                               unsigned int a3)
{
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  unsigned __int8* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = game_gmap_SpotAttachmentRecruit_GetData(a1);
  result = GameRoutine_13261c0(a2);
  v8 = *(unsigned __int16*)(v6 + 48);
  if (*(_WORD*)(v6 + 48) != 0) {
    v9 = *(unsigned __int8**)(v6 + 56);
    while (1) {
      v10 = *v9++;
      if (v10 == (unsigned __int8)result) {
        break;
      }
      if (--v8 == 0) {
        return result;
      }
    }
    v11 = *(_QWORD*)(a2 + 120);
    v12 = *(_QWORD*)(v11 + 8);
    if (v12 != 0) {
      v13 = strchr(*(_QWORD*)(v11 + 8), 95);
      if (v13 != 0) {
        v12 = v13 + 1;
      }
    }
    result = game_HashString(v12);
    if (result != 0) {
      v14 = *(_QWORD*)(GameData_21c9ea8 + 96);
      if (v14 != 0 && *(_QWORD*)(GameData_21c9ea8 + 112) != 0) {
        v16 = v14 - 1;
        if ((v14 & (v14 - 1)) != 0) {
          v17 = result;
          if (result >= v14) {
            v17 = result % v14;
          }
        }
        else {
          v17 = v16 & result;
        }
        v18 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ea8 + 88) + 8 * v17);
        if (v18 != nullptr) {
          v19 = (_QWORD*)*v18;
          if (v19 != nullptr) {
            if ((v14 & v16) == 0) {
              while (1) {
                v21 = v19[1];
                if (v21 == result) {
                  if (v19[2] == result) {
                    goto LABEL_34;
                  }
                }
                else if ((v21 & v16) != v17) {
                  return result;
                }
                v19 = (_QWORD*)*v19;
                if (v19 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v20 = v19[1];
              if (v20 == result) {
                if (v19[2] == result) {
                LABEL_34:
                  v22 = v19[3];
                  if (v22 != 0) {
                    if (game_GameModeData_instance_ != 0 &&
                        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                      v23 = 4;
                    }
                    else {
                      v24 = game_gmap_SpotAttachmentRecruit_GetData(result);
                      v23 = (unsigned int)GameRoutine_14de000(v24);
                    }
                    return GameRoutine_14de4e0(v22, a1, v23, a3);
                  }
                  return result;
                }
              }
              else {
                if (v20 >= v14) {
                  v20 %= v14;
                }
                if (v20 != v17) {
                  return result;
                }
              }
              v19 = (_QWORD*)*v19;
            } while (v19 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

__int64 SpotAttachmentRecruit_Unknown36(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v4;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 9;
  GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 22) << 24) +
                             ((__int64)*(__int16*)(a1 + 20) << 32) +
                             ((__int64)*(__int16*)(a1 + 24) << 18) +
                             ((__int64)*(__int16*)(a1 + 26) << 12) +
                             ((__int64)*(__int16*)(a1 + 28) << 6) +
                             *(__int16*)(a1 + 30));
  result = GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 10) << 24) +
                                      ((__int64)*(__int16*)(a1 + 8) << 32) +
                                      ((__int64)*(__int16*)(a1 + 12) << 18) +
                                      ((__int64)*(__int16*)(a1 + 14) << 12) +
                                      ((__int64)*(__int16*)(a1 + 16) << 6) +
                                      *(__int16*)(a1 + 18));
  v8 = *(int*)(a2 + 20);
  v9 = *(_BYTE*)(a1 + 41);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  v11 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  v13 = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  return result;
}

#pragma GCC visibility pop
