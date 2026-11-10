#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_74d660(__int64, int, char, char);
__int64 GameRoutine_40();
__int64 GameRoutine_68e930(_QWORD, _QWORD);
__int64 GameRoutine_6c9c00(_QWORD, _QWORD);
__int64 GameRoutine_747a00(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_7480e0(__int64, int, int, int*, __int64, __int64);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_755860(__int64 result);
__int64 GameRoutine_755a10(__int64 result);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 MapUtil_753390_alt1(_QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("MapUtil_753390");
__int64 MapUtil_754760_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD) __asm__("MapUtil_754760");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_7536a0(_BOOL8 result);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d000[2];
extern char game_script_map_event_g_active_unit;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 MapUtil_753260(__int64 a1, unsigned int a2, unsigned int a3,
                       __int64 a4);
__int64 MapUtil_753390(__int64 a1, unsigned int a2, int a3, __int64 a4);
__int64 MapUtil_753570(int a1, int a2);
__int64 MapUtil_753920(__int64 result, unsigned __int16* a2, __int64 a3);
__int64 MapUtil_753bb0(__int64 result);
bool MapUtil_753ce0(__int64 a1, unsigned int a2, unsigned int a3, char a4);
bool MapUtil_7545a0(unsigned int* a1, unsigned int* a2, unsigned int a3,
                    __int64 a4, unsigned int a5, unsigned int a6, __int64 a7);
bool MapUtil_754760(unsigned int* a1, unsigned int* a2, unsigned __int8 a3,
                    __int64 a4, __int64 a5, __int64 a6, __int64 a7, int a8);
__int64 MapUtil_755bb0(int a1, int a2);
__int64 MapUtil_755d60(int a1, int a2, unsigned __int8 a3);
__int64 MapUtil_756080(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                       _BYTE* a5);
__int64 MapUtil_756c20(__int64 a1, __int64 a2);
__int64 MapUtil_756d50(int a1, __int64 a2, __int64 a3, __int64 a4);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_map_MapUtil_CanEnter(__int64, __int64, char, char, char*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212cf50;
void __attribute__((noreturn)) GameRoutine_75baa0(void);
__int64 MapUtil_756480(__int64 a1);

__int64 MapUtil_753260(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5;
  __int64 v8;
  char* v9;
  char* v10;
  char v11;
  __int64 v12;
  int v14;
  char* v15;
  char* v16;
  __int64 v17;

  if (a1 == 0) {
    return a1 & 1;
  }
  v5 = *(unsigned __int8*)(a1 + 417);
  v8 = a1;
  if (v5 >= 2) {
    v14 = 0;
    v15 = nullptr;
    v16 = nullptr;
    v17 = 0;
    GameRoutine_74d660((__int64)&v14, v5, 0, 0);
    v9 = v15;
    v10 = v16;
    if (v15 != v16) {
      do {
        LOBYTE(a1) = MapUtil_753390_alt1(v8, a2 + *v9, a3 + v9[1], a4);
        if ((a1 & 1) == 0) {
          break;
        }
        v9 += 4;
      } while (v9 != v10);
      v9 = v15;
      if (v15 == nullptr) {
        return a1 & 1;
      }
      goto LABEL_7;
    }
    LOBYTE(a1) = 1;
    if (v15 != nullptr) {
    LABEL_7:
      v16 = v9;
      v11 = a1;
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v9);
      LOBYTE(a1) = v11;
    }
    return a1 & 1;
  }
  return MapUtil_753390_alt1(a1, a2, a3, a4);
}

__int64 MapUtil_753390(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  char v20;
  char v21;
  __int64 v22;

  v4 = 0;
  v5 = *GameData_212ce98[0];
  if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
          (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         24)) &&
      *(unsigned __int8*)(v5 + 27) >
          (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(v5 + 25))) {
    v6 = a2 + 32 * a3;
    if ((unsigned int)v6 >= 0x400) {
      v7 = 0;
    }
    else {
      v7 = (unsigned int)v6;
    }
    v8 = GameData_212c930;
    v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                    8LL * *(unsigned __int16*)(*(_QWORD*)(v5 + 72) +
                                               2LL * (unsigned int)v7 + 8));
    if ((*(unsigned __int8*)(v9 + 62) | *(unsigned __int8*)(v9 + 63)) != 0) {
      return 0;
    }
    v10 = *(_QWORD*)(v9 + 48);
    if (*(unsigned __int8*)(v10 + 40) == 255 ||
        (*(_BYTE*)(v9 + 216) & 0x40) != 0 ||
        *(unsigned __int8*)(v10 + *(unsigned __int8*)(a1 + 48) + 32) == 255) {
      return 0;
    }
    v11 = *(unsigned __int8*)(*(_QWORD*)(v5 + 96) + v7 + 8);
    if (v11 != 0) {
      v12 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v11;
      v13 = v11 > 0xFA || v12 == 2224;
      if (!v13 && *(_QWORD*)(v12 - 1832) != 0) {
        return 0;
      }
    }
    v14 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    v15 = *(__int16*)(v14 + 2 * v7 + 12392);
    if (v15 < 0) {
      goto LABEL_21;
    }
    v16 = *(_QWORD*)(v14 + 8);
    if (v16 == 0) {
      goto LABEL_21;
    }
    v17 = a4;
    v18 = a2;
    v19 = v16 + 144LL * (unsigned int)v15;
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    LOBYTE(a2) = v18;
    a4 = v17;
    if ((v20 & 1) == 0 ||
        (v21 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v19 + 168LL))(v19,
                                                                         v18),
         LOBYTE(a2) = v18, a4 = v17, v21 == 9) ||
        (v22 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v19 + 224LL))(v19,
                                                                         v18),
         LOBYTE(a2) = v18, a4 = v17, v22 == 0)) {
    LABEL_21:
      v22 = **(_QWORD**)(*v8 + 64);
    }
    return *(_BYTE*)(v22 + 57) != 14 &&
           (a4 == 0 || ((*(_DWORD*)(a4 + 4LL * (v6 >> 5)) >> a2) & 1) == 0);
  }
  return v4;
}

