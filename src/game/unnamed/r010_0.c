#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20f2668[])();
extern __int64 (*GameData_20f2ba0[])();
extern __int64 (*GameData_20f2c70[])();
extern __int64 (*GameData_2110540[])();
extern __int64 (*GameData_2110678[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d6a8;
extern int* GameData_212df08;
extern _UNKNOWN* GameData_212df10;
extern __int64* GameData_212e8c0;
extern __int64* GameData_2130200[3];
extern __int64 GameData_2132038[3];
extern __int64 GameData_21a60d8;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21caab0;
__int64 GameRoutine_1014c50(_QWORD);
__attribute__((swiftcall)) void GameRoutine_15733c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18515e0(_QWORD);
__int64 GameRoutine_18714a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_188df50(_QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_190bad0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_191a170(_QWORD, _QWORD);
__int64 GameRoutine_191ae50(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(long double);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void
GameRoutine_15733c0_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_15733c0");
__int64 GameRoutine_188df50_alt1(__int64*, unsigned int*, char,
                                 char) __asm__("GameRoutine_188df50");
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
char* game_util_Format(__int64, ...);
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_1839f80(__int64 a1, _DWORD* a2, int a3);
__attribute__((swiftcall)) void
GameRoutine_190bad0_alt1(PSEUDO_X8, __int64*,
                         __int64) __asm__("GameRoutine_190bad0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (*game_SpineBuildArgument_vtable[])();
extern __int64 (*game_SpineBuildCallbackForTalk_vtable[])();
extern __int64* game_spine_g_resource_releaser_ptr;
extern __int64 game_g_frame_clock;
int strcmp(const char*, const char*);
void GameRoutine_191ae50_alt1(_QWORD*, __int64) __asm__("GameRoutine_191ae50");
void SpineBuildArgument_Unknown16(__int64, __int64);
void cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(__int64);
void GameHr_17d27a0(_QWORD* a1, __int64 a2);

void GameHr_17d27a0(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 (**v20)();
    __int16 v21;
    char gap26_[22];
    __int16 v22;
    char gap50_[22];
    __int16 v23;
    char gap74_[22];
    __int16 v24;
    char gap98_[22];
    float v25;
    char gap124_[4];
    __int64 v26;
    __int64 v27;
  } v20_;

  a1[14] = 0;
  if (a2 != 0) {
    v3 = *(const char**)(a2 + 40);
    if (v3 != nullptr && *v3 != 0 && strcmp(v3, "NoFace") != 0) {
      a1[14] = a2;
      a1[3] = -1;
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      *(_QWORD*)(v5 + 16) = 0;
      v6 = v5;
      v7 = GameData_2130200[0];
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)(v5 + 40) = 0;
      *(_BYTE*)(v5 + 48) = 0;
      *(_QWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = 0;
      *(_DWORD*)(v5 + 71) = 0;
      *(_QWORD*)(v5 + 80) = 0;
      *(_QWORD*)(v5 + 88) = 0;
      *(_QWORD*)(v5 + 8) = 0;
      v8 = (atomic_ullong*)(v5 + 8);
      *(_QWORD*)(v5 + 96) = 0;
      *(_QWORD*)(v5 + 104) = 0;
      *(_QWORD*)v5 = v7 + 2;
      v9 = a1[14];
      *(_QWORD*)(v5 + 112) = 0;
      *(_QWORD*)(v5 + 120) = 0;
      *(_QWORD*)(v5 + 24) = game_SpineBuildCallbackForTalk_vtable;
      v10 = v5 + 24;
      GameRoutine_191ae50_alt1((_QWORD*)(v5 + 24), v9);
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 88LL))(v10, a1 + 2);
      v20_.v21 = 0;
      v20_.v22 = 0;
      v20_.v23 = 0;
      v20_.v24 = 0;
      v20_.v26 = 0;
      v20_.v27 = 0;
      v20_.v25 = 0x1.0000000000000p+0f;
      v11 = a1[14];
      v20_.v20 = game_SpineBuildArgument_vtable;
      SpineBuildArgument_Unknown16((__int64)&v20_.v20, v11);
      v12 = *(int**)(game_g_frame_clock + 16632);
      if (*(_QWORD*)(game_g_frame_clock + 16616) != 0) {
        v12 = *(int**)(game_g_frame_clock + 16616);
      }
      v20_.v25 = fminf((float)((float)*v12 / 0x1.ea00000000000p+10f) *
                           0x1.b333340000000p-3f,
                       0x1.0000000000000p+0f);
      atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
      atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
      v13 = v20_.v27;
      v20_.v26 = v10;
      v20_.v27 = v6;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
      if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
      GameRoutine_190bad0_alt1((void*)(&v18_.v18),
                               (__int64*)*game_spine_g_resource_releaser_ptr,
                               (__int64)&v20_.v20);
      v14 = v18_.v18;
      v15 = v18_.v19;
      v16 = a1[1];
      v18_.v18 = 0;
      v18_.v19 = 0;
      *a1 = v14;
      a1[1] = v15;
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
      v17 = v18_.v19;
      if (v18_.v19 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
      cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument((__int64)&v20_.v20);
      if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
}

__int64 GameHr_17fd3a0(__int64 result, __int64 a2, __int64 a3)
{
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int16* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;

  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = -1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v26 = a3;
    v27 = a2;
    v29 = result;
    v28 = GameRoutine_1a09fd0(GameData_212df10);
    result = v29;
    a2 = v27;
    a3 = v26;
    if (v28 != 0) {
      *v4 = GameRoutine_540(0, "ModelModule", 11);
      GameRoutine_1a09fe0(GameData_212df10);
      result = v29;
      a2 = v27;
      a3 = v26;
    }
  }
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(a2 + 504)) {
      goto LABEL_12;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  if (*(_QWORD*)(a2 + 512) == v5 || (v8 = *(_QWORD*)(v5 + 8)) == 0 ||
      (v9 = *(_QWORD*)(v8 + 24)) == 0) {
  LABEL_12:
    *(_QWORD*)result = 0;
    return result;
  }
  v10 = *(_QWORD*)(v9 + 168);
  *(_QWORD*)result = v10;
  if (v10 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
    if (v11 == 0) {
      goto LABEL_25;
    }
    if (a3 != 0) {
      v12 = result;
      v13 = a3;
      v14 = GameRoutine_1a09c70(a3);
      a3 = v13;
      v15 = v14;
      result = v12;
    }
    else {
      v15 = 0;
    }
    v16 = v11 + 8;
    v17 = *(unsigned __int16*)(v11 + 12);
    v18 = v11 + 8 + 16 * v17;
    v19 = *(_DWORD*)v18;
    if (*(_DWORD*)(v11 + 8) < *(_DWORD*)v18) {
      do {
        v22 = (__int64)v19 >> 3;
        if (v15 > v22) {
          v20 = (*(unsigned __int8*)(a3 + v15 + ~v22) >> (v19 & 7)) & 1;
        }
        else {
          v20 = 0;
        }
        v17 = *(unsigned __int16*)(v11 + 12 + 16 * v17 + 2 * v20);
        v21 = v19 < *(_DWORD*)(v16 + 16 * v17);
        v19 = *(_DWORD*)(v16 + 16 * v17);
      } while (v21);
      v18 = v16 + 16 * v17;
    }
    v23 = *(unsigned __int16**)(v18 + 8);
    if (v15 == *v23) {
      v24 = result;
      if ((unsigned int)GameRoutine_1a09cf0(v23 + 1, a3, v15) != 0) {
        LODWORD(v25) = -1;
      }
      else {
        v25 = (unsigned __int64)(v18 - v11 - 24) >> 4;
      }
      result = v24;
    }
    else {
    LABEL_25:
      LODWORD(v25) = -1;
    }
    *(_DWORD*)(result + 8) = v25;
  }
  return result;
}

__int64 GameHr_181e5c0()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_8224a0(9);
  if (GameData_21caab0 == 0) {
    return 0;
  }
  result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v0);
  if (result != 0) {
    return *(unsigned __int8*)(result + 32);
  }
  return result;
}

__int64 GameHr_181e7e0()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_8224a0(10);
  if (GameData_21caab0 == 0) {
    return 0;
  }
  result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v0);
  if (result != 0) {
    return *(unsigned __int8*)(result + 32);
  }
  return result;
}

