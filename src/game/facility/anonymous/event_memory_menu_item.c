#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1859ec0(_QWORD, _QWORD);
__int64 GameRoutine_185a4f0(_QWORD, _QWORD, _QWORD);
__int64 TimelineFile_890160(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64* GameRoutine_19e2a20(unsigned __int8);
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_21f8620;
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_2123c30[])();
extern __int64 (*game_facility_anonymous_EventMemoryMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_19e5e30(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64*
game_facility_anonymous_EventMemoryMenuItem_EventMemoryMenuItem(__int64 a1);
__int64*

game_facility_anonymous_EventMemoryMenuItem_EventMemoryMenuItem(__int64 a1)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  char* v18;
  int** v19;
  int v20;
  int* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  int v26;
  void* v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  unsigned __int8* i;
  __int64 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  int v56;
  void* v57;
  unsigned int v58;
  __int64 v59;
  unsigned int v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  char v65;
  unsigned __int64 v66;
  char v67;
  _QWORD* v68;
  int** v69;
  __int64 v70;
  _QWORD v71[4];
  _QWORD* v72;
  int* v73;

  v1 = *(_QWORD*)(a1 + 1088);
  v2 = *(_DWORD*)(a1 + 1076);
  v3 = (_QWORD*)a1;
  v4 = v2;
  v5 = (*(_QWORD*)(a1 + 1096) - v1) >> 2;
  if (v5 > v2) {
    v4 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v6 = *(_QWORD*)(a1 + 1328);
  v7 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  if (v7 >= v4) {
    v8 = v4;
  }
  else {
    v8 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v4 >= 0) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  if (v5 > v2) {
    v2 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v10 = *(unsigned __int8*)(v6 + v9);
  if (v7 >= v2) {
    v11 = v2;
  }
  else {
    v11 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v2 >= 0) {
    v12 = v11;
  }
  else {
    v12 = 0;
  }
  result = GameRoutine_19e2a20(*(_BYTE*)(v6 + v12));
  v14 = 24;
  if (*((_BYTE*)v3 + 1064) == 0) {
    v14 = 0;
  }
  v63 = v14;
  v64 = result;
  v15 = v3[169];
  if (v3[170] != v15) {
    v16 = 0;
    v68 = v3;
    while (1) {
      v70 = v16;
      v17 = (unsigned __int8*)(*(__int64*)((char*)v64 + v63) +
                               24LL * *(int*)(v15 + 4 * v16));
      v18 = (char*)&GameData_21f8620 + 24 * *v17;
      v19 = *(int***)v18;
      v69 = *((int***)v18 + 1);
      if (*(int***)v18 != v69) {
        break;
      }
    LABEL_21:
      v15 = v3[169];
      v16 = v70 + 1;
      if (v70 + 1 >= (unsigned __int64)((v3[170] - v15) >> 2)) {
        return result;
      }
    }
    v20 = *((_DWORD*)v17 + 1);
    if (v20 == 3) {
      while (1) {
        v33 = *v19;
        v34 = **v19;
        if (v34 == 7) {
          v37 = 1;
        }
        else if (v34 == 6) {
          for (i = (unsigned __int8*)v3[191]; i != (unsigned __int8*)v3[192];
               i += 16) {
            if (*i == v10 && *((_DWORD*)i + 1) == 3 && *((_DWORD*)i + 2) == 5) {
              LOBYTE(v36) = i[12];
              goto LABEL_79;
            }
          }
          v36 = GameRoutine_185a4f0(v10, 3, 5);
          v38 = v3[192];
          v39 = v3[193];
          v40 = v36 & 1;
          if (v38 >= v39) {
            v42 = v3[191];
            v43 = v38 - v42;
            v44 = (__int64)(v38 - v42) >> 4;
            v45 = v44 + 1;
            if ((unsigned __int64)(v44 + 1) >> 60 != 0) {
              GameRoutine_19e5e30();
            }
            v46 = v39 - v42;
            v67 = v36;
            if (v46 >> 3 > v45) {
              v45 = v46 >> 3;
            }
            if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF0LL) {
              v47 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v47 = v45;
            }
            if (v47 != 0) {
              v65 = v36 & 1;
              if (v47 >> 60 != 0) {
                GameRoutine_60a210(v36);
              }
              v48 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v47, 16, 0);
              v40 = v65;
            }
            else {
              v48 = 0;
            }
            v49 = v48 + v43;
            v66 = v48 + 16 * v47;
            v50 = v48 + v43 - 16 * v44;
            *(_BYTE*)v49 = v10;
            *(_BYTE*)(v49 + 12) = v40;
            v41 = v48 + v43 + 16;
            *(_QWORD*)(v49 + 4) = 0x500000003LL;
            memcpy(v50, v42, v43);
            v68[191] = v50;
            v3 = v68;
            v68[192] = v41;
            v68[193] = v66;
            if (v42 != 0) {
              v51 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v51 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
            }
            LOBYTE(v36) = v67;
          }
          else {
            v41 = v38 + 16;
            *(_BYTE*)v38 = v10;
            *(_BYTE*)(v38 + 12) = v40;
            *(_QWORD*)(v38 + 4) = 0x500000003LL;
          }
          v3[192] = v41;
        LABEL_79:
          if ((v36 & 1) != 0) {
            v37 = 0;
          }
          else {
            v37 = 2;
          }
        }
        else {
          v37 = 0;
        }
        v52 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
        *(_WORD*)(v52 + 16) = 0;
        *(_DWORD*)(v52 + 40) = 0;
        v53 = v52;
        *(_QWORD*)(v52 + 48) = 0;
        *(_QWORD*)(v52 + 56) = 0;
        *(_QWORD*)(v52 + 64) = 0;
        *(_QWORD*)(v52 + 72) = 0;
        *(_QWORD*)(v52 + 88) = v33;
        *(_BYTE*)(v52 + 96) = v10;
        *(_BYTE*)(v52 + 108) = 0;
        *(_QWORD*)(v52 + 112) = 0;
        *(_QWORD*)(v52 + 120) = 0;
        *(_QWORD*)(v52 + 128) = 0;
        *(_DWORD*)(v52 + 136) = 0;
        *(_WORD*)(v52 + 80) = 257;
        v73 = v33;
        *(_BYTE*)(v52 + 82) = 1;
        *(_QWORD*)v52 = game_facility_anonymous_EventMemoryMenuItem_vtable;
        *(_QWORD*)(v52 + 8) = 0;
        *(_DWORD*)(v52 + 84) = v70;
        *(_DWORD*)(v52 + 100) = 3;
        *(_DWORD*)(v52 + 104) = v37;
        v55 = *((_QWORD**)v33 + 12);
        v54 = *((_QWORD**)v33 + 13);
        if (v55 == v54) {
          *(_BYTE*)(v52 + 108) = 0;
        }
        else {
          v56 = 0;
          do {
            v58 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v59 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), *v55 + 16LL);
              if (v59 != 0) {
                v60 = *(_DWORD*)(v59 + 32);
                v58 = v60 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v60 / 0x21B7900)) >>
                            32);
                if (v58 != 0) {
                  v61 = (v60 / 0x86DE40uLL) & 3;
                  if ((int)v61 > 1) {
                    if ((_DWORD)v61 == 3) {
                      v57 = &GameData_1aabf6c;
                    }
                    else {
                      v57 = &GameData_1ad653b;
                    }
                  }
                  else {
                    v57 = &GameData_1abf89f;
                    if ((_DWORD)v61 != 0) {
                      v57 = *(&GameData_1f9caf8 + v58);
                    }
                  }
                  TimelineFile_890160(v57);
                  v58 = 1;
                }
              }
              else {
                v58 = 0;
              }
            }
            v56 += v58;
            ++v55;
          } while (v55 != v54);
          *(_BYTE*)(v53 + 108) = v56 != 0;
          if (v56 == 0) {
            goto LABEL_49;
          }
          v71[0] = GameData_2123c30;
          v71[1] = v53;
          v72 = v71;
          GameRoutine_1859ec0(&v73, v71);
          if (v72 == v71) {
            v62 = 32;
            goto LABEL_101;
          }
          if (v72 != nullptr) {
            v62 = 40;
          LABEL_101:
            (*(void (**)(void))(*v72 + v62))();
          }
        }
      LABEL_49:
        result = (__int64*)BasicMenuCursor_16e0c00(v3, v53);
        if (++v19 == v69) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v21 = *v19;
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      v23 = v22;
      *(_WORD*)(v22 + 16) = 0;
      *(_DWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 88) = v21;
      *(_BYTE*)(v22 + 96) = v10;
      *(_DWORD*)(v22 + 100) = v20;
      *(_DWORD*)(v22 + 104) = 0;
      *(_BYTE*)(v22 + 108) = 0;
      *(_QWORD*)(v22 + 112) = 0;
      *(_QWORD*)(v22 + 120) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_WORD*)(v22 + 80) = 257;
      *(_DWORD*)(v22 + 136) = 0;
      v73 = v21;
      *(_BYTE*)(v22 + 82) = 1;
      *(_QWORD*)v22 = game_facility_anonymous_EventMemoryMenuItem_vtable;
      *(_QWORD*)(v22 + 8) = 0;
      *(_DWORD*)(v22 + 84) = v70;
      if (v21 == nullptr || (v24 = *((_QWORD**)v21 + 12),
                             v25 = *((_QWORD**)v21 + 13), v24 == v25)) {
        *(_BYTE*)(v22 + 108) = 0;
      }
      else {
        v26 = 0;
        do {
          v28 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v29 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), *v24 + 16LL);
            if (v29 != 0) {
              v30 = *(_DWORD*)(v29 + 32);
              v28 = v30 / 0x21B7900 -
                    11 * ((390451573 * (unsigned __int64)(v30 / 0x21B7900)) >>
                          32);
              if (v28 != 0) {
                v31 = (v30 / 0x86DE40uLL) & 3;
                if ((int)v31 > 1) {
                  if ((_DWORD)v31 == 3) {
                    v27 = &GameData_1aabf6c;
                  }
                  else {
                    v27 = &GameData_1ad653b;
                  }
                }
                else {
                  v27 = &GameData_1abf89f;
                  if ((_DWORD)v31 != 0) {
                    v27 = *(&GameData_1f9caf8 + v28);
                  }
                }
                TimelineFile_890160(v27);
                v28 = 1;
              }
            }
            else {
              v28 = 0;
            }
          }
          v26 += v28;
          ++v24;
        } while (v24 != v25);
        *(_BYTE*)(v23 + 108) = v26 != 0;
        if (v26 == 0) {
          goto LABEL_26;
        }
        v71[0] = GameData_2123c30;
        v71[1] = v23;
        v72 = v71;
        GameRoutine_1859ec0(&v73, v71);
        if (v72 == v71) {
          v32 = 32;
          goto LABEL_47;
        }
        if (v72 != nullptr) {
          v32 = 40;
        LABEL_47:
          (*(void (**)(void))(*v72 + v32))();
        }
      }
    LABEL_26:
      v3 = v68;
      result = (__int64*)BasicMenuCursor_16e0c00(v68, v23);
      if (++v19 == v69) {
        goto LABEL_21;
      }
    }
  }
  return result;
}

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    return *(const char**)(*(_QWORD*)(a1[11] + 8LL) + 72LL);
  }
  else {
    return "MID_Sys_Unknown";
  }
}

#pragma GCC visibility pop
