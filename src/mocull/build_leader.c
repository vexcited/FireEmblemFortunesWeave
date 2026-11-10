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
__int64 BuildLeader_Unknown2(__int64 a1);
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
__int64 BuildLeader_193c620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
__attribute__((swiftcall)) void
BuildLeader_193c980(PSEUDO_X8 x8_, __int64 result, __int64* a2);
__int64 BuildLeader_Unknown4(__int64 a1);
__int64 BuildLeader_193cbc0(__int64* a1, __int64 a2);

__int64 BuildLeader_193c620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;

  memset(a1 + 8, 0, 473, a4, a5, a6);
  *(_QWORD*)(a1 + 488) = a3;
  *(_QWORD*)a1 = mocull_BuildLeader_vtable;
  memset(a1 + 496, 0, 640, v9, v10, v11);
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
  nn_os_InitializeMessageQueue(a1 + 1168, a1 + 1136, 4);
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  fw_world_InitializeWorker(a1, 536870923, a2);
  return nn_os_StartThread(a1 + 32);
}

__int64 BuildLeader_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  nn_os_SendMessageQueue(a1 + 1168, 0);
  nn_os_WaitThread(a1 + 32);
  *(_BYTE*)(a1 + 480) = 0;
  GameRoutine_19449a0(GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  nn_os_DestroyThread(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3);
  }
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_FinalizeMessageQueue(a1 + 1168);
  nn_os_FinalizeLightEvent(a1 + 1112);
  v4 = *(_QWORD*)(a1 + 984);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  nn_os_FinalizeLightEvent(a1 + 952);
  v5 = *(_QWORD*)(a1 + 824);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  nn_os_FinalizeLightEvent(a1 + 792);
  v6 = *(_QWORD*)(a1 + 664);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  result = nn_os_FinalizeLightEvent(a1 + 632);
  v8 = *(_QWORD*)(a1 + 504);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
  }
  return result;
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

__int64 BuildLeader_193cbc0(__int64* a1, __int64 a2)
{
  _QWORD* v4;
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      736, 16, 0);
  memset(v5 + 8, 0, 473, v6, v7, v8);
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
  fw_world_InitializeWorker(v5, 0x12000000BLL, a2);
  nn_os_InitializeLightEvent(v5 + 484, 0, 1);
  nn_os_InitializeLightEvent(v5 + 496, 1, 0);
  nn_os_StartThread(v5 + 32);
  v9 = *a1;
  *a1 = v5;
  if (v9 != 0) {
    BuildWorker_Unknown2(v9);
    v10 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v10);
  }
  v11 = fw_memory_HeapManager_Allocate(*v4, 736, 16, 0);
  memset(v11 + 8, 0, 473, v12, v13, v14);
  *(_QWORD*)v11 = mocull_BuildWorker_vtable;
  *(_QWORD*)(v11 + 512) = 0;
  *(_QWORD*)(v11 + 520) = 0;
  *(_QWORD*)(v11 + 528) = 0;
  *(_QWORD*)(v11 + 536) = 0;
  *(_QWORD*)(v11 + 544) = 0x78000000000LL;
  *(_DWORD*)(v11 + 552) = 1080;
  *(_QWORD*)(v11 + 560) = 0;
  *(_QWORD*)(v11 + 568) = 0;
  *(_QWORD*)(v11 + 576) = 0;
  *(_QWORD*)(v11 + 584) = 0;
  *(_QWORD*)(v11 + 592) = 0;
  *(_QWORD*)(v11 + 600) = 0;
  *(_QWORD*)(v11 + 608) = 0;
  *(_QWORD*)(v11 + 616) = 0;
  *(_QWORD*)(v11 + 624) = 0;
  *(_QWORD*)(v11 + 632) = 0;
  *(_QWORD*)(v11 + 640) = 0;
  *(_QWORD*)(v11 + 648) = 0;
  *(_QWORD*)(v11 + 656) = 0;
  *(_QWORD*)(v11 + 664) = 0;
  *(_QWORD*)(v11 + 672) = 0;
  *(_QWORD*)(v11 + 680) = 0;
  *(_QWORD*)(v11 + 688) = 0;
  *(_QWORD*)(v11 + 696) = 0;
  *(_DWORD*)(v11 + 704) = 1036831949;
  *(_BYTE*)(v11 + 720) = 0;
  fw_world_InitializeWorker(v11, 0x22000000BLL, a2);
  nn_os_InitializeLightEvent(v11 + 484, 0, 1);
  nn_os_InitializeLightEvent(v11 + 496, 1, 0);
  nn_os_StartThread(v11 + 32);
  v15 = a1[1];
  a1[1] = v11;
  if (v15 != 0) {
    BuildWorker_Unknown2(v15);
    v16 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v16);
  }
  v17 = fw_memory_HeapManager_Allocate(*v4, 1264, 16, 0);
  result = BuildLeader_193c620(v17, a2, (__int64)a1, v18, v19, v20);
  v22 = a1[2];
  a1[2] = v17;
  if (v22 != 0) {
    BuildLeader_Unknown2_alt1(v22);
    v23 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v4 + v23);
  }
  return result;
}

#pragma GCC visibility pop