__int64 GameHr_181fe70()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_8224a0(7);
  if (GameData_21caab0 == 0) {
    return 0;
  }
  result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v0);
  if (result != 0) {
    return *(unsigned __int8*)(result + 32);
  }
  return result;
}

__int64 GameHr_1820090()
{
  __int64 v0;
  __int64 result;

  v0 = GameRoutine_8224a0(8);
  if (GameData_21caab0 == 0) {
    return 0;
  }
  result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v0);
  if (result != 0) {
    return *(unsigned __int8*)(result + 32);
  }
  return result;
}

__int64 GameHr_18206c0(__int64 a1, int* a2)
{
  int v2;
  int v3;
  unsigned int v4;
  __int64 v5;

  v2 = llroundf((float)((float)*a2 * 100.0) / 10.0);
  v3 = v2 & ~(v2 >> 31);
  if (v3 >= 100) {
    v4 = 100;
  }
  else {
    v4 = v3;
  }
  v5 = GameRoutine_8224a0(5);
  return GameRoutine_716d80(v5, v4);
}

void GameHr_1839f80(__int64 a1, _DWORD* a2, int a3)
{
  int v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _DWORD* v14;
  int v15;
  __int64 v16;
  struct {
    __int64* v17;
    __int64 v18;
    int v19;
    int v20;
    int v21;
    char gap28_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    int v25;
  } v17_;
  const char* v26[2];

  if (*(_DWORD*)(**(_QWORD**)a1 + 4LL * a3) == 42) {
    return;
  }
  v3 = **(_DWORD**)(a1 + 8);
  if (v3 > 1) {
    return;
  }
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)) +
       2LL * (unsigned __int8)a3;
  v6 = *(__int16*)(v5 + 330);
  if (*(_WORD*)(v5 + 330) == 0) {
    return;
  }
  v7 = *(_QWORD*)(a1 + 16);
  v26[0] = game_util_Format((__int64)"L_CommandInfo_Status%02d", v3);
  v26[1] = (const char*)strlen(v26[0]);
  GameRoutine_15733c0_alt1((void*)(&v17_.v17), (__int64*)(v7 + 24), v26);
  if (v17_.v18 != 0) {
    v11 = std___1___shared_weak_count_lock(v17_.v18);
    v12 = v17_.v17;
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak(v17_.v18);
    }
    if (v11 != 0 && v12 != nullptr) {
      v13 = a1;
      v14 = a2;
      if (*(_DWORD*)(**(_QWORD**)(a1 + 24) + 4LL * a3) != 42) {
        v15 = *(_DWORD*)(**(_QWORD**)a1 + 4LL * a3);
        v17_.v22 = 0;
        v17_.v23 = 0;
        v17_.v24 = 0;
        v17_.v25 = 0;
        v17_.v19 = v6;
        v17_.v20 = v6;
        LODWORD(v17_.v17) = v15;
        WORD2(v17_.v17) = 1;
        LODWORD(v17_.v18) = -1;
        v17_.v21 = -1;
        GameRoutine_188df50_alt1(v12, (unsigned int*)&v17_.v17, 1, 1);
        if (v17_.v22 != 0) {
          v17_.v23 = v17_.v22;
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v17_.v22);
        }
        v13 = a1;
        v14 = a2;
      }
      goto LABEL_17;
    }
    v13 = a1;
    v14 = a2;
    if (v11 != 0) {
    LABEL_17:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
        v14 = a2;
        v13 = a1;
      }
    }
  }
  else {
    v13 = a1;
    v14 = a2;
  }
  if (v6 < 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*v14 & 0xFFF)) +
                272LL) == 1) {
    **(_BYTE**)(v13 + 32) = 1;
  }
  ++**(_DWORD**)(v13 + 8);
}

