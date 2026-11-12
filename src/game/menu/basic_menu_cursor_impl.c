#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 BasicMenuItem_16e5110(_QWORD, _QWORD);
__int64 BasicMenuItem_16e5340(_QWORD, _QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_162b5f0(_QWORD, _QWORD);
__int64 GameRoutine_16dbb80(__int64*);
__int64 GameRoutine_16dc3e0(__int64);
__int64 GameRoutine_16df380(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneTranslate(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_menu_BasicMenu_ChangeChildCloseProc_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_21319e8[10];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_9c2e00(void);
__int64 BasicMenuCursor_16ddaa0(__int64 result, int a2);
_QWORD* BasicMenuCursor_16ddbe0(_QWORD* result);
__int64 BasicMenuCursor_16ddf80(_QWORD* a1);
__int64 BasicMenuCursor_16de1f0_alt1(_DWORD* a1, int a2,
                                     int a3) __asm__("BasicMenuCursor_16de1f0");
__int64
BasicMenuCursor_16de600_alt1(__int64 result) __asm__("BasicMenuCursor_16de600");
__int64 BasicMenuCursor_16df5e0(__int64 a1);
__int64 BasicMenuCursor_16e0520(__int64 a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64 a2);
__int64 BasicMenuCursor_16e0e00(_QWORD* a1);
__int64 BasicMenuCursor_16e14a0(_QWORD* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 BasicMenuItem_16e5110_alt1(__int64,
                                   __int64*) __asm__("BasicMenuItem_16e5110");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 TutorialInfo_162b5f0(__int64, __int64*);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
float GameRoutine_16df380_alt1(__int64) __asm__("GameRoutine_16df380");
float ui_LayoutAccessor_SetPaneTranslate_alt1(
    __int64*, __int64, __int64) __asm__("ui_LayoutAccessor_SetPaneTranslate");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 GameRoutine_887920_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_887920");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_9c2e00_alt1() __asm__("GameRoutine_9c2e00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 BasicMenuCursor_16de1f0(__int64* a1, int a2, int a3);
void BasicMenuCursor_16de600(__int64 a1);

__int64 BasicMenuCursor_16ddaa0(__int64 result, int a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  v2 = *(_QWORD*)(result + 8);
  v3 = result;
  if (v2 == 0) {
    goto LABEL_7;
  }
  v4 = *(_QWORD*)(result + 16);
  if (v2 <= v4) {
    while (*(_BYTE*)v4 != 2) {
      v4 -= 64LL;
      if (v2 > v4) {
        return result;
      }
    }
    if (*(_DWORD*)(v4 + 32) == 4) {
    LABEL_7:
      v5 = *(_QWORD*)(result + 592);
      *(_DWORD*)(result + 352) = a2;
      *(_QWORD*)(result + 600) = v5;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 472LL))(result);
      if ((result & 1) == 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 480LL))(v3);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 464LL))(
              v3, v3 + 592);
        }
        if (*(_BYTE*)(v3 + 138) == 0) {
          result = *(_QWORD*)(v3 + 152);
          if ((result == 0 ||
               (result = __dynamic_cast(result, GameData_2131c18[0],
                                        GameData_21319e8[0], 0)) == 0) &&
              *(_BYTE*)(v3 + 172) == 1) {
            result = GameRoutine_1553220(*(unsigned int*)(v3 + 168));
            if (*(_BYTE*)(v3 + 172) == 1) {
              *(_BYTE*)(v3 + 172) = 0;
            }
          }
        }
      }
      v6 = *(unsigned __int8**)(v3 + 16);
      if (v6 != nullptr) {
        v7 = *v6;
        v8 = v7 > 0x10;
        v9 = (1 << v7) & 0x1CE00;
        if (!v8 && v9 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
    }
  }
  return result;
}

