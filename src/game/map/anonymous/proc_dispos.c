#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94bd8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcDispos_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcDispos_Destructor(__int64 a1);
_QWORD* Image_72b6c0(_QWORD*);
__int64 DisposFile_6bc220(_QWORD);
__int64 GameRoutine_1919fb0(_QWORD, _QWORD);
__int64 GameRoutine_73e2a0(__int64 result, _QWORD*, unsigned __int16, int, int,
                           __int64);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 GameRoutine_9903e0(_QWORD);
__int64 Image_72a260(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 Image_72b4a0(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 UnitActor_8194d0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_map_anonymous_TrickEntity_TryBroken(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f94aa8[])();
extern __int64 (*GameData_1fb2478[])();
extern __int64 (*game_map_IRoute_vtable[])();
extern __int64 (*game_map_TRoute_vtable[])();
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd100;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212cfb8[11];
void Cursor_730b20(__int64, int, int);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_742ad0(void);
void game_map_anonymous_ProcDispos_Calculate(__int64 a1);
bool ProcDispos_741e40(__int64 a1);
__int64 ProcDispos_741ee0(__int64 result);
bool ProcDispos_742000();
__int64 ProcDispos_7424c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6);
__int64 ProcDispos_742510();
__int64 game_map_anonymous_ProcDispos_Calculate_closure_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 UnitActor_81aee0(_QWORD, float);
__int64 UnitActor_81ba20(_QWORD);
__int64 game_map_768a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_map_769920(_QWORD, _QWORD, _QWORD, _QWORD);
float Unit_6c7fa0(__int64, __int64);
void GameRoutine_6c7cb0(__int64, __int64, __int64);
__int64 ProcDispos_7421a0(__int64 result);

void game_map_anonymous_ProcDispos_Calculate(__int64 a1)
{
  unsigned __int16 v1;
  __int64 v3;
  int v4;
  bool v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  char* v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 j;
  int v24;
  int v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  int v29;
  char* v30;
  __int64 i;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  char* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  char* v41;
  int v42;
  int v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  char* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  float v54;
  __int64 v55;
  _QWORD v56[4];
  _QWORD* v57;
  int v58;
  char* v59;
  char* v60;
  __int64 v61;

  v1 = *(_WORD*)(a1 + 208);
  *(_QWORD*)(a1 + 224) = *(_QWORD*)(a1 + 216);
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 13) == 2) {
    v1 |= 2u;
  }
  v3 = *(_QWORD*)(a1 + 176);
  v4 = *(char*)(a1 + 240);
  v5 = (*(_BYTE*)(a1 + 160) & 1) == 0;
  v6 = *(char*)(a1 + 241);
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v57 = v56;
  if (v5) {
    v7 = a1 + 161;
  }
  else {
    v7 = v3;
  }
  v56[0] = GameData_1f94aa8;
  v56[1] = a1;
  v56[2] = &v58;
  v8 = DisposFile_6bc220(v7);
  GameRoutine_73e2a0(*(_QWORD*)v8, *(_QWORD**)(v8 + 8), v1, v4, v6,
                     (__int64)v56);
  if (v57 == v56) {
    v9 = 32;
    goto LABEL_11;
  }
  if (v57 != nullptr) {
    v9 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v57 + v9))((__int64)v57);
  }
  v10 = v59;
  if ((*(_WORD*)(a1 + 208) & 2) == 0) {
    goto LABEL_131;
  }
  v11 = v60 - v59;
  if ((int)((unsigned __int64)(v60 - v59) >> 2) < 1) {
    goto LABEL_131;
  }
  if (v60 != v59) {
    v12 = *v59;
    v13 = v11 >> 2;
    v14 = ((unsigned __int64)v11 >> 2) & 7;
    if (v13 >= 8) {
      v19 = v59 + 16;
      v20 = 0;
      v16 = *v59;
      do {
        v20 -= 8;
        if (v16 >= *(v19 - 16)) {
          v16 = *(v19 - 16);
        }
        if (v16 >= *(v19 - 12)) {
          v16 = *(v19 - 12);
        }
        if (v16 >= *(v19 - 8)) {
          v16 = *(v19 - 8);
        }
        if (v16 >= *(v19 - 4)) {
          v16 = *(v19 - 4);
        }
        if (v16 >= *v19) {
          v16 = *v19;
        }
        if (v16 >= v19[4]) {
          v16 = v19[4];
        }
        if (v16 >= v19[8]) {
          v16 = v19[8];
        }
        v21 = v19[12];
        v19 += 32;
        if (v16 >= v21) {
          v16 = v21;
        }
      } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v20);
      v15 = -v20;
      if (v14 == 0) {
      LABEL_42:
        if (v13 >= 8) {
          v27 = v59 + 16;
          v28 = 0;
          do {
            v28 -= 8;
            if (v12 <= *(v27 - 16)) {
              v12 = *(v27 - 16);
            }
            if (v12 <= *(v27 - 12)) {
              v12 = *(v27 - 12);
            }
            if (v12 <= *(v27 - 8)) {
              v12 = *(v27 - 8);
            }
            if (v12 <= *(v27 - 4)) {
              v12 = *(v27 - 4);
            }
            if (v12 <= *v27) {
              v12 = *v27;
            }
            if (v12 <= v27[4]) {
              v12 = v27[4];
            }
            if (v12 <= v27[8]) {
              v12 = v27[8];
            }
            v29 = v27[12];
            v27 += 32;
            if (v12 <= v29) {
              v12 = v29;
            }
          } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v28);
          v26 = -v28;
          if (v14 == 0) {
          LABEL_68:
            v34 = v59[1];
            if (v13 >= 8) {
              v37 = v59 + 17;
              v38 = 0;
              v36 = v59[1];
              do {
                v38 -= 8;
                if (v36 >= *(v37 - 16)) {
                  v36 = *(v37 - 16);
                }
                if (v36 >= *(v37 - 12)) {
                  v36 = *(v37 - 12);
                }
                if (v36 >= *(v37 - 8)) {
                  v36 = *(v37 - 8);
                }
                if (v36 >= *(v37 - 4)) {
                  v36 = *(v37 - 4);
                }
                if (v36 >= *v37) {
                  v36 = *v37;
                }
                if (v36 >= v37[4]) {
                  v36 = v37[4];
                }
                if (v36 >= v37[8]) {
                  v36 = v37[8];
                }
                v39 = v37[12];
                v37 += 32;
                if (v36 >= v39) {
                  v36 = v39;
                }
              } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v38);
              v35 = -v38;
              if (v14 == 0) {
              LABEL_94:
                if (v13 >= 8) {
                  v45 = v59 + 17;
                  v46 = 0;
                  v47 = -(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL);
                  do {
                    v46 -= 8;
                    if (v34 <= *(v45 - 16)) {
                      v34 = *(v45 - 16);
                    }
                    if (v34 <= *(v45 - 12)) {
                      v34 = *(v45 - 12);
                    }
                    if (v34 <= *(v45 - 8)) {
                      v34 = *(v45 - 8);
                    }
                    if (v34 <= *(v45 - 4)) {
                      v34 = *(v45 - 4);
                    }
                    if (v34 <= *v45) {
                      v34 = *v45;
                    }
                    if (v34 <= v45[4]) {
                      v34 = v45[4];
                    }
                    if (v34 <= v45[8]) {
                      v34 = v45[8];
                    }
                    v48 = v45[12];
                    v45 += 32;
                    if (v34 <= v48) {
                      v34 = v48;
                    }
                  } while (v47 != v46);
                  v44 = -v46;
                  if (v14 == 0) {
                    goto LABEL_120;
                  }
                }
                else {
                  v44 = 0;
                  if (v14 == 0) {
                  LABEL_120:
                    v17 = (v12 + v16) >> 1;
                    v18 = (v34 + v36) >> 1;
                    goto LABEL_121;
                  }
                }
                v49 = &v59[4 * v44 + 1];
                do {
                  v51 = *v49;
                  v49 += 4;
                  v50 = v51;
                  if (v34 <= v51) {
                    v34 = v50;
                  }
                  --v14;
                } while (v14 != 0);
                goto LABEL_120;
              }
            }
            else {
              v35 = 0;
              v36 = v59[1];
              if (v14 == 0) {
                goto LABEL_94;
              }
            }
            v40 = v14;
            v41 = &v59[4 * v35 + 1];
            do {
              v43 = *v41;
              v41 += 4;
              v42 = v43;
              if (v36 >= v43) {
                v36 = v42;
              }
              --v40;
            } while (v40 != 0);
            goto LABEL_94;
          }
        }
        else {
          v26 = 0;
          if (v14 == 0) {
            goto LABEL_68;
          }
        }
        v30 = &v59[4 * v26];
        for (i = v14; i != 0; --i) {
          v33 = *v30;
          v30 += 4;
          v32 = v33;
          if (v12 <= v33) {
            v12 = v32;
          }
        }
        goto LABEL_68;
      }
    }
    else {
      v15 = 0;
      v16 = *v59;
      if (v14 == 0) {
        goto LABEL_42;
      }
    }
    v22 = &v59[4 * v15];
    for (j = v14; j != 0; --j) {
      v25 = *v22;
      v22 += 4;
      v24 = v25;
      if (v16 >= v25) {
        v16 = v24;
      }
    }
    goto LABEL_42;
  }
  v17 = 0;
  v18 = 0;
