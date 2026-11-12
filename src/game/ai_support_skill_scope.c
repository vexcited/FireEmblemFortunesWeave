#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EscapeMenuItem_752b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD);
__int64 GameRoutine_11f51f0(__int64, int, int);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_747a00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_Find_70f780(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d9188;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_1200020(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
_BYTE* AISupportSkillScope_11fef70(_BYTE* result);
bool AISupportSkillScope_11ff4a0(_DWORD* a1, int* a2);
__int64* AISupportSkillScope_11ff880(__int64* result, int a2, int a3);
__int64 AISupportSkillScope_11ff9b0(__int64 a1, __int64* a2, __int64 a3,
                                    __int64 a4);
__int64 game_AISupportSkillScope_Update_closure_Invoke(__int64 a1, __int64 a2);
_QWORD* Image_72c060(__int64, __int64, unsigned int, unsigned int, __int64);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 UnitSkillList_84cf20_alt1(__int64,
                                  __int64) __asm__("UnitSkillList_84cf20");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_2018948[])();
extern __int64* GameData_212c878[6];
__n128 game_AISupportSkillScope_Update(_BYTE* a1, unsigned int a2,
                                       unsigned int a3);
bool AISupportSkillScope_11ff100(__int64* a1, int* a2);
__int64 GameRoutine_747a00_alt1(__int64, __int64, __int64, __int64,
                                char) __asm__("GameRoutine_747a00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void AISupportSkillScope_11ff880_alt1(__int64*, int, int) __asm__(
    "AISupportSkillScope_11ff880");
void __attribute__((noreturn))
GameRoutine_1200020_alt1() __asm__("GameRoutine_1200020");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__n128 game_AISupportSkillScope_Update(_BYTE* a1, unsigned int a2,
                                       unsigned int a3)
{
  char v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __n128 result;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    int v32;
    char gap76_[4];
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v29_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v29_.v32 = 0;
  v29_.v30 = 0;
  v29_.v31 = 0;
  v3 = a2;
  v29_.v29 = 0;
  v29_.v33 = 0;
  v29_.v34 = 0;
  v29_.v35 = 0;
  v29_.v36 = 0;
  v29_.v37 = 0;
  v29_.v38 = 0;
  v29_.v39 = 0;
  v29_.v40 = 0;
  v7 = *(_QWORD*)a1;
  v8 = *GameData_212ce98[0];
  v27_.v28 = v27_.v27;
  v9 = *(_QWORD*)(v8 + 96);
  v27_.v27[0] = GameData_2018948;
  v27_.v27[1] = &v29_.v29;
  Image_72c060(v9, v7, a2, a3, (__int64)v27_.v27),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v27_.v28 == v27_.v27) {
    v10 = 32;
    goto LABEL_5;
  }
  if (v27_.v28 != nullptr) {
    v10 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v27_.v28 + v10))((__int64)v27_.v28),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = *(_QWORD*)a1;
  v12 = *(_QWORD*)(*(_QWORD*)a1 + 1680LL);
  if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)a1 + 1688LL) - v12) >> 2) >=
      1) {
    v13 = *(_QWORD*)(v11 + 1648);
    *(_QWORD*)(v11 + 1688) = v12;
    v14 = *(_DWORD*)(v11 + 416);
    *(_DWORD*)(v11 + 1672) = 0;
    *(_QWORD*)(v11 + 1728) = 0;
    *(_QWORD*)(v11 + 1736) = 0;
    *(_QWORD*)(v11 + 1656) = v13;
    if ((v14 & 0x10000000) == 0) {
      *(_DWORD*)(v11 + 416) = v14 | 0x10000000;
      game_6c51e0(v11), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_6c6da0_alt1(v11),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      game_6c6ec0(v11), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_DWORD*)(v11 + 416) &= ~0x10000000u;
    }
  }
  UnitSkillList_84cf20_alt1(*(_QWORD*)a1 + 1648LL, (__int64)&v29_.v29),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = *(_QWORD*)a1;
  *(_BYTE*)(v16 + 584) = v3;
  *(_BYTE*)(v16 + 585) = a3;
  v17 = *(_QWORD*)a1;
  v18 = *(_DWORD*)(*(_QWORD*)a1 + 416LL);
  if ((v18 & 0x10000000) == 0) {
    v19 = *(_QWORD*)a1;
    *(_DWORD*)(v17 + 416) = v18 | 0x10000000;
    game_6c51e0(v19), result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_6c6da0_alt1(v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_6c6ec0(v17), result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_DWORD*)(v17 + 416) &= ~0x10000000u;
  }
  a1[112] = 1;
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v29_.v36 != 0) {
    v21 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v29_.v37 = v29_.v36;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v21 + v22);
  }
  if (v29_.v33 != 0) {
    v23 = *v20;
    v29_.v34 = v29_.v33;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v23 + v24);
  }
  if (v29_.v29 != 0) {
    v25 = *v20;
    v29_.v30 = v29_.v29;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(v25 + v26);
  }
  return result;
}

