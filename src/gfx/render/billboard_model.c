#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
extern __int64 (*gfx_render_BillboardModel_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
__int64 BillboardModel_Destructor(__int64 a1);
__int64 BillboardModel_Unknown11(__int64 a1, __int64* a2);
__int64 BillboardModel_Unknown12(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned int a5, unsigned int a6);

__int64 BillboardModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = gfx_render_BillboardModel_vtable;
  GameRoutine_6040f0(a1 + 248, game_g_frame_clock + 568);
  GameRoutine_604050(a1 + 248);
  v2 = *(_QWORD*)(a1 + 192);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 136) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  result = *(_QWORD*)(a1 + 120);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v6 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v6 != 0) {
    *(_QWORD*)(a1 + 88) = v6;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

__int64 BillboardModel_Unknown11(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v5;
  _UNKNOWN** v6;
  _UNKNOWN** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)(__int64, __int64, __int64, __int64, __int64);
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *a2;
  v5 = game_g_frame_clock_ptr[0];
  v6 = GameData_212e4d8[0];
  v7 = GameData_212e4e0;
  if (*(_BYTE*)(a1 + 216) == 1) {
    v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256) + 8LL,
        *(unsigned int*)(a1 + 208), *(unsigned int*)(a1 + 368));
    ((void (*)(__int64, __int64, _QWORD, __int64))*v7)(v2 + 8, 1, 0, v8);
  }
  if (*(_BYTE*)(a1 + 240) == 1) {
    v9 = ((__int64 (*)(__int64, _QWORD, _QWORD))*v6)(
        *(_QWORD*)(*v5 + 256) + 8LL, *(unsigned int*)(a1 + 232),
        *(unsigned int*)(a1 + 368));
    ((void (*)(__int64, __int64, __int64, __int64))*v7)(v2 + 8, 1, 1, v9);
  }
  v10 = a1 + 16LL * *(int*)(a1 + 144);
  v11 = *(_QWORD*)(v10 + 152);
  v12 = *(_QWORD*)(v10 + 160);
  v13 = (__int64 (**)(__int64, __int64, __int64, __int64,
                      __int64))GameData_212e3b0[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64))GameData_212e3b0[0])(
      v2 + 8, 0, 4, v11, v12);
  result = (*v13)(v2 + 8, 1, 4, v11, v12);
  v15 = *(_QWORD*)(a1 + 184);
  v16 = *(_QWORD*)(v15 + 8);
  if (v16 != 0 && *(_QWORD*)(v16 + 152) != *(_QWORD*)(v16 + 144)) {
    v17 = *a2;
    v18 = v15 + 16LL * *(int*)(v15 + 144);
    v19 = *(_QWORD*)(v18 + 152);
    v20 = *(_QWORD*)(v18 + 160);
    (*v13)(v17 + 8, 0, 5, v19, v20);
    return (*v13)(v17 + 8, 1, 5, v19, v20);
  }
  return result;
}

__int64 BillboardModel_Unknown12(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 unsigned int a5, unsigned int a6)
{
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 2);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 280LL))(*a2, 4, 0, a5, a6);
}

#pragma GCC visibility pop
