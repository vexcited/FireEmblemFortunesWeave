#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* GameRoutine_18bb1d0(__int64);
_QWORD* GameRoutine_18bb8b0(_QWORD*);
__int64 Alignment_56b600(_QWORD);
__int64 AsyncLoadThumbImage_189a3a0(_QWORD*, __int64);
__int64 Element_1885bc0(__int64, __int64*);
__int64 Element_18863e0(__int64, _QWORD*, char);
__int64 Element_1888840(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 GameRoutine_18bc9c0(__int64, _DWORD*);
__int64 GameRoutine_6ed030(_QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_gameui_Util_GetMorphRage(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64* GameRoutine_1899480(__int64, unsigned int, char, char);
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_2106f90[])();
extern __int64 (*game_gameui_control_MenuItemMorph_vtable[])();
extern __int64 GameData_2132070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
__int64 MenuItemMorph_18bc7d0(__int64 a1, __int64 a2);
__int64 MenuItemMorph_18bccc0(__int64 a1);
__int64
MenuItemMorph_18bd000_alt1(__int64 result,
                           __int64* a2) __asm__("MenuItemMorph_18bd000");
__int64 MenuItemMorph_DeletingDestructor_alt1(__int64* a1) __asm__(
    "MenuItemMorph_DeletingDestructor");
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15d4100");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void MenuItemMorph_18bd000(__int64 a1, _QWORD** a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 MenuItemMorphRage_18bbd50(__int64);
extern __int64 (*ui_Event_vtable[])();
void GameRoutine_157f4e0(__int64*, __int64, __int64);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64 MenuItemMorph_18bc9c0(__int64 a1, _DWORD* a2);
void Element_1888840_alt1(__int64) __asm__("Element_1888840");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MenuItemMorph_DeletingDestructor(__int64* a1);

__int64 MenuItemMorph_18bc7d0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD v26[2];

  v2 = *(_QWORD**)(a1 + 1088);
  if (a2 == 0) {
    v24 = *(_QWORD**)(a1 + 1088);
  LABEL_26:
    GameRoutine_18bb8b0(v24);
    goto LABEL_27;
  }
  v4 = *(_QWORD*)(a1 + 1064);
  v5 = v2[2];
  v2[3] = v4;
  if (v5 != 0) {
    v7 = std___1___shared_weak_count_lock(v5);
    if (v7 != 0) {
      v8 = v2[1];
      if (v8 != 0) {
        *(_QWORD*)(v8 + 1096) = v2[3];
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v10 = *(_QWORD**)(a1 + 1088);
  v11 = v10[2];
  v10[4] = a2;
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 != 0) {
      v13 = v10[1];
      if (v13 != 0) {
        v14 = v10[4];
        *(_QWORD*)(v13 + 1088) = v14;
        *(_BYTE*)(v13 + 1108) = v14 != 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  v16 = *(__int64**)(a1 + 1088);
  if (v16[4] == 0) {
    v24 = *(_QWORD**)(a1 + 1088);
    goto LABEL_26;
  }
  v17 = v16[2];
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = v16[1];
      v20 = v18;
      if (v19 != 0) {
        GameRoutine_1899480(v16[1], 1u, 0, 0);
        *(_QWORD*)(v19 + 1096) = v16[3];
        AsyncLoadThumbImage_189a3a0((_QWORD*)v19, v16[4]);
        v21 = GameRoutine_6ed030(v16[4]);
        v22 = *(_QWORD*)(v19 + 1032);
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
          v23 = *(_QWORD*)(v19 + 1032);
          if (v23 != 0) {
            *(_BYTE*)(v23 + 88) |= 1u;
          }
        }
        *(_BYTE*)(v19 + 1108) = 1;
        v26[0] = "NumNone";
        v26[1] = 7;
        Element_18863e0(v19, v26, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
  }
LABEL_27:
  GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1096));
  return LayoutAccessor_1562cf0(a1 + 88, "DragonInfo_Attack00");
}

__int64 MenuItemMorph_18bc9c0(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _BOOL4 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  struct {
    __int64* v35;
    __int64 v36;
  } v35_;
  char v37[4];
  struct {
    __int64 (**v38)();
    int v39;
    char gap36_[4];
    __int64 v40;
  } v38_;

  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_WORD*)a2 & 0xFFF) != 0) {
    LayoutAccessor_1562cf0_alt1(a1 + 88, "MorphOn"),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = *(_QWORD*)(a1 + 1064);
    *(_QWORD*)(*(_QWORD*)(a1 + 1104) + 24LL) = v4;
    v5 = (_QWORD*)(v4 + 408);
    v6 = *(_QWORD*)(a1 + 1072);
    if (v6 != 0) {
      v7 = (_QWORD*)(v6 + 592);
    }
    else {
      v7 = v5;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 1104) + 32LL) = *v7;
    *(_DWORD*)(*(_QWORD*)(a1 + 1104) + 48LL) = *(_DWORD*)(a1 + 1112);
    *(_DWORD*)(*(_QWORD*)(a1 + 1104) + 40LL) = *a2;
    *(_BYTE*)(*(_QWORD*)(a1 + 1104) + 44LL) = *(_BYTE*)(a1 + 1116);
    v8 = *(_QWORD*)(a1 + 1104);
    v9 = *(_QWORD*)(v8 + 24);
    v10 = GameData_212c880[0];
    if (v9 != 0) {
      if (*(_BYTE*)(v8 + 44) == 1 && (v11 = *(_QWORD*)(v9 + 440)) != 0 &&
          *(_BYTE*)(v11 + 16) == 0) {
        v27 = *(_DWORD*)(v8 + 40);
        v28 = v27 & 0xFFF;
        v29 = (v27 >> 19) & 0x1F;
        v30 = (v27 >> 12) & 0x7F;
        v31 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v28);
        v32 = *(unsigned __int8*)(v31 + 104);
        v33 = *(unsigned __int8*)(v31 + 273);
        if ((unsigned int)(v32 - 5) >= 2) {
          v34 = 0;
        }
        else {
          v34 = v29;
        }
        v12 = v34 - v30 + v33 < 1;
      }
      else {
        v12 = false;
      }
      v13 = *(_DWORD*)(v8 + 40);
      v14 = *(_QWORD*)(v8 + 16);
      v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v13 & 0xFFF));
      if ((unsigned int)*(unsigned __int8*)(v15 + 104) - 5 >= 2) {
        v16 = 0;
      }
      else {
        v16 = (v13 >> 19) & 0x1F;
      }
      if (v14 != 0) {
        v17 = *(unsigned __int8*)(v15 + 273);
        v18 = std___1___shared_weak_count_lock_alt1(v14),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v18 != 0) {
          v19 = *(_QWORD*)(v8 + 8);
          v20 = v18;
          if (v19 != 0) {
            (*(void (**)(_QWORD, bool))(*(_QWORD*)v19 + 152LL))(
                *(_QWORD*)(v8 + 8), !v12),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            MenuItemSkill_1899480(v19, *(_DWORD*)(v8 + 48), v12,
                                  (int)(v16 - ((v13 >> 12) & 0x7F) + v17) < 1),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v21 = *(_DWORD*)(v8 + 40);
            if ((*(_BYTE*)(v19 + 1080) & 1) == 0) {
              *(_BYTE*)(v19 + 1080) = 1;
            }
            *(_DWORD*)(v19 + 1076) = v21;
            *(_QWORD*)(v19 + 1096) = *(_QWORD*)(v8 + 24);
            *(_BYTE*)(v19 + 1108) = 1;
            v38_.v40 = 0;
            v38_.v38 = ui_Event_vtable;
            v38_.v39 = 20;
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                    __int64 (***)(void)))(
                *(_QWORD*)(v19 + 72) + 16LL))((void*)(v37), v19 + 72,
                                              &v38_.v38),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v20),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
    }
    else {
      MenuItemMorphRage_18bbd50(*(_QWORD*)(a1 + 1104)),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    LayoutAccessor_1560070((void*)(&v35_.v35), (__int64*)(a1 + 88),
                           "L_MorphRange"),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = v35_.v36;
    if (v35_.v36 != 0) {
      v23 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * (*a2 & 0xFFF));
      v24 = std___1___shared_weak_count_lock_alt1(v35_.v36),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v24 != 0) {
        v26 = v24;
        if (v35_.v35 != nullptr) {
          GameRoutine_157f4e0(v35_.v35, v25, v23),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v26),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      result = v35_.v36;
      if (v35_.v36 != 0) {
        return std___1___shared_weak_count___release_weak_alt1(v35_.v36);
      }
    }
  }
  else {
    MenuItemMorphRage_18bbd50(*(_QWORD*)(a1 + 1104)),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return LayoutAccessor_1562cf0_alt1(a1 + 88, "MorphOff");
  }
  return result;
}

