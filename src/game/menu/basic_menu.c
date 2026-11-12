#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2131c30[52];
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212d638[10];
__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3);
__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5);
__int64 BasicMenu_16e17e0(_QWORD* a1);
__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2);
__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4);
__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3);
__int64 BasicMenu_16e25a0(__int64 result, char a2);
__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 GameRoutine_16e3a80_alt1(__int64 result, __int64*, __int64, __int64,
                                 char) __asm__("GameRoutine_16e3a80");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_TutorialInfo_CreateBind(__int64, __int64**);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_9c2e00();
__int64 BasicMenu_16dc800(__int64 a1);
__int64 BasicMenu_16dd280(_QWORD* a1);
__int64 BasicMenu_16e1f40(__int64 result, __int64 a2, __int64 a3);
__int64 BasicMenu_16e2860(__int64 result, char a2);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 BasicMenuCursor_16e0520(__int64);
__int64 GameRoutine_149eb70(__int64 result);
__int64 GameRoutine_16e0120(__int64 result, int);
__int64 GameRoutine_19ed870(__int64, char);
__int64 GameRoutine_19ed8f0(__int64, char);
__int64 GameRoutine_19ed970(__int64, char);
__int64 GameRoutine_19ed9f0(__int64, char);
__int64 GameRoutine_19eda70(__int64, char);
__int64 GameRoutine_19edaf0(__int64, char);
__int64 game_159e540(__int64);
__int64 game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(__int64 result,
                                                              __int64);
__int64 game_menu_16e7880(__int64 result, int, char);
__int64 game_menu_16ec3d0(__int64, __int64);
__int64 game_menu_anonymous_ProcMouseGuide_ProcMouseGuide(__int64, char, int);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
extern __int64 (*GameData_209ccb0[])();
extern __int64* GameData_212d630[11];
extern __int64* GameData_212d640[9];
extern __int64 GameData_2131c20[54];
extern __int64 game_g_game_setting_ptr;
extern char game_sound_g_vibration_enabled;
unsigned __int64 strlen(const char*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void __attribute__((noreturn)) String_60a1d0();
__int64 BasicMenu_16dea40(__int64 result, char a2, unsigned __int8 a3,
                          unsigned __int8 a4);
__int64 BasicMenu_16df7a0(__int64 result);
__int64 game_menu_BasicMenu_StickRCall(__int64 a1);
__int64 BasicMenu_16e1a00(unsigned __int64* a1);

__int64 BasicMenu_16dc800(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64* v11;
  } v10_;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 528LL))((void*)(&v10_.v10), (__int64)a1);
  result = game_menu_TutorialInfo_CreateBind(a1, &v10_.v10);
  v3 = v10_.v10;
  if (v10_.v10 != nullptr) {
    v4 = v10_.v11;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v10_.v10 == v10_.v11) {
      goto LABEL_12;
    }
    v6 = v10_.v11;
    do {
      v7 = *((_BYTE*)v6 - 24);
      v6 -= 3;
      if ((v7 & 1) != 0 && *(v4 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
      }
      v4 = v6;
    } while (v6 != v3);
    v10_.v11 = v3;
    if (v10_.v10 != nullptr) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
    }
  }
  return result;
}

__int64 BasicMenu_16dd280(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  __int128 v16;
  unsigned int v17;
  __int64 v18;

  if (a1[108] == 0 || (v3 = a1[107]) == 0) {
  LABEL_20:
    v13 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
    if (((*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1) & 1) != 0) {
      v14 = game_ProcFadeView_instance_;
      if (game_ProcFadeView_instance_ == 0) {
        return (unsigned int)(v14 + v13);
      }
      v15 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v15 + 172) == *(float*)(v15 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v15 + 160) + 16LL))(v15 +
                                                                       160);
      }
      else {
        v16 = *(_OWORD*)(v15 + 208);
      }
      if (*((float*)&v16 + 3) == 1.0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(
                            v15 + 160, *((float*)&v16 + 3)))
                .n128_f32[3] == 1.0f) {
          v14 = 1010;
        }
        else {
          v14 = 0;
        }
        return (unsigned int)(v14 + v13);
      }
    }
    v14 = 0;
    return (unsigned int)(v14 + v13);
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = a1[106];
  if (v5 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[108];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
    LABEL_11:
      v8 = a1[107];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_20;
      }
      goto LABEL_17;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_20;
  }
  v8 = a1[107];
  if (v8 == 0) {
    return 0;
  }
LABEL_17:
  result = std___1___shared_weak_count_lock(v8);
  if (result == 0) {
    return 0;
  }
  v11 = a1[106];
  v12 = result;
  if (v11 != 0) {
    result = *(unsigned int*)(v11 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    v18 = v12;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v12 + 16LL))((void*)v12, v12);
    std___1___shared_weak_count___release_weak(v18);
    result = v17;
  }
  if (v11 == 0) {
    return 0;
  }
  return result;
}

__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;

  *(_DWORD*)(a1 + 660) = a3;
  *(_DWORD*)(a1 + 664) = a3;
  *(_DWORD*)(a1 + 656) = a2 - 1;
  *(_QWORD*)(a1 + 792) = *(_QWORD*)(a1 + 784);
  *(_QWORD*)(a1 + 816) = *(_QWORD*)(a1 + 808);
  if (a2 < 1) {
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, 1, &v16);
    v11 = *(_QWORD*)(a1 + 816);
    v12 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v14 = v11 - v12;
    v13 = v14 == 0;
    v15 = v14 >> 2;
    if (!v13) {
      if (v15 < 2) {
        return result;
      }
      v10 = v12 + 4;
      goto LABEL_8;
    }
    v9 = 1 - v15;
  }
  else {
    v4 = (unsigned int)a2;
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, (unsigned int)a2, &v16);
    v6 = *(_QWORD*)(a1 + 816);
    v7 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v8 = (v6 - v7) >> 2;
    v9 = v4 - v8;
    if (v4 <= v8) {
      if (v4 >= v8) {
        return result;
      }
      v10 = v7 + 4 * v4;
    LABEL_8:
      *(_QWORD*)(a1 + 816) = v10;
      return result;
    }
  }
  return GameRoutine_6e5a40(a1 + 808, v9, &v16);
}

