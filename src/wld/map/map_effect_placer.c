#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_198c1e0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_c24fe0(_QWORD);
__int64 GameRoutine_c25240(_QWORD, _QWORD);
__int64 GameRoutine_c253a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_211d628[])();
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3);
__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result);
__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result);

__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _DWORD* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v6 = 0x8E38E38E38E38E39LL * ((a2[1] - *a2) >> 5);
  v7 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v7 + 24);
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_c24fe0(v9);
  result = GameRoutine_c25240(v9 + 200, (int)v6);
  v11 = (_DWORD*)a2[9];
  v12 = (_DWORD*)a2[10];
  if (v11 != v12) {
    v13 = GameData_2131678 + 16;
    while (
        ((*(_QWORD*)(a2[3] + 8 * ((unsigned __int64)(unsigned int)*v11 >> 6)) >>
          *v11) &
         1) != 0) {
    LABEL_5:
      if (++v11 == v12) {
        goto LABEL_22;
      }
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v13;
    v15 = *a2;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
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
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    v25 = v14;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_QWORD*)(v14 + 24) = 0;
    v24 = v14 + 24;
    result =
        GameRoutine_198c1e0(a1, &v24, v15 + 288LL * (unsigned int)*v11, a3);
    if ((result & 1) == 0) {
    LABEL_19:
      v21 = v25;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      goto LABEL_5;
    }
    v16 = *(_QWORD*)(a1 + 8);
    v17 = *(_QWORD*)(v16 + 24);
    v18 = *(_QWORD*)(v16 + 32);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    v19 = (unsigned int)*v11;
    v23 = v22;
    v22[0] = GameData_211d628;
    v22[1] = a2;
    v22[2] = v19;
    GameRoutine_c253a0(v17, &v24, v22);
    result = (__int64)v23;
    if (v23 == v22) {
      v20 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_15;
      }
      v20 = 40;
    }
    result = (*(__int64 (**)(void))(*v23 + v20))();
  LABEL_15:
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
    *(_QWORD*)(a2[3] + (((unsigned __int64)(unsigned int)*v11 >> 3) &
                        0x1FFFFFF8)) |= 1LL << *v11;
    goto LABEL_19;
  }
LABEL_22:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

#pragma GCC visibility pop
