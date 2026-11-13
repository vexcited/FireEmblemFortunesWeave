#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 EffectModule_bd3360(_QWORD, _QWORD, long double);
__int64 GameRoutine_98ed40(_QWORD);
__int64 GameRoutine_98f2b0(_QWORD);
__int64 GameRoutine_bd3660(_QWORD, _QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _QWORD GameData_1b56248[5];
extern _UNKNOWN* GameData_212d4a8;
extern __int64 (*GameData_1b56208[5])();
extern __int64 (*GameData_1fb2378[])();
extern __int64 (*GameData_1fb23f8[])();
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern int* GameData_212d4a0;
struct PseudoSret GameRoutine_bd3a40(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_ObjectInfoConst_CreateEffect_alt1(
    __int64 result, int a2,
    __int64 a3) __asm__("game_ObjectInfoConst_CreateEffect");
unsigned __int64
game_ObjectInfoConst_CreateEffect_lambda1_Invoke(unsigned __int64 result,
                                                 __int64* a2);
__attribute__((swiftcall)) void wld_bd3a40(PSEUDO_X8, __int64, __int64*);
__int64** GameRoutine_14a1e70(__int64** result, float);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, float32x4_t*,
                                      char) __asm__("Manager_bc6460");
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_bd16c0(_QWORD*, __int64**);
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _DWORD GameData_1b56230[6];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int64* GameData_21309c8[5];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_2131678;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__int64* game_ObjectInfoConst_CreateEffect_lambda0_Invoke(__int64* result,
                                                          __int64* a2);
_QWORD* EffectModule_bd3360_alt1(_QWORD* result,
                                 __int64*) __asm__("EffectModule_bd3360");
__int64 GameRoutine_bd3660_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_bd3660");
__int64 GameHr_98ed40(__int64);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_98f2b0_alt1(__int64) __asm__("GameRoutine_98f2b0");
void __cxa_guard_release_alt2(__int64) __asm__("__cxa_guard_release");
void game_ObjectInfoConst_CreateEffect(__int64 a1, int a2, __int64 a3);

void game_ObjectInfoConst_CreateEffect(__int64 a1, int a2, __int64 a3)
{
  __int64 v4;
  unsigned int v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 (***v18)();
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)();
  __int64 (***v25)();
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30[2];
  __int64 v31;

  if (a1 != 0 && a3 != 0) {
    v4 = *(_QWORD*)(a1 + 24);
    v7 = *(_DWORD*)(a3 + 284) - 1;
    if (v7 > 4) {
      if ((*(_BYTE*)(v4 + 65) & 1) == 0) {
        return;
      }
    }
    else if ((*((_BYTE*)GameData_1b56208[v7] + v4) & 1) == 0) {
      return;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                    memory_order_acquire);
    v9 = GameData_212d4a0;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212d4a8) != 0) {
      *v9 = wld_Crc32_alt1(0, "EffectModule", 0xCu);
      __cxa_guard_release_alt2((__int64)GameData_212d4a8);
    }
    v10 = *(_QWORD*)(a3 + 512);
    v11 = v10;
    while (v11 != *(_QWORD*)(a3 + 504)) {
      v12 = *(_DWORD*)(v11 - 16);
      v11 -= 16;
      v10 -= 16;
      if (v12 == *v9) {
        if (*(_QWORD*)(a3 + 512) != v10) {
          v13 = *(_QWORD*)(v10 + 8);
          if (v13 != 0) {
            goto LABEL_14;
          }
        }
        break;
      }
    }
    v13 = GameHr_98ed40(a3);
    if (v13 == 0) {
      return;
    }
  LABEL_14:
    v30[0] = 0;
    v30[1] = 0;
    v14 = *(_QWORD*)(a1 + 24);
    v29 = v30;
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    v17 = GameData_1fb2378;
    *(_QWORD*)(v16 + 16) = a3;
    *(_DWORD*)(v16 + 24) = a2;
    v18 = (__int64 (***)(void))v16;
    *(_QWORD*)(v16 + 32) = &v29;
    *(_QWORD*)v16 = GameData_1fb2378;
    *(_QWORD*)(v16 + 8) = v13;
    v19 = *(__int64**)(v14 + 40);
    v20 = *(__int64**)(v14 + 48);
    if (v19 != v20) {
      do {
        v21 = *v19++;
        v31 = v21;
        ((void (*)(__int64 (***)(void), __int64*))(*v18)[6])(v18, &v31);
      } while (v19 != v20);
      v17 = *v18;
    }
    ((void (*)(__int64 (***)(void)))v17[5])(v18);
    v22 = *(_QWORD*)(a1 + 24);
    v23 = fw_memory_HeapManager_Allocate_alt1(*v15, 40, 16, 0);
    v24 = GameData_1fb23f8;
    *(_QWORD*)(v23 + 16) = a3;
    *(_DWORD*)(v23 + 24) = a2;
    v25 = (__int64 (***)(void))v23;
    *(_QWORD*)(v23 + 32) = &v29;
    *(_QWORD*)v23 = GameData_1fb23f8;
    *(_QWORD*)(v23 + 8) = v13;
    v26 = *(__int64**)(v22 + 40);
    v27 = *(__int64**)(v22 + 48);
    if (v26 != v27) {
      do {
        v28 = *v26++;
        v31 = v28;
        ((void (*)(__int64 (***)(void), __int64*))(*v25)[6])(v25, &v31);
      } while (v26 != v27);
      v24 = *v25;
    }
    ((void (*)(__int64 (***)(void)))v24[5])(v25);
    GameRoutine_98f2b0_alt1(v30[0]);
  }
}

