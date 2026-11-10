#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
_QWORD* GameRoutine_15e59c0(_QWORD* result);
__int64 GameRoutine_1553220(_QWORD);
__int64 game_gameui_MenuAnimator_PlayOut(_QWORD, _QWORD, _QWORD);
extern __int64 game_g_game_setting;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
_QWORD* BasicInfo_15e5fa0(_QWORD* result);
_QWORD* BasicInfo_15e60c0(__int64 a1);
__int64 BasicInfo_15e6120(__int64** a1);
__int64 GameRoutine_8679c0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_gameui_BasicInfo_vtable)();
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d880;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
__int64 BasicInfo_15e5b50_alt1(__int64 a1, __int64* a2,
                               __int64 a3) __asm__("BasicInfo_15e5b50");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
_QWORD* ui_LayoutAccessor_Setup_155dea0_alt1(_QWORD*, _QWORD*, __int64) __asm__(
    "ui_LayoutAccessor_Setup_155dea0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
void GameRoutine_8679c0_alt1() __asm__("GameRoutine_8679c0");
void BasicInfo_15e5b50(__int64 a1, __int64* a2, __int64 a3);

void BasicInfo_15e5b50(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  _QWORD v20[2];
  _QWORD v21[2];

  v6 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v6 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = &game_gameui_BasicInfo_vtable;
  v7 = GameData_2130240[0];
  *(_BYTE*)(a1 + 200) = 0;
  *(_BYTE*)(a1 + 204) = 0;
  *(_QWORD*)(a1 + 184) = -1;
  *(_QWORD*)(a1 + 192) = v7 + 2;
  if (*a2 != 0) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_10;
    }
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                          v8 + 160, *((float*)&v9 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v10 = 1010;
      }
      else {
        v10 = 0;
      }
    }
    else {
    LABEL_10:
      v10 = 0;
    }
    v11 = *(_QWORD*)(a1 + 176);
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
    v13 = GameData_212d880;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(a1 + 176) = v12;
    *(_QWORD*)v12 = v13 + 16;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 48) = v12 + 56;
    *(_DWORD*)(v12 + 104) = 1065353216;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(a1 + 168) = v12 + 24;
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
    }
    v14 = *(_QWORD**)(a1 + 168);
    v15 = *a2;
    if (a3 != 0) {
      v16 = a2[1];
      v21[0] = v15;
      v21[1] = v16;
      if (v16 == 0) {
        ui_LayoutAccessor_Setup_155dea0_alt1(v14, v21, a3);
        goto LABEL_23;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0_alt1(v14, v21, a3);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_20;
      }
    }
    else {
      v16 = a2[1];
      v20[0] = v15;
      v20[1] = v16;
      if (v16 == 0) {
        ui_LayoutAccessor_Setup_155dda0_alt1(v14, v20);
        goto LABEL_23;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0_alt1(v14, v20);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      LABEL_20:
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
  LABEL_23:
    ui_LayoutAccessor_SetPriority_alt1(*(_QWORD*)(a1 + 168), v10);
  }
  GameRoutine_8679c0_alt1();
  v17 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v18 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v18 & 0x10) == 0) {
      v19 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v18 & 0xFFFFFFE2 | 1;
      if (v19 > 0x0.0p+0f) {
        *(_DWORD*)(v17 + 224) = 0;
      }
    }
  }
}

void __attribute__((noreturn)) BasicInfo_DeletingDestructor()
{
  __udf(0x8002u);
}