__int64 BasicMenu_16dea40(__int64 result, char a2, unsigned __int8 a3,
                          unsigned __int8 a4)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  _QWORD* v5;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64* v20;
  __int64* v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BOOL4 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  float v36;
  float v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  float v44;
  int v45;
  int v46;
  int v47;
  int v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  int v63;
  __int64* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  __int64 v74;

  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
  v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
  v4 = *(_QWORD**)(result + 232);
  v5 = *(_QWORD**)(result + 240);
  if (v4 == v5) {
    return result;
  }
  v9 = result;
  v10 = 0;
  while (1) {
    v11 = *v4;
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
    if ((result & 1) != 0) {
      break;
    }
  LABEL_3:
    if (++v4 == v5) {
      return result;
    }
  }
  if (v11 != *(_QWORD*)(v9 + 336)) {
    ++v10;
    goto LABEL_3;
  }
  if (v10 != -1) {
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)(v9 + 176) + 8LL))(v9 + 176),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)(v9 + 176) + 16LL))(v9 + 176),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
    v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
    v14 = v13;
    v15 = a3 & (v13 == 1);
    v16 = *(_DWORD*)(v9 + 552);
    v17 = v10 / v13 - v15;
    if (v16 > v17 ||
        (v15 == 0 ? (v18 = 1) : (v18 = 2), v17 = v18 + v10 / v13 - v12,
         v19 = *(_DWORD*)(v9 + 552), v16 < v17)) {
      *(_DWORD*)(v9 + 552) = v17;
      v19 = v17;
    }
    v20 = *(__int64**)(v9 + 232);
    v21 = *(__int64**)(v9 + 240);
    if (v20 == v21) {
      v22 = 0;
    }
    else {
      v22 = 0;
      do {
        v23 = *v20++;
        v22 += (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23) & 1,
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
      } while (v20 != v21);
      v19 = *(_DWORD*)(v9 + 552);
    }
    if ((((v14 + v22 - 1) / v14 - v12) &
         ~(((v14 + v22 - 1) / v14 - v12) >> 31)) < v19) {
      v19 = ((v14 + v22 - 1) / v14 - v12) &
            ~(((v14 + v22 - 1) / v14 - v12) >> 31);
    }
    v24 = v19 & ~(v19 >> 31);
    *(_DWORD*)(v9 + 552) = v24;
    game_menu_16e7880(v9 + 408, v24, a2 & 1),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
    if (*(_QWORD*)(v9 + 968) != 0) {
      v25 = *(_QWORD*)(v9 + 960);
      if (v25 != 0) {
        v26 = (__int64*)(v9 + 952);
        v27 = std___1___shared_weak_count_lock_alt1(v25),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v27 == 0) {
          goto LABEL_33;
        }
        v28 = *v26;
        if (*v26 != 0) {
          v22 = *(unsigned __int8*)(v28 + 24);
          v29 = v28 + 152;
          if (v22 == 0) {
            v29 = 0;
          }
          v30 = v29 != *(_QWORD*)(v9 + 968);
        }
        else {
          v30 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v31 = v27;
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s2", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v31),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v47 = COERCE_AS(__typeof__(v47),
                              PSEUDO_REGISTER(float, "s2", "=w"));
        }
        if (!v30) {
          if ((v22 & 1) == 0) {
            goto LABEL_60;
          }
        }
        else {
        LABEL_33:
          v32 = *(_QWORD*)(v9 + 960);
          if (v32 == 0 || *(_QWORD*)(v32 + 8) == -1) {
            goto LABEL_60;
          }
        }
        v33 = *(_DWORD*)(v9 + 552);
        v34 = *(_DWORD*)(v9 + 556);
        if ((a2 & 1) != 0 || v16 != v33) {
          v36 = *(float*)(v9 + 220);
          *(_DWORD*)(v9 + 560) = v34;
          v35 = (int)(float)(v36 * (float)v33);
          v37 = 0x1.0000000000000p+3f;
          if ((a4 & (unsigned __int8)~a2 & 1) != 0) {
            v37 = 0x0.0p+0f;
          }
          else {
            v34 = v35;
          }
          *(_DWORD*)(v9 + 564) = v35;
          *(float*)(v9 + 568) = v37;
        }
        else {
          v35 = *(_DWORD*)(v9 + 564);
        }
        *(_DWORD*)(v9 + 556) = v35;
        BasicMenuCursor_16e0520(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        (*(void (**)(__int64))(*(_QWORD*)v9 + 712LL))(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        v38 = *(_QWORD**)(v9 + 232);
        v39 = *(_QWORD**)(v9 + 240);
        while (v38 != v39) {
          v40 = *v38;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v38 + 48LL))(*v38) & 1) !=
              0) {
            (*(void (**)(__int64))(*(_QWORD*)v40 + 144LL))(v40),
                v46 = COERCE_AS(__typeof__(v46),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
          ++v38;
        }
        (*(void (**)(__int64))(*(_QWORD*)v9 + 720LL))(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        v41 = ui_LayoutAccessor_FindPane((__int64*)(v9 + 952), "L_Cursor"),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
        v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v41 != 0) {
          v42 = *(_DWORD*)(v41 + 56);
          *(_QWORD*)(v9 + 376) = *(_QWORD*)(v41 + 48);
          v43 = *(_QWORD*)v9;
          *(_DWORD*)(v9 + 384) = v42;
          v44 = (*(float (**)(__int64))(v43 + 1072))(v9),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
          v47 = COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
          v45 = *(_DWORD*)(v9 + 400);
          *(float*)(v9 + 388) = v44;
          *(_DWORD*)(v9 + 392) = v46;
          *(_DWORD*)(v9 + 396) = v47;
          if (v45 == 2) {
            *(_DWORD*)(v9 + 400) = 0;
          }
          if ((a2 & 1) != 0) {
            v48 = *(_DWORD*)(v9 + 396);
            *(_QWORD*)(v9 + 376) = *(_QWORD*)(v9 + 388);
            *(_DWORD*)(v9 + 384) = v48;
            *(_DWORD*)(v9 + 400) = 2;
          }
        }
        *(_DWORD*)(v9 + 556) = v34;
        BasicMenuCursor_16e0520(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        (*(void (**)(__int64))(*(_QWORD*)v9 + 712LL))(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
        v49 = *(_QWORD**)(v9 + 232);
        v50 = *(_QWORD**)(v9 + 240);
        while (v49 != v50) {
          v51 = *v49;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v49 + 48LL))(*v49) & 1) !=
              0) {
            (*(void (**)(__int64))(*(_QWORD*)v51 + 144LL))(v51),
                v46 = COERCE_AS(__typeof__(v46),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v47 = COERCE_AS(__typeof__(v47),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
          ++v49;
        }
        (*(void (**)(__int64))(*(_QWORD*)v9 + 720LL))(v9),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s1", "=w")),
            v47 =
                COERCE_AS(__typeof__(v47), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  LABEL_60:
    v52 = *(_QWORD*)(v9 + 336);
    if (v52 != 0) {
      v53 = *(__int64**)(v9 + 232);
      v54 = *(__int64**)(v9 + 240);
      if (v53 == v54) {
      LABEL_65:
        v57 = 0;
        *(_DWORD*)(v9 + 640) = -1;
        v58 = *(_QWORD*)(v9 + 632);
        v59 = *(char**)(v58 + 232);
        v60 = *(char**)(v58 + 240);
      }
      else {
        v55 = 0;
        while (1) {
          v56 = *v53++;
          if (v56 == v52) {
            break;
          }
          ++v55;
          if (v53 == v54) {
            goto LABEL_65;
          }
        }
        v58 = *(_QWORD*)(v9 + 632);
        *(_DWORD*)(v9 + 640) = v55;
        v59 = *(char**)(v58 + 232);
        v60 = *(char**)(v58 + 240);
        if (v59 == v60) {
          goto LABEL_72;
        }
        v61 = v60 - v59 - 8;
        v62 = (v61 >> 3) + 1;
        if (v61 >= 0x18) {
          v67 = v62 & 0x3FFFFFFFFFFFFFFCLL;
          v68 = 0;
          v64 = *(__int64**)(v58 + 232);
          while (v55 != v68) {
            v69 = v68;
            v70 = v68 + 1;
            if (v55 == v70) {
              ++v64;
              break;
            }
            v71 = v70 + 1;
            if (v55 == v71) {
              v64 += 2;
              break;
            }
            v72 = v71 + 1;
            if (v55 == v72) {
              v64 += 3;
              break;
            }
            v64 += 4;
            v67 -= 4;
            v68 = v72 + 1;
            if (v67 == 0) {
              v63 = v69 + 4;
              v65 = v62 & 3;
              if (v65 != 0) {
                goto LABEL_69;
              }
              goto LABEL_72;
            }
          }
        LABEL_84:
          v57 = *v64;
        }
        else {
          v63 = 0;
          v64 = *(__int64**)(v58 + 232);
          v65 = v62 & 3;
          if (v65 != 0) {
          LABEL_69:
            v66 = v63 - v55;
            while (v66 != 0) {
              ++v64;
              ++v66;
              if (--v65 == 0) {
                goto LABEL_72;
              }
            }
            goto LABEL_84;
          }
        LABEL_72:
          v57 = 0;
        }
      }
      if (v59 == v60) {
        v73 = -1;
      }
      else {
        v73 = 0;
        do {
          v74 = *(_QWORD*)v59;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v59 + 48LL))(
                   *(_QWORD*)v59) &
               1) != 0) {
            if (v74 == v57) {
              goto LABEL_92;
            }
            ++v73;
          }
          v59 += 8;
        } while (v59 != v60);
        v73 = -1;
      LABEL_92:
        v58 = *(_QWORD*)(v9 + 632);
      }
      *(_DWORD*)(v9 + 644) = v73 - *(_DWORD*)(v58 + 552);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 704LL))(v9);
  }
  return result;
}

