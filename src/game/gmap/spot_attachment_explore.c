#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_135c2e0(void);
__int64 GameRoutine_151a420();
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 atoi(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab1630;
extern _UNKNOWN GameData_1ac136e;
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c99b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 SpotAttachmentExplore_Unknown30(__int64 a1);
__int64 SpotAttachmentExplore_Unknown40(_QWORD* a1);
__int64 SpotAttachmentExplore_DeletingDestructor(_QWORD* a1);
__int64 Impl_13261c0(_QWORD);
__int64 SpotAttachmentDungeon_151b000(void);
__int64 SpotAttachmentExplore_151a420(void);
__int64 SpotAttachmentFort_151b980(void);
__int64 game_gmap_SpotAttachmentDungeon_GetData(_QWORD);
__int64 game_gmap_SpotAttachmentExplore_GetData(void);
__int64 game_gmap_SpotAttachmentFort_GetData(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab7f34;
extern __int64 GameData_21c9ed0;
bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2);
__int64 SpotAttachmentExplore_151a420();

bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  int v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  int v23;
  int v24;
  _BOOL8 result;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v33;
  unsigned __int8* v34;
  __int64 v35;
  int v36;
  int v37;

  v4 = game_gmap_SpotAttachmentExplore_GetData();
  v5 = Impl_13261c0(a1);
  v6 = *(unsigned __int16*)(v4 + 48);
  if (*(_WORD*)(v4 + 48) == 0) {
  LABEL_5:
    v9 = game_gmap_SpotAttachmentDungeon_GetData(v5);
    v10 = Impl_13261c0(a1);
    v12 = *(unsigned __int16*)(v9 + 48);
    if (*(_WORD*)(v9 + 48) != 0) {
      v13 = *(unsigned __int8**)(v9 + 56);
      while (1) {
        v14 = *v13++;
        if (v14 == (unsigned __int8)v10) {
          break;
        }
        if (--v12 == 0) {
          goto LABEL_9;
        }
      }
      if (*(_QWORD*)(a2 + 64) != 0) {
        v27 = SpotAttachmentDungeon_151b000();
        if (*(_WORD*)(v27 + 32) != 0) {
          v28 = *(unsigned __int8**)(v27 + 40);
          v29 = *(unsigned __int16*)(v27 + 32) - 1LL;
          v30 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
          do {
            v31 = *v28++;
            result = v31 == v30;
          } while (v31 != v30 && v29-- != 0);
          return result;
        }
      }
    }
    else {
    LABEL_9:
      v15 = game_gmap_SpotAttachmentFort_GetData(v10, v11);
      v16 = Impl_13261c0(a1);
      v17 = *(unsigned __int16*)(v15 + 48);
      if (*(_WORD*)(v15 + 48) != 0) {
        v18 = *(unsigned __int8**)(v15 + 56);
        while (1) {
          v19 = *v18++;
          if (v19 == v16) {
            break;
          }
          if (--v17 == 0) {
            return false;
          }
        }
        if (*(_QWORD*)(a2 + 64) != 0) {
          v33 = SpotAttachmentFort_151b980();
          if (*(_WORD*)(v33 + 32) != 0) {
            v34 = *(unsigned __int8**)(v33 + 40);
            v35 = *(unsigned __int16*)(v33 + 32) - 1LL;
            v36 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
            do {
              v37 = *v34++;
              result = v37 == v36;
            } while (v37 != v36 && v35-- != 0);
            return result;
          }
        }
      }
    }
    return false;
  }
  v7 = *(unsigned __int8**)(v4 + 56);
  while (1) {
    v8 = *v7++;
    if (v8 == (unsigned __int8)v5) {
      break;
    }
    if (--v6 == 0) {
      goto LABEL_5;
    }
  }
  if (*(_QWORD*)(a2 + 64) == 0) {
    return false;
  }
  v20 = SpotAttachmentExplore_151a420();
  if (*(_WORD*)(v20 + 32) == 0) {
    return false;
  }
  v21 = *(unsigned __int8**)(v20 + 40);
  v22 = *(unsigned __int16*)(v20 + 32) - 1LL;
  v23 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
  do {
    v24 = *v21++;
    result = v24 == v23;
  } while (v24 != v23 && v22-- != 0);
  return result;
}

