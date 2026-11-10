#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 GameRoutine_100de20(__int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20015c8[])();
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_100cc60(__int64*, unsigned int);
void InfoCursorBottomImpl_100d310(__int64 a1);
void InfoCursorBottomImpl_100d6e0(__int64 a1);
void InfoCursorBottomImpl_100dff0(_QWORD* a1, long double a2);
float InfoCursorBottomImpl_100e0f0(_QWORD* a1);
__n128 InfoCursorBottomImpl_100e5d0(__int64 a1, int a2, __n128 result);

void InfoCursorBottomImpl_100d310(__int64 a1)
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
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        208, 16, 0);
    *(_QWORD*)(v3 + 8) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 24) = a1;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)v3 = GameData_20015c8;
    v4 = fw_memory_HeapManager_Allocate(*v2, 296, 16, 0);
    *(_QWORD*)(v4 + 16) = 0;
    v5 = GameData_2131678;
    *(_DWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_DWORD*)(v4 + 48) = 0x2000;
    v6 = v5 + 16;
    *(_QWORD*)(v4 + 24) = 0;
    *(_DWORD*)(v4 + 104) = 0;
    *(_WORD*)(v4 + 108) = 256;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_WORD*)(v4 + 80) = 0;
    *(_DWORD*)(v4 + 112) = -1082130432;
    *(_WORD*)(v4 + 116) = 0;
    *(_WORD*)(v4 + 136) = 0;
    *(_BYTE*)(v4 + 160) = 0;
    *(_BYTE*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 256) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 248) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_DWORD*)(v4 + 127) = 0;
    *(_DWORD*)(v4 + 292) = 2;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)(v3 + 64) = v4 + 24;
    *(_QWORD*)(v3 + 72) = v4;
    v7 = *v2;
    *(_QWORD*)v4 = v6;
    *(_QWORD*)(v4 + 8) = 0;
    v8 = fw_memory_HeapManager_Allocate(v7, 296, 16, 0);
    *(_QWORD*)(v8 + 24) = 0;
    *(_QWORD*)(v8 + 8) = 0;
    *(_QWORD*)(v8 + 16) = 0;
    *(_QWORD*)v8 = v6;
    *(_DWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 40) = 0;
    *(_DWORD*)(v8 + 48) = 0x2000;
    *(_DWORD*)(v8 + 104) = 0;
    *(_QWORD*)(v3 + 88) = v8 + 24;
    *(_QWORD*)(v3 + 96) = v8;
    v9 = *v2;
    *(_WORD*)(v8 + 108) = 256;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_WORD*)(v8 + 80) = 0;
    *(_DWORD*)(v8 + 112) = -1082130432;
    *(_WORD*)(v8 + 116) = 0;
    *(_WORD*)(v8 + 136) = 0;
    *(_BYTE*)(v8 + 160) = 0;
    *(_BYTE*)(v8 + 288) = 0;
    *(_QWORD*)(v8 + 272) = 0;
    *(_QWORD*)(v8 + 280) = 0;
    *(_QWORD*)(v8 + 256) = 0;
    *(_QWORD*)(v8 + 264) = 0;
    *(_QWORD*)(v8 + 240) = 0;
    *(_QWORD*)(v8 + 248) = 0;
    *(_QWORD*)(v8 + 224) = 0;
    *(_QWORD*)(v8 + 232) = 0;
    *(_QWORD*)(v8 + 208) = 0;
    *(_QWORD*)(v8 + 216) = 0;
    *(_QWORD*)(v8 + 192) = 0;
    *(_QWORD*)(v8 + 200) = 0;
    *(_QWORD*)(v8 + 176) = 0;
    *(_QWORD*)(v8 + 184) = 0;
    *(_QWORD*)(v8 + 168) = 0;
    *(_QWORD*)(v8 + 120) = 0;
    *(_DWORD*)(v8 + 127) = 0;
    *(_DWORD*)(v8 + 292) = 2;
    *(_QWORD*)(v3 + 104) = 0;
    v10 = fw_memory_HeapManager_Allocate(v9, 296, 16, 0);
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_QWORD*)v10 = v6;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 48) = 0x2000;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v3 + 112) = v10 + 24;
    *(_QWORD*)(v3 + 120) = v10;
    v11 = *v2;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v3 + 128) = 0;
    v12 = fw_memory_HeapManager_Allocate(v11, 296, 16, 0);
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)v12 = v6;
    *(_DWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_DWORD*)(v12 + 48) = 0x2000;
    *(_DWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v3 + 136) = v12 + 24;
    *(_QWORD*)(v3 + 144) = v12;
    v13 = *v2;
    *(_WORD*)(v12 + 108) = 256;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 0;
    *(_DWORD*)(v12 + 112) = -1082130432;
    *(_WORD*)(v12 + 116) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 160) = 0;
    *(_BYTE*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 280) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 224) = 0;
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 176) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 127) = 0;
    *(_DWORD*)(v12 + 292) = 2;
    *(_QWORD*)(v3 + 152) = 0;
    v14 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
    v15 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v6;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
    *(_DWORD*)(v14 + 104) = 0;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v3 + 168) = v14;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v3 + 160) = v14 + 24;
    *(_DWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = 0;
    *(_QWORD*)(v3 + 200) = 0;
    *(_QWORD*)(a1 + 24) = v3 + 24;
    *(_QWORD*)(a1 + 32) = v3;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    GameRoutine_100cc60(*(__int64**)(a1 + 24), 0);
    *(_BYTE*)(a1 + 16) = 1;
  }
}