__int64 MapUtil_753570(int a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (GameData_21ca300 == 0) {
    return 1;
  }
  result = 0;
  if (*(unsigned __int8*)(GameData_21ca300 + 26) >
          (unsigned int)(unsigned __int8)(a1 -
                                          *(_BYTE*)(GameData_21ca300 + 24)) &&
      *(unsigned __int8*)(GameData_21ca300 + 27) >
          (unsigned int)(unsigned __int8)(a2 -
                                          *(_BYTE*)(GameData_21ca300 + 25))) {
    LODWORD(v4) = a1 + 32 * a2;
    if ((unsigned int)v4 >= 0x400) {
      v4 = 0;
    }
    else {
      v4 = (unsigned int)v4;
    }
    v5 = GameData_212c930;
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                              8LL *
                                  *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                                  72) +
                                                       2LL * (unsigned int)v4 +
                                                       8)) +
                   216LL) &
         8) == 0) {
      v6 = *(_QWORD*)(GameData_21cd158 + 16);
      v7 = *(__int16*)(v6 + 2 * v4 + 104);
      if (v7 < 0 || (v8 = *(_QWORD*)(v6 + 8)) == 0 ||
          (v9 = v8 + 144LL * (unsigned int)v7,
           (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9) != 2) ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9) & 1) == 0 ||
          (v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 224LL))(v9)) == 0) {
        v10 = **(_QWORD**)(*v5 + 64);
      }
      if ((*(_BYTE*)(v10 + 216) & 8) == 0) {
        return 1;
      }
    }
    return 0;
  }
  return result;
}

__int64 MapUtil_753920(__int64 result, unsigned __int16* a2, __int64 a3)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[4];
  int v23;

  if (result != 0) {
    v5 = result;
    if (GameRoutine_7536a0(a3)) {
      result = 0;
      v6 = GameData_212c878[0];
      v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
      v8 = *(unsigned __int8*)(v7 + 73);
      if (v8 > 0xA) {
        return result;
      }
      if (((1 << v8) & 0x754) != 0) {
        if (a3 == 0) {
          return 0;
        }
        v9 = *(_QWORD*)(a3 + 440);
        if (v9 != 0) {
          v10 = *(unsigned __int8*)(v9 + 16);
        }
        else {
          v10 = 9;
        }
        v13 = *(unsigned __int8*)(*(_QWORD*)(v5 + 440) + 16LL);
        if (v13 != v10) {
          if (*(_BYTE*)(*(_QWORD*)(v5 + 440) + 16LL) != 0) {
            result = 0;
            if (v10 != 0 || v13 != 3) {
              return result;
            }
          }
          else if (v10 != 3) {
            return 0;
          }
        }
      }
      else {
        if (((1 << v8) & 0x82) == 0) {
          return result;
        }
        if (a3 != 0) {
          v11 = *(_QWORD*)(a3 + 440);
          if (v11 != 0) {
            v12 = *(unsigned __int8*)(v11 + 16);
          }
          else {
            v12 = 9;
          }
          v14 = *(unsigned __int8*)(*(_QWORD*)(v5 + 440) + 16LL);
          if (v14 == v12) {
            return 0;
          }
          if (*(_BYTE*)(*(_QWORD*)(v5 + 440) + 16LL) != 0) {
            if (v12 == 0 && v14 == 3) {
              return 0;
            }
          }
          else if (v12 == 3) {
            return 0;
          }
        }
      }
      result = 0;
      if (*(unsigned __int8*)(v7 + 73) > 5u) {
        if (v8 - 6 < 2) {
          if ((GameRoutine_6c9c00(a3, *(_QWORD*)(v7 + 24) + 296LL) & 1) != 0) {
            return 1;
          }
          v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * *a2) + 24LL);
          v20 = *(_QWORD*)(v19 + 424);
          v21 = *(_QWORD*)(v19 + 432);
          if (v20 != v21) {
            while ((game_HasSkill(a3 + 1360, v20) & 1) == 0) {
              v20 += 4;
              result = 0;
              if (v20 == v21) {
                return result;
              }
            }
            return 1;
          }
        }
        else if (v8 - 8 >= 2) {
          if (v5 == a3) {
            return 1;
          }
        }
        else if ((*(_BYTE*)(a3 + 416) & 4) != 0 ||
                 (v23 = *(_DWORD*)((_BYTE*)GameRoutine_40 +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF,
                  (game_HasSkill(a3 + 1744, &v23) & 1) != 0) ||
                 *(int*)(a3 + 592) <= 1) {
          LODWORD(v15) = *(char*)(a3 + 584) + 32 * *(char*)(a3 + 585);
          v15 = (unsigned int)v15 >= 0x400 ? 0LL : (unsigned int)v15;
          v16 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          if (*(__int16*)(v16 + 2LL * (unsigned int)v15 + 14440) < 0 &&
              *(__int16*)(v16 + 2 * v15 + 12392) < 0) {
            return 1;
          }
        }
      }
      else {
        switch (v8) {
        case 1u:
          return 1;
        case 2u:
          v17 = *(__int16*)(a3 + 492);
          v22[0] = 0;
          v18 = game_Unit_GetParam(a3, v22, 1);
          result = 1;
          if (v18 > v17) {
            return result;
          }
          break;
        case 4u:
          if ((*(_WORD*)(a3 + 1440) & 0x80) != 0) {
            return 1;
          }
          break;
        default:
          return result;
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 MapUtil_753bb0(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (result != 0) {
    v1 = result;
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 56LL))(result);
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
    if (GameData_21ca300 == 0) {
      return 1;
    }
    v4 = v3;
    result = 0;
    if (*(unsigned __int8*)(GameData_21ca300 + 26) >
            (unsigned int)(unsigned __int8)(v2 -
                                            *(_BYTE*)(GameData_21ca300 + 24)) &&
        *(unsigned __int8*)(GameData_21ca300 + 27) >
            (unsigned int)(unsigned __int8)(v4 -
                                            *(_BYTE*)(GameData_21ca300 + 25))) {
      v5 = v2 + 32 * v4;
      if (v5 >= 0x400) {
        v5 = 0;
      }
      v6 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
      v7 = *(__int16*)(v6 + 2LL * v5 + 104);
      if (v7 < 0 || (v8 = *(_QWORD*)(v6 + 8)) == 0 ||
          (v9 = v8 + 144LL * (unsigned int)v7,
           (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9) != 2) ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9) & 1) == 0 ||
          (v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 224LL))(v9)) == 0) {
        v10 = **(_QWORD**)(GameData_21c9bd0 + 64);
      }
      return (*(_BYTE*)(v10 + 216) & 8) == 0;
    }
  }
  return result;
}