__int64 SpotAttachmentExplore_151a420()
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

  v0 = game_HashString(&GameData_1ab7f34);
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

__int64 SpotAttachmentExplore_Unknown30(__int64 a1)
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
  v2 = GameRoutine_151a420();
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

__int64 SpotAttachmentExplore_Unknown40(_QWORD* a1)
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
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int* v17;
  __int64 v18;
  int* v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 result;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  bool v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD v87[2];

  v2 = game_HashString(&GameData_1ac136e);
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
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
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_136;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      v10 = 0;
      if (v8 == nullptr) {
        goto LABEL_26;
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
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }

LABEL_136:
  v10 = v8[3];

LABEL_26:
  v85 = 0;
  v86 = 0;
  v84 = 0;
  v12 = *(_QWORD**)(*(_QWORD*)GameData_212d740[0] + 8LL);
  v14 = v12[3];
  v13 = v12[4];
  v15 = v12[1];
  v16 = (int*)(v12 + 6);
  v17 = (int*)v12 + 13;
  if (v13 == v14) {
    v18 = *v12;
  }
  else {
    v15 = v12[4];
    v18 = v12[3];
  }
  if (v13 == v14) {
    v19 = v16;
  }
  else {
    v19 = v17;
  }
  v20 = *v19;
  if (0xAAAAAAAAAAAAAAABLL * ((v15 - v18) >> 3) <= v20) {
    v26 = 0;
    v25 = 0;
  }
  else {
    v21 = (unsigned __int8*)(v18 + 24LL * (int)v20);
    v22 = *v21;
    if ((v22 & 1) != 0) {
      v23 = *((unsigned __int8**)v21 + 2);
    }
    else {
      v23 = v21 + 1;
    }
    if ((v22 & 1) != 0) {
      v24 = *((_QWORD*)v21 + 1);
    }
    else {
      v24 = v22 >> 1;
    }
    GameRoutine_8924a0(&v84, v23, v24, 47);
    v26 = v84;
    v25 = v85;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v25 - v26) >> 3) < 4) {
    v28 = 0;
  }
  else {
    if ((*(_BYTE*)(v26 + 72) & 1) != 0) {
      v27 = *(_QWORD*)(v26 + 88);
    }
    else {
      v27 = v26 + 73;
    }
    v28 = atoi(v27);
    if ((*(_BYTE*)(v26 + 48) & 1) != 0) {
      v29 = *(_QWORD*)(v26 + 64);
    }
    else {
      v29 = v26 + 49;
    }
    v30 = game_HashString(v29);
    if (v30 != 0) {
      v31 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v31 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
        v33 = v31 - 1;
        if ((v31 & (v31 - 1)) != 0) {
          v34 = v30;
          if (v30 >= v31) {
            v34 = v30 % v31;
          }
        }
        else {
          v34 = v33 & v30;
        }
        v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v34);
        if (v35 != nullptr) {
          v36 = (_QWORD*)*v35;
          if (v36 != nullptr) {
            if ((v31 & v33) == 0) {
              while (1) {
                v38 = v36[1];
                if (v38 == v30) {
                  if (v36[2] == v30) {
                    goto LABEL_137;
                  }
                }
                else if ((v38 & v33) != v34) {
                  goto LABEL_73;
                }
                v36 = (_QWORD*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            do {
              v37 = v36[1];
              if (v37 == v30) {
                if (v36[2] == v30) {
                LABEL_137:
                  v10 = v36[3];
                  goto LABEL_74;
                }
              }
              else {
                if (v37 >= v31) {
                  v37 %= v31;
                }
                if (v37 != v34) {
                  break;
                }
              }
              v36 = (_QWORD*)*v36;
            } while (v36 != nullptr);
          }
        }
      }
    }
  LABEL_73:
    v10 = 0;
  }

LABEL_74:
  v39 = -1;
  do {
    v87[1] = &GameData_1ab1630;
    result = game_HashString(&GameData_1ab1630);
    v43 = game_GameModeData_instance_;
    v87[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v87);
      if (result != 0) {
        v43 = *(_DWORD*)(result + 32);
      }
      else {
        v43 = 0;
      }
    }
    if (++v39 >= v43) {
      break;
    }
    v44 = (*(__int64 (**)(_QWORD*))(*a1 + 248LL))(a1);
    if ((int)v44 < v28 ||
        ((v45 = a1[4], v46 = (unsigned __int8)GameRoutine_13261c0(v45),
          v44 = *(_QWORD*)(v45 + 144), v46 == 5)
             ? (v47 = v44 == 0)
             : (v47 = true),
         v47)) {
      v49 = (_QWORD*)a1[7];
      v48 = a1[8];
      if ((unsigned __int64)v49 < v48) {
        *v49 = v10;
        v40 = (__int64)(v49 + 1);
      }
      else {
        v50 = a1[6];
        v51 = (char*)v49 - v50;
        v52 = ((__int64)v49 - v50) >> 3;
        v53 = v52 + 1;
        if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
          goto LABEL_138;
        }
        v54 = v48 - v50;
        if (v54 >> 2 > v53) {
          v53 = v54 >> 2;
        }
        if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
          v55 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v55 = v53;
        }
        if (v55 != 0) {
          if (v55 >> 61 != 0) {
            goto LABEL_139;
          }
          v56 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
        }
        else {
          v56 = 0;
        }
        v62 = v56 + 8 * v55;
        v63 = (char*)v49 - v50;
        v64 = (__int64)&v51[v56 + -8 * v52];
        *(_QWORD*)&v51[v56] = v10;
        v40 = (__int64)&v51[v56 + 8];
        memcpy(v64, v50, v63);
        a1[6] = v64;
        a1[7] = v40;
        a1[8] = v62;
        if (v50 != 0) {
          v65 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v65 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v50);
        }
      }
    }
    else {
      v57 = v28;
      v58 = v10;
      v44 = GameRoutine_135c2e0();
      v59 = *(_QWORD*)(v44 + 48);
      v61 = (_QWORD*)a1[7];
      v60 = a1[8];
      if ((unsigned __int64)v61 >= v60) {
        v66 = a1[6];
        v67 = (char*)v61 - v66;
        v68 = ((__int64)v61 - v66) >> 3;
        v69 = v68 + 1;
        if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
        LABEL_138:
          GameRoutine_6e5c60(v44);
        }
        v70 = v60 - v66;
        if (v70 >> 2 > v69) {
          v69 = v70 >> 2;
        }
        if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v71 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v71 = v69;
        }
        if (v71 != 0) {
          if (v71 >> 61 != 0) {
          LABEL_139:
            GameRoutine_60a210(v44);
          }
          v72 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v71, 16, 0);
        }
        else {
          v72 = 0;
        }
        v73 = v72 + 8 * v71;
        v74 = (char*)v61 - v66;
        v75 = (__int64)&v67[v72 + -8 * v68];
        *(_QWORD*)&v67[v72] = v59;
        v40 = (__int64)&v67[v72 + 8];
        memcpy(v75, v66, v74);
        a1[6] = v75;
        a1[7] = v40;
        a1[8] = v73;
        if (v66 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v66);
        }
        v10 = v58;
        v28 = v57;
      }
      else {
        *v61 = v59;
        v40 = (__int64)(v61 + 1);
        v10 = v58;
        v28 = v57;
      }
    }
    v41 = *a1;
    a1[7] = v40;
    result = (*(__int64 (**)(_QWORD*))(v41 + 256))(a1);
  } while ((_DWORD)result != 0);
  v77 = v84;
  if (v84 != 0) {
    v78 = v85;
    if (v84 == v85) {
      goto LABEL_132;
    }
    v79 = v85;
    do {
      v80 = *(_BYTE*)(v79 - 24);
      v79 -= 24;
      if ((v80 & 1) != 0) {
        v81 = *(_QWORD*)(v78 - 8);
        if (v81 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v82 = 128;
          }
          else {
            v82 = 56;
          }
          result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v82,
                                                 v81);
        }
      }
      v78 = v79;
    } while (v79 != v77);
    v85 = v77;
    v77 = v84;
    if (v84 != 0) {
    LABEL_132:
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v77);
    }
  }
  return result;
}

__int64 SpotAttachmentExplore_DeletingDestructor(_QWORD* a1)
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
