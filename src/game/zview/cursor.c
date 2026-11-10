#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64 (*GameData_1ff5f10[])();
extern __int64 (*game_zview_Cursor_vtable[])();
extern __int64 GameData_220f870;
extern int GameData_22230f8;
__int64 Cursor_Destructor_f565b0(_QWORD* a1);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_d740c0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN* GameData_212c2f8;
extern __int128 GameData_21a5670;
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*GameData_1fd87d8[])();
extern __int64 (*game_zview_Cursor_Impl_vtable[])();
extern __int64 GameData_212d310;
extern __int64 GameData_212eca0;
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d2f0;
extern __int64* GameData_212ec58[2];
extern __int64* GameData_212ed20[10];
struct PseudoSret GameRoutine_d75140(_QWORD, _QWORD, _QWORD);
__int64 Cursor_f566c0(__int64 a1, __int64 a2, __int64 a3);
__int64 Cursor_f57c50(__int64 a1);
__n128 Cursor_Impl_Destructor(__int64 a1);
__int64* Manager_bc6460(float*, float32x4_t*, char);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a3920(__int64 result);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6120;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 Cursor_f57960(__int64 a1);

__int64 Cursor_Destructor_f565b0(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_zview_Cursor_vtable;
  a1[1] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *a1 = GameData_1ff5f10;
  if ((_QWORD*)GameData_220f870 == a1) {
    GameData_220f870 = 0;
    GameData_22230f8 = 0;
  }
  return result;
}