__int64 MenuItemMorph_18bccc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  _DWORD* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 1064);
  if (v2 == 0) {
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
    GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
    GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1088));
    GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1096));
    LayoutAccessor_1562cf0(a1 + 88, "DragonInfo_Attack00");
    v10 = GameData_212c8a8;
    goto LABEL_41;
  }
  if ((*(_WORD*)(v2 + 1536) & 0x200) == 0) {
    v3 = game_Unit_GetJob(v2);
    v4 = *(_QWORD*)(a1 + 1064);
    v5 = *(unsigned __int16*)(v4 + 1952);
    if ((*(_WORD*)(v4 + 1536) & 0x40) == 0 ||
        (v6 = *(_QWORD*)(v4 + 1496), v7 = *(_QWORD*)(v4 + 1488), v6 == v7)) {
      v10 = GameData_212c8a8;
    }
    else {
      v8 = (v6 - v7) >> 2;
      v9 = 0;
      v10 = GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v7 + 4 * v9) & 0xFFF)) +
                       104LL) != 6) {
        if (v8 == ++v9) {
          goto LABEL_19;
        }
      }
      v27 = (_DWORD*)(v7 + 4LL * (unsigned int)v9);
      if (v9 > -1) {
        v10 = v27;
      }
    }
  LABEL_19:
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = v3;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
    GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
    if (v5 != 0) {
      v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *(unsigned __int16*)(v4 + 1952));
    }
    else {
      v21 = 0;
    }
    v26 = a1;
    goto LABEL_40;
  }
  v11 = *(_QWORD*)(a1 + 1072);
  if (v11 != 0) {
    v12 = *(unsigned __int16*)(v11 + 16);
    v13 = *(_QWORD*)(v2 + 1456);
    v14 = (v12 >> 5) & 0x7F;
    if (v14 + 1 <= (unsigned __int64)((*(_QWORD*)(v2 + 1464) - v13) >> 2)) {
      v15 = v12 & 0xFFF;
      if (((*(_DWORD*)(v13 + 4LL * (unsigned int)v14) >> v15) & 1) != 0) {
        v16 = *(_QWORD*)(v2 + 1496);
        v17 = *(_QWORD*)(v2 + 1488);
        if (v16 != v17) {
          v18 = (v16 - v17) >> 2;
          v19 = 0;
          v20 = GameData_212c8a8;
          while ((*(_DWORD*)(v17 + 4 * v19) & 0xFFF) != v15) {
            if (v18 == ++v19) {
              goto LABEL_36;
            }
          }
          v28 = (_DWORD*)(v17 + 4LL * (unsigned int)v19);
          v29 = v19 <= -1;
        LABEL_34:
          if (!v29) {
            v20 = v28;
          }
          goto LABEL_36;
        }
      }
    }
  }
  else {
    v22 = *(_QWORD*)(v2 + 1496);
    v23 = *(_QWORD*)(v2 + 1488);
    if (v22 != v23) {
      v24 = (v22 - v23) >> 2;
      v25 = 0;
      v20 = GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v23 + 4 * v25) & 0xFFF)) +
                       104LL) != 9) {
        if (v24 == ++v25) {
          goto LABEL_36;
        }
      }
      v28 = (_DWORD*)(v23 + 4LL * (unsigned int)v25);
      v29 = v25 <= -1;
      goto LABEL_34;
    }
  }
  v20 = GameData_212c8a8;
