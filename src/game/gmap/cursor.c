#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
extern _UNKNOWN GameData_1a9e192;
extern _UNKNOWN GameData_1ac857b;
extern _UNKNOWN GameData_1adbf8f;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN* GameData_212c2f8;
extern __int128 GameData_21a5670;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212fc58[5];
extern __int64* GameData_2130df0[3];
extern __int64* GameData_2130e00;
float Cursor_Unknown2(__int64 a1);
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
extern __int64* GameData_212d708;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1658;
__n128 Cursor_Unknown6(__int64 a1, __int64 a2);
__n128 Cursor_Unknown2_1319820(__int64 a1, __int64 a2);
__int64 Cursor_Unknown7(__int64 a1, __int64 a2, int a3);
__int64 Cursor_Unknown3(__int64 a1, __int64 a2, int a3);

float Cursor_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  float* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  __int128 v16;
  __int64 v17;
  int v18;
  __int64** v19;
  __int64** v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  long double v24;
  long double v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int128 v32;
  float v33;
  float result;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  *(_QWORD*)(v3 + 8) = &GameData_1a9e192;
  *(_QWORD*)v3 = game_HashString(&GameData_1a9e192);
  *(_QWORD*)(v3 + 24) = &GameData_1adbf8f;
  *(_QWORD*)(v3 + 16) = game_HashString(&GameData_1adbf8f);
  *(_QWORD*)(v3 + 40) = &GameData_1ac857b;
  v4 = game_HashString(&GameData_1ac857b);
  v5 = GameData_2130df0[0];
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = v4;
  *(_QWORD*)(v3 + 136) = 0;
  v6 = (float*)(v3 + 136);
  *(_OWORD*)(v3 + 80) = 0u;
  *(_BYTE*)(v3 + 192) = 0;
  *(_BYTE*)(v3 + 208) = 0;
  *(_OWORD*)(v3 + 224) = 0u;
  *(_QWORD*)(v3 + 169) = 0;
  *(_QWORD*)(v3 + 248) = 0x3F8000003F800000LL;
  *(_QWORD*)(v3 + 256) = 0x3F8000003F800000LL;
  *(_DWORD*)(v3 + 264) = 0;
  *(_QWORD*)(v3 + 280) = &GameData_1a9e192;
  *(_QWORD*)(v3 + 128) = v5 + 2;
  v7 = v3 + 128;
  *(_WORD*)(v3 + 152) = 1;
  *(_BYTE*)(v3 + 268) = 1;
  *(_QWORD*)(v3 + 272) = game_HashString(&GameData_1a9e192);
  *(_QWORD*)(v3 + 296) = &GameData_1adbf8f;
  *(_QWORD*)(v3 + 288) = game_HashString(&GameData_1adbf8f);
  *(_QWORD*)(v3 + 312) = &GameData_1ac857b;
  *(_QWORD*)(v3 + 304) = game_HashString(&GameData_1ac857b);
  *(_QWORD*)(v3 + 320) = 0;
  *(_DWORD*)(v3 + 328) = 0;
  *(_QWORD*)(v3 + 352) = 1092616192;
  *(_OWORD*)(v3 + 336) = 0u;
  v8 = *(_QWORD*)(*GameData_212c780 + 8);
  v9 = *(__int64**)(v8 + 48);
  v10 = *(__int64**)(v8 + 56);
  if (v9 == v10) {
    v14 = 0.0;
    v13 = 0.0;
    v12 = 0.0;
    v11 = 0.0;
  }
  else {
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    do {
      v15 = *v9++;
      v16 = *(_OWORD*)(v15 + 32);
      if (*(float*)&v16 < v11) {
        v11 = *(float*)&v16;
      }
      if (*(float*)&v16 > v13) {
        v13 = *(float*)&v16;
      }
      if (*((float*)&v16 + 2) < v12) {
        v12 = *((float*)&v16 + 2);
      }
      if (*((float*)&v16 + 2) > v14) {
        v14 = *((float*)&v16 + 2);
      }
    } while (v9 != v10);
  }
  *(_DWORD*)(v3 + 56) = 1075838976;
  *(float*)(v3 + 68) = v13 - v11;
  *(float*)(v3 + 72) = v14 - v12;
  *(float*)(v3 + 60) = (float)(v13 + v11) * 0.5;
  *(float*)(v3 + 64) = (float)(v14 + v12) * 0.5;
  v17 = *(_QWORD*)(*GameData_212c790 + 8);
  v18 = *(_DWORD*)(v17 + 56);
  v19 = *(__int64***)(v17 + 8);
  v20 = *(__int64***)(v17 + 16);
  if (v18 < 0) {
    for (; v19 != v20; ++v19) {
      v21 = *v19;
      if ((*v19)[12] == 0 && v21[69] == 0) {
        goto LABEL_24;
      }
    }
  LABEL_20:
    v23 = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_25;
  }
  if (v19 == v20) {
    goto LABEL_20;
  }
  while (1) {
    v22 = *v19++;
    v21 = v22;
    if (*((_DWORD*)v22 + 21) == v18) {
      break;
    }
    if (v19 == v20) {
      goto LABEL_20;
    }
  }

