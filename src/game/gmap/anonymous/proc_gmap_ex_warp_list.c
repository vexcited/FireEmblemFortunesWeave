#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_16dd280(void);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_dbced0(_QWORD, _QWORD);
__int64 GameRoutine_f2a950(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2082458[])();
extern __int64 (*game_gmap_anonymous_GmapExWarpMenuItem_vtable[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d750;
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212c790;
extern __int64* GameData_212d728[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 ProcGmapExWarpList_Unknown100(__int64 a1);
_QWORD* ProcGmapExWarpList_Unknown145(__int64 a1);

__int64 ProcGmapExWarpList_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64* i;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  _QWORD v43[2];
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  _QWORD v56[3];

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0 ||
      *(__int64 (***)())v1 != game_gmap_anonymous_GmapExWarpMenuItem_vtable ||
      *(_BYTE*)(v1 + 288) != 1) {
    return 1;
  }
  v2 = *(_QWORD*)(v1 + 296);
  v3 = GameData_212d750;
  if (*(_QWORD*)GameData_212d750 != 0) {
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = nullptr;
    v55 = 0;
    v56[2] = 0;
    v56[0] = 0;
    *(_QWORD*)((char*)v56 + 5) = 0;
    v4 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 88LL);
    v45 = 0;
    v46 = 0;
    v47 = nullptr;
    v48 = 0;
    v5 = strlen(v4);
    if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_87;
    }
    v6 = v5;
    if (v5 >= 0x17) {
      if ((v5 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v5 | 7) + 1;
      }
      v7 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
      v43[1] = v6;
      v44 = v7;
      v43[0] = v16 | 1;
    }
    else {
      LOBYTE(v43[0]) = 2 * v5;
      v7 = (char*)v43 + 1;
      if (v5 == 0) {
      LABEL_22:
        v7[v6] = 0;
        if (*(_QWORD*)(v2 + 56) != 0) {
          v17 = *(char**)(v2 + 56);
        }
        else {
          v17 = &GameData_1a9f09e;
        }
        v18 = strlen(v17);
        if (v18 < 0xFFFFFFFFFFFFFFF7LL) {
          v19 = v18;
          if (v18 >= 0x17) {
            if ((v18 | 7) == 0x17) {
              v21 = 26;
            }
            else {
              v21 = (v18 | 7) + 1;
            }
            v20 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
            v41 = v19;
            v42 = v20;
            v40 = v21 | 1;
          }
          else {
            LOBYTE(v40) = 2 * v18;
            v20 = (char*)&v40 + 1;
            if (v18 == 0) {
            LABEL_34:
              v20[v19] = 0;
              GameRoutine_dbced0(&v45, v43);
              v51 = 1;
              if ((v52 & 1) != 0) {
                if ((v40 & 1) != 0) {
                  v22 = v42;
                }
                else {
                  v22 = (char*)&v40 + 1;
                }
                if ((v40 & 1) != 0) {
                  v23 = v41;
                }
                else {
                  v23 = (unsigned __int64)(unsigned __int8)v40 >> 1;
                }
                GameRoutine_64dde0(&v52, v22, v23);
                if ((v40 & 1) == 0) {
                  goto LABEL_56;
                }
              }
              else {
                if ((v40 & 1) == 0) {
                  v52 = v40;
                  v53 = v41;
                  v54 = v42;
                LABEL_56:
                  if ((v43[0] & 1) != 0 && v44 != nullptr) {
                    v26 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v26 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v44);
                  }
                  v27 = GameData_212c6a0[0];
                  v28 = *(_QWORD*)GameData_212c6a0[0] + 48LL;
                  *(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) = 1;
                  GameRoutine_d5d770(v28, &v45);
                  *(_DWORD*)(*(_QWORD*)v27 + 928LL) = 3;
                  v29 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
                  *(_QWORD*)v29 = *(_QWORD*)(v2 + 40);
                  *(_BYTE*)(v29 + 128) = 1;
                  v30 = *(_QWORD*)(*GameData_212c790 + 8);
                  v31 = *(_DWORD*)(v30 + 56);
                  if (v31 < 0) {
                    for (i = *(__int64**)(v30 + 8);; ++i) {
                      v33 = *i;
                      if (*(_QWORD*)(*i + 96) == 0 &&
                          *(_QWORD*)(v33 + 552) == 0) {
                        break;
                      }
                    }
                    v31 = *(_DWORD*)(v33 + 84);
                  }
                  *(_DWORD*)(v29 + 124) = v31;
                  *(_DWORD*)(*(_QWORD*)v3 + 152LL) = 11;
                  v34 = *(_QWORD*)(*GameData_212d728[0] + 8);
                  GameRoutine_155e830(*(_QWORD*)(v34 + 16), 0);
                  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] !=
                      0) {
                    GameRoutine_17b8f40(
                        *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                        1);
                  }
                  v35 = game_gameui_Footer_instance_;
                  v36 = *(_DWORD*)(v34 + 5856) & 0xFFFEFFFF;
                  *(_DWORD*)(v34 + 5856) = v36;
                  if (v35 != 0) {
                    GameRoutine_1567000(v35, 0);
                    v36 = *(_DWORD*)(v34 + 5856);
                  }
                  *(_DWORD*)(v34 + 5856) = v36 & 0xFFFDFFFF;
                  if ((v52 & 1) != 0 && v54 != nullptr) {
                    v37 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v37 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v54);
                  }
                  if ((v48 & 1) != 0 && v50 != 0) {
                    v38 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v38 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v50);
                  }
                  goto LABEL_81;
                }
                GameRoutine_64df20(&v52, v42, v41);
              }
              if (v42 != nullptr) {
                v25 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v25 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v42);
              }
              goto LABEL_56;
            }
          }
          memmove(v20, v17, v19);
          goto LABEL_34;
        }
      LABEL_87:
        GameRoutine_60a1d0();
      }
    }
    memmove(v7, v4, v6);
    goto LABEL_22;
  }
  v10 = *(_QWORD*)(v2 + 40);
  v11 = *(_QWORD*)GameData_212dbe0[0];
  if (*(_QWORD*)(v2 + 56) != 0) {
    v12 = *(char**)(v2 + 56);
  }
  else {
    v12 = &GameData_1a9f09e;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_87;
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
    v46 = v14;
    v47 = v15;
    v45 = v24 | 1;
  }
  else {
    LOBYTE(v45) = 2 * v13;
    v15 = (char*)&v45 + 1;
    if (v13 == 0) {
      goto LABEL_50;
    }
  }
  memmove(v15, v12, v14);

LABEL_50:
  v15[v14] = 0;
  GameRoutine_f2a950(v11, v10, &v45, *(unsigned __int8*)(a1 + 1193));

LABEL_81:
  if ((v45 & 1) != 0 && v47 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39,
                                  v47);
  }
  return 4;
}

_QWORD* ProcGmapExWarpList_Unknown145(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = GameRoutine_16dd280();
  v9[0] = GameData_2082458;
  v9[1] = a1;
  v10 = v9;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    result = v9;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  v7 = v3;
  if (v1 != 0) {
    v8 = v1;
  }
  else {
    v8 = a1;
  }
  GameRoutine_167f810(v8, 8, a1 + 1200, 0, v7, (__int64)v9);
  result = v10;
  if (v10 == v9) {
    v5 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  if (v10 != nullptr) {
    v5 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  return result;
}

#pragma GCC visibility pop
