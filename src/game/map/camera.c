#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7bb6c0(_QWORD);
__int64 GameRoutine_7c2820(_QWORD);
__int64 GameRoutine_7c2a10(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_1f99e80[])();
extern __int64 (*GameData_1f99eb0[])();
extern __int64 (*GameData_1f99f40[])();
extern __int64 (*GameData_1f9a068[])();
extern __int64 (*game_map_Camera_vtable[])();
extern __int64 (*gfx_render_Camera_vtable[])();
extern __int64 GameData_21cd140;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212e740[2];
extern int GameData_21d9190;
__int64 Camera_Destructor_7bea00(_QWORD* a1);
__int64 Camera_7beb20(_QWORD* a1);
__int64 Camera_DeletingDestructor_7bec40(_QWORD* a1);
__int64 Camera_7bed80(_QWORD* a1);
__int64 Camera_7bfee0(__int64 a1, float a2, float a3, float a4);
float Camera_7c0c90(__int64 a1, float a2);
__int64 Camera_7c0d80(__int64 a1);
__int64 Camera_Unknown9(__int64 a1, __int64 a2, long double a3, long double a4);
__int64 GameRoutine_15e1e60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_734a80(_QWORD, _QWORD);
__int64 GameRoutine_8232c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1f9a0c8[])();
extern __int64 (*GameData_1f9a158[])();
extern __int64 (*GameData_1f9a1d8[])();
extern __int64 (*game_map_Camera_Impl_vtable[])();
extern __int64 GameData_212d0b8[5];
extern __int64* GameData_212d1d0[4];
float GameRoutine_7c2010(void);
__int64 Camera_7be4c0(__int64 a1, __int64 a2);
__int64 GameRoutine_7c23c0(_QWORD);
extern __int64 GameData_21c9648;
__int64 game_map_Camera_Impl_Impl_closure0_Invoke(__int64 a1, char* a2);
__int64 game_map_Camera_Impl_Impl_closure_Invoke_7c25a0(__int64 result,
                                                        _BYTE* a2);
bool game_map_Camera_Impl_Impl_closure_Invoke_7c2710(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Camera_7bfd40(_QWORD, _QWORD, float);
__int64 Camera_7c23c0_alt1(_QWORD) __asm__("Camera_7c23c0");
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_7c2a10_alt1(__int64) __asm__("GameRoutine_7c2a10");
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitPool_Get(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get(__int64);
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64
snd_fnd_WeakHandle_reset_alt1(__int64) __asm__("snd_fnd_WeakHandle_reset");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 snd_startSurroundPan(__int64*, __int64, float);
__int64 snd_startVolume_ffe30(_QWORD, _QWORD, float);
__int64 snd_startVolume_ffe30_alt1(__int64*, __int64,
                                   float) __asm__("snd_startVolume_ffe30");
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
extern _DWORD* GameData_212d280;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_21c6868;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64 (*game_map_anonymous_ProcMoveWait_vtable[])();
extern __int64* GameData_212cfd0[8];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212c608[2];
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
extern __int64 GameData_2258178;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
float Cursor_734120(int, int, float, float, float, float);
float fmodf(float, float);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 Camera_7beed0(__int64 a1);
__int64 Camera_7bf8f0(__int64 a1);
__int64 Camera_7bfc60(__int64 a1, __int128* a2);
void Camera_7c0000(__int64 a1, char a2);
void Camera_7c0130(__int64 a1, char a2);
void Camera_7c0260(__int64 a1, char a2);
void Camera_7c0390(__int64 a1, char a2);
__int64 Camera_7c04c0(__int64 a1, __int128* a2);
void Camera_7c0e80(__int64 a1, __int64 a2, char a3);
__attribute__((swiftcall)) void Camera_7c10e0(PSEUDO_X8 x8_, __int64 a1,
                                              int8x16_t* a2);
__attribute__((swiftcall)) void Camera_7c13a0(PSEUDO_X8 x8_, __int64 a1,
                                              int8x16_t* a2);
__int64 Camera_7c16d0(__int64 a1, unsigned int a2);
__int64 Camera_Unknown8(__int64 result, __int64 a2);
__int64 Camera_Unknown2_7c1a10(__int64 result, __int64 a2);
__int64 Camera_7c23c0(__int64 a1);

__int64 Camera_7be4c0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  float v12;
  int v13;
  __int64 v14;
  __int64* v15;
  long double v16;
  long double v17;
  int v18;
  __int64 v19;
  long double v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int128 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[4];
  _QWORD* v35;
  _QWORD v36[4];
  _QWORD* v37;
  _QWORD v38[4];
  _QWORD* v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;

  *(_QWORD*)(a1 + 64) = 0;
  v3 = GameData_212d0b8[0];
  *(_WORD*)(a1 + 80) = 1;
  *(_QWORD*)(a1 + 104) = 0;
  v4 = GameData_212d1d0[0];
  *(_QWORD*)a1 = game_map_Camera_Impl_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_WORD*)(a1 + 120) = 1;
  *(_QWORD*)(a1 + 144) = 0;
  v3 += 16;
  *(_WORD*)(a1 + 160) = 1;
  *(_QWORD*)(a1 + 184) = 0;
  *(_WORD*)(a1 + 200) = 1;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 176) = v3;
  v5 = a1 + 176;
  *(_QWORD*)(a1 + 240) = v3;
  v6 = a1 + 240;
  *(_QWORD*)(a1 + 304) = v3;
  v7 = a1 + 304;
  *(_QWORD*)(a1 + 16) = v4 + 2;
  *(_WORD*)(a1 + 264) = 1;
  *(_QWORD*)(a1 + 56) = v4 + 2;
  v8 = (__int64*)(a1 + 56);
  *(_QWORD*)(a1 + 96) = v4 + 2;
  v9 = (__int64*)(a1 + 96);
  *(_QWORD*)(a1 + 136) = v4 + 2;
  v10 = (__int64*)(a1 + 136);
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_WORD*)(a1 + 328) = 1;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  v11 = a1 + 384;
  *(_QWORD*)(a1 + 416) = 0;
  *(_BYTE*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 424) = 0x2000;
  *(_QWORD*)(a1 + 44) = 0x4334000043340000LL;
  *(_QWORD*)(a1 + 72) = 0x500000002LL;
  *(_QWORD*)(a1 + 112) = 0x500000002LL;
  *(_QWORD*)(a1 + 152) = 0x500000002LL;
  *(_QWORD*)(a1 + 192) = 0x500000002LL;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0x500000002LL;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0x500000002LL;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0x500000002LL;
  *(_WORD*)(a1 + 40) = 256;
  v12 = GameRoutine_7c2010();
  v13 = *(unsigned __int8*)(a1 + 80);
  *(float*)v38 = v12;
  if (v13 == 1) {
    v14 = *v8;
    v15 = v8;
  LABEL_5:
    (*(void (**)(__int64*))(v14 + 24))(v15);
    *(_QWORD*)(a1 + 64) = 0;
    *(_WORD*)(a1 + 80) = 256;
    goto LABEL_6;
  }
  if (*(float*)(a1 + 64) > 0.0) {
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    v14 = *v8;
    v15 = v8;
    goto LABEL_5;
  }
  if (((*(__int64 (**)(__int64*, _QWORD*, __int64))(*(_QWORD*)(a1 + 56) + 8LL))(
           v8, v38, a1 + 88) &
       1) != 0) {
    (*(void (**)(__int64*))(*v8 + 16))(v8);
    v14 = *v8;
    v15 = v8;
    goto LABEL_5;
  }

LABEL_6:
  v18 = *(unsigned __int8*)(a1 + 120);
  LODWORD(v38[0]) = 0;
  if (v18 == 1) {
    v19 = *v9;
    *(_QWORD*)&v16 = 0;
  LABEL_10:
    *(_QWORD*)&v17 = 0;
  LABEL_11:
    (*(void (**)(__int64*, long double, long double))(v19 + 24))(v9, v16, v17);
    *(_QWORD*)(a1 + 104) = 0;
    *(_WORD*)(a1 + 120) = 256;
    goto LABEL_12;
  }
  if (*(float*)(a1 + 104) > 0.0) {
    (*(void (**)(__int64*))(*v9 + 16))(v9);
    v19 = *v9;
    goto LABEL_10;
  }
  if (((*(__int64 (**)(__int64*, _QWORD*, __int64))(*(_QWORD*)(a1 + 96) + 8LL))(
           v9, v38, a1 + 128) &
       1) != 0) {
    (*(void (**)(__int64*))(*v9 + 16))(v9);
    v19 = *v9;
    LODWORD(v17) = v38[0];
    goto LABEL_11;
  }

