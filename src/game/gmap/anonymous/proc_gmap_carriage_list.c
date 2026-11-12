#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_16dd280(void);
extern __int64 (*GameData_20811e0[])();
extern __int64 GameData_225e7a0;
_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_GmapSpotCarriageMenuItem_vtable[])();
extern __int64 GameData_212d750;
extern __int64 GameData_21c96f8;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_GameModeData_instance_;
__int64 ProcGmapCarriageList_Unknown100(__int64 a1);
_QWORD* GmapSpotList_167b0c0(__int64, __int64, char);
__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8, __int64);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_168c0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_1678f00(__int64, __int64);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2080ec0[])();
extern __int64 (*game_gmap_anonymous_ProcGmapCarriageList_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64* GameData_212c790;
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_12680d0(long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcGmapCarriageList_168b1e0(__int64 a1);
__int64* ProcGmapCarriageList_168c5c0(__int64* result, __int64* a2, __int64* a3,
                                      __int64 a4, __int64 a5, __int64* a6,
                                      __int64 a7);
__int64 BasicMenu_16dd280(_QWORD*);
void GameHr_167f810(__int64, int, char**, __int64, int, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
void game_gameui_159b580(__int64, _BYTE*, __int64, _DWORD*);
__int64 game_gmap_anonymous_ProcGmapCarriageList_CreateMap_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4);

__int64 ProcGmapCarriageList_168b1e0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
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
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  __int64 result;
  __int64 v28;
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  long double v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64* v53;
  char* v54;
  char* v55;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1232, 16, 0);
  memset(v3, 0, 1232, v4, v5, v6);
  GmapSpotList_167b0c0((__int64)v3, 0, 1);
  v3[150] = 0;
  v3[151] = 0;
  v3[152] = 0;
  *v3 = game_gmap_anonymous_ProcGmapCarriageList_vtable;
  v3[22] = game_menu_MenuInput_InputUnknown00_ptr;
  v3[132] = GameData_2080ec0;
  ProcInst_657850(v3, GameData_212c730, "ProcGmapCarriageList", 1, a1);
  v7 = *(_QWORD*)(*GameData_212c790 + 8);
  v8 = *(__int64**)(v7 + 8);
  v9 = *(__int64**)(v7 + 16);
  v10 = *(_DWORD*)(v7 + 56);
  if ((v10 & 0x80000000) == 0) {
    while (v8 != v9) {
      v12 = *v8++;
      v11 = v12;
      if (*(_DWORD*)(v12 + 84) == v10) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  if (v8 == v9) {
    goto LABEL_7;
  }
  while (1) {
    v11 = *v8;
    if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(v11 + 552) == 0) {
      break;
    }
    if (++v8 == v9) {
      goto LABEL_7;
    }
  }
LABEL_8:
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
  GmapUIDef_1654700((void*)((__int64*)&v54), *(_QWORD*)v11);
  v19 = (__int64)v54;
  v20 = v55;
  v21 = (v55 - v54) >> 4;
  if (v21 < 1) {
    v25 = 0;
  LABEL_21:
    result = GameRoutine_168c0a0(v19, v20, v21, 0, v25);
  }
  else {
    v22 = (v55 - v54) >> 4;
    v23 = GameData_212c060;
    while (1) {
      v24 = GameRoutine_1a09d20(16 * v22, v23);
      if (v24 != 0) {
        break;
      }
      v25 = v22 >> 1;
      v26 = v22 > 1;
      v22 >>= 1;
      if (!v26) {
        goto LABEL_21;
      }
    }
    GameRoutine_168c0a0(v19, v20, v21, v24, v22);
    v28 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v2 + v28);
  }
  v29 = v54;
  v30 = v55;
  v3[151] = v3[150];
  if (v29 != v30) {
    v52 = v30;
    v53 = v3 + 150;
    do {
      result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(*(_QWORD*)v29 + 40LL));
      if (*((_DWORD*)v29 + 2) != 5) {
        v32 = result;
        v33 = fw_memory_HeapManager_Allocate(*v2, 304, 16, 0);
        v34 = *(_QWORD*)v29;
        v35 = *((_DWORD*)v29 + 2);
        v36 = v33;
        game_1678f00(v33, v32);
        *(_QWORD*)v36 = game_gmap_anonymous_GmapSpotCarriageMenuItem_vtable;
        *(_QWORD*)(v36 + 288) = v34;
        *(_DWORD*)(v36 + 296) = v35;
        result = BasicMenuCursor_16e0c00(v3, v36);
        v38 = (__int64*)v3[151];
        v39 = v3[152];
        if ((unsigned __int64)v38 < v39) {
          *v38 = v32;
          v31 = (__int64)(v38 + 1);
        }
        else {
          v40 = *v53;
          v41 = (__int64)v38 - *v53;
          v42 = (v41 >> 3) + 1;
          if (v42 >> 61 != 0) {
            GameRoutine_12680d0(v37);
          }
          v43 = v39 - v40;
          v44 = v2;
          if (v43 >> 2 > v42) {
            v42 = v43 >> 2;
          }
          if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
            v45 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v45 = v42;
          }
          if (v45 != 0) {
            if (v45 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v46 = fw_memory_HeapManager_Allocate(*v44, 8 * v45, 16, 0);
          }
          else {
            v46 = 0;
          }
          v47 = v46 + 8 * v45;
          v48 = v46 + v41 - 8 * (v41 >> 3);
          *(_QWORD*)(v46 + v41) = v32;
          v31 = v46 + v41 + 8;
          result = memcpy(v48, v40, v41);
          v3[150] = v48;
          v3[151] = v31;
          v3[152] = v47;
          if (v40 != 0) {
            v2 = v44;
            v49 = 128;
            if (*(_QWORD*)(*v44 + 200LL) == 0) {
              v49 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v44 + v49);
          }
          else {
            v2 = v44;
          }
          v30 = v52;
        }
        v3[151] = v31;
      }
      v29 += 16;
    } while (v29 != v30);
    v29 = v54;
  }
  if (v29 != nullptr) {
    v50 = *v2;
    v55 = v29;
    v51 = 128;
    if (*(_QWORD*)(v50 + 200) == 0) {
      v51 = 56;
    }
    return nn_mem_StandardAllocator_Free(v50 + v51);
  }
  return result;
}