__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5)
{
  __int64 result;
  int v7;
  char v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  __int64 v11;

  result = *(_QWORD*)(a1 + 336);
  if ((a3 & 1) == 0 && result == a2) {
    v7 = 4;
    if (result == 0) {
      goto LABEL_13;
    }
  LABEL_9:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    if ((result & 1) != 0) {
      v7 = 4;
    }
    else {
      v7 = 0;
    }
    goto LABEL_13;
  }
  if (result != 0) {
    v8 = a5;
    v9 = a4;
    v10 = a3;
    v11 = a2;
    (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    a2 = v11;
    a3 = v10;
    a4 = v9;
    a5 = v8;
  }
  *(_QWORD*)(a1 + 336) = a2;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, a4 & 1, (a3 & a4 & 1) == 0,
                                              a5 & 1);
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    v7 = 4;
    goto LABEL_13;
  }
  (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
  result = *(_QWORD*)(a1 + 336);
  v7 = 4;
  if (result != 0) {
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v7;
  return result;
}

__int64 BasicMenu_16df7a0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  char v16;
  bool v17;
  int v18;
  char v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  char v23;
  int v24;
  unsigned int v25;
  char v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  char v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  char v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  char v47;
  int v48;
  int v49;
  int v50;
  int v51;
  __int64* i;
  __int64* v53;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;
  struct {
    __int64 v57;
    __int64 v58;
  } v57_;
  struct {
    __int64 v59;
    __int64 v60;
  } v59_;
  struct {
    __int64 v61;
    __int64 v62;
  } v61_;

  v1 = result;
  if ((*(_BYTE*)(result + 361) & 1) == 0 && *(_BYTE*)(result + 280) == 1) {
    v2 = *(_QWORD**)(result + 232);
    v3 = *(_QWORD**)(result + 240);
    *(_BYTE*)(result + 280) = 0;
    if (v2 == v3) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
    }
    v4 = 0;
    do {
      v5 = *v2;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 48LL))(*v2);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
        v4 += result & 1;
      }
      ++v2;
    } while (v2 != v3);
    if (v4 == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
    }
  }
  if ((*(_BYTE*)(v1 + 356) & 2) == 0) {
    game_sound_g_vibration_enabled = 0;
    v6 = game_g_game_setting_ptr;
    v7 = *(_QWORD*)game_g_game_setting_ptr;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 1 ||
         (*(_BYTE*)(v7 + 804) & 1) == 0 &&
             (*(_BYTE*)(v7 + 940) != 1 || (*(_BYTE*)(v7 + 805) & 1) == 0 ||
              (*(_BYTE*)(v7 + 806) & 1) == 0)) &&
        (*(_BYTE*)(v7 + 903) != 1 ||
         (*(_BYTE*)(v7 + 900) & 1) == 0 &&
             (*(_BYTE*)(v7 + 940) != 1 || (*(_BYTE*)(v7 + 901) & 1) == 0 ||
              *(_BYTE*)(v7 + 902) != 1))) {
      goto LABEL_51;
    }
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 544LL))(v1);
    v7 = *(_QWORD*)v6;
    if ((v8 & 1) != 0) {
      goto LABEL_51;
    }
    if (*(_BYTE*)(v7 + 807) != 1 ||
        (*(_BYTE*)(v7 + 804) & 1) == 0 &&
            (*(_BYTE*)(v7 + 940) != 1 || (*(_BYTE*)(v7 + 805) & 1) == 0 ||
             (*(_BYTE*)(v7 + 806) & 1) == 0)) {
      if (*(_BYTE*)(v7 + 903) != 1 ||
          (*(_BYTE*)(v7 + 900) & 1) == 0 &&
              (*(_BYTE*)(v7 + 940) != 1 || (*(_BYTE*)(v7 + 901) & 1) == 0 ||
               *(_BYTE*)(v7 + 902) != 1)) {
        goto LABEL_51;
      }
      if (*(_BYTE*)(v7 + 807) == 0) {
        goto LABEL_39;
      }
    }
    if ((*(_BYTE*)(v7 + 804) & 1) != 0 || *(_BYTE*)(v7 + 940) == 1 &&
                                              *(_BYTE*)(v7 + 805) == 1 &&
                                              (*(_BYTE*)(v7 + 806) & 1) != 0) {
      if ((*(_BYTE*)(v7 + 764) & 0x10) == 0) {
      LABEL_51:
        v11 = *(_DWORD*)(v7 + 952);
        if ((v11 & 3) != 0 || (*(_BYTE*)(v7 + 944) & 8) != 0) {
          v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 920LL))(v1);
          if (v12 != 0) {
            v10 = v12;
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 592LL))(v1, v12);
            goto LABEL_67;
          }
          v11 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v11 & 1) != 0) {
          v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 800LL))(v1);
          if (v13 != 0) {
          LABEL_61:
            v10 = v13;
            goto LABEL_67;
          }
          v11 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v11 & 2) != 0) {
          v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 808LL))(v1);
          if (v13 != 0) {
            goto LABEL_61;
          }
          v11 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v11 & 4) != 0) {
          v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 816LL))(v1);
          if (v10 != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 600LL))(v1, v10);
          }
        }
        else {
          v10 = 0;
        }
      LABEL_67:
        v14 = *(_DWORD*)(*(_QWORD*)v6 + 944LL);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 928LL))(v1) & 1) != 0) {
          v15 = ((v14 & 0xC00) == 0) |
                (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 944LL))(v1) ^ 1;
          v16 = v15 & ((v14 & 0x1000) == 0);
        }
        else {
          v16 = 1;
          LOBYTE(v15) = 1;
        }
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 936LL))(v1) & 1) != 0) {
          v17 = (v14 & 0x800) == 0;
          v18 = ((v14 & 0x3000) == 0) |
                (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 944LL))(v1) ^ 1;
          v19 = v18 & v17;
        }
        else {
          LOBYTE(v18) = 1;
          v19 = 1;
        }
        if (v10 == 0 && (v15 & 1) != 0 &&
            (*(_BYTE*)(*(_QWORD*)v6 + 949LL) & 0x10) != 0 &&
            (((v20 = *(_DWORD*)(*(_QWORD*)v6 + 952LL)) & 0x1000) != 0 &&
                 (v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 824LL))(v1)) !=
                     0 ||
             (v21 = (*(__int64 (**)(__int64, bool))(*(_QWORD*)v1 + 832LL))(
                  v1, (v20 & 0x1000) != 0)) != 0)) {
          v10 = v21;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 608LL))(v1, v21);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v1 + 400LL))((void*)(&v61_.v61), v1);
          game_159e540((__int64)&v61_.v61);
          v22 = v61_.v62;
          if (v61_.v62 == 0) {
            goto LABEL_120;
          }
          goto LABEL_104;
        }
        v23 = v16 ^ 1;
        if (v10 != 0) {
          v23 = 1;
        }
        if ((v23 & 1) == 0 && (*(_BYTE*)(*(_QWORD*)v6 + 949LL) & 0x20) != 0 &&
            (((v24 = *(_DWORD*)(*(_QWORD*)v6 + 952LL)) & 0x2000) != 0 &&
                 (v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 840LL))(v1)) !=
                     0 ||
             (v25 = (*(__int64 (**)(__int64, bool))(*(_QWORD*)v1 + 848LL))(
                  v1, (v24 & 0x2000) != 0)) != 0)) {
          v10 = v25;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 616LL))(v1, v25);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v1 + 408LL))((void*)(&v59_.v59), v1);
          game_159e540((__int64)&v59_.v59);
          v22 = v59_.v60;
          if (v59_.v60 == 0) {
            goto LABEL_120;
          }
          goto LABEL_104;
        }
        v26 = v19 ^ 1;
        if (v10 != 0) {
          v26 = 1;
        }
        if ((v26 & 1) == 0 && (*(_BYTE*)(*(_QWORD*)v6 + 949LL) & 4) != 0 &&
            (((v27 = *(_DWORD*)(*(_QWORD*)v6 + 952LL)) & 0x400) != 0 &&
                 (v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 856LL))(v1)) !=
                     0 ||
             (v28 = (*(__int64 (**)(__int64, bool))(*(_QWORD*)v1 + 864LL))(
                  v1, (v27 & 0x400) != 0)) != 0)) {
          v10 = v28;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 624LL))(v1, v28);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v1 + 416LL))((void*)(&v57_.v57), v1);
          game_159e540((__int64)&v57_.v57);
          v22 = v57_.v58;
          if (v57_.v58 == 0) {
            goto LABEL_120;
          }
          goto LABEL_104;
        }
        if (v10 != 0 || (v18 & 1) == 0) {
          if (v10 != 0) {
            goto LABEL_120;
          }
        }
        else if ((*(_BYTE*)(*(_QWORD*)v6 + 949LL) & 8) != 0 &&
                 (((v29 = *(_DWORD*)(*(_QWORD*)v6 + 952LL)) & 0x800) != 0 &&
                      (v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 872LL))(
                           v1)) != 0 ||
                  (v30 = (*(__int64 (**)(__int64, bool))(*(_QWORD*)v1 + 880LL))(
                       v1, (v29 & 0x800) != 0)) != 0)) {
          v10 = v30;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 632LL))(v1, v30);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)v1 + 424LL))((void*)(&v55_.v55), v1);
          game_159e540((__int64)&v55_.v55);
          v22 = v55_.v56;
          if (v55_.v56 == 0) {
          LABEL_120:
            result = GameRoutine_16e0120(v1, v10);
          LABEL_121:
            game_sound_g_vibration_enabled = 0;
            return result;
          }
        LABEL_104:
          std___1___shared_weak_count___release_weak_alt1(v22);
          goto LABEL_120;
        }
        v31 = *(_QWORD*)v6;
        v32 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        if ((v32 & 0x10) != 0) {
          v33 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 888LL))(v1);
          if (v33 != 0) {
            v10 = v33;
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 640LL))(v1, v33);
            goto LABEL_120;
          }
          v31 = *(_QWORD*)v6;
          v32 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v32 & 0x20) != 0) {
          v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 904LL))(v1);
          if (v34 != 0) {
            v10 = v34;
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 648LL))(v1, v34);
            goto LABEL_120;
          }
          v31 = *(_QWORD*)v6;
          v32 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v32 & 0x80) != 0) {
          v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 896LL))(v1);
          if (v35 != 0) {
          LABEL_119:
            v10 = v35;
            goto LABEL_120;
          }
          v31 = *(_QWORD*)v6;
          v32 = *(_DWORD*)(*(_QWORD*)v6 + 952LL);
        }
        if ((v32 & 0x40) != 0) {
          v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 912LL))(v1);
          if (v35 != 0) {
            goto LABEL_119;
          }
          v31 = *(_QWORD*)v6;
        }
        if ((*(_BYTE*)(v31 + 944) & 8) != 0) {
          v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 432LL))(v1);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 440LL))(v1) & 1) != 0) {
            v37 = 944;
          }
          else {
            v37 = 948;
          }
        }
        else {
          v36 = 0;
          v37 = 948;
        }
        result = GameRoutine_149eb70(v1);
        if ((result & 1) != 0) {
          goto LABEL_167;
        }
        v38 = *(_QWORD*)v6;
        v39 = *(_DWORD*)(*(_QWORD*)v6 + 944LL);
        if (*(_DWORD*)(v1 + 352) == 0) {
          v40 = 948;
          if ((v36 & 1) != 0) {
            v40 = 944;
          }
          v41 = *(_DWORD*)(v38 + v40);
          if ((v39 & 0x80000) == 0 && (v41 & 0x8000) != 0) {
            v42 = (*(_DWORD*)(v38 + 952) & 0x8000) != 0;
          LABEL_139:
            result = GameRoutine_19ed8f0(v1 + 176, v42);
            goto LABEL_140;
          }
          if ((v39 & 0x8000) == 0 && (v41 & 0x80000) != 0) {
            v42 = (*(_DWORD*)(v38 + 952) & 0x80000) != 0;
            goto LABEL_139;
          }
          if ((v39 & 0x188000) == 0 &&
              (*(_DWORD*)(v38 + 948) & 0x800000) != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 192LL))(v1);
            if ((unsigned int)result > 0x18 ||
                ((1 << result) & 0x1800060) == 0) {
              result = GameRoutine_19edaf0(
                  v1 + 176, (*(_DWORD*)(*(_QWORD*)v6 + 952LL) & 0x800000) != 0);
            }
          }
        }
      LABEL_140:
        v43 = *(_DWORD*)(v1 + 352);
        if ((v43 | v39 & 0x88000) != 0) {
          goto LABEL_151;
        }
        v44 = *(_QWORD*)v6;
        v45 = 948;
        if ((v36 & 1) != 0) {
          v45 = 944;
        }
        v46 = *(_DWORD*)(v44 + v45);
        if ((v39 & 0x100000) != 0 || (v46 & 0x10000) == 0) {
          if ((v39 & 0x10000) != 0 || (v46 & 0x100000) == 0) {
            if ((v39 & 0x110000) == 0 &&
                (*(_DWORD*)(v44 + 948) & 0x1000000) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 192LL))(v1);
              if ((unsigned int)result > 0x18 ||
                  ((1 << result) & 0x1800060) == 0) {
                result = GameRoutine_19eda70(
                    v1 + 176,
                    (*(_DWORD*)(*(_QWORD*)v6 + 952LL) & 0x1000000) != 0);
              }
            }
            goto LABEL_150;
          }
          v47 = (*(_DWORD*)(v44 + 952) & 0x100000) != 0;
        }
        else {
          v47 = (*(_DWORD*)(v44 + 952) & 0x10000) != 0;
        }
        result = GameRoutine_19ed870(v1 + 176, v47);
      LABEL_150:
        v43 = *(_DWORD*)(v1 + 352);
      LABEL_151:
        if (v43 == 0) {
          v48 = *(_DWORD*)(*(_QWORD*)v6 + v37);
          if ((v39 & 0x200000) != 0 || (v48 & 0x20000) == 0) {
            v43 = 0;
            if ((v39 & 0x20000) != 0 || (v48 & 0x200000) == 0) {
              goto LABEL_159;
            }
            v49 = 0x200000;
          }
          else {
            v49 = 0x20000;
          }
          result = GameRoutine_19ed970(
              v1 + 176, (*(_DWORD*)(*(_QWORD*)v6 + 952LL) & v49) != 0);
          v43 = *(_DWORD*)(v1 + 352);
        }
      LABEL_159:
        if ((v43 | v39 & 0x220000) == 0) {
          v50 = *(_DWORD*)(*(_QWORD*)v6 + v37);
          if ((v39 & 0x400000) == 0 && (v50 & 0x40000) != 0) {
            v51 = 0x40000;
          LABEL_166:
            result = GameRoutine_19ed9f0(
                v1 + 176, (*(_DWORD*)(*(_QWORD*)v6 + 952LL) & v51) != 0);
            goto LABEL_167;
          }
          if ((v39 & 0x40000) == 0 && (v50 & 0x400000) != 0) {
            v51 = 0x400000;
            goto LABEL_166;
          }
        }
      LABEL_167:
        v53 = *(__int64**)(v1 + 232);
        for (i = *(__int64**)(v1 + 240); v53 != i;
             result = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 152LL))(v54)) {
          v54 = *v53++;
        }
        goto LABEL_121;
      }
    }
    else {
    LABEL_39:
      if (*(_BYTE*)(v7 + 903) != 1 ||
          (*(_BYTE*)(v7 + 900) & 1) == 0 &&
              (*(_BYTE*)(v7 + 940) != 1 || *(_BYTE*)(v7 + 901) != 1 ||
               *(_BYTE*)(v7 + 902) != 1) ||
          (*(_BYTE*)(v7 + 860) & 0x10) == 0) {
        goto LABEL_51;
      }
    }
    if (*(_QWORD*)(v1 + 152) != 0) {
      v9 = *(_QWORD*)(v1 + 152);
    }
    else {
      v9 = v1;
    }
    game_menu_anonymous_ProcMouseGuide_ProcMouseGuide(v9, 0, 3);
    v10 = 11;
    goto LABEL_67;
  }
  return result;
}

