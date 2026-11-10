#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 TelopParts_17cbd60(_QWORD);
__int64 TelopParts_Destructor(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 (*GameData_20d9048[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 GameData_21f3d10;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ea58;
__int64 SimpleTelopImpl_Destructor(__int64 a1);
__int64 SimpleTelopImpl_17c9460(__int64 a1);
__int64 SimpleTelopImpl_17c9920(__int64 result);
__int64 SimpleTelopImpl_17c9980(__int64 a1);

__int64 SimpleTelopImpl_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
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

  *(_QWORD*)a1 = GameData_20d9048;
  LayoutAccessor_155e140(a1 + 168);
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 1664);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 1672);
    if (v4 == v5) {
      goto LABEL_10;
    }
    do {
      v5 -= 248;
      TelopParts_17cbd60(v5);
    } while (v5 != v4);
    v6 = *(_QWORD*)(a1 + 1664);
    *(_QWORD*)(a1 + 1672) = v4;
    v4 = v6;
    if (v6 != 0) {
    LABEL_10:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v4);
    }
  }
  v8 = *(_QWORD*)(a1 + 1640);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 1648);
    if (v8 == v9) {
      goto LABEL_17;
    }
    do {
      v9 -= 248;
      TelopParts_17cbd60(v9);
    } while (v9 != v8);
    v10 = *(_QWORD*)(a1 + 1640);
    *(_QWORD*)(a1 + 1648) = v8;
    v8 = v10;
    if (v10 != 0) {
    LABEL_17:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v8);
    }
  }
  TelopParts_Destructor(a1 + 1184);
  TelopParts_Destructor(a1 + 728);
  TelopParts_Destructor(a1 + 272);
  LayoutAccessor_155e140(a1 + 168);
  v12 = *(_QWORD*)(a1 + 264);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v13 = *(_QWORD*)(a1 + 176);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 160);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  GameData_2241720 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 SimpleTelopImpl_17c9460(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = LayoutAccessor_155e140(a1 + 168);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 SimpleTelopImpl_17c9920(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(*(_QWORD*)(result + 152) + 24LL) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 SimpleTelopImpl_17c9980(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  _QWORD v33[2];

  v2 = *(_QWORD*)(a1 + 160);
  v33[0] = *(_QWORD*)(a1 + 152);
  v33[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 168, v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 168, v33);
  }
  LayoutAccessor_155e830(a1 + 168, 1);
  ui_LayoutAccessor_SetPriority(a1 + 168, 1311);
  v4 = game_util_Format("L_Tlp%02d", 0);
  v5 = LayoutAccessor_155fbe0(a1 + 168, v4);
  if (*(_QWORD*)(v5 + 16) == 0) {
    goto LABEL_18;
  }
  v6 = (__int64*)v5;
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 == 0) {
    goto LABEL_18;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 != 0) {
    v9 = *v6;
    if (*v6 != 0) {
      v1 = *(unsigned __int8*)(v9 + 24);
      v10 = v9 + 152;
      if (v1 == 0) {
        v10 = 0;
      }
      v11 = v10 != v6[2];
    }
    else {
      v11 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11) {
        goto LABEL_15;
      }
    }
    else {
      v21 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v21);
      if (v11) {
        goto LABEL_15;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
LABEL_15:
  v12 = v6[1];
  if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1) {
  LABEL_17:
    *(_QWORD*)(a1 + 280) = v6;
    LayoutAccessor_155e830(v6, 0);
  }
LABEL_18:
  v13 = game_util_Format("L_Tlp%02d", 1);
  v14 = LayoutAccessor_155fbe0(a1 + 168, v13);
  if (*(_QWORD*)(v14 + 16) == 0) {
    goto LABEL_34;
  }
  v15 = (__int64*)v14;
  v16 = *(_QWORD*)(v14 + 8);
  if (v16 == 0) {
    goto LABEL_34;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 != 0) {
    v18 = *v15;
    if (*v15 != 0) {
      v1 = *(unsigned __int8*)(v18 + 24);
      v19 = v18 + 152;
      if (v1 == 0) {
        v19 = 0;
      }
      v20 = v19 != v15[2];
    }
    else {
      v20 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v20) {
        goto LABEL_31;
      }
    }
    else {
      v29 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v29);
      if (v20) {
        goto LABEL_31;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
LABEL_31:
  v22 = v15[1];
  if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1) {
  LABEL_33:
    *(_QWORD*)(a1 + 736) = v15;
    LayoutAccessor_155e830(v15, 0);
  }
LABEL_34:
  v23 = game_util_Format("L_Tlp%02d", 2);
  result = LayoutAccessor_155fbe0(a1 + 168, v23);
  if (*(_QWORD*)(result + 16) == 0) {
    goto LABEL_50;
  }
  v25 = (__int64*)result;
  result = *(_QWORD*)(result + 8);
  if (result == 0) {
    goto LABEL_50;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v26 = *v25;
    if (*v25 != 0) {
      v1 = *(unsigned __int8*)(v26 + 24);
      v27 = v26 + 152;
      if (v1 == 0) {
        v27 = 0;
      }
      v28 = v27 != v25[2];
    }
    else {
      v28 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v28) {
        goto LABEL_47;
      }
    }
    else {
      v32 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v32);
      if (v28) {
        goto LABEL_47;
      }
    }
    if ((v1 & 1) == 0) {
      goto LABEL_50;
    }
    goto LABEL_49;
  }
LABEL_47:
  v30 = v25[1];
  if (v30 != 0 && *(_QWORD*)(v30 + 8) != -1) {
  LABEL_49:
    *(_QWORD*)(a1 + 1192) = v25;
    result = LayoutAccessor_155e830(v25, 0);
  }
LABEL_50:
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 1 && *GameData_212ea58 == 0) {
    *(_DWORD*)(a1 + 1720) = -1028128768;
    *(_BYTE*)(a1 + 1690) = 1;
  }
  return result;
}

#pragma GCC visibility pop