LABEL_12:
  LODWORD(v38[0]) = 1065353216;
  if (*(_BYTE*)(a1 + 160) == 1) {
    v22 = *v10;
    LODWORD(v20) = 1.0;
  LABEL_16:
    LODWORD(v21) = 1.0;
    goto LABEL_17;
  }
  if (*(float*)(a1 + 144) > 0.0) {
    (*(void (**)(__int64*))(*v10 + 16))(v10);
    v22 = *v10;
    goto LABEL_16;
  }
  if (((*(__int64 (**)(__int64*, _QWORD*, __int64))(*(_QWORD*)(a1 + 136) +
                                                    8LL))(v10, v38, a1 + 168) &
       1) != 0) {
    (*(void (**)(__int64*))(*v10 + 16))(v10);
    v22 = *v10;
    LODWORD(v21) = v38[0];
  LABEL_17:
    (*(void (**)(__int64*, long double, long double))(v22 + 24))(v10, v20, v21);
    *(_QWORD*)(a1 + 144) = 0;
    *(_WORD*)(a1 + 160) = 256;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v31 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v31;
    __cxa_guard_release(&GameData_21a6130);
  }
  v42 = GameData_21a6120;
  GameRoutine_734a80(v5, &v42);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v32 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v32;
    __cxa_guard_release(&GameData_21a6130);
  }
  v41 = GameData_21a6120;
  GameRoutine_734a80(v6, &v41);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v33 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v33;
    __cxa_guard_release(&GameData_21a6130);
  }
  v40 = GameData_21a6120;
  GameRoutine_734a80(v7, &v40);
  *(_QWORD*)v11 = 0;
  *(_QWORD*)(v11 + 8) = 0;
  *(_BYTE*)(v11 + 16) = 0;
  *(_DWORD*)(a1 + 412) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *(_WORD*)(a1 + 480) = 1;
  Camera_7c0d80(a1);
  v23 = *(_QWORD*)(a1 + 8);
  v24 = *(_OWORD*)(v23 + 32);
  if (v23 != 0) {
    v25 = v23 + 16;
  }
  else {
    v25 = 0;
  }
  *(_QWORD*)(a1 + 368) = v24;
  v26 = *(_OWORD*)(a1 + 368);
  *((_QWORD*)&v26 + 1) = DWORD2(v24);
  *(_OWORD*)(a1 + 368) = v26;
  GameRoutine_8232c0(v25);
  v39 = v38;
  v38[0] = GameData_1f9a0c8;
  v38[1] = a1;
  v36[0] = GameData_1f9a158;
  v36[1] = a1;
  v37 = v36;
  v34[0] = GameData_1f9a1d8;
  v34[1] = a1;
  v35 = v34;
  GameRoutine_15e1e60(v38, v36, v34);
  if (v35 == v34) {
    v27 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_29;
    }
    v27 = 40;
  }
  (*(void (**)(__int64))(*v35 + v27))((__int64)v35);

LABEL_29:
  if (v37 == v36) {
    v28 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_34;
    }
    v28 = 40;
  }
  (*(void (**)(__int64))(*v37 + v28))((__int64)v37);

LABEL_34:
  result = (__int64)v39;
  if (v39 == v38) {
    v30 = 32;
  }
  else {
    if (v39 == nullptr) {
      return result;
    }
    v30 = 40;
  }
  return (*(__int64 (**)(__int64))(*v39 + v30))((__int64)v39);
}

__int64 Camera_Destructor_7bea00(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_map_Camera_vtable;
  a1[1] = GameData_1f99e80;
  a1[2] = GameData_1f99eb0;
  a1[52] = GameData_1f99f40;
  result = a1[54];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[54] = 0;
  }
  v3 = a1[48];
  a1[2] = gfx_render_Camera_vtable;
  if (v3 != 0) {
    v4 = a1[49];
    if (v3 == v4) {
      goto LABEL_10;
    }
    do {
      result = *(_QWORD*)(v4 - 8);
      *(_QWORD*)(v4 - 8) = 0;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      v4 -= 24;
    } while (v4 != v3);
    v5 = a1[48];
    a1[49] = v3;
    v3 = v5;
    if (v5 != 0) {
    LABEL_10:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v3);
    }
  }
  *a1 = GameData_1f9a068;
  if ((_QWORD*)GameData_21cd140 == a1) {
    GameData_21cd140 = 0;
    GameData_21d9190 = 0;
  }
  return result;
}

__int64 Camera_7beb20(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(a1 - 2) = game_map_Camera_vtable;
  v2 = a1 - 2;
  *(a1 - 1) = GameData_1f99e80;
  *a1 = GameData_1f99eb0;
  a1[50] = GameData_1f99f40;
  result = a1[52];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[52] = 0;
  }
  v4 = a1[46];
  *a1 = gfx_render_Camera_vtable;
  if (v4 != 0) {
    v5 = a1[47];
    if (v4 == v5) {
      goto LABEL_10;
    }
    do {
      result = *(_QWORD*)(v5 - 8);
      *(_QWORD*)(v5 - 8) = 0;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      v5 -= 24;
    } while (v5 != v4);
    v6 = a1[46];
    a1[47] = v4;
    v4 = v6;
    if (v6 != 0) {
    LABEL_10:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v4);
    }
  }
  *v2 = GameData_1f9a068;
  if ((_QWORD*)GameData_21cd140 == v2) {
    GameData_21cd140 = 0;
    GameData_21d9190 = 0;
  }
  return result;
}

__int64 Camera_DeletingDestructor_7bec40(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_map_Camera_vtable;
  a1[1] = GameData_1f99e80;
  a1[2] = GameData_1f99eb0;
  a1[52] = GameData_1f99f40;
  v2 = a1[54];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[54] = 0;
  }
  v3 = a1[48];
  a1[2] = GameData_212e740[0] + 2;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[49];
    if (v3 == v5) {
      goto LABEL_10;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      *(_QWORD*)(v5 - 8) = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      }
      v5 -= 24;
    } while (v5 != v3);
    v7 = a1[48];
    a1[49] = v3;
    v3 = v7;
    if (v7 != 0) {
    LABEL_10:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v3);
    }
  }
  *a1 = GameData_1f9a068;
  if (*(_QWORD**)GameData_212cfc8[0] == a1) {
    *GameData_212cfc8[0] = 0;
    GameData_21d9190 = 0;
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, a1);
}

__int64 Camera_7bed80(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(a1 - 2) = game_map_Camera_vtable;
  v2 = a1 - 2;
  *(a1 - 1) = GameData_1f99e80;
  *a1 = GameData_1f99eb0;
  a1[50] = GameData_1f99f40;
  v3 = a1[52];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    a1[52] = 0;
  }
  v4 = a1[46];
  *a1 = GameData_212e740[0] + 2;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = a1[47];
    if (v4 == v6) {
      goto LABEL_10;
    }
    do {
      v7 = *(_QWORD*)(v6 - 8);
      *(_QWORD*)(v6 - 8) = 0;
      if (v7 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
      }
      v6 -= 24;
    } while (v6 != v4);
    v8 = a1[46];
    a1[47] = v4;
    v4 = v8;
    if (v8 != 0) {
    LABEL_10:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9, v4);
    }
  }
  *v2 = GameData_1f9a068;
  if (*(_QWORD**)GameData_212cfc8[0] == v2) {
    *GameData_212cfc8[0] = 0;
    GameData_21d9190 = 0;
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10, v2);
}

__int64 Camera_7beed0(__int64 a1)
{
  __int128 v2;
  __int128 v3;
  __int64 result;
  bool v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  int v12;
  _BOOL4 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  float v20;
  __int64 v21;
  char v22;
  int v23;
  float v24;
  float v25;
  int v26;
  __int64 v27;
  __int64 v28;
  float v29;
  int v30;
  char v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64* v48;
  float v49;
  float v50;
  float v51;
  float v52;
  int v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  __int64 v58;
  int v59;
  float v60;
  int v61;
  float v62;
  float v63;
  float v64;
  double v66;
  _QWORD v67[2];
  _DWORD v68[50];

  v2 = *(_OWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  *(_QWORD*)(a1 + 368) = v2;
  v3 = *(_OWORD*)(a1 + 368);
  *((_QWORD*)&v3 + 1) = DWORD2(v2);
  *(_OWORD*)(a1 + 368) = v3;
  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = game_UnitPool_Get(result);
    v5 = result == 0;
  }
  else {
    v5 = true;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v7 = (v6 & 8) != 0 ? 2 : 3;
    if ((v7 & v6) == 0) {
      return result;
    }
  }
  if ((*(_BYTE*)(a1 + 480) & 1) == 0) {
    return result;
  }
  v8 = game_g_game_setting_ptr;
  v9 = *(_QWORD*)game_g_game_setting_ptr;
  if (GameData_2258178 == 0) {
    v11 = true;
    v12 = 0;
    v13 = false;
    v14 = 0;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) != 0) {
      goto LABEL_89;
    }
    goto LABEL_95;
  }
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
      ((*(_BYTE*)(v9 + 804) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 805) == 1 &&
                                             (*(_BYTE*)(v9 + 806) & 1) != 0)) {
    v10 = 520;
  }
  else {
    if (*(_BYTE*)(v9 + 903) != 1 ||
        (*(_BYTE*)(v9 + 900) & 1) == 0 &&
            (*(_BYTE*)(v9 + 940) != 1 || *(_BYTE*)(v9 + 901) != 1 ||
             *(_BYTE*)(v9 + 902) != 1)) {
      goto LABEL_29;
    }
    v10 = 528;
  }
  if (COERCE_FLOAT(*(_QWORD*)(GameData_2258178 + v10)) != 0.0) {
    v13 = true;
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
      goto LABEL_49;
    }
    goto LABEL_44;
  }
