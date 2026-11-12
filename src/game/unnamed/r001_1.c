#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cea0;
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern _UNKNOWN* GameData_212d208;
extern __int64 GameData_212d220[5];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd128;
__int64 GameRoutine_19f3aa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_6c90c0(_QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
bool GameRoutine_6e8e50(unsigned __int16*, __int64);
__int64 GameRoutine_6ea8c0(_QWORD, long double);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7545a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_779940(_QWORD, _QWORD);
__int64 GameRoutine_77a2e0(_QWORD);
__int64 GameRoutine_78e5d0(_QWORD);
__int64 GameRoutine_825040(_QWORD, _QWORD);
__int64 GameRoutine_825790(void);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
_QWORD* GameRoutine_74d660_alt1(__int64, int, char,
                                char) __asm__("GameRoutine_74d660");
bool MapUtil_7545a0(unsigned int*, unsigned int*, unsigned int, __int64,
                    unsigned int, unsigned int, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_757f60(__int64 a1, _DWORD* a2, unsigned int a3, unsigned int a4,
                   __int64 a5);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BattleInfo_790b00(__int64, __int64);
__int64 GameHr_15c5b40(__int64, __int64);
__int64 GameHr_f09ad0(__int64 result, __int64, char);
__int64 GameRoutine_7992e0(__int64);
__int64 VTarget_77a640(__int64);
__int64 game_map_78d280(__int64, _BYTE*);
__int64 game_map_799aa0(__int64 result, __int64);
__int64 game_map_799b90(__int64, __int64);
__int64 game_menu_BasicMenu_Unknown16defa0(float*);
__n128 BattleArea_8b9d00(__int64);
extern _UNKNOWN GameData_1b47d78;
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
void game_map_790ba0(__int64);
__int64 GameHr_78e5d0(__int64 a1);
__int64 GameHr_19f3aa0(__int64 result, __int64, __int64, unsigned __int16*,
                       __int64);
__int64 GameHr_78e5d0_alt1(__int64, long double) __asm__("GameHr_78e5d0");
__int64 VTarget_779940(_DWORD*, __int64);
__int64 VTarget_77a2e0(__int64);
__int64 GameHr_789d20(__int64 a1, long double a2);

__int64 GameHr_74ae00(__int64 result, __int64 a2, unsigned __int16* a3,
                      __int64* a4, __int64* a5, int* a6, int* a7)
{
  __int64 v13;
  __int64* v14;
  unsigned __int8* v15;
  int v16;
  unsigned int v17;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  bool v36;
  bool v37;
  int v38;
  bool v39;
  bool v40;
  int v42;
  int v44;
  unsigned int v45;
  __int64 v46;
  int j;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  char v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  __int64 v56;
  int i;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  char v62;
  __int64 v63;

  if (*a3 == 0) {
    return result;
  }
  v13 = result;
  v14 = GameData_212c878[0];
  v15 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v16 = v15[73];
  v17 = v15[72];
  if (v17 > 7 || ((1LL << v16) & 0x7DC) == 0) {
    if (v17 > 7 || v16 != 1) {
      return result;
    }
    if (v17 - 5 > 1) {
      if ((*((_BYTE*)a3 + 3) & 0x20) != 0) {
        return result;
      }
    }
    else {
      if ((*((_DWORD*)a3 + 1) & 0xF) * (unsigned int)v15[87] - 1 <
          *((unsigned __int8*)a3 + 2)) {
        return result;
      }
      if ((*((_BYTE*)a3 + 3) & 0x20) != 0) {
        return result;
      }
      result = GameRoutine_6c90c0(a2);
      if ((result & 1) == 0) {
        return result;
      }
    }
    result = GameRoutine_6e8bc0(a3, a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  else {
    result = GameRoutine_6e8e50(a3, a2);
    if ((result & 1) == 0) {
      return result;
    }
  }
  v20 = *a3;
  if (*a3 == 0) {
    v25 = 0;
    v24 = 0;
    goto LABEL_46;
  }
  v21 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8 * v20);
  v22 = *(_BYTE**)(v21 + 192);
  if (v22 == nullptr || *(unsigned __int8*)(v21 + 72) > 7u) {
    v24 = *(unsigned __int8*)(v21 + 92);
  }
  else {
    if (v22[105] != 0) {
      if (v22[104] == 2) {
        v26 = 0;
      }
      else {
        v26 = *(_QWORD*)(v21 + 192);
      }
    }
    else {
      v26 = 0;
    }
    if (v26 != 0) {
      v27 = (unsigned __int8*)(v26 + 278);
    }
    else {
      v27 = (unsigned __int8*)(v21 + 92);
    }
    v24 = *v27;
    if (v22[105] != 0) {
      if (v22[104] == 2) {
        v22 = nullptr;
      }
      goto LABEL_42;
    }
  }
  v22 = nullptr;
LABEL_42:
  v28 = (unsigned __int8*)(v21 + 93);
  v29 = *(_QWORD*)(v21 + 24);
  if (v22 != nullptr) {
    v30 = v22 + 279;
  }
  else {
    v30 = v28;
  }
  v31 = *v30;
  result = GameRoutine_84edc0(a2 + 1744, v29 + 8);
  v25 = *a3;
  LODWORD(v20) = result + v31;
LABEL_46:
  v32 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8 * v25);
  if (v32 != 0) {
    v33 = *(unsigned __int8*)(v32 + 72);
    v34 = *(unsigned __int8*)(v32 + 73);
    if (v33 <= 7 && v34 == 1) {
      if ((*(_BYTE*)(*(_QWORD*)(v13 + 8) + 2LL) & 0x10) != 0) {
        v54 = *a6;
        if ((int)v20 > *a6) {
          v54 = v20;
        }
        *a6 = v54;
        if ((_DWORD)v20 != 255) {
          v55 = v20 - v24;
          if ((int)v20 >= v24) {
            v56 = *a4;
            for (i = ((_BYTE)v55 + 1) & 7; i != 0; v56 |= v58) {
              v58 = 1LL << v24++;
              --i;
            }
            if (v55 >= 7) {
              v59 = -(int)v20;
              v60 = v24 + 7;
              do {
                v61 = (1LL << ((unsigned __int8)v60 - 2)) |
                      (1LL << ((unsigned __int8)v60 - 3)) |
                      (1LL << ((unsigned __int8)v60 - 4)) |
                      (1LL << ((unsigned __int8)v60 - 5)) |
                      (1LL << ((unsigned __int8)v60 - 6)) |
                      (1LL << ((unsigned __int8)v60 - 7)) | v56;
                v62 = v60 - 1;
                v63 = 1LL << v60;
                v60 += 8;
                v56 = v63 | (1LL << v62) | v61;
              } while (v59 + v60 != 8);
            }
            *a4 = v56;
          }
        }
      }
    }
    else {
      v36 = v33 <= 7 && v34 == 7;
      if (v36 || (v33 <= 7 ? (v37 = ((1LL << v34) & 0x7DC) == 0) : (v37 = true),
                  !v37)) {
        v38 = **(_DWORD**)(v13 + 8);
        if ((v38 & 0x200000) != 0 ||
            (v34 == 2 ? (v39 = (v38 & 0x800000) == 0) : (v39 = true),
             !v39 || (v34 == 7 ? (v40 = (v38 & 0x1000000) == 0) : (v40 = true),
                      !v40))) {
          if (v34 != 7 || (v38 & 0x20000000) == 0) {
            v42 = v38 & 0x40000000;
            if (v34 == 7 || v42 == 0) {
              v44 = *a7;
              if ((int)v20 > *a7) {
                v44 = v20;
              }
              *a7 = v44;
              if ((_DWORD)v20 != 255) {
                v45 = v20 - v24;
                if ((int)v20 >= v24) {
                  v46 = *a5;
                  for (j = ((_BYTE)v45 + 1) & 7; j != 0; v46 |= v48) {
                    v48 = 1LL << v24++;
                    --j;
                  }
                  if (v45 >= 7) {
                    v49 = -(int)v20;
                    v50 = v24 + 7;
                    do {
                      v51 = (1LL << ((unsigned __int8)v50 - 2)) |
                            (1LL << ((unsigned __int8)v50 - 3)) |
                            (1LL << ((unsigned __int8)v50 - 4)) |
                            (1LL << ((unsigned __int8)v50 - 5)) |
                            (1LL << ((unsigned __int8)v50 - 6)) |
                            (1LL << ((unsigned __int8)v50 - 7)) | v46;
                      v52 = v50 - 1;
                      v53 = 1LL << v50;
                      v50 += 8;
                      v46 = v53 | (1LL << v52) | v51;
                    } while (v49 + v50 != 8);
                  }
                  *a5 = v46;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

void GameHr_757f60(__int64 a1, _DWORD* a2, unsigned int a3, unsigned int a4,
                   __int64 a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  char* v29;
  char* i;
  int v31;
  int v32;
  __int64 v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  char v38;
  unsigned int v39;
  __int64 v40;
  unsigned __int8 v42;
  unsigned int v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  unsigned int v51;
  int v52;
  __int64 v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  unsigned int v61;
  struct {
    __int64 v62;
    char v63;
    char gap41_[7];
    __int64 v64;
    __int64 v65;
    unsigned int v66;
    unsigned int v67;
    int v68;
  } v62_;
  unsigned int v69;
  unsigned int v70;
  _QWORD v71[16];
  struct {
    int v72;
    char gap220_[4];
    char* v73;
    __int64 v74;
    __int64 v75;
  } v72_;

  if (a1 == 0) {
    return;
  }
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v7 == 0) {
    return;
  }
  if (*(_BYTE*)(v7 + 250) != 28) {
    return;
  }
  v8 = *(_QWORD*)(v7 + 680);
  if (v8 == 0) {
    return;
  }
  v9 = *(_QWORD*)(v8 + 64);
  if (v9 == 0) {
    return;
  }
  v59 = *(_QWORD*)(v7 + 680);
  v10 = *(_QWORD*)(a1 + 440);
  v13 = a1;
  memset(v71, 0, sizeof(v71));
  if (v10 != 0) {
    v61 = *(unsigned __int8*)(v10 + 16);
    if (*(_BYTE*)(v10 + 16) != 0) {
      goto LABEL_18;
    }
    if (GameData_21ca300 != 0 && (*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0) {
      v14 = *(unsigned __int8*)(GameData_21ca300 + 29);
      v15 = *(unsigned __int8*)(GameData_21ca300 + 31);
      v16 = *(unsigned __int8*)(GameData_21ca300 + 28);
      v17 = *(unsigned __int8*)(GameData_21ca300 + 30);
      if (v14 <= v15 && v16 <= v17) {
        v34 = *(_BYTE*)(GameData_21ca300 + 16);
        v35 = *(unsigned __int8*)(GameData_21ca300 + 18);
        v36 = v17 + 1;
        v37 = v17 - v16;
        v38 = *(_BYTE*)(GameData_21ca300 + 17);
        v39 = *(unsigned __int8*)(GameData_21ca300 + 19);
        v40 = *(_QWORD*)(GameData_21ca300 + 160) + 8LL;
        while (1) {
          v42 = v14 - v38;
          v43 = v16;
          if ((((_BYTE)v36 - (_BYTE)v16) & 3) != 0) {
            v44 = ((_BYTE)v36 - (_BYTE)v16) & 3;
            v43 = v16;
            do {
              if (v35 <= (unsigned __int8)(v43 - v34) || v39 <= v42) {
                v45 = 1 << v43;
                v46 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
              }
              else {
                v45 = 1 << v43;
                v46 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
                if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v46) & (1 << v43)) !=
                    0) {
                  goto LABEL_38;
                }
              }
              *((_DWORD*)v71 + v46) |= v45;
            LABEL_38:
              ++v43;
              --v44;
            } while (v44 != 0);
          }
          if (v37 >= 3) {
            break;
          }
        LABEL_33:
          if (v14++ == v15) {
            goto LABEL_15;
          }
        }
        while (v35 > (unsigned __int8)(v43 - v34) && v39 > v42) {
          v49 = 1 << v43;
          v50 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v50) & (1 << v43)) == 0) {
            goto LABEL_53;
          }
        LABEL_54:
          v51 = v43 + 1;
          if (v35 <= (unsigned __int8)(v43 + 1 - v34) || v39 <= v42) {
            v52 = 1 << v51;
            v53 = (v14 + (v51 >> 5)) & 0x7FFFFFF;
          LABEL_59:
            *((_DWORD*)v71 + v53) |= v52;
            goto LABEL_60;
          }
          v52 = 1 << v51;
          v53 = (v14 + (v51 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v53) & (1 << v51)) == 0) {
            goto LABEL_59;
          }
        LABEL_60:
          v54 = v43 + 2;
          if (v35 <= (unsigned __int8)(v43 + 2 - v34) || v39 <= v42) {
            v55 = 1 << v54;
            v56 = (v14 + (v54 >> 5)) & 0x7FFFFFF;
          LABEL_65:
            *((_DWORD*)v71 + v56) |= v55;
            goto LABEL_66;
          }
          v55 = 1 << v54;
          v56 = (v14 + (v54 >> 5)) & 0x7FFFFFF;
          if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v56) & (1 << v54)) == 0) {
            goto LABEL_65;
          }
        LABEL_66:
          v57 = v43 + 3;
          if (v35 <= (unsigned __int8)(v43 + 3 - v34) || v39 <= v42) {
            v47 = 1 << v57;
            v48 = (v14 + (v57 >> 5)) & 0x7FFFFFF;
          }
          else {
            v47 = 1 << v57;
            v48 = (v14 + (v57 >> 5)) & 0x7FFFFFF;
            if ((*(_DWORD*)(v40 + 4LL * (unsigned int)v48) & (1 << v57)) != 0) {
              goto LABEL_47;
            }
          }
          *((_DWORD*)v71 + v48) |= v47;
        LABEL_47:
          v43 += 4;
          if (v36 == v43) {
            goto LABEL_33;
          }
        }
        v49 = 1 << v43;
        v50 = (v14 + (v43 >> 5)) & 0x7FFFFFF;
      LABEL_53:
        *((_DWORD*)v71 + v50) |= v49;
        goto LABEL_54;
      }
    }
  LABEL_15:
    v19 = 3;
  }
  else {
    v19 = 9;
  }
  v61 = v19;
LABEL_18:
  if (*(_BYTE*)(v7 + 688) != 0) {
    v20 = 0;
    v58 = v9;
    do {
      if (MapUtil_7545a0(&v70, &v69, v61, v9, a3, a4, (__int64)v71)) {
        v21 = a3;
        v22 = a4;
        v23 = v13;
        v62_.v62 = v13;
        v24 = v69;
        v25 = v70;
        v62_.v63 = v61;
        v62_.v66 = v70;
        v62_.v67 = v69;
        v62_.v64 = v59;
        v62_.v65 = v9;
        v62_.v68 = *(unsigned __int8*)(v9 + 417);
        v26 = *(_QWORD*)(a5 + 32);
        if (v26 == 0) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v26 + 48LL))(v26, &v62_.v62);
        v27 = *(unsigned __int8*)(v9 + 417);
        if (v27 < 2) {
          *((_DWORD*)v71 + ((int)(v25 + 32 * v24) >> 5)) |= 1 << v25;
        }
        else {
          v72_.v72 = 0;
          v72_.v73 = nullptr;
          v72_.v74 = 0;
          v72_.v75 = 0;
          GameRoutine_74d660_alt1((__int64)&v72_.v72, v27, 0, 0);
          v28 = (__int64)v72_.v73;
          v29 = (char*)v72_.v74;
          for (i = v72_.v73; i != v29;
               *((_DWORD*)v71 + ((int)(v25 + v31 + 32 * (v24 + v32)) >> 5)) |=
               1 << (v25 + v31)) {
            v31 = *i;
            v32 = i[1];
            i += 4;
          }
          if (v28 != 0) {
            v72_.v74 = v28;
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v28);
          }
        }
        a4 = v22;
        a3 = v21;
        v13 = v23;
        v6 = GameData_212c880[0];
        v9 = v58;
      }
      ++v20;
    } while (v20 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                                  8LL * (*a2 & 0xFFF)) +
                                       688LL));
  }
}