_BYTE* AISupportSkillScope_11fef70(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = result;
  if (result[112] == 1) {
    v2 = *(_QWORD*)result;
    v3 = *(_QWORD*)(*(_QWORD*)result + 1680LL);
    if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)result + 1688LL) - v3) >>
              2) >= 1) {
      v4 = *(_QWORD*)(v2 + 1648);
      *(_QWORD*)(v2 + 1688) = v3;
      v5 = *(_DWORD*)(v2 + 416);
      *(_DWORD*)(v2 + 1672) = 0;
      *(_QWORD*)(v2 + 1728) = 0;
      *(_QWORD*)(v2 + 1736) = 0;
      *(_QWORD*)(v2 + 1656) = v4;
      if ((v5 & 0x10000000) == 0) {
        *(_DWORD*)(v2 + 416) = v5 | 0x10000000;
        GameRoutine_6c51e0(v2);
        GameRoutine_6c6da0(v2);
        GameRoutine_6c6ec0(v2);
        *(_DWORD*)(v2 + 416) &= ~0x10000000u;
      }
    }
    result = (_BYTE*)UnitSkillList_84cf20(*(_QWORD*)v1 + 1648LL, v1 + 8, 1);
    v6 = *(_QWORD*)v1;
    v7 = *((_DWORD*)v1 + 27);
    *(_BYTE*)(v6 + 584) = *((_DWORD*)v1 + 26);
    *(_BYTE*)(v6 + 585) = v7;
    v8 = *(_QWORD*)v1;
    v9 = *(_DWORD*)(*(_QWORD*)v1 + 416LL);
    if ((v9 & 0x10000000) == 0) {
      v10 = *(_QWORD*)v1;
      *(_DWORD*)(v8 + 416) = v9 | 0x10000000;
      GameRoutine_6c51e0(v10);
      GameRoutine_6c6da0(v8);
      result = (_BYTE*)GameRoutine_6c6ec0(v8);
      *(_DWORD*)(v8 + 416) &= ~0x10000000u;
    }
    v1[112] = 0;
  }
  v11 = *((_QWORD*)v1 + 8);
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v11 != 0) {
    v13 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *((_QWORD*)v1 + 9) = v11;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_BYTE*)nn_mem_StandardAllocator_Free(v13 + v14, v11);
  }
  v15 = *((_QWORD*)v1 + 5);
  if (v15 != 0) {
    v16 = *v12;
    *((_QWORD*)v1 + 6) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_BYTE*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = *((_QWORD*)v1 + 1);
  if (v18 != 0) {
    v19 = *v12;
    *((_QWORD*)v1 + 2) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    return (_BYTE*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  return result;
}

bool AISupportSkillScope_11ff100(__int64* a1, int* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _WORD* v14;
  unsigned __int8* v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  _BYTE* v20;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  __int64 v27;
  unsigned __int8* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int i;
  int v35;
  int v36;
  char v37;
  unsigned int v38;
  int v39;

  *(_QWORD*)a2 = 0;
  v4 = *a1;
  v5 = game_g_shared_system_skills_ptr;
  v6 = *a1 + 1744;
  v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(v6, &v39) & 1) != 0) {
    return false;
  }
  if (*(_WORD*)(v4 + 492) == 0 && *(_BYTE*)(v4 + 496) == 0) {
    v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
    if ((game_HasSkill(v4 + 1744, &v39) & 1) != 0) {
      return false;
    }
  }
  v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v5) & 0xFFF;
  if ((game_HasSkill(v4 + 1744, &v39) & 1) != 0) {
    return false;
  }
  v9 = *((_DWORD*)a1 + 2);
  v10 = v9 & (unsigned int)~(v9 >> 31);
  if (v9 >= 0) {
    v11 = (unsigned int)(v9 + 1);
  }
  else {
    v11 = 30;
  }
  if ((int)v10 < (int)v11) {
    v12 = GameData_212c878[0];
    while (1) {
      v13 = *a1;
      v14 = (_WORD*)(*a1 + 8 * v10 + 828);
      v15 = *(unsigned __int8**)(*(_QWORD*)(*v12 + 64) +
                                 8LL * (unsigned __int16)*v14);
      v16 = *((_DWORD*)a1 + 3);
      v17 = v15[73];
      if ((v16 & 0x20) != 0) {
        if (v17 != 7) {
          goto LABEL_17;
        }
      }
      else if (v17 != 1) {
        goto LABEL_17;
      }
      v18 = v15[72];
      if (v18 <= 7 &&
          (v18 - 5 > 1 ||
           (*(_DWORD*)(*a1 + 8 * v10 + 832) & 0xF) * (unsigned int)v15[87] -
                   1 >=
               *(unsigned __int8*)(*a1 + 8 * v10 + 830)) &&
          (*(_BYTE*)(*a1 + 8 * v10 + 831) & 0x20) == 0) {
        if ((v16 & 8) == 0 && v18 - 7 >= 0xFFFFFFFE) {
          v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v5) & 0xFFF;
          if ((game_HasSkill(v13 + 1744, &v39) & 1) != 0) {
            goto LABEL_17;
          }
          if (*(_WORD*)(v13 + 492) == 0 && *(_BYTE*)(v13 + 496) == 0) {
            v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
            if ((game_HasSkill(v13 + 1744, &v39) & 1) != 0) {
              goto LABEL_17;
            }
          }
          v39 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v5 + 4) & 0xFFF;
          if ((game_HasSkill(v13 + 1744, &v39) & 1) != 0) {
            goto LABEL_17;
          }
          v13 = *a1;
        }
        if ((UnitItem_6e8bc0(v14, v13) & 1) != 0 && *v14 != 0) {
          break;
        }
      }
    LABEL_17:
      if (++v10 == v11) {
        return a2[1] > 0;
      }
    }
    v19 = *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * (unsigned __int16)*v14);
    v20 = *(_BYTE**)(v19 + 192);
    if (v20 == nullptr || *(unsigned __int8*)(v19 + 72) > 7u) {
      v22 = *(unsigned __int8*)(v19 + 92);
      v23 = *a1;
    }
    else {
      if (v20[105] != 0) {
        if (v20[104] == 2) {
          v24 = 0;
        }
        else {
          v24 = *(_QWORD*)(v19 + 192);
        }
      }
      else {
        v24 = 0;
      }
      if (v24 != 0) {
        v25 = (unsigned __int8*)(v24 + 278);
      }
      else {
        v25 = (unsigned __int8*)(v19 + 92);
      }
      v22 = *v25;
      v23 = *a1;
      if (v20[105] != 0) {
        if (v20[104] == 2) {
          v20 = nullptr;
        }
      LABEL_55:
        v26 = (unsigned __int8*)(v19 + 93);
        v27 = *(_QWORD*)(v19 + 24);
        if (v20 != nullptr) {
          v28 = v20 + 279;
        }
        else {
          v28 = v26;
        }
        v29 = *v28;
        v30 = game_UnitSkillList_GetRangeAddImpl(v23 + 1744, v27 + 8);
        v31 = v30 + v29;
        if (v30 + v29 >= 1) {
          if (v31 == 255) {
            *a2 = -1;
          }
          else {
            if (v31 >= v22) {
              v32 = *a2;
              v33 = v30 + v29 - v22;
              for (i = ((_BYTE)v30 + (_BYTE)v29 - (_BYTE)v22 + 1) & 7; i != 0;
                   v32 |= v35) {
                v35 = 1 << v22++;
                --i;
              }
              if (v33 >= 7) {
                do {
                  v36 = (1 << (v22 + 5)) | (1 << (v22 + 4)) | (1 << (v22 + 3)) |
                        (1 << (v22 + 2)) | (1 << (v22 + 1)) | (1 << v22) | v32;
                  v37 = v22 + 6;
                  v38 = v22 + 7;
                  v22 += 8;
                  v32 = (1 << v38) | (1 << v37) | v36;
                } while (v38 != v31);
              }
              *a2 = v32;
            }
            if (a2[1] >= v31) {
              goto LABEL_17;
            }
          }
          a2[1] = v31;
        }
        goto LABEL_17;
      }
    }
    v20 = nullptr;
    goto LABEL_55;
  }
  return a2[1] > 0;
}