__int64 game_menu_BasicMenu_StickRCall(__int64 a1)
{
  const char* v2;
  __int64 (**v3)();
  __int64 v4;
  __int64 v5;
  __int64 (**v6)();
  unsigned int v7;
  __int64* v8;
  int v9;
  __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  _BYTE* v21;
  __int64 (***v22)();
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 (**v28)();
  __int64 v29;
  __int64 v30;
  __int64* v31;
  struct {
    __int64 (**v32)();
    __int64 v33;
    char gap48_[16];
    __int64 (***v34)();
  } v32_;
  _QWORD v35[2];

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1) & 1) != 0) {
    v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 336LL))(a1);
    LayoutAccessor_1560070((void*)(&v32_.v32), (__int64*)(a1 + 848), v2);
    if (v32_.v33 != 0) {
      v29 = std___1___shared_weak_count_lock_alt1(v32_.v33);
      if (v29 != 0) {
        v3 = v32_.v32;
      }
      else {
        v3 = nullptr;
      }
      if (v32_.v33 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v32_.v33);
      }
      v28 = v3;
      if (v3 != nullptr) {
        v4 = *(_QWORD*)(a1 + 152) != 0 ? *(_QWORD*)(a1 + 152) : a1;
        v35[0] = v3;
        v35[1] = v29;
        if (v29 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                                    memory_order_relaxed);
          v5 = game_menu_16ec3d0(v4, (__int64)v35);
          std___1___shared_weak_count___release_weak_alt1(v29);
        }
        else {
          v5 = game_menu_16ec3d0(v4, (__int64)v35);
        }
        if (*(int*)(a1 + 196) >= 1) {
          v6 = GameData_209ccb0;
          v7 = 0;
          v8 = GameData_212d630[0] + 2;
          v31 = GameData_212d640[0] + 2;
          v30 = GameData_2131c20[0] + 16;
          while (1) {
            v10 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
            v11 = (const char*)(*(__int64 (**)(__int64, _QWORD))(
                *(_QWORD*)a1 + 344LL))(a1, v7);
            v32_.v32 = v6;
            v32_.v33 = a1;
            v32_.v34 = &v32_.v32;
            *(_QWORD*)v10 = v8;
            *(_QWORD*)(v10 + 8) = 0;
            v12 = strlen(v11);
            if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0();
            }
            v13 = v12;
            if (v12 >= 0x17) {
              break;
            }
            v14 = v10 + 17;
            *(_BYTE*)(v10 + 16) = 2 * v12;
            if (v12 != 0) {
              goto LABEL_28;
            }
          LABEL_29:
            *(_BYTE*)(v14 + v13) = 0;
            v20 = v32_.v34;
            *(_DWORD*)(v10 + 40) = 0;
            *(_QWORD*)(v10 + 48) = 0;
            *(_QWORD*)(v10 + 56) = 0;
            *(_QWORD*)(v10 + 64) = 0;
            *(_QWORD*)(v10 + 72) = 0;
            *(_WORD*)(v10 + 80) = 257;
            *(_BYTE*)(v10 + 82) = 1;
            *(_QWORD*)v10 = v31;
            if (v20 == nullptr) {
              *(_QWORD*)(v10 + 128) = 0;
              *(_BYTE*)(v10 + 144) = 0;
              v21 = (_BYTE*)(v10 + 144);
              *(_QWORD*)v10 = v30;
              goto LABEL_39;
            }
            if (v20 == &v32_.v32) {
              *(_QWORD*)(v10 + 128) = v10 + 96;
              ((void (*)(__int64 (***)(void)))(*v20)[3])(v20);
            }
            else {
              *(_QWORD*)(v10 + 128) =
                  ((__int64 (*)(__int64 (***)(void)))(*v20)[2])(v20);
            }
            v22 = v32_.v34;
            v23 = GameData_2131c20[0];
            *(_BYTE*)(v10 + 144) = 0;
            v21 = (_BYTE*)(v10 + 144);
            *(_QWORD*)v10 = v23 + 16;
            if (v22 == &v32_.v32) {
              v24 = 4;
            }
            else {
              if (v22 == nullptr) {
                goto LABEL_39;
              }
              v24 = 5;
            }
            ((__int64 (*)(__int64))(*v22)[v24])((__int64)v22);
          LABEL_39:
            *(_DWORD*)(v10 + 40) = v7;
            BasicMenuCursor_16e0c00((_QWORD*)v5, v10);
            if (v7 != *(_DWORD*)(a1 + 200)) {
              goto LABEL_19;
            }
            v25 = *(_QWORD*)(v5 + 336);
            if (v25 != v10) {
              if (v25 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v25 + 168LL))(v25);
              }
              *(_QWORD*)(v5 + 336) = v10;
              BasicMenu_16dea40(v5, 0, 1u, 0);
              v26 = *(_QWORD*)(v5 + 336);
              if (v26 == 0) {
                goto LABEL_17;
              }
              (*(void (**)(__int64))(*(_QWORD*)v26 + 160LL))(v26);
              v25 = *(_QWORD*)(v5 + 336);
            }
            if (v25 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25) &
                   1) != 0) {
                v9 = 4;
              }
              else {
                v9 = 0;
              }
              goto LABEL_18;
            }
          LABEL_17:
            v9 = 4;
          LABEL_18:
            *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v9;
            *v21 = 1;
          LABEL_19:
            if ((signed int)++v7 >= (signed __int32)*(_DWORD*)(a1 + 196)) {
              goto LABEL_49;
            }
          }
          v15 = v8;
          v16 = v6;
          if ((v12 | 7) == 0x17) {
            v17 = 26;
          }
          else {
            v17 = (v12 | 7) + 1;
          }
          v18 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
          v19 = v17 | 1;
          v14 = v18;
          *(_QWORD*)(v10 + 24) = v13;
          *(_QWORD*)(v10 + 32) = v18;
          v6 = v16;
          v8 = v15;
          *(_QWORD*)(v10 + 16) = v19;
        LABEL_28:
          memmove_alt1(v14, (__int64)v11, v13);
          goto LABEL_29;
        }
      }
    LABEL_49:
      if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak_alt1(v29);
        if (v28 != nullptr) {
          return 11;
        }
      }
      else if (v28 != nullptr) {
        return 11;
      }
    }
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 296LL))(result);
  }
  return result;
}