__int64* game_ObjectInfoConst_CreateEffect_lambda0_Invoke(__int64* result,
                                                          __int64* a2)
{

#pragma clang fp contract(off)
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _BYTE* v9;
  __int64* v10;
  bool v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  __int64* v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  __int128 v20;
  float v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64** v37;
  unsigned __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  struct {
    float32x4_t v64;
    __int64* v65;
    _BYTE* v66;
    __int128 v67;
    __int128 v68;
    __int128 v69;
    char gap144_[8];
    __int64 v70;
  } v64_;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a2;
  if (*(_DWORD*)(*a2 + 32) == *((_DWORD*)result + 6)) {
    v2 = result;
    v3 = *(_DWORD*)(result[2] + 284) - 1;
    v4 = v3 > 4 ? 112LL : GameData_1b56248[v3];
    v60 = v61 + v4;
    v59 = *(unsigned __int16*)(v61 + v4);
    if (*(_WORD*)(v61 + v4) != 0) {
      v5 = 0;
      v57 = GameData_2131678 + 16;
      v58 = result;
      do {
        v7 = (_QWORD*)v2[1];
        v6 = v2[2];
        v8 = *(_QWORD*)(v60 + 8);
        v9 = *(_BYTE**)(v61 + 128);
        v10 = *(__int64**)(v8 + 8 * v5);
        v62_.v62 = v10;
        v62_.v63 = strlen(v10),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        wld_bd3a40((void*)((__int64*)&v64_.v64), (__int64)v7,
                   (__int64*)&v62_.v62),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_QWORD*)LANES128(v64_.v64).n128_u64[0] != 0) {
          v11 = *(_DWORD*)(*(_QWORD*)LANES128(v64_.v64).n128_u64[0] + 16LL) ==
                *(_DWORD*)(LANES128(v64_.v64).n128_u64[0] + 8);
          v12 = LANES128(v64_.v64).n128_u64[1];
          if (LANES128(v64_.v64).n128_u64[1] == 0) {
            goto LABEL_14;
          }
        }
        else {
          v11 = false;
          v12 = LANES128(v64_.v64).n128_u64[1];
          if (LANES128(v64_.v64).n128_u64[1] == 0) {
            goto LABEL_14;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_14:
          if (v11) {
            goto LABEL_58;
          }
          goto LABEL_15;
        }
        (*(void (**)(unsigned __int64))(*(_QWORD*)v12 + 16LL))(v12),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v12),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v11) {
          goto LABEL_58;
        }
      LABEL_15:
        v13 = *(_DWORD*)(v6 + 284) - 1;
        if (v13 > 4) {
          v14 = 6;
        }
        else {
          v14 = GameData_1b56230[v13];
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v54 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v54;
          __cxa_guard_release_alt1(&GameData_21a6130),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6150) != 0) {
          v55 = *((_QWORD*)GameData_212c548 + 1);
          *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
          *((_QWORD*)&GameData_21a6140 + 1) = v55;
          __cxa_guard_release_alt1(&GameData_21a6150),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v56 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v56;
          __cxa_guard_release_alt1(&GameData_21a6130),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v64_.v64 = (__typeof__(v64_.v64)){0};
        LODWORD(v64_.v66) = v14;
        v64_.v67 = GameData_21a6120;
        v64_.v68 = GameData_21a6140;
        v64_.v69 = GameData_21a6120;
        v64_.v65 = v10;
        v15 = ({
          unsigned __int128 r_ = Manager_bc6460_pair(
              *(_QWORD**)eft_g_effectSystem_ptr[0], &v64_.v64, 1);
          v16 = COERCE_AS(__typeof__(v16), (unsigned long long)(r_ >> 64));
          (__int64*)(unsigned long long)r_;
        });
        GameRoutine_14a10d0(&v62_.v62, (__int64)v15, v16,
                            (__int64)&GameData_1a9f09e),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*v62_.v62 == 0 ||
            *(_DWORD*)(*v62_.v62 + 16) != *((_DWORD*)v62_.v62 + 2)) {
          goto LABEL_55;
        }
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
          v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          v18 = (v17 & 8) != 0 ? 2 : 3;
          if ((v18 & v17) == 0) {
            goto LABEL_39;
          }
        }
        if (game_ProcFadeView_instance_ != 0) {
          v19 = game_ProcFadeView_instance_ +
                ((unsigned __int64)*(
                     unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                 << 6);
          if (*(float*)(v19 + 172) == *(float*)(v19 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v19 + 160) + 16LL))(v19 +
                                                                           160),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v20 = *(_OWORD*)(v19 + 208);
          }
          if (*((float*)&v20 + 3) == 0x1.0000000000000p+0f &&
              LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v19 + 160) + 16LL))(
                              v19 + 160, *((float*)&v20 + 3)))
                      .n128_f32[3] == 0x1.0000000000000p+0f) {
            goto LABEL_39;
          }
        }
        v21 = 0x1.e000000000000p+4f;
        if (*GameData_21309c8[0] != 0 &&
            *(_BYTE*)(*GameData_21309c8[0] + 8) == 2) {
        LABEL_39:
          v21 = 0x0.0p+0f;
        }
        GameRoutine_14a1e70(&v62_.v62, v21),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v22 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v22 + 16) = 0;
        *(_QWORD*)(v22 + 24) = 0;
        *(_DWORD*)(v22 + 32) = 0;
        *(_QWORD*)(v22 + 40) = 0;
        *(_DWORD*)(v22 + 104) = 0;
        *(_QWORD*)(v22 + 56) = 0;
        *(_QWORD*)(v22 + 64) = 0;
        *(_QWORD*)(v22 + 72) = 0;
        *(_WORD*)(v22 + 80) = 0;
        *(_WORD*)(v22 + 116) = 0;
        *(_WORD*)(v22 + 136) = 0;
        *(_BYTE*)(v22 + 160) = 0;
        *(_BYTE*)(v22 + 288) = 0;
        *(_QWORD*)(v22 + 272) = 0;
        *(_QWORD*)(v22 + 280) = 0;
        *(_QWORD*)(v22 + 256) = 0;
        *(_QWORD*)(v22 + 264) = 0;
        *(_QWORD*)(v22 + 240) = 0;
        *(_QWORD*)(v22 + 248) = 0;
        *(_QWORD*)(v22 + 224) = 0;
        *(_QWORD*)(v22 + 232) = 0;
        *(_QWORD*)(v22 + 208) = 0;
        *(_QWORD*)(v22 + 216) = 0;
        *(_QWORD*)(v22 + 192) = 0;
        *(_QWORD*)(v22 + 200) = 0;
        *(_QWORD*)(v22 + 176) = 0;
        *(_QWORD*)(v22 + 184) = 0;
        *(_QWORD*)(v22 + 168) = 0;
        *(_QWORD*)(v22 + 120) = 0;
        *(_DWORD*)(v22 + 127) = 0;
        LANES128(v64_.v64).n128_u64[1] = v22;
        LOBYTE(v64_.v65) = 0;
        BYTE4(v64_.v65) = 0;
        BYTE12(v64_.v67) = 0;
        LODWORD(v64_.v68) = 1;
        BYTE4(v64_.v68) = 0;
        DWORD2(v64_.v68) = -1;
        *(_QWORD*)v22 = v57;
        *(_QWORD*)(v22 + 8) = 0;
        *(_DWORD*)(v22 + 48) = 0x2000;
        *(_WORD*)(v22 + 108) = 256;
        *(_DWORD*)(v22 + 112) = -1082130432;
        *(_DWORD*)(v22 + 292) = 2;
        BYTE8(v64_.v67) = 0;
        v64_.v66 = nullptr;
        *(_QWORD*)&v64_.v67 = 0;
        v23 = v62_.v62;
        v24 = v62_.v63;
        if (v62_.v63 == 0) {
          v64_.v64 = COERCE_AS(float32x4_t, (unsigned __int64)v62_.v62);
        LABEL_44:
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v25 = v22;
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v25),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v24 = LANES128(v64_.v64).n128_u64[1];
          if (LANES128(v64_.v64).n128_u64[1] == 0) {
            goto LABEL_49;
          }
          goto LABEL_47;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v62_.v63 + 8), 1u,
                                  memory_order_relaxed);
        v22 = LANES128(v64_.v64).n128_i64[1];
        LANES128(v64_.v64).n128_u64[0] = (unsigned __int64)v23;
        LANES128(v64_.v64).n128_u64[1] = v24;
        if (v22 != 0) {
          goto LABEL_44;
        }
      LABEL_47:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v24 + 16LL))(v24),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v24),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_49:
        BYTE4(v64_.v68) = 1;
        if (v9 != nullptr && *v9 != 0) {
          v26 = strlen(v9),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v64_.v66 = v9;
          *(_QWORD*)&v64_.v67 = v26;
        }
        GameRoutine_bd16c0(v7, (__int64**)&v64_.v64),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v27 = LANES128(v64_.v64).n128_u64[1];
        if (LANES128(v64_.v64).n128_u64[1] != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(LANES128(v64_.v64).n128_u64[1] + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v27 + 16LL))(v27),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v27),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_55:
        v28 = v62_.v63;
        if (v62_.v63 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v62_.v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v28),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      LABEL_58:
        v29 = v2[4];
        v30 = *(_QWORD*)(v8 + 8 * v5);
        v31 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v32 = strlen(v30),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1(),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v33 = v32;
        if (v32 >= 0x17) {
          if ((v32 | 7) == 0x17) {
            v35 = 26;
          }
          else {
            v35 = (v32 | 7) + 1;
          }
          v34 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v35, 16, 0),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v31[5] = v33;
          v31[6] = v34;
          v31[4] = v35 | 1;
        LABEL_66:
          memmove(v34, v30, v33),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_67;
        }
        v34 = (__int64)v31 + 33;
        *((_BYTE*)v31 + 32) = 2 * v32;
        if (v32 != 0) {
          goto LABEL_66;
        }
      LABEL_67:
        *(_BYTE*)(v34 + v33) = 0;
        v64_.v70 = v5;
        v37 = (__int64**)(v29 + 8);
        v36 = *(__int64**)(v29 + 8);
        if (v36 != nullptr) {
          v38 = *((unsigned __int8*)v31 + 32);
          v39 = v31[6];
          if ((v38 & 1) != 0) {
            v40 = (char*)v31[6];
          }
          else {
            v40 = (char*)v31 + 33;
          }
          if ((v38 & 1) != 0) {
            v41 = v31[5];
          }
          else {
            v41 = v38 >> 1;
          }
          while (1) {
            while (1) {
              v42 = v36;
              v43 = *((unsigned __int8*)v36 + 32);
              v44 = (v43 & 1) == 0;
              v45 = v43 >> 1;
              v46 = v44 ? v45 : v42[5];
              v47 = v44 ? (__int64)v42 + 33 : v42[6];
              v48 = v46 >= v41 ? v41 : v46;
              v49 = memcmp(v40, v47, v48),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v49 != 0) {
                break;
              }
              if (v41 >= v46) {
                goto LABEL_88;
              }
            LABEL_74:
              v36 = (__int64*)*v42;
              v37 = (__int64**)v42;
              if (*v42 == 0) {
                goto LABEL_95;
              }
            }
            if (v49 < 0) {
              goto LABEL_74;
            }
          LABEL_88:
            v50 = memcmp(v47, v40, v48),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v50 != 0) {
              if ((v50 & 0x80000000) == 0) {
                goto LABEL_97;
              }
            }
            else if (v46 >= v41) {
            LABEL_97:
              if ((v38 & 1) != 0 && v39 != 0) {
                v52 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v52 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                    (_QWORD)(v39)),
                    v16 = COERCE_AS(
                        __typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v53 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v53 = 128;
              }
              result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, (_QWORD)(v31)),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_8;
            }
            v36 = (__int64*)v42[1];
            if (v36 == nullptr) {
              v37 = (__int64**)(v42 + 1);
              goto LABEL_95;
            }
          }
        }
        v42 = (__int64*)(v29 + 8);
      LABEL_95:
        *v31 = 0;
        v31[1] = 0;
        v31[2] = (__int64)v42;
        *v37 = v31;
        v51 = **(_QWORD**)v29;
        if (v51 != 0) {
          *(_QWORD*)v29 = v51;
          v31 = *v37;
        }
        result = fw_containers_BalanceAfterInsert(*(__int64**)(v29 + 8), v31),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        ++*(_QWORD*)(v29 + 16);
      LABEL_8:
        v2 = v58;
        v5 = v64_.v70 + 1;
      } while (v64_.v70 + 1 != v59);
    }
  }
  return result;
}