LABEL_121:
  Cursor_730b20(GameData_21cd130, v17, v18);
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v52 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v53 = 2)
           : (v53 = 3),
       (v53 & v52) != 0)) {
    v54 = *(float*)(a1 + 144);
    *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
    if (v54 < 30.0f) {
      v54 = 30.0f;
    }
    *(float*)(a1 + 144) = v54;
  }
  v10 = v59;
LABEL_131:
  if (v10 != nullptr) {
    v60 = v10;
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55,
                                  v10);
  }
}

bool ProcDispos_741e40(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float (**v5)(__int64);
  float v6;
  float v7;
  float v8;

  if ((*(_WORD*)(a1 + 208) & 2) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(GameData_21cd140 + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    return false;
  }
  v5 = *(float (***)(__int64))(v2 + 240);
  v4 = v2 + 240;
  v6 = (*v5)(v4);
  v7 = *(float*)(v4 + 8);
  v8 = v3 + v6;
  if (v7 < v8) {
    v8 = *(float*)(v4 + 8);
  }
  return v8 != v7;
}

__int64 ProcDispos_741ee0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  long double v4;
  __int16 v5;
  long double v6;
  __int64 v7;
  long double v8;
  long double v9;
  int v10;

  v1 = *(_QWORD*)(result + 216);
  v2 = *(_QWORD*)(result + 224);
  if (v1 != v2) {
    while (1) {
      result = *(_QWORD*)(v1 + 24);
      if (result == 0) {
        goto LABEL_7;
      }
      UnitActor_8194d0(result);
      v7 = *(_QWORD*)(v1 + 24);
      v10 = 0;
      if (*(_BYTE*)(v7 + 176) == 1) {
        break;
      }
      if (*(float*)(v7 + 160) > 0.0) {
        (*(void (**)(__int64))(*(_QWORD*)(v7 + 152) + 16LL))(v7 + 152);
        v3 = *(_QWORD*)(v7 + 152);
        goto LABEL_4;
      }
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(v7 + 152) + 8LL))(v7 + 152, &v10, v7 + 184) &
           1) == 0) {
        goto LABEL_6;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v7 + 152) + 16LL))(v7 + 152);
      LODWORD(v8) = v10;
      (*(void (**)(__int64, long double, long double))(*(_QWORD*)(v7 + 152) +
                                                       24LL))(v7 + 152, v9, v8);
    LABEL_5:
      v5 = *(_WORD*)(v7 + 20);
      *(_QWORD*)(v7 + 160) = 0;
      *(_WORD*)(v7 + 176) = 256;
      *(_WORD*)(v7 + 20) = v5 | 8;
    LABEL_6:
      result = GameRoutine_1919fb0(*(_QWORD*)(v1 + 24), 1);
    LABEL_7:
      v1 += 248;
      if (v1 == v2) {
        return result;
      }
    }
    v3 = *(_QWORD*)(v7 + 152);
    *(_QWORD*)&v4 = 0;
  LABEL_4:
    *(_QWORD*)&v6 = 0;
    (*(void (**)(__int64, long double, long double))(v3 + 24))(v7 + 152, v4,
                                                               v6);
    goto LABEL_5;
  }
  return result;
}