_QWORD* BasicMenuCursor_16ddbe0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result[1];
  if (v1 == 0) {
    goto LABEL_40;
  }
  v2 = result[2];
  if (v1 <= v2) {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        return result;
      }
    }
    if (*(_DWORD*)(v2 + 32) == 4) {
    LABEL_40:
      if (result[19] != 0 &&
          (v3 = result,
           v4 = __dynamic_cast(result[19], GameData_2131c18[0],
                               GameData_21319e8[0], 0),
           result = v3, v4 != 0)) {
        v5 = *(_QWORD*)(v4 + 152);
        if (v5 == 0) {
          v5 = v4;
        }
        v6 = *(_QWORD*)(v5 + 32);
        if (v6 != 0) {
          v7 = __dynamic_cast(v6, GameData_212c610, GameData_2131c18[0], 0);
          if (v7 != 0) {
            v8 = v7;
            if ((*(unsigned int (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7) ==
                10) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 152LL))(v8);
            }
          }
        }
        return (_QWORD*)LayoutAccessor_155e830(v4 + 200, 0);
      }
      else {
        v9 = (_QWORD*)result[19];
        v10 = result;
        if (v9 == nullptr) {
          v9 = result;
        }
        v11 = v9[4];
        if (v11 != 0) {
          v12 = __dynamic_cast(v11, GameData_212c610, GameData_2131c18[0], 0);
          if (v12 != 0) {
            v13 = v12;
            if ((*(unsigned int (**)(__int64))(*(_QWORD*)v12 + 168LL))(v12) ==
                10) {
              (*(void (**)(__int64))(*(_QWORD*)v13 + 152LL))(v13);
            }
          }
        }
        *((_DWORD*)v10 + 88) = 9;
        v10[75] = v10[74];
        if (((*(__int64 (**)(_QWORD*))(*v10 + 472LL))(v10) & 1) == 0) {
          if (((*(__int64 (**)(_QWORD*))(*v10 + 480LL))(v10) & 1) == 0) {
            (*(void (**)(_QWORD*, _QWORD*))(*v10 + 464LL))(v10, v10 + 74);
          }
          if (*((_BYTE*)v10 + 138) == 0) {
            v16 = v10[19];
            if ((v16 == 0 || __dynamic_cast(v16, GameData_2131c18[0],
                                            GameData_21319e8[0], 0) == 0) &&
                *((_BYTE*)v10 + 172) == 1) {
              GameRoutine_1553220(*((unsigned int*)v10 + 42));
              if (*((_BYTE*)v10 + 172) == 1) {
                *((_BYTE*)v10 + 172) = 0;
              }
            }
          }
        }
        (*(void (**)(_QWORD*))(*v10 + 1064LL))(v10);
        if (((*(__int64 (**)(_QWORD*))(*v10 + 1000LL))(v10) & 1) != 0) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*v10 + 752LL))(v10);
          v14 = 0;
        }
        else {
          v14 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
          v15 = GameData_212c608[0];
          *(_QWORD*)(v14 + 96) = 0;
          *(_QWORD*)(v14 + 104) = 0;
          *(_QWORD*)(v14 + 112) = 0;
          *(_QWORD*)(v14 + 120) = 0;
          *(_QWORD*)(v14 + 128) = 0;
          *(_WORD*)(v14 + 136) = 0;
          *(_QWORD*)(v14 + 16) = 0;
          *(_QWORD*)(v14 + 24) = "NULL";
          *(_QWORD*)(v14 + 138) = 0;
          *(_QWORD*)(v14 + 144) = 0;
          *(_QWORD*)(v14 + 32) = 0;
          *(_QWORD*)(v14 + 40) = 0;
          *(_QWORD*)(v14 + 48) = 0;
          *(_QWORD*)(v14 + 56) = 0;
          *(_QWORD*)(v14 + 64) = 0;
          *(_QWORD*)(v14 + 72) = 0;
          *(_QWORD*)(v14 + 80) = 0;
          *(_QWORD*)(v14 + 88) = 0;
          *(_QWORD*)v14 = v15 + 16;
          *(_QWORD*)(v14 + 8) = 0;
          game_ProcInst_Register(v14);
          *(_BYTE*)(v14 + 152) = 0;
          *(_QWORD*)(v14 + 160) = v10;
          *(_QWORD*)v14 = game_menu_BasicMenu_ChangeChildCloseProc_vtable;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release(&GameData_21c6868);
          }
          result = (_QWORD*)GameRoutine_657850(v14, &GameData_21c67a8,
                                               "ChangeChildCloseProc", 0, v10);
        }
        v10[78] = v14;
      }
    }
  }
  return result;
}

