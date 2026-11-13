#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_f4ec40(PSEUDO_X8, _QWORD*, __int64,
                                            __int64*, __int64*, float);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_8b0040(__int64, __int64, int, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82af0;
extern __int128 GameData_21a6120;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ea58;
extern __int64 GameData_212f508[7];
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_anonymous_e6e8f0(__int64 a1);

void game_cmdbtl_anonymous_e6e8f0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t** v6;
  __int64 v7;
  __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  float32x4_t* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _BYTE* v15;
  __int64 v16;
  float32x4_t* v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  _QWORD* v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  struct {
    _QWORD v31[2];
    char* v32;
    char gap24_[8];
    __int64 v33;
  } v31_;
  struct {
    __int64* v34;
    __int64 v35;
  } v34_;
  float32x4_t v36;

  v2 = *GameData_212ea58;
  v3 = *(_QWORD*)(*GameData_212ea58 + 640);
  v4 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v4 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    if (v3 != 0) {
      goto LABEL_4;
    }
  }
  else if (v3 != 0) {
    goto LABEL_4;
  }
  v3 = *(_QWORD*)(v2 + 656);
  v7 = *(_QWORD*)(v2 + 664);
  if (v7 == 0 || (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0)) {
  LABEL_4:
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 == 0) {
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak(v7);
  v5 = *(_QWORD*)(v3 + 40);
  if (v5 != 0) {
  LABEL_5:
    if (*(_QWORD*)(v5 + 8) != -1) {
      v6 = (float32x4_t**)(v3 + 32);
      goto LABEL_13;
    }
  }
LABEL_11:
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  v5 = *(_QWORD*)(v8 + 88);
  if (v5 == 0) {
    v11 = nullptr;
    v10 = 0;
    goto LABEL_18;
  }
  v6 = (float32x4_t**)(v8 + 80);
LABEL_13:
  v9 = *v6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v10 = std___1___shared_weak_count_lock(v5);
  if (v10 != 0) {
    v11 = v9;
  }
  else {
    v11 = nullptr;
  }
  std___1___shared_weak_count___release_weak(v5);
LABEL_18:
  v12 = LANES128(v11[1]).n128_i64[0];
  v13 = v12 + 8LL * *(int*)(v3 + 16);
  v14 = GameData_212c878[0];
  v15 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *(unsigned __int16*)(v13 + 828)) +
                   408LL);
  if (v15 == nullptr || *v15 == 0) {
  LABEL_44:
    v29 = *(_DWORD*)(v3 + 16);
    v31_.v33 = 0;
    GameRoutine_8b0040(a1, v12, v29, v12, (__int64)v31_.v31);
    goto LABEL_45;
  }
  v16 = LANES128(v11[13]).n128_i64[0];
  if (v16 != 0) {
    v17 = (float32x4_t*)(*(_QWORD*)(v16 + 8) + 304LL);
    v18 = CharacterBuilder_1084a50(v16, "-Jnt_C_Head");
    if (v18 != 0) {
      v19 = *(float32x4_t*)(v18 + 48);
      goto LABEL_25;
    }
  }
  else {
    v17 = v11 + 7;
  }
  v19 = vaddq_f32(v11[7], COERCE_AS(float32x4_t, GameData_1a82af0));
LABEL_25:
  LANES128(v20).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v20).n128_u64[1] = 0x3F0000003F000000LL;
  v36 = vmulq_f32(vaddq_f32(v19, *v17), v20);
  v21 = *(_QWORD**)GameData_212f508[0];
  v22 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                                   8LL * *(unsigned __int16*)(v13 + 828)) +
                        408LL);
  v23 = strlen(v22);
  if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v24 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v23 | 7) + 1;
    }
    v25 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
    v31_.v31[1] = v24;
    v31_.v32 = v25;
    v31_.v31[0] = v26 | 1;
  }
  else {
    LOBYTE(v31_.v31[0]) = 2 * v23;
    v25 = (char*)v31_.v31 + 1;
    if (v23 == 0) {
      goto LABEL_34;
    }
  }
  memmove((__int64)v25, (__int64)v22, v24);
LABEL_34:
  v25[v24] = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v30 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v30;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  game_f4ec40((void*)(&v34_.v34), v21, (__int64)v31_.v31, (__int64*)&v36,
              (__int64*)&GameData_21a6120,
              COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                                   0x1.0000000000000p+0f))));
  v27 = v34_.v35;
  if (v34_.v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34_.v35 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  if ((v31_.v31[0] & 1) != 0 && v31_.v32 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v31_.v32);
  }
  v12 = LANES128(v11[1]).n128_i64[0];
  if (v12 != 0) {
    goto LABEL_44;
  }
LABEL_45:
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
}

#pragma GCC visibility pop
