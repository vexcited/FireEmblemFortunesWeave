#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80e6f0(_QWORD, _QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 MapInfo_825790(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f95ba8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 (*game_map_BattleTarget_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqMind_vtable[])();
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd130;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfd0[8];
extern __int64* game_g_empty_item_ptr;
__int64 ProcMapSeqMind_Destructor(__int64 a1);
__int64 ProcMapSeqMind_Unknown18();
__int64 ProcMapSeqMind_Unknown5();
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_122e9c0(_QWORD);
__int64 GameRoutine_122f000(_QWORD);
__int64 GameRoutine_6c6da0(__int64);
__int64 Image_72a260(_QWORD);
__int64 Image_72b080(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 SendUnitItemMenu_8af640(__int64, __int64, __int64, __int64, __int64);
__int64 Trick_7d5160(__int64, char);
__int64 UnitItemList_70f9f0(unsigned __int16*, unsigned __int8);
__int64 Unit_6cd120(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cef00(_QWORD, _QWORD);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_9903e0(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_UnitPool_Get(_QWORD, long double);
__int64 game_Unit_RemoveItem(__int64, unsigned int);
bool GameRoutine_7ca050(__int64, int, int, unsigned __int8);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f95a78[])();
extern __int64 (*GameData_1fb24f8[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cec0;
extern __int64* GameData_212cfb8[11];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_21c9b80;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd140;
extern __int64 GameData_21ed0a0;
extern __int64 GameData_22400f8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void game_6e8720(__int64, __int64);
__int64 ProcMapSeqMind_760d00(long double a1);
__int64 ProcMapSeqMind_7610e0(__int64 result);
void ProcMapSeqMind_761760();

__int64 ProcMapSeqMind_760d00(long double a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  _QWORD v31[7];
  _QWORD v32[4];
  _QWORD* v33;

  if (*(_BYTE*)(GameData_21cd108 + 8) == 0) {
    goto LABEL_40;
  }
  v1 = game_UnitPool_Get(GameData_21cd108 + 8, a1);
  if (v1 == 0 || *(_QWORD*)(v1 + 392) == 0) {
    goto LABEL_40;
  }
  if ((*(_BYTE*)(v1 + 416) & 1) == 0) {
    v8 = GameData_21ca300;
    v9 = *(_QWORD*)(GameData_21ca300 + 96);
    Image_72b4a0(v9);
    Image_72b6c0(v9);
    Image_72a260(*(_QWORD*)(v8 + 152));
    goto LABEL_40;
  }
  v31[0] = v1;
  memset(&v31[1], 0, 48);
  v10 = v1;
  v11 = GameData_212ce90[0];
  if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
    GameRoutine_122e9c0(v31);
  }
  if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
    v12 = game_UnitPool_Get(GameData_21cd108 + 8, v7);
    if (v12 != 0) {
      v13 = v12;
      if (*(_QWORD*)(v12 + 392) != 0) {
        v14 = v32;
        v32[0] = GameData_1f95a78;
        v32[1] = v13;
        v15 = *(_BYTE*)(v13 + 1830);
        v33 = v32;
        if ((v15 & 0x20) == 0) {
          goto LABEL_21;
        }
        v16 = *(_QWORD*)(v13 + 1784);
        v17 = *(_QWORD*)(v13 + 1776);
        if ((int)((unsigned __int64)(v16 - v17) >> 2) < 1) {
          goto LABEL_21;
        }
        v18 = 0;
        v19 = 0;
        v20 = GameData_212c880[0];
        v21 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                   8LL * (*(_DWORD*)(v17 + v18) & 0xFFF)) +
                        115LL) == 21) {
            if (v33 == nullptr) {
              GameRoutine_60a310(0);
            }
            (*(void (**)(_QWORD*, __int64))(*v33 + 48LL))(v33, v17 + v18);
            v21 = *v20;
            v16 = *(_QWORD*)(v13 + 1784);
            v17 = *(_QWORD*)(v13 + 1776);
          }
          ++v19;
          v18 += 4;
        } while (v19 < (int)((unsigned __int64)(v16 - v17) >> 2));
        v14 = v33;
        if (v33 == v32) {
        LABEL_21:
          v22 = 32;
          goto LABEL_22;
        }
        if (v33 != nullptr) {
          v22 = 40;
        LABEL_22:
          (*(void (**)(__int64))(*v14 + v22))((__int64)v14);
        }
      }
    }
  }
  Image_72b080(GameData_21ca300, v2, v3, v4, v5, v6);
  if ((*(_BYTE*)(*v11 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    v32[0] = GameData_1fb24f8;
    v33 = v32;
    game_9903e0(v32);
    if (v33 == v32) {
      v23 = 32;
    }
    else {
      if (v33 == nullptr) {
        goto LABEL_30;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*v33 + v23))((__int64)v33);
  }
LABEL_30:
  v24 = game_g_shared_system_skills_ptr;
  LODWORD(v32[0]) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                               game_g_shared_system_skills_ptr + 4) &
                    0xFFF;
  v25 = game_HasSkill(v10 + 1744, v32);
  v26 = v10;
  if ((v25 & 1) != 0) {
    v27 = *(_DWORD*)(v10 + 416);
    if ((v27 & 1) != 0) {
      *(_DWORD*)(v10 + 416) = v27 & 0xFFFFFFFE;
      if (*(_WORD*)(v10 + 1964) != 0) {
        v28 = *GameData_212cec0;
        if (*(_QWORD*)(v10 + 1960) != *GameData_212cec0) {
          *(_QWORD*)(v10 + 1960) = v28;
          LODWORD(v32[0]) =
              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) + v24) & 0xFFF;
          Unit_6cd120(v10, (v28 & 0xFFFF00000000LL) != 0, v32);
          v26 = v10;
        }
      }
      *(_WORD*)(v26 + 20) |= 4u;
    }
  }
  LOWORD(v32[0]) = 256;
  Unit_6cef00(v26, v32);
  if (GameData_21ed0a0 != 0 && *(int*)(GameData_21ed0a0 + 16) <= 0) {
    *(_BYTE*)(GameData_21ed0a0 + 426) = 1;
  }
  *(_QWORD*)(GameData_21cd108 + 12672) |= 2uLL;
  GameRoutine_122f000(v31);