LABEL_29:
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
      ((*(_BYTE*)(v9 + 804) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 805) == 1 &&
                                             (*(_BYTE*)(v9 + 806) & 1) != 0)) {
    v15 = 524;
    goto LABEL_38;
  }
  if (*(_BYTE*)(v9 + 903) == 1 &&
      ((*(_BYTE*)(v9 + 900) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 901) == 1 &&
                                             *(_BYTE*)(v9 + 902) == 1)) {
    v15 = 532;
  LABEL_38:
    v13 = *(float*)(GameData_2258178 + v15) != 0.0;
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
      goto LABEL_49;
    }
    goto LABEL_44;
  }
  v13 = false;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0) {
  LABEL_44:
    if ((*(_BYTE*)(v9 + 804) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                              *(_BYTE*)(v9 + 805) == 1 &&
                                              (*(_BYTE*)(v9 + 806) & 1) != 0) {
      v16 = 520;
    LABEL_52:
      v17 = *(_QWORD*)(GameData_2258178 + v16);
      goto LABEL_53;
    }
  }
LABEL_49:
  LODWORD(v17) = 0;
  if (*(_BYTE*)(v9 + 903) == 1 &&
      ((*(_BYTE*)(v9 + 900) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 901) == 1 &&
                                             *(_BYTE*)(v9 + 902) == 1)) {
    v16 = 528;
    goto LABEL_52;
  }
LABEL_53:
  v18 = fabsf(*(float*)&v17);
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
      ((*(_BYTE*)(v9 + 804) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 805) == 1 &&
                                             (*(_BYTE*)(v9 + 806) & 1) != 0)) {
    v19 = 524;
  LABEL_62:
    v20 = *(float*)(GameData_2258178 + v19);
    goto LABEL_63;
  }
  v20 = 0.0;
  if (*(_BYTE*)(v9 + 903) == 1 &&
      ((*(_BYTE*)(v9 + 900) & 1) != 0 || *(_BYTE*)(v9 + 940) == 1 &&
                                             *(_BYTE*)(v9 + 901) == 1 &&
                                             *(_BYTE*)(v9 + 902) == 1)) {
    v19 = 532;
    goto LABEL_62;
  }
LABEL_63:
  v21 = *(_QWORD*)(GameData_2258178 + 192);
  v11 = v18 <= fabsf(v20);
  if (v21 == 0 ||
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                            8 * ((unsigned __int64)(v21 +
                                                    *(_QWORD*)(GameData_2258178 +
                                                               184) -
                                                    1) >>
                                 10)) +
                 4 * ((v21 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                      0x3FF)) == 0) {
    if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
        ((*(_BYTE*)(v9 + 804) & 1) != 0 ||
         *(_BYTE*)(v9 + 940) == 1 && *(_BYTE*)(v9 + 805) == 1 &&
             (*(_BYTE*)(v9 + 806) & 1) != 0)) {
      v12 = v5 & *(_BYTE*)(GameData_2258178 + 440);
      goto LABEL_89;
    }
    if (*(_BYTE*)(v9 + 903) == 1 &&
        ((*(_BYTE*)(v9 + 900) & 1) != 0 ||
         *(_BYTE*)(v9 + 940) == 1 && *(_BYTE*)(v9 + 901) == 1 &&
             (*(_BYTE*)(v9 + 902) & 1) != 0)) {
      v12 = v5 & *(_BYTE*)(GameData_2258178 + 500);
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) != 0) {
        goto LABEL_89;
      }
      v14 = 0;
    }
    else {
      v12 = 0;
      v14 = 0;
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) & 1) != 0) {
        goto LABEL_89;
      }
    }
  LABEL_95:
    if (*(_BYTE*)(v9 + 903) != 1) {
      goto LABEL_110;
    }
    if ((*(_BYTE*)(v9 + 900) & 1) == 0) {
      if (*(_BYTE*)(v9 + 940) != 1) {
        goto LABEL_110;
      }
      if ((*(_BYTE*)(v9 + 901) & 1) == 0) {
        goto LABEL_110;
      }
      v22 = *(_BYTE*)(v9 + 902);
      if (v11) {
        goto LABEL_110;
      }
      goto LABEL_99;
    }
    v22 = 1;
    goto LABEL_98;
  }
  v12 = 0;
  v14 = 0;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 0) {
    goto LABEL_95;
  }
LABEL_89:
  if ((*(_BYTE*)(v9 + 804) & 1) != 0) {
    v14 = 1;
    v22 = 1;
    if (v11) {
      goto LABEL_110;
    }
    goto LABEL_99;
  }
  v14 = 1;
  if (*(_BYTE*)(v9 + 940) != 1) {
    goto LABEL_95;
  }
  if ((*(_BYTE*)(v9 + 805) & 1) == 0) {
    goto LABEL_95;
  }
  v22 = 1;
  if ((*(_BYTE*)(v9 + 806) & 1) == 0) {
    goto LABEL_95;
  }
LABEL_98:
  if (v11) {
    goto LABEL_110;
  }
LABEL_99:
  if (v13 && v12 != 0 && (v22 & 1) != 0) {
    if (GameData_2258178 != 0) {
      v23 = *(_DWORD*)(GameData_2258178 + 588);
      v24 = 0.0;
      v25 = -1.0;
      if (v23 == 3) {
        v24 = 1.0;
      }
      if (v23 == 4) {
        goto LABEL_114;
      }
    LABEL_113:
      v25 = v24;
      if (v24 != 0.0) {
        goto LABEL_114;
      }
    }
    if (v14 != 0) {
      goto LABEL_128;
    }
  LABEL_121:
    v30 = 0;
    goto LABEL_122;
  }
LABEL_110:
  v26 = *(_DWORD*)(v9 + 952);
  v24 = 1.0;
  v25 = -1.0;
  if ((v26 & 0x2000000) == 0) {
    v24 = 0.0;
  }
  if ((v26 & 0x4000000) == 0) {
    goto LABEL_113;
  }
LABEL_114:
  v27 = game_8224a0(9);
  if (game_GameModeData_instance_ != 0) {
    v28 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v27);
    if (v28 != 0 && (unsigned __int8)*(_DWORD*)(v28 + 32) == 1) {
      v25 = -v25;
    }
  }
  if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 16) + 16LL))(a1 + 16);
  }
  else {
    v29 = *(float*)(a1 + 48);
  }
  Camera_7bfd40(a1, 1, v29 + (float)(v25 * 30.0));
  v9 = *(_QWORD*)v8;
  if ((*(_BYTE*)(*(_QWORD*)v8 + 807LL) & 1) == 0) {
    goto LABEL_121;
  }
LABEL_128:
  if ((*(_BYTE*)(v9 + 804) & 1) == 0) {
    v30 = 1;
    if (*(_BYTE*)(v9 + 940) == 1 && (*(_BYTE*)(v9 + 805) & 1) != 0) {
      v31 = 1;
      if ((*(_BYTE*)(v9 + 806) & 1) != 0) {
        if (v11) {
          goto LABEL_135;
        }
        goto LABEL_145;
      }
    }
  LABEL_122:
    if (*(_BYTE*)(v9 + 903) == 1) {
      if ((*(_BYTE*)(v9 + 900) & 1) == 0) {
        if (*(_BYTE*)(v9 + 940) != 1) {
          goto LABEL_145;
        }
        if ((*(_BYTE*)(v9 + 901) & 1) == 0) {
          goto LABEL_145;
        }
        v31 = *(_BYTE*)(v9 + 902);
        if (!v11) {
          goto LABEL_145;
        }
        goto LABEL_135;
      }
      v31 = 1;
      if (v11) {
        goto LABEL_135;
      }
    }
  LABEL_145:
    v33 = *(float*)(v9 + 972);
    if (v33 <= 0.25) {
      v35 = 0.0;
      if (v33 >= -0.25) {
        goto LABEL_169;
      }
      v34 = 0.25;
    }
    else {
      v34 = -0.25;
    }
    v36 = v33 + v34;
    v37 = 0x1.5555560000000p+0;
    goto LABEL_161;
  }
  v30 = 1;
  v31 = 1;
  if (!v11) {
    goto LABEL_145;
  }
LABEL_135:
  if (!v13 || v12 == 0 || (v31 & 1) == 0) {
    goto LABEL_145;
  }
  if (GameData_2258178 == 0) {
    v35 = -0.0;
    goto LABEL_169;
  }
  if (v30 != 0 && ((*(_BYTE*)(v9 + 804) & 1) != 0 ||
                   *(_BYTE*)(v9 + 940) == 1 && *(_BYTE*)(v9 + 805) == 1 &&
                       (*(_BYTE*)(v9 + 806) & 1) != 0)) {
    v32 = 524;
  }
  else {
    v38 = 0.0;
    if (*(_BYTE*)(v9 + 903) != 1 ||
        (*(_BYTE*)(v9 + 900) & 1) == 0 &&
            (*(_BYTE*)(v9 + 940) != 1 || *(_BYTE*)(v9 + 901) != 1 ||
             *(_BYTE*)(v9 + 902) != 1)) {
      goto LABEL_158;
    }
    v32 = 532;
  }
  v38 = *(float*)(GameData_2258178 + v32);