__int64 BasicMenu_16e17e0(_QWORD* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  bool v7;
  _BOOL4 v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    return 0;
  }
  v3 = a1[74];
  v4 = a1[75];
  if (v3 != v4) {
    for (i = v3 + 8;; i += 8) {
      v6 = *(_QWORD*)(i - 8);
      v7 = v6 == -1 || game_gameui_MenuAnimator_instance_ == 0;
      if (v7) {
        v8 = false;
      }
      else {
        v8 = v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
        if (v8) {
          return !v8;
        }
      }
      v7 = i == v4;
      if (v7) {
        return !v8;
      }
    }
  }
  return 1;
}

__int64 BasicMenu_16e1a00(unsigned __int64* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  char v6;
  char v8;
  const char* v9[2];
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  if ((*(__int64 (**)(unsigned __int64*))(*a1 + 1040))(a1) == 0) {
    v10_.v10 = 0;
    v10_.v11 = 0;
    v8 = game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(
        (__int64)a1, (__int64)&v10_.v10);
    if (v10_.v11 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10_.v11);
    }
    if ((v8 & 1) != 0) {
      goto LABEL_12;
    }
    return 14;
  }
  v9[0] = (const char*)(*(__int64 (**)(unsigned __int64*))(*a1 + 1040))(a1);
  v9[1] = (const char*)strlen(v9[0]);
  v2 = a1[107];
  if (v2 == 0) {
    goto LABEL_8;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_8;
  }
  v4 = a1[106];
  v5 = v3;
  if (v4 != 0) {
    GameRoutine_15b71b0((void*)(&v10_.v10), a1[106], (__int64)v9);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak_alt1(v5);
  if (v4 == 0) {
  LABEL_8:
    v10_.v10 = 0;
    v10_.v11 = 0;
  }
LABEL_9:
  v6 = game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(
      (__int64)a1, (__int64)&v10_.v10);
  if (v10_.v11 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10_.v11);
  }
  if ((v6 & 1) != 0) {
  LABEL_12:
    (*(void (**)(unsigned __int64*))(*a1 + 1048))(a1);
    return 13;
  }
  return 14;
}