__int64 GameHr_1851ae0(__int64* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *a1;
  *((_DWORD*)a1 + 25) = 0;
  result = (*(__int64 (**)(__int64*))(v1 + 600))(a1);
  if ((result & 1) != 0) {
    v4 = a1[11];
    if (v4 != 0 && (v5 = *(_QWORD*)(v4 + 392)) != 0 &&
        (v6 = (__int64*)GameData_21c9ac0, v7 = GameData_21c9ac8,
         GameData_21c9ac0 != GameData_21c9ac8)) {
      while (1) {
        v8 = *v6;
        v14 = 0;
        v15 = 0;
        v12 = 0;
        v13 = 0;
        v11 = 0;
        v10[0] = v5;
        v10[1] = v8;
        if (v8 != 0) {
          v11 = GameRoutine_8c9820(v5, v8, 0);
          v12 = GameRoutine_8c9820(v5, v8, 1);
          v13 = GameRoutine_8c9820(v5, v8, 2);
          v14 = GameRoutine_8c9820(v5, v8, 3);
          v15 = GameRoutine_8c9820(v5, v8, 4);
        }
        result = GameRoutine_18515e0(v10);
        if ((result & 1) != 0) {
          break;
        }
        if (++v6 == (__int64*)v7) {
          goto LABEL_9;
        }
      }
      v9 = 2;
    }
    else {
    LABEL_9:
      v9 = 1;
    }
    *((_DWORD*)a1 + 25) = v9;
  }
  return result;
}

