#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d4820(_QWORD, _QWORD, _QWORD);
__int64 EquipInfoItem_DustItem_Unknown16(__int64 a1);
__int64 GameRoutine_18a73c0(void);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0(_QWORD, _QWORD, long double);
__int64 Layout_1364020(_QWORD, _QWORD, _QWORD);
__int64 Layout_579280(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131a28[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2130ec0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 EquipInfoItem_DustItem_Unknown70(__int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void
EquipInfoItem_DustItem_16d4e60(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                               _QWORD* a3, _QWORD* a4, __n128 result);

__int64 EquipInfoItem_DustItem_Unknown16(__int64 a1)
{
  _QWORD v2[2];
  _QWORD v3[2];

  v3[0] = "L_MenuItem_Item";
  v3[1] = 15;
  v2[0] = "DustItem";
  v2[1] = 8;
  return GameRoutine_16d4820(a1, v3, v2);
}

__n128 EquipInfoItem_DustItem_Unknown70(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;

  v3 = a2[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v7 = v5;
      if (*a2 != 0) {
        v8 = *(_QWORD*)(a1 + 128);
        if (v8 != 0 &&
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(v8 + 16)) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v9 = game_map_MapRandom_instance__ptr[0];
          v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v9 + 1) = v10;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) =
              (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
          nn_os_UnlockMutex(&game_g_random_mutex);
        }
        GameRoutine_18a73c0();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

EquipInfoItem_DustItem_16d4e60(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                               _QWORD* a3, _QWORD* a4, __n128 result)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  atomic_uchar* v18;
  __int64* v19;
  __int64* v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64** v45;
  _QWORD* v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;

  v7 = *(_QWORD*)(a2 + 8);
  if (v7 == 0) {
    goto LABEL_63;
  }
  v12 = std___1___shared_weak_count_lock(v7);
  if (v12 == 0) {
    goto LABEL_63;
  }
  v13 = *(_QWORD**)a2;
  v14 = v12;
  if (*(_QWORD*)a2 == 0) {
    goto LABEL_60;
  }
  v15 = v13[1];
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v16 = a4;
  v17 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v51 = v17;
  v18 = (atomic_uchar*)GameData_212dfd0;
  v19 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v18, memory_order_acquire) & 1) == 0) {
      v22 = __cxa_guard_acquire(v18);
      if ((_DWORD)v22 != 0) {
        *v19 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v22, v23, v24, v25);
        __cxa_guard_release(v18);
      }
    }
    v20 = (__int64*)(*(__int64 (**)(_QWORD*))(*v16 + 16LL))(v16);
    if (v20 == v19) {
      goto LABEL_21;
    }
    do {
      v20 = (__int64*)*v20;
    } while (v20 != v19 && v20 != nullptr);
    if (v20 != nullptr) {
    LABEL_21:
      v26 = v16[29];
      if (v15 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v16 = (_QWORD*)v16[3];
  } while (v16 != nullptr);
  v26 = v51;
  if (v15 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v27 = (_QWORD*)LayoutEx_579180(96);
  if (v27 == nullptr) {
    goto LABEL_60;
  }
  v28 = v27;
  v29 = GameData_2130ec0[0];
  v27[2] = v27 + 1;
  v52 = v26;
  *v27 = v29 + 16;
  v27[1] = v27 + 1;
  v27[9] = v27 + 9;
  v27[10] = v27 + 9;
  LayoutEx_57b150();
  v30 = v28[3];
  LayoutEx_58d200(v30, *a3);
  Pane_58dee0(a4, v30);
  for (i = *(_QWORD*)(v15 + 80); i != v15 + 72; i = *(_QWORD*)(i + 8)) {
    v32 = LayoutEx_57cf40(v28, i - 40);
    if (v32 != 0) {
      Layout_1364020(a1, i - 216, v32);
    }
  }
  (*(void (**)(__int64* __return_ptr, _QWORD*, _QWORD*))(*v13 + 16LL))(
      &v53, v13, v28);
  if (v53 != 0 && (v33 = __dynamic_cast(v53, GameData_212dfc0[0],
                                        GameData_2131a28[0], 0)) != 0) {
    v55 = v33;
    v56 = v54;
    v34 = &v53;
  }
  else {
    v34 = &v55;
  }
  *v34 = 0;
  v34[1] = 0;
  v35 = v54;
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    result = std___1___shared_weak_count___release_weak(v35);
  }
  v36 = v55;
  if (v55 == 0) {
    v44 = v56;
    if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v44 + 16LL))(
          v44, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak(v44);
    }
    v45 = (__int64**)(v52 + 72);
    if (*(_QWORD*)(v52 + 80) != v52 + 72) {
      v46 = (_QWORD*)(*v45)[2];
      if (v46 == v28) {
        v47 = *game_g_frame_clock_ptr[0];
        Layout_13639a0(a1, (*v45)[2], *(long double*)&result);
        v48 = *v45;
        v49 = (__int64*)(*v45)[1];
        v50 = *v49;
        *(_QWORD*)(**v45 + 8) = v49;
        *v49 = *v48;
        *(_QWORD*)(v50 + 8) = v48;
        *v48 = v50;
        Layout_579280(v46, v47 + 568);
        (*(void (**)(_QWORD*))(*v46 + 8LL))(v46);
        LayoutEx_5791a0(v46);
      }
    }
  LABEL_60:
    v43 = 0;
    goto LABEL_61;
  }
  v37 = v56;
  v53 = v55;
  v54 = v56;
  if (v56 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
  v38 = *(_QWORD*)(a1 + 2280);
  v39 = a1 + 2272;
  if (v38 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(_QWORD*)(v38 + 16) != v36) {
    v38 = *(_QWORD*)(v38 + 8);
    if (v38 == v39) {
      goto LABEL_44;
    }
  }
  if (v38 == v39) {
  LABEL_44:
    v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v40[2] = v36;
    v40[3] = v37;
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
    }
    v41 = *(_QWORD*)(a1 + 2272);
    *v40 = v41;
    v40[1] = v39;
    *(_QWORD*)(v41 + 8) = v40;
    *(_QWORD*)(a1 + 2272) = v40;
    ++*(_QWORD*)(a1 + 2288);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v36 + 128LL))(v36, &v53);
    v37 = v54;
  }
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    result = std___1___shared_weak_count___release_weak(v37);
  }
  v42 = v56;
  *a5 = v55;
  a5[1] = v42;
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v42 + 16LL))(
          v42, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak(v42);
    }
  }
  v43 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v43 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
      v14, *(long double*)&result);
  result = std___1___shared_weak_count___release_weak(v14);
  if ((v43 & 1) == 0) {
  LABEL_63:
    *a5 = 0;
    a5[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