LABEL_24:
  v23 = *v21;

LABEL_25:
  GameRoutine_1317f10(v3, v23 + 32);
  *(_DWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 144) = 0x400000002LL;
  v38 = 1090519040;
  if (*(_BYTE*)(v3 + 152) == 1) {
    v26 = *(_QWORD*)v7;
    LODWORD(v24) = 8.0;
  LABEL_29:
    LODWORD(v25) = 8.0;
    goto LABEL_30;
  }
  v27 = *v6;
  if (*v6 > 0.0) {
    (*(void (**)(__int64, float))(*(_QWORD*)v7 + 16LL))(v3 + 128, v27);
    v26 = *(_QWORD*)v7;
    goto LABEL_29;
  }
  if (((*(__int64 (**)(__int64, int*, __int64, float))(
           *(_QWORD*)(v3 + 128) + 8LL))(v3 + 128, &v38, v3 + 160, v27) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v3 + 128);
    v26 = *(_QWORD*)v7;
    LODWORD(v25) = v38;
  LABEL_30:
    (*(void (**)(__int64, long double, long double))(v26 + 24))(v3 + 128, v24,
                                                                v25);
    *(_QWORD*)(v3 + 136) = 0;
    *(_WORD*)(v3 + 152) = 256;
  }
  v28 = *(_QWORD*)(v3 + 96);
  v29 = *v2;
  *(_BYTE*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 104) = v28;
  v30 = fw_memory_HeapManager_Allocate(v29, 224, 16, 0);
  v31 = GameData_212fc58[0];
  *(_BYTE*)(v30 + 16) = 0;
  *(_QWORD*)(v30 + 24) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_QWORD*)(v30 + 40) = 0;
  *(_QWORD*)(v30 + 48) = 0;
  *(_QWORD*)(v30 + 56) = 0;
  *(_QWORD*)(v30 + 64) = 0;
  *(_QWORD*)(v30 + 72) = 0;
  *(_QWORD*)(v30 + 80) = 0;
  *(_QWORD*)(v30 + 88) = 0;
  *(_QWORD*)(v30 + 96) = 0;
  *(_QWORD*)(v30 + 104) = 0;
  *(_QWORD*)(v30 + 112) = 0;
  *(_QWORD*)(v30 + 120) = 0;
  *(_QWORD*)(v30 + 144) = 0;
  *(_QWORD*)(v30 + 152) = 0;
  *(_QWORD*)v30 = v31 + 2;
  *(_QWORD*)(v30 + 8) = 0;
  *(_BYTE*)(v30 + 128) = 1;
  *(_BYTE*)(v30 + 160) = 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v35 = v30;
    v36 = __cxa_guard_acquire(&GameData_21a5680);
    v30 = v35;
    if (v36 != 0) {
      v37 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v37;
      __cxa_guard_release(&GameData_21a5680);
      v30 = v35;
    }
  }
  v32 = GameData_21a5670;
  *(_DWORD*)(v30 + 200) = 0;
  *(_BYTE*)(v30 + 204) = 0;
  *(_QWORD*)(v3 + 48) = v30;
  *(_OWORD*)(v30 + 176) = v32;
  *(_QWORD*)(v30 + 192) = 0x3F8000003F800000LL;
  *(_QWORD*)(v30 + 208) = 0x3F80000000000000LL;
  *(_DWORD*)(v30 + 216) = 1065353216;
  v33 = *(float*)(*GameData_2130e00 + 364);
  *(_QWORD*)(a1 + 16) = v3;
  result = v33 * 5.0;
  *(float*)(v30 + 196) = result;
  return result;
}

__n128 Cursor_Unknown6(__int64 a1, __int64 a2)
{
  __int128 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __n128 result;
  __int64 v20;
  __int64 v21;

  v2 = *(_OWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 80LL);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    if (v5 == v6) {
      goto LABEL_13;
    }
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      if (++v5 == v6) {
        goto LABEL_13;
      }
    }
  }
  else {
    if (v5 == v6) {
      goto LABEL_13;
    }
    while (1) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        break;
      }
      if (v5 == v6) {
        goto LABEL_13;
      }
    }
  }
  if (*(int*)(v7 + 540) >= 1) {
    v2 = *(_OWORD*)(*(_QWORD*)v7 + 32LL);
  }
LABEL_13:
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v2;
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v2);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE2(v2);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE3(v2);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE4(v2);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE5(v2);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE6(v2);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE7(v2);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE8(v2);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE9(v2);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE10(v2);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE11(v2);
  PSEUDO_LOW_LANE128(result, n128_u8, BYTE11(v2));
  return result;
}