LABEL_158:
  v39 = *(_QWORD*)(GameData_2258178 + 192);
  v40 = -v38;
  if (v39 != 0) {
    v39 =
        *(int*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                           8 * ((unsigned __int64)(v39 +
                                                   *(_QWORD*)(GameData_2258178 +
                                                              184) -
                                                   1) >>
                                10)) +
                4 * ((v39 + *(_QWORD*)(GameData_2258178 + 184) - 1) & 0x3FF));
  }
  v36 = *(float*)(GameData_2258178 + 4 * v39 + 300) * v40;
  v37 = 1.5;
LABEL_161:
  v35 = v36 * v37;
  if ((float)(v36 * v37) != 0.0) {
    v41 = game_8224a0(10);
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_173;
    }
    v42 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v41);
    if (v42 != 0) {
      v43 = -v35;
      if ((unsigned __int8)*(_DWORD*)(v42 + 32) == 1) {
        v35 = -v35;
      }
    }
    if (game_GameModeData_instance_ != 0 &&
        (v44 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
      LOBYTE(v43) = *(_BYTE*)(v44 + 129);
      v45 = (float)LODWORD(v43);
      LOBYTE(v43) = *(_BYTE*)(v44 + 130);
      v46 = (float)LODWORD(v43);
    }
    else {
    LABEL_173:
      v45 = 0x1.6800000000000p+6;
      v46 = 0x1.6800000000000p+6;
    }
    v48 = game_g_frame_clock_ptr[0];
    v49 =
        0x1.e000000000000p+5 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v49 <= 0.0) {
      v49 = 1.0;
    }
    v50 = (float)(v35 * v49) + (float)(v35 * v49);
    if (*(float*)(a1 + 68) == *(float*)(a1 + 64)) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
    }
    else {
      v51 = *(float*)(a1 + 88);
    }
    v52 = v50 + v51;
    v53 = *(unsigned __int8*)(a1 + 80);
    if (v46 >= v52) {
      v54 = v52;
    }
    else {
      v54 = v46;
    }
    if (v52 >= v45) {
      v55 = v54;
    }
    else {
      v55 = v45;
    }
    *(float*)v68 = v55;
    if (v53 == 1) {
      result = (*(__int64 (**)(__int64, float, float))(
          *(_QWORD*)(a1 + 56) + 24LL))(a1 + 56, v55, v55);
      v56 = 0.0;
    }
    else {
      v56 = 0.75;
      if (*(float*)(a1 + 64) <= 0.75) {
        result = (*(__int64 (**)(__int64, _DWORD*, __int64))(
            *(_QWORD*)(a1 + 56) + 8LL))(a1 + 56, v68, a1 + 88);
        if ((result & 1) == 0) {
          v59 = 0;
          if (v46 <= v55) {
            goto LABEL_193;
          }
          goto LABEL_200;
        }
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
        v57 = *(_QWORD*)(a1 + 56);
        v58 = a1 + 56;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
        v57 = *(_QWORD*)(a1 + 56);
        v58 = a1 + 56;
      }
      result = (*(__int64 (**)(__int64))(v57 + 24))(v58);
    }
    *(float*)(a1 + 64) = v56;
    *(_DWORD*)(a1 + 68) = 0;
    *(_WORD*)(a1 + 80) = 256;
    v59 = 1;
    if (v46 <= v55) {
    LABEL_193:
      v60 = 0.0;
      v61 = *GameData_212d280;
      if (*(_DWORD*)(a1 + 408) + 1 == *GameData_212d280) {
        v62 = 0x1.e000000000000p+5 / (float)*(int*)(*v48 + 476);
        if (v62 <= 0.0) {
          v62 = 1.0;
        }
        v60 = *(float*)(a1 + 404) + v62;
        if (v60 > 0x1.e000000000000p+5) {
          v60 = 0x1.e000000000000p+5;
        }
      }
      *(float*)(a1 + 404) = v60;
      *(_DWORD*)(a1 + 408) = v61;
      goto LABEL_201;
    }
  LABEL_200:
    *(_QWORD*)(a1 + 404) = 0;
  LABEL_201:
    v63 = 1.0;
    if (v35 <= 0.0) {
      v63 = v35;
    }
    if (v63 >= 0.0) {
      v64 = v63;
    }
    else {
      v64 = -1.0;
    }
    if (v59 != 0) {
      if (v55 > v45 && v46 > v55) {
        if (*(float*)(a1 + 412) != v64) {
          if ((snd_fnd_WeakHandle_isValid(a1 + 416) & 1) != 0) {
            snd_Fade_Fade_10c830(v68, 0.0);
            snd_stop_ffc40(a1 + 416, v68);
            snd_Fade_Destroy_Fade(v68);
            snd_fnd_WeakHandle_reset(a1 + 416);
          }
          snd_Fade_Fade_10c830(v68, 0.0);
          snd_play_ff2d0((void*)(v67), "SE_SYS_Zoom_Move", "SE_SYS_Zoom_Move",
                         v68, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(v68);
          LODWORD(v66) = 1148846080;
          snd_Fade_Fade_10c830(v68, v66);
          snd_startVolume_ffe30(v67, v68, 0x1.3333340000000p-2);
          snd_Fade_Destroy_Fade(v68);
          result = GameRoutine_112180(a1 + 416, v67);
        }
      }
      else {
        result = Camera_7c23c0_alt1(a1);
      }
    }
    *(float*)(a1 + 412) = v64;
    return result;
  }
LABEL_169:
  result = GameRoutine_7c2820(a1);
  v47 = *(float*)(a1 + 412);
  *(_QWORD*)(a1 + 404) = 0;
  if (v47 != v35) {
    result = snd_fnd_WeakHandle_isValid(a1 + 416);
    if ((result & 1) != 0) {
      result = Camera_7c23c0_alt1(a1);
    }
  }
  *(float*)(a1 + 412) = v35;
  return result;
}

__int64 Camera_7bf8f0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  float v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  unsigned int v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v47;
  _QWORD v48[25];

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      v7 = (float*)(a1 + 28);
      v47 = *(float*)(a1 + 28);
      v9 = *(float*)(a1 + 24);
      *(_BYTE*)(a1 + 41) = 0;
      if (v47 >= v9) {
        goto LABEL_15;
      }
      goto LABEL_14;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_27;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f) {
    LODWORD(v6) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                                  v4 + 160, *((float*)&v5 + 3)))
                      .n128_u32[3];
    v7 = (float*)(a1 + 28);
    v8 = *(float*)(a1 + 28);
    v9 = *(float*)(a1 + 24);
    *(_BYTE*)(a1 + 41) = 0;
    if (v6 == 0x1.0000000000000p+0f) {
      if (v8 >= v9) {
      LABEL_15:
        v10 = *(float*)(a1 + 64);
        v11 = *(float*)(a1 + 68);
        *(_BYTE*)(a1 + 81) = 0;
        if (v11 < v10) {
          *(float*)(a1 + 68) = v10;
        }
        v12 = *(float*)(a1 + 104);
        v13 = *(float*)(a1 + 108);
        *(_BYTE*)(a1 + 121) = 0;
        if (v13 < v12) {
          *(float*)(a1 + 108) = v12;
        }
        v14 = *(float*)(a1 + 248);
        v15 = *(float*)(a1 + 252);
        *(_BYTE*)(a1 + 265) = 0;
        if (v15 < v14) {
          *(float*)(a1 + 252) = v14;
        }
        v16 = *(float*)(a1 + 316);
        v17 = *(float*)(a1 + 312);
        *(_BYTE*)(a1 + 329) = 0;
        if (v16 < v17) {
          *(float*)(a1 + 316) = v17;
        }
        v18 = *(float*)(a1 + 144);
        v19 = *(float*)(a1 + 148);
        *(_BYTE*)(a1 + 161) = 0;
        if (v19 < v18) {
          *(float*)(a1 + 148) = v18;
        }
        v20 = *(float*)(a1 + 184);
        v21 = *(float*)(a1 + 188);
        *(_BYTE*)(a1 + 201) = 0;
        if (v21 < v20) {
          *(float*)(a1 + 188) = v20;
        }
        goto LABEL_52;
      }
    LABEL_14:
      *v7 = v9;
      goto LABEL_15;
    }
  }
  else {
  LABEL_27:
    v9 = *(float*)(a1 + 24);
    v8 = *(float*)(a1 + 28);
    *(_BYTE*)(a1 + 41) = 0;
  }
  if (v8 < v9) {
    v22 = v8 + (**(float (***)(__int64))(a1 + 16))(a1 + 16);
    if (*(float*)(a1 + 24) < v22) {
      v22 = *(float*)(a1 + 24);
    }
    *(float*)(a1 + 28) = v22;
  }
  v23 = *(float*)(a1 + 64);
  v24 = *(float*)(a1 + 68);
  *(_BYTE*)(a1 + 81) = 0;
  if (v24 < v23) {
    v25 = v24 + (**(float (***)(__int64))(a1 + 56))(a1 + 56);
    if (*(float*)(a1 + 64) < v25) {
      v25 = *(float*)(a1 + 64);
    }
    *(float*)(a1 + 68) = v25;
  }
  v26 = *(float*)(a1 + 104);
  v27 = *(float*)(a1 + 108);
  *(_BYTE*)(a1 + 121) = 0;
  if (v27 < v26) {
    v28 = v27 + (**(float (***)(__int64))(a1 + 96))(a1 + 96);
    if (*(float*)(a1 + 104) < v28) {
      v28 = *(float*)(a1 + 104);
    }
    *(float*)(a1 + 108) = v28;
  }
  v29 = *(float*)(a1 + 248);
  v30 = *(float*)(a1 + 252);
  *(_BYTE*)(a1 + 265) = 0;
  if (v30 < v29) {
    v31 = v30 + (**(float (***)(__int64))(a1 + 240))(a1 + 240);
    if (*(float*)(a1 + 248) < v31) {
      v31 = *(float*)(a1 + 248);
    }
    *(float*)(a1 + 252) = v31;
  }
  v32 = *(float*)(a1 + 316);
  v33 = *(float*)(a1 + 312);
  *(_BYTE*)(a1 + 329) = 0;
  if (v32 < v33) {
    v34 = v32 + (**(float (***)(__int64))(a1 + 304))(a1 + 304);
    if (*(float*)(a1 + 312) < v34) {
      v34 = *(float*)(a1 + 312);
    }
    *(float*)(a1 + 316) = v34;
  }
  v35 = *(float*)(a1 + 144);
  v36 = *(float*)(a1 + 148);
  *(_BYTE*)(a1 + 161) = 0;
  if (v36 < v35) {
    v37 = v36 + (**(float (***)(__int64))(a1 + 136))(a1 + 136);
    if (*(float*)(a1 + 144) < v37) {
      v37 = *(float*)(a1 + 144);
    }
    *(float*)(a1 + 148) = v37;
  }
