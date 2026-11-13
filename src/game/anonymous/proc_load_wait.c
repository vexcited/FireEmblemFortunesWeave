#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, float32x4_t*,
                                      char) __asm__("Manager_bc6460");
__int64 Config_bc72a0(__int64 result, unsigned int);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_map_c218a0(_QWORD*, __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_anonymous_ProcLoadWait_vtable[])();
extern __int64* GameData_21309c8[5];
extern __int64* eft_g_effectSystem_ptr[3];
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
extern __int64 GameData_21c6978;
extern __int64 GameData_21f5250[];
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1a9f09e;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
__int64 ProcLoadWait_9a4300_alt1(__int64 result) __asm__("ProcLoadWait_9a4300");
__int64 ProcLoadWait_9a4d20(int a1, _QWORD* a2);
void ProcLoadWait_9a5560(__int64 a1, __int64 a2);
void Config_bc72a0_alt1(__int64, unsigned int) __asm__("Config_bc72a0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcLoadWait_9a4300(int a1);

void ProcLoadWait_9a4300(int a1)
{
  __int64* v1;
  __int64 i;
  unsigned int v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = &GameData_21f5250[5 * a1];
  for (i = v1[2]; i != 0; i = *(_QWORD*)i) {
    if (*(__int16*)(i + 26) >= 1) {
      v3 = *(__int16*)(i + 24);
      if ((v3 & 0x80000000) == 0) {
        Config_bc72a0_alt1(eft_g_effectSystem, v3);
      }
      *(_WORD*)(i + 26) = 0;
    }
  }
  if (v1[3] != 0) {
    v4 = (_QWORD*)v1[2];
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v7, (__int64)v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = v1[1];
    v1[2] = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*v1 + 8 * v10) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 8) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 16) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 24) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 32) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 40) = 0;
          *(_QWORD*)(*v1 + 8 * v10 + 48) = 0;
          v12 = *v1 + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*v1 + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    v1[3] = 0;
  }
}

__int64 ProcLoadWait_9a4d20(int a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  __int128 v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  struct {
    _QWORD v13[2];
    __int64 v14;
    int v15;
  } v13_;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 96);
  if (v3 == 0 || *(_DWORD*)(v3 + 240) != 5) {
    return 0;
  }
  v4 = (_QWORD*)(v2 + 120);
  while (1) {
    v4 = (_QWORD*)*v4;
    if (v4 == nullptr) {
      break;
    }
    if (*(_DWORD*)(v4[5] + 240LL) != 5) {
      return 0;
    }
  }
  LOWORD(v13_.v13[0]) = 0;
  v12 = a1;
  v13_.v15 = 1114636288;
  if (v13_.v13 != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      GameRoutine_64df20(v13_.v13, a2[2], a2[1]);
    }
    else {
      v6 = a2[1];
      v13_.v13[0] = *a2;
      v13_.v13[1] = v6;
      v13_.v14 = a2[2];
    }
  }
  v7 = 0x1.e000000000000p+4f;
  if (game_ProcFadeView_instance_ != 0) {
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                          v8 + 160, *((float*)&v9 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v7 = 0x0.0p+0f;
      }
      else {
        v7 = 0x1.e000000000000p+4f;
      }
    }
  }
  v13_.v15 = LODWORD(v7);
  v10 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v10 != nullptr) {
    wld_map_c218a0(v10, (__int64)&v12);
  }
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v13_.v14);
  }
  return 1;
}

void ProcLoadWait_9a5560(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned int v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  struct {
    __int64* v25;
    __int64 v26;
  } v25_;
  struct {
    float32x4_t v27;
    __int64 v28;
    int v29;
    char gap44_[4];
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v27_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      return;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return;
    }
  }
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(*GameData_21309c8[0] + 8) == 2) {
    return;
  }
  v27_.v27 = (__typeof__(v27_.v27)){0};
  v27_.v28 = a2;
  v8 = *((_QWORD*)GameData_212c540 + 1);
  v10 = *(_QWORD*)GameData_212c548;
  v9 = *((_QWORD*)GameData_212c548 + 1);
  v27_.v30 = *(_QWORD*)GameData_212c540;
  v27_.v31 = v8;
  v27_.v34 = v27_.v30;
  v27_.v35 = v8;
  v27_.v32 = v10;
  v27_.v33 = v9;
  v27_.v29 = 9;
  v11 = ({
    unsigned __int128 r_ =
        Manager_bc6460_pair(*(_QWORD**)eft_g_effectSystem_ptr[0], &v27_.v27, 0);
    v12 = COERCE_AS(__typeof__(v12), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameRoutine_14a10d0(&v25_.v25, (__int64)v11, v12, (__int64)&GameData_1a9f09e),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v25_.v25;
  v14 = *v25_.v25;
  if (*v25_.v25 == 0) {
    goto LABEL_26;
  }
  if (a1 == 0) {
    goto LABEL_26;
  }
  if (*(_DWORD*)(v14 + 16) != *((_DWORD*)v25_.v25 + 2)) {
    goto LABEL_26;
  }
  v15 = *(unsigned int*)(v14 + 36);
  if ((_DWORD)v15 == 0) {
    goto LABEL_26;
  }
  v16 = 0;
  while (1) {
    v17 = *(_QWORD*)(v14 + 40 + 8 * v16);
    if (v17 != 0) {
      break;
    }
  LABEL_20:
    if (++v16 >= v15) {
      goto LABEL_26;
    }
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v17 + 96LL))(v17) & 1) == 0) {
    v15 = *(unsigned int*)(v14 + 36);
    goto LABEL_20;
  }
  v18 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       176, 16, 0),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = GameData_212c608[0];
  *(_QWORD*)(v18 + 96) = 0;
  *(_QWORD*)(v18 + 104) = 0;
  *(_QWORD*)(v18 + 112) = 0;
  *(_QWORD*)(v18 + 120) = 0;
  *(_QWORD*)(v18 + 128) = 0;
  *(_WORD*)(v18 + 136) = 0;
  *(_QWORD*)(v18 + 16) = 0;
  *(_QWORD*)(v18 + 24) = "NULL";
  *(_QWORD*)(v18 + 138) = 0;
  *(_QWORD*)(v18 + 144) = 0;
  *(_QWORD*)(v18 + 32) = 0;
  *(_QWORD*)(v18 + 40) = 0;
  *(_QWORD*)(v18 + 48) = 0;
  *(_QWORD*)(v18 + 56) = 0;
  *(_QWORD*)(v18 + 64) = 0;
  *(_QWORD*)(v18 + 72) = 0;
  *(_QWORD*)(v18 + 80) = 0;
  *(_QWORD*)(v18 + 88) = 0;
  *(_QWORD*)v18 = v19 + 16;
  *(_QWORD*)(v18 + 8) = 0;
  game_ProcInst_Register(v18),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = v18;
  *(_QWORD*)v18 = game_anonymous_ProcLoadWait_vtable;
  v21 = *v13;
  v22 = v13[1];
  *(_DWORD*)(v18 + 168) = 0;
  *(_QWORD*)(v18 + 152) = v21;
  *(_QWORD*)(v18 + 160) = v22;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    v24 = __cxa_guard_acquire(&GameData_21c6868),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = v18;
    if (v24 != 0) {
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
      __cxa_guard_release(&GameData_21c6868),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = v18;
    }
  }
  ProcInst_657850(v20, (__int64)&GameData_21c67a8, (__int64)"ProcLoadWait", 1,
                  a1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_26:
  v23 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v23),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
