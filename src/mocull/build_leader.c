#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_FinalizeMessageQueue(_QWORD);
__int64 nn_os_SendMessageQueue(_QWORD, _QWORD);
__int64 nn_os_WaitThread(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 BuildLeader_Unknown2_alt3(__int64 a1) __asm__("BuildLeader_Unknown2");
__int64 BuildLeader_Unknown2_alt1(_QWORD) __asm__("BuildLeader_Unknown2");
__int64 BuildWorker_Unknown2(_QWORD);
__int64 GameRoutine_19421e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_InitializeWorker(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_InitializeLightEvent(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMessageQueue(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ReceiveMessageQueue(_QWORD, _QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_StartThread(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*mocull_BuildLeader_vtable[])();
extern __int64 (*mocull_BuildWorker_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BuildLeader_193c620_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5,
                                 __int64 a6) __asm__("BuildLeader_193c620");
__attribute__((swiftcall)) void
BuildLeader_193c980(PSEUDO_X8 x8_, __int64 result, __int64* a2);
__int64 BuildLeader_Unknown4(__int64 a1);
__int64 BuildLeader_193cbc0_alt1(__int64* a1,
                                 __int64 a2) __asm__("BuildLeader_193cbc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_InitializeMessageQueue_alt1(
    __int64, __int64, unsigned __int64) __asm__("nn_os_InitializeMessageQueue");
__int64 nn_os_StartThread_alt1(__int64) __asm__("nn_os_StartThread");
void BuildLeader_Unknown2_alt2(__int64) __asm__("BuildLeader_Unknown2");
void BuildWorker_Unknown2_alt1(__int64) __asm__("BuildWorker_Unknown2");
void fw_world_InitializeWorker_alt1(__int64, __int64, __int64) __asm__(
    "fw_world_InitializeWorker");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 BuildLeader_193c620(__int64 a1, __int64 a2, __int64 a3);
void BuildLeader_193cbc0(__int64* a1, __int64 a2);
__int64 Executor_19449a0(_QWORD*, __int64);
__int64
nn_os_SendMessageQueue_alt1(__int64,
                            unsigned __int64) __asm__("nn_os_SendMessageQueue");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void BuildLeader_Unknown2(__int64 a1);

__int64 BuildLeader_193c620(__int64 a1, __int64 a2, __int64 a3)
{
  memset_alt1(a1 + 8, 0, 0x1D9u);
  *(_QWORD*)(a1 + 488) = a3;
  *(_QWORD*)a1 = mocull_BuildLeader_vtable;
  memset_alt1(a1 + 496, 0, 0x280u);
  *(_QWORD*)(a1 + 624) = 10000;
  nn_os_InitializeLightEvent(a1 + 632, 1, 0);
  *(_DWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 784) = 10000;
  nn_os_InitializeLightEvent(a1 + 792, 1, 0);
  *(_DWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 944) = 10000;
  nn_os_InitializeLightEvent(a1 + 952, 1, 0);
  *(_DWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1104) = 10000;
  nn_os_InitializeLightEvent(a1 + 1112, 1, 0);
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  nn_os_InitializeMessageQueue_alt1(a1 + 1168, a1 + 1136, 4u);
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  fw_world_InitializeWorker_alt1(a1, 536870923, a2);
  return nn_os_StartThread_alt1(a1 + 32);
}

void BuildLeader_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  nn_os_SendMessageQueue_alt1(a1 + 1168, 0);
  nn_os_WaitThread(a1 + 32);
  *(_BYTE*)(a1 + 480) = 0;
  Executor_19449a0((_QWORD*)GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  nn_os_DestroyThread(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v3, v2);
  }
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_FinalizeMessageQueue(a1 + 1168);
  nn_os_FinalizeLightEvent(a1 + 1112);
  v4 = *(_QWORD*)(a1 + 984);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
  }
  nn_os_FinalizeLightEvent(a1 + 952);
  v5 = *(_QWORD*)(a1 + 824);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  nn_os_FinalizeLightEvent(a1 + 792);
  v6 = *(_QWORD*)(a1 + 664);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  nn_os_FinalizeLightEvent(a1 + 632);
  v7 = *(_QWORD*)(a1 + 504);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  v8 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v9, v8);
  }
}

__attribute__((swiftcall)) void BuildLeader_193c980(PSEUDO_X8 x8_,
                                                    __int64 result, __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;

  v4 = atomic_load((unsigned __int64*)(result + 1248));
  if (v4 <= 3) {
    v6 = *(_QWORD*)(result + 1240);
    v7 = result;
    v5 = result + 160 * (v6 & 3) + 496;
    v9 = *a2;
    v8 = a2[1];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *(_QWORD*)(result + 160 * (v6 & 3) + 504);
    *(_QWORD*)v5 = v9;
    *(_QWORD*)(result + 160 * (v6 & 3) + 504) = v8;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
      a2 = v11;
    }
    *(_QWORD*)(v5 + 24) = a2[3];
    v12 = a2[2];
    *(_QWORD*)(v5 + 32) = a2[4];
    *(_QWORD*)(v5 + 16) = v12;
    *(_OWORD*)(v5 + 48) = *((_OWORD*)a2 + 3);
    *(_OWORD*)(v5 + 64) = *((_OWORD*)a2 + 4);
    *(_OWORD*)(v5 + 80) = *((_OWORD*)a2 + 5);
    *(_OWORD*)(v5 + 96) = *((_OWORD*)a2 + 6);
    v13 = *((_DWORD*)a2 + 28);
    *(_QWORD*)(v5 + 128) = v6;
    *(_DWORD*)(v5 + 112) = v13;
    nn_os_ClearLightEvent(v5 + 136);
    result = nn_os_SendMessageQueue(v7 + 1168, v5);
    atomic_fetch_add((atomic_ullong* volatile)(v7 + 1248), 1u);
    *(_QWORD*)(v7 + 1240) = (*(_QWORD*)(v7 + 1240) + 1LL) % 0x2710uLL;
  }
  else {
    v5 = 0;
    v6 = 10000;
  }
  *a3 = v5;
  a3[1] = v6;
  {
    result;
    return;
  }
}

