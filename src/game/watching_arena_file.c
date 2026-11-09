#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern __int64 GameData_21ca0c0;
extern __int64 GameData_21f1720;
extern __int64 GameData_21f1728;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64* GameData_212cc78[56];
extern char GameData_1a8e1a1[];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void WatchingArenaFile_Unknown4();
__int64 WatchingArenaFile_efe560(__int64 a1, __int16* a2);
__int64 WatchingArenaFile_efeb20(__int64 a1, __int16* a2);

void WatchingArenaFile_Unknown4()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  char* v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  _BYTE v18[520];

  v0 = GameData_212cc78[0];
  v1 = *(_QWORD*)(*GameData_212cc78[0] + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(*GameData_212cc78[0] + 72) - v1) >>
            3) >= 1) {
    v2 = 0;
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v4 = *(_QWORD*)(v1 + 8 * v2);
      sprintf(v18, GameData_1a8e1a1, *(_QWORD*)(v4 + 8));
      v5 = strlen(v18);
      if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v5);
      }
      v6 = v5;
      if (v5 >= 0x17) {
        break;
      }
      v7 = (char*)&v15 + 1;
      LOBYTE(v15) = 2 * v5;
      if (v5 != 0) {
        goto LABEL_12;
      }
    LABEL_13:
      v7[v6] = 0;
      v9 = *(__int64**)(v4 + 24);
      if (v9 == &v15) {
        goto LABEL_25;
      }
      if ((*(_BYTE*)v9 & 1) != 0) {
        if ((v15 & 1) != 0) {
          v12 = v17;
        }
        else {
          v12 = (char*)&v15 + 1;
        }
        if ((v15 & 1) != 0) {
          v13 = v16;
        }
        else {
          v13 = (unsigned __int64)(unsigned __int8)v15 >> 1;
        }
        GameRoutine_64dde0(v9, v12, v13);
      LABEL_25:
        if ((v15 & 1) != 0) {
          goto LABEL_26;
        }
        goto LABEL_3;
      }
      if ((v15 & 1) != 0) {
        GameRoutine_64df20(v9, v17, v16);
        if ((v15 & 1) != 0) {
        LABEL_26:
          if (v17 != nullptr) {
            v14 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v14, v17);
          }
        }
      }
      else {
        v10 = v15;
        v11 = v17;
        v9[1] = v16;
        v9[2] = (__int64)v11;
        *v9 = v10;
        if ((v15 & 1) != 0) {
          goto LABEL_26;
        }
      }
    LABEL_3:
      ++v2;
      v1 = *(_QWORD*)(*v0 + 64);
      if (v2 >= (int)((unsigned __int64)(*(_QWORD*)(*v0 + 72) - v1) >> 3)) {
        return;
      }
    }
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(*v3, v8, 16, 0);
    v16 = v6;
    v17 = v7;
    v15 = v8 | 1;
  LABEL_12:
    memcpy(v7, v18, v6);
    goto LABEL_13;
  }
}