__int64 Cursor_f566c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;

  v3 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v3 + 356) & 1) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v3 + 344);
  v5 = *(_DWORD*)(v3 + 352);
  v28 = v4;
  v29 = v5;
  if ((GameRoutine_d740c0(a2, &v28) & 1) != 0) {
    return 0;
  }
  *(struct PseudoSret*)(&v26) = GameRoutine_d75140(a2, 4, a3);
  v9 = v26;
  v10 = v27;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v26 == v27) {
  LABEL_9:
    if (v9 != 0) {
      v12 = *v11;
      v27 = v9;
      v13 = 128;
      if (*(_QWORD*)(v12 + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(v12 + v13);
    }
    *(struct PseudoSret*)(&v26) = GameRoutine_d75140(a2, 8, a3);
    v9 = v26;
    v14 = v27;
    if (v26 == v27) {
    LABEL_17:
      if (v9 != 0) {
        v15 = *v11;
        v27 = v9;
        v16 = 128;
        if (*(_QWORD*)(v15 + 200) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(v15 + v16);
      }
      *(struct PseudoSret*)(&v26) = GameRoutine_d75140(a2, 16, a3);
      v9 = v26;
      v17 = v27;
      if (v26 == v27) {
      LABEL_25:
        if (v9 != 0) {
          v18 = *v11;
          v27 = v9;
          v19 = 128;
          if (*(_QWORD*)(v18 + 200) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(v18 + v19);
        }
        *(struct PseudoSret*)(&v26) = GameRoutine_d75140(a2, 32, a3);
        v9 = v26;
        v20 = v27;
        if (v26 == v27) {
        LABEL_33:
          result = 0;
          if (v9 == 0) {
            return result;
          }
          goto LABEL_36;
        }
        while ((GameRoutine_d740c0(v9, &v28) & 1) == 0) {
          v9 += 40;
          if (v9 == v20) {
            v9 = v26;
            goto LABEL_33;
          }
        }
      }
      else {
        while ((GameRoutine_d740c0(v9, &v28) & 1) == 0) {
          v9 += 40;
          if (v9 == v17) {
            v9 = v26;
            goto LABEL_25;
          }
        }
      }
    }
    else {
      while ((GameRoutine_d740c0(v9, &v28) & 1) == 0) {
        v9 += 40;
        if (v9 == v14) {
          v9 = v26;
          goto LABEL_17;
        }
      }
    }
  }
  else {
    while ((GameRoutine_d740c0(v9, &v28) & 1) == 0) {
      v9 += 40;
      if (v9 == v10) {
        v9 = v26;
        goto LABEL_9;
      }
    }
  }
  result = 1;
  *(_DWORD*)a2 = *(_DWORD*)v9;
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(v9 + 4);
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(v9 + 8);
  *(_DWORD*)(a2 + 12) = *(_DWORD*)(v9 + 12);
  *(_DWORD*)(a2 + 16) = *(_DWORD*)(v9 + 16);
  *(_DWORD*)(a2 + 20) = *(_DWORD*)(v9 + 20);
  v21 = *(_QWORD*)(v9 + 24);
  v22 = *(_QWORD*)(v9 + 32);
  v9 = v26;
  *(_QWORD*)(a2 + 24) = v21;
  *(_QWORD*)(a2 + 32) = v22;
  if (v9 == 0) {
    return result;
  }
LABEL_36:
  v23 = *v11;
  v24 = result;
  v27 = v9;
  v25 = 128;
  if (*(_QWORD*)(v23 + 200) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free(v23 + v25);
  return v24;
}

__int64 Cursor_f57960(__int64 a1)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  unsigned __int8 explicit;
  _QWORD* v4;
  float* v5;
  __int64 v6;
  __int64* v7;
  unsigned int v8;
  __n128 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int128 v18;
  __int64 v19;
  __int64 v21;
  struct {
    float32x4_t v22;
    const char* v23;
    int v24;
    char gap28_[4];
    __int128 v25;
    __int128 v26;
    __int64 v27;
    __int64 v28;
  } v22_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 321) == 1 && (*(_BYTE*)(a1 + 320) & 1) != 0) {
    v2 = *(_DWORD**)(a1 + 416);
    if (*(_QWORD*)v2 == 0 || *(_DWORD*)(*(_QWORD*)v2 + 16LL) != v2[2]) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                      memory_order_acquire);
      v4 = GameData_212c540;
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v21 = v4[1];
        *(_QWORD*)&GameData_21a6120 = *v4;
        *((_QWORD*)&GameData_21a6120 + 1) = v21;
        __cxa_guard_release(&GameData_21a6130),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v22_.v22 = (__typeof__(v22_.v22)){0};
      v5 = (float*)*eft_g_effectSystem_ptr[0];
      v22_.v24 = 6;
      v22_.v25 = GameData_21a6120;
      v6 = v4[1];
      v22_.v27 = *v4;
      v22_.v28 = v6;
      v22_.v26 = GameData_1a837f0;
      v22_.v23 = "UI_ZoomView_Cursor";
      v7 = Manager_bc6460(v5, &v22_.v22, 1),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_14a10d0(&v22_.v22, (__int64)v7, v8,
                          (__int64)&GameData_1a9f09e),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = LANES128(v22_.v22).n128_u64[1];
      v10 = LANES128(v22_.v22).n128_u64[0];
      if (LANES128(v22_.v22).n128_u64[1] != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(LANES128(v22_.v22).n128_u64[1] + 8), 1u,
            memory_order_relaxed);
      }
      v12 = *(_QWORD*)(a1 + 424);
      *(_QWORD*)(a1 + 416) = v10;
      *(_QWORD*)(a1 + 424) = v11;
      if (v12 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v9 = std___1___shared_weak_count___release_weak_alt1(v12),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v11 = *(_QWORD*)(a1 + 424);
      }
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v11 + 16LL))(v11),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v9 = std___1___shared_weak_count___release_weak_alt1(v11),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v13 = LANES128(v22_.v22).n128_u64[1];
      if (LANES128(v22_.v22).n128_u64[1] != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(LANES128(v22_.v22).n128_u64[1] + 8),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v13 + 16LL))(
            v13, *(long double*)&v9),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v13),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    GameRoutine_14a1390_alt1((__int64*)(a1 + 416), 1),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = *(_QWORD*)(a1 + 416);
  v15 = *(_QWORD*)v14;
  if (*(_QWORD*)v14 != 0 && *(_DWORD*)(v15 + 16) == *(_DWORD*)(v14 + 8)) {
    v16 = *(_DWORD*)(v15 + 36);
    if (v16 != 0) {
      *(_QWORD*)&v18 = *(_QWORD*)(a1 + 280);
      v17 = 0;
      DWORD1(v18) = *(_DWORD*)(a1 + 168);
      *((_QWORD*)&v18 + 1) = (unsigned int)HIDWORD(*(_QWORD*)(a1 + 280));
      do {
        if ((int)v16 > (int)v17) {
          v19 = *(_QWORD*)(v15 + 40 + 8LL * (int)v17);
          if (v19 != 0) {
            *(_OWORD*)(v19 + 16) = v18;
            *(_BYTE*)(v19 + 128) = 1;
            v16 = *(_DWORD*)(v15 + 36);
          }
        }
        ++v17;
      } while (v17 < v16);
    }
  }
  return GameRoutine_14a3920(v14);
}