__n128 Cursor_Unknown2_1319820(__int64 a1, __int64 a2)
{
  __int128 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __n128 result;
  __int64 v20;
  __int64 v21;

  v2 = *(_OWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 80LL);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    if (v5 == v6) {
      goto LABEL_13;
    }
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      if (++v5 == v6) {
        goto LABEL_13;
      }
    }
  }
  else {
    if (v5 == v6) {
      goto LABEL_13;
    }
    while (1) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        break;
      }
      if (v5 == v6) {
        goto LABEL_13;
      }
    }
  }
  if (*(int*)(v7 + 540) >= 1) {
    v2 = *(_OWORD*)(*(_QWORD*)v7 + 32LL);
  }
LABEL_13:
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v2;
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v2);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE2(v2);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE3(v2);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE4(v2);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE5(v2);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE6(v2);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE7(v2);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE8(v2);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE9(v2);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE10(v2);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE11(v2);
  PSEUDO_LOW_LANE128(result, n128_u8, BYTE11(v2));
  return result;
}

__int64 Cursor_Unknown7(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float32x4_t v13;
  int v14;
  int v15;
  int v16;
  __int64 result;
  float32x4_t v18;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v18 = (__typeof__(v18)){0};
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v7 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v8 = v7 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v9 = v8 | (*(unsigned __int8*)(v4 + v3 + 2) << 16);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  LANES128(v18).n128_u32[0] = v9 | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  *(_DWORD*)(a2 + 20) = v3 + 5;
  v10 = *(unsigned __int8*)(v4 + v3 + 4);
  *(_DWORD*)(a2 + 20) = v3 + 6;
  v11 = v10 | (*(unsigned __int8*)(v4 + v3 + 5) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 7;
  v12 = v11 | (*(unsigned __int8*)(v4 + v3 + 6) << 16);
  *(_DWORD*)(a2 + 20) = v3 + 8;
  LANES128(v18).n128_u32[1] = v12 | (*(unsigned __int8*)(v4 + v3 + 7) << 24);
  *(_DWORD*)(a2 + 20) = v3 + 9;
  LANES128(v13).n128_u64[0] = LANES128(v18).n128_u64[0];
  v14 = *(unsigned __int8*)(v4 + v3 + 8);
  *(_DWORD*)(a2 + 20) = v3 + 10;
  v15 = v14 | (*(unsigned __int8*)(v4 + v3 + 9) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 11;
  v16 = *(unsigned __int8*)(v4 + v3 + 10);
  *(_DWORD*)(a2 + 20) = v3 + 12;
  LANES128(v13).n128_u64[1] =
      v15 | (v16 << 16) | (*(unsigned __int8*)(v4 + v3 + 11) << 24);
  v18 = v13;
  result =
      GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16), &v18);
  if (a3 == 1) {
    ++*(_DWORD*)(a2 + 20);
  }
  return result;
}

__int64 Cursor_Unknown3(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float32x4_t v13;
  int v14;
  int v15;
  int v16;
  __int64 result;
  float32x4_t v18;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v18 = (__typeof__(v18)){0};
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v7 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v8 = v7 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v9 = v8 | (*(unsigned __int8*)(v4 + v3 + 2) << 16);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  LANES128(v18).n128_u32[0] = v9 | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  *(_DWORD*)(a2 + 20) = v3 + 5;
  v10 = *(unsigned __int8*)(v4 + v3 + 4);
  *(_DWORD*)(a2 + 20) = v3 + 6;
  v11 = v10 | (*(unsigned __int8*)(v4 + v3 + 5) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 7;
  v12 = v11 | (*(unsigned __int8*)(v4 + v3 + 6) << 16);
  *(_DWORD*)(a2 + 20) = v3 + 8;
  LANES128(v18).n128_u32[1] = v12 | (*(unsigned __int8*)(v4 + v3 + 7) << 24);
  *(_DWORD*)(a2 + 20) = v3 + 9;
  LANES128(v13).n128_u64[0] = LANES128(v18).n128_u64[0];
  v14 = *(unsigned __int8*)(v4 + v3 + 8);
  *(_DWORD*)(a2 + 20) = v3 + 10;
  v15 = v14 | (*(unsigned __int8*)(v4 + v3 + 9) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 11;
  v16 = *(unsigned __int8*)(v4 + v3 + 10);
  *(_DWORD*)(a2 + 20) = v3 + 12;
  LANES128(v13).n128_u64[1] =
      v15 | (v16 << 16) | (*(unsigned __int8*)(v4 + v3 + 11) << 24);
  v18 = v13;
  result =
      GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16), &v18);
  if (a3 == 1) {
    ++*(_DWORD*)(a2 + 20);
  }
  return result;
}

#pragma GCC visibility pop
