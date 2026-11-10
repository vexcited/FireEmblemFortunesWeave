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
_QWORD* GmapSpotList_167b0c0(__int64, __int64, char);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_1678f00(__int64, __int64);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1af3123;
extern __int64 (*GameData_2082138[])();
extern __int64 (*game_gmap_anonymous_ProcGmapExWarpList_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64* GameData_212cc68[58];
extern __int64* GameData_2131b38;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_12680d0(long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcGmapExWarpList_1690440(__int64 result);

__int64 ProcGmapExWarpList_1690440(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  void* v26;
  __int64 v27;
  __int64 v28;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  long double v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64* v51;
  __int64 v52;
  _BYTE v53[12];
  char v54;
  __int64 v55;
  void* v56;

  if ((*(_QWORD*)GameData_212dbe0[0] | *(_QWORD*)GameData_212d750) == 0) {
    return result;
  }
  v1 = result;
  v53[0] = 0;
  v56 = &GameData_1af3123;
  v55 = game_HashString(&GameData_1af3123);
  if (game_GameModeData_instance_ != 0 &&
      (v2 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v55)) != 0 &&
      *(int*)(v2 + 32) >= 1) {
    v3 = 12;
    v4 = 0;
    v54 = 0;
    *(_DWORD*)&v53[8] = -1971067990;
    *(_QWORD*)v53 = 0x83E3BF82E3AB82E3LL;
  }
  else {
    v3 = 0;
    v4 = 1;
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1232, 16, 0);
  GmapSpotList_167b0c0(v6, 0, 1);
  *(_BYTE*)(v6 + 1193) = v4;
  *(_QWORD*)(v6 + 1200) = 0;
  *(_QWORD*)(v6 + 1208) = 0;
  *(_QWORD*)v6 = game_gmap_anonymous_ProcGmapExWarpList_vtable;
  *(_QWORD*)(v6 + 1216) = 0;
  *(_QWORD*)(v6 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  *(_QWORD*)(v6 + 1056) = GameData_2082138;
  ProcInst_657850(v6, GameData_212c730, "ProcGmapExWarpList", 1, v1);
  v7 = *(_QWORD*)(*GameData_212c790 + 8);
  v8 = *(__int64**)(v7 + 8);
  v9 = *(__int64**)(v7 + 16);
  v10 = *(_DWORD*)(v7 + 56);
  if (v10 < 0) {
    for (; v8 != v9; ++v8) {
      v11 = *v8;
      if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(v11 + 552) == 0) {
        goto LABEL_14;
      }
    }
  }
  else {
    while (v8 != v9) {
      v12 = *v8++;
      v11 = v12;
      if (*(_DWORD*)(v12 + 84) == v10) {
        goto LABEL_14;
      }
    }
  }
  v11 = 0;
LABEL_14:
  v13 = *(_DWORD*)(v11 + 540);
  v14 = __OFSUB__(v13, 1);
  v15 = (unsigned int)(v13 - 1);
  if (((v15 & 0x80000000) != 0LL) == v14) {
    v16 = *(_QWORD*)(v11 + 24);
    v17 = *(_QWORD*)(v11 + 32) - v16;
    v18 = v16 + 8LL * (unsigned int)v15;
    if (v15 < v17 >> 3) {
      v11 = v18;
    }
  }
  v19 = *(_QWORD*)(*(_QWORD*)v11 + 120LL);
  *(_QWORD*)(v6 + 1208) = *(_QWORD*)(v6 + 1200);
  v20 = GameData_212cc68[0];
  v21 = *(_QWORD*)(*GameData_212cc68[0] + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212cc68[0] + 72) - v21) >>
            3) >= 1) {
    v22 = 0;
    v52 = v19;
    v51 = (__int64*)(v6 + 1200);
    do {
      v24 = *(_QWORD*)(v21 + 8 * v22);
      v25 = *(_QWORD*)(v24 + 24);
      if ((*(_BYTE*)v25 & 1) != 0) {
        v26 = *(void**)(v25 + 16);
      }
      else {
        v26 = (void*)(v25 + 1);
      }
      v56 = v26;
      v55 = game_HashString(v26);
      if (game_GameModeData_instance_ != 0) {
        v27 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v55);
        if (v27 != 0 && *(_DWORD*)(v27 + 32) != 0) {
          v28 = *(_QWORD*)(v24 + 40);
          if (v19 != v28 && v28 != 0) {
            if ((v4 & 1) != 0) {
              v30 = true;
            }
            else {
              v31 = *(_QWORD*)(v28 + 8);
              v30 =
                  strlen(v31) == v3 && (unsigned int)memcmp(v53, v31, v3) == 0;
            }
            v32 = fw_memory_HeapManager_Allocate(*v5, 304, 16, 0);
            v33 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v24 + 40));
            game_1678f00(v32, v33);
            *(_BYTE*)(v32 + 288) = v30;
            *(_QWORD*)(v32 + 296) = v24;
            *(_QWORD*)v32 = game_gmap_anonymous_GmapExWarpMenuItem_vtable;
            BasicMenuCursor_16e0c00(v6, v32);
            v34 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v24 + 40));
            v36 = *(__int64**)(v6 + 1208);
            v37 = *(_QWORD*)(v6 + 1216);
            if ((unsigned __int64)v36 < v37) {
              *v36 = v34;
              v23 = (__int64)(v36 + 1);
            }
            else {
              v38 = *v51;
              v39 = (__int64)v36 - *v51;
              v40 = (v39 >> 3) + 1;
              if (v40 >> 61 != 0) {
                GameRoutine_12680d0(v35);
              }
              v41 = v37 - v38;
              v42 = v3;
              v43 = v4;
              if (v41 >> 2 > v40) {
                v40 = v41 >> 2;
              }
              if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
                v44 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v44 = v40;
              }
              if (v44 != 0) {
                if (v44 >> 61 != 0) {
                  GameRoutine_60a210(v34);
                }
                v45 = v34;
                v46 = fw_memory_HeapManager_Allocate(*v5, 8 * v44, 16, 0);
                v34 = v45;
              }
              else {
                v46 = 0;
              }
              v47 = v46 + 8 * v44;
              v48 = v46 + v39 - 8 * (v39 >> 3);
              *(_QWORD*)(v46 + v39) = v34;
              v23 = v46 + v39 + 8;
              memcpy(v48, v38, v39);
              *(_QWORD*)(v6 + 1200) = v48;
              *(_QWORD*)(v6 + 1208) = v23;
              *(_QWORD*)(v6 + 1216) = v47;
              if (v38 != 0) {
                v49 = 128;
                if (*(_QWORD*)(*v5 + 200LL) == 0) {
                  v49 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v5 + v49);
              }
              v4 = v43;
              v3 = v42;
            }
            v19 = v52;
            v20 = GameData_212cc68[0];
            *(_QWORD*)(v6 + 1208) = v23;
          }
        }
      }
      ++v22;
      v21 = *(_QWORD*)(*v20 + 64);
    } while (v22 < (int)((unsigned __int64)(*(_QWORD*)(*v20 + 72) - v21) >> 3));
  }
  v50 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 288, 16, 0);
  game_1678f00((__int64)v50, 0);
  result = *(_QWORD*)(v6 + 344);
  *v50 = GameData_2131b38 + 2;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v50[1] = v6;
  *(_QWORD*)(v6 + 344) = v50;
  return result;
}

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