void InfoCursorBottomImpl_100d6e0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(a1 + 16) != 0) {
    v1 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
    v3 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
    v4 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 64) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 72) = 0;
    *(_QWORD*)(a1 + 80) = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
    *(_BYTE*)(a1 + 16) = 0;
  }
}

void InfoCursorBottomImpl_100dff0(_QWORD* a1, long double a2)
{
  __int64 v2;
  float v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = a1[3];
  v3 = *(float*)&a2;
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + 24);
    v6 = **(_QWORD**)(v5 + 72);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 16);
      if (v7 != 0) {
        *(float*)v7 =
            (*(float (**)(_QWORD, long double, float, float))(v7 + 16))(
                *(_QWORD*)(v7 + 24), a2, *(float*)(v7 + 4), *(float*)(v7 + 8));
        *(_WORD*)(v6 + 168) = 0;
      }
    }
    *(_BYTE*)(v5 + 249) = 1;
  }
  v8 = a1[5];
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 24);
    v10 = **(_QWORD**)(v9 + 72);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 16);
      if (v11 != 0) {
        *(float*)v11 = (*(float (**)(_QWORD, float, float, float))(v11 + 16))(
            *(_QWORD*)(v11 + 24), v3, *(float*)(v11 + 4), *(float*)(v11 + 8));
        *(_WORD*)(v10 + 168) = 0;
      }
    }
    *(_BYTE*)(v9 + 249) = 1;
  }
  v12 = a1[7];
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 24);
    v14 = **(_QWORD**)(v13 + 72);
    if (v14 != 0) {
      v15 = *(_QWORD*)(v14 + 16);
      if (v15 != 0) {
        *(float*)v15 = (*(float (**)(_QWORD, float, float, float))(v15 + 16))(
            *(_QWORD*)(v15 + 24), v3, *(float*)(v15 + 4), *(float*)(v15 + 8));
        *(_WORD*)(v14 + 168) = 0;
      }
    }
    *(_BYTE*)(v13 + 249) = 1;
  }
}