__int64 WatchingArenaFile_efe560(__int64 a1, __int16* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _QWORD* v34;
  unsigned __int64 v35;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int16 v59;
  __int16 v60;
  __int16 v61;
  __int16 v62;
  __int16 v63;
  char v64;
  __int16* v66;
  __int64 v67;
  int v68;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v2 = &GameData_21ca0c0;
    v3 = *(_QWORD*)(GameData_21ca0c0 + 64);
    if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21ca0c0 + 72) - v3) >>
              3) >= 1) {
      v66 = (__int16*)game_gmap_GmapClock_instance_;
      v67 = 0;
      v4 = 0;
      v64 = 0;
      v59 = (unsigned __int64)(*(_QWORD*)(GameData_21ca0c0 + 72) - v3) >> 3;
      v60 = v59;
      v61 = v59;
      v62 = v59;
      v63 = 0;
      while (1) {
        v6 = *(_QWORD*)(v3 + 8 * v4);
        v7 = *(__int16*)(v6 + 88);
        v8 = *(unsigned __int8*)(v6 + 90);
        v9 = *(unsigned __int8*)(v6 + 91);
        v10 = *(unsigned __int16*)(v6 + 94);
        v11 = *(unsigned __int16*)(v6 + 56);
        if (*(_WORD*)(v6 + 56) != 0) {
          v68 = *(unsigned __int16*)(v6 + 94);
          v12 = *(__int16*)(v6 + 88);
          v13 = *(unsigned __int8*)(v6 + 91);
          v14 = *(unsigned __int8*)(v6 + 90);
          v15 = v2;
          v16 = 0;
          v17 = 0;
          do {
            v18 = game_HashString(*(_QWORD*)(*(_QWORD*)(v6 + 64) + 8 * v16));
            if (v18 != 0 && game_GameModeData_instance_ != 0) {
              v20 = *(_QWORD**)(game_GameModeData_instance_ + 48);
              v21 = v20[2];
              if (v21 != 0 && v20[4] != 0) {
                v23 = v21 - 1;
                if ((v21 & (v21 - 1)) != 0) {
                  v24 = v18;
                  if (v18 >= v21) {
                    v24 = v18 % v21;
                  }
                }
                else {
                  v24 = v23 & v18;
                }
                v25 = *(_QWORD**)(v20[1] + 8 * v24);
                if (v25 != nullptr) {
                  v26 = (_QWORD*)*v25;
                  if (v26 != nullptr) {
                    if ((v21 & v23) == 0) {
                      while (1) {
                        v28 = v26[1];
                        if (v18 == v28) {
                          if (v26[2] == v18) {
                            goto LABEL_40;
                          }
                        }
                        else if ((v28 & v23) != v24) {
                          goto LABEL_11;
                        }
                        v26 = (_QWORD*)*v26;
                        if (v26 == nullptr) {
                          goto LABEL_11;
                        }
                      }
                    }
                    do {
                      v27 = v26[1];
                      if (v18 == v27) {
                        if (v26[2] == v18) {
                        LABEL_40:
                          v29 = v26[3];
                          if (v29 != 0) {
                            v17 |= *(_DWORD*)(v29 + 32) != 0;
                          }
                          break;
                        }
                      }
                      else {
                        if (v27 >= v21) {
                          v27 %= v21;
                        }
                        if (v27 != v24) {
                          break;
                        }
                      }
                      v26 = (_QWORD*)*v26;
                    } while (v26 != nullptr);
                  }
                }
              }
            }
          LABEL_11:
            ++v16;
          } while (v16 != v11);
          v2 = v15;
          v8 = v14;
          v9 = v13;
          v7 = v12;
          v10 = v68;
          if ((v17 & 1) == 0) {
            goto LABEL_8;
          }
        }
        v30 = *(unsigned __int16*)(v6 + 72);
        if (*(_WORD*)(v6 + 72) == 0) {
          goto LABEL_76;
        }
        v31 = 0;
        do {
          v32 = game_HashString(*(_QWORD*)(*(_QWORD*)(v6 + 80) + 8 * v31));
          if (v32 == 0 || game_GameModeData_instance_ == 0) {
            goto LABEL_8;
          }
          v34 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v35 = v34[2];
          if (v35 == 0 || v34[4] == 0) {
            goto LABEL_8;
          }
          v37 = v35 - 1;
          if ((v35 & (v35 - 1)) != 0) {
            v38 = v32;
            if (v32 >= v35) {
              v38 = v32 % v35;
            }
          }
          else {
            v38 = v37 & v32;
          }
          v39 = *(_QWORD**)(v34[1] + 8 * v38);
          if (v39 == nullptr) {
            goto LABEL_8;
          }
          v40 = (_QWORD*)*v39;
          if (v40 == nullptr) {
            goto LABEL_8;
          }
          if ((v35 & v37) == 0) {
            while (1) {
              v42 = v40[1];
              if (v32 == v42) {
                if (v40[2] == v32) {
                  goto LABEL_73;
                }
              }
              else if ((v42 & v37) != v38) {
                goto LABEL_8;
              }
              v40 = (_QWORD*)*v40;
              if (v40 == nullptr) {
                goto LABEL_8;
              }
            }
          }
          while (1) {
            v41 = v40[1];
            if (v32 == v41) {
              break;
            }
            if (v41 >= v35) {
              v41 %= v35;
            }
            if (v41 != v38) {
              goto LABEL_8;
            }
          LABEL_62:
            v40 = (_QWORD*)*v40;
            if (v40 == nullptr) {
              goto LABEL_8;
            }
          }
          if (v40[2] != v32) {
            goto LABEL_62;
          }
        LABEL_73:
          v43 = v40[3];
          if (v43 == 0 || *(_DWORD*)(v43 + 32) == 0) {
            goto LABEL_8;
          }
          ++v31;
        } while (v31 != v30);
      LABEL_76:
        v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v4) + 24LL);
        if ((*(_BYTE*)v44 & 1) != 0) {
          v45 = *(_QWORD*)(v44 + 16);
        }
        else {
          v45 = v44 + 1;
        }
        v46 = game_HashString(v45);
        if (v46 == 0 || game_GameModeData_instance_ == 0) {
          goto LABEL_109;
        }
        v48 = *(_QWORD**)(game_GameModeData_instance_ + 48);
        v49 = v48[2];
        if (v49 == 0 || v48[4] == 0) {
          goto LABEL_109;
        }
        v51 = v49 - 1;
        if ((v49 & (v49 - 1)) != 0) {
          v52 = v46;
          if (v46 >= v49) {
            v52 = v46 % v49;
          }
        }
        else {
          v52 = v51 & v46;
        }
        v53 = *(_QWORD**)(v48[1] + 8 * v52);
        if (v53 == nullptr || (v54 = (_QWORD*)*v53) == nullptr) {
        LABEL_109:
          v58 =
              ((v7 << 32) | (v8 << 24)) + (v9 << 18) +
              ((unsigned __int64)((unsigned __int16)v10 / 0x64u) << 12) +
              (((v10 - 100 * ((unsigned __int16)v10 / 0x64u)) & 0x3FFLL) << 6);
          if (v58 < ((__int64)v66[11] << 24) + ((__int64)v66[10] << 32) +
                        ((__int64)v66[12] << 18) + ((__int64)v66[13] << 12) +
                        ((__int64)v66[14] << 6) + v66[15] &&
              ((__int64)a2[1] << 24) + ((__int64)*a2 << 32) +
                      ((__int64)a2[2] << 18) + ((__int64)a2[3] << 12) +
                      ((__int64)a2[4] << 6) + a2[5] <
                  v58) {
            if ((v64 & 1) != 0 &&
                v58 >= ((__int64)v60 << 12) + ((__int64)v59 << 6) +
                           ((__int64)v61 << 18) + ((__int64)v62 << 24) +
                           ((__int64)v63 << 32)) {
              v64 = 1;
            }
            else {
              v59 = (unsigned __int16)v10 % 0x64u;
              v63 = v7;
              v64 = 1;
              v67 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v4);
              v62 = v8;
              v60 = (unsigned __int16)v10 / 0x64u;
              v61 = v9;
            }
          }
          goto LABEL_8;
        }
        if ((v49 & v51) == 0) {
          while (1) {
            v56 = v54[1];
            if (v46 == v56) {
              if (v54[2] == v46) {
                goto LABEL_107;
              }
            }
            else if ((v56 & v51) != v52) {
              goto LABEL_109;
            }
            v54 = (_QWORD*)*v54;
            if (v54 == nullptr) {
              goto LABEL_109;
            }
          }
        }
        while (2) {
          v55 = v54[1];
          if (v46 != v55) {
            if (v55 >= v49) {
              v55 %= v49;
            }
            if (v55 != v52) {
              goto LABEL_109;
            }
          }
          else if (v54[2] == v46) {
            break;
          }
          v54 = (_QWORD*)*v54;
          if (v54 == nullptr) {
            goto LABEL_109;
          }
          continue;
        }
      LABEL_107:
        v57 = v54[3];
        if (v57 == 0 || *(_DWORD*)(v57 + 32) == 0) {
          goto LABEL_109;
        }
      LABEL_8:
        ++v4;
        v3 = *(_QWORD*)(*v2 + 64);
        if (v4 >= (int)((unsigned __int64)(*(_QWORD*)(*v2 + 72) - v3) >> 3)) {
          return v67;
        }
      }
    }
  }
  return 0;
}