__int64 BuildLeader_Unknown4(__int64 a1)
{
  __int64 result;
  _QWORD* i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  v7 = nullptr;
  result = nn_os_ReceiveMessageQueue(&v7, a1 + 1168);
  for (i = v7; v7 != nullptr; i = v7) {
    GameRoutine_19421e0(&v8, *(_QWORD*)(a1 + 488), i);
    v8 = 0;
    v9 = 0;
    v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)i);
    *i = 0;
    i[1] = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    v4 = v8;
    v5 = v9;
    *(_QWORD*)((char*)GameRoutine_20 + (_QWORD)i) = 0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)i) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)i) = v4;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)i + 8) = v5;
    nn_os_SignalLightEvent(i + 17);
    atomic_fetch_add((atomic_ullong* volatile)(a1 + 1248),
                     0xFFFFFFFFFFFFFFFFLL);
    v7 = nullptr;
    result = nn_os_ReceiveMessageQueue(&v7, a1 + 1168);
  }
  return result;
}

void BuildLeader_193cbc0(__int64* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 736, 16, 0);
  memset_alt1(v5 + 8, 0, 0x1D9u);
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 520) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0x78000000000LL;
  *(_QWORD*)v5 = mocull_BuildWorker_vtable;
  *(_DWORD*)(v5 + 552) = 1080;
  *(_QWORD*)(v5 + 560) = 0;
  *(_QWORD*)(v5 + 568) = 0;
  *(_QWORD*)(v5 + 576) = 0;
  *(_QWORD*)(v5 + 584) = 0;
  *(_QWORD*)(v5 + 592) = 0;
  *(_QWORD*)(v5 + 600) = 0;
  *(_QWORD*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 640) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 696) = 0;
  *(_DWORD*)(v5 + 704) = 1036831949;
  *(_BYTE*)(v5 + 720) = 0;
  fw_world_InitializeWorker_alt1(v5, 0x12000000BLL, a2);
  nn_os_InitializeLightEvent(v5 + 484, 0, 1);
  nn_os_InitializeLightEvent(v5 + 496, 1, 0);
  nn_os_StartThread_alt1(v5 + 32);
  v6 = *a1;
  *a1 = v5;
  if (v6 != 0) {
    BuildWorker_Unknown2_alt1(v6);
    v7 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v7, v6);
  }
  v8 = fw_memory_HeapManager_Allocate_alt1(*v4, 736, 16, 0);
  memset_alt1(v8 + 8, 0, 0x1D9u);
  *(_QWORD*)v8 = mocull_BuildWorker_vtable;
  *(_QWORD*)(v8 + 512) = 0;
  *(_QWORD*)(v8 + 520) = 0;
  *(_QWORD*)(v8 + 528) = 0;
  *(_QWORD*)(v8 + 536) = 0;
  *(_QWORD*)(v8 + 544) = 0x78000000000LL;
  *(_DWORD*)(v8 + 552) = 1080;
  *(_QWORD*)(v8 + 560) = 0;
  *(_QWORD*)(v8 + 568) = 0;
  *(_QWORD*)(v8 + 576) = 0;
  *(_QWORD*)(v8 + 584) = 0;
  *(_QWORD*)(v8 + 592) = 0;
  *(_QWORD*)(v8 + 600) = 0;
  *(_QWORD*)(v8 + 608) = 0;
  *(_QWORD*)(v8 + 616) = 0;
  *(_QWORD*)(v8 + 624) = 0;
  *(_QWORD*)(v8 + 632) = 0;
  *(_QWORD*)(v8 + 640) = 0;
  *(_QWORD*)(v8 + 648) = 0;
  *(_QWORD*)(v8 + 656) = 0;
  *(_QWORD*)(v8 + 664) = 0;
  *(_QWORD*)(v8 + 672) = 0;
  *(_QWORD*)(v8 + 680) = 0;
  *(_QWORD*)(v8 + 688) = 0;
  *(_QWORD*)(v8 + 696) = 0;
  *(_DWORD*)(v8 + 704) = 1036831949;
  *(_BYTE*)(v8 + 720) = 0;
  fw_world_InitializeWorker_alt1(v8, 0x22000000BLL, a2);
  nn_os_InitializeLightEvent(v8 + 484, 0, 1);
  nn_os_InitializeLightEvent(v8 + 496, 1, 0);
  nn_os_StartThread_alt1(v8 + 32);
  v9 = a1[1];
  a1[1] = v8;
  if (v9 != 0) {
    BuildWorker_Unknown2_alt1(v9);
    v10 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v10, v9);
  }
  v11 = fw_memory_HeapManager_Allocate_alt1(*v4, 1264, 16, 0);
  BuildLeader_193c620(v11, a2, (__int64)a1);
  v12 = a1[2];
  a1[2] = v11;
  if (v12 != 0) {
    BuildLeader_Unknown2_alt2(v12);
    v13 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v13, v12);
  }
}

#pragma GCC visibility pop