bool MapUtil_753ce0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (a1 == 0) {
    return false;
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  if (GameData_21ca300 != 0) {
    if (*(unsigned __int8*)(GameData_21ca300 + 26) <=
            (unsigned int)(unsigned __int8)(v8 -
                                            *(_BYTE*)(GameData_21ca300 + 24)) ||
        *(unsigned __int8*)(GameData_21ca300 + 27) <=
            (unsigned int)(unsigned __int8)(v9 -
                                            *(_BYTE*)(GameData_21ca300 + 25))) {
      return false;
    }
    v10 = *(_QWORD*)(GameData_21cd158 + 16);
    v11 = v8 + 32 * v9;
    if (v11 >= 0x400) {
      v11 = 0;
    }
    v12 = *(__int16*)(v10 + 2LL * v11 + 104);
    if (v12 < 0 || (v13 = *(_QWORD*)(v10 + 8)) == 0 ||
        (v14 = v13 + 144LL * (unsigned int)v12,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14) & 1) == 0 ||
        (v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 224LL))(v14)) == 0) {
      v15 = **(_QWORD**)(GameData_21c9bd0 + 64);
    }
    if ((*(_BYTE*)(v15 + 216) & 8) != 0) {
      return false;
    }
  }
  return ((*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)a1 + 600LL))(a1, a2, a3, a4 & 1) &
          1) != 0;
}

bool MapUtil_7545a0(unsigned int* a1, unsigned int* a2, unsigned int a3,
                    __int64 a4, unsigned int a5, unsigned int a6, __int64 a7)
{
  unsigned int v9;
  unsigned int v14;
  unsigned int v15;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;

  *a1 = -1;
  *a2 = -1;
  if (a4 != 0) {
    v9 = a6;
    if ((MapUtil_753260(a4, a5, a6, a7) & 1) != 0) {
      *a1 = a5;
      *a2 = v9;
      return true;
    }
    if ((MapUtil_754760_alt1(a1, a2, a3, a4, a5, v9, a7, 4) & 1) != 0 ||
        (MapUtil_754760_alt1(a1, a2, a3, a4, a5, v9, a7, 100) & 1) != 0) {
      return true;
    }
    v14 = *(unsigned __int8*)(GameData_21ca300 + 29);
    v15 = *(unsigned __int8*)(GameData_21ca300 + 30);
    v24 = *(unsigned __int8*)(GameData_21ca300 + 31);
    v25 = *(unsigned __int8*)(GameData_21ca300 + 28);
    if (v14 <= v24 && *(unsigned __int8*)(GameData_21ca300 + 28) <= v15) {
      v17 = v15 + 1;
      v18 = -a5;
      v19 = 1677721600;
      v23 = v9;
      do {
        v21 = v25;
        v22 = (v14 - v9) * (v14 - v9);
        do {
          if ((int)(v22 + (v18 + v21) * (v18 + v21)) < v19 &&
              (MapUtil_753260(a4, v21, v14, a7) & 1) != 0) {
            *a1 = v21;
            v19 = v22 + (v18 + v21) * (v18 + v21);
            *a2 = v14;
          }
          ++v21;
        } while (v17 != v21);
        v9 = v23;
      } while (v14++ != v24);
    }
  }
  return (*a1 & 0x80000000) == 0;
}