__int64 WatchingArenaFile_efeb20(__int64 a1, __int16* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  unsigned __int64 v23;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int16 v50;
  __int16 v51;
  __int16 v52;
  __int16 v53;
  __int16 v54;
  char v55;
  __int64 v57;
  unsigned __int16 v58;

  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    v2 = GameData_21f1720;
    v3 = GameData_21f1728;
    if (GameData_21f1720 != GameData_21f1728) {
      v4 = 0;
      v5 = 0;
      do {
      LABEL_19:
        v6 = *(_QWORD*)v2;
        if (v4 == *(char*)(*(_QWORD*)v2 + 88LL) && v5 == *(char*)(v6 + 89)) {
          goto LABEL_23;
        }
        v2 += 8;
      } while (v2 != v3);
    }
    return 0;
  }
  v2 = GameData_21f1720;
  v3 = GameData_21f1728;
  if (GameData_21f1720 == GameData_21f1728) {
    return 0;
  }
  v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  if (*(_BYTE*)(game_GameModeData_instance_ + 15) == 0) {
    goto LABEL_19;
  }
  while (1) {
    v6 = *(_QWORD*)v2;
    if (v4 == *(char*)(*(_QWORD*)v2 + 88LL) && v5 == *(char*)(v6 + 89) &&
        (*(_BYTE*)(*(_QWORD*)(v6 + 24) + 33LL) == 0 ||
         *(unsigned __int8*)(*(_QWORD*)(v6 + 24) + 33LL) ==
             *(unsigned __int8*)(game_GameModeData_instance_ + 15))) {
      break;
    }
    v2 += 8;
    if (v2 == GameData_21f1728) {
      return 0;
    }
  }