LABEL_52:
  if ((snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 416)) & 1) != 0 &&
      game_GameModeData_instance_ != 0) {
    v39 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v39 != 0) {
      LOBYTE(v38) = *(_BYTE*)(v39 + 129);
      v40 = (float)v38;
      LOBYTE(v38) = *(_BYTE*)(v39 + 130);
      v41 = (float)v38;
      if ((float)v38 > v40) {
        v43 = *(float*)(a1 + 64);
        v42 = *(float*)(a1 + 68);
        v44 = *(float*)(a1 + 88);
        if (v42 < v43) {
          v44 = Cursor_734120(*(_DWORD*)(a1 + 72), *(_DWORD*)(a1 + 76),
                              *(float*)(a1 + 84), v44, v42, v43);
        }
        v45 = 0x1.99999a0000000p-2f -
              (float)((float)((float)(v44 - v40) * 0x1.99999a0000000p-2f) /
                      (float)(v41 - v40));
        snd_Fade_Fade_10c830_alt1((__int64)v48, 0x0.0p+0f);
        snd_startSurroundPan((__int64*)(a1 + 416), (__int64)v48, v45);
        snd_Fade_Destroy_Fade_alt1(v48);
      }
    }
  }
  return GameRoutine_7c2a10_alt1(a1);
}

__int64 Camera_7bfc60(__int64 a1, __int128* a2)
{

#pragma clang fp contract(off)
  __int128 v2;
  int v3;
  __int64 v5;
  __int64 result;
  __int128 v7;
  __int128 v8;
  __int128 v9;

  v2 = *a2;
  v3 = *(unsigned __int8*)(a1 + 264);
  v7 = *a2;
  if (v3 == 1) {
    v5 = *(_QWORD*)(a1 + 240);
    v9 = v2;
    v8 = v2;
    result = (*(__int64 (**)(__int64, __int128*, __int128*))(v5 + 24))(
        a1 + 240, &v9, &v8);
    *(_DWORD*)(a1 + 248) = 0;
  LABEL_6:
    *(_DWORD*)(a1 + 252) = 0;
    *(_WORD*)(a1 + 264) = 256;
    return result;
  }
  if (*(float*)(a1 + 248) > 0x1.8000000000000p-1f ||
      ((result = (*(__int64 (**)(__int64, __int128*, __int64))(
            *(_QWORD*)(a1 + 240) + 8LL))(a1 + 240, &v7, a1 + 288)) &
       1) != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(a1 + 240) + 16LL))((void*)(&v9), a1 + 240);
    v8 = v7;
    result = (*(__int64 (**)(__int64, __int128*, __int128*))(
        *(_QWORD*)(a1 + 240) + 24LL))(a1 + 240, &v9, &v8);
    *(_DWORD*)(a1 + 248) = 1061158912;
    goto LABEL_6;
  }
  return result;
}

__int64 Camera_7bfee0(__int64 a1, float a2, float a3, float a4)
{
  __int64 v5;
  float v6;
  float v7;
  int v8;
  float v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  float v13;

  if (game_GameModeData_instance_ != 0 &&
      (v5 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    LOBYTE(a3) = *(_BYTE*)(v5 + 129);
    LOBYTE(a4) = *(_BYTE*)(v5 + 130);
    v6 = (float)LODWORD(a3);
    v7 = (float)LODWORD(a4);
  }
  else {
    v6 = 90.0;
    v7 = 90.0;
  }
  v8 = *(unsigned __int8*)(a1 + 80);
  v9 = v6 + (float)((float)(v7 - v6) * a2);
  v13 = v9;
  if (v8 == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(a1 + 56) +
                                                     24LL))(a1 + 56, v9, v9);
    *(_DWORD*)(a1 + 64) = 0;
  }
  else {
    if (*(float*)(a1 + 64) <= 0.75) {
      result = (*(__int64 (**)(__int64, float*, __int64))(
          *(_QWORD*)(a1 + 56) + 8LL))(a1 + 56, &v13, a1 + 88);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
      v11 = *(_QWORD*)(a1 + 56);
      v12 = a1 + 56;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
      v11 = *(_QWORD*)(a1 + 56);
      v12 = a1 + 56;
    }
    result = (*(__int64 (**)(__int64))(v11 + 24))(v12);
    *(_DWORD*)(a1 + 64) = 1061158912;
  }
  *(_DWORD*)(a1 + 68) = 0;
  *(_WORD*)(a1 + 80) = 256;
  return result;
}

void Camera_7c0000(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  int v8;
  bool v9;
  int v10;

  v2 = *(_QWORD*)(a1 + 432);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_BYTE*)(v2 + 400) = 0;
      *(_QWORD*)(v2 + 384) = 0;
      *(_QWORD*)(v2 + 392) = 0;
      return;
    }
  }
  v8 = *(unsigned __int8*)(v2 + 400);
  if ((a2 & 1) != 0 ||
      (*(int*)(v2 + 396) >= 1 ? (v9 = v8 == 0) : (v9 = false), !v9)) {
    if ((a2 & 1) != 0) {
      v10 = 10;
    LABEL_26:
      *(_DWORD*)(v2 + 392) = 0;
      *(_BYTE*)(v2 + 400) = 0;
      *(_DWORD*)(v2 + 396) = v10;
      *(_QWORD*)(v2 + 384) = 0xA41200000LL;
      return;
    }
    if (*(int*)(v2 + 388) < 11 || v8 != 0) {
      v10 = 0;
      goto LABEL_26;
    }
  }
}

void Camera_7c0130(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  int v8;
  bool v9;
  int v10;

  v2 = *(_QWORD*)(a1 + 432);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_BYTE*)(v2 + 400) = 0;
      *(_QWORD*)(v2 + 384) = 0;
      *(_QWORD*)(v2 + 392) = 0;
      return;
    }
  }
  v8 = *(unsigned __int8*)(v2 + 400);
  if ((a2 & 1) != 0 ||
      (*(int*)(v2 + 396) >= 1 ? (v9 = v8 == 0) : (v9 = false), !v9)) {
    if ((a2 & 1) != 0) {
      v10 = 10;
    LABEL_26:
      *(_DWORD*)(v2 + 392) = 0;
      *(_BYTE*)(v2 + 400) = 0;
      *(_DWORD*)(v2 + 396) = v10;
      *(_QWORD*)(v2 + 384) = 0x1E41200000LL;
      return;
    }
    if (*(int*)(v2 + 388) < 31 || v8 != 0) {
      v10 = 0;
      goto LABEL_26;
    }
  }
}

void Camera_7c0260(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  int v8;
  bool v9;
  int v10;

  v2 = *(_QWORD*)(a1 + 432);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_BYTE*)(v2 + 400) = 0;
      *(_QWORD*)(v2 + 384) = 0;
      *(_QWORD*)(v2 + 392) = 0;
      return;
    }
  }
  v8 = *(unsigned __int8*)(v2 + 400);
  if ((a2 & 1) != 0 ||
      (*(int*)(v2 + 396) >= 1 ? (v9 = v8 == 0) : (v9 = false), !v9)) {
    if ((a2 & 1) != 0) {
      v10 = 10;
    LABEL_26:
      *(_DWORD*)(v2 + 392) = 0;
      *(_BYTE*)(v2 + 400) = 0;
      *(_DWORD*)(v2 + 396) = v10;
      *(_QWORD*)(v2 + 384) = 0x3C41200000LL;
      return;
    }
    if (*(int*)(v2 + 388) < 61 || v8 != 0) {
      v10 = 0;
      goto LABEL_26;
    }
  }
}