__int64 BasicMenuCursor_16ddf80(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  (*(void (**)(_QWORD*))(*a1 + 784LL))(a1);
  a1[75] = a1[74];
  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) == 0) {
    if (((*(__int64 (**)(_QWORD*))(*a1 + 480LL))(a1) & 1) == 0) {
      (*(void (**)(_QWORD*, _QWORD*))(*a1 + 464LL))(a1, a1 + 74);
    }
    if (*((_BYTE*)a1 + 138) == 0) {
      v5 = a1[19];
      if ((v5 == 0 || __dynamic_cast(v5, GameData_2131c18[0],
                                     GameData_21319e8[0], 0) == 0) &&
          *((_BYTE*)a1 + 172) == 1) {
        GameRoutine_1553220(*((unsigned int*)a1 + 42));
        if (*((_BYTE*)a1 + 172) == 1) {
          *((_BYTE*)a1 + 172) = 0;
        }
      }
    }
  }
  if (((*(__int64 (**)(_QWORD*))(*a1 + 1000LL))(a1) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD*))(*a1 + 752LL))(a1);
    v3 = 0;
  }
  else {
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v4 = GameData_212c608[0];
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)(v3 + 104) = 0;
    *(_QWORD*)(v3 + 112) = 0;
    *(_QWORD*)(v3 + 120) = 0;
    *(_QWORD*)(v3 + 128) = 0;
    *(_WORD*)(v3 + 136) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = "NULL";
    *(_QWORD*)(v3 + 138) = 0;
    *(_QWORD*)(v3 + 144) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)v3 = v4 + 16;
    *(_QWORD*)(v3 + 8) = 0;
    game_ProcInst_Register(v3);
    *(_BYTE*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = a1;
    *(_QWORD*)v3 = game_menu_BasicMenu_ChangeChildCloseProc_vtable;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release(&GameData_21c6868);
    }
    result = GameRoutine_657850(v3, &GameData_21c67a8, "ChangeChildCloseProc",
                                0, a1);
  }
  a1[78] = v3;
  return result;
}

__int64 BasicMenuCursor_16de1f0(__int64* a1, int a2, int a3)
{
  __int64 v3;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  char v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v3 = *a1;
  *((_DWORD*)a1 + 49) = a2;
  *((_DWORD*)a1 + 50) = a3;
  v5 = (const char*)(*(__int64 (**)(__int64*))(v3 + 336))(a1);
  LayoutAccessor_1560070((void*)(&v10_.v10), a1 + 106, v5);
  result = v10_.v11;
  if (v10_.v11 != 0) {
    v7 = std___1___shared_weak_count_lock_alt1(v10_.v11);
    v8 = v10_.v10;
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v10_.v11);
    }
    if (v7 != 0 && v8 != 0) {
      v9 = (*(__int64 (**)(__int64*))(*a1 + 360))(a1);
      result = LayoutAccessor_155e830_alt1(v8, v9 & 1);
    }
    else if (v7 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  return result;
}