bool AISupportSkillScope_11ff4a0(_DWORD* a1, int* a2)
{
  __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 result;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int* v25;
  char v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned int* v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  char v34;
  __int64* v35;
  __int64 v36;
  unsigned int* v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  struct {
    unsigned int* v46;
    __int64 v47;
    unsigned int* v48;
  } v46_;

  *(_QWORD*)a2 = -1;
  a2[2] = 100;
  v3 = *(_QWORD*)a1;
  v4 = a1[2];
  v5 = a1[3];
  v6 = a1[7];
  v7 = a1[6];
  v8 = *(int*)(*(_QWORD*)a1 + 592LL);
  v45 = a1[8];
  if ((_DWORD)v8 != 1) {
    v13 = a1[4];
    v14 = a1[5];
    v46_.v47 = 0;
    v46_.v48 = nullptr;
    v46_.v46 = nullptr;
    v15 = v4 < v13;
    if (v4 <= v13) {
      v16 = -1;
    }
    else {
      v16 = v4;
    }
    if (v15) {
      v17 = v4 - (v8 - 1);
    }
    else {
      v17 = v16;
    }
    v18 = v5 < v14;
    if (v5 <= v14) {
      v19 = -1;
    }
    else {
      v19 = v5;
    }
    if (v18) {
      v20 = v5 - (v8 - 1);
    }
    else {
      v20 = v19;
    }
    if (v17 < 0) {
      if (v20 < 0) {
        v21 = v4;
        v22 = v5;
        goto LABEL_38;
      }
      if ((_DWORD)v8 != 0) {
        if ((v8 & 0x80000000) == 0) {
          v23 = v4 - v8;
          v46_.v46 = (unsigned int*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v8, 16, 0);
          v46_.v47 = (__int64)v46_.v46;
          v46_.v48 = &v46_.v46[2 * v8];
          do {
            AISupportSkillScope_11ff880_alt1((__int64*)&v46_.v46, ++v23, v20);
          } while (v23 < v4);
          goto LABEL_39;
        }
        goto LABEL_70;
      }
    }
    else {
      if ((v20 & 0x80000000) == 0) {
        v21 = v17;
        v22 = v20;
      LABEL_38:
        AISupportSkillScope_11ff880_alt1((__int64*)&v46_.v46, v21, v22);
        goto LABEL_39;
      }
      if ((_DWORD)v8 != 0) {
        if ((v8 & 0x80000000) == 0) {
          v24 = v5 - v8;
          v46_.v46 = (unsigned int*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v8, 16, 0);
          v46_.v47 = (__int64)v46_.v46;
          v46_.v48 = &v46_.v46[2 * v8];
          do {
            AISupportSkillScope_11ff880_alt1((__int64*)&v46_.v46, v17, ++v24);
          } while (v24 < v5);
          goto LABEL_39;
        }
      LABEL_70:
        GameRoutine_1200020_alt1();
      }
    }
  LABEL_39:
    v25 = (unsigned int*)v46_.v47;
    v44 = (__int64)v46_.v46;
    if (v46_.v46 != (unsigned int*)v46_.v47) {
      if (v6 < 0) {
        v34 = (v7 & 4) != 0;
        v35 = GameData_212ce98[0];
        v36 = GameData_21306a0[0];
        v37 = v46_.v46;
        do {
          v38 = *v37;
          if (*(unsigned __int8*)(*v35 + 26) >
              (unsigned int)(unsigned __int8)(*v37 - *(_BYTE*)(*v35 + 24))) {
            v39 = v37[1];
            if (*(unsigned __int8*)(*v35 + 27) >
                    (unsigned int)(unsigned __int8)(v39 -
                                                    *(_BYTE*)(*v35 + 25)) &&
                (GameRoutine_747a00_alt1(*(_QWORD*)(*(_QWORD*)v36 + 8LL), v38,
                                         v39, v3, v34) &
                 1) != 0) {
              LODWORD(v40) = v38 + 32 * v39;
              v40 = (unsigned int)v40 >= 0x400 ? 0LL : (unsigned int)v40;
              v41 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v36 + 12880LL) +
                                        v40 + 64);
              if (a2[2] >= v41) {
                *a2 = v38;
                a2[1] = v39;
                a2[2] = v41;
              }
            }
          }
          v37 += 2;
        } while (v37 != v25);
      }
      else {
        v26 = (v7 & 4) != 0;
        LODWORD(v27) = v6 + 32 * v45;
        if ((unsigned int)v27 >= 0x400) {
          v27 = 0;
        }
        else {
          v27 = (unsigned int)v27;
        }
        v43 = v27;
        v28 = GameData_212ce98[0];
        v29 = GameData_21306a0[0];
        v30 = v46_.v46;
        do {
          v31 = *v30;
          if (*(unsigned __int8*)(*v28 + 26) >
              (unsigned int)(unsigned __int8)(*v30 - *(_BYTE*)(*v28 + 24))) {
            v32 = v30[1];
            if (*(unsigned __int8*)(*v28 + 27) >
                    (unsigned int)(unsigned __int8)(v32 -
                                                    *(_BYTE*)(*v28 + 25)) &&
                (GameRoutine_747a00_alt1(*(_QWORD*)(*(_QWORD*)v29 + 8LL), v31,
                                         v32, v3, v26) &
                 1) != 0 &&
                v31 == v6 && v32 == v45) {
              v33 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v29 + 12880LL) +
                                        v43 + 64);
              if (a2[2] >= v33) {
                a2[2] = v33;
                *a2 = v6;
                a2[1] = v45;
              }
            }
          }
          v30 += 2;
        } while (v30 != v25);
      }
    }
    if (v44 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v44);
    }
    v4 = *a2;
    return v4 >= 0;
  }
  v9 = GameData_21306a0[0];
  if ((GameRoutine_747a00_alt1(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] + 8LL),
                               (unsigned int)v4, (unsigned int)v5, v3,
                               (a1[6] & 4) != 0) &
       1) == 0) {
    return false;
  }
  if (v6 < 0 || (result = false, v4 == v6) && v5 == v45) {
    LODWORD(v11) = v4 + 32 * v5;
    if ((unsigned int)v11 >= 0x400) {
      v11 = 0;
    }
    else {
      v11 = (unsigned int)v11;
    }
    v12 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v9 + 12880LL) + v11 + 64);
    *a2 = v4;
    a2[1] = v5;
    a2[2] = v12;
    return v4 >= 0;
  }
  return result;
}