bool MapUtil_754760(unsigned int* a1, unsigned int* a2, unsigned __int8 a3,
                    __int64 a4, __int64 a5, __int64 a6, __int64 a7, int a8)
{
  int v9;
  int v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  unsigned int v48;
  char* v49;
  int v50;
  unsigned int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  unsigned int v65;
  char* v69;
  int v71;
  int v72;
  char v73;
  char v74;
  char* v75;
  char* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;

  v9 = a6;
  v10 = a5;
  v12 = (_QWORD*)*GameData_212ce88[0];
  v13 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
  v14 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
  v15 = *GameData_212ce88[0] + 2696;
  v16 = ((v13 - v14) << 6) - 1;
  if (v13 == v14) {
    v16 = 0;
  }
  v17 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
        *(_QWORD*)(*GameData_212ce88[0] + 10768);
  if (v16 == v17) {
    GameRoutine_74cd60(v12 + 1342);
    v14 = v12[1343];
    v17 = v12[1347] + v12[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v17 >> 9)) + 8 * (v17 & 0x1FF)) = v12[1];
  v12[1] = v15;
  ++v12[1347];
  v78 = 0;
  v79 = 0;
  v77 = 0;
  v72 = 0;
  v80 = 0;
  LODWORD(v75) = 0;
  v18 = GameData_21ca2f0;
  v73 = 9;
  HIDWORD(v75) = *(unsigned __int8*)(a4 + 417);
  LODWORD(v76) = 0;
  v74 = *(_BYTE*)(a4 + 48);
  if ((unsigned int)a3 - 1 < 2) {
    v19 = *(_QWORD*)(a4 + 24) + 192LL;
    if (&v77 == (__int64*)v19) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if (a3 == 9) {
    v19 = *(_QWORD*)(a4 + 24);
    if (&v77 == (__int64*)v19) {
      goto LABEL_8;
    }
  LABEL_7:
    GameRoutine_7fb7c0(&v77);
    goto LABEL_8;
  }
  v19 = *(_QWORD*)(a4 + 24) + 96LL;
  if (&v77 != (__int64*)v19) {
    goto LABEL_7;
  }
LABEL_8:
  v20 = *(_DWORD*)(v19 + 24);
  LODWORD(v75) = a8;
  v80 = v20;
  v72 = 34048;
  v21 = GameRoutine_7480e0(v18, v10, v9, &v72, a5, a6);
  if (v77 != 0) {
    v78 = v77;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v77);
  }
  v23 = a7;
  v24 = a4;
  if ((v21 & 1) != 0) {
    v25 = *(unsigned __int8*)(GameData_21ca300 + 29);
    v65 = *(unsigned __int8*)(GameData_21ca300 + 31);
    if (v25 <= v65) {
      v26 = *(unsigned __int8*)(GameData_21ca300 + 30);
      v64 = *(unsigned __int8*)(GameData_21ca300 + 28);
      if (v64 <= v26) {
        v41 = GameData_21ca2f0;
        v71 = 1677721600;
        do {
          v42 = v64;
          v43 = 32 * v25;
          do {
            v44 = *(_QWORD*)(v41 + 8);
            if (v42 + v43 >= 0x400) {
              v45 = 0;
            }
            else {
              v45 = v42 + v43;
            }
            if (*(unsigned __int8*)(v44 + v45 + 64) != 255 &&
                (unsigned int)GameRoutine_747df0(v44, v42, v25,
                                                 *(_BYTE*)(v44 + 5)) != 255) {
              v46 = *(_QWORD*)(GameData_21ca2f0 + 8);
              v47 = *(unsigned __int8*)(v46 + v45 + 64);
              if (v71 >= v47 &&
                  (GameRoutine_747a00(v46, v42, v25, 0, 0) & 1) != 0) {
                v48 = *(unsigned __int8*)(v24 + 417);
                if (v48 < 2) {
                  if ((MapUtil_753390(v24, v42, v25, v23) & 1) != 0) {
                    goto LABEL_32;
                  }
                }
                else {
                  v72 = 0;
                  v75 = nullptr;
                  v76 = nullptr;
                  v77 = 0;
                  GameRoutine_74d660((__int64)&v72, v48, 0, 0);
                  v49 = v75;
                  v69 = v76;
                  if (v75 == v76) {
                    v50 = 1;
                    if (v75 != nullptr) {
                    LABEL_76:
                      v76 = v49;
                      v63 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v63 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v49);
                    }
                  }
                  else {
                    do {
                      v50 = 0;
                      v51 = v42 + *v49;
                      if (*(unsigned __int8*)(GameData_21ca300 + 26) <=
                              (unsigned int)(unsigned __int8)(v42 + *v49 -
                                                              *(_BYTE*)(GameData_21ca300 +
                                                                        24)) ||
                          *(unsigned __int8*)(GameData_21ca300 + 27) <=
                              (unsigned int)(unsigned __int8)(v25 + v49[1] -
                                                              *(_BYTE*)(GameData_21ca300 +
                                                                        25))) {
                        goto LABEL_75;
                      }
                      v52 = v51 + 32 * (v25 + v49[1]);
                      if ((unsigned int)v52 >= 0x400) {
                        v53 = 0;
                      }
                      else {
                        v53 = (unsigned int)v52;
                      }
                      v54 = *(
                          _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                                   8LL *
                                       *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                                       72) +
                                                            2LL * (unsigned int)
                                                                      v53 +
                                                            8));
                      if ((*(unsigned __int8*)(v54 + 62) |
                           *(unsigned __int8*)(v54 + 63)) != 0) {
                        goto LABEL_74;
                      }
                      v55 = *(_QWORD*)(v54 + 48);
                      if (*(unsigned __int8*)(v55 + 40) == 255 ||
                          (*(_BYTE*)(v54 + 216) & 0x40) != 0 ||
                          *(unsigned __int8*)(v55 +
                                              *(unsigned __int8*)(a4 + 48) +
                                              32) == 255) {
                        goto LABEL_74;
                      }
                      if (*(_BYTE*)(*(_QWORD*)(GameData_21ca300 + 96) + v53 +
                                    8) != 0) {
                        v56 =
                            *(_QWORD*)(GameData_21ca310 + 56) +
                            2224LL *
                                *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 +
                                                               96) +
                                                    v53 + 8);
                        v57 = *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 +
                                                             96) +
                                                  v53 + 8) > 0xFAu ||
                              v56 == 2224;
                        if (!v57 && *(_QWORD*)(v56 - 1832) != 0) {
                          goto LABEL_74;
                        }
                      }
                      v58 = *(_QWORD*)(GameData_21cd158 + 16);
                      v59 = *(__int16*)(v58 + 2 * v53 + 12392);
                      if (v59 < 0 || (v60 = *(_QWORD*)(v58 + 8)) == 0 ||
                          (v61 = v60 + 144LL * (unsigned int)v59,
                           ((*(__int64 (**)(__int64))(*(_QWORD*)v61 + 16LL))(
                                v61) &
                            1) == 0) ||
                          (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v61 +
                                                            168LL))(v61) == 9 ||
                          (v62 = (*(__int64 (**)(__int64))(*(_QWORD*)v61 +
                                                           224LL))(v61)) == 0) {
                        v62 = **(_QWORD**)(GameData_21c9bd0 + 64);
                      }
                      if (*(_BYTE*)(v62 + 57) == 14) {
                        v23 = a7;
                      LABEL_74:
                        v50 = 0;
                      LABEL_75:
                        v49 = v75;
                        if (v75 == nullptr) {
                          goto LABEL_79;
                        }
                        goto LABEL_76;
                      }
                      v23 = a7;
                      if (a7 != 0 &&
                          ((*(_DWORD*)(a7 + 4LL * (v52 >> 5)) >> v51) & 1) !=
                              0) {
                        goto LABEL_74;
                      }
                      v49 += 4;
                    } while (v49 != v69);
                    v50 = 1;
                    v49 = v75;
                    if (v75 != nullptr) {
                      goto LABEL_76;
                    }
                  }
                LABEL_79:
                  v24 = a4;
                  if (v50 != 0) {
                  LABEL_32:
                    v71 = v47;
                    *a1 = v42;
                    *a2 = v25;
                  }
                }
              }
            }
            v57 = v42++ == v26;
          } while (!v57);
          v57 = v25++ == v65;
        } while (!v57);
      }
    }
  }
  v27 = GameData_21ca2f0;
  v28 = *(_QWORD*)(GameData_21ca2f0 + 10776);
  v29 = *(_QWORD*)(GameData_21ca2f0 + 10768);
  v30 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v31 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v57 = v31 == v30;
  v32 = v28 - 1 + v29;
  v33 = v32 >> 9;
  v34 = v32 & 0x1FF;
  v35 = ((v31 - v30) << 6) - 1;
  v36 = *(_QWORD*)(v30 + 8 * v33);
  if (v57) {
    v35 = 0;
  }
  v37 = *(_QWORD*)(v36 + 8 * v34);
  *(_QWORD*)(GameData_21ca2f0 + 10776) = v28 - 1;
  *(_QWORD*)(v27 + 8) = v37;
  if ((unsigned __int64)(v35 - (v28 + v29) + 1) >= 0x400) {
    v38 = *(_QWORD*)(v31 - 8);
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v38);
      v31 = *(_QWORD*)(v27 + 10752);
    }
    *(_QWORD*)(v27 + 10752) = v31 - 8;
  }
  return (*a1 & 0x80000000) == 0;
}