LABEL_23:
  while (1) {
    v8 = *(_QWORD*)(v6 + 24);
    if (*(_BYTE*)(v6 + 33) == 17) {
      break;
    }
    v6 = *(_QWORD*)(v8 + 16);
    if (v6 == 0) {
      return 0;
    }
  }
  v9 = *(_QWORD*)(GameData_21ca0c0 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21ca0c0 + 72) - v9) >> 3) <
      1) {
    return 0;
  }
  v10 = 0;
  v11 = 0;
  v55 = 0;
  v50 = (unsigned __int64)(*(_QWORD*)(GameData_21ca0c0 + 72) - v9) >> 3;
  v51 = v50;
  v52 = v50;
  v53 = v50;
  v54 = 0;
  do {
    v13 = *(_QWORD*)(v9 + 8 * v10);
    v14 = *(__int16*)(v13 + 88);
    v15 = *(unsigned __int8*)(v13 + 90);
    v16 = *(unsigned __int8*)(v13 + 91);
    v17 = *(unsigned __int16*)(v13 + 56);
    v58 = *(_WORD*)(v13 + 92);
    if (*(_WORD*)(v13 + 56) != 0) {
      v57 = v11;
      v18 = *(__int16*)(v13 + 88);
      v19 = *(unsigned __int8*)(v13 + 91);
      v20 = *(unsigned __int8*)(v13 + 90);
      v21 = 0;
      v22 = 0;
      do {
        v23 = game_HashString(*(_QWORD*)(*(_QWORD*)(v13 + 64) + 8 * v21));
        if (v23 != 0 && game_GameModeData_instance_ != 0) {
          v25 = *(_QWORD**)(game_GameModeData_instance_ + 48);
          v26 = v25[2];
          if (v26 != 0 && v25[4] != 0) {
            v28 = v26 - 1;
            if ((v26 & (v26 - 1)) != 0) {
              v29 = v23;
              if (v23 >= v26) {
                v29 = v23 % v26;
              }
            }
            else {
              v29 = v28 & v23;
            }
            v30 = *(_QWORD**)(v25[1] + 8 * v29);
            if (v30 != nullptr) {
              v31 = (_QWORD*)*v30;
              if (v31 != nullptr) {
                if ((v26 & v28) == 0) {
                  while (1) {
                    v33 = v31[1];
                    if (v23 == v33) {
                      if (v31[2] == v23) {
                        goto LABEL_61;
                      }
                    }
                    else if ((v33 & v28) != v29) {
                      goto LABEL_32;
                    }
                    v31 = (_QWORD*)*v31;
                    if (v31 == nullptr) {
                      goto LABEL_32;
                    }
                  }
                }
                do {
                  v32 = v31[1];
                  if (v23 == v32) {
                    if (v31[2] == v23) {
                    LABEL_61:
                      v34 = v31[3];
                      if (v34 != 0) {
                        v22 |= *(_DWORD*)(v34 + 32) != 0;
                      }
                      break;
                    }
                  }
                  else {
                    if (v32 >= v26) {
                      v32 %= v26;
                    }
                    if (v32 != v29) {
                      break;
                    }
                  }
                  v31 = (_QWORD*)*v31;
                } while (v31 != nullptr);
              }
            }
          }
        }
      LABEL_32:
        ++v21;
      } while (v21 != v17);
      v15 = v20;
      v16 = v19;
      v14 = v18;
      v11 = v57;
      if ((v22 & 1) == 0) {
        goto LABEL_29;
      }
    }
    v35 = *(unsigned __int16*)(v13 + 72);
    if (*(_WORD*)(v13 + 72) == 0) {
      goto LABEL_97;
    }
    v36 = 0;
  LABEL_66:
    v37 = game_HashString(*(_QWORD*)(*(_QWORD*)(v13 + 80) + 8 * v36));
    if (v37 != 0 && game_GameModeData_instance_ != 0) {
      v39 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v40 = v39[2];
      if (v40 != 0 && v39[4] != 0) {
        v42 = v40 - 1;
        if ((v40 & (v40 - 1)) != 0) {
          v43 = v37;
          if (v37 >= v40) {
            v43 = v37 % v40;
          }
        }
        else {
          v43 = v42 & v37;
        }
        v44 = *(_QWORD**)(v39[1] + 8 * v43);
        if (v44 != nullptr) {
          v45 = (_QWORD*)*v44;
          if (v45 != nullptr) {
            if ((v40 & v42) == 0) {
              while (1) {
                v47 = v45[1];
                if (v37 == v47) {
                  if (v45[2] == v37) {
                    goto LABEL_94;
                  }
                }
                else if ((v47 & v42) != v43) {
                  goto LABEL_29;
                }
                v45 = (_QWORD*)*v45;
                if (v45 == nullptr) {
                  goto LABEL_29;
                }
              }
            }
            do {
              v46 = v45[1];
              if (v37 == v46) {
                if (v45[2] == v37) {
                LABEL_94:
                  v48 = v45[3];
                  if (v48 == 0 || *(_DWORD*)(v48 + 32) == 0) {
                    break;
                  }
                  if (++v36 == v35) {
                  LABEL_97:
                    v49 = ((v14 << 32) | (v15 << 24)) + (v16 << 18) +
                          ((unsigned __int64)(v58 / 0x64u) << 12) +
                          ((unsigned __int64)(v58 % 0x64u) << 6);
                    if (v49 > ((__int64)*(__int16*)(v8 + 98) << 24) +
                                  ((__int64)*(__int16*)(v8 + 96) << 32) +
                                  ((__int64)*(__int16*)(v8 + 100) << 18) +
                                  ((__int64)*(__int16*)(v8 + 102) << 12) +
                                  ((__int64)*(__int16*)(v8 + 104) << 6) +
                                  *(__int16*)(v8 + 106) &&
                        ((__int64)a2[1] << 24) + ((__int64)*a2 << 32) +
                                ((__int64)a2[2] << 18) +
                                ((__int64)a2[3] << 12) + ((__int64)a2[4] << 6) +
                                a2[5] >
                            v49) {
                      if ((v55 & 1) != 0 && v49 <= ((__int64)v51 << 12) +
                                                       ((__int64)v50 << 6) +
                                                       ((__int64)v52 << 18) +
                                                       ((__int64)v53 << 24) +
                                                       ((__int64)v54 << 32)) {
                        v55 = 1;
                      }
                      else {
                        v54 = v14;
                        v55 = 1;
                        v50 = v58 % 0x64u;
                        v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca0c0 + 64) +
                                         8 * v10);
                        v53 = v15;
                        v51 = v58 / 0x64u;
                        v52 = v16;
                      }
                    }
                    break;
                  }
                  goto LABEL_66;
                }
              }
              else {
                if (v46 >= v40) {
                  v46 %= v40;
                }
                if (v46 != v43) {
                  break;
                }
              }
              v45 = (_QWORD*)*v45;
            } while (v45 != nullptr);
          }
        }
      }
    }
  LABEL_29:
    ++v10;
    v9 = *(_QWORD*)(*GameData_212cc78[0] + 64);
  } while (
      v10 <
      (int)((unsigned __int64)(*(_QWORD*)(*GameData_212cc78[0] + 72) - v9) >>
            3));
  return v11;
}

#pragma GCC visibility pop
