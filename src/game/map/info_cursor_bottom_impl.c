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
__attribute__((swiftcall)) void
math_Quat_FromYawPitchRoll(PSEUDO_X8, long double, float, float);
__int64 GameRoutine_14a3920(__int64 result);
__int64 game_100f680(_QWORD*);
extern _UNKNOWN* GameData_212c188;
float powf(float, float);
long double GameRoutine_a7f140(__int64, __int64, __int64);
__n128 InfoCursorBottomImpl_100de20(__int64 a1);
__attribute__((swiftcall)) void InfoCursorBottomImpl_100e7d0(PSEUDO_X8 x8_,
                                                             __int64 a1);
void InfoCursorBottomImpl_100eaa0(__int64* a1);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_14a3920(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _DWORD GameData_1b01468[8];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 InfoCursorBottomImpl_100e280(__int64 result, __int128* a2,
                                     int32x2_t a3);

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

__n128 InfoCursorBottomImpl_100de20(__int64 a1)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_BYTE*)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v2 != 0) {
    v5 = *(_QWORD*)(v2 + 8);
    if (*(_DWORD*)(a1 + 200) != 0) {
      v6 = 0;
    }
    else {
      v6 = v1;
    }
    *(_BYTE*)(v5 + 289) = v6;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v8 = *(_QWORD*)(a1 + 40);
  v9 = *(_QWORD*)(a1 + 48);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v8 != 0) {
    v10 = *(_QWORD*)(v8 + 8);
    if (*(_DWORD*)(a1 + 200) == 1) {
      v11 = v1;
    }
    else {
      v11 = 0;
    }
    *(_BYTE*)(v10 + 289) = v11;
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v12 = *(_QWORD*)(a1 + 56);
  v13 = *(_QWORD*)(a1 + 64);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v12 != 0) {
    v14 = *(_QWORD*)(v12 + 8);
    if (*(_DWORD*)(a1 + 200) == 2) {
      v15 = v1;
    }
    else {
      v15 = 0;
    }
    *(_BYTE*)(v14 + 289) = v15;
  }
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v16 = *(unsigned __int8*)(a1 + 160);
  v18 = *(_QWORD*)(a1 + 72);
  v17 = *(_QWORD*)(a1 + 80);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v18 != 0) {
    if (*(unsigned __int8*)(v18 + 40) != v16) {
      *(_BYTE*)(v18 + 40) = v16;
      game_100f680((_QWORD*)v18),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v19 = *(_DWORD*)(a1 + 200) != 0;
    if (*(unsigned __int8*)(v18 + 41) != v19) {
      *(_BYTE*)(v18 + 41) = v19;
      game_100f680((_QWORD*)v18),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v17);
  }
  return result;
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

__int64 InfoCursorBottomImpl_100e280(__int64 result, __int128* a2, int32x2_t a3)
{
  __int64 v4;
  atomic_ullong* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int128 v20;
  unsigned int i;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  int32x4_t v26;
  int32x4_t* v27;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  struct {
    _QWORD v31[3];
    int v32;
    char gap60_[4];
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v31_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(result + 128) == 1) {
    v4 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v4 + 8) = 0;
    v5 = (atomic_ullong*)(v4 + 8);
    v6 = v4;
    v7 = GameData_2131678;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_DWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_DWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_WORD*)(v4 + 80) = 0;
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
    *(_QWORD*)v4 = v7 + 16;
    *(_DWORD*)(v4 + 48) = 0x2000;
    *(_WORD*)(v4 + 108) = 256;
    *(_DWORD*)(v4 + 112) = -1082130432;
    *(_DWORD*)(v4 + 292) = 2;
    v8 = (unsigned int)*GameData_212d168;
    *(_QWORD*)(v4 + 120) = 0;
    *(_DWORD*)(v4 + 127) = 0;
    if ((unsigned int)v8 > 7) {
      v9 = 6;
    }
    else {
      v9 = GameData_1b01468[v8];
    }
    v31_.v32 = v9;
    v31_.v31[0] = 0;
    v31_.v31[1] = 0;
    v31_.v31[2] = "UI_SelectWave";
    v10 = *((_QWORD*)GameData_212c540 + 1);
    v12 = *(_QWORD*)GameData_212c548;
    v11 = *((_QWORD*)GameData_212c548 + 1);
    v31_.v33 = *(_QWORD*)GameData_212c540;
    v31_.v34 = v10;
    v31_.v35 = v12;
    v31_.v36 = v11;
    v31_.v37 = v31_.v33;
    v31_.v38 = v10;
    v13 = Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0],
                         (__int64)v31_.v31, 0),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_14a10d0(&v29_.v29, (__int64)v13, v14, (__int64)&GameData_1a9f09e),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = v29_.v29;
    v15 = v29_.v30;
    if (v29_.v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29_.v30 + 8), 1u,
                                memory_order_relaxed);
    }
    if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v6),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v15),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v17 = v29_.v30;
    if (v29_.v30 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v17),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v18 = *(_QWORD*)v16;
    if (*(_QWORD*)v16 != 0 && *(_DWORD*)(v18 + 16) == *(_DWORD*)(v16 + 8)) {
      v19 = *(_DWORD*)(v18 + 36);
      if (v19 != 0) {
        v20 = *a2;
        for (i = 0; i < v19; ++i) {
          if ((int)v19 > (int)i) {
            v22 = *(_QWORD*)(v18 + 40 + 8LL * (int)i);
            if (v22 != 0) {
              *(_OWORD*)(v22 + 16) = v20;
              *(_BYTE*)(v22 + 128) = 1;
              v19 = *(_DWORD*)(v18 + 36);
            }
          }
        }
      }
    }
    result = game_14a3920(v16),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v23 = *(_QWORD*)v16;
    if (*(_QWORD*)v16 != 0 && *(_DWORD*)(v23 + 16) == *(_DWORD*)(v16 + 8)) {
      v24 = *(_DWORD*)(v23 + 36);
      if (v24 != 0) {
        v25 = 0;
        v26 = vdupq_lane_s32(a3, 0);
        LANES128(v26).n128_u32[3] = 0;
        do {
          if ((int)v24 > (int)v25) {
            v27 = *(int32x4_t**)(v23 + 40 + 8LL * (int)v25);
            if (v27 != nullptr) {
              v27[2] = v26;
              LANES128(v27[8]).n128_u8[0] = 1;
              v24 = *(_DWORD*)(v23 + 36);
            }
          }
          ++v25;
        } while (v25 < v24);
      }
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
  return result;
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

__attribute__((swiftcall)) void InfoCursorBottomImpl_100e7d0(PSEUDO_X8 x8_,
                                                             __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v3;
  long double v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  bool v17;
  float v18;
  _QWORD* result;

  v3 = 1.0;
  *(float*)&v4 = powf(1.0 - *(float*)(a1 + 208), 0x1.99999a0000000p-1);
  v5 = (float)(*(float*)&v4 + -0x1.4ccccc0000000p-1) / 0x1.6666680000000p-2;
  if (v5 <= 1.0) {
    v6 = (float)(*(float*)&v4 + -0x1.4ccccc0000000p-1) / 0x1.6666680000000p-2;
  }
  else {
    v6 = 1.0;
  }
  v7 = 1.0 - v6;
  if (v5 >= 0.0) {
    v8 = v7;
  }
  else {
    v8 = 1.0;
  }
  if ((float)(*(float*)&v4 / 0x1.4ccccc0000000p-1) <= 1.0) {
    v9 = *(float*)&v4 / 0x1.4ccccc0000000p-1;
  }
  else {
    v9 = 1.0;
  }
  v10 = 0.0;
  if ((float)(*(float*)&v4 / 0x1.4ccccc0000000p-1) >= 0.0) {
    v10 = v9;
  }
  if (*(float*)&v4 < 0x1.4ccccc0000000p-1) {
    v11 = v10;
  }
  else {
    v11 = v8;
  }
  v12 = (float)(*(float*)&v4 * 0x1.921fb60000000p+1) +
        (float)(roundf((float)(*(float*)&v4 * 0x1.921fb60000000p+1) *
                       0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
  if (v12 <= 0x1.921fb60000000p+0) {
    if (v12 >= -0x1.921fb60000000p+0) {
      goto LABEL_20;
    }
    v13 = -0x1.921fb60000000p+1;
  }
  else {
    v13 = 0x1.921fb60000000p+1;
  }
  v3 = -1.0;
  v12 = v13 - v12;
LABEL_20:
  v14 = (float)(fminf(fmaxf(v11, 0.0), 1.0) * 0x1.9999980000000p-2) + 1.0;
  v15 =
      v3 *
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
                                                                                            (float)(v12 *
                                                                                                    v12))) *
                                                                            (float)(v12 *
                                                                                    v12))) *
                                                         (float)(v12 * v12))) *
                                         (float)(v12 * v12))) *
                      (float)(v12 * v12)) +
              1.0);
  v16 = fabsf(v15);
  v17 = v15 < 0.0;
  LODWORD(v4) = -1.0;
  v18 = v16 * 0.5;
  if (v17) {
    *(float*)&v4 = 1.0;
  }
  *(float*)&v4 = (float)(1.0 - (float)((float)(v18 * *(float*)&v4) + 0.5)) *
                 0x1.921fb60000000p+0;
  result =
      (math_Quat_FromYawPitchRoll((void*)((_QWORD*)(a2 + 16)), v4, 0.0, 0.0),
       (void*)((_QWORD*)(a2 + 16)));
  *(float*)a2 = v14;
  {
    result;
    return;
  }
}