void BasicMenuCursor_16de600(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  _QWORD* v43;
  _QWORD* v44;
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;
  char v47[64];

  v1 = *(_QWORD*)(a1 + 232);
  v2 = *(_QWORD*)(a1 + 240);
  if (v1 == v2) {
    goto LABEL_16;
  }
  do {
    while (*(_BYTE*)(*(_QWORD*)v1 + 76LL) != 1) {
      v1 += 8;
      if (v1 == v2) {
        goto LABEL_10;
      }
    }
    if (*(_QWORD*)(a1 + 336) == *(_QWORD*)v1) {
      *(_QWORD*)(a1 + 336) = 0;
    }
    v4 = v2 - (v1 + 8);
    if (v2 != v1 + 8) {
      memmove_alt1(v1, v1 + 8, v2 - (v1 + 8));
    }
    v2 -= 8;
    *(_QWORD*)(a1 + 240) = v1 + v4;
  } while (v1 != v1 + v4);
LABEL_10:
  v5 = *(_QWORD**)(a1 + 232);
  if (v5 == (_QWORD*)v2) {
    goto LABEL_16;
  }
  v6 = 0;
  do {
    v7 = *v5;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 48LL))(*v5) & 1) != 0) {
      v6 += (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1;
    }
    ++v5;
  } while (v5 != (_QWORD*)v2);
  if (v6 == 0) {
  LABEL_16:
    v8 = *(_QWORD*)(a1 + 344);
    if (v8 != 0) {
      v10 = *(_QWORD**)(a1 + 240);
      v9 = *(_QWORD*)(a1 + 248);
      if ((unsigned __int64)v10 >= v9) {
        v12 = *(_QWORD*)(a1 + 232);
        v13 = (char*)v10 - v12;
        v14 = ((__int64)v10 - v12) >> 3;
        v15 = v14 + 1;
        if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
          GameRoutine_9c2e00_alt1();
        }
        v16 = v9 - v12;
        v17 = fw_memory_g_heap_manager_ptr;
        if (v16 >> 2 > v15) {
          v15 = v16 >> 2;
        }
        if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
          v18 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v15;
        }
        if (v18 != 0) {
          if (v18 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v19 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
          v8 = *(_QWORD*)(a1 + 344);
        }
        else {
          v19 = 0;
        }
        v20 = v19 + 8 * v18;
        v21 = (unsigned __int64)v10 - v12;
        v2 = (__int64)&v13[v19 + -8 * v14];
        *(_QWORD*)&v13[v19] = v8;
        v11 = (__int64)&v13[v19 + 8];
        memcpy_alt1(v2, v12, v21);
        *(_QWORD*)(a1 + 232) = v2;
        *(_QWORD*)(a1 + 240) = v11;
        *(_QWORD*)(a1 + 248) = v20;
        if (v12 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v22, v12);
        }
      }
      else {
        *v10 = v8;
        v11 = (__int64)(v10 + 1);
      }
      *(_QWORD*)(a1 + 240) = v11;
    }
  }
  if (*(_QWORD*)(a1 + 968) != 0) {
    v23 = *(_QWORD*)(a1 + 960);
    if (v23 != 0) {
      v24 = (__int64*)(a1 + 952);
      v25 = std___1___shared_weak_count_lock_alt1(v23);
      if (v25 != 0) {
        v26 = *v24;
        if (*v24 != 0) {
          LODWORD(v2) = *(unsigned __int8*)(v26 + 24);
          v27 = v26 + 152;
          if ((_DWORD)v2 == 0) {
            v27 = 0;
          }
          v28 = v27 != *(_QWORD*)(a1 + 968);
        }
        else {
          v28 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v28) {
            goto LABEL_44;
          }
        }
        else {
          v30 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak_alt1(v30);
          if (v28) {
            goto LABEL_44;
          }
        }
        if ((v2 & 1) == 0) {
          goto LABEL_58;
        }
      LABEL_49:
        v31 = *(_QWORD*)(a1 + 232);
        if (*(_QWORD*)(a1 + 240) != v31) {
          v32 = 0;
          v33 = 0;
          do {
            v34 = *(_QWORD*)(v31 + 8 * v32);
            v35 = *(_QWORD*)(v34 + 56);
            *(_QWORD*)(v34 + 48) = 0;
            *(_QWORD*)(v34 + 56) = 0;
            if (v35 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v35);
            }
            v36 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v32);
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v36 + 48LL))(v36) & 1) !=
                0) {
              sprintf_alt1((__int64)v47, "L_MenuItem%02d",
                           v33 % (signed __int32)*(_DWORD*)(a1 + 584));
              v37 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v32);
              LayoutAccessor_1560070((void*)(&v45_.v45), (__int64*)(a1 + 952),
                                     v47);
              BasicMenuItem_16e5110_alt1(v37, &v45_.v45);
              if (v45_.v46 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v45_.v46);
              }
              ++v33;
            }
            v31 = *(_QWORD*)(a1 + 232);
            ++v32;
          } while (v32 < (*(_QWORD*)(a1 + 240) - v31) >> 3);
        }
        goto LABEL_58;
      }
    LABEL_44:
      v29 = *(_QWORD*)(a1 + 960);
      if (v29 == 0 || *(_QWORD*)(v29 + 8) == -1) {
        goto LABEL_58;
      }
      goto LABEL_49;
    }
  }