bool ProcDispos_742000()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v12;
  int v13;

  v13 = 15;
  v0 = (_QWORD*)game_UnitPool_GetFirst(&v13);
  if (v0 == nullptr) {
    return *(_DWORD*)(GameData_21cd100 + 16) > 0;
  }
  v1 = (_QWORD*)v0[54];
  if (v1 == nullptr) {
    v2 = v0[55];
    if (v2 == 0 || (v3 = *(unsigned __int8*)(v2 + 16)) > 8) {
    LABEL_5:
      v1 = nullptr;
      goto LABEL_6;
    }
    v12 = 24LL * (unsigned int)v3 + 556024;
    while (1) {
      if (v3 <= 2) {
        v1 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v12);
        if (v1 != nullptr) {
          break;
        }
      }
      ++v3;
      v12 += 24;
      if (v3 == 9) {
        goto LABEL_5;
      }
    }
  }
LABEL_6:
  while (1) {
    v4 = v1;
    if (v0[29] != 0) {
      if (v0[33] == 0) {
        return true;
      }
      v6 = (char*)v0[34];
      v5 = (char*)v0[35];
      if (v0[31] - v0[30] != v5 - v6) {
        return true;
      }
      if (v6 != v5) {
        break;
      }
    }
  LABEL_12:
    if (v4 == nullptr) {
      return *(_DWORD*)(GameData_21cd100 + 16) > 0;
    }
    v1 = (_QWORD*)v4[54];
    v0 = v4;
    if (v1 == nullptr) {
      v8 = v4[55];
      v0 = v4;
      if (v8 != 0) {
        v9 = *(unsigned __int8*)(v8 + 16);
        v1 = nullptr;
        v0 = v4;
        if (v9 <= 8) {
          v10 = 24LL * (unsigned int)v9 + 556024;
          do {
            if (v9 <= 2) {
              v1 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v10);
              if (v1 != nullptr) {
                v0 = v4;
                goto LABEL_6;
              }
            }
            ++v9;
            v10 += 24;
          } while (v9 != 9);
          v1 = nullptr;
          v0 = v4;
        }
      }
    }
  }
  while (1) {
    v7 = *(_QWORD*)v6;
    v6 += 8;
    if ((*(_BYTE*)(v7 + 342) & 1) == 0) {
      return true;
    }
    if (v6 == v5) {
      goto LABEL_12;
    }
  }
}

