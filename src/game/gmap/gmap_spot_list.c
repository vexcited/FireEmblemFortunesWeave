#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd280(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2080158[])();
extern __int64 (*GameData_20802d8[])();
extern __int64 GameData_207fdb0;
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d708;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_167e010(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* GmapSpotList_Unknown145(_QWORD* a1);
__int64 GmapSpotList_167c6c0(_QWORD* a1);
__int64 GmapSpotList_Unknown100(__int64 a1);

_QWORD* GmapSpotList_Unknown145(_QWORD* a1)
{
  _QWORD* v1;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[3];

  v1 = (_QWORD*)a1[19];
  v3 = GameRoutine_16dd280();
  v20[0] = GameData_2080158;
  v20[1] = a1;
  v21 = v20;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    v6 = v20;
  LABEL_3:
    (*(void (**)(_QWORD*, __int64))(*v6 + v5))(v6, v4);
    goto LABEL_4;
  }
  v15 = v3;
  v16 = fw_memory_g_heap_manager_ptr;
  if (v1 == nullptr) {
    v1 = a1;
  }
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v17 = 0;
  v18 = v17;
  v22[0] = v17;
  v22[1] = v17 + 1;
  v22[2] = v17 + 1;
  GameRoutine_167f810(v1, 0, v22, 0, v15, v20);
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19, v18);
  v6 = v21;
  if (v21 == v20) {
    v5 = 32;
    goto LABEL_3;
  }
  if (v21 != nullptr) {
    v5 = 40;
    goto LABEL_3;
  }

LABEL_4:
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 1128LL))(a1);
  result = v20;
  v20[0] = GameData_20802d8;
  v20[1] = a1;
  v10 = GameData_225e7a0;
  v21 = v20;
  if (GameData_225e7a0 == 0) {
  LABEL_15:
    v14 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v14))(result,
                                                                       v7);
  }
  v11 = *(_QWORD*)(GameData_225e7a0 + 192);
  v12 = *(_QWORD*)(GameData_225e7a0 + 200);
  *(_BYTE*)(GameData_225e7a0 + 224) = v8 != 1;
  if (v11 == v12) {
    result = v20;
    goto LABEL_15;
  }
  do {
    if (*(_BYTE*)(v10 + 224) == 1) {
      v22[0] = *(_QWORD*)v11;
      if (v21 == nullptr) {
        GameRoutine_60a310(0, v7);
      }
      v13 = (*(__int64 (**)(_QWORD*, _QWORD*))(*v21 + 48LL))(v21, v22);
    }
    else {
      v13 = *(_QWORD*)(v10 + 352) == *(_QWORD*)v11;
    }
    *(_BYTE*)(v11 + 36) = v13 & 1;
    v11 += 96;
  } while (v11 != v12);
  result = v21;
  if (v21 == v20) {
    goto LABEL_15;
  }
  if (v21 == nullptr) {
    return result;
  }
  v14 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v14))(result,
                                                                     v7);
}

