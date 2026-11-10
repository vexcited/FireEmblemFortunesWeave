#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*gfx_render_DecalObject_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 DecalObject_Destructor(__int64 a1);
__int64 GameRoutine_5de60(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
struct PseudoSret GameRoutine_53bd0(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 DecalObject_a91100(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
void gfx_render_DecalObject_DecalObject_lambda0_Invoke(__int64 a1, _WORD* a2);
__int64 gfx_render_DecalObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2);

__int64 DecalObject_a91100(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
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
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v18 = a4;
  v19 = a2;
  v17 = 3;
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v6 = v20;
  v7 = *a1;
  v20 = 0;
  *a1 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v20;
    v20 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v9 = v20;
  v10 = a1[1];
  v20 = 0;
  a1[1] = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    v11 = v20;
    v20 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[4] = v13;
  v14 = *a1;
  a1[3] = v12;
  GameRoutine_5de60(a1 + 3, v14);
  a1[5] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[6] = v15;
  return GameRoutine_5de60(a1 + 5, a1[1]);
}

__int64 DecalObject_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = gfx_render_DecalObject_vtable;
  GameRoutine_6040f0(a1 + 288, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 288);
  v2 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 88) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

void gfx_render_DecalObject_DecalObject_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

__int64 gfx_render_DecalObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)(__int64, __int64, __int64, __int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  int v13;
  unsigned int v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v5 = v2 + 16LL * *(int*)(v2 + 128);
  v6 = *(_QWORD*)(v5 + 136);
  v7 = *(_QWORD*)(v5 + 144);
  v8 = (__int64 (**)(__int64, __int64, __int64, __int64,
                     __int64))GameData_212e3b0[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64))GameData_212e3b0[0])(
      *a2 + 8LL, 0, 2, v6, v7);
  v9 = (*v8)(v3 + 8, 1, 2, v6, v7);
  if ((*(_BYTE*)(v2 + 264) & 1) == 0) {
    GameRoutine_8123d0(v9);
  }
  v10 = *a2;
  v11 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256) + 8LL,
      *(unsigned int*)(v2 + 256), *(unsigned int*)(v2 + 408));
  result = ((__int64 (*)(__int64, __int64, _QWORD, __int64))*GameData_212e4e0)(
      v10 + 8, 1, 0, v11);
  v13 = *(_DWORD*)(v2 + 424);
  if (v13 == 0) {
    v14 = 14;
    v15 = 2;
    goto LABEL_6;
  }
  if (v13 == 1) {
    v14 = 3;
    v15 = 1;
  LABEL_6:
    (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, v15);
    return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 272LL))(
        *a2, v14, 0);
  }
  return result;
}

#pragma GCC visibility pop