__int64 ProcDispos_7421a0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  float v15;
  __int128 v16;
  __int128 v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  float v30;
  __int128 v31;
  __int128 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  char v37[4];
  __int64 v38[4];
  __int64 v39;

  v1 = *(__int64**)(result + 216);
  v2 = *(__int64**)(result + 224);
  if (v1 != v2) {
    v3 = result + 185;
    v4 = result;
    do {
      v7 = v1[3];
      if (v7 != 0) {
        if ((*(_WORD*)(v4 + 208) & 0x1F4) != 0) {
          v8 = *((_DWORD*)v1 + 11);
          *(_BYTE*)(v7 + 584) = *((_DWORD*)v1 + 10);
          *(_BYTE*)(v7 + 585) = v8;
          GameRoutine_6c7cb0(v1[3], (unsigned int)*(char*)(v1[3] + 584),
                             (unsigned int)*(char*)(v1[3] + 585));
          v9 = v1[3];
          v10 = *(_QWORD*)(v9 + 8);
          if (v10 != 0) {
            v11 = *(char*)(v10 + 584);
            if ((v11 & 0x80000000) == 0) {
              v12 = *(char*)(v10 + 585);
              if ((v12 & 0x80000000) == 0) {
                v13 = *(_DWORD*)(v10 + 592);
                v14 = v12 | 0x100;
                v15 = (float)(unsigned int)(v13 - 1) * 2.5f;
                if (v13 <= 0) {
                  v15 = 0.0f;
                }
                *(_QWORD*)&v16 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)(v11 | 0x100u) * 5.0f) +
                                    2.5f) +
                            -0x1.4000000000000p+10f) +
                    v15);
                v33 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v14 * 5.0f) + 2.5f) +
                            -0x1.4000000000000p+10f) +
                    v15);
                *(float*)&v35 =
                    (float)((float)((float)((float)(v11 | 0x100u) * 5.0f) +
                                    2.5f) +
                            -0x1.4000000000000p+10f) +
                    v15;
                *((_QWORD*)&v16 + 1) = v33;
                *(_OWORD*)v38 = v16;
                *(_QWORD*)&v17 = __PAIR64__(
                    COERCE_UNSIGNED_INT(Unit_6c7fa0(v10, (__int64)v38)), v35);
                *((_QWORD*)&v17 + 1) = v33;
                *(_OWORD*)v38 = v17;
                Cursor_734a80(v9 + 48, v38);
                UnitActor_81ba20(v9);
              }
            }
            if (*(_QWORD*)(v9 + 264) != 0) {
              CharacterBuilder_1084780();
            }
          }
          v18 = *(unsigned __int16*)(v4 + 208);
          if ((v18 & 4) != 0) {
            v5 = 1;
          }
          else if ((v18 & 0x10) != 0) {
            v5 = 2;
          }
          else if ((v18 & 0x20) != 0) {
            v5 = 3;
          }
          else if ((v18 & 0x40) != 0) {
            v5 = 4;
          }
          else if ((v18 & 0x80) != 0) {
            v5 = 6;
          }
          else {
            v5 = (v18 << 23 >> 31) & 5;
          }
          if ((*(_BYTE*)(v4 + 184) & 1) != 0) {
            v6 = *(_QWORD*)(v4 + 200);
          }
          else {
            v6 = v3;
          }
          result = game_map_769920(v4, v1[3], v5, v6);
        }
        else {
          if (*((int*)v1 + 46) < 1) {
            v23 = *((_DWORD*)v1 + 11);
            *(_BYTE*)(v7 + 584) = *((_DWORD*)v1 + 10);
            *(_BYTE*)(v7 + 585) = v23;
            GameRoutine_6c7cb0(v1[3], (unsigned int)*(char*)(v1[3] + 584),
                               (unsigned int)*(char*)(v1[3] + 585));
            v24 = v1[3];
            v25 = *(_QWORD*)(v24 + 8);
            if (v25 != 0) {
              v26 = *(char*)(v25 + 584);
              if ((v26 & 0x80000000) == 0) {
                v27 = *(char*)(v25 + 585);
                if ((v27 & 0x80000000) == 0) {
                  v28 = *(_DWORD*)(v25 + 592);
                  v29 = v27 | 0x100;
                  v30 = (float)(unsigned int)(v28 - 1) * 2.5f;
                  if (v28 <= 0) {
                    v30 = 0.0f;
                  }
                  *(_QWORD*)&v31 = COERCE_UNSIGNED_INT(
                      (float)((float)((float)((float)(v26 | 0x100u) * 5.0f) +
                                      2.5f) +
                              -0x1.4000000000000p+10f) +
                      v30);
                  v34 = COERCE_UNSIGNED_INT(
                      (float)((float)((float)((float)v29 * 5.0f) + 2.5f) +
                              -0x1.4000000000000p+10f) +
                      v30);
                  *(float*)&v36 =
                      (float)((float)((float)((float)(v26 | 0x100u) * 5.0f) +
                                      2.5f) +
                              -0x1.4000000000000p+10f) +
                      v30;
                  *((_QWORD*)&v31 + 1) = v34;
                  *(_OWORD*)v38 = v31;
                  *(_QWORD*)&v32 = __PAIR64__(
                      COERCE_UNSIGNED_INT(Unit_6c7fa0(v25, (__int64)v38)), v36);
                  *((_QWORD*)&v32 + 1) = v34;
                  *(_OWORD*)v38 = v32;
                  Cursor_734a80(v24 + 48, v38);
                  UnitActor_81ba20(v24);
                }
              }
              if (*(_QWORD*)(v24 + 264) != 0) {
                CharacterBuilder_1084780();
              }
            }
          }
          else {
            v19 = *v1;
            v37[0] = 0;
            v39 = 0;
            v20 = *(unsigned __int8*)(v19 + 57);
            if (*(_BYTE*)(v19 + 48) != 0) {
              v21 = 4;
            }
            else {
              v21 = 1;
            }
            if (v20 != 0) {
              v22 = v20;
            }
            else {
              v22 = v21;
            }
            game_map_768a20(v4, v7, v1 + 6, v37, v22, 0, v38);
          }
          result = UnitActor_81aee0(v1[3], 0.0f);
        }
      }
      v1 += 31;
    } while (v1 != v2);
  }
  return result;
}