__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[32];
  _BYTE* v8;

  result = *(_QWORD*)(a2 + 32);
  if (result == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 232);
  v4 = *(_QWORD*)(a1 + 240);
  if ((unsigned __int64)((v4 - v5) >> 3) < 2) {
    return result;
  }
  if (result == a2) {
    v8 = v7;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result, v7);
    if (v5 == v4) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  if (v5 != v4) {
  LABEL_5:
    GameRoutine_16e3a80(v5);
  }
LABEL_6:
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)v8 + v6))((void*)v8);
}

__int64 BasicMenu_16e1f40(__int64 result, __int64 a2, __int64 a3)
{
  __int64* v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v3 = *(__int64**)(result + 232);
  v4 = (_QWORD*)result;
  v5 = *(char**)(result + 256);
  v33 = (__int64*)(result + 232);
  *(_QWORD*)(result + 240) = v3;
  if (*(_QWORD*)(a2 + 32) != 0) {
    v6 = *(char**)(result + 264);
    if (v5 != v6) {
      do {
        v9 = *(_QWORD*)v5;
        v10 = *(_QWORD*)(a2 + 32);
        v34_.v34[0] = *(_QWORD*)v5;
        if (v10 == 0) {
          GameRoutine_60a310();
        }
        result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 48LL))(
            v10, v34_.v34);
        if ((result & 1) != 0) {
          v12 = (_QWORD*)v4[30];
          v11 = v4[31];
          if ((unsigned __int64)v12 < v11) {
            *v12 = v9;
            v8 = (__int64)(v12 + 1);
          }
          else {
            v13 = *v33;
            v14 = (__int64)v12 - *v33;
            v15 = (v14 >> 3) + 1;
            if (v15 >> 61 != 0) {
              goto LABEL_55;
            }
            v16 = v11 - v13;
            if (v16 >> 2 > v15) {
              v15 = v16 >> 2;
            }
            if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v15;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v18 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v19 = v18 + 8 * v17;
            v20 = v18 + v14 - 8 * (v14 >> 3);
            *(_QWORD*)(v18 + v14) = v9;
            v8 = v18 + v14 + 8;
            result = memcpy(v20, v13, v14);
            v4[29] = v20;
            v4[30] = v8;
            v4[31] = v19;
            if (v13 != 0) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
            }
          }
          v4[30] = v8;
        }
        v5 += 8;
      } while (v5 != v6);
      v3 = (__int64*)v4[30];
    }
  }
  else {
    v22 = *(char**)(result + 264);
    v23 = *(_QWORD*)(result + 248);
    v24 = v22 - v5;
    if (v22 - v5 <= (unsigned __int64)(v23 - (_QWORD)v3)) {
      if (v22 != v5) {
        result = memmove(v3, v5, v22 - v5);
      }
    }
    else {
      v25 = v24 >> 3;
      if (v3 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v26);
        v23 = 0;
        v33[1] = 0;
        v33[2] = 0;
        *v33 = 0;
      }
      if (v25 >> 61 != 0) {
        goto LABEL_55;
      }
      v27 = v23 >> 2;
      if (v23 >> 2 <= v25) {
        v27 = v24 >> 3;
      }
      v28 = (unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                          : v27;
      if (v28 >> 61 != 0) {
      LABEL_55:
        GameRoutine_9c2e00();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      v3 = (__int64*)result;
      v4[29] = result;
      v4[30] = result;
      v4[31] = result + 8 * v28;
      if (v22 != v5) {
        result = memcpy(result, v5, v22 - v5);
      }
    }
    v3 = (__int64*)((char*)v3 + v24);
    v4[30] = v3;
  }
  v29 = *v33;
  if ((__int64*)*v33 != v3) {
    result = *(_QWORD*)(a3 + 32);
    if (result != 0) {
      v30 = ((__int64)v3 - v29) >> 3;
      if (v30 >= 2) {
        if (result == a3) {
          v34_.v35 = v34_.v34;
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)result + 24LL))(result,
                                                                    v34_.v34);
        }
        else {
          v34_.v35 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        16LL))(result);
        }
        GameRoutine_16e3a80_alt1(v29, v3, (__int64)v34_.v34,
                                 (2 * __clz(v30)) ^ 0x7E, 1);
        result = (__int64)v34_.v35;
        if (v34_.v35 == v34_.v34) {
          v31 = 32;
        }
        else {
          if (v34_.v35 == nullptr) {
            return result;
          }
          v31 = 40;
        }
        return (*(__int64 (**)(__int64))(*v34_.v35 + v31))((__int64)v34_.v35);
      }
    }
  }
  return result;
}

