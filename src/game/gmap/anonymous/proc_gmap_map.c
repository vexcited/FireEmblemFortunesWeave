#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1596140(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcGmapCarriageList_168a000(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_21c9700;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_20808f0[4];
long double GameRoutine_1689c20(_QWORD, _QWORD, _QWORD);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686770(
    __int64 a1, __int64* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686980(
    __int64 a1, __int64 a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure1_Invoke(__int64 a1,
                                                                  _QWORD* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure2_Invoke(__int64 a1,
                                                                  _QWORD* a2);
__int64 ProcGmapMap_1687d40_alt1(__int64 result,
                                 char** a2) __asm__("ProcGmapMap_1687d40");
__int64 GameRoutine_133f1d0(__int64);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1328460(__int64);
__int64 Impl_13287c0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool GameRoutine_133f0c0(__int64);
bool Impl_1328300(__int64);
char* ProcGmapMap_1686d40(char* result, char*, unsigned __int64, __int64*,
                          __int64);
extern _BYTE GameData_1bee1cc[80];
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202d4c8[])();
extern __int64* GameData_212c790;
extern __int64* GameData_2130e60;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310();
char* ProcGmapMap_1687160(char* result, char* a2, unsigned __int64 a3,
                          __int64* a4);
long double ProcGmapMap_1689c20(__int64 a1, __int64 a2, int* a3);
__int64 memmove(_QWORD, _QWORD, _QWORD);
unsigned __int64 ProcGmapMap_1687580(unsigned __int64 result, char* a2,
                                     char* a3, __int64 a4, __int64 a5,
                                     __int64 a6, __int64 a7);
void ProcGmapCarriageList_168a000_alt1(__int64*, __int64*) __asm__(
    "ProcGmapCarriageList_168a000");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGmapMap_1687d40(__int64 a1, char** a2);
__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686770(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  char v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = *((unsigned int*)a2 + 2);
  v4 = *((_BYTE*)a2 + 12);
  v5 = *((_BYTE*)a2 + 20);
  if ((_DWORD)v3 == 0) {
    LayoutAccessor_1562cf0(v2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(v2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v7 = result;
      if ((unsigned int)v3 > 3) {
        v8 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v8 = game_util_Format(GameData_20808f0[v3], "Main");
      }
      result = GameRoutine_136a920(ui_Manager_instance_ + 1264, v7, 0, 7, v8);
    }
  }
  if ((v4 & 1) == 0) {
    result = LayoutAccessor_155ea30(v2);
    if ((result & 1) != 0 && (v5 & 1) == 0) {
      LayoutAccessor_1562cf0(v2, "Status_Default");
      return LayoutAccessor_1562cf0(v2, "Enable");
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686980(
    __int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 216LL) + 8LL);
  v4 = strlen(v3);
  return GameRoutine_1596140(a2, v3, v4);
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure1_Invoke(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "SideStory");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "SideStory");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure2_Invoke(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

char* ProcGmapMap_1687160(char* result, char* a2, unsigned __int64 a3,
                          __int64* a4)
{

#pragma clang fp contract(off)
  __int64* v4;
  char* v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  bool v23;
  __int64* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  bool v32;
  unsigned __int64 v34;
  char* v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  bool v43;
  __int64 v45;
  __int64 v46;

  if (a3 == 0) {
    return result;
  }
  v4 = a4;
  v6 = result;
  if (a3 == 2) {
    v7 = *((_QWORD*)a2 - 1);
    v8 = *(_QWORD*)result;
    v9 = *(float*)(v7 + 52);
    v10 = *(float*)(*(_QWORD*)result + 52LL);
    if (vabds_f32(v9, v10) >= 0x1.0000000000000p-23f) {
      if (v9 <= v10) {
      LABEL_16:
        *v4 = v8;
        v13 = *((_QWORD*)a2 - 1);
      LABEL_58:
        v4[1] = v13;
        return result;
      }
    }
    else {
      result = (char*)strlen(v7 + 176);
      if ((unsigned __int64)result >= 6 && *(_DWORD*)(v7 + 176) == 1851088716 &&
          *(_WORD*)(v7 + 180) == 29801) {
        goto LABEL_16;
      }
      result = (char*)strlen(v8 + 176);
      if ((unsigned __int64)result < 6) {
        goto LABEL_16;
      }
      if (*(_DWORD*)(v8 + 176) != 1851088716 || *(_WORD*)(v8 + 180) != 29801) {
        goto LABEL_16;
      }
    }
    *v4 = v7;
    v13 = *(_QWORD*)v6;
    goto LABEL_58;
  }
  if (a3 == 1) {
    *a4 = *(_QWORD*)result;
    return result;
  }
  if ((__int64)a3 <= 8) {
    if (result == a2) {
      return result;
    }
    v14 = result + 8;
    *a4 = *(_QWORD*)result;
    if (result + 8 == a2) {
      return result;
    }
    v15 = 0;
    v16 = a4;
    v17 = a4;
    while (1) {
      v19 = *v17++;
      v18 = v19;
      v20 = *(_QWORD*)v14;
      v21 = *(float*)(*(_QWORD*)v14 + 52LL);
      v22 = *(float*)(v19 + 52);
      if (vabds_f32(v21, v22) >= 0x1.0000000000000p-23f) {
        if (v21 > v22) {
          goto LABEL_37;
        }
      }
      else {
        result = (char*)strlen(v20 + 176);
        if ((unsigned __int64)result < 6 ||
            (*(_DWORD*)(v20 + 176) == 1851088716
                 ? (v23 = *(unsigned __int16*)(v20 + 180) == 29801)
                 : (v23 = false),
             !v23)) {
          result = (char*)strlen(v18 + 176);
          if ((unsigned __int64)result >= 6 &&
              *(_DWORD*)(v18 + 176) == 1851088716 &&
              *(_WORD*)(v18 + 180) == 29801) {
          LABEL_37:
            v16[1] = v18;
            v25 = v4;
            if (v16 != v4) {
              v26 = v15;
              do {
                v27 = (__int64*)((char*)v4 + v26);
                v28 = *(_QWORD*)v14;
                v29 = *(__int64*)((char*)v4 + v26 - 8);
                v30 = *(float*)(*(_QWORD*)v14 + 52LL);
                v31 = *(float*)(v29 + 52);
                if (vabds_f32(v30, v31) >= 0x1.0000000000000p-23f) {
                  if (v30 <= v31) {
                    goto LABEL_53;
                  }
                }
                else {
                  result = (char*)strlen(v28 + 176);
                  if ((unsigned __int64)result >= 6 &&
                          (*(_DWORD*)(v28 + 176) == 1851088716
                               ? (v32 =
                                      *(unsigned __int16*)(v28 + 180) == 29801)
                               : (v32 = false),
                           v32) ||
                      (unsigned __int64)(result = (char*)strlen(v29 + 176)) <
                          6) {
                  LABEL_53:
                    v25 = v16;
                    goto LABEL_55;
                  }
                  if (*(_DWORD*)(v29 + 176) != 1851088716 ||
                      *(_WORD*)(v29 + 180) != 29801) {
                    v25 = (__int64*)((char*)v4 + v26);
                    goto LABEL_55;
                  }
                }
                --v16;
                v26 -= 8;
                *v27 = v29;
              } while (v26 != 0);
              v25 = v4;
            }
          LABEL_55:
            *v25 = *(_QWORD*)v14;
            goto LABEL_22;
          }
        }
      }
      *v17 = v20;
    LABEL_22:
      v14 += 8;
      v15 += 8;
      v16 = v17;
      if (v14 == a2) {
        return result;
      }
    }
  }
  v34 = a3 >> 1;
  v36 = &result[8 * (a3 >> 1)];
  v37 = 8 * (a3 >> 1);
  ProcGmapMap_1686d40(result, v36, v34, a4, v34);
  result = ProcGmapMap_1686d40(v36, a2, a3 - v34, &v4[v34], a3 - v34);
  if (v37 != 0) {
    v38 = v36;
    while (1) {
      if (v38 == a2) {
        while (v6 != v36) {
          v45 = *(_QWORD*)v6;
          v6 += 8;
          *v4++ = v45;
        }
        return result;
      }
      v39 = *(_QWORD*)v38;
      v40 = *(_QWORD*)v6;
      v41 = *(float*)(*(_QWORD*)v38 + 52LL);
      v42 = *(float*)(*(_QWORD*)v6 + 52LL);
      if (vabds_f32(v41, v42) >= 0x1.0000000000000p-23f) {
        if (v41 > v42) {
          goto LABEL_78;
        }
      }
      else {
        result = (char*)strlen(v39 + 176);
        if ((unsigned __int64)result < 6 ||
            (*(_DWORD*)(v39 + 176) == 1851088716
                 ? (v43 = *(unsigned __int16*)(v39 + 180) == 29801)
                 : (v43 = false),
             !v43)) {
          result = (char*)strlen(v40 + 176);
          if ((unsigned __int64)result >= 6 &&
              *(_DWORD*)(v40 + 176) == 1851088716 &&
              *(_WORD*)(v40 + 180) == 29801) {
          LABEL_78:
            *v4 = v39;
            v38 += 8;
            goto LABEL_62;
          }
        }
      }
      v6 += 8;
      *v4 = v40;
    LABEL_62:
      ++v4;
      if (v6 == v36) {
        goto LABEL_84;
      }
    }
  }
  v38 = v36;
LABEL_84:
  while (v38 != a2) {
    v46 = *(_QWORD*)v38;
    v38 += 8;
    *v4++ = v46;
  }
  return result;
}

unsigned __int64 ProcGmapMap_1687580(unsigned __int64 result, char* a2,
                                     char* a3, __int64 a4, __int64 a5,
                                     __int64 a6, __int64 a7)
{
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  bool v18;
  char* v20;
  __int64 v21;
  signed __int64 v22;
  char* v23;
  unsigned __int64 v24;
  float v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  float v29;
  bool v30;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  float v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  float v40;
  bool v41;
  bool v42;
  char* v43;
  char* v44;
  __int64 v45;
  char* v46;
  char* v47;
  char* v48;
  signed __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  signed __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  char* v65;
  char* v66;
  char* v67;
  __int64 v68;
  bool v69;
  char v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  char* v79;
  char* v80;
  __int64 v81;
  float v82;
  float v83;
  bool v84;
  __int64 v86;
  _QWORD* v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  float v92;
  float v93;
  bool v94;
  __int64 v96;
  __int64 v97;
  char* v98;
  char* v99;
  char* v100;
  _QWORD* v101;
  _QWORD* v102;
  char* v103;
  __int64 v105;

  v105 = a5;
  if (a5 == 0) {
    return result;
  }
  v11 = (char*)result;
  while (a4 > a7 && v105 > a7) {
    if (a4 == 0) {
      return result;
    }
    v12 = *(_QWORD*)a2;
    v13 = 0;
    v14 = 0;
    v15 = *(float*)(*(_QWORD*)a2 + 52LL);
    while (1) {
      v16 = *(_QWORD*)&v11[8 * v14];
      v17 = *(float*)(v16 + 52);
      if (vabds_f32(v15, v17) >= 0x1.0000000000000p-23f) {
        if (v15 > v17) {
          break;
        }
        goto LABEL_8;
      }
      result = strlen(v12 + 176);
      if (result < 6 || (*(_DWORD*)(v12 + 176) == 1851088716
                             ? (v18 = *(unsigned __int16*)(v12 + 180) == 29801)
                             : (v18 = false),
                         !v18)) {
        result = strlen(v16 + 176);
        if (result >= 6 && *(_DWORD*)(v16 + 176) == 1851088716 &&
            *(_WORD*)(v16 + 180) == 29801) {
          break;
        }
      }
    LABEL_8:
      ++v14;
      v13 -= 8LL;
      if (a4 == v14) {
        return result;
      }
    }
    v103 = &v11[-v13];
    if (a4 - v14 >= v105) {
      if (a4 - 1 == v14) {
        *(_QWORD*)&v11[8 * v14] = v12;
        *(_QWORD*)a2 = v16;
        return result;
      }
      v32 = (a4 - v14) / 2;
      v33 = &v11[8 * v32];
      if (a3 == a2) {
        v20 = a3;
        v44 = a3;
      LABEL_66:
        v23 = &v33[-v13];
        v45 = (v20 - v44) >> 3;
        goto LABEL_67;
      }
      v34 = *(_QWORD*)&v33[8 * v14];
      v102 = (_QWORD*)a6;
      v35 = (a3 - a2) >> 3;
      v100 = a3;
      v20 = a2;
      v36 = *(float*)(v34 + 52);
      v98 = v33;
      while (2) {
        v37 = v35 >> 1;
        v38 = &v20[8 * (v35 >> 1)];
        v39 = *(_QWORD*)v38;
        v40 = *(float*)(*(_QWORD*)v38 + 52LL);
        if (vabds_f32(v40, v36) >= 0x1.0000000000000p-23f) {
          if (v40 <= v36) {
            goto LABEL_45;
          }
        }
        else if ((unsigned __int64)strlen(v39 + 176) >= 6 &&
                     (*(_DWORD*)(v39 + 176) == 1851088716
                          ? (v41 = *(unsigned __int16*)(v39 + 180) == 29801)
                          : (v41 = false),
                      v41) ||
                 (unsigned __int64)strlen(v34 + 176) < 6 ||
                 (*(_DWORD*)(v34 + 176) == 1851088716
                      ? (v42 = *(unsigned __int16*)(v34 + 180) == 29801)
                      : (v42 = false),
                  !v42)) {
        LABEL_45:
          v35 = v37;
          if (v37 == 0) {
            a3 = v100;
            a6 = (__int64)v102;
            v33 = v98;
            v32 = (a4 - v14) / 2;
            v44 = a2;
            goto LABEL_66;
          }
          continue;
        }
        break;
      }
      v20 = v38 + 8;
      v37 = v35 + ~v37;
      goto LABEL_45;
    }
    v20 = &a2[8 * (v105 / 2)];
    if (&v11[-v13] != a2) {
      v21 = *(_QWORD*)v20;
      v22 = a2 - v11;
      v99 = a3;
      v101 = (_QWORD*)a6;
      v23 = &v11[-v13];
      v24 = (__int64)(v22 + v13) >> 3;
      v25 = *(float*)(*(_QWORD*)v20 + 52LL);
      while (1) {
        v26 = v24 >> 1;
        v27 = &v23[8 * (v24 >> 1)];
        v28 = *(_QWORD*)v27;
        v29 = *(float*)(*(_QWORD*)v27 + 52LL);
        if (vabds_f32(v25, v29) >= 0x1.0000000000000p-23f) {
          if (v25 > v29) {
            goto LABEL_25;
          }
        }
        else if ((unsigned __int64)strlen(v21 + 176) < 6 ||
                 (*(_DWORD*)(v21 + 176) == 1851088716
                      ? (v30 = *(unsigned __int16*)(v21 + 180) == 29801)
                      : (v30 = false),
                  !v30)) {
          if ((unsigned __int64)strlen(v28 + 176) >= 6 &&
              *(_DWORD*)(v28 + 176) == 1851088716 &&
              *(_WORD*)(v28 + 180) == 29801) {
            goto LABEL_25;
          }
        }
        v23 = v27 + 8;
        v26 = v24 + ~v26;
      LABEL_25:
        v24 = v26;
        if (v26 == 0) {
          a6 = (__int64)v101;
          v43 = v103;
          a3 = v99;
          goto LABEL_64;
        }
      }
    }
    v23 = a2;
    v43 = a2;
  LABEL_64:
    v45 = v105 / 2;
    v32 = (v23 - v43) >> 3;
  LABEL_67:
    v46 = v20;
    if (v23 != a2) {
      v46 = v23;
      if (a2 != v20) {
        v47 = v23 + 8;
        if (v23 + 8 == a2) {
          v54 = *(_QWORD*)v23;
          v55 = v20 - a2;
          v56 = v45;
          memmove(v23, v47, v55);
          v46 = &v23[v55];
          v45 = v56;
          *(_QWORD*)v46 = v54;
        }
        else {
          v48 = a2 + 8;
          if (a2 + 8 == v20) {
            v57 = *((_QWORD*)v20 - 1);
            v46 = v23 + 8;
            if (v20 - 8 != v23) {
              v58 = v45;
              memmove(v23 + 8, v23, v20 - 8 - v23);
              v45 = v58;
            }
            *(_QWORD*)v23 = v57;
          }
          else {
            v49 = a2 - v23;
            v50 = v45;
            v51 = (a2 - v23) >> 3;
            v52 = (v20 - a2) >> 3;
            if (v51 == v52) {
              v45 = v50;
              do {
                v53 = *((_QWORD*)v47 - 1);
                *((_QWORD*)v47 - 1) = *((_QWORD*)v48 - 1);
                *((_QWORD*)v48 - 1) = v53;
                if (v47 == a2) {
                  break;
                }
                v47 += 8;
                v18 = v48 == v20;
                v48 += 8;
              } while (!v18);
              v46 = a2;
            }
            else {
              v59 = (a2 - v23) >> 3;
              do {
                v60 = v59;
                v59 = v52;
                v52 = v60 % v52;
              } while (v52 != 0);
              if (8 * v59 != 0) {
                v61 = &v23[8 * v59];
                do {
                  v63 = *((_QWORD*)v61 - 1);
                  v61 -= 8;
                  v62 = v63;
                  v64 = &v61[v49];
                  v65 = v61;
                  do {
                    v66 = v64;
                    *(_QWORD*)v65 = *(_QWORD*)v64;
                    v67 = &v64[v49];
                    v68 = (v20 - v64) >> 3;
                    v69 = __OFSUB__(v51, v68);
                    v71 = v51 - v68;
                    v70 = (v71 < 0) ^ v69;
                    v64 = &v23[8 * v71];
                    if (v70) {
                      v64 = v67;
                    }
                    v65 = v66;
                  } while (v64 != v61);
                  *(_QWORD*)v66 = v62;
                } while (v61 != v23);
              }
              v46 = &v23[v20 - a2];
              v45 = v50;
            }
          }
        }
      }
    }
    v72 = v32;
    v73 = a4 - v32 - v14;
    v74 = v32 + v45;
    v75 = v105 - v45;
    if (v74 >= v105 + a4 - v74 - v14) {
      v75 = v45;
      result = ProcGmapMap_1687580(v46, v20, a3, v73, v105 - v45, a6, a7);
      v20 = v23;
      v11 = v103;
      v73 = v72;
      a3 = v46;
    }
    else {
      result = ProcGmapMap_1687580(v103, v23, v46, v72, v45, a6, a7);
      v11 = v46;
    }
    a4 = v73;
    v105 = v75;
    a2 = v20;
    if (v75 == 0) {
      return result;
    }
  }
  if (a4 <= v105) {
    if (v11 == a2) {
      return result;
    }
    v86 = -a6;
    v87 = (_QWORD*)a6;
    v88 = v11;
    do {
      v89 = *(_QWORD*)v88;
      v88 += 8;
      v86 -= 8;
      *v87++ = v89;
    } while (v88 != a2);
    while (1) {
      if (a2 == a3) {
        return memmove(v11, a6, -(a6 + v86));
      }
      v90 = *(_QWORD*)a2;
      v91 = *(_QWORD*)a6;
      v92 = *(float*)(*(_QWORD*)a2 + 52LL);
      v93 = *(float*)(*(_QWORD*)a6 + 52LL);
      if (vabds_f32(v92, v93) >= 0x1.0000000000000p-23f) {
        if (v92 > v93) {
          goto LABEL_140;
        }
      }
      else {
        result = strlen(v90 + 176);
        if (result < 6 ||
            (*(_DWORD*)(v90 + 176) == 1851088716
                 ? (v94 = *(unsigned __int16*)(v90 + 180) == 29801)
                 : (v94 = false),
             !v94)) {
          result = strlen(v91 + 176);
          if (result >= 6 && *(_DWORD*)(v91 + 176) == 1851088716 &&
              *(_WORD*)(v91 + 180) == 29801) {
          LABEL_140:
            *(_QWORD*)v11 = v90;
            a2 += 8;
            goto LABEL_124;
          }
        }
      }
      a6 += 8;
      *(_QWORD*)v11 = v91;
    LABEL_124:
      v11 += 8;
      if (v87 == (_QWORD*)a6) {
        return result;
      }
    }
  }
  if (a2 == a3) {
    return result;
  }
  v76 = 0;
  do {
    *(_QWORD*)(a6 + v76) = *(_QWORD*)&a2[v76];
    v76 += 8;
  } while (&a2[v76] != a3);
  v77 = (_QWORD*)(a6 + v76);
  while (a2 != v11) {
    v80 = a3;
    v79 = a2 - 8;
    v78 = *((_QWORD*)a2 - 1);
    v81 = *(v77 - 1);
    v82 = *(float*)(v81 + 52);
    v83 = *(float*)(v78 + 52);
    if (vabds_f32(v82, v83) >= 0x1.0000000000000p-23f) {
      if (v82 > v83) {
        goto LABEL_102;
      }
    }
    else {
      result = strlen(v81 + 176);
      if (result < 6 || (*(_DWORD*)(v81 + 176) == 1851088716
                             ? (v84 = *(unsigned __int16*)(v81 + 180) == 29801)
                             : (v84 = false),
                         !v84)) {
        result = strlen(v78 + 176);
        if (result >= 6 && *(_DWORD*)(v78 + 176) == 1851088716 &&
            *(_WORD*)(v78 + 180) == 29801) {
          goto LABEL_102;
        }
      }
    }
    v78 = v81;
    v79 = a2;
    --v77;
  LABEL_102:
    *((_QWORD*)v80 - 1) = v78;
    a3 = v80 - 8;
    a2 = v79;
    if (v77 == (_QWORD*)a6) {
      return result;
    }
  }
  if ((_QWORD*)a6 != v77) {
    v96 = -8;
    do {
      v97 = *--v77;
      *(_QWORD*)&a3[v96] = v97;
      v96 -= 8;
    } while (v77 != (_QWORD*)a6);
  }
  return result;
}

void ProcGmapMap_1687d40(__int64 a1, char** a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  long double v22;
  int v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  struct {
    __int64 v31;
    char gap8_[8];
    long double v32;
  } v31_;
  struct {
    int v33;
    bool v34;
    char gap37_[3];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v33_;

  v3 = *(_QWORD*)(a1 + 192);
  v4 = *(_QWORD*)(a1 + 200);
  v2 = (__int64*)(a1 + 192);
  for (i = fw_memory_g_heap_manager_ptr; v4 != v3; v4 -= 96) {
    if ((*(_BYTE*)(v4 - 32) & 1) != 0) {
      v8 = *(_QWORD*)(v4 - 16);
      if (v8 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)i + v9, v8);
      }
    }
    if ((*(_BYTE*)(v4 - 56) & 1) != 0) {
      v10 = *(_QWORD*)(v4 - 40);
      if (v10 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)i + v11, v10);
      }
    }
  }
  *(_QWORD*)(a1 + 200) = v3;
  v12 = *a2 != a2[1] && *(_QWORD*)*a2 != 0;
  *(_BYTE*)(a1 + 224) = v12;
  v13 = *(_QWORD*)(GameData_21c9700 + 8);
  v14 = *(__int64**)(v13 + 48);
  v15 = *(__int64**)(v13 + 56);
  if (v14 != v15) {
    while (1) {
      v16 = *v14;
      if (*(_BYTE*)(*v14 + 176) != 1 && *(_QWORD*)(v16 + 120) != 0 &&
          (unsigned __int8)Impl_13261c0_alt1(*v14) != 13 &&
          (unsigned __int8)Impl_13261c0_alt1(v16) != 12 &&
          (unsigned __int8)Impl_13261c0_alt1(v16) != 11) {
        break;
      }
      if (*(_BYTE*)(a1 + 224) == 1) {
        v18 = *a2;
        v17 = a2[1];
        if (*a2 != v17) {
          v19 = v17 - v18 - 8;
          if ((~(_BYTE)v19 & 0x18) == 0) {
          LABEL_33:
            if (v19 >= 0x18) {
              v18 += 16;
              while (1) {
                if (*((_QWORD*)v18 - 2) == v16) {
                  if (v18 - 16 != v17) {
                    goto LABEL_54;
                  }
                  goto LABEL_21;
                }
                if (*((_QWORD*)v18 - 1) == v16) {
                  v18 -= 8;
                  goto LABEL_53;
                }
                if (*(_QWORD*)v18 == v16) {
                  goto LABEL_53;
                }
                if (*((_QWORD*)v18 + 1) == v16) {
                  break;
                }
                v21 = v18 + 16;
                v18 += 32;
                if (v21 == v17) {
                  goto LABEL_21;
                }
              }
              if (v18 + 8 != v17) {
                goto LABEL_54;
              }
            }
            goto LABEL_21;
          }
          v20 = ((unsigned __int8)((unsigned int)v19 >> 3) + 1) & 3;
          while (*(_QWORD*)v18 != v16) {
            v18 += 8;
            if (--v20 == 0) {
              goto LABEL_33;
            }
          }
        }
      LABEL_53:
        if (v18 != v17) {
        LABEL_54:
          v33_.v39 = 0;
          v33_.v40 = 0;
          v33_.v37 = 0;
          v33_.v38 = 0;
          v33_.v35 = 0;
          v33_.v36 = 0;
          v31_.v31 = v16;
          v33_.v34 = true;
          v31_.v32 = ProcGmapMap_1689c20(a1, v16, &v33_.v33);
        LABEL_55:
          ProcGmapCarriageList_168a000_alt1(v2, &v31_.v31);
          if ((v33_.v38 & 1) != 0 && v33_.v40 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)i + v28, v33_.v40);
          }
          if ((v33_.v35 & 1) != 0 && v33_.v37 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)i + v29, v33_.v37);
          }
        }
      }
    LABEL_21:
      if (++v14 == v15) {
        return;
      }
    }
    v33_.v39 = 0;
    v33_.v40 = 0;
    v33_.v37 = 0;
    v33_.v38 = 0;
    v33_.v35 = 0;
    v33_.v36 = 0;
    v31_.v31 = v16;
    v22 = ProcGmapMap_1689c20(a1, v16, &v33_.v33);
    v23 = *(unsigned __int8*)(a1 + 224);
    v31_.v32 = v22;
    if (v23 == 1) {
      v25 = *a2;
      v24 = a2[1];
      if (*a2 != v24) {
        v26 = v24 - v25 - 8;
        if ((~(_BYTE)v26 & 0x18) != 0) {
          v27 = ((unsigned __int8)((unsigned int)v26 >> 3) + 1) & 3;
          while (*(_QWORD*)v25 != v16) {
            v25 += 8;
            if (--v27 == 0) {
              goto LABEL_47;
            }
          }
        }
        else {
        LABEL_47:
          if (v26 >= 0x18) {
            v25 += 16;
            while (1) {
              if (*((_QWORD*)v25 - 2) == v16) {
                v25 -= 16;
                goto LABEL_49;
              }
              if (*((_QWORD*)v25 - 1) == v16) {
                v25 -= 8;
                goto LABEL_49;
              }
              if (*(_QWORD*)v25 == v16) {
                goto LABEL_49;
              }
              if (*((_QWORD*)v25 + 1) == v16) {
                break;
              }
              v30 = v25 + 16;
              v25 += 32;
              if (v30 == v24) {
                goto LABEL_48;
              }
            }
            v25 += 8;
          }
          else {
          LABEL_48:
            v25 = a2[1];
          }
        }
      }
    LABEL_49:
      v33_.v34 = v25 != v24;
    }
    else {
      v33_.v34 = false;
    }
    goto LABEL_55;
  }
}