LABEL_58:
  v38 = *(_QWORD*)(a1 + 336);
  if (v38 != 0 &&
      ((*(__int64 (**)(_QWORD))(*(_QWORD*)v38 + 40LL))(*(_QWORD*)(a1 + 336)) &
       1) != 0) {
  LABEL_60:
    v39 = *(_QWORD*)(a1 + 336);
    if (v39 != 0) {
    LABEL_61:
      (*(void (**)(__int64))(*(_QWORD*)v39 + 168LL))(v39);
    }
  }
  else {
    if ((*(_BYTE*)(a1 + 356) & 2) != 0) {
      goto LABEL_78;
    }
    v43 = *(_QWORD**)(a1 + 232);
    v44 = *(_QWORD**)(a1 + 240);
    while (v43 != v44) {
      v38 = *v43;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v43 + 48LL))(*v43) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v38 + 40LL))(v38) & 1) != 0) {
        goto LABEL_60;
      }
      ++v43;
    }
    v38 = 0;
    v39 = *(_QWORD*)(a1 + 336);
    if (v39 != 0) {
      goto LABEL_61;
    }
  }
  *(_QWORD*)(a1 + 336) = v38;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(a1, 1, 0, 0);
  v40 = *(_QWORD*)(a1 + 336);
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 160LL))(v40);
    v41 = *(_QWORD*)(a1 + 336);
    v42 = 4;
    if (v41 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v41 + 120LL))(v41) & 1) != 0) {
        v42 = 4;
      }
      else {
        v42 = 0;
      }
    }
  }
  else {
    v42 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v42;
LABEL_78:
  *(_BYTE*)(a1 + 280) = 1;
}