__int64 GmapSpotList_167c6c0(_QWORD* a1)
{
  __int64 result;
  _DWORD* v3;
  unsigned __int64 v4;
  char* v5;
  int v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  char* v29;
  char* v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  char* v34;
  char* v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 1144LL))(a1);
  if ((result & 1) == 0) {
    v5 = (char*)a1[134];
    v6 = 0;
    v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = a1[135];
      if ((unsigned __int64)v5 < v8) {
        *(_DWORD*)v5 = v6;
        v5 += 4;
      }
      else {
        v9 = a1[133];
        v10 = &v5[-v9];
        v11 = (__int64)&v5[-v9] >> 2;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 62 != 0) {
          goto LABEL_112;
        }
        v13 = v8 - v9;
        if (v13 >> 1 > v12) {
          v12 = v13 >> 1;
        }
        if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFFCLL) {
          v14 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v12;
        }
        if (v14 != 0) {
          if (v14 >> 62 != 0) {
            goto LABEL_113;
          }
          v15 = fw_memory_HeapManager_Allocate(*v7, 4 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 4 * v14;
        v17 = &v5[-v9];
        v18 = (__int64)&v10[v15 + -4 * v11];
        *(_DWORD*)&v10[v15] = v6;
        v5 = &v10[v15 + 4];
        result = memcpy(v18, v9, v17);
        a1[133] = v18;
        a1[134] = v5;
        a1[135] = v16;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v7 + v19, v9);
        }
      }
      ++v6;
      a1[134] = v5;
    } while (v6 != 13);
    if (game_GameModeData_instance_ != 0) {
      v20 = (char*)a1[133];
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        if (v20 != v5) {
          while (*(_DWORD*)v20 != 7) {
            v20 += 4;
            if (v20 == v5) {
              goto LABEL_57;
            }
          }
        }
        if (v20 == v5 || (v30 = v20 + 4, v20 + 4 == v5)) {
        LABEL_55:
          if (v20 != v5) {
            v5 = v20;
            a1[134] = v20;
          }
        LABEL_57:
          v31 = (__int64*)a1[32];
          v32 = (__int64*)a1[33];
          if (v31 == v32) {
          LABEL_60:
            v34 = (char*)a1[133];
            if (v34 != v5) {
              while (*(_DWORD*)v34 != 0) {
                v34 += 4;
                if (v34 == v5) {
                  goto LABEL_73;
                }
              }
            }
            if (v34 != v5) {
              v35 = v34 + 4;
              if (v34 + 4 != v5) {
                do {
                  if (*(_DWORD*)v35 != 0) {
                    *(_DWORD*)v34 = *(_DWORD*)v35;
                    v34 += 4;
                  }
                  v35 += 4;
                } while (v35 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v34 != v5) {
              v5 = v34;
              a1[134] = v34;
            }
          }
          else {
            while (1) {
              v33 = *v31++;
              if (*(_DWORD*)(v33 + 96) != 6) {
                break;
              }
              if (v31 == v32) {
                goto LABEL_60;
              }
            }
          }
        LABEL_73:
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 &&
                  *(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
            v36 = (char*)a1[133];
            if (v36 != v5) {
              while (*(_DWORD*)v36 != 12) {
                v36 += 4;
                if (v36 == v5) {
                  goto LABEL_95;
                }
              }
            }
            if (v36 != v5) {
              v37 = v36 + 4;
              if (v36 + 4 != v5) {
                do {
                  if (*(_DWORD*)v37 != 12) {
                    *(_DWORD*)v36 = *(_DWORD*)v37;
                    v36 += 4;
                  }
                  v37 += 4;
                } while (v37 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v36 != v5) {
              v5 = v36;
              a1[134] = v36;
            }
          }
        LABEL_95:
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 &&
                  *(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
            v42 = (char*)a1[133];
            if (v42 != v5) {
              while (*(_DWORD*)v42 != 10) {
                v42 += 4;
                if (v42 == v5) {
                  return result;
                }
              }
            }
            if (v42 != v5) {
              v43 = v42 + 4;
              if (v42 + 4 != v5) {
                do {
                  if (*(_DWORD*)v43 != 10) {
                    *(_DWORD*)v42 = *(_DWORD*)v43;
                    v42 += 4;
                  }
                  v43 += 4;
                } while (v43 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v42 != v5) {
              a1[134] = v42;
            }
          }
          return result;
        }
        do {
          if (*(_DWORD*)v30 != 7) {
            *(_DWORD*)v20 = *(_DWORD*)v30;
            v20 += 4;
          }
          v30 += 4;
        } while (v30 != v5);
      LABEL_54:
        v5 = (char*)a1[134];
        goto LABEL_55;
      }
    }
    else {
      v20 = (char*)a1[133];
    }
    if (v20 != v5) {
      while (*(_DWORD*)v20 != 8) {
        v20 += 4;
        if (v20 == v5) {
          goto LABEL_57;
        }
      }
    }
    if (v20 == v5) {
      goto LABEL_55;
    }
    v29 = v20 + 4;
    if (v20 + 4 == v5) {
      goto LABEL_55;
    }
    do {
      if (*(_DWORD*)v29 != 8) {
        *(_DWORD*)v20 = *(_DWORD*)v29;
        v20 += 4;
      }
      v29 += 4;
    } while (v29 != v5);
    goto LABEL_54;
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1);
  v3 = (_DWORD*)a1[134];
  v4 = a1[135];
  if ((unsigned __int64)v3 >= v4) {
    v21 = a1[133];
    v22 = (char*)v3 - v21;
    v23 = ((__int64)v3 - v21) >> 2;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 62 != 0) {
    LABEL_112:
      GameRoutine_167e010();
    }
    v25 = v4 - v21;
    if (v25 >> 1 > v24) {
      v24 = v25 >> 1;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFFCLL) {
      v26 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 62 != 0) {
      LABEL_113:
        GameRoutine_60a210(result);
      }
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v26, 16, 0);
      LODWORD(result) = v27;
    }
    else {
      v28 = 0;
    }
    v38 = v28 + 4 * v26;
    v39 = (__int64)&v22[v28 + -4 * v23];
    *(_DWORD*)&v22[v28] = result;
    v40 = (__int64)&v22[v28 + 4];
    result = memcpy(v39, v21, v22);
    a1[133] = v39;
    a1[134] = v40;
    a1[135] = v38;
    if (v21 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v21);
    }
    a1[134] = v40;
  }
  else {
    *v3 = result;
    a1[134] = v3 + 1;
  }
  return result;
}

__int64 GmapSpotList_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(a1 + 1176) != 1) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 1;
  }
  v2 = __dynamic_cast(v1, GameData_212e008[0], &GameData_207fdb0, 0);
  if (v2 == 0) {
    return 1;
  }
  v3 = v2;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2) & 1) == 0) {
    return 1;
  }
  GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16),
                      *(_QWORD*)(v3 + 88) + 32LL);
  return 4;
}

#pragma GCC visibility pop