long double ProcGmapMap_1689c20(__int64 a1, __int64 a2, int* a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v7;
  _QWORD** v8;
  _QWORD** v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 (***v13)();
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64** v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;
  struct {
    __int64 (**v41)();
    __int64* v42;
    char gap48_[16];
    unsigned __int64* v43;
  } v41_;
  _QWORD* v44;

  *a3 = 78;
  v6 = GameData_212c790;
  v7 = *(_QWORD*)(*GameData_212c790 + 8);
  v8 = *(_QWORD***)(v7 + 8);
  v9 = *(_QWORD***)(v7 + 16);
  if (v8 != v9) {
    while (1) {
      v11 = *v8++;
      v10 = v11;
      if (*v11 == a2) {
        break;
      }
      if (v8 == v9) {
        goto LABEL_4;
      }
    }
    v17 = v10[12];
    if (v17 != 0) {
      v18 = *(unsigned __int8*)(v17 + 32);
      if (v18 == 1) {
        *a3 = 32;
        goto LABEL_42;
      }
      if (v18 == 2) {
        *a3 = 33;
        goto LABEL_42;
      }
    }
    else if (v10[69] == 0) {
      *a3 = 31;
      goto LABEL_42;
    }
  }
LABEL_4:
  v41_.v42 = (__int64*)&GameData_1ade186;
  v41_.v41 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_42;
  }
  v12 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v41_.v41);
  if (v12 == 0 || *(int*)(v12 + 32) < 1) {
    goto LABEL_42;
  }
  v13 = &v41_.v41;
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38 = 0;
  v41_.v41 = GameData_202d4c8;
  v41_.v42 = &v38_.v38;
  v41_.v43 = (unsigned __int64*)&v41_.v41;
  if (a2 == 0) {
    goto LABEL_24;
  }
  v14 = *(_QWORD*)(*v6 + 8);
  v15 = *(_QWORD**)(v14 + 8);
  v16 = *(_QWORD**)(v14 + 16);
  if (v15 == v16) {
    v13 = &v41_.v41;
  LABEL_24:
    v19 = 4;
    goto LABEL_25;
  }
  do {
    if (*(_QWORD*)*v15 == a2) {
      v44 = (_QWORD*)*v15;
      if (v41_.v43 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(unsigned __int64*, _QWORD**))(*v41_.v43 + 48))(v41_.v43,
                                                                  &v44);
    }
    ++v15;
  } while (v15 != v16);
  v13 = (__int64 (***)(void))v41_.v43;
  if (v41_.v43 == (unsigned __int64*)&v41_.v41) {
    goto LABEL_24;
  }
  if (v41_.v43 != nullptr) {
    v19 = 5;
  LABEL_25:
    ((__int64 (*)(__int64))(*v13)[v19])((__int64)v13);
  }
  v20 = v38_.v38;
  if (v38_.v38 == v38_.v39) {
    goto LABEL_38;
  }
  v21 = v38_.v38;
  while (1) {
    v22 = *(_QWORD*)(*(_QWORD*)v21 + 96LL);
    if ((v22 | *(_QWORD*)(*(_QWORD*)v21 + 552LL)) == 0) {
      v24 = 31;
      goto LABEL_37;
    }
    if (v22 != 0) {
      break;
    }
  LABEL_28:
    v21 += 8;
    if (v21 == v38_.v39) {
      goto LABEL_38;
    }
  }
  v23 = *(unsigned __int8*)(v22 + 32);
  if (v23 != 1) {
    if (v23 == 2) {
      v24 = 33;
      goto LABEL_37;
    }
    goto LABEL_28;
  }
  v24 = 32;