__int64 MapUtil_755bb0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 v16;

  LODWORD(v2) = a1 + 32 * a2;
  if ((unsigned int)v2 >= 0x400) {
    v2 = 0;
  }
  else {
    v2 = (unsigned int)v2;
  }
  v3 = *(_QWORD*)(GameData_21ca300 + 96) + v2;
  v4 = *(unsigned __int8*)(v3 + 8);
  if (*(_BYTE*)(v3 + 8) == 0 ||
      ((v5 = *(_QWORD*)(GameData_21ca310 + 56) +
             2224LL * *(unsigned __int8*)(v3 + 8),
        v6 = v5 - 2224, v4 <= 0xFA)
           ? (v7 = v5 == 2224)
           : (v7 = true),
       v7 || *(_QWORD*)(v5 - 1832) == 0 || (*(_BYTE*)(v5 - 1807) & 0x1C) != 0 ||
           ((v8 = *(unsigned __int8*)(*(_QWORD*)(v5 - 1784) + 16LL)) != 3
                ? (v9 = v8 == 0)
                : (v9 = true),
            v9))) {
    v6 = 0;
  }
  v10 = *(_QWORD*)(GameData_21cd158 + 16);
  v11 = v10 + 2 * v2;
  if ((*(__int16*)(v11 + 10344) & 0x8000000000000000LL) == 0) {
    v12 = *(_QWORD*)(v10 + 8);
    if (v12 != 0) {
      v13 = v12 + 144LL * *(__int16*)(v11 + 10344);
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13) == 13 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 520LL))(v13) & 1) != 0) {
        goto LABEL_26;
      }
    }
  }
  v13 = 0;
  if ((*(__int16*)(v11 + 4200) & 0x8000000000000000LL) == 0) {
    v14 = *(_QWORD*)(v10 + 8);
    if (v14 == 0) {
      goto LABEL_29;
    }
    v13 = v14 + 144LL * *(__int16*)(v11 + 4200);
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13) == 6 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 520LL))(v13) & 1) != 0) {
    LABEL_26:
      if (v6 != 0 && (*(_BYTE*)(v6 + 417) & 0x20) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 528LL))(v13);
        return GameRoutine_755860(v6);
      }
    }
    else {
      v13 = 0;
    }
  }
LABEL_29:
  v16 = GameRoutine_755860(v6);
  return (v16 | (unsigned __int8)GameRoutine_755a10(v13)) & 1;
}

__int64 MapUtil_755d60(int a1, int a2, unsigned __int8 a3)
{
  __int64* v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;

  v3 = &GameData_21ca300;
  v4 = GameData_21ca300;
  if (GameData_21ca300 != 0) {
    LOBYTE(v3) = 0;
    if (*(unsigned __int8*)(GameData_21ca300 + 26) >
            (unsigned int)(unsigned __int8)(a1 -
                                            *(_BYTE*)(GameData_21ca300 + 24)) &&
        *(unsigned __int8*)(GameData_21ca300 + 27) >
            (unsigned int)(unsigned __int8)(a2 -
                                            *(_BYTE*)(GameData_21ca300 + 25))) {
      v5 = a1 + 32 * a2;
      if (v5 >= 0x400) {
        v6 = 0;
      }
      else {
        v6 = v5;
      }
      v7 = GameData_212c930;
      v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                      8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                            72) +
                                                 2LL * (unsigned int)v6 + 8));
      if (v8 == 0) {
      LABEL_13:
        v10 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
        v11 = *(__int16*)(v10 + 2 * v6 + 12392);
        if ((v11 < 0 || (v12 = *(_QWORD*)(v10 + 8)) == 0 ||
             (v13 = v12 + 144LL * (unsigned int)v11,
              ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13) & 1) ==
                  0) ||
             (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v13 + 168LL))(v13) ==
                 9 ||
             (v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 224LL))(v13)) ==
                 0) &&
                (v14 = **(_QWORD**)(*v7 + 64)) == 0 ||
            *(_BYTE*)(v14 + 57) != 14) {
          if (*(_BYTE*)(*(_QWORD*)(v4 + 96) + v6 + 8) == 0 ||
              ((v15 =
                    *(_QWORD*)(GameData_21ca310 + 56) +
                    2224LL * *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v6 + 8),
                *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v6 + 8) <= 0xFAu)
                   ? (v16 = v15 == 2224)
                   : (v16 = true),
               v16 || *(_QWORD*)(v15 - 1832) == 0)) {
            LOBYTE(v3) = 1;
            return (v4 != 0) & (unsigned __int8)v3;
          }
        }
        goto LABEL_26;
      }
      if ((*(unsigned __int8*)(v8 + 62) | *(unsigned __int8*)(v8 + 63)) != 0 ||
          *(unsigned __int8*)((v9 = *(_QWORD*)(v8 + 48)) + 40) == 255) {
      LABEL_26:
        LOBYTE(v3) = 0;
        return (v4 != 0) & (unsigned __int8)v3;
      }
      LOBYTE(v3) = 0;
      if (a3 != 0 && (*(_DWORD*)(v8 + 216) & 0x40) == 0) {
        if (*(unsigned __int8*)(v9 + a3 + 32) != 255) {
          goto LABEL_13;
        }
        goto LABEL_26;
      }
    }
  }
  return (v4 != 0) & (unsigned __int8)v3;
}