__int64 GameHr_186b4c0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6;
  _BYTE* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _BYTE v26[32];
  _BYTE* v27;
  _BYTE v28[32];
  _BYTE* v29;
  __int64 v30;
  __int64 v31;

  v6 = *(_QWORD*)(a5 + 32);
  if (v6 != 0) {
    if (v6 == a5) {
      v27 = v26;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v26);
      v10 = v27;
    }
    else {
      v10 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      v27 = v10;
    }
    v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1216, 16, 0);
    if (v10 != nullptr) {
      if (v10 == v26) {
        v29 = v28;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v28);
      }
      else {
        v29 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 16LL))(v10);
      }
    }
    else {
      v29 = nullptr;
    }
  }
  else {
    v27 = nullptr;
    v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1216, 16, 0);
    v29 = nullptr;
  }
  v12 = a4 & 1;
  GameRoutine_18714a0(v11 + 1088, a2, 0);
  v13 = *(_QWORD*)(v11 + 1104);
  v14 = *(_QWORD*)(v11 + 1096);
  v30 = 0;
  v31 = 0;
  *(_QWORD*)v11 = GameData_20f2668;
  *(_QWORD*)(v11 + 176) = GameData_20f2ba0;
  *(_QWORD*)(v11 + 1056) = GameData_20f2c70;
  v15 = (unsigned __int64)(v13 - v14) >> 2;
  GameRoutine_16dcd30(v11, "ShopSelectMenu", &v30, 0);
  v16 = GameData_212d6a8;
  v17 = v31;
  *(_QWORD*)v11 = GameData_212d6a8 + 2;
  *(_QWORD*)(v11 + 176) = v16 + 143;
  *(_QWORD*)(v11 + 1056) = v16 + 169;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    GameRoutine_1a09c50(v17);
  }
  v18 = GameData_2132038[0];
  *(_QWORD*)(v11 + 1064) = a3;
  *(_QWORD*)v11 = v18 + 16;
  *(_QWORD*)(v11 + 176) = v18 + 1256;
  *(_QWORD*)(v11 + 1056) = v18 + 1464;
  GameRoutine_16dd8b0(v11, (unsigned int)v15, 0);
  v19 = v29;
  *(_QWORD*)(v11 + 1072) = 0;
  *(_QWORD*)(v11 + 1120) = v11;
  *(_QWORD*)(v11 + 1128) = 0;
  *(_QWORD*)(v11 + 1136) = 0;
  *(_QWORD*)(v11 + 1144) = 0;
  *(_QWORD*)v11 = GameData_20f2668;
  *(_QWORD*)(v11 + 176) = GameData_20f2ba0;
  *(_QWORD*)(v11 + 1056) = GameData_20f2c70;
  *(_QWORD*)(v11 + 1152) = 0;
  *(_BYTE*)(v11 + 1160) = v12;
  *(_WORD*)(v11 + 1080) = 1;
  if (v19 != nullptr) {
    if (v19 == v28) {
      *(_QWORD*)(v11 + 1200) = v11 + 1168;
      (*(void (**)(_BYTE*))(*(_QWORD*)v19 + 24LL))(v19);
    }
    else {
      *(_QWORD*)(v11 + 1200) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v19 + 16LL))(v19);
    }
  }
  else {
    *(_QWORD*)(v11 + 1200) = 0;
  }
  GameRoutine_657850(v11, GameData_212c730, "ProcItemShopMenu", 1, a1);
  if (v29 == v28) {
    v20 = 32;
    goto LABEL_23;
  }
  if (v29 != nullptr) {
    v20 = 40;
  LABEL_23:
    (*(void (**)(void*))(*(_QWORD*)v29 + v20))((void*)v29);
  }
  v22 = *(_QWORD**)(v11 + 256);
  v21 = *(_QWORD**)(v11 + 264);
  *(_QWORD*)(v11 + 336) = 0;
  while (v22 != v21) {
    if (*v22 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v22 + 8LL))(*v22);
      v21 = *(_QWORD**)(v11 + 264);
    }
    ++v22;
  }
  v23 = *(_QWORD*)(v11 + 344);
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
    *(_QWORD*)(v11 + 344) = 0;
  }
  *(_QWORD*)(v11 + 264) = *(_QWORD*)(v11 + 256);
  *(_QWORD*)(v11 + 240) = *(_QWORD*)(v11 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 1024LL))(v11);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 1032LL))(v11);
  if (v27 == v26) {
    v24 = 32;
    goto LABEL_35;
  }
  if (v27 != nullptr) {
    v24 = 40;
  LABEL_35:
    (*(void (**)(void*))(*(_QWORD*)v27 + v24))((void*)v27);
  }
  return v11;
}

#pragma GCC visibility pop