__int64 ProcDispos_7424c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6)
{
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v6 = GameData_21ca300;
  v7 = *(_QWORD**)(GameData_21ca300 + 96);
  Image_72b4a0((__int64)v7, a2, a3, a4, a5, a6);
  Image_72b6c0(v7);
  return Image_72a260(*(_QWORD*)(v6 + 152), v8, v9, v10, v11, v12);
}

__int64 ProcDispos_742510()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    v6 = v0;
    v7 = v1;
    v4[0] = GameData_1fb2478;
    v5 = v4;
    GameRoutine_9903e0(v4);
    result = (__int64)v5;
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
        return result;
      }
      v3 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
  }
  return result;
}

__int64 game_map_anonymous_ProcDispos_Calculate_closure_Invoke(__int64 a1,
                                                               __int64* a2)
{
  _QWORD* v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  long double v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;
  char* v45;
  char* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  long double v55;
  long double v56;
  int v57;
  char* v58;
  char* v59;
  __int64 v60;

  v2 = *(_QWORD**)(a1 + 8);
  v6 = v2[28];
  v5 = v2[29];
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 >= v5) {
    v15 = (__int64*)v2[27];
    v16 = v6 - (_QWORD)v15;
    v17 = 1 - 0x1084210842108421LL * ((__int64)(v6 - (_QWORD)v15) >> 3);
    if (v17 > 0x108421084210842LL) {
      GameRoutine_742ad0();
    }
    v18 = 0xEF7BDEF7BDEF7BDFLL * ((__int64)(v5 - (_QWORD)v15) >> 3);
    if (2 * v18 > v17) {
      v17 = 2 * v18;
    }
    if (v18 >= 0x84210842108421LL) {
      v19 = 0x108421084210842LL;
    }
    else {
      v19 = v17;
    }
    if (v19 > 0x108421084210842LL) {
      GameRoutine_60a210(a1);
    }
    v20 = 248 * v19;
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         248 * v19, 16, 0);
    v22 = a2[1];
    v23 = v21 + v16;
    v24 = v21;
    v25 = v21 + v20;
    *(_QWORD*)v23 = *a2;
    *(_QWORD*)(v23 + 8) = v22;
    v26 = a2[3];
    *(_QWORD*)(v23 + 16) = a2[2];
    *(_QWORD*)(v23 + 24) = v26;
    v27 = a2[5];
    *(_QWORD*)(v23 + 32) = a2[4];
    *(_QWORD*)(v23 + 40) = v27;
    memcpy(v21 + v16 + 56, a2 + 7, 184);
    v28 = *((_WORD*)a2 + 120);
    v14 = v23 + 248;
    *(_QWORD*)(v23 + 48) = game_map_TRoute_vtable;
    *(_WORD*)(v23 + 240) = v28;
    if (v15 != (__int64*)v6) {
      v29 = v24;
      do {
        v30 = *v15;
        v31 = v15[2];
        *(_QWORD*)(v29 + 8) = v15[1];
        *(_QWORD*)(v29 + 16) = v31;
        *(_QWORD*)v29 = v30;
        v32 = v15[3];
        v33 = v15[5];
        *(_QWORD*)(v29 + 32) = v15[4];
        *(_QWORD*)(v29 + 40) = v33;
        *(_QWORD*)(v29 + 24) = v32;
        memcpy(v29 + 56, v15 + 7, 184);
        *(_QWORD*)(v29 + 48) = game_map_TRoute_vtable;
        v34 = *((_WORD*)v15 + 120);
        v15 += 31;
        *(_WORD*)(v29 + 240) = v34;
        v29 += 248;
      } while (v15 != (__int64*)v6);
      v15 = (__int64*)v2[27];
    }
    v2[27] = v24;
    v2[28] = v14;
    v2[29] = v25;
    v7 = &fw_memory_g_heap_manager;
    if (v15 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35, v15);
    }
  }
  else {
    v8 = *a2;
    v9 = a2[2];
    *(_QWORD*)(v6 + 8) = a2[1];
    *(_QWORD*)(v6 + 16) = v9;
    *(_QWORD*)v6 = v8;
    v10 = a2[4];
    v11 = a2[5];
    *(_QWORD*)(v6 + 24) = a2[3];
    *(_QWORD*)(v6 + 32) = v10;
    *(_QWORD*)(v6 + 40) = v11;
    *(_QWORD*)(v6 + 48) = game_map_IRoute_vtable;
    memcpy(v6 + 56, a2 + 7, 184);
    v14 = v6 + 248;
    *(_QWORD*)(v6 + 48) = game_map_TRoute_vtable;
    *(_WORD*)(v6 + 240) = *((_WORD*)a2 + 120);
  }
  v2[28] = v14;
  v57 = 0;
  v36 = a2[3];
  if (*(_BYTE*)(v36 + 176) == 1) {
    v37 = *(_QWORD*)(v36 + 152);
    *(_QWORD*)&v12 = 0;
  LABEL_22:
    *(_QWORD*)&v13 = 0;
    (*(void (**)(__int64, long double, long double))(v37 + 24))(v36 + 152, v12,
                                                                v13);
  LABEL_23:
    *(_QWORD*)(v36 + 160) = 0;
    *(_WORD*)(v36 + 176) = 256;
    *(_WORD*)(v36 + 20) |= 8u;
    goto LABEL_24;
  }
  if (*(float*)(v36 + 160) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(v36 + 152) + 16LL))(v36 + 152);
    v37 = *(_QWORD*)(v36 + 152);
    goto LABEL_22;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v36 + 152) + 8LL))(
           v36 + 152, &v57, v36 + 184) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v36 + 152) + 16LL))(v36 + 152);
    LODWORD(v55) = v57;
    (*(void (**)(__int64, long double, long double))(
        *(_QWORD*)(v36 + 152) + 24LL))(v36 + 152, v56, v55);
    goto LABEL_23;
  }