__int64 Cursor_f57c50(__int64 a1)
{
  __int64 v2;
  __int128 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  char v17;
  __int64 result;
  atomic_ullong* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;

  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_BYTE*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = game_zview_Cursor_Impl_vtable;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_WORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 16) = GameData_212ec58[0] + 2;
  v2 = GameData_212eca0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 188) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 189) = 1;
  *(_BYTE*)(a1 + 220) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 252) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 260) = 0;
  *(_WORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 236) = 0;
  *(_DWORD*)(a1 + 268) = 0;
  *(_WORD*)(a1 + 272) = 256;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 128) = v2 + 16;
  *(_QWORD*)(a1 + 212) = 1065353216;
  *(_DWORD*)(a1 + 228) = -1027080192;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a5680) != 0) {
    v23 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v23;
    __cxa_guard_release(&GameData_21a5680);
  }
  v3 = GameData_21a5670;
  *(_WORD*)(a1 + 320) = 256;
  *(_OWORD*)(a1 + 304) = v3;
  v4 = GameData_212d2f0;
  *(_DWORD*)(a1 + 336) = 0;
  *(_BYTE*)(a1 + 344) = 0;
  *(_BYTE*)(a1 + 356) = 0;
  *(_BYTE*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 328) = v4 + 2;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      296, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = GameData_2131678;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 48) = 0x2000;
  v8 = v7 + 16;
  *(_DWORD*)(v6 + 104) = 0;
  *(_WORD*)(v6 + 108) = 256;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_DWORD*)(v6 + 292) = 2;
  *(_QWORD*)(a1 + 392) = v6;
  *(_QWORD*)(v6 + 24) = 0;
  v9 = v6 + 24;
  *(_QWORD*)v6 = v8;
  *(_QWORD*)(v6 + 8) = 0;
  v10 = *v5;
  *(_QWORD*)(a1 + 384) = v9;
  v11 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)v11 = v8;
  v12 = v11;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 48) = 0x2000;
  *(_DWORD*)(v11 + 104) = 0;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_DWORD*)(v11 + 292) = 2;
  *(_QWORD*)(a1 + 408) = v11;
  v13 = *v5;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(a1 + 400) = v12 + 24;
  v14 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)v14 = v8;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 48) = 0x2000;
  *(_DWORD*)(v14 + 104) = 0;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(a1 + 416) = v14 + 24;
  *(_QWORD*)(a1 + 424) = v14;
  v15 = *(_BYTE*)(a1 + 356);
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
  *(_BYTE*)(a1 + 464) = 0;
  *(_WORD*)(a1 + 480) = 256;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 344) = 7;
  *(_WORD*)(a1 + 348) = 0;
  *(_DWORD*)(a1 + 352) = 1;
  if ((v15 & 1) == 0) {
    *(_BYTE*)(a1 + 356) = 1;
  }
  if (*(_QWORD*)GameData_212d310 != 0 &&
      *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
    v16 = 2048;
  }
  else {
    v16 = 0x11000000000000LL;
  }
  v17 = *(_BYTE*)(a1 + 376);
  *(_QWORD*)(a1 + 360) = v16;
  *(_QWORD*)(a1 + 368) = 1050253722;
  if ((v17 & 1) == 0) {
    *(_BYTE*)(a1 + 376) = 1;
  }
  result = fw_memory_HeapManager_Allocate(*v5, 56, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  v19 = (atomic_ullong*)(result + 8);
  *(_QWORD*)(result + 16) = 0;
  v20 = result;
  v21 = GameData_212ed20[0];
  *(_QWORD*)(result + 40) = a1 + 344;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)result = v21 + 2;
  *(_QWORD*)(result + 24) = 0xC27000003EE66666LL;
  *(_QWORD*)(result + 32) = 0x1C1F00000LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                            memory_order_relaxed);
  v22 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 144) = result + 24;
  *(_QWORD*)(a1 + 152) = result;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      return result;
    }
  LABEL_17:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    return std___1___shared_weak_count___release_weak(v20);
  }
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  result = std___1___shared_weak_count___release_weak(v20);
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    goto LABEL_17;
  }
  return result;
}

__n128 Cursor_Impl_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = game_zview_Cursor_Impl_vtable;
  GameRoutine_14a1390(a1 + 384, 1);
  GameRoutine_14a1390(a1 + 400, 1);
  GameRoutine_14a1390(a1 + 416, 1);
  v3 = *(_QWORD*)(a1 + 424);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 408);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 392);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 128) = GameData_1fd87d8;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)(a1 + 16) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v8 = *(_QWORD**)(a1 + 40);
  v9 = *(_QWORD**)(a1 + 48);
  if (v8 != v9) {
    do {
      if (*v8 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
        *v8 = 0;
      }
      ++v8;
    } while (v8 != v9);
    v8 = *(_QWORD**)(a1 + 40);
  }
  v10 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v8;
  if (v10 == (_QWORD*)(a1 + 64)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_27;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
  v8 = *(_QWORD**)(a1 + 40);
LABEL_27:
  if (v8 != nullptr) {
    *(_QWORD*)(a1 + 48) = v8;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return result;
}

#pragma GCC visibility pop
