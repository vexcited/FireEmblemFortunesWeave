#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*anonymous_SeWaitProc_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
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
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
__int64 map_snd_StopSe_alt1(__int64 a1,
                            unsigned int a2) __asm__("map_snd_StopSe");
__int64 map_snd_SetSeVol_alt1(__int64 a1, unsigned int a2,
                              float a3) __asm__("map_snd_SetSeVol");
_QWORD* map_snd_WaitSe(__int64 a1);
__int64 as_string_c_str(_QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__attribute__((swiftcall)) void map_snd_PlaySe(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned int a2);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
__int64 map_snd_StopSe(__int64* a1, int a2);
__int64 map_snd_SetSeVol(__int64* a1, int a2, float a3);

__attribute__((swiftcall)) void map_snd_PlaySe(PSEUDO_X8 x8_, __int64 a1,
                                               unsigned int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v5;
  int v6;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE v15[200];

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v6 = (v5 & 8) != 0 ? 2 : 3;
    if ((v6 & v5) == 0) {
      v11 = as_g_script_manager;
      v12 = *(_QWORD*)(v11 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v12 != 0) {
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
      }
      else {
        v13 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
          *(_QWORD*)(v13 + 24), 1);
      result = *(_QWORD**)(v13 + 2240);
      *(_QWORD*)(v13 + 2240) = 0;
      if (result == (_QWORD*)(v13 + 2208)) {
        v14 = 32;
      }
      else {
        if (result == nullptr) {
        LABEL_17:
          *(_QWORD*)a3 = 0;
          *(_DWORD*)(a3 + 8) = 0x2000;
          {
            result;
            return;
          }
        }
        v14 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
      goto LABEL_17;
    }
  }
  v8 = as_string_c_str(a1);
  v9 = as_string_c_str(a1);
  snd_Fade_Fade_10c910(v15, a2);
  snd_play_ff2d0((void*)(a3), v8, v9, v15, 0, 65537, 0, 0.0f, 1.0f);
  {
    (_QWORD*)snd_Fade_Destroy_Fade(v15);
    return;
  }
}

__int64 map_snd_StopSe(__int64* a1, int a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v5;
  _QWORD v6[25];

  result = snd_fnd_WeakHandle_isValid_alt1(a1);
  if ((result & 1) != 0) {
    v5 = snd_fnd_WeakHandle_get_alt1((__int64)a1);
    snd_Fade_Fade_10c910_alt1((__int64)v6, a2);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v5 - 5592) + 248LL))(v5 - 5592, v6, 0, 0x0.0p+0);
    return snd_Fade_Destroy_Fade_alt1(v6);
  }
  return result;
}

__int64 map_snd_SetSeVol(__int64* a1, int a2, float a3)
{

#pragma clang fp contract(off)
  int v6;
  int v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[25];

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      v11 = as_g_script_manager;
      v12 = *(_QWORD*)(v11 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v12 != 0) {
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
      }
      else {
        v13 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
          *(_QWORD*)(v13 + 24), 1);
      result = *(_QWORD*)(v13 + 2240);
      *(_QWORD*)(v13 + 2240) = 0;
      if (result == v13 + 2208) {
        v14 = 32;
      }
      else {
        if (result == 0) {
          return result;
        }
        v14 = 40;
      }
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))(
          (__int64)result);
    }
  }
  result = snd_fnd_WeakHandle_isValid_alt1(a1);
  if ((result & 1) != 0) {
    v9 = snd_fnd_WeakHandle_get_alt1((__int64)a1);
    if (v9 != 0) {
      v10 = v9 - 5592;
    }
    else {
      v10 = 0;
    }
    snd_Fade_Fade_10c910_alt1((__int64)v15, a2);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v10 + 40) + 72LL))(
        v10 + 40, v15, a3);
    return snd_Fade_Destroy_Fade_alt1(v15);
  }
  return result;
}

_QWORD* map_snd_WaitSe(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v2 = as_g_script_manager_ptr;
  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      v13 = *v2;
      v14 = *(_QWORD*)(v13 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v14 != 0) {
        v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
      }
      else {
        v15 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v15 + 24) + 448LL))(
          *(_QWORD*)(v15 + 24), 1);
      result = *(_QWORD**)(v15 + 2240);
      *(_QWORD*)(v15 + 2240) = 0;
      if (result == (_QWORD*)(v15 + 2208)) {
        v28 = 32;
      }
      else {
        if (result == nullptr) {
          return result;
        }
        v28 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(void*))(*result + v28))(result);
    }
  }
  v8 = GameData_212cfb0[0];
  v9 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v9 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v9 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v10 = v9[10];
    if (v10 != 0) {
      v11 = *(_QWORD*)(*(_QWORD*)(v9[6] + 8 * ((v10 + v9[9] - 1) / 0x33uLL)) +
                       80 * ((v10 + v9[9] - 1) % 0x33uLL) + 72);
      goto LABEL_19;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v11 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_19;
  }
  v11 = 0;
LABEL_19:
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       168, 16, 0);
  v17 = GameData_212c608[0];
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)v16 = v17 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  game_ProcInst_Register(v16);
  *(_QWORD*)(v16 + 152) = 0;
  *(_QWORD*)v16 = anonymous_SeWaitProc_vtable;
  *(_DWORD*)(v16 + 160) = 0x2000;
  GameRoutine_112180(v16 + 152, a1);
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
  v18 = ProcInst_657850(v16, &GameData_21c67a8, "SeWaitProc", 1, v11);
  game_script_StartWaitProc(v18);
  v19 = (_QWORD*)*v8;
  if (*v8 != 0 ||
      (v19 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v19 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v20 = v19[10];
    if (v20 != 0) {
      v21 = *(_QWORD*)(*(_QWORD*)(v19[6] + 8 * ((v20 + v19[9] - 1) / 0x33uLL)) +
                       80 * ((v20 + v19[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v21 = 0;
    }
  }
  else {
    v21 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v21 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v22 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v23 = 2)
           : (v23 = 3),
       (v23 & v22) != 0)) {
    v24 = *(float*)(v21 + 144);
    if (v24 < 1.0) {
      v24 = 1.0;
    }
    *(_WORD*)(v21 + 136) = *(_WORD*)(v21 + 136) & 0xFF97 | 0x20;
    *(float*)(v21 + 144) = v24;
  }
  v25 = *v2;
  v26 = *(
      _QWORD*)(v25 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 472LL))(v26);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v27 + 24) + 448LL))(*(_QWORD*)(v27 + 24), 0);
}

#pragma GCC visibility pop
