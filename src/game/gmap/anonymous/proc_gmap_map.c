#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64 GameRoutine_1686420(_QWORD*);
__int64 PrimitiveDrawManager_19931a0(__int64 result, __int64, unsigned __int64);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 GameData_225e7a0;
extern __int64 game_map_MapColorPalette_g_texture_archives;
void GameRoutine_658c00(__int64*);
void ProcGmapMap_Destructor(__int64 a1);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_1993840(__int64);
__int64* PrimitiveDrawManager_1994180(__int64* result);
__int64* game_gmap_anonymous_168a340(__int64****, _QWORD*, float);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 game_gmap_anonymous_168ad00(__int64);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneAlpha(__int64 result, const char*, char);
extern __int128 GameData_1a83090;
extern __int64 GameData_2265000;
extern __int64 game_gameui_MenuAnimator_instance_;
float LayoutAccessor_15638b0(__int64*, char*, char);
float fmodf(float, float);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
void game_gameui_1596b00(__int64);
__int64* ProcGmapMap_Unknown3(__int64 a1);
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
    if (!(vabds_f32(v9, v10) < 0x1.0000000000000p-23f)) {
      if (!(v9 > v10)) {
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
      if (!(vabds_f32(v21, v22) < 0x1.0000000000000p-23f)) {
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
                if (!(vabds_f32(v30, v31) < 0x1.0000000000000p-23f)) {
                  if (!(v30 > v31)) {
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
      if (!(vabds_f32(v41, v42) < 0x1.0000000000000p-23f)) {
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

void ProcGmapMap_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = *(_QWORD*)(a1 + 152);
  *(_BYTE*)(a1 + 408) = 0;
  if (v1 != 0) {
    *(_BYTE*)(v1 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  PrimitiveDrawManager_19931a0(
      game_map_MapColorPalette_g_texture_archives,
      (__int64)"Layout/Textures/GmapMapInfo/Spot_Normal.bntx", 0x2Cu);
  v5 = *(_QWORD*)(a1 + 384);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 392) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v7 + v8, v5);
  }
  v9 = *(_QWORD*)(a1 + 360);
  if (v9 != 0) {
    v10 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 368) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v10 + v11, v9);
  }
  v12 = *(_QWORD**)(a1 + 336);
  if (v12 == (_QWORD*)(a1 + 304)) {
    v13 = 32;
    goto LABEL_21;
  }
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  }
  v14 = *(_QWORD*)(a1 + 256);
  if (v14 != 0) {
    v15 = *(_QWORD*)(a1 + 264);
    if (v14 == v15) {
      goto LABEL_36;
    }
    do {
      v16 = *(_QWORD*)(v15 - 48);
      if (v16 != 0) {
        *(_QWORD*)(v15 - 40) = v16;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v17, v16);
      }
      v18 = *(_QWORD*)(v15 - 56);
      if (v18 != 0) {
        std___1___shared_weak_count___release_weak(v18);
      }
      v19 = *(_QWORD*)(v15 - 72);
      if (v19 != 0) {
        std___1___shared_weak_count___release_weak(v19);
      }
      v15 -= 104;
    } while (v15 != v14);
    v20 = *(_QWORD*)(a1 + 256);
    *(_QWORD*)(a1 + 264) = v14;
    v14 = v20;
    if (v20 != 0) {
    LABEL_36:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v21, v14);
    }
  }
  v22 = *(_QWORD*)(a1 + 232);
  if (v22 != 0) {
    v23 = *(_QWORD**)(a1 + 240);
    if ((_QWORD*)v22 == v23) {
      goto LABEL_43;
    }
    do {
      v23 -= 11;
      GameRoutine_1686420(v23);
    } while (v23 != (_QWORD*)v22);
    v24 = *(_QWORD*)(a1 + 232);
    *(_QWORD*)(a1 + 240) = v22;
    v22 = v24;
    if (v24 != 0) {
    LABEL_43:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v25, v22);
    }
  }
  v26 = *(_QWORD*)(a1 + 192);
  if (v26 != 0) {
    v27 = *(_QWORD*)(a1 + 200);
    if (v26 == v27) {
      goto LABEL_63;
    }
    do {
      if ((*(_BYTE*)(v27 - 32) & 1) != 0) {
        v28 = *(_QWORD*)(v27 - 16);
        if (v28 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v29, v28);
        }
      }
      if ((*(_BYTE*)(v27 - 56) & 1) != 0) {
        v30 = *(_QWORD*)(v27 - 40);
        if (v30 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v31, v30);
        }
      }
      v27 -= 96;
    } while (v27 != v26);
    v32 = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 200) = v26;
    v26 = v32;
    if (v32 != 0) {
    LABEL_63:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v33, v26);
    }
  }
  v34 = *(_QWORD*)(a1 + 176);
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = *(_QWORD*)(a1 + 160);
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak(v35);
  }
  GameData_225e7a0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