__int64 ProcGmapCarriageList_Unknown100(__int64 a1)
{
  __int64 v1;
  int v3;
  int v4;
  __int64 v5;
  int v6;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0 ||
      *(__int64 (***)())v1 !=
          game_gmap_anonymous_GmapSpotCarriageMenuItem_vtable ||
      *(_DWORD*)(v1 + 296) != 0) {
    return 1;
  }
  v3 =
      GameRoutine_9db9e0(23, *(unsigned __int16*)(*(_QWORD*)(v1 + 288) + 64LL));
  if (game_GameModeData_instance_ != 0) {
    v4 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v3) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v3) >> 31);
    if (v4 >= 9999999) {
      v4 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
  }
  *(_QWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 8LL) = *(_QWORD*)(v1 + 288);
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 7;
  }
  else {
    v5 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 7;
      v6 = 5;
    }
    else {
      v5 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 7;
      v6 = 12;
    }
    *(_DWORD*)(v5 + 152) = v6;
  }
  return 4;
}

_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_QWORD*)(a1 + 152);
  v3 = BasicMenu_16dd280((_QWORD*)a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9_.v9[0] = GameData_20811e0;
  v9_.v9[1] = a1;
  v9_.v10 = v9_.v9;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    result = v9_.v9;
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
  GameHr_167f810(v8, 6, (char**)(a1 + 1200), 0, v7, (__int64)v9_.v9),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v5 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  if (v9_.v10 != nullptr) {
    v5 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  return result;
}

__int64 game_gmap_anonymous_ProcGmapCarriageList_CreateMap_closure_Invoke(
    __int64 a1, _BYTE* a2, __int64 a3, _DWORD* a4)
{
  __int64 result;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL), "L_Img");
  game_gameui_159b580((__int64)&v8_.v8, a2, a3, a4);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak(v8_.v9);
  }
  return result;
}