__int64* AISupportSkillScope_11ff880(__int64* result, int a2, int a3)
{
  unsigned __int64 v3;
  _DWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (_DWORD*)result[1];
  v3 = result[2];
  v5 = result;
  if ((unsigned __int64)v4 >= v3) {
    v7 = *result;
    v8 = (__int64)v4 - *result;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_1200020();
    }
    v10 = v3 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = a3;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      a3 = v14;
      a2 = v13;
    }
    else {
      v15 = 0;
    }
    v16 = (_DWORD*)(v15 + v8);
    v17 = v15 + 8 * v12;
    v18 = v15 + v8 - 8 * (v8 >> 3);
    *v16 = a2;
    v16[1] = a3;
    v6 = v15 + v8 + 8;
    result = (__int64*)memcpy(v18, v7, v8);
    *v5 = v18;
    v5[1] = v6;
    v5[2] = v17;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v7);
    }
  }
  else {
    *v4 = a2;
    v4[1] = a3;
    v6 = (__int64)(v4 + 2);
  }
  v5[1] = v6;
  return result;
}

__int64 AISupportSkillScope_11ff9b0(__int64 a1, __int64* a2, __int64 a3,
                                    __int64 a4)
{
  __int64 v4;
  int v8;
  __int64 v9;
  int v10;
  __int64 result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int v35;
  __int64 v36;
  signed int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;

  v4 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  if (v4 != *(_QWORD*)(a3 + 8)) {
    goto LABEL_45;
  }
  v8 = *(_DWORD*)(v4 + 592);
  if (v8 < 2) {
    goto LABEL_45;
  }
  v9 = *(_QWORD*)(v4 + 440);
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 16);
  }
  else {
    v10 = 9;
  }
  v12 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if (v12 != v10) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
      if (v10 != 0 || v12 != 3) {
      LABEL_14:
        v13 = *(char*)(v4 + 584);
        v14 = *(char*)(v4 + 585);
        v15 = 0;
        if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0) {
          v16 = *((_DWORD*)a2 + 2) - v13;
          v17 = *((_DWORD*)a2 + 3) - v14;
          if (((v17 | v16) & 0x80000000) == 0) {
            v15 = 0;
            if (v16 < v8 && v17 < v8) {
              v18 = v16 + v17 * v8;
              if ((v18 & 0x80000000) != 0) {
                v15 = 0;
              }
              else {
                v15 = *(char*)(*(_QWORD*)(v4 + 600) + 4LL * v18 + 2);
              }
            }
          }
        }
        v19 = 0;
        if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0) {
          v20 = *(_DWORD*)(a3 + 16) - v13;
          v21 = *(_DWORD*)(a3 + 20) - v14;
          if (((v21 | v20) & 0x80000000) == 0) {
            v19 = 0;
            if (v20 < v8 && v21 < v8) {
              v22 = v20 + v21 * v8;
              if ((v22 & 0x80000000) != 0) {
                v19 = 0;
              }
              else {
                v19 = *(char*)(*(_QWORD*)(v4 + 600) + 4LL * v22 + 2);
              }
            }
          }
        }
        if (v15 < v19) {
          return 0;
        }
        if (v15 > v19) {
          goto LABEL_32;
        }
      }
    }
    else if (v10 != 3) {
      goto LABEL_14;
    }
  }
  if (*((_DWORD*)a2 + 5) != *(_DWORD*)a4) {
    goto LABEL_45;
  }
  v24 = GameRoutine_11f51f0(a1, *((_DWORD*)a2 + 10), *((_DWORD*)a2 + 11));
  v25 = GameRoutine_11f51f0(a1, *(_DWORD*)(a4 + 20), *(_DWORD*)(a4 + 24));
  if (v24 >= v25) {
    if (v24 > v25) {
      return 0;
    }
    v28 = *(char*)(a1 + 584);
    v29 = *((_DWORD*)a2 + 10) - v28;
    v30 = *(char*)(a1 + 585);
    v31 = *((_DWORD*)a2 + 11) - v30;
    if (v29 < 0) {
      v29 = v28 - *((_DWORD*)a2 + 10);
    }
    if (v31 < 0) {
      v31 = v30 - *((_DWORD*)a2 + 11);
    }
    v32 = v31 + v29;
    v33 = *(_DWORD*)(a4 + 20) - v28;
    v34 = *(_DWORD*)(a4 + 24) - v30;
    if (v33 < 0) {
      v33 = -v33;
    }
    if (v34 < 0) {
      v34 = -v34;
    }
    v35 = v34 + v33;
    if (v32 < v35) {
      return 0;
    }
    if (v32 <= v35) {
    LABEL_45:
      v26 = 0;
      v27 = *(_QWORD*)(a3 + 64);
      if (v27 != 0) {
        goto LABEL_46;
      }
    LABEL_54:
      v41 = 0;
      goto LABEL_55;
    }
  }