__int64 MapUtil_756080(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                       _BYTE* a5)
{
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _BYTE* v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  char v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  if (a1 == 0) {
    return 0;
  }
  v5 = GameData_21ca300;
  if (GameData_21ca300 == 0) {
  LABEL_61:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  if (a2 == 0) {
    v11 = a1;
    v12 = a4;
    v13 = a3;
    v14 = a5;
    v15 = game_Unit_GetJob(a1);
    a5 = v14;
    a3 = v13;
    a4 = v12;
    a2 = v15;
    a1 = v11;
    v6 = *v14;
    if ((*v14 & 8) == 0) {
      goto LABEL_5;
    }
  LABEL_9:
    LODWORD(v7) = 0;
    if (*(unsigned __int8*)(v5 + 18) <=
        (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(v5 + 16))) {
      return (unsigned int)v7;
    }
    v8 = *(_BYTE*)(v5 + 17);
    v9 = *(unsigned __int8*)(v5 + 19);
    goto LABEL_11;
  }
  v6 = *a5;
  if ((*a5 & 8) != 0) {
    goto LABEL_9;
  }
LABEL_5:
  LODWORD(v7) = 0;
  if (*(unsigned __int8*)(v5 + 26) <=
      (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(v5 + 24))) {
    return (unsigned int)v7;
  }
  v8 = *(_BYTE*)(v5 + 25);
  v9 = *(unsigned __int8*)(v5 + 27);
LABEL_11:
  if (v9 > (unsigned __int8)(a4 - v8)) {
    if ((v6 & 1) == 0) {
      goto LABEL_60;
    }
    v18 = a3 + 32 * a4;
    v19 = a2;
    v20 = a5;
    v21 = a4;
    v22 = a3;
    v23 = a1;
    v24 = v18 >= 0x400 ? 0LL : v18;
    v25 = GameData_212c930;
    v26 = GameRoutine_68e930(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(v5 + 72) +
                                              2LL * (unsigned int)v24 + 8)),
        a1);
    if (v26 == 0) {
      goto LABEL_34;
    }
    if ((*(unsigned __int8*)(v26 + 62) | *(unsigned __int8*)(v26 + 63)) == 0) {
      v27 = *(_QWORD*)(v26 + 48);
      if (*(unsigned __int8*)(v27 + 40) != 255) {
        LODWORD(v7) = 0;
        if (v19 == 0) {
          return (unsigned int)v7;
        }
        if ((*(_DWORD*)(v26 + 216) & 0x40) != 0) {
          return (unsigned int)v7;
        }
        v7 = *(unsigned __int8*)(v19 + 48);
        if (*(_BYTE*)(v19 + 48) == 0) {
          return (unsigned int)v7;
        }
        if (*(unsigned __int8*)(v27 + v7 + 32) != 255) {
        LABEL_34:
          a1 = v23;
          a4 = v21;
          a3 = v22;
          a5 = v20;
          v28 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v29 = *(__int16*)(v28 + 2 * v24 + 12392);
          if (v29 < 0) {
            goto LABEL_67;
          }
          v30 = *(_QWORD*)(v28 + 8);
          if (v30 == 0) {
            goto LABEL_67;
          }
          v31 = v30 + 144LL * (unsigned int)v29;
          v32 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _BYTE*))(
              *(_QWORD*)v31 + 16LL))(v31, a2, v22, v21, v20);
          a5 = v20;
          a3 = v22;
          a4 = v21;
          v33 = v32;
          a1 = v23;
          if ((v33 & 1) == 0) {
            goto LABEL_67;
          }
          v34 = (*(unsigned __int8 (**)(__int64, __int64, _QWORD, _QWORD,
                                        _BYTE*))(*(_QWORD*)v31 + 168LL))(
              v31, a2, v22, v21, v20);
          a5 = v20;
          a3 = v22;
          a4 = v21;
          a1 = v23;
          if (v34 == 9 ||
              (v35 = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD, _BYTE*))(
                   *(_QWORD*)v31 + 224LL))(v31, a2, v22, v21, v20),
               a5 = v20, a3 = v22, a4 = v21, v36 = v35, a1 = v23, v36 == 0)) {
          LABEL_67:
            v36 = **(_QWORD**)(*v25 + 64);
            if (v36 == 0) {
              goto LABEL_60;
            }
          }
          if (*(_BYTE*)(v36 + 57) != 14) {
          LABEL_60:
            if ((*a5 & 4) == 0 || GameData_21ca2f8 == 0 ||
                (*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0) {
              goto LABEL_66;
            }
            v16 = *(_QWORD*)(a1 + 440);
            if (v16 != 0) {
              v17 = *(unsigned __int8*)(v16 + 16);
            }
            else {
              v17 = 9;
            }
            LODWORD(v7) = 0;
            if (*(unsigned __int8*)(GameData_21ca300 + 18) <=
                    (unsigned int)(unsigned __int8)(a3 -
                                                    *(_BYTE*)(GameData_21ca300 +
                                                              16)) ||
                *(unsigned __int8*)(GameData_21ca300 + 19) <=
                    (unsigned int)(unsigned __int8)(a4 -
                                                    *(_BYTE*)(GameData_21ca300 +
                                                              17))) {
              return (unsigned int)v7;
            }
            if (((*(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + (v17 << 7) +
                             4LL * ((int)(a3 + 32 * a4) >> 5) + 8) >>
                  a3) &
                 1) != 0) {
            LABEL_66:
              if ((*a5 & 2) == 0) {
                goto LABEL_62;
              }
              LODWORD(v37) = a3 + 32 * a4;
              v37 = (unsigned int)v37 >= 0x400 ? 0LL : (unsigned int)v37;
              if (*(_BYTE*)(*(_QWORD*)(v5 + 96) + v37 + 8) == 0 ||
                  ((v38 = *(_QWORD*)(GameData_21ca310 + 56) +
                          2224LL * *(unsigned __int8*)(*(_QWORD*)(v5 + 96) +
                                                       v37 + 8),
                    *(unsigned __int8*)(*(_QWORD*)(v5 + 96) + v37 + 8) <= 0xFAu)
                       ? (v39 = v38 == 2224)
                       : (v39 = true),
                   v39 ||
                       (*(_QWORD*)(v38 - 1832) != 0 ? (v40 = v38 - 2224 == a1)
                                                    : (v40 = true),
                        v40))) {
                if (((v41 = *(_QWORD*)(*GameData_212cfb8[0] + 16),
                      (v42 = *(__int16*)(v41 + 2 * v37 + 12392)) < 0) ||
                     (v43 = *(_QWORD*)(v41 + 8)) == 0 ||
                     (v44 = v43 + 144LL * (unsigned int)v42,
                      ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v44 +
                                                          16LL))(v44, a2) &
                       1) == 0) ||
                     (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v44 + 168LL))(
                         v44) == 9 ||
                     (v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 224LL))(
                          v44)) == 0) &&
                        (v45 = **(_QWORD**)(GameData_21c9bd0 + 64)) == 0 ||
                    *(_BYTE*)(v45 + 57) != 14) {
                LABEL_62:
                  LODWORD(v7) = 1;
                  return (unsigned int)v7;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_61;
  }
  return (unsigned int)v7;
}