__int64 GameHr_789ce0()
{
  __int64 result;
  __int64 v1;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    if (*(_BYTE*)(GameData_21cd0e8 + 32) == 10) {
      v1 = 6;
    }
    else {
      v1 = 5;
    }
    return GameRoutine_825040(GameData_21cd128, v1);
  }
  return result;
}

__int64 GameHr_789d20(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  unsigned __int16* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64* v26;
  int v27;
  int v28;
  int v29;
  void* v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64*** v42;
  __int64** v43;
  unsigned __int64 v44;
  __int64* v45;

  v3 = GameData_212cff0[0];
  v4 = *(_DWORD*)(a1 + 272);
  v5 = *GameData_212cff0[0];
  v6 = GameData_212cfd0[0];
  if ((signed __int32)*(_DWORD*)(*GameData_212cff0[0] + 12356) <= v4) {
    *(_DWORD*)(a1 + 272) = -1;
  }
  else if ((v4 & 0x80000000) == 0) {
    if ((*(_DWORD*)(a1 + 276) & 0x80000000) == 0) {
      goto LABEL_4;
    }
    goto LABEL_34;
  }
  if ((*(_DWORD*)(v5 + 48) & 0xFFF) != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v5 + 48) & 0xFFF));
    if (v14 == 0) {
      goto LABEL_28;
    }
    v15 = *(unsigned __int8*)(v14 + 105);
  }
  else {
    v21 = *(unsigned __int16*)(v5 + 40);
    if (*(_WORD*)(v5 + 40) == 0) {
      v21 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v22 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v21);
    v23 = *(_QWORD*)(v22 + 192);
    v24 = *(unsigned __int8*)(v22 + 72);
    if (v23 == 0 || v24 > 7) {
      goto LABEL_28;
    }
    v15 = *(unsigned __int8*)(v23 + 105);
    if (*(_BYTE*)(v23 + 105) == 0 || *(_BYTE*)(v23 + 104) == 2) {
      goto LABEL_28;
    }
  }
  if ((unsigned int)(v15 - 2) <= 2) {
    v16 = *(_QWORD*)(v5 + 12368);
    if (v16 == 0 || *(_QWORD*)(v5 + 12384) == 0) {
      goto LABEL_70;
    }
    v18 = v16 - 1;
    v19 =
        (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                      8LL) |
                           ((unsigned __int16)*(
                                _DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                         12LL)
                            << 8));
    if ((v16 & (v16 - 1)) != 0) {
      v20 =
          (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) +
                                        8LL) |
                             ((unsigned __int16)*(
                                  _DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] +
                                                      48) +
                                           12LL)
                              << 8));
      if (v16 <= v19) {
        v20 = (unsigned int)v19 % (unsigned int)v16;
      }
    }
    else {
      v20 = ((_DWORD)v16 - 1) & (unsigned int)v19;
    }
    v42 = *(__int64****)(*(_QWORD*)(v5 + 12360) + 8 * v20);
    if (v42 == nullptr || (v43 = *v42) == nullptr) {
    LABEL_70:
      v27 = -1;
      goto LABEL_33;
    }
    v27 = -1;
    if ((v16 & v18) == 0) {
      while (1) {
        v45 = v43[1];
        if (v45 == (__int64*)v19) {
          if (*((unsigned __int16*)v43 + 8) == (_DWORD)v19) {
            goto LABEL_71;
          }
        }
        else if (((unsigned __int64)v45 & v18) != v20) {
          goto LABEL_70;
        }
        v43 = (__int64**)*v43;
        if (v43 == nullptr) {
          goto LABEL_33;
        }
      }
    }
    while (1) {
      v44 = (unsigned __int64)v43[1];
      if (v44 == v19) {
        if (*((unsigned __int16*)v43 + 8) == (_DWORD)v19) {
        LABEL_71:
          v27 = *((unsigned __int16*)v43 + 9);
          goto LABEL_33;
        }
      }
      else {
        if (v44 >= v16) {
          v44 %= v16;
        }
        if (v44 != v20) {
          goto LABEL_70;
        }
      }
      v43 = (__int64**)*v43;
      if (v43 == nullptr) {
        goto LABEL_33;
      }
    }
  }
