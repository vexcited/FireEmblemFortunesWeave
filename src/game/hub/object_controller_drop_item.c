#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_e1b4d0(_QWORD* __return_ptr);
_QWORD* GameRoutine_e1bfe0(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_db1bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dfca40(__int64, __int64, __int64, __int64, __int64, __int64,
                           long double, long double);
__int64 __cxa_guard_acquire(_QWORD, long double, long double);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ac3bbb;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fe2630[])();
extern __int64 (*game_hub_ObjectControllerDropItem_vtable[])();
extern __int64 GameData_212dc48[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cbf0[73];
_QWORD* ObjectControllerDropItem_Destructor(_QWORD* result);
__int64 ObjectControllerDropItem_DeletingDestructor(_QWORD* a1);
__int64 ObjectControllerDropItem_Unknown6(__int64 a1);

_QWORD* ObjectControllerDropItem_Destructor(_QWORD* result)
{
  _DWORD* v1;
  _QWORD* v2;
  __int64 v3;

  *result = game_hub_ObjectControllerDropItem_vtable;
  v1 = (_DWORD*)result[11];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1520(result + 11, 1);
    result = v2;
  }
  v3 = result[12];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 ObjectControllerDropItem_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_hub_ObjectControllerDropItem_vtable;
  v4 = (_QWORD*)a1[11];
  v2 = a1 + 11;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameRoutine_14a1520(v2, 1);
  }
  v6 = a1[12];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

__int64 ObjectControllerDropItem_Unknown6(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  int v8;
  long double v9;
  long double v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128* v15;
  __int64 v16;
  long double v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128* v25;
  __int128 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  long double v32;
  long double v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[4];
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  char* v52;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 8) + 224LL);
  if ((*(_BYTE*)v2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v50, v2[2], v2[1]);
  }
  else {
    v3 = *v2;
    v4 = v2[1];
    v5 = (char*)v2[2];
    v51 = v4;
    v52 = v5;
    v50 = v3;
  }
  LODWORD(v48) = 0;
  if ((v50 & 1) != 0) {
    v6 = v52;
  }
  else {
    v6 = (char*)&v50 + 1;
  }
  if ((v50 & 1) != 0) {
    v7 = v51;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v50 >> 1;
  }
  v8 = GameRoutine_db1bc0(v6, v7, &v48);
  v11 = v48;
  *(_DWORD*)(a1 + 104) = v8;
  *(_DWORD*)(a1 + 108) = v11;
  if ((v50 & 1) != 0 && v52 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    v8 = *(_DWORD*)(a1 + 104);
  }
  if (v8 != 2) {
    v13 = *(_QWORD*)GameData_212dc48[0];
    v16 = *(_QWORD*)(a1 + 8);
    if ((*(_BYTE*)(v16 + 976) & 1) != 0) {
      v15 = (__int128*)(v16 + 960);
      goto LABEL_25;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v15 = &GameData_21a6120;
      goto LABEL_25;
    }
    v15 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v9, v10) == 0) {
      goto LABEL_25;
    }
  LABEL_73:
    v44 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v44;
    __cxa_guard_release(&GameData_21a6130);
    goto LABEL_25;
  }
  v13 = *(_QWORD*)GameData_212dc48[0];
  v14 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v14 + 976) & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v15 = &GameData_21a6120;
      goto LABEL_25;
    }
    v15 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v9, v10) == 0) {
      goto LABEL_25;
    }
    goto LABEL_73;
  }
  v15 = (__int128*)(v14 + 960);

LABEL_25:
  GameRoutine_e1b4d0(&v50);
  GameRoutine_e1bfe0(&v48, v13, &v50, v15);
  if ((v50 & 1) != 0 && v52 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = v48;
  v21 = v49;
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = v20;
  *(_QWORD*)(a1 + 96) = v21;
  if (v22 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
    v21 = *(_QWORD*)(a1 + 96);
  }
  if (v21 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
    v23 = v49;
    if (v49 == 0) {
      goto LABEL_40;
    }
  }
  else {
    v23 = v49;
    if (v49 == 0) {
      goto LABEL_40;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      goto LABEL_46;
    }
    goto LABEL_41;
  }

LABEL_40:
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    goto LABEL_46;
  }

LABEL_41:
  v24 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v24 + 976) & 1) != 0) {
    v25 = (__int128*)(v24 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v25 = &GameData_21a6120;
  }
  else {
    v25 = &GameData_21a6120;
    if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130, v17, v18) != 0) {
      v45 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v45;
      __cxa_guard_release(&GameData_21a6130);
    }
  }
  *(_DWORD*)(a1 + 64) = *(_DWORD*)v25;
  *(_DWORD*)(a1 + 68) = *((_DWORD*)v25 + 1);
  v26 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v26 + 1) = *((unsigned int*)v25 + 2);
  *(_OWORD*)(a1 + 64) = v26;

LABEL_46:
  v27 = game_HashString(&GameData_1ac3bbb);
  v34 = *GameData_212cbf0[0];
  v35 = *(_QWORD*)(*GameData_212cbf0[0] + 96);
  if ((v35 & (v35 - 1)) != 0) {
    v36 = v27;
    if (v27 >= v35) {
      v36 = v27 % v35;
    }
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * v36);
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v27);
    } while (v37[2] != v27);
  }
  else {
    v37 = *(_QWORD**)(*(_QWORD*)(v34 + 88) + 8 * ((v35 - 1) & v27));
    do {
      do {
        v37 = (_QWORD*)*v37;
      } while (v37[1] != v27);
    } while (v37[2] != v27);
  }
  v38 = *(_QWORD*)(a1 + 8);
  LODWORD(v32) = *(_DWORD*)(v37[3] + 32LL);
  v47 = v46;
  v46[0] = GameData_1fe2630;
  v46[1] = a1;
  GameRoutine_dfca40(v38, (__int64)v46, v28, v29, v30, v31, v32, v33);
  if (v47 == v46) {
    v39 = 32;
    goto LABEL_60;
  }
  if (v47 != nullptr) {
    v39 = 40;
  LABEL_60:
    (*(void (**)(void))(*v47 + v39))();
  }
  v40 = *(_QWORD*)(a1 + 8);
  result = *(_QWORD*)(v40 + 712);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v42 = *(_QWORD*)(v40 + 704);
      if (v42 != 0) {
        *(_DWORD*)(v42 + 1760) &= ~0x100u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v43 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v43);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