__int64 MapUtil_756480(__int64 a1)
{
  unsigned __int8* v1;
  int v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  _BYTE* v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  __int64 v24;
  unsigned __int8* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64 v29;
  unsigned __int8* v30;
  unsigned __int8* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8* v34;
  __int64 v35;
  unsigned __int8* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int8* v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8* v46;
  __int64 v47;
  unsigned __int8* v48;
  char* v49;
  __int64 v50;
  char* v51;
  char v52;
  char v53;
  __int64 v54;
  char v55;
  char v56;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int8* v62;
  __int64 v63;
  __int64 v64;
  unsigned __int8* v66;
  __int64 v67;
  int v68;
  int v69;
  char v70[4];

  if (a1 == 0 ||
      (v1 = (unsigned __int8*)GameData_21ca300, GameData_21ca300 == 0)) {
  LABEL_136:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v2 = *(char*)(a1 + 584);
  v3 = *(char*)(a1 + 585);
  v4 = a1;
  v5 = *(_DWORD*)(a1 + 592) - 1;
  v6 = v5 + v2;
  v68 = v5 + v2;
  v69 = v5 + v3;
  if (*(unsigned __int8*)(GameData_21ca300 + 28) != v2) {
    v67 = GameData_21ca300 + 30;
    if (v6 != *(unsigned __int8*)(GameData_21ca300 + 30)) {
      v66 = (unsigned __int8*)(GameData_21ca300 + 29);
      if (*(unsigned __int8*)(GameData_21ca300 + 29) != v3) {
        v20 = (unsigned __int8*)(GameData_21ca300 + 31);
        v9 = nullptr;
        v10 = nullptr;
        v21 = 0;
        v22 = 0;
        if (v69 != *(unsigned __int8*)(GameData_21ca300 + 31)) {
          goto LABEL_64;
        }
        goto LABEL_46;
      }
      v9 = nullptr;
      v10 = nullptr;
      v14 = 0;
      goto LABEL_27;
    }
    v9 = nullptr;
    v7 = nullptr;
    goto LABEL_8;
  }
  v7 = (_BYTE*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1, 16, 0);
  v8 = (__int64)v7;
  *v7 = 2;
  v9 = v7 + 1;
  v10 = v7 + 1;
  v67 = (__int64)(v1 + 30);
  if (v6 == v1[30]) {
  LABEL_8:
    v11 = v9 - v7;
    v12 = v9 - v7 + 1;
    if (v12 < 0) {
      goto LABEL_138;
    }
    if (2 * v11 > v12) {
      v12 = 2 * v11;
    }
    if (v11 >= 0x3FFFFFFFFFFFFFFFLL) {
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v12;
    }
    if (v13 != 0) {
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    }
    else {
      v8 = 0;
    }
    v9 = (unsigned __int8*)(v8 + v13);
    *(_BYTE*)(v8 + v11) = 8;
    v10 = (unsigned __int8*)(v8 + v11 + 1);
    memcpy(v8, v7, v11);
    if (v7 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v7);
    }
  }
  v66 = v1 + 29;
  if (v1[29] != v3) {
    goto LABEL_42;
  }
  if (v10 < v9) {
    *v10++ = 1;
    goto LABEL_42;
  }
  v14 = v8;
LABEL_27:
  v16 = &v10[-v14];
  v17 = (__int64)&v10[-v14 + 1];
  if (v17 < 0) {
    goto LABEL_138;
  }
  v18 = fw_memory_g_heap_manager_ptr;
  if (2 * (__int64)&v9[-v14] > (unsigned __int64)v17) {
    v17 = 2LL * (_QWORD)&v9[-v14];
  }
  if ((unsigned __int64)&v9[-v14] >= 0x3FFFFFFFFFFFFFFFLL) {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else {
    v19 = v17;
  }
  if (v19 != 0) {
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v19, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = (unsigned __int8*)(v8 + v19);
  v23 = &v10[-v14];
  v16[v8] = 1;
  v10 = &v16[v8 + 1];
  memcpy(v8, v14, v23);
  if (v14 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v24, v14);
  }
LABEL_42:
  v20 = v1 + 31;
  if (v69 == v1[31]) {
    if (v10 < v9) {
      *v10++ = 4;
      goto LABEL_59;
    }
    v21 = v8;
  LABEL_46:
    v25 = &v10[-v21];
    v26 = (__int64)&v10[-v21 + 1];
    if (v26 < 0) {
      goto LABEL_138;
    }
    if (2 * (__int64)&v9[-v21] > (unsigned __int64)v26) {
      v26 = 2LL * (_QWORD)&v9[-v21];
    }
    if ((unsigned __int64)&v9[-v21] >= 0x3FFFFFFFFFFFFFFFLL) {
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v26;
    }
    if (v27 != 0) {
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
    }
    else {
      v8 = 0;
    }
    v9 = (unsigned __int8*)(v8 + v27);
    v28 = &v10[-v21];
    v25[v8] = 4;
    v10 = &v25[v8 + 1];
    memcpy(v8, v21, v28);
    if (v21 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v21);
    }
  }
LABEL_59:
  if (v1[28] == v2) {
    v30 = (unsigned __int8*)v67;
    goto LABEL_77;
  }
  if (v10 < v9) {
    v30 = (unsigned __int8*)v67;
    *v10++ = 2;
    goto LABEL_77;
  }
  v22 = v8;
LABEL_64:
  v31 = &v10[-v22];
  v32 = (__int64)&v10[-v22 + 1];
  if (v32 < 0) {
    goto LABEL_138;
  }
  if (2 * (__int64)&v9[-v22] > (unsigned __int64)v32) {
    v32 = 2LL * (_QWORD)&v9[-v22];
  }
  if ((unsigned __int64)&v9[-v22] >= 0x3FFFFFFFFFFFFFFFLL) {
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else {
    v33 = v32;
  }
  if (v33 != 0) {
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v33, 16, 0);
  }
  else {
    v8 = 0;
  }
  v30 = (unsigned __int8*)v67;
  v9 = (unsigned __int8*)(v8 + v33);
  v34 = &v10[-v22];
  v31[v8] = 2;
  v10 = &v31[v8 + 1];
  memcpy(v8, v22, v34);
  if (v22 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v22);
  }