__int64* ProcGmapMap_Unknown3(__int64 a1)
{
  int8x16_t v1;
  int v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64*** v14;
  const char* v15;
  __int64 v16;
  const char* v17;
  __int64*** v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  int v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64* v41;
  char v42;
  unsigned __int64 v43;
  char v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  float v54;
  float v55;
  __int64** v56;
  float v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64*** v63;
  __int64** v64;
  __int64* v65;
  __int64 v66;
  _QWORD* v67;
  float32x4_t** v68;
  float32x2_t* v69;
  float32x2_t* v70;
  float32x2_t* v71;
  float32x2_t* v72;
  float v73;
  float32x2_t v74;
  float v75;
  __int128 v76;
  __int64* v77;
  __int64 v78;
  float v79;
  float v80;
  int v81;
  int v82;
  int v83;
  float v84;
  float v85;
  float v86;
  float v87;
  __int128 v88;
  float v89;
  float v90;
  float v91;
  float v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  float v106;
  __int64 v107;
  int v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  int v114;
  int v115;
  __int64 v116;
  __int64 v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  int v133;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64* v138;
  float v139;
  __int64 v140;
  int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  __int64* v145;
  __int64 v146;
  int v147;
  int v148;
  __int64 v149;
  __int64 v150;
  float v151;
  float v152;
  float32x2_t v153;
  __int64* v154;
  __int64 v155;
  int v156;
  int v157;
  __int128 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64* v163;
  __int64 v164;
  __int64 v165;
  int v166;
  int v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64* v171;
  float v172;
  __int64 v173;
  int v174;
  int v175;
  __int64 v176;
  __int64 v177;
  __int64* v178;
  __int64 v179;
  int v180;
  int v181;
  __int64 v182;
  __int64 v183;
  __int64* result;
  __int64 v185;
  __int64 v186;
  __int64*** v187;
  __int64** v188;
  __int64* v189;
  __int64 v190;
  float32x4_t* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  float32x4_t v197;
  float32x4_t v198;
  _QWORD* v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  float32x4_t** v203;
  float32x4_t** v204;
  float32x4_t* v205;
  __int64 v206;
  float32x2_t* v208;
  __int128 v209;
  float v210;
  __int128 v211;
  float v212;
  __int128 v213;
  unsigned int v214;
  float32x2_t v215;
  float v216;
  float v217;
  float32x4_t v218;
  float32x4_t v219;
  float v220;
  float v221;
  float32x4_t v222;
  float32x4_t* v223;
  float32x4_t v224;
  float v225;
  float32x4_t v226;
  float v227;
  float v228;
  float32x2_t v229;
  float32x2_t v230;
  float v231;
  float v232;
  int8x16_t v233;
  float v234;
  __int64 v235;
  float32x4_t v236;
  __int64 v237;
  float32x4_t v238;
  __int64 v239;
  int v240;
  int v241;
  float32x4_t v242;
  int8x16_t v243;
  float32x4_t v244;
  float32x4_t v245;
  float32x2_t v246;
  float32x4_t v247;
  float v248;
  float32x2_t v249;
  __int128 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  int v256;
  int v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  float v261;
  float v262;
  __int64 v263;
  int v264;
  int v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  int v270;
  int v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  float v276;
  float v277;
  unsigned __int64 v278;
  unsigned int v279;
  float v280;
  float v281;
  float v282;
  float v283;
  float v284;
  int8x16_t v285;
  unsigned __int64 v286;
  float v287;
  float32x4_t v288;
  float32x4_t v289;
  float32x4_t v290;
  int8x16_t v291;
  float32x4_t v292;
  int8x16_t v293;
  float32x4_t v294;
  float v295;
  __int64 v296;
  __int64 v297;
  int v298;
  int v299;
  int8x16_t v300;
  float v301;
  unsigned __int64 v302;
  float v303;
  __int128 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  int v310;
  int v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  float v316;
  float v317;
  __int64 v318;
  int v319;
  int v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  int v327;
  int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64*** v333;
  __int64** v334;
  __int64* v335;
  __int64 v336;
  _QWORD* v337;
  float32x4_t** v338;
  __int64* v339;
  __int64* j;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  char v344;
  float v345;
  __int128 v346;
  float32x2_t v347;
  float v348;
  __int64* v349;
  int v350;
  int v351;
  __int64 v352;
  int v353;
  float v354;
  float v355;
  float v356;
  float v357;
  __int128 v358;
  float v359;
  float v360;
  float v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64* v366;
  __int64 v367;
  __int64 v368;
  int v369;
  int v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64* v374;
  float v375;
  __int64 v376;
  int v377;
  int v378;
  __int64 v379;
  __int64 v380;
  __int64* v381;
  __int64 v382;
  int v383;
  int v384;
  __int64 v385;
  __int64 v386;
  _QWORD v387[2];
  struct {
    __int64*** v388;
    __int64 v389;
    __int64* v390;
    __int64**** v391;
  } v388_;
  struct {
    __int64 v392;
    __int64 v393;
  } v392_;
  struct {
    __int64** v394;
    __int64 v395;
  } v394_;
  __int64*** v396;

  v2 = 255;
  *(_QWORD*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 296) = -1;
  *(_DWORD*)(a1 + 280) = 1059061760;
  v4 = *(_QWORD*)(a1 + 336);
  if (v4 != 0) {
    if ((*(_BYTE*)(a1 + 409) & 1) == 0) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)game_gameui_MenuAnimator_instance_ + 24LL))(
            (void*)(game_gameui_MenuAnimator_instance_),
            game_gameui_MenuAnimator_instance_);
        v4 = *(_QWORD*)(a1 + 336);
        *(_BYTE*)(a1 + 409) = 1;
        if (v4 == 0) {
          GameRoutine_60a310();
        }
      }
      else {
        *(_BYTE*)(a1 + 409) = 1;
      }
    }
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v4 + 48LL))(
        v4, a1 + 296, a1 + 288, a1 + 280);
    v2 = *(unsigned __int8*)(a1 + 296);
  }
  v5 = *(_QWORD*)(a1 + 168);
  v6 = (unsigned int)(32897 * v2 * v2) >> 23;
  *(_BYTE*)(a1 + 296) = v6;
  ui_LayoutAccessor_SetPaneAlpha(v5, "N_Status", v6);
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(a1 + 168), "N_Impassable",
                                 *(_BYTE*)(a1 + 296));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(a1 + 168), "N_Pin",
                                 *(_BYTE*)(a1 + 296));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(a1 + 168), "N_UnitAll",
                                 *(_BYTE*)(a1 + 296));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(a1 + 168), "N_Cursor",
                                 *(_BYTE*)(a1 + 296));
  ui_LayoutAccessor_SetPaneAlpha(*(_QWORD*)(a1 + 168), "N_CursorSelect",
                                 *(_BYTE*)(a1 + 296));
  v7 = *(_QWORD*)(a1 + 288);
  v8 = *(__int64**)(a1 + 168);
  LODWORD(v388_.v389) = 0;
  LODWORD(v388_.v388) = v7;
  *((float*)&v388_.v388 + 1) = -*((float*)&v7 + 1);
  ui_LayoutAccessor_SetPaneTranslate(v8, "N_Body", (__int64)&v388_.v388);
  v9 = *(_QWORD*)(a1 + 192);
  v10 = *(_QWORD*)(a1 + 200);
  while (v9 != v10) {
    v11 = *(_QWORD*)(v9 + 48);
    if ((*(_BYTE*)(v9 + 40) & 1) == 0) {
      v11 = *(_BYTE*)(v9 + 40) >> 1;
    }
    if (v11 != 0) {
      if ((*(_BYTE*)(v9 + 40) & 1) != 0) {
        v12 = *(const char**)(v9 + 56);
      }
      else {
        v12 = (const char*)(v9 + 41);
      }
      LayoutAccessor_1560070((void*)(&v388_.v388), *(__int64**)(a1 + 168), v12);
      if (v388_.v389 == 0) {
        goto LABEL_10;
      }
      v13 = std___1___shared_weak_count_lock(v388_.v389);
      v14 = v388_.v388;
      if (v388_.v389 != 0) {
        std___1___shared_weak_count___release_weak(v388_.v389);
      }
      if (v13 != 0 && v14 != nullptr) {
        if (*(_BYTE*)(v9 + 36) != 0) {
          v15 = "Select";
        }
        else {
          v15 = "Default";
        }
        LayoutAccessor_1562cf0_alt1((__int64)v14, v15);
      LABEL_39:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        goto LABEL_10;
      }
    }
    else {
      v16 = *(_QWORD*)(v9 + 72);
      if ((*(_BYTE*)(v9 + 64) & 1) == 0) {
        v16 = *(_BYTE*)(v9 + 64) >> 1;
      }
      if (v16 == 0) {
        goto LABEL_10;
      }
      v17 = (*(_BYTE*)(v9 + 64) & 1) != 0 ? *(const char**)(v9 + 80)
                                          : (const char*)(v9 + 65);
      LayoutAccessor_1560070((void*)(&v388_.v388), *(__int64**)(a1 + 168), v17);
      if (v388_.v389 == 0) {
        goto LABEL_10;
      }
      v13 = std___1___shared_weak_count_lock(v388_.v389);
      v18 = v388_.v388;
      if (v388_.v389 != 0) {
        std___1___shared_weak_count___release_weak(v388_.v389);
      }
      if (v13 != 0 && v18 != nullptr) {
        LayoutAccessor_155e830((__int64)v18, *(_BYTE*)(v9 + 36));
        goto LABEL_39;
      }
    }
    if (v13 != 0) {
      goto LABEL_39;
    }
  LABEL_10:
    v9 += 96;
  }
  v19 = *(_QWORD*)(a1 + 232);
  for (i = *(_QWORD*)(a1 + 240); v19 != i; v19 += 88) {
    game_gameui_1596b00(v19 + 16);
  }
  v21 = *(_QWORD*)(a1 + 256);
  v22 = *(_QWORD*)(a1 + 264);
  if (v21 != v22) {
    v23 = &GameData_2265000;
    v24 = 0x20C49BA5E353F7CFLL;
    do {
      v25 = *(_QWORD*)(v21 + 32);
      if (v25 != 0) {
        v26 = std___1___shared_weak_count_lock(v25);
        if (v26 != 0) {
          v27 = *(__int64**)(v21 + 24);
          v28 = v26;
          if (v27 != nullptr &&
              (LayoutAccessor_155ea30_alt1(*(__int64**)(v21 + 24)) & 1) != 0) {
            v29 = *(_QWORD*)(v21 + 56);
            v30 = *(_QWORD*)(v21 + 64);
            if ((unsigned __int64)(v30 - v29) >= 0x11) {
              v31 = LayoutAccessor_15638b0(v27, "Change", 1);
              v32 = nn_os_ConvertToTimeSpan(*(_QWORD*)(v23[348] + 128));
              v33 =
                  (float)(__int64)(((__int64)((unsigned __int128)(v32 *
                                                                  (__int128)
                                                                      v24) >>
                                              64) >>
                                    7) +
                                   ((unsigned __int64)((unsigned __int128)(v32 *
                                                                           (__int128)
                                                                               v24) >>
                                                       64) >>
                                    63)) /
                  0x1.04ad660000000p+14f;
              v34 = floorf(v33 / v31);
              v35 = fmodf(v33, v31);
              v36 = v35 > 0x1.2000000000000p+6f;
              if (v35 > 0x1.3000000000000p+7f) {
                ++v36;
              }
              v37 = v36 + (unsigned int)(float)(v34 + v34);
              v38 = ((_BYTE)v36 +
                     (unsigned __int8)(unsigned int)(float)(v34 + v34)) &
                    1;
              v29 = *(_QWORD*)(v21 + 56);
              v30 = *(_QWORD*)(v21 + 64);
              v39 = v37 % ((v30 - v29) >> 4);
              if (*(_DWORD*)(v21 + 84) != v38 || *(_DWORD*)(v21 + 80) != v39) {
                *(_DWORD*)(v21 + 80) = v39;
                *(_DWORD*)(v21 + 84) = v38;
                *(_BYTE*)(v21 + 88) = 1;
              }
            }
            if (*(_BYTE*)(v21 + 88) == 1) {
              v40 = v24;
              v41 = v23;
              v42 = *(_BYTE*)(v21 + 97);
              v43 = v30 - v29;
              v44 = LayoutAccessor_1563280(v27, (__int64)"Change", 1);
              if (v43 < 0x11 || (v42 & 1) != 0) {
                v23 = v41;
                v24 = v40;
                if ((v44 & 1) != 0) {
                  LayoutAccessor_15636c0((__int64)v27, (__int64)"Change", 1,
                                         0x0.0p+0f);
                  LayoutAccessor_1563030((__int64)v27, (__int64)"Change", 0);
                  *(_DWORD*)(v21 + 84) = 0;
                }
              }
              else {
                if ((v44 & 1) == 0) {
                  GameHr_1562680((__int64)v27, "Change", 0x1.0000000000000p+0f);
                }
                v23 = v41;
                v45 = nn_os_ConvertToTimeSpan(*(_QWORD*)(v41[348] + 128));
                v24 = v40;
                v46 =
                    (float)(__int64)(((__int64)((unsigned __int128)(v45 *
                                                                    (__int128)
                                                                        v40) >>
                                                64) >>
                                      7) +
                                     ((unsigned __int64)((unsigned __int128)(v45 *
                                                                             (__int128)
                                                                                 v40) >>
                                                         64) >>
                                      63)) /
                    0x1.04ad660000000p+14f;
                v47 = LayoutAccessor_15638b0(v27, "Change", 1);
                v48 = fmodf(v46, v47);
                LayoutAccessor_15636c0((__int64)v27, (__int64)"Change", 1, v48);
              }
            }
            if (*(_BYTE*)(v21 + 88) == 1) {
              v49 = *(_QWORD*)(v21 + 56);
              v50 = *(_QWORD*)(v21 + 64);
              if (v49 != v50) {
                v51 = v50 - v49;
                v52 = *(_DWORD*)(v21 + 80);
                v53 = (v51 >> 4) - 1;
                if (v53 >= v52) {
                  v53 = *(_DWORD*)(v21 + 80);
                }
                if (v52 < 0) {
                  v53 = 0;
                }
                *(_DWORD*)(v21 + 80) = v53;
                game_gmap_anonymous_168ad00(v21);
              }
            }
            *(_BYTE*)(v21 + 88) = 0;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak(v28);
          }
        }
      }
      v21 += 104;
    } while (v21 != v22);
  }
  v54 = *(float*)(a1 + 640);
  v55 = *(float*)(a1 + 576);
  v56 = (__int64**)game_map_MapColorPalette_g_texture_archives;
  v388_.v388 = &v394_.v394;
  v388_.v389 = a1;
  v388_.v390 = &v392_.v392;
  v388_.v391 = &v396;
  v394_.v394 = (__int64**)game_map_MapColorPalette_g_texture_archives;
  v394_.v395 = a1;
  v392_.v392 = a1;
  v392_.v393 = game_map_MapColorPalette_g_texture_archives;
  v396 = (__int64***)game_map_MapColorPalette_g_texture_archives;
  game_gmap_anonymous_168a340(&v388_.v388, (_QWORD*)(a1 + 560),
                              v54 + (float)(v55 * 0x1.0000000000000p+1f));
  v57 = *(float*)(a1 + 640);
  v58 = 592;
  if (*(_BYTE*)(a1 + 224) != 0) {
    v58 = 608;
  }
  v59 = (__int64*)(a1 + v58);
  v61 = *v59;
  v60 = v59[1];
  v387[0] = v61;
  v387[1] = v60;
  game_gmap_anonymous_168a340(&v388_.v388, v387, v57);
  GameRoutine_1993840(**v56);
  v62 = **v56;
  *(_DWORD*)(v62 + 17328) = *(_DWORD*)(a1 + 228);
  v63 = *(__int64****)v62;
  *((_DWORD*)v63 + 4351) = 3;
  v64 = *v63;
  *((_DWORD*)v64 + 4327) = 1;
  v65 = *v64;
  *((_BYTE*)v65 + 17395) = 1;
  v66 = *v65;
  v67 = *(_QWORD**)v66;
  *(_DWORD*)(v66 + 17296) = 0;
  v68 = (float32x4_t**)PrimitiveDrawManager_19935e0(v67, (__int64)"Spot_Normal",
                                                    11, 0);
  GameRoutine_1994460(*v68);
  v70 = *(float32x2_t**)(a1 + 192);
  v69 = *(float32x2_t**)(a1 + 200);
  if (v70 != v69) {
    v71 = v70 + 3;
    do {
      v72 = v71 - 3;
      v73 = *(float*)(a1 + 280);
      LANES64(v74).n64_u64[0] = *(unsigned __int64*)(a1 + 568);
      v75 = *(float*)(a1 + 580);
      v76 = *(_OWORD*)(LANES64(v71[-3]).n64_u64[0] + 32);
      v77 = *v56;
      v78 = (*v56)[2342];
      v79 = (float)(*(float*)&v76 * v73) + 0x1.e000000000000p+9f;
      v80 = (float)(v73 * *((float*)&v76 + 2)) + 0x1.0e00000000000p+9f;
      v81 = *((_DWORD*)*v56 + 4800);
      v82 = *((_DWORD*)*v56 + 4320);
      v83 = v81 + 1;
      v84 = v79 + COERCE_FLOAT(*(_QWORD*)(a1 + 288));
      LODWORD(v85) = HIDWORD(*(_QWORD*)(a1 + 288));
      v86 = v80 + v85;
      LOBYTE(v85) = *(_BYTE*)(a1 + 296);
      v87 = (float)LODWORD(v85) / 0x1.fe00000000000p+7f;
      *(_QWORD*)&v88 = *(_QWORD*)(a1 + 560);
      LANES64(v74).n64_u32[1] = vmuls_lane_f32(v87, v74, 1);
      *((float32x2_t*)&v88 + 1) = v74;
      if (LANES64(v71[1]).n64_u8[4] == 1) {
        v89 = *(float*)(a1 + 648);
        *((_DWORD*)*v56 + 4800) = v83;
        v90 = v89 + (float)(v75 * 0x1.0000000000000p+1f);
        v91 = v84 - (float)(PSEUDO_UNFUSED(v90 * 0x1.0000000000000p-1f));
        v92 = v86 - (float)(PSEUDO_UNFUSED(v90 * 0x1.0000000000000p-1f));
        *(float*)&v93 = v91 + (float)(v90 * 0x0.0p+0f);
        if (v81 <= 262142) {
          *(float*)&v94 = v91 + (float)(v90 * 0x0.0p+0f);
          *((float*)&v94 + 1) = v92 + (float)(v90 * 0x0.0p+0f);
          v95 = v77[2392] + 40LL * v83;
          *(_QWORD*)(v95 + 8) = 0;
          *(_QWORD*)(v95 + 16) = 0;
          *(_OWORD*)(v95 + 24) = v88;
          *(_QWORD*)v95 = v94;
          v96 = v78 + 1440LL * v82 + 4LL * *(int*)(v78 + 1440LL * v82 + 256);
          ++*(_DWORD*)(v96 + 260);
        }
        v97 = *v56;
        *(float*)&v98 = v90 + v91;
        v99 = (*v56)[2342];
        v100 = *((_DWORD*)*v56 + 4800);
        v101 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v100 + 1;
        if (v100 <= 262142) {
          LODWORD(v102) = v98;
          *((float*)&v102 + 1) = v92 + (float)(v90 * 0x0.0p+0f);
          v103 = v97[2392] + 40LL * (v100 + 1);
          *(_DWORD*)(v103 + 8) = 0;
          *(_QWORD*)(v103 + 12) = 1065353216;
          *(_DWORD*)(v103 + 20) = 0;
          *(_OWORD*)(v103 + 24) = v88;
          *(_QWORD*)v103 = v102;
          v104 = v99 + 1440LL * v101 + 4LL * *(int*)(v99 + 1440LL * v101 + 256);
          ++*(_DWORD*)(v104 + 260);
        }
        v105 = *v56;
        v106 = v90 + v92;
        v107 = (*v56)[2342];
        v108 = *((_DWORD*)*v56 + 4800);
        v109 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v108 + 1;
        if (v108 <= 262142) {
          *((float*)&v98 + 1) = v106;
          v110 = v105[2392] + 40LL * (v108 + 1);
          *(_QWORD*)v110 = v98;
          *(_DWORD*)(v110 + 8) = 0;
          *(_QWORD*)(v110 + 12) = 0x3F8000003F800000LL;
          *(_DWORD*)(v110 + 20) = 0;
          *(_OWORD*)(v110 + 24) = v88;
          v111 =
              v107 + 1440LL * v109 + 4LL * *(int*)(v107 + 1440LL * v109 + 256);
          ++*(_DWORD*)(v111 + 260);
        }
        v112 = *v56;
        v113 = (*v56)[2342];
        v114 = *((_DWORD*)*v56 + 4800);
        v115 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v114 + 1;
        if (v114 <= 262142) {
          *((float*)&v93 + 1) = v106;
          v116 = v112[2392] + 40LL * (v114 + 1);
          *(_QWORD*)v116 = v93;
          *(_DWORD*)(v116 + 8) = 0;
          *(_QWORD*)(v116 + 12) = 0x3F80000000000000LL;
          *(_DWORD*)(v116 + 20) = 0;
          *(_OWORD*)(v116 + 24) = v88;
          v117 =
              v113 + 1440LL * v115 + 4LL * *(int*)(v113 + 1440LL * v115 + 256);
          ++*(_DWORD*)(v117 + 260);
        }
        LOBYTE(v92) = *(_BYTE*)(a1 + 296);
        v118 = v79 + COERCE_FLOAT(*(_QWORD*)(a1 + 288));
        v119 = v80 + COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 288)));
        v120 = *(float*)(a1 + 648);
        v121 = (float)LODWORD(v92) / 0x1.fe00000000000p+7f;
      }
      else {
        v122 = *(float*)(a1 + 644);
        *((_DWORD*)*v56 + 4800) = v83;
        v123 = v122 + (float)(v75 * 0x1.0000000000000p+1f);
        v124 = v84 - (float)(PSEUDO_UNFUSED(v123 * 0x1.0000000000000p-1f));
        v125 = v86 - (float)(PSEUDO_UNFUSED(v123 * 0x1.0000000000000p-1f));
        *(float*)&v126 = v124 + (float)(v123 * 0x0.0p+0f);
        if (v81 <= 262142) {
          *(float*)&v127 = v124 + (float)(v123 * 0x0.0p+0f);
          *((float*)&v127 + 1) = v125 + (float)(v123 * 0x0.0p+0f);
          v128 = v77[2392] + 40LL * v83;
          *(_QWORD*)(v128 + 8) = 0;
          *(_QWORD*)(v128 + 16) = 0;
          *(_OWORD*)(v128 + 24) = v88;
          *(_QWORD*)v128 = v127;
          v129 = v78 + 1440LL * v82 + 4LL * *(int*)(v78 + 1440LL * v82 + 256);
          ++*(_DWORD*)(v129 + 260);
        }
        v130 = *v56;
        *(float*)&v131 = v123 + v124;
        v132 = (*v56)[2342];
        v133 = *((_DWORD*)*v56 + 4800);
        v134 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v133 + 1;
        if (v133 <= 262142) {
          LODWORD(v135) = v131;
          *((float*)&v135 + 1) = v125 + (float)(v123 * 0x0.0p+0f);
          v136 = v130[2392] + 40LL * (v133 + 1);
          *(_DWORD*)(v136 + 8) = 0;
          *(_QWORD*)(v136 + 12) = 1065353216;
          *(_DWORD*)(v136 + 20) = 0;
          *(_OWORD*)(v136 + 24) = v88;
          *(_QWORD*)v136 = v135;
          v137 =
              v132 + 1440LL * v134 + 4LL * *(int*)(v132 + 1440LL * v134 + 256);
          ++*(_DWORD*)(v137 + 260);
        }
        v138 = *v56;
        v139 = v123 + v125;
        v140 = (*v56)[2342];
        v141 = *((_DWORD*)*v56 + 4800);
        v142 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v141 + 1;
        if (v141 <= 262142) {
          *((float*)&v131 + 1) = v139;
          v143 = v138[2392] + 40LL * (v141 + 1);
          *(_QWORD*)v143 = v131;
          *(_DWORD*)(v143 + 8) = 0;
          *(_QWORD*)(v143 + 12) = 0x3F8000003F800000LL;
          *(_DWORD*)(v143 + 20) = 0;
          *(_OWORD*)(v143 + 24) = v88;
          v144 =
              v140 + 1440LL * v142 + 4LL * *(int*)(v140 + 1440LL * v142 + 256);
          ++*(_DWORD*)(v144 + 260);
        }
        v145 = *v56;
        v146 = (*v56)[2342];
        v147 = *((_DWORD*)*v56 + 4800);
        v148 = *((_DWORD*)*v56 + 4320);
        *((_DWORD*)*v56 + 4800) = v147 + 1;
        if (v147 <= 262142) {
          *((float*)&v126 + 1) = v139;
          v149 = v145[2392] + 40LL * (v147 + 1);
          *(_QWORD*)v149 = v126;
          *(_DWORD*)(v149 + 8) = 0;
          *(_QWORD*)(v149 + 12) = 0x3F80000000000000LL;
          *(_DWORD*)(v149 + 20) = 0;
          *(_OWORD*)(v149 + 24) = v88;
          v150 =
              v146 + 1440LL * v148 + 4LL * *(int*)(v146 + 1440LL * v148 + 256);
          ++*(_DWORD*)(v150 + 260);
        }
        LOBYTE(v125) = *(_BYTE*)(a1 + 296);
        v118 = v79 + COERCE_FLOAT(*(_QWORD*)(a1 + 288));
        v119 = v80 + COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 288)));
        v120 = *(float*)(a1 + 644);
        v121 = (float)LODWORD(v125) / 0x1.fe00000000000p+7f;
      }
      v151 = v118 - (float)(PSEUDO_UNFUSED(v120 * 0x1.0000000000000p-1f));
      v152 = v119 - (float)(PSEUDO_UNFUSED(v120 * 0x1.0000000000000p-1f));
      *(float32x2_t*)&v158 = v71[-1];
      PSEUDO_LOW_LANE64(v153, n64_u64, LANES64(*(v71)).n64_u64[0]);
      v154 = *v56;
      HIDWORD(v159) = vmuls_lane_f32(
          v121, COERCE_AS(float32x2_t, LANES64(*(v71)).n64_u64[0]), 1);
      v155 = (*v56)[2342];
      v156 = *((_DWORD*)*v56 + 4800);
      v157 = *((_DWORD*)*v56 + 4320);
      *((_QWORD*)&v158 + 1) = v159;
      *(float*)&v159 = v151 + (float)(v120 * 0x0.0p+0f);
      *((_DWORD*)*v56 + 4800) = v156 + 1;
      if (v156 <= 262142) {
        *(float*)&v160 = v151 + (float)(v120 * 0x0.0p+0f);
        *((float*)&v160 + 1) = v152 + (float)(v120 * 0x0.0p+0f);
        v161 = v154[2392] + 40LL * (v156 + 1);
        *(_QWORD*)(v161 + 8) = 0;
        *(_QWORD*)(v161 + 16) = 0;
        *(_OWORD*)(v161 + 24) = v158;
        *(_QWORD*)v161 = v160;
        v162 = v155 + 1440LL * v157 + 4LL * *(int*)(v155 + 1440LL * v157 + 256);
        ++*(_DWORD*)(v162 + 260);
      }
      v163 = *v56;
      *(float*)&v164 = v120 + v151;
      v165 = (*v56)[2342];
      v166 = *((_DWORD*)*v56 + 4800);
      v167 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v166 + 1;
      if (v166 <= 262142) {
        LODWORD(v168) = v164;
        *((float*)&v168 + 1) = v152 + (float)(v120 * 0x0.0p+0f);
        v169 = v163[2392] + 40LL * (v166 + 1);
        *(_DWORD*)(v169 + 8) = 0;
        *(_QWORD*)(v169 + 12) = 1065353216;
        *(_DWORD*)(v169 + 20) = 0;
        *(_OWORD*)(v169 + 24) = v158;
        *(_QWORD*)v169 = v168;
        v170 = v165 + 1440LL * v167 + 4LL * *(int*)(v165 + 1440LL * v167 + 256);
        ++*(_DWORD*)(v170 + 260);
      }
      v171 = *v56;
      v172 = v120 + v152;
      v173 = (*v56)[2342];
      v174 = *((_DWORD*)*v56 + 4800);
      v175 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v174 + 1;
      if (v174 <= 262142) {
        *((float*)&v164 + 1) = v172;
        v176 = v171[2392] + 40LL * (v174 + 1);
        *(_QWORD*)v176 = v164;
        *(_DWORD*)(v176 + 8) = 0;
        *(_QWORD*)(v176 + 12) = 0x3F8000003F800000LL;
        *(_DWORD*)(v176 + 20) = 0;
        *(_OWORD*)(v176 + 24) = v158;
        v177 = v173 + 1440LL * v175 + 4LL * *(int*)(v173 + 1440LL * v175 + 256);
        ++*(_DWORD*)(v177 + 260);
      }
      v178 = *v56;
      v179 = (*v56)[2342];
      v180 = *((_DWORD*)*v56 + 4800);
      v181 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v180 + 1;
      if (v180 <= 262142) {
        *((float*)&v159 + 1) = v172;
        v182 = v178[2392] + 40LL * (v180 + 1);
        *(_QWORD*)v182 = v159;
        *(_DWORD*)(v182 + 8) = 0;
        *(_QWORD*)(v182 + 12) = 0x3F80000000000000LL;
        *(_DWORD*)(v182 + 20) = 0;
        *(_OWORD*)(v182 + 24) = v158;
        v183 = v179 + 1440LL * v181 + 4LL * *(int*)(v179 + 1440LL * v181 + 256);
        ++*(_DWORD*)(v183 + 260);
      }
      v71 += 12;
    } while (&v72[12] != v69);
  }
  result = PrimitiveDrawManager_1994180(**v396);
  if (*(_DWORD*)(a1 + 184) == 6) {
    v185 = v394_.v395;
    GameRoutine_1993840(**v394_.v394);
    v186 = **v394_.v394;
    *(_DWORD*)(v186 + 17328) = *(_DWORD*)(v185 + 228);
    v187 = *(__int64****)v186;
    *((_DWORD*)v187 + 4351) = 3;
    v188 = *v187;
    *((_DWORD*)v188 + 4327) = 1;
    v189 = *v188;
    *((_BYTE*)v189 + 17395) = 1;
    v190 = *v189;
    v191 = *(float32x4_t**)v190;
    *(_DWORD*)(v190 + 17296) = 0;
    GameRoutine_1994460(v191);
    v193 = *(_QWORD*)(a1 + 360);
    v192 = *(_QWORD*)(a1 + 368);
    if (v192 != v193) {
      v194 = *(_QWORD*)(a1 + 352);
      v195 = (v192 - v193) >> 3;
      v196 = 0;
      LANES128(v197).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v197).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v198).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v198).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      do {
        v199 = (_QWORD*)(v193 + 8 * v196);
        v200 = *v199;
        if (*(_BYTE*)(*v199 + 176LL) != 1) {
          v201 = v195 - 1;
          v202 = v194;
          if (v196 < v201) {
            v202 = v199[1];
          }
          v203 = *(float32x4_t***)(v200 + 48);
          v204 = *(float32x4_t***)(v200 + 56);
          if (v203 != v204) {
            do {
              v205 = *v203;
              v206 = LANES128(*((*v203))).n128_i64[1];
              if (*(_BYTE*)(v206 + 176) != 1 && v206 == v202) {
                v208 = (float32x2_t*)v392_.v392;
                v209 = *(_OWORD*)(a1 + 640);
                v210 = *(float*)(v392_.v392 + 280);
                v211 = *(_OWORD*)(LANES128(*(v205)).n128_u64[0] + 32);
                LANES64(v215).n64_f32[0] =
                    (float)(*(float*)&v211 * v210) + 0x1.e000000000000p+9f;
                v212 = (float)(v210 * *((float*)&v211 + 2)) +
                       0x1.0e00000000000p+9f;
                v213 = *(_OWORD*)(v206 + 32);
                v214 = 1;
                LANES64(v215).n64_f32[1] = v212;
                do {
                  v216 = (float)v214 / 0x1.4000000000000p+3f;
                  if (v216 >= 0x1.0000000000000p-1f) {
                    v219 = v205[5];
                    v222 = v205[6];
                    v218 = v205[4];
                    v217 = (float)(v216 + -0x1.0000000000000p-1f) +
                           (float)(v216 + -0x1.0000000000000p-1f);
                    v220 = 0x1.0000000000000p+0f - v217;
                    v223 = (float32x4_t*)(LANES128(*(v205)).n128_u64[1] + 32);
                    v221 = v220 * v220;
                  }
                  else {
                    v217 = v216 + v216;
                    v218 = v205[2];
                    v219 = v205[3];
                    v220 = 0x1.0000000000000p+0f - (float)(v216 + v216);
                    v221 = v220 * v220;
                    v222 = *(float32x4_t*)(LANES128(*(v205)).n128_u64[0] + 32);
                    v223 = v205 + 6;
                  }
                  v224 = vaddq_f32(
                      vaddq_f32(
                          vmulq_n_f32(v222, v220 * v221),
                          vmulq_n_f32(
                              v218,
                              v217 * (float)(v220 *
                                             (float)(v220 *
                                                     0x1.8000000000000p+1f)))),
                      vmulq_n_f32(
                          v219,
                          v217 *
                              (float)(v217 *
                                      (float)(v220 * 0x1.8000000000000p+1f))));
                  v225 = LANES64(v208[35]).n64_f32[0];
                  v226 = vaddq_f32(
                      v224, vmulq_n_f32(*v223, v217 * (float)(v217 * v217)));
                  v227 = (float)(LANES128(v226).n128_f32[0] * v225) +
                         0x1.e000000000000p+9f;
                  v228 = (float)(v225 * LANES128(v226).n128_f32[2]) +
                         0x1.0e00000000000p+9f;
                  LANES64(v229).n64_u64[0] = LANES64(v208[36]).n64_u64[0];
                  LANES64(v230).n64_u64[0] =
                      LANES64_OF(vadd_f32(v215, v229)).n64_u64[0];
                  v231 = LANES64(v230).n64_f32[1];
                  LANES128(v1).n128_f32[0] =
                      (float)(v227 + LANES64(v229).n64_f32[0]) -
                      LANES64(v230).n64_f32[0];
                  v233 = v1;
                  v232 = (float)(v228 + LANES64(v229).n64_f32[1]) -
                         LANES64(v230).n64_f32[1];
                  LANES128(v233).n128_f32[1] = v232;
                  if (LANES128(v1).n128_f32[0] != 0x0.0p+0f ||
                      (LANES128(v218).n128_u64[0] = LANES128(v233).n128_u64[0],
                       v232 != 0x0.0p+0f)) {
                    v234 = sqrtf((float)(PSEUDO_UNFUSED(v232 * v232)) +
                                 (float)(LANES128(v1).n128_f32[0] *
                                         LANES128(v1).n128_f32[0]));
                    LANES128(v218).n128_f32[0] =
                        LANES128(v1).n128_f32[0] / v234;
                    LANES128(v218).n128_f32[1] = v232 / v234;
                  }
                  v235 = v392_.v393;
                  LANES128(v236).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v233,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                          .n64_u64[0];
                  v237 = *(_QWORD*)v392_.v393;
                  *(int8x8_t*)&LANES128(v236).n128_i8[8] =
                      vqtbl1_s8(v233, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                  LANES128(v238).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v233,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                          .n64_u64[0];
                  v239 = *(_QWORD*)(*(_QWORD*)v392_.v393 + 18736LL);
                  v240 = *(_DWORD*)(*(_QWORD*)v392_.v393 + 19200LL);
                  v241 = *(_DWORD*)(*(_QWORD*)v392_.v393 + 17280LL);
                  *(int8x8_t*)&LANES128(v238).n128_i8[8] =
                      vqtbl1_s8(v233, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                  v242 = vmlsq_f32(vmulq_f32(v238, v198), v197, v236);
                  v243 = vmulq_f32(v242, v242);
                  LANES128(v243).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v243, v243, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v243).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v243).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(COERCE_AS(float32x2_t,
                                              LANES128(v243).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v243).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v243).n128_u64[1] = LANES128(v243).n128_u64[0];
                  v244 = vrsqrteq_f32(v243);
                  v1 = vceqzq_f32(v243);
                  v245 = vmulq_f32(v244,
                                   vrsqrtsq_f32(v244, vmulq_f32(v243, v244)));
                  LANES64(v246).n64_u64[0] = *(unsigned __int64*)(a1 + 632);
                  LANES64(v246).n64_u32[1] =
                      vmuls_lane_f32((float)LANES64(v208[37]).n64_u8[0] /
                                         0x1.fe00000000000p+7f,
                                     v246, 1);
                  v247 = vbicq_s8(
                      vmulq_f32(
                          v242,
                          vmulq_f32(v245,
                                    vrsqrtsq_f32(v245, vmulq_f32(v243, v245)))),
                      v1);
                  LANES128(v1).n128_u64[0] =
                      LANES64_OF(
                          vsub_f32(v230, COERCE_AS(float32x2_t,
                                                   LANES128(v218).n128_u64[0])))
                          .n64_u64[0];
                  *(_QWORD*)&v250 = *(_QWORD*)(a1 + 624);
                  *(_DWORD*)(*(_QWORD*)v392_.v393 + 19200LL) = v240 + 1;
                  v248 = v231 - LANES128(v218).n128_f32[1];
                  LANES64(v249).n64_u64[0] =
                      LANES128_OF(vmulq_n_f32(v247, *(float*)&v209))
                          .n128_u64[0];
                  *((float32x2_t*)&v250 + 1) = v246;
                  if (v240 <= 262142) {
                    LODWORD(v251) =
                        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t,
                                                      LANES128(v1).n128_u64[0]),
                                            v249))
                            .n64_u32[0];
                    v252 = *(_QWORD*)(v237 + 19136) + 40LL * (v240 + 1);
                    *((float*)&v251 + 1) = v248 + LANES64(v249).n64_f32[1];
                    *(_QWORD*)(v252 + 8) = 0;
                    *(_QWORD*)(v252 + 16) = 0;
                    *(_OWORD*)(v252 + 24) = v250;
                    *(_QWORD*)v252 = v251;
                    v253 = v239 + 1440LL * v241 +
                           4LL * *(int*)(v239 + 1440LL * v241 + 256);
                    ++*(_DWORD*)(v253 + 260);
                  }
                  v254 = *(_QWORD*)v235;
                  v255 = *(_QWORD*)(*(_QWORD*)v235 + 18736LL);
                  v256 = *(_DWORD*)(*(_QWORD*)v235 + 19200LL);
                  v257 = *(_DWORD*)(*(_QWORD*)v235 + 17280LL);
                  *(_DWORD*)(*(_QWORD*)v235 + 19200LL) = v256 + 1;
                  if (v256 <= 262142) {
                    LANES128(v1).n128_u32[0] =
                        LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                      LANES128(v1).n128_u64[0]),
                                            v249))
                            .n64_u32[0];
                    v258 = *(_QWORD*)(v254 + 19136) + 40LL * (v256 + 1);
                    LANES128(v1).n128_f32[1] = v248 - LANES64(v249).n64_f32[1];
                    *(_QWORD*)(v258 + 8) = 0;
                    *(_QWORD*)(v258 + 16) = 0;
                    *(_OWORD*)(v258 + 24) = v250;
                    *(_QWORD*)v258 = LANES128(v1).n128_u64[0];
                    v259 = v255 + 1440LL * v257 +
                           4LL * *(int*)(v255 + 1440LL * v257 + 256);
                    ++*(_DWORD*)(v259 + 260);
                  }
                  v260 = *(_QWORD*)v235;
                  v261 = (float)(v227 + LANES64(v229).n64_f32[0]) +
                         LANES128(v218).n128_f32[0];
                  v262 = (float)(v228 + LANES64(v229).n64_f32[1]) +
                         LANES128(v218).n128_f32[1];
                  v263 = *(_QWORD*)(*(_QWORD*)v235 + 18736LL);
                  v264 = *(_DWORD*)(*(_QWORD*)v235 + 19200LL);
                  v265 = *(_DWORD*)(*(_QWORD*)v235 + 17280LL);
                  *(_DWORD*)(*(_QWORD*)v235 + 19200LL) = v264 + 1;
                  if (v264 <= 262142) {
                    LANES128(v218).n128_f32[0] =
                        v261 - LANES64(v249).n64_f32[0];
                    v266 = *(_QWORD*)(v260 + 19136) + 40LL * (v264 + 1);
                    LANES128(v218).n128_f32[1] =
                        v262 - LANES64(v249).n64_f32[1];
                    *(_QWORD*)(v266 + 8) = 0;
                    *(_QWORD*)(v266 + 16) = 0;
                    *(_OWORD*)(v266 + 24) = v250;
                    *(_QWORD*)v266 = LANES128(v218).n128_u64[0];
                    v267 = v263 + 1440LL * v265 +
                           4LL * *(int*)(v263 + 1440LL * v265 + 256);
                    ++*(_DWORD*)(v267 + 260);
                  }
                  v268 = *(_QWORD*)v235;
                  v269 = *(_QWORD*)(v268 + 18736);
                  v270 = *(_DWORD*)(v268 + 19200);
                  v271 = *(_DWORD*)(v268 + 17280);
                  *(_DWORD*)(v268 + 19200) = v270 + 1;
                  if (v270 <= 262142) {
                    *(float*)&v272 = v261 + LANES64(v249).n64_f32[0];
                    v273 = *(_QWORD*)(v268 + 19136) + 40LL * (v270 + 1);
                    *((float*)&v272 + 1) = v262 + LANES64(v249).n64_f32[1];
                    *(_QWORD*)(v273 + 8) = 0;
                    *(_QWORD*)(v273 + 16) = 0;
                    *(_OWORD*)(v273 + 24) = v250;
                    *(_QWORD*)v273 = v272;
                    v274 = v269 + 1440LL * v271 +
                           4LL * *(int*)(v269 + 1440LL * v271 + 256);
                    ++*(_DWORD*)(v274 + 260);
                  }
                  LANES64(v215).n64_u64[0] =
                      __PAIR64__(LODWORD(v228), LODWORD(v227));
                  ++v214;
                } while (v214 != 10);
                v275 = v392_.v393;
                v276 = (float)(v210 * *((float*)&v213 + 2)) +
                       0x1.0e00000000000p+9f;
                v277 = (float)(*(float*)&v213 * v210) + 0x1.e000000000000p+9f;
                v278 = LANES64(v208[36]).n64_u64[0];
                v279 = LANES64(v208[37]).n64_u8[0];
                v280 = v227 + *(float*)&v278;
                v281 = v277 + *(float*)&v278;
                LANES128(v218).n128_f32[0] = v281 - v280;
                v282 = v228 + *((float*)&v278 + 1);
                v283 = v276 + *((float*)&v278 + 1);
                v285 = v218;
                v284 = v283 - (float)(v228 + *((float*)&v278 + 1));
                LANES128(v285).n128_f32[1] = v284;
                if ((float)(v281 - v280) != 0x0.0p+0f ||
                    (v286 = LANES128(v285).n128_u64[0], v284 != 0x0.0p+0f)) {
                  v287 = sqrtf((float)(PSEUDO_UNFUSED(v284 * v284)) +
                               (float)(LANES128(v218).n128_f32[0] *
                                       LANES128(v218).n128_f32[0]));
                  *(float*)&v286 = LANES128(v218).n128_f32[0] / v287;
                  *((float*)&v286 + 1) = v284 / v287;
                }
                LANES128(v288).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v285, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v288).n128_i8[8] =
                    vqtbl1_s8(v285, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v289).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v285, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v289).n128_i8[8] =
                    vqtbl1_s8(v285, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v290 = vmlsq_f32(vmulq_f32(v198, v289), v197, v288);
                v291 = vmulq_f32(v290, v290);
                LANES128(v291).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v291, v291, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v291).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v291).n128_u64[0] =
                    LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v291).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v291).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v291).n128_u64[1] = LANES128(v291).n128_u64[0];
                v292 = vrsqrteq_f32(v291);
                v293 = vceqzq_f32(v291);
                v294 =
                    vmulq_f32(v292, vrsqrtsq_f32(v292, vmulq_f32(v291, v292)));
                v295 = (float)v279;
                v296 = *(_QWORD*)v392_.v393;
                v297 = *(_QWORD*)(*(_QWORD*)v392_.v393 + 18736LL);
                v298 = *(_DWORD*)(*(_QWORD*)v392_.v393 + 19200LL);
                v299 = *(_DWORD*)(*(_QWORD*)v392_.v393 + 17280LL);
                v300 = vmulq_f32(
                    v290,
                    vmulq_f32(v294, vrsqrtsq_f32(v294, vmulq_f32(v291, v294))));
                v301 = v280 - *(float*)&v286;
                v302 = LANES128_OF(
                           vmulq_n_f32(vbicq_s8(v300, v293), *(float*)&v209))
                           .n128_u64[0];
                LANES128(v294).n128_u64[0] = *(_QWORD*)(a1 + 632);
                *(_QWORD*)&v304 = *(_QWORD*)(a1 + 624);
                v303 = v282 - *((float*)&v286 + 1);
                *(_DWORD*)(*(_QWORD*)v392_.v393 + 19200LL) = v298 + 1;
                LANES128(v294).n128_u32[1] = vmuls_lane_f32(
                    v295 / 0x1.fe00000000000p+7f,
                    COERCE_AS(float32x2_t, LANES128(v294).n128_u64[0]), 1);
                *((_QWORD*)&v304 + 1) = LANES128(v294).n128_u64[0];
                if (v298 <= 262142) {
                  *(float*)&v305 = v301 + *(float*)&v302;
                  v306 = *(_QWORD*)(v296 + 19136) + 40LL * (v298 + 1);
                  *((float*)&v305 + 1) = v303 + *((float*)&v302 + 1);
                  *(_QWORD*)(v306 + 8) = 0;
                  *(_QWORD*)(v306 + 16) = 0;
                  *(_OWORD*)(v306 + 24) = v304;
                  *(_QWORD*)v306 = v305;
                  v307 = v297 + 1440LL * v299 +
                         4LL * *(int*)(v297 + 1440LL * v299 + 256);
                  ++*(_DWORD*)(v307 + 260);
                }
                v308 = *(_QWORD*)v275;
                v309 = *(_QWORD*)(*(_QWORD*)v275 + 18736LL);
                v310 = *(_DWORD*)(*(_QWORD*)v275 + 19200LL);
                v311 = *(_DWORD*)(*(_QWORD*)v275 + 17280LL);
                *(_DWORD*)(*(_QWORD*)v275 + 19200LL) = v310 + 1;
                if (v310 <= 262142) {
                  *(float*)&v312 = v301 - *(float*)&v302;
                  v313 = *(_QWORD*)(v308 + 19136) + 40LL * (v310 + 1);
                  *((float*)&v312 + 1) = v303 - *((float*)&v302 + 1);
                  *(_QWORD*)(v313 + 8) = 0;
                  *(_QWORD*)(v313 + 16) = 0;
                  *(_OWORD*)(v313 + 24) = v304;
                  *(_QWORD*)v313 = v312;
                  v314 = v309 + 1440LL * v311 +
                         4LL * *(int*)(v309 + 1440LL * v311 + 256);
                  ++*(_DWORD*)(v314 + 260);
                }
                v315 = *(_QWORD*)v275;
                v316 = v281 + *(float*)&v286;
                v317 = v283 + *((float*)&v286 + 1);
                v318 = *(_QWORD*)(*(_QWORD*)v275 + 18736LL);
                v319 = *(_DWORD*)(*(_QWORD*)v275 + 19200LL);
                v320 = *(_DWORD*)(*(_QWORD*)v275 + 17280LL);
                *(_DWORD*)(*(_QWORD*)v275 + 19200LL) = v319 + 1;
                if (v319 <= 262142) {
                  *(float*)&v321 = v316 - *(float*)&v302;
                  v322 = *(_QWORD*)(v315 + 19136) + 40LL * (v319 + 1);
                  *((float*)&v321 + 1) = v317 - *((float*)&v302 + 1);
                  *(_QWORD*)(v322 + 8) = 0;
                  *(_QWORD*)(v322 + 16) = 0;
                  *(_OWORD*)(v322 + 24) = v304;
                  *(_QWORD*)v322 = v321;
                  v323 = v318 + 1440LL * v320 +
                         4LL * *(int*)(v318 + 1440LL * v320 + 256);
                  ++*(_DWORD*)(v323 + 260);
                }
                v324 = *(_QWORD*)v275;
                v325 = *(_QWORD*)v275 + 0x4000LL;
                v326 = *(_QWORD*)(*(_QWORD*)v275 + 18736LL);
                v327 = *(_DWORD*)(*(_QWORD*)v275 + 19200LL);
                v328 = *(_DWORD*)(*(_QWORD*)v275 + 17280LL);
                *(_DWORD*)(v325 + 2816) = v327 + 1;
                if (v327 <= 262142) {
                  *(float*)&v329 = v316 + *(float*)&v302;
                  v330 = *(_QWORD*)(v324 + 19136) + 40LL * (v327 + 1);
                  *((float*)&v329 + 1) = v317 + *((float*)&v302 + 1);
                  *(_QWORD*)(v330 + 8) = 0;
                  *(_QWORD*)(v330 + 16) = 0;
                  *(_OWORD*)(v330 + 24) = v304;
                  *(_QWORD*)v330 = v329;
                  v331 = v326 + 1440LL * v328 +
                         4LL * *(int*)(v326 + 1440LL * v328 + 256);
                  ++*(_DWORD*)(v331 + 260);
                }
              }
              ++v203;
            } while (v203 != v204);
            v193 = *(_QWORD*)(a1 + 360);
            v192 = *(_QWORD*)(a1 + 368);
          }
        }
        ++v196;
        v195 = (v192 - v193) >> 3;
      } while (v196 < v195);
    }
    PrimitiveDrawManager_1994180(**v396);
    GameRoutine_1993840(**v56);
    v332 = **v56;
    *(_DWORD*)(v332 + 17328) = *(_DWORD*)(a1 + 228);
    v333 = *(__int64****)v332;
    *((_DWORD*)v333 + 4351) = 3;
    v334 = *v333;
    *((_DWORD*)v334 + 4327) = 1;
    v335 = *v334;
    *((_BYTE*)v335 + 17395) = 1;
    v336 = *v335;
    v337 = *(_QWORD**)v336;
    *(_DWORD*)(v336 + 17296) = 0;
    v338 = (float32x4_t**)PrimitiveDrawManager_19935e0(
        v337, (__int64)"Spot_Normal", 11, 0);
    GameRoutine_1994460(*v338);
    v339 = *(__int64**)(a1 + 360);
    for (j = *(__int64**)(a1 + 368); v339 != j; ++v339) {
      v341 = *v339;
      v342 = *(_QWORD*)(a1 + 192);
      v343 = *(_QWORD*)(a1 + 200);
      if (v342 == v343) {
      LABEL_155:
        v344 = 0;
      }
      else {
        while (*(_QWORD*)v342 != v341) {
          v342 += 96;
          if (v342 == v343) {
            goto LABEL_155;
          }
        }
        v344 = *(_BYTE*)(v342 + 36);
      }
      v345 = *(float*)(a1 + 280);
      v346 = *(_OWORD*)(v341 + 32);
      LANES64(v347).n64_u64[0] = *(unsigned __int64*)(a1 + 632);
      v348 = (float)(v345 * *((float*)&v346 + 2)) + 0x1.0e00000000000p+9f;
      v349 = *v56;
      v350 = *((_DWORD*)*v56 + 4800);
      v351 = *((_DWORD*)*v56 + 4320);
      v352 = (*v56)[2342];
      v353 = v350 + 1;
      v354 = (float)((float)(*(float*)&v346 * v345) + 0x1.e000000000000p+9f) +
             COERCE_FLOAT(*(_QWORD*)(a1 + 288));
      LODWORD(v355) = HIDWORD(*(_QWORD*)(a1 + 288));
      v356 = v348 + v355;
      LOBYTE(v355) = *(_BYTE*)(a1 + 296);
      v357 = (float)LODWORD(v355) / 0x1.fe00000000000p+7f;
      *(_QWORD*)&v358 = *(_QWORD*)(a1 + 624);
      LANES64(v347).n64_u32[1] = vmuls_lane_f32(v357, v347, 1);
      *((float32x2_t*)&v358 + 1) = v347;
      if ((v344 & 1) != 0) {
        v359 = *(float*)(a1 + 648);
      }
      else {
        v359 = *(float*)(a1 + 644);
      }
      *((_DWORD*)*v56 + 4800) = v353;
      v360 = v354 - (float)(PSEUDO_UNFUSED(v359 * 0x1.0000000000000p-1f));
      v361 = v356 - (float)(PSEUDO_UNFUSED(v359 * 0x1.0000000000000p-1f));
      *(float*)&v362 = v360 + (float)(v359 * 0x0.0p+0f);
      if (v350 <= 262142) {
        *(float*)&v363 = v360 + (float)(v359 * 0x0.0p+0f);
        *((float*)&v363 + 1) = v361 + (float)(v359 * 0x0.0p+0f);
        v364 = v349[2392] + 40LL * v353;
        *(_QWORD*)(v364 + 8) = 0;
        *(_QWORD*)(v364 + 16) = 0;
        *(_OWORD*)(v364 + 24) = v358;
        *(_QWORD*)v364 = v363;
        v365 = v352 + 1440LL * v351 + 4LL * *(int*)(v352 + 1440LL * v351 + 256);
        ++*(_DWORD*)(v365 + 260);
      }
      v366 = *v56;
      *(float*)&v367 = v359 + v360;
      v368 = (*v56)[2342];
      v369 = *((_DWORD*)*v56 + 4800);
      v370 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v369 + 1;
      if (v369 <= 262142) {
        LODWORD(v371) = v367;
        *((float*)&v371 + 1) = v361 + (float)(v359 * 0x0.0p+0f);
        v372 = v366[2392] + 40LL * (v369 + 1);
        *(_DWORD*)(v372 + 8) = 0;
        *(_QWORD*)(v372 + 12) = 1065353216;
        *(_DWORD*)(v372 + 20) = 0;
        *(_OWORD*)(v372 + 24) = v358;
        *(_QWORD*)v372 = v371;
        v373 = v368 + 1440LL * v370 + 4LL * *(int*)(v368 + 1440LL * v370 + 256);
        ++*(_DWORD*)(v373 + 260);
      }
      v374 = *v56;
      v375 = v359 + v361;
      v376 = (*v56)[2342];
      v377 = *((_DWORD*)*v56 + 4800);
      v378 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v377 + 1;
      if (v377 <= 262142) {
        *((float*)&v367 + 1) = v375;
        v379 = v374[2392] + 40LL * (v377 + 1);
        *(_QWORD*)v379 = v367;
        *(_DWORD*)(v379 + 8) = 0;
        *(_QWORD*)(v379 + 12) = 0x3F8000003F800000LL;
        *(_DWORD*)(v379 + 20) = 0;
        *(_OWORD*)(v379 + 24) = v358;
        v380 = v376 + 1440LL * v378 + 4LL * *(int*)(v376 + 1440LL * v378 + 256);
        ++*(_DWORD*)(v380 + 260);
      }
      v381 = *v56;
      v382 = (*v56)[2342];
      v383 = *((_DWORD*)*v56 + 4800);
      v384 = *((_DWORD*)*v56 + 4320);
      *((_DWORD*)*v56 + 4800) = v383 + 1;
      if (v383 <= 262142) {
        *((float*)&v362 + 1) = v375;
        v385 = v381[2392] + 40LL * (v383 + 1);
        *(_QWORD*)v385 = v362;
        *(_DWORD*)(v385 + 8) = 0;
        *(_QWORD*)(v385 + 12) = 0x3F80000000000000LL;
        *(_DWORD*)(v385 + 20) = 0;
        *(_OWORD*)(v385 + 24) = v358;
        v386 = v382 + 1440LL * v384 + 4LL * *(int*)(v382 + 1440LL * v384 + 256);
        ++*(_DWORD*)(v386 + 260);
      }
    }
    return PrimitiveDrawManager_1994180(**v396);
  }
  return result;
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
    else if (GameData_1bee1cc[8 * (__int64)*(int*)(a1 + 184) + 4] == 1 &&
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