LABEL_28:
  if (*(_BYTE*)(*v6 + 8) != 0) {
    v26 = game_UnitPool_Get((_BYTE*)(*v6 + 8));
  }
  else {
    v26 = nullptr;
  }
  v27 = VTarget_779940((_DWORD*)(v5 + 8), (__int64)v26);
  v5 = *v3;
LABEL_33:
  *(_DWORD*)(a1 + 272) = v27;
  if ((*(_DWORD*)(a1 + 276) & 0x80000000) != 0) {
  LABEL_34:
    v28 = VTarget_77a2e0(v5 + 8);
    v5 = *v3;
    *(_DWORD*)(a1 + 276) = v28;
  }
LABEL_4:
  v7 = *(int*)(v5 + 36);
  if ((_DWORD)v7 != -1) {
    if (*(_BYTE*)(*v6 + 8) != 0) {
      v8 = game_UnitPool_Get((_BYTE*)(*v6 + 8));
      v5 = *v3;
      v9 = *v6;
      v10 = *(unsigned __int8*)(*v6 + 8);
      v11 = (unsigned __int16*)&v8[*(int*)(*v3 + 36) + 103] + 2;
      if (v10 != 0) {
        v12 = game_UnitPool_Get((_BYTE*)(v9 + 8));
        v5 = *v3;
        v13 = (__int64)v12;
      }
      else {
        v13 = 0;
      }
    }
    else {
      v13 = 0;
      v11 = (unsigned __int16*)(8 * v7 + 828);
    }
    v29 = *(_DWORD*)(a1 + 272);
    if (v29 <= -1) {
      v30 = GameData_212d208;
    }
    else {
      v30 = (void*)(v5 + 12LL * (unsigned int)v29 + 68);
    }
    v31 = *(_DWORD*)(v5 + 48) & 0xFFFLL;
    if ((_DWORD)v31 != 0) {
      v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v31);
    }
    else {
      v33 = *(unsigned __int16*)(v5 + 40);
      if (*(_WORD*)(v5 + 40) == 0) {
        v33 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v34 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v33);
      v35 = *(_QWORD*)(v34 + 192);
      v36 = *(unsigned __int8*)(v34 + 72);
      v37 = v35 == 0 || v36 > 7;
      if (v37 || *(_BYTE*)(v35 + 105) == 0) {
        v32 = 0;
      }
      else if (*(_BYTE*)(v35 + 104) == 2) {
        v32 = 0;
      }
      else {
        v32 = v35;
      }
    }
    GameHr_19f3aa0(a1 + 22920, v13, (__int64)v30, v11, v32);
    v38 = *(_QWORD*)(a1 + 23000);
    v39 = *(_QWORD*)(a1 + 23008);
    v40 = *(_QWORD*)GameData_212d220[0];
    *(_QWORD*)(v40 + 176) = v38;
    *(_QWORD*)(v40 + 184) = v39;
    *(_BYTE*)(v40 + 192) = 0;
    *(_QWORD*)(v40 + 160) = v38;
    *(_QWORD*)(v40 + 168) = v39;
  }
  *(_BYTE*)(a1 + 23272) =
      *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) < 0x11u;
  return GameHr_78e5d0_alt1(a1, a2);
}