__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4)
{
  char* v4;
  char* v5;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v16;

  if ((a2 & 0x80000000) == 0) {
    v4 = *(char**)(a1 + 232);
    v5 = *(char**)(a1 + 240);
    if (v4 != v5) {
      if ((a3 & 1) != 0) {
        v7 = 0;
        if ((a4 & 1) == 0) {
          while (1) {
            v8 = *(_QWORD*)v4;
            if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(
                     *(_QWORD*)v4) &
                 1) != 0) {
              if (a2 == v7) {
                return v8;
              }
              ++v7;
            }
            v4 += 8;
            if (v4 == v5) {
              return 0;
            }
          }
        }
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(*(_QWORD*)v4) &
               1) != 0 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8) & 1) != 0) {
            if (a2 == v7) {
              return v8;
            }
            ++v7;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      if ((a4 & 1) != 0) {
        v9 = 0;
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 40LL))(*(_QWORD*)v4) &
               1) != 0) {
            if (a2 == v9) {
              return v8;
            }
            ++v9;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      v10 = v5 - v4 - 8;
      v11 = (v10 >> 3) + 1;
      if (v10 >= 0x18) {
        v16 = 0;
        while (a2 != (_DWORD)v16) {
          if (a2 == (_DWORD)v16 + 1) {
            v4 += 8;
            return *(_QWORD*)v4;
          }
          if (a2 == (_DWORD)v16 + 2) {
            return *((_QWORD*)v4 + 2);
          }
          if (a2 == (_DWORD)v16 + 3) {
            return *((_QWORD*)v4 + 3);
          }
          v4 += 32;
          v16 += 4;
          v12 = v16;
          if ((v11 & 0x3FFFFFFFFFFFFFFCLL) == v16) {
            goto LABEL_23;
          }
        }
        return *(_QWORD*)v4;
      }
      v12 = 0;
    LABEL_23:
      v13 = v11 & 3;
      if (v13 != 0) {
        v14 = a2 - v12;
        v8 = 0;
        while (v14 != 0) {
          v4 += 8;
          --v14;
          if (--v13 == 0) {
            return v8;
          }
        }
        return *(_QWORD*)v4;
      }
    }
  }
  return 0;
}

__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3)
{
  __int64* v3;
  __int64* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v3 = (__int64*)a1[29];
  v4 = (__int64*)a1[30];
  if (v3 == v4) {
    return (unsigned int)-1;
  }
  else {
    v6 = 0;
    if ((a2 & 1) != 0) {
      if ((a3 & 1) == 0) {
        while (1) {
          v8 = *v3;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) !=
              0) {
            if (v8 == a1[42]) {
              return v6;
            }
            ++v6;
          }
          if (++v3 == v4) {
            return (unsigned int)-1;
          }
        }
      }
      while (1) {
        v7 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1) != 0) {
          if (v7 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    if ((a3 & 1) != 0) {
      while (1) {
        v11 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 40LL))(*v3) & 1) != 0) {
          if (v11 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    while (1) {
      v9 = *v3++;
      if (v9 == a1[42]) {
        break;
      }
      ++v6;
      if (v3 == v4) {
        return (unsigned int)-1;
      }
    }
  }
  return v6;
}

__int64 BasicMenu_16e25a0(__int64 result, char a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(char**)(result + 232);
  v3 = *(char**)(result + 240);
  if (v2 == v3) {
    return result;
  }
  v4 = result;
  v5 = 0;
  v6 = *(__int64**)(result + 232);
  while (1) {
    v7 = *v6++;
    if (v7 == *(_QWORD*)(result + 336)) {
      break;
    }
    ++v5;
    if (v6 == (__int64*)v3) {
      return result;
    }
  }
  v8 = v3 - v2;
  v9 = a2;
  v10 = (unsigned __int64)(v8 + 0x7FFFFFFF8LL) >> 3;
  if (v5 >= (int)v10) {
    v11 = (unsigned int)v10;
  }
  else {
    v11 = (unsigned int)v5;
  }
  if ((v11 & 0x80000000) != 0) {
  LABEL_16:
    v12 = (int)v11;
    if ((int)v11 >= (unsigned __int64)(v8 >> 3)) {
      if ((_DWORD)v11 != v5) {
        goto LABEL_24;
      }
      return result;
    }
    while (1) {
      v15 = *(_QWORD*)&v2[8 * v12];
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
        if ((result & 1) != 0) {
          break;
        }
      }
      v2 = *(char**)(v4 + 232);
      if (++v12 >=
          (unsigned __int64)((__int64)(*(_QWORD*)(v4 + 240) - (_QWORD)v2) >>
                             3)) {
        goto LABEL_23;
      }
    }
  }
  else {
    v12 = v11;
    while (1) {
      v14 = *(_QWORD*)(*(_QWORD*)(v4 + 232) + 8 * v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 48LL))(v14);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
        if ((result & 1) != 0) {
          break;
        }
      }
      if (v12-- <= 0) {
        v2 = *(char**)(v4 + 232);
        a2 = v9;
        v8 = *(_QWORD*)(v4 + 240) - (_QWORD)v2;
        goto LABEL_16;
      }
    }
  }
  LODWORD(v11) = v12;