void InfoCursorBottomImpl_100eaa0(__int64* a1)
{
  _OWORD* v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  unsigned int i;
  __int64 v11;
  _OWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  unsigned int j;
  __int64 v21;
  _OWORD* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  unsigned int k;
  __int64 v31;
  _OWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  unsigned int m;
  __int64 v41;
  _DWORD* v42;
  char v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  unsigned int n;
  __int64 v52;
  _QWORD v53[8];

  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = (_OWORD*)a1[7];
  if (v1 != nullptr) {
    v3 = a1[8];
    v4 = *(_QWORD*)v3;
    if (*(_QWORD*)v3 != 0 && *(_DWORD*)(v4 + 16) == *(_DWORD*)(v3 + 8)) {
      v5 = *(_DWORD*)(v4 + 36);
      if (v5 != 0) {
        v6 = v1[9];
        v7 = v1[10];
        v8 = v1[11];
        v9 = v1[12];
        for (i = 0; i < v5; ++i) {
          if ((int)v5 > (int)i) {
            v11 = *(_QWORD*)(v4 + 40 + 8LL * (int)i);
            if (v11 != 0) {
              *(_OWORD*)(v11 + 64) = v6;
              *(_OWORD*)(v11 + 80) = v7;
              *(_WORD*)(v11 + 128) = 257;
              *(_OWORD*)(v11 + 96) = v8;
              *(_OWORD*)(v11 + 112) = v9;
              v5 = *(_DWORD*)(v4 + 36);
            }
          }
        }
      }
      GameRoutine_14a3920(v3),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v12 = (_OWORD*)a1[10];
  if (v12 != nullptr) {
    v13 = a1[11];
    v14 = *(_QWORD*)v13;
    if (*(_QWORD*)v13 != 0 && *(_DWORD*)(v14 + 16) == *(_DWORD*)(v13 + 8)) {
      v15 = *(_DWORD*)(v14 + 36);
      if (v15 != 0) {
        v16 = v12[9];
        v17 = v12[10];
        v18 = v12[11];
        v19 = v12[12];
        for (j = 0; j < v15; ++j) {
          if ((int)v15 > (int)j) {
            v21 = *(_QWORD*)(v14 + 40 + 8LL * (int)j);
            if (v21 != 0) {
              *(_OWORD*)(v21 + 64) = v16;
              *(_OWORD*)(v21 + 80) = v17;
              *(_WORD*)(v21 + 128) = 257;
              *(_OWORD*)(v21 + 96) = v18;
              *(_OWORD*)(v21 + 112) = v19;
              v15 = *(_DWORD*)(v14 + 36);
            }
          }
        }
      }
      GameRoutine_14a3920(v13),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v22 = (_OWORD*)a1[13];
  if (v22 != nullptr) {
    v23 = a1[14];
    v24 = *(_QWORD*)v23;
    if (*(_QWORD*)v23 != 0 && *(_DWORD*)(v24 + 16) == *(_DWORD*)(v23 + 8)) {
      v25 = *(_DWORD*)(v24 + 36);
      if (v25 != 0) {
        v26 = v22[9];
        v27 = v22[10];
        v28 = v22[11];
        v29 = v22[12];
        for (k = 0; k < v25; ++k) {
          if ((int)v25 > (int)k) {
            v31 = *(_QWORD*)(v24 + 40 + 8LL * (int)k);
            if (v31 != 0) {
              *(_OWORD*)(v31 + 64) = v26;
              *(_OWORD*)(v31 + 80) = v27;
              *(_WORD*)(v31 + 128) = 257;
              *(_OWORD*)(v31 + 96) = v28;
              *(_OWORD*)(v31 + 112) = v29;
              v25 = *(_DWORD*)(v24 + 36);
            }
          }
        }
      }
      GameRoutine_14a3920(v23),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v32 = (_OWORD*)a1[16];
  if (v32 != nullptr) {
    v33 = a1[17];
    v34 = *(_QWORD*)v33;
    if (*(_QWORD*)v33 != 0 && *(_DWORD*)(v34 + 16) == *(_DWORD*)(v33 + 8)) {
      v35 = *(_DWORD*)(v34 + 36);
      if (v35 != 0) {
        v36 = v32[9];
        v37 = v32[10];
        v38 = v32[11];
        v39 = v32[12];
        for (m = 0; m < v35; ++m) {
          if ((int)v35 > (int)m) {
            v41 = *(_QWORD*)(v34 + 40 + 8LL * (int)m);
            if (v41 != 0) {
              *(_OWORD*)(v41 + 64) = v36;
              *(_OWORD*)(v41 + 80) = v37;
              *(_WORD*)(v41 + 128) = 257;
              *(_OWORD*)(v41 + 96) = v38;
              *(_OWORD*)(v41 + 112) = v39;
              v35 = *(_DWORD*)(v34 + 36);
            }
          }
        }
      }
      GameRoutine_14a3920(v33),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v42 = (_DWORD*)a1[5];
  if (*(_QWORD*)v42 != 0 && *(_DWORD*)(*(_QWORD*)v42 + 16LL) == v42[2]) {
    GameRoutine_a7f140(a1[2], (__int64)v53, (__int64)"Export"),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((v43 & 1) != 0) {
      v44 = a1[5];
      v45 = *(_QWORD*)v44;
      if (*(_QWORD*)v44 != 0 && *(_DWORD*)(v45 + 16) == *(_DWORD*)(v44 + 8)) {
        v46 = *(_DWORD*)(v45 + 36);
        if (v46 != 0) {
          v47 = *(_OWORD*)v53;
          v48 = *(_OWORD*)&v53[2];
          v49 = *(_OWORD*)&v53[4];
          v50 = *(_OWORD*)&v53[6];
          for (n = 0; n < v46; ++n) {
            if ((int)v46 > (int)n) {
              v52 = *(_QWORD*)(v45 + 40 + 8LL * (int)n);
              if (v52 != 0) {
                *(_OWORD*)(v52 + 64) = v47;
                *(_OWORD*)(v52 + 80) = v48;
                *(_WORD*)(v52 + 128) = 257;
                *(_OWORD*)(v52 + 96) = v49;
                *(_OWORD*)(v52 + 112) = v50;
                v46 = *(_DWORD*)(v45 + 36);
              }
            }
          }
        }
      }
      GameRoutine_14a3920(v44),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
}

#pragma GCC visibility pop