_QWORD* BasicInfo_15e5fa0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int16 v6;
  _QWORD* v7;
  __int64 v8;

  v2 = result[1];
  v1 = result[2];
  if (v2 <= v1) {
    while (*(_BYTE*)v1 != 2) {
      v1 -= 64LL;
      if (v2 > v1) {
        return result;
      }
    }
    if (*(_DWORD*)(v1 + 32) == 3) {
      v3 = result;
      (*(void (**)(_QWORD*))(*result + 304LL))(result);
      v4 = (*(__int64 (**)(_QWORD*))(*v3 + 176LL))(v3);
      if (v3[21] != 0) {
        v5 = (__int64*)v3[21];
      }
      else {
        v5 = ui_LayoutAccessor_empty__ptr[0];
      }
      result = (_QWORD*)game_gameui_MenuAnimator_PlayOut(v4, v5, 0);
      v6 = *((_WORD*)v3 + 68);
      v7 = v3;
      v3[23] = result;
      if ((v6 & 2) != 0 && *((_BYTE*)v3 + 204) == 1) {
        result = (_QWORD*)GameRoutine_1553220(*((unsigned int*)v3 + 50));
        v7 = v3;
        if (*((_BYTE*)v3 + 204) == 1) {
          *((_BYTE*)v3 + 204) = 0;
        }
      }
      v8 = v7[1];
      if (v8 != 0) {
        while (1) {
          if (*(_BYTE*)v8 == 2) {
            if (*(_DWORD*)(v8 + 32) == 4) {
              v7[2] = v8;
              *((_WORD*)v7 + 68) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v8 == 0) {
            break;
          }
          v8 += 64;
        }
      }
      *((_WORD*)v7 + 68) |= 8u;
    }
  }
  return result;
}

_QWORD* BasicInfo_15e60c0(__int64 a1)
{
  _QWORD* result;

  result = GameRoutine_15e59c0((_QWORD*)a1);
  if ((*(_WORD*)(a1 + 136) & 2) != 0 && *(_BYTE*)(a1 + 204) == 1) {
    result = (_QWORD*)GameRoutine_1553220(*(unsigned int*)(a1 + 200));
    if (*(_BYTE*)(a1 + 204) == 1) {
      *(_BYTE*)(a1 + 204) = 0;
    }
  }
  return result;
}

__int64 BasicInfo_15e6120(__int64** a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int16 v7;
  __int64* v8;

  result = ((__int64 (*)(__int64**))(*a1)[29])(a1);
  if (((_WORD)a1[17] & 2) == 0) {
    return result;
  }
  v3 = *(_DWORD*)(game_g_game_setting + 952);
  if ((v3 & 1) != 0) {
    result = ((__int64 (*)(__int64**))(*a1)[30])(a1);
    if ((_DWORD)result != 0) {
      goto LABEL_10;
    }
    v3 = *(_DWORD*)(game_g_game_setting + 952);
  }
  if ((v3 & 2) != 0) {
    result = ((__int64 (*)(__int64**))(*a1)[31])(a1);
    if ((_DWORD)result != 0) {
      goto LABEL_10;
    }
    v3 = *(_DWORD*)(game_g_game_setting + 952);
  }
  if ((v3 & 0x80) == 0) {
    return result;
  }
  result = ((__int64 (*)(__int64**))(*a1)[32])(a1);
LABEL_10:
  switch ((_DWORD)result) {
  case 1:
    return ((__int64 (*)(__int64**))(*a1)[35])(a1);
  case 2:
    v4 = 33;
    break;
  case 3:
    v4 = 34;
    break;
  default:
    if ((result & 0xFFFFFFFE) != 2) {
      return result;
    }
    goto LABEL_16;
  }
  ((void (*)(__int64**))(*a1)[v4])(a1);
LABEL_16:
  ((void (*)(__int64**))(*a1)[38])(a1);
  v5 = ((__int64 (*)(__int64**))(*a1)[22])(a1);
  if (a1[21] != nullptr) {
    v6 = a1[21];
  }
  else {
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
  result = game_gameui_MenuAnimator_PlayOut(v5, v6, 0);
  v7 = *((_WORD*)a1 + 68);
  a1[23] = (__int64*)result;
  if ((v7 & 2) != 0 && *((_BYTE*)a1 + 204) == 1) {
    result = GameRoutine_1553220(*((unsigned int*)a1 + 50));
    if (*((_BYTE*)a1 + 204) == 1) {
      *((_BYTE*)a1 + 204) = 0;
    }
  }
  v8 = a1[1];
  if (v8 != nullptr) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*((_DWORD*)v8 + 8) == 4) {
          a1[2] = v8;
          *((_WORD*)a1 + 68) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        break;
      }
      v8 += 8;
    }
  }
  *((_WORD*)a1 + 68) |= 8u;
  return result;
}

#pragma GCC visibility pop