LABEL_32:
  v26 = 2;
  v27 = *(_QWORD*)(a3 + 64);
  if (v27 == 0) {
    goto LABEL_54;
  }
LABEL_46:
  if (*a2 == 0) {
    goto LABEL_54;
  }
  v36 = *(_QWORD*)(a3 + 8);
  v37 = ~(unsigned int)game_UnitItemList_Find_70f780(*a2 + 828, v27);
  v38 = *((float*)a2 + 7) < 0.7 ? (unsigned int)v37 >> 31 : (v37 < 0) | 0x10;
  v39 = game_UnitItemList_Find_70f780(v36 + 828, v27);
  v40 = *(float*)(a4 + 8) < 0.7 ? v39 >= 0 : (~v39 < 0) | 0x10;
  if (v38 == v40) {
    goto LABEL_54;
  }
  if (v38 > v40) {
    return 0;
  }
  v41 = 2;
LABEL_55:
  v42 = *(_QWORD*)(a3 + 80);
  v43 = *a2;
  if (v42 == 0 || v43 == 0) {
    goto LABEL_65;
  }
  v44 = *(_QWORD*)(a3 + 8);
  if (v44 != 0) {
    v45 = EscapeMenuItem_752b40(
        (unsigned int)*(char*)(v44 + 584), (unsigned int)*(char*)(v44 + 585),
        *(unsigned int*)(v44 + 592), *(unsigned int*)(v44 + 592),
        (unsigned int)*(char*)(v42 + 584), (unsigned int)*(char*)(v42 + 585),
        *(unsigned int*)(v42 + 592), *(unsigned int*)(v42 + 592));
  }
  else {
    v45 = 0x7FFFFFFF;
  }
  v46 = *((_DWORD*)a2 + 4);
  if (v46 < v45) {
    return 0;
  }
  if (v46 > (unsigned int)v45) {
    v47 = 2;
  }
  else {
  LABEL_65:
    v47 = 0;
  }
  v48 = v41 + v26 + v47;
  if (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) == 1 &&
      (GameData_21d9188 == 0 || (*(_BYTE*)(GameData_21d9188 + 30) & 1) == 0) &&
      *((_DWORD*)a2 + 5) == *(_DWORD*)a4) {
    v49 = 0;
    if ((*((_BYTE*)a2 + 49) & 1) == 0 && (*(_BYTE*)(a4 + 29) & 1) == 0 &&
        (*((_BYTE*)a2 + 50) & 1) == 0 && (*(_BYTE*)(a4 + 30) & 1) == 0) {
      v49 = (*(_BYTE*)(a4 + 28) & 1 | ((a2[6] & 1) == 0)) != 0 ? 0 : 2;
      if ((a2[6] & 1) == 0 && (*(_BYTE*)(a4 + 28) & 1) != 0) {
        return 0;
      }
    }
    v48 += v49;
  }
  result = 1;
  if (v48 == 0 && v43 != 0) {
    v50 = *((_DWORD*)a2 + 5);
    if (v50 >= *(_DWORD*)a4 &&
        (v50 > *(_DWORD*)a4 ||
         *(unsigned __int8*)(v43 + 2088) <=
             (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a3 + 8) + 2088LL))) {
      return 0;
    }
  }
  return result;
}