LABEL_24:
  v38 = *((_DWORD*)a2 + 10);
  v39 = *((_DWORD*)a2 + 11);
  HIWORD(v57) = 0;
  LOBYTE(v57) = v38;
  v40 = *(_QWORD*)(a1 + 16);
  BYTE1(v57) = v39;
  GameRoutine_74e080(v40 + 8, &v57);
  v41 = a2[3];
  v42 = *((unsigned int*)a2 + 8);
  v43 = *((unsigned int*)a2 + 9);
  v57 = 0;
  v58 = nullptr;
  v59 = nullptr;
  v60 = 0;
  result = GameRoutine_74d660(&v57, *(unsigned int*)(v41 + 592), v42, v43);
  v45 = v58;
  v46 = v59;
  if (v58 != v59) {
    v47 = GameData_212cfb8[0];
    do {
      v49 = *(_QWORD*)(*v47 + 16);
      v50 = *v45 + 32 * v45[1];
      if (v50 >= 0x400) {
        v50 = 0;
      }
      v51 = *(__int16*)(v49 + 2LL * v50 + 2152);
      if (v51 < 0 || (v52 = *(_QWORD*)(v49 + 8)) == 0 ||
          (v48 = v52 + 144LL * (int)v51,
           (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v48 + 40LL))(v48) !=
               1)) {
        v48 = 0;
      }
      result = game_map_anonymous_TrickEntity_TryBroken(v49, v2, v48);
      v45 += 4;
    } while (v45 != v46);
    v45 = v58;
  }
  if (v45 != nullptr) {
    v53 = *v7;
    v59 = v45;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    return nn_mem_StandardAllocator_Free(v53 + v54, v45);
  }
  return result;
}

__int64 ProcDispos_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)a1 = game_map_anonymous_ProcDispos_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f94bd8;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 224) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 200);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 176);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
