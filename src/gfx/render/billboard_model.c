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
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_a67640(_QWORD, _QWORD);
__int64 GameRoutine_a677e0(_QWORD, _QWORD);
__int64 GameRoutine_a67980(_QWORD, _QWORD);
__int64 GameRoutine_adc200(__int64, __int64, __int64, __int64, unsigned __int64,
                           __int64, unsigned __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fd17c0[])();
extern __int64 (*GameData_1fd1810[])();
extern __int64 fw_memory_g_heap_manager;
__int64 gfx_render_BillboardModel_BillboardModel(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3,
                                                 __int64 a4,
                                                 unsigned __int64 a5,
                                                 __int64* a6);
void gfx_render_BillboardModel_BillboardModel_lambda0_Invoke(__int64 a1,
                                                             _WORD* a2);

__int64 gfx_render_BillboardModel_BillboardModel(__int64 a1, __int64 a2,
                                                 unsigned __int64 a3,
                                                 __int64 a4,
                                                 unsigned __int64 a5,
                                                 __int64* a6)
{
  __int64* v6;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  _QWORD v32[4];
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;

  *(_QWORD*)(a1 + 128) = 0;
  v6 = (__int64*)(a1 + 128);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 36) = 0;
  *(_BYTE*)(a1 + 32) = 1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)a1 = gfx_render_BillboardModel_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  GameRoutine_604020(a1 + 248);
  v6[30] = -1;
  v14 = *a6;
  v13 = a6[1];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 112) = v14;
  *(_QWORD*)(a1 + 120) = v13;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = game_g_frame_clock_ptr[0];
  v34 = a4;
  v35 = a5;
  v32[0] = a2;
  v32[1] = a3;
  v17 = *game_g_frame_clock_ptr[0];
  v18 = GameRoutine_a67640(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 13416), v32);
  if (v18 != 0 &&
      (v19 = v18, (v20 = GameRoutine_a677e0(v18 + 40, &v34)) != 0) &&
      (v21 = v20 + 40, (v22 = GameRoutine_a67980(
                            v19 + 80, *(_QWORD*)(v20 + 40) + 32LL)) != 0)) {
    v23 = v22;
    v24 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 440,
                                                  16, 0);
    v25 = v34;
    v26 = v35;
    v27 = v24 + 3;
    v28 = v24;
    v24[1] = 0;
    v24[2] = 0;
    *v24 = GameData_1fd17c0;
    GameRoutine_adc200((__int64)(v24 + 3), v23 + 40, 0, a2, a3, v25, v26, v21);
  }
  else {
    v27 = nullptr;
    v28 = nullptr;
  }
  v29 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 184) = v27;
  *(_QWORD*)(a1 + 192) = v28;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  DecalObject_a91100(v6, *(_QWORD*)(v17 + 312),
                     *(_QWORD*)(*(_QWORD*)(v17 + 552) + 16LL), 48);
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v32[0] = GameData_1fd1810;
  v33 = v32;
  GameRoutine_5fc230(&v34);
  if (v33 != nullptr) {
    (*(void (**)(_QWORD*, __int64*))(*v33 + 48LL))(v33, &v34);
  }
  GameRoutine_604060(v6 + 15, *v16 + 568, &v34);
  *(_QWORD*)(a1 + 368) = GameRoutine_615760(*(_QWORD*)(*v16 + 552), v6 + 15);
  result = (__int64)v33;
  if (v33 == v32) {
    v31 = 32;
  }
  else {
    if (v33 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v33 + v31))(v33);
}

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

void gfx_render_BillboardModel_BillboardModel_lambda0_Invoke(__int64 a1,
                                                             _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

#pragma GCC visibility pop