unsigned __int64

game_ObjectInfoConst_CreateEffect_lambda1_Invoke(unsigned __int64 result,
                                                 __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  bool v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  int v38;
  int v39;
  unsigned __int64 v40;
  __int128 v41;
  unsigned __int64 v42;
  atomic_ullong* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    char* v50;
  } v48_;
  struct {
    __int64 v51;
    __int64 v52;
    char gap80_[8];
    _QWORD* v53;
  } v51_;

  v2 = *a2;
  v3 = *(_DWORD*)(result + 24);
  v51_.v53 = (_QWORD*)result;
  if (*(_DWORD*)(v2 + 32) != v3) {
    v4 = *(_DWORD*)(v51_.v53[2] + 284LL) - 1;
    v5 = v4 > 4 ? 112LL : GameData_1b56248[v4];
    v46 = v2 + v5;
    v45 = *(unsigned __int16*)(v2 + v5);
    if (*(_WORD*)(v2 + v5) != 0) {
      v6 = 0;
      while (1) {
        v7 = *(_QWORD*)(v46 + 8);
        v8 = *(_QWORD*)(v7 + 8 * v6);
        v9 = v51_.v53[4];
        result = strlen(v8);
        if (result >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1();
        }
        v10 = result;
        if (result >= 0x17) {
          break;
        }
        v11 = (char*)&v48_.v48 + 1;
        LOBYTE(v48_.v48) = 2 * result;
        if (result != 0) {
          goto LABEL_16;
        }
      LABEL_17:
        v11[v10] = 0;
        v15 = *(_QWORD*)(v9 + 8);
        v14 = v9 + 8;
        v13 = v15;
        if (v15 == 0) {
          v34 = v14;
          if ((v48_.v48 & 1) == 0) {
            goto LABEL_71;
          }
        LABEL_67:
          if (v48_.v50 != nullptr) {
            v35 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v35 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v48_.v50);
          }
          goto LABEL_71;
        }
        v16 = v14;
        v47 = v48_.v48 & 1;
        if (v47 != 0) {
          v17 = v48_.v50;
        }
        else {
          v17 = (char*)&v48_.v48 + 1;
        }
        if ((v48_.v48 & 1) != 0) {
          v18 = v48_.v49;
        }
        else {
          v18 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
        }
        do {
          v19 = *(unsigned __int8*)(v13 + 32);
          v20 = (v19 & 1) == 0;
          v21 = v19 >> 1;
          if (v20) {
            v22 = v21;
          }
          else {
            v22 = *(_QWORD*)(v13 + 40);
          }
          if (v20) {
            v23 = v13 + 33;
          }
          else {
            v23 = *(_QWORD*)(v13 + 48);
          }
          if (v18 >= v22) {
            v24 = v22;
          }
          else {
            v24 = v18;
          }
          result = memcmp(v23, v17, v24);
          if (v22 < v18) {
            v25 = -1;
          }
          else {
            v25 = 1;
          }
          if (v22 == v18) {
            v25 = 0;
          }
          if ((_DWORD)result != 0) {
            v25 = result;
          }
          v26 = v25 < 0;
          if (v25 >= 0) {
            v27 = 0;
          }
          else {
            v27 = 8;
          }
          if (!v26) {
            v16 = v13;
          }
          v13 = *(_QWORD*)(v13 + v27);
        } while (v13 != 0);
        if (v16 == v14) {
          v34 = v14;
        }
        else {
          v28 = *(unsigned __int8*)(v16 + 32);
          v29 = (v28 & 1) == 0;
          v30 = v28 >> 1;
          if (v29) {
            v31 = v30;
          }
          else {
            v31 = *(_QWORD*)(v16 + 40);
          }
          if (v29) {
            v32 = v16 + 33;
          }
          else {
            v32 = *(_QWORD*)(v16 + 48);
          }
          if (v31 >= v18) {
            v33 = v18;
          }
          else {
            v33 = v31;
          }
          result = memcmp(v17, v32, v33);
          if ((_DWORD)result != 0) {
            if ((result & 0x80000000) == 0LL) {
              v34 = v16;
            }
            else {
              v34 = v14;
            }
          }
          else if (v18 >= v31) {
            v34 = v16;
          }
          else {
            v34 = v14;
          }
        }
        if (v47 != 0) {
          goto LABEL_67;
        }
      LABEL_71:
        if (v14 != v34) {
          goto LABEL_7;
        }
        v36 = (_QWORD*)v51_.v53[1];
        v51_.v51 = *(_QWORD*)(v7 + 8 * v6);
        v51_.v52 = strlen(v51_.v51);
        result = X8CALL_X0(
            __int64, wld_bd3a40((void*)(&v48_.v48), (__int64)v36, &v51_.v51));
        v37 = v48_.v48;
        if (*(_QWORD*)v48_.v48 == 0 ||
            *(_DWORD*)(*(_QWORD*)v48_.v48 + 16LL) != *(_DWORD*)(v48_.v48 + 8)) {
          goto LABEL_98;
        }
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
          v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          v39 = (v38 & 8) != 0 ? 2 : 3;
          if ((v39 & v38) == 0) {
            goto LABEL_89;
          }
        }
        if (game_ProcFadeView_instance_ != 0) {
          v40 = game_ProcFadeView_instance_ +
                ((unsigned __int64)*(
                     unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                 << 6);
          if (*(float*)(v40 + 172) == *(float*)(v40 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v40 + 160) + 16LL))(v40 +
                                                                           160);
          }
          else {
            v41 = *(_OWORD*)(v40 + 208);
          }
          if (*((float*)&v41 + 3) == 0x1.0000000000000p+0f &&
              LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                           (_QWORD*)(*(_QWORD*)(v40 + 160) + 16LL))(
                              v40 + 160, *((float*)&v41 + 3)))
                      .n128_f32[3] == 0x1.0000000000000p+0f) {
            v37 = v48_.v48;
          LABEL_89:
            v42 = v48_.v49;
            v51_.v51 = v37;
            v51_.v52 = v48_.v49;
            if (v48_.v49 != 0) {
              v43 = (atomic_ullong*)(v48_.v49 + 8);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v48_.v49 + 8),
                                        1u, memory_order_relaxed);
              result =
                  (unsigned __int64)EffectModule_bd3360_alt1(v36, &v51_.v51);
            LABEL_94:
              if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)v42 + 16LL))(v42);
                result = std___1___shared_weak_count___release_weak(v42);
                v44 = v48_.v49;
                if (v48_.v49 != 0) {
                  goto LABEL_99;
                }
                goto LABEL_7;
              }
            }
            else {
              result =
                  (unsigned __int64)EffectModule_bd3360_alt1(v36, &v51_.v51);
            }
          LABEL_98:
            v44 = v48_.v49;
            if (v48_.v49 != 0) {
              goto LABEL_99;
            }
            goto LABEL_7;
          }
        }
        if (GameData_22400f8 != 0) {
          v37 = v48_.v48;
          if (*(_BYTE*)(GameData_22400f8 + 8) == 2) {
            goto LABEL_89;
          }
        }
        else {
          v37 = v48_.v48;
        }
        v42 = v48_.v49;
        v51_.v51 = v37;
        v51_.v52 = v48_.v49;
        if (v48_.v49 != 0) {
          v43 = (atomic_ullong*)(v48_.v49 + 8);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v48_.v49 + 8), 1u,
                                    memory_order_relaxed);
          result = GameRoutine_bd3660_alt1((__int64)v36, &v51_.v51);
          goto LABEL_94;
        }
        result = GameRoutine_bd3660_alt1((__int64)v36, &v51_.v51);
        v44 = v48_.v49;
        if (v48_.v49 != 0) {
        LABEL_99:
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v44 + 16LL))(v44);
            result = std___1___shared_weak_count___release_weak(v44);
          }
        }
      LABEL_7:
        if (++v6 == v45) {
          return result;
        }
      }
      if ((result | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (result | 7) + 1;
      }
      v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v12, 16, 0);
      v48_.v49 = v10;
      v48_.v50 = v11;
      v48_.v48 = v12 | 1;
    LABEL_16:
      result = memmove(v11, v8, v10);
      goto LABEL_17;
    }
  }
  return result;
}

#pragma GCC visibility pop