LABEL_40:
  v29 = *(_QWORD*)(GameData_21cd140 + 432);
  LODWORD(v31[0]) = 1065353216;
  if (*(_BYTE*)(v29 + 160) == 1) {
    result =
        (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(v29 + 136) + 24LL))(
            v29 + 136, 0x1.0000000000000p+0, 0x1.0000000000000p+0);
    *(_DWORD*)(v29 + 144) = 0;
  LABEL_45:
    *(_DWORD*)(v29 + 148) = 0;
    *(_WORD*)(v29 + 160) = 256;
    return result;
  }
  if (*(float*)(v29 + 144) > 0x1.8000000000000p-1 ||
      ((result = (*(__int64 (**)(__int64, _QWORD*, __int64))(
            *(_QWORD*)(v29 + 136) + 8LL))(v29 + 136, v31, v29 + 168)) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v29 + 136) + 16LL))(v29 + 136);
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(v29 + 136) + 24LL))(v29 + 136);
    *(_DWORD*)(v29 + 144) = 1061158912;
    goto LABEL_45;
  }
  return result;
}

__int64 ProcMapSeqMind_7610e0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  _BYTE* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v25;

  v1 = GameData_212cfd0[0];
  v2 = *GameData_212cfd0[0];
  if ((*(_BYTE*)(*GameData_212cfd0[0] + 12674) & 2) == 0) {
    v4 = *(unsigned __int8*)(v2 + 8);
    v3 = (_BYTE*)(v2 + 8);
    if (v4 != 0) {
      v5 = result;
      result = (__int64)game_UnitPool_Get_alt1(v3);
      if (result != 0 && *(_QWORD*)(result + 392) != 0) {
        v6 = *(_QWORD*)(result + 440);
        if (v6 != 0 && *(unsigned __int8*)(v6 + 16) <= 3u &&
            (*(_BYTE*)(*v1 + 12672) & 2) != 0) {
          v7 = result;
          v8 = game_g_shared_system_skills_ptr;
          v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
          result =
              game_HasSkill_alt1((_QWORD*)(result + 1744), (unsigned int*)&v25);
          if ((result & 1) == 0) {
            v9 = v7;
            v10 = *(_WORD*)(v7 + 492) == 0 && *(_BYTE*)(v7 + 496) == 0;
            if (!v10 ||
                (v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8) & 0xFFF,
                 result = game_HasSkill_alt1((_QWORD*)(v7 + 1744),
                                             (unsigned int*)&v25),
                 v9 = v7, (result & 1) == 0)) {
              if (*(int*)(v9 + 592) <= 1) {
                v11 = *(char*)(v9 + 584);
                v12 = *(char*)(v9 + 585);
                v13 = GameData_212cfb8[0];
                v14 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
                v15 = v11 + 32 * v12;
                if (v15 >= 0x400) {
                  v15 = 0;
                }
                v16 = *(__int16*)(v14 + 2LL * v15 + 8296);
                if ((v16 & 0x8000000000000000LL) == 0) {
                  v17 = *(_QWORD*)(v14 + 8);
                  if (v17 != 0) {
                    result = (*(__int64 (**)(__int64, __int64))(
                        *(_QWORD*)(v17 + 144LL * (int)v16) + 200LL))(
                        v17 + 144LL * (int)v16, v7);
                    if (result != 0) {
                      v18 = v7;
                      v19 = v5;
                      v20 = v18;
                      game_6e8720((__int64)&v25, result);
                      result = SendUnitItemMenu_8af640(
                          v19, (__int64)&v25, v20,
                          (__int64)game_vstring_kEmpty_ptr[0],
                          (__int64)game_vstring_kEmpty_ptr[0]);
                      if (result != 0) {
                        GameRoutine_7ca050(*v13, v11, v12, 4u);
                        result = Trick_7d5160(*(_QWORD*)(*v13 + 16), 1);
                        *(_QWORD*)(*v1 + 12672) |= 0x20000uLL;
                        if (GameData_22400f8 != 0 &&
                            *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
                            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
                          *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
                        }
                      }
                    }
                  }
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

void ProcMapSeqMind_761760()
{
  __int64* v0;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int16* v11;
  __int64 v12;
  __int64* v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  _BYTE* v21;
  char v22;
  char v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int16* v28;
  __int64 v29;
  __int64* v30;
  int v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  __int64 v35;
  int v36;
  int v37;
  _BYTE* v38;
  char v39;
  char v40;
  char v41;
  char v42;
  int v43;
  char v44;
  char v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  int v54;
  int v55;

  v0 = GameData_212cfd0[0];
  v1 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v2 = *(char*)(*GameData_212cfd0[0] + 313) +
       32 * *(char*)(*GameData_212cfd0[0] + 314);
  if (v2 >= 0x400) {
    v3 = 0;
  }
  else {
    v3 = v2;
  }
  v4 = *(__int16*)(v1 + 2LL * (unsigned int)v3 + 4200);
  v5 = *(_QWORD*)(v1 + 8);
  if ((v4 < 0 || v5 == 0) &&
      ((v4 = *(__int16*)(v1 + 2 * v3 + 2152)) < 0 || v5 == 0)) {
    v24 = *(__int16*)(v1 + 104 + 2 * v3);
    if (v24 < 0) {
      return;
    }
    v6 = v5 + 144LL * (unsigned int)v24;
    if (v6 == 0) {
      return;
    }
  }
  else {
    v6 = v5 + 144LL * (unsigned int)v4;
    if (v6 == 0) {
      return;
    }
  }
  v7 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
  if (v7 != 5) {
    if (v7 != 4) {
      return;
    }
    if (*(_BYTE*)(*v0 + 8) == 0) {
      return;
    }
    v8 = game_UnitPool_Get_alt1((_BYTE*)(*v0 + 8));
    if (v8 == nullptr) {
      return;
    }
    v9 = (__int64)v8;
    if (v8[49] == 0) {
      return;
    }
    v54 = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill_alt1(v8 + 218, (unsigned int*)&v54) & 1) != 0) {
      return;
    }
    v10 = UnitItemList_70f9f0((unsigned __int16*)(v9 + 828), 0xBu);
    if ((v10 & 0x80000000) != 0) {
      return;
    }
    v11 = (unsigned __int16*)(v9 + 828 + 8LL * v10);
    v12 = *v11;
    v13 = GameData_212c878[0];
    v14 = *((_DWORD*)v11 + 1) & 0xF;
    v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v12);
    v16 = v14 * *(unsigned __int8*)(v15 + 87);
    if (v16 != 0) {
      v17 = *((unsigned __int8*)v11 + 2);
      if (v16 > v17) {
        LOBYTE(v17) = v17 + 1;
        *((_BYTE*)v11 + 2) = v17;
        v18 = *(_QWORD*)(*(_QWORD*)(*v13 + 64) + 8 * v12);
        v19 = *(unsigned __int8*)(v18 + 87);
        if (*(_BYTE*)(v18 + 87) != 0 &&
            (unsigned int)(v20 = *(unsigned __int8*)(v18 + 72)) < 8) {
          v21 = (char*)v11 + 3;
          if ((unsigned int)(v20 - 7) <= 0xFFFFFFFD) {
            v17 = (unsigned __int8)v17;
            if (v14 * v19 <= (unsigned int)(unsigned __int8)v17) {
              v22 = 8;
            }
            else {
              v22 = 0;
            }
            v23 = *v21 & 0xF7 | v22;
          LABEL_65:
            *v21 = v23;
            if (v16 != v17) {
              goto LABEL_44;
            }
            goto LABEL_43;
          }
        }
        else {
          v21 = (char*)v11 + 3;
        }
        v17 = (unsigned __int8)v17;
        v23 = *v21 & 0xF7;
        goto LABEL_65;
      }
    }
    else if (*(_BYTE*)(v15 + 72) == 14) {
    LABEL_43:
      game_Unit_RemoveItem(v9, v10);
    }
  LABEL_44:
    v41 = game_UnitItemList_Sort(v9 + 828, 0, 6);
    v42 = game_UnitItemList_Sort(v9 + 828, 6u, 24);
    if ((v41 & 1) != 0 || (v42 & 1) != 0) {
      v43 = *(_DWORD*)(v9 + 416);
      if ((v43 & 0x10000000) == 0) {
        *(_DWORD*)(v9 + 416) = v43 | 0x10000000;
        game_6c51e0(v9);
        GameRoutine_6c6da0(v9);
        game_6c6ec0(v9);
        *(_DWORD*)(v9 + 416) &= ~0x10000000u;
      }
    }
    return;
  }
  if (*(_BYTE*)(*v0 + 8) != 0) {
    v25 = game_UnitPool_Get_alt1((_BYTE*)(*v0 + 8));
    if (v25 != nullptr) {
      v26 = (__int64)v25;
      if (v25[49] != 0) {
        v55 = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                         game_g_shared_system_skills_ptr) &
              0xFFF;
        if ((game_HasSkill_alt1(v25 + 218, (unsigned int*)&v55) & 1) == 0) {
          v27 = UnitItemList_70f9f0((unsigned __int16*)(v26 + 828), 0xCu);
          if ((v27 & 0x80000000) == 0) {
            v28 = (unsigned __int16*)(v26 + 828 + 8LL * v27);
            v29 = *v28;
            v30 = GameData_212c878[0];
            v31 = *((_DWORD*)v28 + 1) & 0xF;
            v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v29);
            v33 = v31 * *(unsigned __int8*)(v32 + 87);
            if (v33 == 0) {
              if (*(_BYTE*)(v32 + 72) != 14) {
                goto LABEL_50;
              }
              goto LABEL_49;
            }
            v34 = *((unsigned __int8*)v28 + 2);
            if (v33 <= v34) {
              goto LABEL_50;
            }
            LOBYTE(v34) = v34 + 1;
            *((_BYTE*)v28 + 2) = v34;
            v35 = *(_QWORD*)(*(_QWORD*)(*v30 + 64) + 8 * v29);
            v36 = *(unsigned __int8*)(v35 + 87);
            if (*(_BYTE*)(v35 + 87) != 0 &&
                (unsigned int)(v37 = *(unsigned __int8*)(v35 + 72)) < 8) {
              v38 = (char*)v28 + 3;
              if ((unsigned int)(v37 - 7) <= 0xFFFFFFFD) {
                v34 = (unsigned __int8)v34;
                if (v31 * v36 <= (unsigned int)(unsigned __int8)v34) {
                  v39 = 8;
                }
                else {
                  v39 = 0;
                }
                v40 = *v38 & 0xF7 | v39;
              LABEL_69:
                *v38 = v40;
                if (v33 != v34) {
                LABEL_50:
                  v44 = game_UnitItemList_Sort(v26 + 828, 0, 6);
                  v45 = game_UnitItemList_Sort(v26 + 828, 6u, 24);
                  if ((v44 & 1) != 0 || (v45 & 1) != 0) {
                    v46 = *(_DWORD*)(v26 + 416);
                    if ((v46 & 0x10000000) == 0) {
                      *(_DWORD*)(v26 + 416) = v46 | 0x10000000;
                      game_6c51e0(v26);
                      GameRoutine_6c6da0(v26);
                      game_6c6ec0(v26);
                      *(_DWORD*)(v26 + 416) &= ~0x10000000u;
                    }
                  }
                  goto LABEL_54;
                }
              LABEL_49:
                game_Unit_RemoveItem(v26, v27);
                goto LABEL_50;
              }
            }
            else {
              v38 = (char*)v28 + 3;
            }
            v34 = (unsigned __int8)v34;
            v40 = *v38 & 0xF7;
            goto LABEL_69;
          }
        }
      }
    }
  }
LABEL_54:
  v47 = *GameData_212ce98[0];
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
  v49 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
  if (GameData_21c9b80 == 0) {
    return;
  }
  v50 = *(unsigned __int8*)(GameData_21c9b80 + 56);
  if (v50 == 2) {
    v51 = 40;
  }
  else {
    if (v50 != 1) {
      return;
    }
    v51 = 32;
  }
  v52 = *(_QWORD*)(v47 + v51);
  v53 = v48 + 32 * v49;
  if (v53 >= 0x400) {
    v53 = 0;
  }
  *(_WORD*)(v52 + 2LL * v53 + 8) = *(_WORD*)(GameData_21c9b80 + 16);
}

__int64 ProcMapSeqMind_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqMind_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f95ba8;
  v2 = GameData_21cd130;
  v3 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
  *(_DWORD*)(GameData_21cd130 + 40) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
  }
  if (*(_BYTE*)(a1 + 23881) == 1 && GameData_21cd128 != 0) {
    MapInfo_825790();
  }
  *(_QWORD*)(a1 + 12568) = game_map_BattleInfo_vtable;
  v4 = *(_QWORD*)(a1 + 23872);
  *(_QWORD*)(a1 + 23864) = game_map_BattleArea_vtable;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    *(_QWORD*)(a1 + 23872) = 0;
  }
  *(_QWORD*)(a1 + 12576) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 14864);
  BattleSide_Destructor(a1 + 14104);
  BattleSide_Destructor(a1 + 13344);
  BattleSide_Destructor(a1 + 12584);
  v5 = *(_QWORD**)(a1 + 12536);
  *(_QWORD*)(a1 + 160) = game_map_BattleTarget_vtable;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != nullptr) {
    do {
      v7 = (_QWORD*)*v5;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
      v5 = v7;
    } while (v7 != nullptr);
  }
  v9 = *(_QWORD*)(a1 + 12520);
  *(_QWORD*)(a1 + 12520) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqMind_Unknown18()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;

  v0 = *(unsigned __int16*)(*GameData_212cfd0[0] + 44);
  if (*(_WORD*)(*GameData_212cfd0[0] + 44) == 0) {
    v0 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  if ((*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF));
  }
  else {
    v1 = 0;
  }
  v2 = GameRoutine_80e6f0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v0), v1);
  return GameRoutine_80e800(v2);
}

__int64 ProcMapSeqMind_Unknown5()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;

  v0 = *(unsigned __int16*)(*GameData_212cfd0[0] + 44);
  if (*(_WORD*)(*GameData_212cfd0[0] + 44) == 0) {
    v0 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  if ((*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF));
  }
  else {
    v1 = 0;
  }
  v2 = GameRoutine_80e6f0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v0), v1);
  return GameRoutine_80e800(v2);
}

#pragma GCC visibility pop