LABEL_23:
  a2 = v9;
  if ((_DWORD)v11 != v5) {
  LABEL_24:
    if ((v11 & 0x80000000) == 0) {
      v16 = *(char**)(v4 + 232);
      v17 = *(char**)(v4 + 240);
      if (v16 != v17) {
        v18 = v17 - v16 - 8;
        v19 = (v18 >> 3) + 1;
        if (v18 >= 0x18) {
          v24 = 0;
          while ((_DWORD)v11 != (_DWORD)v24) {
            if ((_DWORD)v11 == (_DWORD)v24 + 1) {
              v16 += 8;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 2) {
              v16 += 16;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 3) {
              v16 += 24;
              break;
            }
            v16 += 32;
            v24 += 4;
            v20 = v24;
            if ((v19 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
              goto LABEL_28;
            }
          }
        LABEL_44:
          v23 = *(_QWORD*)v16;
          result = *(_QWORD*)(v4 + 336);
          if ((a2 & 1) == 0) {
          LABEL_45:
            if (result == v23) {
              goto LABEL_50;
            }
          }
        LABEL_46:
          if (result != 0) {
            (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
            a2 = v9;
          }
          *(_QWORD*)(v4 + 336) = v23;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v4, 1, (a2 & 1) == 0, 0);
          result = *(_QWORD*)(v4 + 336);
          if (result == 0) {
            v25 = 4;
          LABEL_55:
            *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v25;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
          result = *(_QWORD*)(v4 + 336);
        LABEL_50:
          v25 = 4;
          if (result != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
            if ((result & 1) != 0) {
              v25 = 4;
            }
            else {
              v25 = 0;
            }
          }
          goto LABEL_55;
        }
        v20 = 0;
      LABEL_28:
        v21 = v19 & 3;
        if (v21 != 0) {
          v22 = v11 - v20;
          while (v22 != 0) {
            v16 += 8;
            --v22;
            if (--v21 == 0) {
              goto LABEL_32;
            }
          }
          goto LABEL_44;
        }
      }
    }
  LABEL_32:
    v23 = 0;
    result = *(_QWORD*)(v4 + 336);
    if ((a2 & 1) == 0) {
      goto LABEL_45;
    }
    goto LABEL_46;
  }
  return result;
}

__int64 BasicMenu_16e2860(__int64 result, char a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  _QWORD* v30;
  _QWORD* v31;
  int v32;
  __int64 v33;

  v2 = *(_QWORD**)(result + 232);
  v3 = *(_QWORD**)(result + 240);
  if (v2 == v3) {
    return result;
  }
  v5 = result;
  v6 = 0;
  while (1) {
    v7 = *v2;
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 48LL))(*v2);
    if ((result & 1) != 0) {
      break;
    }
  LABEL_3:
    if (++v2 == v3) {
      return result;
    }
  }
  if (v7 != *(_QWORD*)(v5 + 336)) {
    ++v6;
    goto LABEL_3;
  }
  if (v6 < 0) {
    return result;
  }
  v8 = *(_QWORD*)(v5 + 232);
  v9 = *(_QWORD*)(v5 + 240);
  v10 = (unsigned __int64)(v9 - v8 + 0x7FFFFFFF8LL) >> 3;
  if (v6 < (int)v10) {
    LODWORD(v10) = v6;
  }
  v11 = v9 == v8 ? -1 : v10;
  v12 = v11;
  while (1) {
    ++v12;
    v13 = *(_QWORD*)(v5 + 240) == *(_QWORD*)(v5 + 232)
              ? 0
              : ((unsigned __int64)(*(_QWORD*)(v5 + 240) -
                                    *(_QWORD*)(v5 + 232) + 0x7FFFFFFF8LL) >>
                 3) +
                    1;
    if (v12 >= v13) {
      break;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 232LL))(
        v5, (unsigned int)v12);
    if ((result & 1) != 0) {
      goto LABEL_25;
    }
  }
  v12 = v11;
  while (1) {
    v14 = __OFSUB__(v12--, 1);
    if (v12 < 0 != v14) {
      break;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 232LL))(
        v5, (unsigned int)v12);
    if ((result & 1) != 0) {
      goto LABEL_25;
    }
  }
  v12 = v11;
LABEL_25:
  if (v6 == v12) {
    return result;
  }
  if (v12 < 0) {
    goto LABEL_34;
  }
  v15 = *(char**)(v5 + 232);
  v16 = *(char**)(v5 + 240);
  if (v15 == v16) {
    goto LABEL_34;
  }
  v17 = v16 - v15 - 8;
  v18 = (v17 >> 3) + 1;
  if (v17 >= 0x18) {
    v24 = 0;
    while (v12 != (_DWORD)v24) {
      if (v12 == (_DWORD)v24 + 1) {
        v15 += 8;
        break;
      }
      if (v12 == (_DWORD)v24 + 2) {
        v15 += 16;
        break;
      }
      if (v12 == (_DWORD)v24 + 3) {
        v15 += 24;
        break;
      }
      v15 += 32;
      v24 += 4;
      v19 = v24;
      if ((v18 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
        goto LABEL_30;
      }
    }
  LABEL_46:
    v22 = *(_QWORD*)v15;
    v23 = *(_QWORD*)(v5 + 336);
    if ((a2 & 1) != 0) {
      goto LABEL_48;
    }
  LABEL_47:
    if (v23 != v22) {
      goto LABEL_48;
    }
  LABEL_52:
    v26 = 4;
    if (v23 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 120LL))(v23) & 1) != 0) {
        v26 = 4;
      }
      else {
        v26 = 0;
      }
    }
    goto LABEL_57;
  }
  v19 = 0;
LABEL_30:
  v20 = v18 & 3;
  if (v20 != 0) {
    v21 = v12 - v19;
    while (v21 != 0) {
      v15 += 8;
      --v21;
      if (--v20 == 0) {
        goto LABEL_34;
      }
    }
    goto LABEL_46;
  }
LABEL_34:
  v22 = 0;
  v23 = *(_QWORD*)(v5 + 336);
  if ((a2 & 1) == 0) {
    goto LABEL_47;
  }
LABEL_48:
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 168LL))(v23);
  }
  *(_QWORD*)(v5 + 336) = v22;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1u, 0);
  v25 = *(_QWORD*)(v5 + 336);
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 160LL))(v25);
    v23 = *(_QWORD*)(v5 + 336);
    goto LABEL_52;
  }
  v26 = 4;
LABEL_57:
  v27 = *(_QWORD*)(v5 + 176);
  *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v26;
  result = (*(__int64 (**)(__int64))(v27 + 16))(v5 + 176);
  v28 = *(_QWORD**)(v5 + 184);
  v29 = result;
  v30 = (_QWORD*)v28[29];
  v31 = (_QWORD*)v28[30];
  if (v30 != v31) {
    v32 = 0;
    do {
      v33 = *v30;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v30 + 48LL))(*v30);
      if ((result & 1) != 0) {
        if (v33 == v28[42]) {
          goto LABEL_64;
        }
        ++v32;
      }
      ++v30;
    } while (v30 != v31);
  }
  v32 = -1;
LABEL_64:
  *(_DWORD*)(v5 + 192) = v32 % v29;
  return result;
}

__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v3 = *(_DWORD**)(a1 + 8);
  result = __dynamic_cast(*a2, GameData_212d638[0], GameData_2131c30[0], 0);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 144) & 1) != 0) {
    return 0;
  }
  v3[50] = *(_DWORD*)(v2 + 40);
  (*(void (**)(_DWORD*))(*(_QWORD*)v3 + 352LL))(v3);
  return 2;
}

#pragma GCC visibility pop
