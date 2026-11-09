#include "decomp/pseudo_helpers.h"

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

#pragma GCC visibility pop