void Camera_7c0390(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  int v8;
  bool v9;
  int v10;

  v2 = *(_QWORD*)(a1 + 432);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      *(_BYTE*)(v2 + 400) = 0;
      *(_QWORD*)(v2 + 384) = 0;
      *(_QWORD*)(v2 + 392) = 0;
      return;
    }
  }
  v8 = *(unsigned __int8*)(v2 + 400);
  if ((a2 & 1) != 0 ||
      (*(int*)(v2 + 396) >= 1 ? (v9 = v8 == 0) : (v9 = false), !v9)) {
    if ((a2 & 1) != 0) {
      v10 = 12;
    LABEL_26:
      *(_DWORD*)(v2 + 392) = 0;
      *(_BYTE*)(v2 + 400) = 0;
      *(_DWORD*)(v2 + 396) = v10;
      *(_QWORD*)(v2 + 384) = 0x6441400000LL;
      return;
    }
    if (*(int*)(v2 + 388) < 101 || v8 != 0) {
      v10 = 0;
      goto LABEL_26;
    }
  }
}

__int64 Camera_7c04c0(__int64 a1, __int128* a2)
{

#pragma clang fp contract(off)
  __int128 v2;
  int v3;
  __int64 v5;
  __int64 result;
  __int128 v7;
  __int128 v8;
  __int128 v9;

  v2 = *a2;
  v3 = *(unsigned __int8*)(a1 + 328);
  v7 = *a2;
  if (v3 == 1) {
    v5 = *(_QWORD*)(a1 + 304);
    v9 = v2;
    v8 = v2;
    result = (*(__int64 (**)(__int64, __int128*, __int128*))(v5 + 24))(
        a1 + 304, &v9, &v8);
    *(_DWORD*)(a1 + 312) = 0;
  LABEL_6:
    *(_DWORD*)(a1 + 316) = 0;
    *(_WORD*)(a1 + 328) = 256;
    return result;
  }
  if (*(float*)(a1 + 312) > 0x1.8000000000000p-1f ||
      ((result = (*(__int64 (**)(__int64, __int128*, __int64))(
            *(_QWORD*)(a1 + 304) + 8LL))(a1 + 304, &v7, a1 + 352)) &
       1) != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(a1 + 304) + 16LL))((void*)(&v9), a1 + 304);
    v8 = v7;
    result = (*(__int64 (**)(__int64, __int128*, __int128*))(
        *(_QWORD*)(a1 + 304) + 24LL))(a1 + 304, &v9, &v8);
    *(_DWORD*)(a1 + 312) = 1061158912;
    goto LABEL_6;
  }
  return result;
}

float Camera_7c0c90(__int64 a1, float a2)
{
  __int64 v3;
  float v4;
  float v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  float result;

  if (game_GameModeData_instance_ != 0 &&
      (v3 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    LOBYTE(a2) = *(_BYTE*)(v3 + 129);
    v4 = (float)LODWORD(a2);
    LOBYTE(a2) = *(_BYTE*)(v3 + 130);
    v5 = (float)LODWORD(a2);
  }
  else {
    v4 = 90.0;
    v5 = 90.0;
  }
  if (*(float*)(a1 + 68) == *(float*)(a1 + 64)) {
    v6 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 56) + 16LL))(a1 + 56);
  }
  else {
    v6 = *(float*)(a1 + 88);
  }
  v7 = *(_QWORD*)(a1 + 440);
  v8 = *(_QWORD*)(a1 + 448);
  v9 = ((v8 - v7) << 7) - 1;
  if (v8 == v7) {
    v9 = 0;
  }
  v10 = *(_QWORD*)(a1 + 472) + *(_QWORD*)(a1 + 464);
  if (v9 == v10) {
    GameRoutine_7bb6c0(a1 + 432);
    v7 = *(_QWORD*)(a1 + 440);
    v10 = *(_QWORD*)(a1 + 472) + *(_QWORD*)(a1 + 464);
  }
  result = (float)(v6 - v4) / (float)(v5 - v4);
  *(float*)(*(_QWORD*)(v7 + 8 * (v10 >> 10)) + 4 * (v10 & 0x3FF)) = result;
  ++*(_QWORD*)(a1 + 472);
  return result;
}

__int64 Camera_7c0d80(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  _BYTE v15[200];

  GameRoutine_7c2820(a1);
  v2 = *(float*)(a1 + 24);
  v3 = *(float*)(a1 + 28);
  *(_BYTE*)(a1 + 41) = 0;
  if (v3 < v2) {
    *(float*)(a1 + 28) = v2;
  }
  v4 = *(float*)(a1 + 64);
  v5 = *(float*)(a1 + 68);
  *(_BYTE*)(a1 + 81) = 0;
  if (v5 < v4) {
    *(float*)(a1 + 68) = v4;
  }
  v6 = *(float*)(a1 + 248);
  v7 = *(float*)(a1 + 252);
  *(_BYTE*)(a1 + 265) = 0;
  if (v7 < v6) {
    *(float*)(a1 + 252) = v6;
  }
  v8 = *(float*)(a1 + 316);
  v9 = *(float*)(a1 + 312);
  *(_BYTE*)(a1 + 329) = 0;
  if (v8 < v9) {
    *(float*)(a1 + 316) = v9;
  }
  v10 = *(float*)(a1 + 144);
  v11 = *(float*)(a1 + 148);
  *(_BYTE*)(a1 + 161) = 0;
  if (v11 < v10) {
    *(float*)(a1 + 148) = v10;
  }
  v12 = *(float*)(a1 + 184);
  v13 = *(float*)(a1 + 188);
  *(_BYTE*)(a1 + 201) = 0;
  if (v13 < v12) {
    *(float*)(a1 + 188) = v12;
  }
  *(_DWORD*)(a1 + 412) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  if ((snd_fnd_WeakHandle_isValid(a1 + 416) & 1) != 0) {
    snd_Fade_Fade_10c830(v15, 0.0f);
    snd_stop_ffc40(a1 + 416, v15);
    snd_Fade_Destroy_Fade(v15);
    snd_fnd_WeakHandle_reset(a1 + 416);
  }
  *(_BYTE*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  return GameRoutine_7c2a10(a1);
}

void Camera_7c0e80(__int64 a1, __int64 a2, char a3)
{
  int v5;
  int v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  unsigned __int64 v11;
  float32x4_t v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;
  float32x4_t v16;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v6 = 2)
           : (v6 = 3),
       (v6 & v5) != 0)) {
    v7 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
    v8 = *(float*)(v7 + 252);
    if (v8 != *(float*)(v7 + 248)) {
      v9 = v8 + (**(float (***)(__int64))(v7 + 240))(v7 + 240);
      v10 = *(float*)(v7 + 248);
      if (v10 < v9) {
        v9 = *(float*)(v7 + 248);
      }
      if (v9 != v10) {
        if ((a3 & 1) == 0) {
          goto LABEL_16;
        }
        if (*(float*)(v7 + 252) == v10) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)(v7 + 240) + 16LL))((void*)(&v16), v7 + 240);
        }
        else {
          v11 = *(_QWORD*)(v7 + 296);
          LANES128(v16).n128_u64[0] = *(_QWORD*)(v7 + 288);
          LANES128(v16).n128_u64[1] = v11;
        }
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v7 + 240) + 16LL))((void*)(&v15), v7 + 240);
        v12 = vsubq_f32(v16, v15);
        if ((float)(LANES128_OF(vmulq_f32(v12, v12)).n128_f32[2] +
                    (float)(LANES128(v12).n128_f32[0] *
                            LANES128(v12).n128_f32[0])) >=
            0x1.9000000000000p+4f) {
        LABEL_16:
          v13 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
          v14 = GameData_212c608[0];
          *(_QWORD*)(v13 + 96) = 0;
          *(_QWORD*)(v13 + 104) = 0;
          *(_QWORD*)(v13 + 112) = 0;
          *(_QWORD*)(v13 + 120) = 0;
          *(_QWORD*)(v13 + 128) = 0;
          *(_WORD*)(v13 + 136) = 0;
          *(_QWORD*)(v13 + 16) = 0;
          *(_QWORD*)(v13 + 24) = "NULL";
          *(_QWORD*)(v13 + 138) = 0;
          *(_QWORD*)(v13 + 144) = 0;
          *(_QWORD*)(v13 + 32) = 0;
          *(_QWORD*)(v13 + 40) = 0;
          *(_QWORD*)(v13 + 48) = 0;
          *(_QWORD*)(v13 + 56) = 0;
          *(_QWORD*)(v13 + 64) = 0;
          *(_QWORD*)(v13 + 72) = 0;
          *(_QWORD*)(v13 + 80) = 0;
          *(_QWORD*)(v13 + 88) = 0;
          *(_QWORD*)v13 = v14 + 16;
          *(_QWORD*)(v13 + 8) = 0;
          game_ProcInst_Register(v13);
          *(_BYTE*)(v13 + 152) = a3 & 1;
          *(_QWORD*)v13 = game_map_anonymous_ProcMoveWait_vtable;
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
          ProcInst_657850(v13, (__int64)&GameData_21c67a8,
                          (__int64)"ProcMoveWait", 1, a2);
        }
      }
    }
  }
}