LABEL_37:
  *a3 = v24;
LABEL_38:
  if (v20 != 0) {
    v38_.v39 = v20;
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v25);
  }
LABEL_42:
  if (a2 != 0) {
    v26 = *(_QWORD*)(*v6 + 8);
    v27 = *(__int64**)(v26 + 8);
    v28 = *(__int64**)(v26 + 16);
    while (v27 != v28) {
      v29 = *v27;
      if (*(_QWORD*)*v27 == a2) {
        v30 = *(_QWORD*)(v29 + 96);
        if (v30 != 0 && (unsigned int)*(unsigned __int8*)(v30 + 32) - 3 < 2) {
          if ((GameRoutine_133f1d0(*v27) & 1) == 0 &&
              (*(_WORD*)(v29 + 544) & 8) != 0 && !GameRoutine_133f0c0(v29)) {
            v31 = 3;
            goto LABEL_68;
          }
          goto LABEL_67;
        }
      }
      ++v27;
    }
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
  LABEL_60:
    if ((unsigned __int8)Impl_13261c0_alt1(a2) == 3) {
      if ((Impl_13287c0(a2) & 1) == 0) {
      LABEL_62:
        v31 = 1;
        goto LABEL_68;
      }
    }
    else if (GameData_1bee1cc[8 * *(int*)(a1 + 184) + 4] == 1 &&
             (unsigned __int8)Impl_13261c0_alt1(a2) == 2 && Impl_1328300(a2) &&
             (Impl_1328460(a2) & 1) == 0) {
      goto LABEL_62;
    }
  LABEL_67:
    v31 = 0;
    goto LABEL_68;
  }
  v32 = *(__int64***)(*GameData_2130e60 + 8);
  v33 = *v32;
  v34 = v32[1];
  if (*v32 == v34) {
  LABEL_59:
    if ((*(_BYTE*)(a2 + 178) & 4) != 0) {
      v31 = 2;
      goto LABEL_68;
    }
    goto LABEL_60;
  }
  v31 = 3;
  while (1) {
    v35 = *v33++;
    if (*(_QWORD*)(*(_QWORD*)(v35 + 112) + 48LL) == *(_QWORD*)(a2 + 120)) {
      break;
    }
    if (v33 == v34) {
      goto LABEL_59;
    }
  }
LABEL_68:
  if ((*(_BYTE*)(a2 + 178) & 1) != 0) {
    v36 = a1 + 432;
  }
  else {
    v36 = a1 + 496;
  }
  return *(long double*)(v36 + 16 * v31);
}

#pragma GCC visibility pop