__int64 BasicMenuCursor_16df5e0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  float v4;
  float v5;
  int v6;
  char* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  struct {
    float v16[2];
    int v17;
  } v16_;

  ui_LayoutAccessor_SetPaneTranslate_alt1((__int64*)(a1 + 952),
                                          (__int64)"L_MenuItem00", a1 + 204);
  v2 = *(float*)(a1 + 216);
  v3 = *(float*)(a1 + 204);
  v4 = *(float*)(a1 + 208);
  v16_.v17 = 0;
  v16_.v16[0] = v3 + v2;
  v16_.v16[1] = v4;
  v5 = ui_LayoutAccessor_SetPaneTranslate_alt1(
      (__int64*)(a1 + 952), (__int64)"L_MenuItem01", (__int64)v16_.v16);
  v6 = (*(__int64 (**)(__int64, float))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176,
                                                                      v5);
  v7 = game_util_Format_alt1("L_MenuItem%02d", v6);
  v8 = *(float*)(a1 + 204);
  v9 = *(float*)(a1 + 208);
  v10 = *(float*)(a1 + 220);
  v16_.v17 = 0;
  v16_.v16[0] = v8;
  v16_.v16[1] = v9 + v10;
  ui_LayoutAccessor_SetPaneTranslate_alt1((__int64*)(a1 + 952), (__int64)v7,
                                          (__int64)v16_.v16);
  GameRoutine_16dbb80((__int64*)a1);
  GameRoutine_16dc3e0(a1);
  v11 = GameRoutine_16df380_alt1(a1);
  (*(void (**)(__int64, float))(*(_QWORD*)a1 + 712LL))(a1, v11);
  v12 = *(_QWORD**)(a1 + 232);
  v13 = *(_QWORD**)(a1 + 240);
  while (v12 != v13) {
    v14 = *v12;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v12 + 48LL))(*v12) & 1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 144LL))(v14);
    }
    ++v12;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 720LL))(a1);
}

__int64 BasicMenuCursor_16e0520(__int64 a1)
{
  __int64 result;
  __int64 i;
  __int64 v4;
  __int64 v5;
  int v6;
  float v8;
  int v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  int v16;
  float v17;
  float v18;
  __int64 v19;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "MenuItemList");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  v4 = *(_QWORD*)(a1 + 232);
  v5 = *(_QWORD*)(a1 + 240);
  v6 = 0;
  if (v5 != v4 &&
      (int)(((unsigned __int64)(v5 - v4 + 0x7FFFFFFF8LL) >> 3) + 1) >= 2) {
    v8 = *(float*)(a1 + 220);
    if (v8 != 0.0) {
      v9 = (int)(float)((float)*(int*)(a1 + 556) / v8);
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176);
      v4 = *(_QWORD*)(a1 + 232);
      v5 = *(_QWORD*)(a1 + 240);
      v6 = result * v9;
    }
  }
  if (v5 != v4) {
    v10 = 0;
    v11 = 0;
    do {
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 8 * v10) + 48LL))(
          *(_QWORD*)(v4 + 8 * v10));
      if ((result & 1) != 0) {
        if (v6 > v11 || v11 >= *(_DWORD*)(a1 + 584) + v6) {
          result = BasicMenuItem_16e5340(
              *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v10), 0);
        }
        else {
          v12 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v10);
          if ((*(_BYTE*)(v12 + 77) & 1) == 0) {
            *(_BYTE*)(v12 + 78) = 1;
          }
          *(_BYTE*)(v12 + 77) = 1;
          v13 = *(float*)(a1 + 220);
          v14 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v10);
          v15 = *(float*)(a1 + 208) - (float)*(int*)(a1 + 556);
          v16 =
              (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176);
          *(_DWORD*)(v14 + 72) = 0;
          *(float*)(v14 + 68) = v15 + (float)(v13 * (float)(v11 / v16));
          v17 = *(float*)(a1 + 204);
          v18 = *(float*)(a1 + 216);
          v19 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8 * v10);
          result =
              (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(a1 + 176);
          *(_DWORD*)(v19 + 72) = 0;
          *(float*)(v19 + 64) = v17 + (float)(v18 * (float)(v11 % (int)result));
        }
        ++v11;
      }
      v4 = *(_QWORD*)(a1 + 232);
      ++v10;
    } while (v10 < (*(_QWORD*)(a1 + 240) - v4) >> 3);
  }
  return result;
}

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64 a2)
{
  _QWORD* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  if (a2 != 0) {
    *(_QWORD*)(a2 + 8) = result;
    v3 = result;
    v5 = (_QWORD*)result[30];
    v4 = result[31];
    if ((unsigned __int64)v5 >= v4) {
      v7 = result[29];
      v8 = (char*)v5 - v7;
      v9 = ((__int64)v5 - v7) >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        goto LABEL_36;
      }
      v11 = v4 - v7;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          goto LABEL_37;
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = (char*)v5 - v7;
      v17 = (__int64)&v8[v14 + -8 * v9];
      *(_QWORD*)&v8[v14] = a2;
      v6 = (__int64)&v8[v14 + 8];
      result = (_QWORD*)memcpy(v17, v7, v16);
      v3[29] = v17;
      v3[30] = v6;
      v3[31] = v15;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v18 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18, v7);
      }
    }
    else {
      *v5 = a2;
      v6 = (__int64)(v5 + 1);
    }
    v3[30] = v6;
    v20 = (_QWORD*)v3[33];
    v19 = v3[34];
    if ((unsigned __int64)v20 < v19) {
      *v20 = a2;
      v21 = (__int64)(v20 + 1);
    LABEL_34:
      v3[33] = v21;
      return result;
    }
    v22 = v3[32];
    v23 = (char*)v20 - v22;
    v24 = ((__int64)v20 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 == 0) {
      v26 = v19 - v22;
      if (v26 >> 2 > v25) {
        v25 = v26 >> 2;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
        v27 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v25;
      }
      if (v27 == 0) {
        v28 = 0;
      LABEL_30:
        v29 = v28 + 8 * v27;
        v30 = (char*)v20 - v22;
        v31 = (__int64)&v23[v28 + -8 * v24];
        *(_QWORD*)&v23[v28] = a2;
        v21 = (__int64)&v23[v28 + 8];
        result = (_QWORD*)memcpy(v31, v22, v30);
        v3[32] = v31;
        v3[33] = v21;
        v3[34] = v29;
        if (v22 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v22);
        }
        goto LABEL_34;
      }
      if (v27 >> 61 == 0) {
        v28 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
        goto LABEL_30;
      }
    LABEL_37:
      GameRoutine_60a210(result);
    }
  LABEL_36:
    GameRoutine_9c2e00();
  }
  return result;
}