__int64 game_AISupportSkillScope_Update_closure_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a1 + 8);
  result = UnitSkillList_84cc00(v2, a2, 1);
  if ((result & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 32);
    v5 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)(v2 + 88) = 0;
    v6 = v5 - v4;
    if ((int)((unsigned __int64)(v5 - v4) >> 2) >= 1) {
      v7 = (int)(v6 >> 2);
      if (v7 <= 1) {
        v8 = 1;
      }
      else {
        v8 = (int)(v6 >> 2);
      }
      v9 = *GameData_212c880[0];
      if (v7 >= 2) {
        v15 = (int*)(v4 + 4);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do {
          v14 += 2;
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
          v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
          *(_WORD*)(v2 + 80) = v17;
          v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
          *(_QWORD*)(v2 + 88) = v18;
          v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
          *(_DWORD*)(v2 + 84) = v19;
          v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
          *(_WORD*)(v2 + 82) = v20;
          v21 = *v15;
          v15 += 2;
          v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
          v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
          *(_WORD*)(v2 + 80) = v13;
          v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
          *(_QWORD*)(v2 + 88) = v12;
          v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
          *(_DWORD*)(v2 + 84) = v11;
          result = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL);
          v10 = result | v20;
          *(_WORD*)(v2 + 82) = v10;
        } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
      }
      else {
        LOWORD(v10) = 0;
        v11 = 0;
        v12 = 0;
        LOWORD(v13) = 0;
        v14 = 0;
      }
      if ((v8 & 1) != 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                         8LL * (*(_DWORD*)(v4 + 4 * v14) & 0xFFF));
        *(_WORD*)(v2 + 80) = v13 | (1 << *(_BYTE*)(v23 + 104));
        *(_QWORD*)(v2 + 88) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
        *(_DWORD*)(v2 + 84) = (1 << *(_BYTE*)(v23 + 115)) | v11;
        *(_WORD*)(v2 + 82) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