LABEL_36:
  v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*v20 & 0xFFF)) +
                   592LL);
  if (*(_WORD*)(v30 + 128) != 0) {
    v31 = *(_QWORD*)(*(_QWORD*)(v30 + 136) + 8LL);
  }
  else {
    v31 = 0;
  }
  v10 = (_DWORD*)game_gameui_Util_GetMorphRage();
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = *v20;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = v30;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
  GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
  v26 = a1;
  v21 = v31;
LABEL_40:
  MenuItemMorph_18bc7d0(v26, v21);
LABEL_41:
  GameRoutine_18bc9c0(a1, v10);
  result = ui_LayoutAccessor_FindAlignment(a1 + 88, "A_MenuItem");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

void MenuItemMorph_18bd000(__int64 a1, _QWORD** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40[2];
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;

  if (*a2 != nullptr) {
    v40[0] = (__int64)"L_MenuItem_Name";
    v40[1] = 15;
    GameRoutine_15d4100_alt1((void*)(&v41_.v41), (__int64*)(a1 + 88), v40);
    if (v41_.v42 != 0) {
      v4 = std___1___shared_weak_count_lock_alt1(v41_.v42);
      v5 = v41_.v41;
      if (v4 != 0) {
        v6 = v41_.v41;
      }
      else {
        v6 = 0;
      }
      if (v41_.v42 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v41_.v42);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v5 + 312);
          v9 = *(_QWORD*)(v5 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock_alt1(v9);
          std___1___shared_weak_count___release_weak_alt1(v7);
          if (v10 != 0) {
            if (v8 != 0) {
              v41_.v41 = v6;
              v41_.v42 = v4;
              if (v4 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                          memory_order_relaxed);
                Element_1885bc0(v8, &v41_.v41);
                if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                  std___1___shared_weak_count___release_weak_alt1(v4);
                }
              }
              else {
                Element_1885bc0(v8, &v41_.v41);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak_alt1(v10);
            }
          }
        }
        v11 = *a2;
        v41_.v41 = v6;
        v41_.v42 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v11, &v41_.v41);
        v12 = v41_.v42;
        if (v41_.v42 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
    v40[0] = (__int64)"L_MenuItem_Attack00";
    v40[1] = 19;
    GameRoutine_15d4100_alt1((void*)(&v41_.v41), (__int64*)(a1 + 88), v40);
    if (v41_.v42 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v41_.v42);
      v14 = v41_.v41;
      if (v13 != 0) {
        v15 = v41_.v41;
      }
      else {
        v15 = 0;
      }
      if (v41_.v42 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v41_.v42);
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v14 + 320);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v14 + 312);
          v18 = *(_QWORD*)(v14 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = std___1___shared_weak_count_lock_alt1(v18);
          std___1___shared_weak_count___release_weak_alt1(v16);
          if (v19 != 0) {
            if (v17 != 0) {
              v41_.v41 = v15;
              v41_.v42 = v13;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v17, &v41_.v41);
                if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                  std___1___shared_weak_count___release_weak_alt1(v13);
                }
              }
              else {
                Element_1885bc0(v17, &v41_.v41);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak_alt1(v19);
            }
          }
        }
        v20 = *a2;
        v41_.v41 = v15;
        v41_.v42 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v20, &v41_.v41);
        v21 = v41_.v42;
        if (v41_.v42 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt1(v21);
        }
      }
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
    v40[0] = (__int64)"L_MenuItem_Attack01";
    v40[1] = 19;
    GameRoutine_15d4100_alt1((void*)(&v41_.v41), (__int64*)(a1 + 88), v40);
    if (v41_.v42 != 0) {
      v22 = std___1___shared_weak_count_lock_alt1(v41_.v42);
      v23 = v41_.v41;
      if (v22 != 0) {
        v24 = v41_.v41;
      }
      else {
        v24 = 0;
      }
      if (v41_.v42 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v41_.v42);
      }
      if (v24 != 0) {
        v25 = *(_QWORD*)(v23 + 320);
        if (v25 != 0) {
          v26 = *(_QWORD*)(v23 + 312);
          v27 = *(_QWORD*)(v23 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
          v28 = std___1___shared_weak_count_lock_alt1(v27);
          std___1___shared_weak_count___release_weak_alt1(v25);
          if (v28 != 0) {
            if (v26 != 0) {
              v41_.v41 = v24;
              v41_.v42 = v22;
              if (v22 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v26, &v41_.v41);
                if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                  std___1___shared_weak_count___release_weak_alt1(v22);
                }
              }
              else {
                Element_1885bc0(v26, &v41_.v41);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              std___1___shared_weak_count___release_weak_alt1(v28);
            }
          }
        }
        v29 = *a2;
        v41_.v41 = v24;
        v41_.v42 = v22;
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v29, &v41_.v41);
        v30 = v41_.v42;
        if (v41_.v42 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
          std___1___shared_weak_count___release_weak_alt1(v30);
        }
      }
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
    }
    v40[0] = (__int64)"L_MenuItem_Morph";
    v40[1] = 16;
    GameRoutine_15d4100_alt1((void*)(&v41_.v41), (__int64*)(a1 + 88), v40);
    if (v41_.v42 != 0) {
      v31 = std___1___shared_weak_count_lock_alt1(v41_.v42);
      v32 = v41_.v41;
      if (v31 != 0) {
        v33 = v41_.v41;
      }
      else {
        v33 = 0;
      }
      if (v41_.v42 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v41_.v42);
      }
      if (v33 != 0) {
        v34 = *(_QWORD*)(v32 + 320);
        if (v34 != 0) {
          v35 = *(_QWORD*)(v32 + 312);
          v36 = *(_QWORD*)(v32 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                    memory_order_relaxed);
          v37 = std___1___shared_weak_count_lock_alt1(v36);
          std___1___shared_weak_count___release_weak_alt1(v34);
          if (v37 != 0) {
            if (v35 != 0) {
              v41_.v41 = v33;
              v41_.v42 = v31;
              if (v31 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v35, &v41_.v41);
                if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                  std___1___shared_weak_count___release_weak_alt1(v31);
                }
              }
              else {
                Element_1885bc0(v35, &v41_.v41);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
              std___1___shared_weak_count___release_weak_alt1(v37);
            }
          }
        }
        v38 = *a2;
        v41_.v41 = v33;
        v41_.v42 = v31;
        if (v31 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v38, &v41_.v41);
        v39 = v41_.v42;
        if (v41_.v42 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
          std___1___shared_weak_count___release_weak_alt1(v39);
        }
      }
      if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt1(v31);
      }
    }
  }
}

void MenuItemMorph_DeletingDestructor(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;

  *(a1 - 9) = (__int64)game_gameui_control_MenuItemMorph_vtable;
  v2 = (__int64)(a1 - 9);
  *a1 = (__int64)GameData_2106f90;
  v3 = a1[129];
  a1[129] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[128];
  a1[128] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[127];
  a1[127] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[126];
  a1[126] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = GameData_2132070 + 440;
  *(a1 - 9) = GameData_2132070 + 16;
  *a1 = v7;
  v8 = fw_memory_g_heap_manager_ptr;
  if (a1[123] != 0) {
    v9 = (__int64*)a1[122];
    v10 = *(__int64**)(a1[121] + 8);
    *(_QWORD*)(*v9 + 8) = v10;
    *v10 = *v9;
    a1[123] = 0;
    if (v9 != a1 + 121) {
      do {
        v11 = (__int64*)v9[1];
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v12, (__int64)v9);
        v9 = v11;
      } while (v11 != a1 + 121);
    }
  }
  Element_1888840_alt1(v2);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v13, v2);
}

#pragma GCC visibility pop
