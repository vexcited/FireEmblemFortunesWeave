#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c555b0(__int64, __int64);
__int64 GameHr_a99910(__int64 result, __int64, __int64, int);
__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern _UNKNOWN GameData_1c1fff8;
extern _UNKNOWN GameData_1c20018;
extern _UNKNOWN GameData_226b918;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82fa0;
extern __int64 (*gfx_render_SphereCulling_vtable[])();
extern __int64 GameData_226b8f8;
extern __int64 GameData_226b900;
extern __int64 GameData_226b908;
extern __int64 GameData_226b910;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a71b20();
void __attribute__((noreturn)) GameRoutine_a71b40();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void memory_a6eb40(int* a1, __int64 a2, int* a3);

void memory_a6eb40(int* a1, __int64 a2, int* a3)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char* v19;
  __int64 v20;
  int v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int i;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  signed __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64* v41;

  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *a1 = *a3;
  a1[1] = a3[1];
  *((_QWORD*)a1 + 1) = &GameData_1c1fff8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b918,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_226b918) != 0) {
    GameData_226b908 = 0;
    GameData_226b910 = 0;
    GameData_226b8f8 = (__int64)&GameData_1c20018;
    GameData_226b900 = 0;
    GameRoutine_2b0(),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    __cxa_guard_release((__int64)&GameData_226b918),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  *((_QWORD*)a1 + 2) = &GameData_226b8f8;
  *((_QWORD*)a1 + 3) = 0;
  *((_QWORD*)a1 + 4) = 0;
  *((_QWORD*)a1 + 5) = 0;
  {
    v5 = *a1;
    __asm__ volatile("" ::"r"(v5));
  }
  *((_WORD*)a1 + 25) = 0;
  *((_QWORD*)a1 + 7) = 0;
  *((_QWORD*)a1 + 8) = 0;
  *((_QWORD*)a1 + 9) = 0;
  *((_QWORD*)a1 + 11) = 0;
  *((_QWORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 13) = 0;
  *((_QWORD*)a1 + 14) = 0;
  *((_BYTE*)a1 + 48) = 1;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  *((_QWORD*)a1 + 15) = 0;
  *((_QWORD*)a1 + 16) = 0;
  if ((_DWORD)v5 != 0) {
    if ((v5 & 0x80000000) != 0) {
      GameRoutine_a71b20(),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    v7 = fw_memory_HeapManager_Allocate(*v6, 48 * v5, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *((_QWORD*)a1 + 14) = v7;
    *((_QWORD*)a1 + 16) = v7 + 48 * v5;
    memset(v7, 0, 48 * ((48 * v5 - 48) / 0x30uLL) + 48),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *((_QWORD*)a1 + 15) = v7 + 48 * ((48 * v5 - 48) / 0x30uLL) + 48;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        4 * v5, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v9 = v8 + 4 * v5;
    *((_QWORD*)a1 + 17) = v8;
    *((_QWORD*)a1 + 19) = v9;
    memset(v8, 0, 4 * v5),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *((_QWORD*)a1 + 18) = v9;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v5, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *((_QWORD*)a1 + 20) = v10;
    *((_QWORD*)a1 + 22) = v10 + 24 * v5;
    memset(v10, 0, 24 * ((24 * v5 - 24) / 0x18uLL) + 24),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v11 = v10 + 24 * ((24 * v5 - 24) / 0x18uLL) + 24;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    *((_QWORD*)a1 + 21) = v11;
  }
  else {
    *((_QWORD*)a1 + 21) = 0;
    *((_QWORD*)a1 + 22) = 0;
    *((_QWORD*)a1 + 19) = 0;
    *((_QWORD*)a1 + 20) = 0;
    *((_QWORD*)a1 + 17) = 0;
    *((_QWORD*)a1 + 18) = 0;
  }
  {
    v12 = *v6;
    __asm__ volatile("" ::"r"(v12));
  }
  *((_QWORD*)a1 + 23) = 0;
  *((_QWORD*)a1 + 34) = 0;
  *((_QWORD*)a1 + 35) = 0;
  *((_QWORD*)a1 + 32) = 0;
  *((_QWORD*)a1 + 33) = 0;
  *((_QWORD*)a1 + 30) = 0;
  *((_QWORD*)a1 + 31) = 0;
  *((_QWORD*)a1 + 28) = 0;
  *((_QWORD*)a1 + 29) = 0;
  *((_QWORD*)a1 + 26) = 0;
  *((_QWORD*)a1 + 27) = 0;
  v41 = (__int64*)(a1 + 46);
  *((_QWORD*)a1 + 24) = 0;
  *((_QWORD*)a1 + 25) = 0;
  v13 = fw_memory_HeapManager_Allocate(v12, 1024, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_BYTE*)(v13 + 8) = 0;
  *(_BYTE*)(v13 + 24) = 0;
  *(_BYTE*)(v13 + 32) = 0;
  *(_BYTE*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 160) = 0x3F80000000000000LL;
  *(_QWORD*)(v13 + 168) = 0x3F8000003F800000LL;
  *(_QWORD*)(v13 + 344) = 0x3F80000000000000LL;
  *(_QWORD*)(v13 + 352) = 0x3F8000003F800000LL;
  *(_DWORD*)v13 = 1;
  *(_BYTE*)(v13 + 56) = 0;
  *(_BYTE*)(v13 + 72) = 0;
  *(_BYTE*)(v13 + 80) = 0;
  *(_BYTE*)(v13 + 96) = 0;
  *(_BYTE*)(v13 + 104) = 0;
  *(_BYTE*)(v13 + 120) = 0;
  *(_BYTE*)(v13 + 128) = 0;
  *(_BYTE*)(v13 + 144) = 0;
  *(_DWORD*)(v13 + 152) = 0;
  *(_WORD*)(v13 + 156) = 0;
  *(_QWORD*)(v13 + 176) = 1065353216;
  *(_BYTE*)(v13 + 184) = 0;
  *(_BYTE*)(v13 + 188) = 0;
  *(_BYTE*)(v13 + 192) = 0;
  *(_BYTE*)(v13 + 208) = 0;
  *(_BYTE*)(v13 + 216) = 0;
  *(_BYTE*)(v13 + 232) = 0;
  *(_BYTE*)(v13 + 240) = 0;
  *(_BYTE*)(v13 + 256) = 0;
  *(_BYTE*)(v13 + 264) = 0;
  *(_BYTE*)(v13 + 280) = 0;
  *(_BYTE*)(v13 + 288) = 0;
  *(_BYTE*)(v13 + 304) = 0;
  *(_BYTE*)(v13 + 312) = 0;
  *(_BYTE*)(v13 + 328) = 0;
  *(_DWORD*)(v13 + 336) = 0;
  *(_WORD*)(v13 + 340) = 0;
  *(_QWORD*)(v13 + 360) = 1065353216;
  *(_BYTE*)(v13 + 368) = 0;
  *(_QWORD*)(v13 + 376) = 0x100010142C80000LL;
  *(_QWORD*)(v13 + 384) = 0;
  *(_BYTE*)(v13 + 372) = 0;
  *(_DWORD*)(v13 + 392) = -1;
  *(_DWORD*)(v13 + 416) = 1065353216;
  *(_QWORD*)(v13 + 448) = 0;
  *(_QWORD*)(v13 + 456) = 0;
  *(_QWORD*)(v13 + 432) = 0;
  *(_QWORD*)(v13 + 440) = 0;
  *(_DWORD*)(v13 + 480) = 0;
  *(_BYTE*)(v13 + 496) = 0;
  *(_BYTE*)(v13 + 512) = 0;
  *(_QWORD*)(v13 + 528) = 0;
  *(_DWORD*)(v13 + 536) = -1;
  *(_QWORD*)(v13 + 560) = 0;
  *(_DWORD*)(v13 + 568) = -1;
  *(_QWORD*)(v13 + 576) = 0;
  *(_DWORD*)(v13 + 584) = -1;
  *(_QWORD*)(v13 + 592) = 0;
  *(_QWORD*)(v13 + 600) = 0;
  *(_QWORD*)(v13 + 608) = 0;
  *(_QWORD*)(v13 + 616) = 0;
  *(_DWORD*)(v13 + 624) = 1065353216;
  *(_BYTE*)(v13 + 640) = 0;
  *(_QWORD*)(v13 + 672) = 0;
  *(_DWORD*)(v13 + 680) = -1;
  *(_QWORD*)(v13 + 688) = 0;
  *(_DWORD*)(v13 + 696) = -1;
  *(_DWORD*)(v13 + 704) = 0;
  *(_BYTE*)(v13 + 728) = 0;
  *(_QWORD*)(v13 + 744) = 0;
  *(_QWORD*)(v13 + 736) = 0;
  *(_QWORD*)(v13 + 768) = 0;
  *(_QWORD*)(v13 + 760) = 0;
  *(_QWORD*)(v13 + 776) = 0;
  *(_QWORD*)(v13 + 800) = 0;
  *(_QWORD*)(v13 + 792) = 0;
  *(_QWORD*)(v13 + 824) = 0;
  *(_QWORD*)(v13 + 816) = 0;
  *(_QWORD*)(v13 + 808) = 0;
  *(_BYTE*)(v13 + 832) = 1;
  *(_BYTE*)(v13 + 840) = 1;
  *(_BYTE*)(v13 + 848) = 1;
  *(_QWORD*)(v13 + 856) = a2;
  *(_OWORD*)(v13 + 400) = GameData_1a82fa0;
  *(_QWORD*)(v13 + 708) = 0x4100000000000000LL;
  *(_QWORD*)(v13 + 716) = 0x64437A0000LL;
  *(_DWORD*)(v13 + 724) = 1096810496;
  *(_QWORD*)(v13 + 752) = v13 + 760;
  *(_OWORD*)(v13 + 464) = GameData_1a82dd0;
  *(_QWORD*)(v13 + 784) = v13 + 792;
  *(_DWORD*)(v13 + 836) = 1056964608;
  *(_DWORD*)(v13 + 844) = 1056964608;
  *(_DWORD*)(v13 + 852) = 1056964608;
  GameRoutine_c555b0(v13 + 864, a2),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v14 = *v6;
    __asm__ volatile("" ::"r"(v14));
  }
  *(_QWORD*)(v13 + 1008) = 0;
  *(_DWORD*)(v13 + 1016) = -1;
  *((_QWORD*)a1 + 36) = v13;
  v15 = fw_memory_HeapManager_Allocate(v14, 152, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  GameHr_a99910(v15, a2, (__int64)a1, a1[1]),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v16 = *v6;
    __asm__ volatile("" ::"r"(v16));
  }
  *((_QWORD*)a1 + 37) = v15;
  a1[76] = -1;
  v17 = fw_memory_HeapManager_Allocate(v16, 48, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v18 = *((_BYTE*)a1 + 24);
    __asm__ volatile("" ::"r"(v18));
  }
  *(_BYTE*)(v17 + 8) = 1;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_DWORD*)(v17 + 32) = 1065353216;
  *((_QWORD*)a1 + 39) = v17;
  *((_BYTE*)a1 + 320) = 0;
  *(_QWORD*)v17 = gfx_render_SphereCulling_vtable;
  *(int*)((char*)a1 + 321) = 16843009;
  if ((v18 & 1) != 0) {
    *((_QWORD*)a1 + 4) = 16;
    {
      v19 = *((char**)a1 + 5);
      __asm__ volatile("" ::"r"(v19));
    }
  }
  else {
    *((_BYTE*)a1 + 24) = 32;
    v19 = (char*)a1 + 25;
  }
  strcpy(v19, "<untitled scene>");
  {
    v20 = *((_QWORD*)a1 + 23);
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v21 = a1[1];
    __asm__ volatile("" ::"r"(v21));
  }
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (0xCCCCCCCCCCCCCCCDLL * ((*((_QWORD*)a1 + 25) - v20) >> 2) < v21) {
    if (v21 < 0) {
    LABEL_35:
      GameRoutine_a71b40(),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    {
      v23 = *((_QWORD*)a1 + 24) - v20;
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         20LL * v21, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v25 = v24 + v23;
    v26 = v24 + 20LL * v21;
    memcpy(v24, v20, v23),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *((_QWORD*)a1 + 23) = v24;
    v22 = (__int64*)fw_memory_g_heap_manager_ptr;
    *((_QWORD*)a1 + 24) = v25;
    *((_QWORD*)a1 + 25) = v26;
    if (v20 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v27, v20),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      {
        v21 = a1[1];
        __asm__ volatile("" ::"r"(v21));
      }
    }
  }
  if (v21 >= 1) {
    {
      v28 = *((_QWORD*)a1 + 24);
      __asm__ volatile("" ::"r"(v28));
    }
    for (i = 0; i < v30; ++i) {
      {
        v31 = *((_QWORD*)a1 + 25);
        __asm__ volatile("" ::"r"(v31));
      }
      if (v28 < v31) {
        *(_DWORD*)v28 = i;
        *(_BYTE*)(v28 + 4) = 0;
        *(_BYTE*)(v28 + 8) = 0;
        *(_BYTE*)(v28 + 12) = 0;
        *(_BYTE*)(v28 + 16) = 0;
        v28 += 20LL;
      }
      else {
        {
          v32 = *v41;
          __asm__ volatile("" ::"r"(v32));
        }
        v33 = v28 - *v41;
        v34 = 0xCCCCCCCCCCCCCCCDLL * (v33 >> 2) + 1;
        if (v34 > 0xCCCCCCCCCCCCCCCLL) {
          goto LABEL_35;
        }
        v35 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v31 - v32) >> 2);
        if (2 * v35 > v34) {
          v34 = 2 * v35;
        }
        if (v35 >= 0x666666666666666LL) {
          v36 = 0xCCCCCCCCCCCCCCCLL;
        }
        else {
          v36 = v34;
        }
        if (v36 != 0) {
          if (v36 > 0xCCCCCCCCCCCCCCCLL) {
            GameRoutine_60a210(),
                v30 =
                    COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v37 = fw_memory_HeapManager_Allocate(*v22, 20 * v36, 16, 0),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else {
          v37 = 0;
        }
        v38 = v37 + v33;
        v39 = v37 + 20 * v36;
        *(_DWORD*)v38 = i;
        *(_BYTE*)(v38 + 4) = 0;
        *(_BYTE*)(v38 + 8) = 0;
        *(_BYTE*)(v38 + 12) = 0;
        v28 = v37 + v33 + 20;
        *(_BYTE*)(v38 + 16) = 0;
        memcpy(v37, v32, v33),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        *((_QWORD*)a1 + 23) = v37;
        *((_QWORD*)a1 + 24) = v28;
        *((_QWORD*)a1 + 25) = v39;
        v22 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v32 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v32),
              v30 = COERCE_AS(__typeof__(v30),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
      {
        v30 = a1[1];
        __asm__ volatile("" ::"r"(v30));
      }
      *((_QWORD*)a1 + 24) = v28;
    }
  }
}

#pragma GCC visibility pop