float InfoCursorBottomImpl_100e0f0(_QWORD* a1)
{
  float v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  _QWORD* v14;
  _QWORD* v15;

  v3 = a1[3];
  v2 = a1[4];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0) {
    v1 = 0.0f;
    v4 = **(_QWORD**)(*(_QWORD*)(v3 + 24) + 72LL);
    if (v4 != 0) {
      v5 = *(float**)(v4 + 16);
      if (v5 != nullptr) {
        v1 = *v5;
      }
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    a1 = v14;
    if (v3 != 0) {
      return v1;
    }
  }
  else if (v3 != 0) {
    return v1;
  }
  v7 = a1[5];
  v6 = a1[6];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 != 0) {
    v1 = 0.0f;
    v8 = **(_QWORD**)(*(_QWORD*)(v7 + 24) + 72LL);
    if (v8 != 0) {
      v9 = *(float**)(v8 + 16);
      if (v9 != nullptr) {
        v1 = *v9;
      }
    }
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    a1 = v15;
    if (v7 != 0) {
      return v1;
    }
  }
  else if (v7 != 0) {
    return v1;
  }
  v10 = a1[7];
  v11 = a1[8];
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  v1 = 0.0f;
  if (v10 != 0) {
    v12 = **(_QWORD**)(*(_QWORD*)(v10 + 24) + 72LL);
    if (v12 != 0) {
      v13 = *(float**)(v12 + 16);
      if (v13 != nullptr) {
        v1 = *v13;
      }
    }
  }
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  return v1;
}

__n128 InfoCursorBottomImpl_100e5d0(__int64 a1, int a2, __n128 result)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
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
  unsigned int v19;
  int v20;
  float v21;

  if (*(_DWORD*)(a1 + 200) != a2) {
    v3 = *(_QWORD*)(a1 + 24);
    v4 = *(_QWORD*)(a1 + 32);
    *(_DWORD*)(a1 + 200) = a2;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v3 != 0) {
      v6 = *(_QWORD*)(v3 + 24);
      v7 = **(_QWORD**)(v6 + 72);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 16);
        if (v8 != 0) {
          *(float*)v8 = (*(float (**)(_QWORD, double, float, float))(v8 + 16))(
              *(_QWORD*)(v8 + 24), 0.0, *(float*)(v8 + 4), *(float*)(v8 + 8));
          *(_WORD*)(v7 + 168) = 0;
        }
      }
      *(_BYTE*)(v6 + 249) = 1;
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v9 = *(_QWORD*)(a1 + 40);
    v10 = *(_QWORD*)(a1 + 48);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v9 != 0) {
      v11 = *(_QWORD*)(v9 + 24);
      v12 = **(_QWORD**)(v11 + 72);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v12 + 16);
        if (v13 != 0) {
          *(float*)v13 = (*(float (**)(_QWORD, double, float, float))(
              v13 + 16))(*(_QWORD*)(v13 + 24), 0.0, *(float*)(v13 + 4),
                         *(float*)(v13 + 8));
          *(_WORD*)(v12 + 168) = 0;
        }
      }
      *(_BYTE*)(v11 + 249) = 1;
    }
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    v14 = *(_QWORD*)(a1 + 56);
    v15 = *(_QWORD*)(a1 + 64);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v14 != 0) {
      v16 = *(_QWORD*)(v14 + 24);
      v17 = **(_QWORD**)(v16 + 72);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v17 + 16);
        if (v18 != 0) {
          *(float*)v18 = (*(float (**)(_QWORD, double, float, float))(
              v18 + 16))(*(_QWORD*)(v18 + 24), 0.0, *(float*)(v18 + 4),
                         *(float*)(v18 + 8));
          *(_WORD*)(v17 + 168) = 0;
        }
      }
      *(_BYTE*)(v16 + 249) = 1;
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    v19 = *(_DWORD*)(a1 + 200) - 1;
    v20 = v19 < 2;
    if (*(unsigned __int8*)(a1 + 204) != v20) {
      v21 = 0.0;
      *(_BYTE*)(a1 + 204) = v20;
      if (v19 < 2) {
        v21 = 1.0;
      }
      *(float*)(a1 + 208) = v21;
    }
    return GameRoutine_100de20(a1);
  }
  return result;
}

#pragma GCC visibility pop