__int64 GameHr_78c0d0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825790();
  }
  return result;
}

__int64 GameHr_78e5d0(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  int v12;
  __int64* v13;
  _WORD* v14;
  int v15;
  char* v16;
  __int64* v17;
  __int64* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64* v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  bool v29;
  unsigned int v30;
  __int64 v31;
  _DWORD* v32;
  int v33;
  int v34;
  __int64* v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  bool v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  int v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  int v55;

  v1 = *(_DWORD*)(a1 + 276);
  v3 = GameData_212cff0[0];
  if ((v1 & 0x80000000) != 0 ||
      (v4 = *GameData_212cff0[0],
       *(char*)(*GameData_212cff0[0] + 12LL * v1 + 12413) < 0) ||
      *(char*)(*GameData_212cff0[0] + 12LL * v1 + 12414) < 0) {
    v1 = *(_DWORD*)(a1 + 272);
    if ((v1 & 0x80000000) != 0) {
      goto LABEL_85;
    }
    v4 = *GameData_212cff0[0];
    v5 = 64;
  }
  else {
    v5 = 12408;
  }
  v6 = v4 + v5;
  v7 = v6 + 12LL * v1 + 4;
  if ((*(char*)(v6 + 12LL * v1 + 5) & 0x80000000) == 0 &&
      (*(char*)(v6 + 12LL * v1 + 6) & 0x80000000) == 0) {
    v8 = (_DWORD*)*GameData_212cff0[0];
    v9 = *(unsigned __int8*)(*GameData_212cff0[0] + 32);
    if (v9 == 10) {
      v10 = *(_QWORD*)(a1 + 22912);
      v12 = *(unsigned __int8*)(v7 + 5);
      v11 = (_BYTE*)(v7 + 5);
      if (v12 != 0) {
        v13 = game_UnitPool_Get(v11);
        if (v10 != 0) {
        LABEL_14:
          *(_QWORD*)(v10 + 1072) = v13;
          game_menu_BasicMenu_Unknown16defa0((float*)v10);
          goto LABEL_85;
        }
      }
      else {
        v13 = nullptr;
        if (v10 != 0) {
          goto LABEL_14;
        }
      }
      *(_QWORD*)(a1 + 22912) = GameHr_15c5b40(a1, (__int64)v13);
      goto LABEL_85;
    }
    v55 = 0;
    v14 = (_WORD*)(a1 + 11560);
    v15 = *(_DWORD*)(a1 + 272);
    if (v15 <= -1) {
      v16 = (char*)GameData_212d208;
    }
    else {
      v16 = (char*)&v8[3 * v15 + 17];
    }
    if ((v16[1] & 0x80000000) == 0 && (v16[2] & 0x80000000) == 0) {
      if ((unsigned int)(v9 - 3) < 3) {
        if (*(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) <= 0x10u) {
          v9 = 0;
        }
        else {
          v9 = 0x100000;
        }
        if (*(_QWORD*)(a1 + 22984) - *(_QWORD*)(a1 + 22976) > 8u) {
          v9 |= 0x200000u;
        }
        goto LABEL_30;
      }
      if (v9 == 2) {
      LABEL_30:
        v55 = v9;
        goto LABEL_31;
      }
      v55 = 0;
    }
  LABEL_31:
    if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
      v17 = game_UnitPool_Get((_BYTE*)(GameData_21cd108 + 8));
      v8 = (_DWORD*)*v3;
      v18 = v17;
    }
    else {
      v18 = nullptr;
    }
    v19 = v8[5];
    v20 = v8[6];
    v21 = v8[9];
    if (*(_BYTE*)(a1 + 11561) != 0) {
      GameRoutine_7992e0(a1 + 304);
      GameRoutine_7992e0(a1 + 1064);
      GameRoutine_7992e0(a1 + 1824);
      GameRoutine_7992e0(a1 + 2584);
      *(_DWORD*)(a1 + 11544) = 0;
      *v14 = 0;
      *(_QWORD*)(a1 + 11564) = 0;
      *(_QWORD*)(a1 + 11570) = 0;
      BattleArea_8b9d00(a1 + 11584);
    }
    if (v18 != nullptr) {
      *(_QWORD*)(a1 + 328) = v18;
      *(_DWORD*)(a1 + 376) = v19;
      *(_DWORD*)(a1 + 380) = v20;
      *(_DWORD*)(a1 + 384) = v19;
      *(_DWORD*)(a1 + 388) = v20;
      v22 = *((_DWORD*)v18 + 148);
      *(_DWORD*)(a1 + 344) = v21;
      *(_DWORD*)(a1 + 392) = v22;
    }
    BattleInfo_790b00(a1 + 288, v7);
    if ((*(_DWORD*)(*v3 + 48) & 0xFFF) != 0) {
      v23 = GameData_212c880[0];
      v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(*v3 + 48) & 0xFFF));
    }
    else {
      v25 = *(unsigned __int16*)(*v3 + 40);
      if (*(_WORD*)(*v3 + 40) == 0) {
        v25 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v26 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v25);
      v27 = *(_QWORD*)(v26 + 192);
      v28 = *(unsigned __int8*)(v26 + 72);
      v29 = v27 == 0 || v28 > 7;
      if (v29 || *(_BYTE*)(v27 + 105) == 0) {
        v23 = GameData_212c880[0];
        v24 = 0;
      }
      else {
        v23 = GameData_212c880[0];
        if (*(_BYTE*)(v27 + 104) == 2) {
          v24 = 0;
        }
        else {
          v24 = v27;
        }
      }
    }
    if (*(_BYTE*)(a1 + 11561) != 0) {
      GameRoutine_7992e0(a1 + 304);
      GameRoutine_7992e0(a1 + 1064);
      GameRoutine_7992e0(a1 + 1824);
      GameRoutine_7992e0(a1 + 2584);
      *(_DWORD*)(a1 + 11544) = 0;
      *v14 = 0;
      *(_QWORD*)(a1 + 11564) = 0;
      *(_QWORD*)(a1 + 11570) = 0;
      BattleArea_8b9d00(a1 + 11584);
    }
    game_map_799aa0(a1 + 304, v24);
    v30 = *(_DWORD*)(*v3 + 52);
    if ((v30 & 0x80000000) != 0) {
      v31 = 0;
    }
    else {
      v31 =
          *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) + 144LL * v30;
    }
    v32 = (_DWORD*)(a1 + 22856);
    if (*(_BYTE*)(a1 + 11561) != 0) {
      GameRoutine_7992e0(a1 + 304);
      GameRoutine_7992e0(a1 + 1064);
      GameRoutine_7992e0(a1 + 1824);
      GameRoutine_7992e0(a1 + 2584);
      *(_DWORD*)(a1 + 11544) = 0;
      *v14 = 0;
      *(_QWORD*)(a1 + 11564) = 0;
      *(_QWORD*)(a1 + 11570) = 0;
      BattleArea_8b9d00(a1 + 11584);
    }
    game_map_799b90(a1 + 304, v31);
    v33 = VTarget_77a640(*v3 + 8);
    v34 = *(_DWORD*)(a1 + 11564);
    *(_DWORD*)(a1 + 11572) = v33;
    *(_DWORD*)(a1 + 11564) = v55 | v34 | 1;
    game_map_790ba0(a1 + 288);
    *(_BYTE*)(a1 + 11561) |= 1u;
    if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
      v35 = game_UnitPool_Get((_BYTE*)(GameData_21cd108 + 8));
    }
    else {
      v35 = nullptr;
    }
    v36 = *(_DWORD*)(*v3 + 20);
    v37 = *(_DWORD*)(*v3 + 24);
    v38 = *(_DWORD*)(*v3 + 36);
    if (*(_BYTE*)(a1 + 22873) != 0) {
      GameRoutine_7992e0(a1 + 11616);
      GameRoutine_7992e0(a1 + 12376);
      GameRoutine_7992e0(a1 + 13136);
      GameRoutine_7992e0(a1 + 13896);
      *v32 = 0;
      *(_WORD*)(a1 + 22872) = 0;
      *(_QWORD*)(a1 + 22876) = 0;
      *(_QWORD*)(a1 + 22882) = 0;
      BattleArea_8b9d00(a1 + 22896);
    }
    if (v35 != nullptr) {
      *(_QWORD*)(a1 + 11640) = v35;
      *(_DWORD*)(a1 + 11688) = v36;
      *(_DWORD*)(a1 + 11692) = v37;
      *(_DWORD*)(a1 + 11696) = v36;
      *(_DWORD*)(a1 + 11700) = v37;
      v39 = *((_DWORD*)v35 + 148);
      *(_DWORD*)(a1 + 11656) = v38;
      *(_DWORD*)(a1 + 11704) = v39;
    }
    BattleInfo_790b00(a1 + 11600, v7);
    if ((*(_DWORD*)(*v3 + 48) & 0xFFF) != 0) {
      v40 = *(_QWORD*)(*(_QWORD*)(*v23 + 64) +
                       8LL * (*(_DWORD*)(*v3 + 48) & 0xFFF));
    }
    else {
      v41 = *(unsigned __int16*)(*v3 + 40);
      if (*(_WORD*)(*v3 + 40) == 0) {
        v41 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v42 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v41);
      v43 = *(_QWORD*)(v42 + 192);
      v44 = *(unsigned __int8*)(v42 + 72);
      v45 = v43 == 0 || v44 > 7;
      if (v45 || *(_BYTE*)(v43 + 105) == 0) {
        v40 = 0;
      }
      else if (*(_BYTE*)(v43 + 104) == 2) {
        v40 = 0;
      }
      else {
        v40 = v43;
      }
    }
    if (*(_BYTE*)(a1 + 22873) != 0) {
      GameRoutine_7992e0(a1 + 11616);
      GameRoutine_7992e0(a1 + 12376);
      GameRoutine_7992e0(a1 + 13136);
      GameRoutine_7992e0(a1 + 13896);
      *v32 = 0;
      *(_WORD*)(a1 + 22872) = 0;
      *(_QWORD*)(a1 + 22876) = 0;
      *(_QWORD*)(a1 + 22882) = 0;
      BattleArea_8b9d00(a1 + 22896);
    }
    game_map_799aa0(a1 + 11616, v40);
    v46 = *(_DWORD*)(*v3 + 52);
    if ((v46 & 0x80000000) != 0) {
      v47 = 0;
      if (*(_BYTE*)(a1 + 22873) == 0) {
      LABEL_83:
        game_map_799b90(a1 + 11616, v47);
        v48 = VTarget_77a640(*v3 + 8);
        v49 = *(_DWORD*)(a1 + 22876);
        *(_DWORD*)(a1 + 22884) = v48;
        *(_DWORD*)(a1 + 22876) = v55 | 0x31 | v49;
        game_map_790ba0(a1 + 11600);
        *(_BYTE*)(a1 + 22873) |= 1u;
        if (GameData_21cd120 != 0) {
          GameHr_f09ad0(GameData_21cd120, a1 + 288, 1);
        }
        goto LABEL_85;
      }
    }
    else {
      v47 =
          *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) + 144LL * v46;
      if (*(_BYTE*)(a1 + 22873) == 0) {
        goto LABEL_83;
      }
    }
    GameRoutine_7992e0(a1 + 11616);
    GameRoutine_7992e0(a1 + 12376);
    GameRoutine_7992e0(a1 + 13136);
    GameRoutine_7992e0(a1 + 13896);
    *v32 = 0;
    *(_WORD*)(a1 + 22872) = 0;
    *(_QWORD*)(a1 + 22876) = 0;
    *(_QWORD*)(a1 + 22882) = 0;
    BattleArea_8b9d00(a1 + 22896);
    goto LABEL_83;
  }
LABEL_85:
  v50 = *(_DWORD*)(a1 + 276);
  if ((v50 & 0x80000000) != 0 ||
      (v51 = *v3, *(char*)(*v3 + 12LL * v50 + 12413) < 0) ||
      *(char*)(*v3 + 12LL * v50 + 12414) < 0) {
    v50 = *(_DWORD*)(a1 + 272);
    if ((v50 & 0x80000000) != 0) {
      v53 = &GameData_1b47d78;
      return game_map_78d280(a1, v53);
    }
    v51 = *v3;
    v52 = 64;
  }
  else {
    v52 = 12408;
  }
  v53 = (_BYTE*)(v51 + v52 + 12LL * v50 + 4);
  return game_map_78d280(a1, v53);
}

#pragma GCC visibility pop