__attribute__((swiftcall)) void Camera_7c10e0(PSEUDO_X8 x8_, __int64 a1,
                                              int8x16_t* a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __n128 result;
  float32x4_t v30;

  v3 = *(_QWORD**)(a1 + 432);
  v6 = v3[2];
  v3 += 2;
  v7 = (*(float (**)(_QWORD*))(v6 + 16))(v3);
  v8 = (*(float (**)(_QWORD*))(*v3 + 16LL))(v3);
  v9 = fmodf(v8, 0x1.6800000000000p+8f);
  if (v7 < 0x0.0p+0f) {
    v9 = v9 + 0x1.6800000000000p+8f;
  }
  v10 = (float)(PSEUDO_UNFUSED((float)((float)(v9 + 0x1.6800000000000p+7f) *
                                       0x1.1df46a0000000p-6f) *
                               0x1.0000000000000p-1f)) +
        (float)(roundf((float)((float)((float)(v9 + 0x1.6800000000000p+7f) *
                                       0x1.1df46a0000000p-6f) *
                               0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v10 > 0x1.921fb60000000p+0f) {
    v11 = 0x1.921fb60000000p+1f;
  LABEL_7:
    v10 = v11 - v10;
    v12 = -0x1.0000000000000p+0f;
    goto LABEL_8;
  }
  v12 = 0x1.0000000000000p+0f;
  if (v10 < -0x1.921fb60000000p+0f) {
    v11 = -0x1.921fb60000000p+1f;
    goto LABEL_7;
  }
LABEL_8:
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  v14 = vrsqrteq_f32(v13);
  v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
  v16 =
      vbicq_s8(vmulq_f32(vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15))),
                         COERCE_AS(float32x4_t, GameData_1a83610)),
               vceqzq_f32(v13));
  LANES128(v15).n128_f32[0] = v10 * v10;
  v17 = vmulq_n_f32(
      v16,
      v10 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                (float)(v10 *
                                                                                                        v10))) *
                                                                                (float)(v10 *
                                                                                        v10))) *
                                                             (float)(v10 *
                                                                     v10))) *
                                             (float)(v10 * v10))) *
                          (float)(v10 * v10)) +
                  0x1.0000000000000p+0f));
  v18 = v17;
  LANES128(v19).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  LANES128(v18).n128_f32[3] =
      v12 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            LANES128(
                                                                                                v15)
                                                                                                .n128_f32
                                                                                                    [0])) *
                                                                            LANES128(
                                                                                v15)
                                                                                .n128_f32
                                                                                    [0])) *
                                                         LANES128(v15)
                                                             .n128_f32[0])) *
                                         LANES128(v15).n128_f32[0])) *
                      LANES128(v15).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v20 = vmulq_f32(v18, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v22).n128_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v23).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
  v24 = vmlaq_f32(vmulq_f32(v20, v21), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v19, v15));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(*(a2)).n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v26 = vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v19, v23)),
                  v25, v22);
  LANES128(v27).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v18).n128_u64[1],
                                                 LANES128(v17).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v18).n128_u64[1],
                                                 LANES128(v17).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v18).n128_u64[1],
                                                 LANES128(v17).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v20).n128_u64[1] = LANES128(v25).n128_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v17).n128_u64[0];
  *(int32x2_t*)&LANES128(v16).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 1);
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(result).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v30 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v18, v26),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v27, v28)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v25, v16)),
                  result, v20);
  LANES128(v30).n128_u32[3] = 0;
  *a3 = v30;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Camera_7c13a0(PSEUDO_X8 x8_, __int64 a1,
                                              int8x16_t* a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __n128 result;
  float32x4_t v36;

  v3 = *(_QWORD**)(a1 + 432);
  v6 = v3[2];
  v3 += 2;
  v7 = (*(float (**)(_QWORD*))(v6 + 16))(v3);
  v8 = (*(float (**)(_QWORD*))(*v3 + 16LL))(v3);
  v9 = fmodf(v8, 0x1.6800000000000p+8f);
  if (v7 < 0x0.0p+0f) {
    v9 = v9 + 0x1.6800000000000p+8f;
  }
  if (v9 >= 0x1.6800000000000p+5f) {
    if (v9 >= 0x1.0e00000000000p+7f) {
      if (v9 >= 0x1.c200000000000p+7f) {
        v11 = v9 < 0x1.3b00000000000p+8f;
        v10 = 0x1.921fb60000000p+0f;
        if (v11) {
          v10 = 0x1.f6a7a20000000p+1f;
        }
      }
      else {
        v10 = 0x1.921fb60000000p+1f;
      }
    }
    else {
      v10 = 0x1.2d97c80000000p+1f;
    }
  }
  else {
    v10 = 0x1.921fb60000000p+0f;
  }
  v12 = v10 +
        (float)(roundf(v10 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v12 < -0x1.921fb60000000p+0f) {
    v13 = -0x1.0000000000000p+0f;
  }
  else {
    v13 = 0x1.0000000000000p+0f;
  }
  v14 = -0x1.921fb60000000p+1f - v12;
  if (v12 >= -0x1.921fb60000000p+0f) {
    v14 = v12;
  }
  if (v12 > 0x1.921fb60000000p+0f) {
    v15 = 0x1.921fb60000000p+1f - v12;
  }
  else {
    v15 = v14;
  }
  if (v12 > 0x1.921fb60000000p+0f) {
    v16 = -0x1.0000000000000p+0f;
  }
  else {
    v16 = v13;
  }
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  v18 = vrsqrteq_f32(v17);
  v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v17, v18)));
  v20 =
      vbicq_s8(vmulq_f32(vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v17, v19))),
                         COERCE_AS(float32x4_t, GameData_1a83610)),
               vceqzq_f32(v17));
  PSEUDO_LOW_LANE128(v19, n128_f32, v15 * v15);
  v21 =
      v16 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            LANES128(
                                                                                                v19)
                                                                                                .n128_f32
                                                                                                    [0])) *
                                                                            LANES128(
                                                                                v19)
                                                                                .n128_f32
                                                                                    [0])) *
                                                         LANES128(v19)
                                                             .n128_f32[0])) *
                                         LANES128(v19).n128_f32[0])) *
                      LANES128(v19).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v22 = vmulq_n_f32(
      v20,
      v15 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                (float)(v15 *
                                                                                                        v15))) *
                                                                                (float)(v15 *
                                                                                        v15))) *
                                                             (float)(v15 *
                                                                     v15))) *
                                             (float)(v15 * v15))) *
                          (float)(v15 * v15)) +
                  0x1.0000000000000p+0f));
  LANES128(v23).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  v24 = v22;
  LANES128(v24).n128_f32[3] = v21;
  v25 = vmulq_f32(v24, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v28).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
  v29 = vmlaq_f32(vmulq_f32(v25, v27), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v23, v20));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(*(a2)).n128_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v31 = vmlsq_f32(vmlaq_f32(v29, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v23, v28)),
                  v30, v26);
  LANES128(v32).n128_u64[0] = LANES128(v22).n128_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v24).n128_u64[1],
                                                 LANES128(v22).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v24).n128_u64[1],
                                                 LANES128(v22).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v24).n128_u64[1],
                                                 LANES128(v22).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v25).n128_u64[0];
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v25).n128_u64[1] = LANES128(v30).n128_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v22).n128_u64[0];
  *(int32x2_t*)&LANES128(v34).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 1);
  LANES128(result).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(result).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v36 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v24, v31),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v32, v33)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v30, v34)),
                  result, v25);
  LANES128(v36).n128_u32[3] = 0;
  *a3 = v36;
  {
    result;
    return;
  }
}

__int64 Camera_7c16d0(__int64 a1, unsigned int a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  char v8;
  char v9;

  v2 = *(_QWORD**)(a1 + 432);
  v4 = v2[2];
  v2 += 2;
  v5 = (*(float (**)(_QWORD*))(v4 + 16))(v2);
  v6 = (*(float (**)(_QWORD*))(*v2 + 16LL))(v2);
  v7 = fmodf(v6, 0x1.6800000000000p+8f);
  if (v5 < 0x0.0p+0f) {
    v7 = v7 + 0x1.6800000000000p+8f;
  }
  if (v7 < 0x1.6800000000000p+5f) {
  LABEL_4:
    v8 = 1;
    v9 = 0;
    goto LABEL_7;
  }
  if (v7 >= 0x1.0e00000000000p+7f) {
    if (v7 < 0x1.c200000000000p+7f) {
      return a2;
    }
    if (v7 >= 0x1.3b00000000000p+8f) {
      goto LABEL_4;
    }
    v8 = 0;
    v9 = 1;
  }
  else {
    v9 = 0;
    v8 = 0;
  }
LABEL_7:
  if ((((_BYTE)a2 - 1) & 0xF8) != 0) {
    a2 = 0;
  }
  else {
    a2 = 0x100000008000402uLL >> (8 * ((unsigned __int8)a2 - 1));
  }
  if ((v9 & 1) == 0) {
    if ((((_BYTE)a2 - 1) & 0xF8) != 0) {
      a2 = 0;
    }
    else {
      a2 = 0x100000008000402uLL >> (8 * ((unsigned __int8)a2 - 1));
    }
    if ((v8 & 1) == 0) {
      if ((((_BYTE)a2 - 1) & 0xF8) != 0) {
        return 0;
      }
      else {
        return (unsigned int)(0x100000008000402uLL >>
                              (8 * ((unsigned __int8)a2 - 1)));
      }
    }
  }
  return a2;
}