__int64 BasicMenuCursor_16e0e00(_QWORD* a1)
{
  __int64 v2;
  const char* v3;
  unsigned int v4;
  unsigned __int64 v5;
  const char* v6;
  unsigned __int64 v7;
  char* v8;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  struct {
    __int16 v12;
    char gap10_[6];
    unsigned __int64 v13;
    char* v14;
  } v12_;
  __int64 v15;

  v2 = a1[42];
  v12_.v12 = 0;
  if (v2 != 0 &&
      (v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2)) !=
          nullptr) {
    GameRoutine_60a020_alt1((__int64)&v12_.v12, v3);
    v4 = (unsigned __int8)v12_.v12;
  }
  else {
    v4 = 0;
  }
  if ((v4 & 1) != 0) {
    v5 = v12_.v13;
  }
  else {
    v5 = v4 >> 1;
  }
  if (v5 == 0) {
    v6 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 536LL))(a1);
    if (v6 != nullptr) {
      GameRoutine_60a020_alt1((__int64)&v12_.v12, v6);
    }
  }
  if ((v12_.v12 & 1) != 0) {
    v7 = v12_.v13;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v12_.v12 >> 1;
  }
  if (v7 != 0 &&
      ((v12_.v12 & 1) != 0 ? (v8 = v12_.v14) : (v8 = (char*)&v12_.v12 + 1),
       GameRoutine_887920_alt1(&v15, (__int64)v8),
       TutorialInfo_162b5f0((__int64)a1, &v15) != 0)) {
    result = 11;
    if ((v12_.v12 & 1) == 0) {
      return result;
    }
  }
  else {
    result = 0;
    if ((v12_.v12 & 1) == 0) {
      return result;
    }
  }
  if (v12_.v14 != nullptr) {
    v10 = result;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v14);
    return v10;
  }
  return result;
}

__int64 BasicMenuCursor_16e14a0(_QWORD* a1)
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

#pragma GCC visibility pop