LABEL_77:
  if (v68 != *v30) {
    if (v10 >= v9) {
      v36 = &v10[-v8];
      v37 = (__int64)&v10[-v8 + 1];
      if (v37 < 0) {
        goto LABEL_138;
      }
      if (2 * (__int64)&v9[-v8] > (unsigned __int64)v37) {
        v37 = 2LL * (_QWORD)&v9[-v8];
      }
      if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
        v38 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v38 = v37;
      }
      if (v38 != 0) {
        v39 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v38, 16, 0);
      }
      else {
        v39 = 0;
      }
      v9 = (unsigned __int8*)(v39 + v38);
      v40 = &v10[-v8];
      v36[v39] = 8;
      v10 = &v36[v39 + 1];
      memcpy(v39, v8, v40);
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v8);
      v8 = v39;
    }
    else {
      *v10++ = 8;
    }
  }
  if (*v66 != v3) {
    if (v10 >= v9) {
      v42 = &v10[-v8];
      v43 = (__int64)&v10[-v8 + 1];
      if (v43 < 0) {
        goto LABEL_138;
      }
      if (2 * (__int64)&v9[-v8] > (unsigned __int64)v43) {
        v43 = 2LL * (_QWORD)&v9[-v8];
      }
      if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
        v44 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v44 = v43;
      }
      if (v44 != 0) {
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v44, 16, 0);
      }
      else {
        v45 = 0;
      }
      v9 = (unsigned __int8*)(v45 + v44);
      v46 = &v10[-v8];
      v42[v45] = 1;
      v10 = &v42[v45 + 1];
      memcpy(v45, v8, v46);
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v8);
      v8 = v45;
    }
    else {
      *v10++ = 1;
    }
  }
  if (v69 == *v20) {
    goto LABEL_110;
  }
  if (v10 >= v9) {
    v58 = &v10[-v8];
    v59 = (__int64)&v10[-v8 + 1];
    if (v59 >= 0) {
      if (2 * (__int64)&v9[-v8] > (unsigned __int64)v59) {
        v59 = 2LL * (_QWORD)&v9[-v8];
      }
      if ((unsigned __int64)&v9[-v8] >= 0x3FFFFFFFFFFFFFFFLL) {
        v60 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v60 = v59;
      }
      if (v60 != 0) {
        v61 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v60, 16, 0);
      }
      else {
        v61 = 0;
      }
      v62 = &v10[-v8];
      v58[v61] = 4;
      v10 = &v58[v61 + 1];
      memcpy(v61, v8, v62);
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v8);
      v8 = v61;
      if ((unsigned __int8*)v61 != v10) {
        goto LABEL_111;
      }
      goto LABEL_133;
    }
  LABEL_138:
    GameRoutine_75baa0();
  }
  *v10++ = 4;
LABEL_110:
  if ((unsigned __int8*)v8 == v10) {
  LABEL_133:
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v64,
                                  v8);
    goto LABEL_136;
  }
LABEL_111:
  v48 = (unsigned __int8*)v8;
  v49 = (char*)GameData_212cf50;
  while (1) {
    v50 = *v48;
    v70[0] = 11;
    v51 = &v49[v50];
    v52 = *v51;
    v53 = v51[256];
    v54 = game_Unit_GetJob(v4);
    v55 = game_map_MapUtil_CanEnter(v4, v54, v52 + (unsigned __int8)v2,
                                    v53 + (unsigned __int8)v3, v70);
    if ((v55 & 1) != 0) {
      break;
    }
    if (++v48 == v10) {
      if (v8 == 0) {
        goto LABEL_136;
      }
      goto LABEL_117;
    }
  }
  LODWORD(v4) = *v48;
  if (v8 == 0) {
    return (unsigned int)v4;
  }
LABEL_117:
  v56 = v55;
  v57 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v57 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                v8);
  if ((v56 & 1) == 0) {
    goto LABEL_136;
  }
  return (unsigned int)v4;
}

__int64 MapUtil_756c20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  char v11;
  unsigned int v12;
  _QWORD* v13;
  char v14;
  __int64 v15;

  if (a1 != a2 && a1 != 0 && a2 != 0 && GameRoutine_7536a0(a2)) {
    v4 = *GameData_212d000[0];
    v5 = *(_QWORD*)(a1 + 440);
    if (v5 != 0) {
      v6 = *(unsigned __int8*)(v5 + 16);
    }
    else {
      v6 = 9;
    }
    v7 = *(_QWORD*)(a2 + 392);
    v8 = *(_QWORD*)(a2 + 440);
    if (v8 != 0) {
      v9 = *(unsigned __int8*)(v8 + 16);
    }
    else {
      v9 = 9;
    }
    v10 = *(unsigned __int16*)(*(_QWORD*)(a1 + 392) + 16LL);
    v11 = *(_BYTE*)(a1 + 2088);
    v12 = *(unsigned __int16*)(v7 + 16);
    v13 = *(_QWORD**)(v4 + 568);
    v14 = game_script_map_event_g_active_unit;
    game_script_map_event_g_active_unit = v11;
    if (*(_QWORD**)(v4 + 576) == v13) {
      goto LABEL_18;
    }
    while (((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
                *(_QWORD*)*v13 + 56LL))(*v13, v10, v6, v12, v9) &
            1) == 0) {
      if (++v13 == *(_QWORD**)(v4 + 576)) {
        goto LABEL_18;
      }
    }
    if (*v13 == 0) {
    LABEL_18:
      game_script_map_event_g_active_unit = v14;
    }
    else {
      v15 = __dynamic_cast(*v13, GameData_212d210[0], GameData_212d218[0], 0);
      game_script_map_event_g_active_unit = v14;
      if (v15 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

__int64 MapUtil_756d50(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v4 = a1 + 32 * a2;
  if (v4 >= 0x400) {
    v6 = 0;
  }
  else {
    v6 = v4;
  }
  v7 = GameData_212c930;
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                  8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                        72) +
                                             2LL * (unsigned int)v6 + 8));
  if (v8 != 0 && *(_WORD*)(v8 + 16) != 0) {
    result = *(_QWORD*)(a3 + 32);
    v21 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * (unsigned int)v6 + 8));
    if (result == 0) {
      goto LABEL_25;
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result, &v21);
  }
  v10 = GameData_212cfb8[0];
  v11 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v12 = *(__int16*)(v11 + 2 * v6 + 104);
  if ((v12 & 0x8000000000000000LL) == 0 && (v13 = *(_QWORD*)(v11 + 8)) != 0 &&
          (v14 = v13 + 144LL * (unsigned int)v12,
           (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14) ==
               2) &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14) & 1) != 0 &&
          (result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 224LL))(v14)) !=
              0 ||
      (result = **(_QWORD**)(*v7 + 64)) != 0) {
    if (*(_WORD*)(result + 16) != 0) {
      v15 = *(_QWORD**)(a3 + 32);
      v21 = result;
      if (v15 == nullptr) {
        goto LABEL_25;
      }
      result =
          (__int64)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, __int64*))(
              *v15 + 48LL))(v15, v15, &v21);
    }
  }
  v16 = *(_QWORD*)(*v10 + 16);
  v17 = *(__int16*)(v16 + 2 * v6 + 6248);
  if ((v17 & 0x8000000000000000LL) == 0) {
    v18 = *(_QWORD*)(v16 + 8);
    if (v18 != 0) {
      v19 = v18 + 144LL * (unsigned int)v17;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 224LL))(v19);
        if (result != 0) {
          v20 = result;
          if (*(_WORD*)(result + 16) != 0) {
            result = *(_QWORD*)(a3 + 32);
            v21 = v20;
            if (result != 0) {
              return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result +
                                                         48LL))(result, &v21);
            }
          LABEL_25:
            GameRoutine_60a310(result, a2, a3, a4);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