__int64* ProcGmapCarriageList_168c5c0(__int64* result, __int64* a2, __int64* a3,
                                      __int64 a4, __int64 a5, __int64* a6,
                                      __int64 a7)
{
  __int64 v9;
  __int64 i;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  int v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  int v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64* j;
  __int64 v31;
  int v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  _BOOL4 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64* v50;
  int v51;
  int v52;
  bool v53;
  __int64* v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = -a4;
      for (i = 0;; i += 2) {
        v11 = &result[i];
        if (*((_DWORD*)a2 + 2) < SLODWORD(result[i + 1])) {
          break;
        }
        if (__CFADD__(v9++, 1)) {
          return result;
        }
      }
      v13 = -v9;
      if (-v9 >= a5) {
        if (v9 == -1) {
          v61 = &result[i];
          v62 = result[i];
          *v61 = *a2;
          *a2 = v62;
          LODWORD(v62) = *((_DWORD*)v61 + 2);
          *((_DWORD*)v61 + 2) = *((_DWORD*)a2 + 2);
          *((_DWORD*)a2 + 2) = v62;
          return result;
        }
        v22 = v13 / 2;
        v16 = &result[2 * (v13 / 2) + i];
        if (a3 == a2) {
          v15 = a3;
        }
        else {
          v23 = ((char*)a3 - (char*)a2) >> 4;
          v15 = a2;
          do {
            v24 = v23 >> 1;
            v25 = &v15[2 * (v23 >> 1)];
            v26 = *((_DWORD*)v25 + 2);
            v27 = v25 + 2;
            v23 += ~(v23 >> 1);
            if (v26 < *((_DWORD*)v16 + 2)) {
              v15 = v27;
            }
            else {
              v23 = v24;
            }
          } while (v23 != 0);
        }
        v14 = ((char*)v15 - (char*)a2) >> 4;
      }
      else {
        v14 = a5 / 2;
        v15 = &a2[2 * (a5 / 2)];
        if (v11 == a2) {
          v16 = a2;
        }
        else {
          v16 = &result[i];
          v17 = ((char*)a2 - (char*)result - i * 8) >> 4;
          do {
            v18 = v17 >> 1;
            v19 = &v16[2 * (v17 >> 1)];
            v20 = *((_DWORD*)v19 + 2);
            v21 = v19 + 2;
            v17 += ~(v17 >> 1);
            if (*((_DWORD*)v15 + 2) < v20) {
              v17 = v18;
            }
            else {
              v16 = v21;
            }
          } while (v17 != 0);
        }
        v22 = ((char*)v16 - (char*)result - i * 8) >> 4;
      }
      v28 = v15;
      if (v16 != a2) {
        v28 = v16;
        if (a2 != v15) {
          v29 = *v16;
          v28 = v16 + 2;
          *v16 = *a2;
          *a2 = v29;
          LODWORD(v29) = *((_DWORD*)v16 + 2);
          *((_DWORD*)v16 + 2) = *((_DWORD*)a2 + 2);
          *((_DWORD*)a2 + 2) = v29;
          for (j = a2 + 2; j != v15; j += 2) {
            v31 = *v28;
            if (v28 == a2) {
              a2 = j;
            }
            *v28 = *j;
            *j = v31;
            v32 = *((_DWORD*)v28 + 2);
            *((_DWORD*)v28 + 2) = *((_DWORD*)j + 2);
            *((_DWORD*)j + 2) = v32;
            v28 += 2;
          }
          if (v28 != a2) {
            v33 = v28;
            v34 = a2;
            while (1) {
              v35 = *v33;
              *v33 = *v34;
              *v34 = v35;
              LODWORD(v35) = *((_DWORD*)v33 + 2);
              *((_DWORD*)v33 + 2) = *((_DWORD*)v34 + 2);
              v33 += 2;
              *((_DWORD*)v34 + 2) = v35;
              v34 += 2;
              v36 = v33 == a2;
              if (v34 == v15) {
                if (v33 == a2) {
                  break;
                }
                v34 = a2 + 2;
                while (1) {
                  v37 = *v33;
                  *v33 = *a2;
                  *a2 = v37;
                  LODWORD(v37) = *((_DWORD*)v33 + 2);
                  *((_DWORD*)v33 + 2) = *((_DWORD*)a2 + 2);
                  v33 += 2;
                  *((_DWORD*)a2 + 2) = v37;
                  v36 = v33 == a2;
                  if (v34 != v15) {
                    break;
                  }
                  if (v33 == a2) {
                    goto LABEL_45;
                  }
                }
              }
              if (v36) {
                a2 = v34;
              }
            }
          }
        }
      }
    LABEL_45:
      v38 = a5 - v14;
      if (v22 + v14 >= a5 - (v22 + v14) - v9) {
        ProcGmapCarriageList_168c5c0(v28, v15, a3, -(v22 + v9), a5 - v14, a6,
                                     a7);
        v15 = v16;
        v38 = v14;
        a4 = v22;
        a3 = v28;
      }
      else {
        v39 = v11;
        v40 = v16;
        v41 = a3;
        v42 = -(v22 + v9);
        ProcGmapCarriageList_168c5c0(v39, v40, v28, v22, v14, a6, a7);
        a4 = v42;
        a3 = v41;
        v11 = v28;
      }
      a5 = v38;
      result = v11;
      a2 = v15;
      if (v38 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v55 = a6;
        v56 = result;
        do {
          v57 = *v56;
          v58 = v56[1];
          v56 += 2;
          *v55 = v57;
          v55[1] = v58;
          v55 += 2;
        } while (v56 != a2);
        v59 = v55 - 2;
        while (a2 != a3) {
          if (*((_DWORD*)a2 + 2) >= *((_DWORD*)a6 + 2)) {
            v60 = a6;
            a6 += 2;
          }
          else {
            v60 = a2;
            a2 += 2;
          }
          *result = *v60;
          *((_DWORD*)result + 2) = *((_DWORD*)v60 + 2);
          result += 2;
          if (v55 == a6) {
            return result;
          }
        }
        v64 = 0;
        do {
          v65 = &a6[v64];
          v66 = &result[v64];
          v64 += 2;
          *v66 = *v65;
          *((_DWORD*)v66 + 2) = *((_DWORD*)v65 + 2);
        } while (v59 != v65);
      }
    }
    else if (a2 != a3) {
      v43 = 0;
      do {
        v44 = &a2[v43];
        v45 = &a6[v43];
        v43 += 2;
        v47 = *v44;
        v46 = v44[1];
        *v45 = v47;
        v45[1] = v46;
      } while (&a2[v43] != a3);
      v48 = a3 - 1;
      v49 = &a6[v43];
      while (a2 != result) {
        v50 = a2 - 1;
        v51 = *((_DWORD*)a2 - 2);
        v52 = *((_DWORD*)v49 - 2);
        v53 = v52 < v51;
        if (v52 < v51) {
          v54 = a2 - 2;
        }
        else {
          v54 = v49 - 2;
        }
        if (v53) {
          a2 -= 2;
        }
        else {
          v50 = v49 - 1;
        }
        if (!v53) {
          v49 -= 2;
        }
        *(v48 - 1) = *v54;
        *(_DWORD*)v48 = *(_DWORD*)v50;
        v48 -= 2;
        if (v49 == a6) {
          return result;
        }
      }
      for (; v49 != a6; v48 -= 2) {
        v63 = *(v49 - 2);
        v49 -= 2;
        *(v48 - 1) = v63;
        *(_DWORD*)v48 = *((_DWORD*)v49 + 2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