__int64 Camera_Unknown8(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 432);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 0;
  if (*(float*)(v3 + 28) == *(float*)(v3 + 24)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v3 + 16) + 16LL))(v3 + 16),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v5 = *(_DWORD*)(v3 + 48);
  }
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v5;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = BYTE1(v5);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = BYTE2(v5);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = HIBYTE(v5);
  if (*(float*)(v3 + 68) == *(float*)(v3 + 64)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v3 + 56) + 16LL))(v3 + 56),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v10 = *(_DWORD*)(v3 + 88);
  }
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v10;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v10);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v10);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = HIBYTE(v10);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = 0;
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = 0;
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 0;
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = 0;
  return result;
}

__int64 Camera_Unknown2_7c1a10(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 424);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 0;
  if (*(float*)(v3 + 28) == *(float*)(v3 + 24)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v3 + 16) + 16LL))(v3 + 16),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v5 = *(_DWORD*)(v3 + 48);
  }
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v5;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = BYTE1(v5);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = BYTE2(v5);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = HIBYTE(v5);
  if (*(float*)(v3 + 68) == *(float*)(v3 + 64)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v3 + 56) + 16LL))(v3 + 56),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v10 = *(_DWORD*)(v3 + 88);
  }
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v10;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v10);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v10);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = HIBYTE(v10);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = 0;
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = 0;
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 0;
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = 0;
  return result;
}

__int64 Camera_Unknown9(__int64 a1, __int64 a2, long double a3, long double a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  long double v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  float v25;
  int v27;
  float v28;
  __int64 v29;
  __int64 v30;

  v6 = *(_QWORD*)(a1 + 432);
  v29 = v4;
  v30 = v5;
  v7 = *(int*)(a2 + 20);
  v8 = *(_QWORD*)(a2 + 8);
  v10 = v6;
  *(_DWORD*)(a2 + 20) = v7 + 2;
  v11 = *(unsigned __int8*)(v8 + v7 + 1);
  *(_DWORD*)(a2 + 20) = v7 + 3;
  v12 = v11 | (*(unsigned __int8*)(v8 + v7 + 2) << 8);
  *(_DWORD*)(a2 + 20) = v7 + 4;
  v13 = *(unsigned __int8*)(v8 + v7 + 3);
  *(_DWORD*)(a2 + 20) = v7 + 5;
  v27 = v12 | (v13 << 16) | (*(unsigned __int8*)(v8 + v7 + 4) << 24);
  LODWORD(a3) = v27;
  if (*(_BYTE*)(v6 + 40) == 1) {
    v14 = *(_QWORD*)(v6 + 16);
    v15 = v6 + 16;
    LODWORD(a4) = v27;
  }
  else if (*(float*)(v6 + 24) <= 0.0) {
    if (((*(__int64 (**)(__int64, int*, __int64, float))(
             *(_QWORD*)(v6 + 16) + 8LL))(v6 + 16, &v27, v6 + 48,
                                         *(float*)&v27) &
         1) == 0) {
      goto LABEL_8;
    }
    (*(void (**)(__int64))(*(_QWORD*)(v10 + 16) + 16LL))(v10 + 16);
    v14 = *(_QWORD*)(v10 + 16);
    LODWORD(a4) = v27;
    v15 = v10 + 16;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v6 + 16) + 16LL))(v6 + 16);
    v14 = *(_QWORD*)(v10 + 16);
    v15 = v10 + 16;
    LODWORD(a4) = v27;
  }
  (*(void (**)(__int64, long double, long double))(v14 + 24))(v15, a3, a4);
  *(_QWORD*)(v10 + 24) = 0;
  *(_WORD*)(v10 + 40) = 256;

LABEL_8:
  v18 = *(int*)(a2 + 20);
  v19 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  v20 = *(unsigned __int8*)(v19 + v18);
  *(_DWORD*)(a2 + 20) = v18 + 2;
  v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v18 + 3;
  v22 = *(unsigned __int8*)(v19 + v18 + 2);
  *(_DWORD*)(a2 + 20) = v18 + 4;
  LODWORD(v28) = v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
  *(float*)&v16 = v28;
  if (*(_BYTE*)(v10 + 80) == 1) {
    v23 = *(_QWORD*)(v10 + 56);
    v24 = v10 + 56;
    *(float*)&v17 = v28;
  LABEL_14:
    (*(void (**)(__int64, long double, long double))(v23 + 24))(v24, v16, v17);
    *(_QWORD*)(v10 + 64) = 0;
    *(_WORD*)(v10 + 80) = 256;
    goto LABEL_15;
  }
  if (*(float*)(v10 + 64) > 0.0) {
    v25 = v28;
    (*(void (**)(__int64))(*(_QWORD*)(v10 + 56) + 16LL))(v10 + 56);
    v23 = *(_QWORD*)(v10 + 56);
    v24 = v10 + 56;
    *(float*)&v17 = v25;
    goto LABEL_14;
  }
  if (((*(__int64 (**)(__int64, float*, __int64, float))(
           *(_QWORD*)(v10 + 56) + 8LL))(v10 + 56, &v28, v10 + 88, v28) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v10 + 56) + 16LL))(v10 + 56);
    v23 = *(_QWORD*)(v10 + 56);
    *(float*)&v17 = v28;
    v24 = v10 + 56;
    goto LABEL_14;
  }

LABEL_15:
  *(_DWORD*)(a2 + 20) += 4;
  return Camera_7c0d80(v10);
}

__int64 game_map_Camera_Impl_Impl_closure0_Invoke(__int64 a1, char* a2)
{
  char v2;
  __int64 result;

  v2 = *a2;
  result = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(result + 480) = (*a2 & 1) == 0;
  if ((v2 & 1) != 0) {
    return GameRoutine_7c23c0(result);
  }
  return result;
}

__int64 Camera_7c23c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  _QWORD v7[25];

  result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 416));
  if ((result & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(a1 + 416);
    if (v3 != 0) {
      v4 = v3 - 5592;
    }
    else {
      v4 = 0;
    }
    v5 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 40) + 64LL))(v4 + 40);
    snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_SYS_Zoom_Stop",
                        (__int64)"SE_SYS_Zoom_Stop", (__int64)v7, 0, 0x10001u,
                        0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v7);
    if (v5 != 0x1.0000000000000p+0f) {
      snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
      snd_startVolume_ffe30_alt1(&v6, (__int64)v7, v5);
      snd_Fade_Destroy_Fade_alt1(v7);
    }
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(a1 + 416));
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c830_alt1((__int64)v7, 0x0.0p+0f);
      snd_stop_ffc40_alt1((__int64*)(a1 + 416), (__int64)v7);
      snd_Fade_Destroy_Fade_alt1(v7);
      result = snd_fnd_WeakHandle_reset_alt1(a1 + 416);
    }
    *(_DWORD*)(a1 + 412) = 0;
  }
  return result;
}

__int64 game_map_Camera_Impl_Impl_closure_Invoke_7c25a0(__int64 result,
                                                        _BYTE* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 (**v6)(__int64);
  int v7;

  v2 = *(_QWORD*)(result + 8);
  v3 = (unsigned __int8)*a2;
  if (*(unsigned __int8*)(v2 + 481) != v3) {
    v4 = GameData_21c9648;
    v5 = *(_DWORD*)(GameData_21c9648 + 16);
    if (*a2 != 0) {
      *(_DWORD*)(GameData_21c9648 + 16) = v5 + 1;
      if (v5 == 0) {
        v6 = *(__int64 (***)(__int64))(v4 + 8);
      LABEL_7:
        result = (*v6)(v4 + 8);
      }
    }
    else {
      v7 = v5 - 1;
      *(_DWORD*)(GameData_21c9648 + 16) = v7;
      if (v7 == 0) {
        v6 = (__int64 (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL);
        goto LABEL_7;
      }
    }
    *(_BYTE*)(v2 + 481) = v3;
  }
  return result;
}

bool game_map_Camera_Impl_Impl_closure_Invoke_7c2710(__int64 a1)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  float (**v12)(__int64);
  float v13;
  float v14;
  float v15;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(float*)(v1 + 252);
  if (v2 != *(float*)(v1 + 248)) {
    v3 = (**(float (***)(__int64))(v1 + 240))(v1 + 240);
    v4 = *(float*)(v1 + 248);
    v5 = v2 + v3;
    if (v4 < v5) {
      v5 = *(float*)(v1 + 248);
    }
    if (v5 != v4) {
      return false;
    }
  }
  v6 = *(float*)(v1 + 68);
  if (v6 != *(float*)(v1 + 64)) {
    v7 = (**(float (***)(__int64))(v1 + 56))(v1 + 56);
    v8 = *(float*)(v1 + 64);
    v9 = v6 + v7;
    if (v8 < v9) {
      v9 = *(float*)(v1 + 64);
    }
    if (v9 != v8) {
      return false;
    }
  }
  v10 = *(float*)(v1 + 28);
  if (v10 == *(float*)(v1 + 24)) {
    return true;
  }
  v12 = *(float (***)(__int64))(v1 + 16);
  v11 = v1 + 16;
  v13 = (*v12)(v11);
  v14 = *(float*)(v11 + 8);
  v15 = v10 + v13;
  if (v14 < v15) {
    v15 = *(float*)(v11 + 8);
  }
  return v15 == v14;
}

#pragma GCC visibility pop
