#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f59d40(_QWORD);
extern __int64 (*game_map_MapDrawOutlineBmap_vtable[])();
__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MapDrawOutlineBmap_DeletingDestructor(_QWORD* a1);
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f59e80(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 MapDrawOutlineBmap_f59960(__int64 a1, __int64 a2);

__int64 MapDrawOutlineBmap_f59960(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  int v21;
  unsigned __int64 v22;
  unsigned __int64* v23;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v5 = *(_QWORD*)(a1 + 8);
  v22 = v4;
  if (v5 == 0) {
  LABEL_12:
    v23 = &v22;
    v9 = GameRoutine_f59e80(a1, &v22, &v23);
    v10 = v9;
    *(_DWORD*)(v9 + 56) = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(v9 + 60) = *(_DWORD*)(a2 + 12);
    *(_OWORD*)(v9 + 64) = *(_OWORD*)(a2 + 16);
    *(_OWORD*)(v9 + 80) = *(_OWORD*)(a2 + 32);
    *(_OWORD*)(v9 + 96) = *(_OWORD*)(a2 + 48);
    *(_OWORD*)(v9 + 112) = *(_OWORD*)(a2 + 64);
    *(_QWORD*)(v9 + 136) = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v9 + 128) = *(_QWORD*)(a2 + 80);
    if (v9 + 48 != a2) {
      GameRoutine_f155c0(v9 + 144);
      CharacterController_d42d20(
          v10 + 168, *(_QWORD*)(a2 + 120), *(_QWORD*)(a2 + 128),
          (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
    }
    v11 = *(_DWORD*)(a2 + 144);
    v23 = &v22;
    *(_DWORD*)(v10 + 192) = v11;
    *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
    v12 = *(_OWORD*)(v10 + 192);
    *((_QWORD*)&v12 + 1) = *(unsigned int*)(a2 + 152);
    *(_OWORD*)(v10 + 192) = v12;
    *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
    *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
    *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
    *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
    v13 = *(_OWORD*)(v10 + 224);
    *((_QWORD*)&v13 + 1) = *(unsigned int*)(a2 + 184);
    *(_OWORD*)(v10 + 224) = v13;
    v14 = *(_QWORD*)(a2 + 232);
    v15 = *(_DWORD*)(a2 + 240);
    *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v10 + 280) = v14;
    *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
    v16 = *(_QWORD*)(a2 + 192);
    *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
    *(_QWORD*)(v10 + 240) = v16;
    v17 = *(_QWORD*)(a2 + 224);
    *(_DWORD*)(v10 + 288) = v15;
    *(_QWORD*)(v10 + 272) = v17;
    *(_QWORD*)(v10 + 296) = *(_QWORD*)(a2 + 248);
    v5 = GameRoutine_f59e80(a1, &v22, &v23);
    *(_BYTE*)(v5 + 272) = 1;
    v18 = v5 + 48;
    v19 = *(_QWORD*)(v5 + 48);
    goto LABEL_16;
  }
  v6 = (_QWORD*)v5;
  while (1) {
    v7 = v6[4];
    if (v4 >= v7) {
      break;
    }
  LABEL_3:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_12;
    }
  }
  if (v7 < v4) {
    ++v6;
    goto LABEL_3;
  }
  while (1) {
    while (1) {
      v8 = *(_QWORD*)(v5 + 32);
      if (v4 >= v8) {
        break;
      }
      v5 = *(_QWORD*)v5;
      if (v5 == 0) {
        goto LABEL_11;
      }
    }
    if (v8 >= v4) {
      break;
    }
    v5 = *(_QWORD*)(v5 + 8);
    if (v5 == 0) {
    LABEL_11:
      String_60a250("map::at:  key not found");
    }
  }
  v18 = v5 + 48;
  v19 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
LABEL_16:
  result = (*(__int64 (**)(__int64))(v19 + 48))(v18);
  if ((result & 1) != 0) {
    v21 = 1036831949;
  }
  else {
    v21 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v21;
  return result;
}

__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineBmap_vtable;
  return GameRoutine_f59d40(a1[3]);
}

__n128 MapDrawOutlineBmap_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapDrawOutlineBmap_vtable;
  GameRoutine_f59d40(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
