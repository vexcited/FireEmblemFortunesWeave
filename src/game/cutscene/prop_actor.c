#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_10758f0(_QWORD);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_110b040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17fe9d0(__int64, __int64*, unsigned __int8*, char);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_ce3010(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea90;
extern _UNKNOWN* GameData_212ed90;
extern __int64 (*game_cutscene_PropActor_vtable[])();
extern __int64 GameData_2235618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ea88;
extern int* GameData_212ed88;
void __attribute__((noreturn)) GameRoutine_1812c90(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 PropActor_Destructor(__int64 a1);
__int64 PropActor_1806fc0(_QWORD* a1, _QWORD* a2, char a3);
__int64 PropActor_1807a80(__int64 a1);
__int64 PropActor_1807b60(__int64 a1, _QWORD* a2);
bool PropActor_Unknown3(__int64 a1);
_QWORD* GameRoutine_c24a80(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 CharacterActor_17ff8a0(_QWORD);
__int64 CharacterActor_18055a0(_QWORD);
__int64 Components_a870e0(_QWORD, _QWORD);
__int64 GameRoutine_17fc340(__int64, __int64, _QWORD*);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_c22420(_QWORD, _QWORD);
__int64 GameRoutine_d3d1c0(void);
__int64 PropActor_1807a80_alt1(_QWORD) __asm__("PropActor_1807a80");
__int64 PropActor_1807b60_alt1(_QWORD, _QWORD) __asm__("PropActor_1807b60");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212eaa0;
extern __int64 GameData_212c638;
extern int* GameData_212df08;
extern int* GameData_212ea98;
void __attribute__((noreturn)) String_60a230(_QWORD);
__int64 PropActor_Unknown2(__int64 result);

__int64 PropActor_Destructor(__int64 a1)
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;

  *(_QWORD*)a1 = game_cutscene_PropActor_vtable;
  v3 = *(_QWORD*)(a1 + 144);
  v2 = a1 + 144;
  if (v3 != 0 && (unsigned int)(*(_DWORD*)(a1 + 124) - 1) <= 1) {
    GameRoutine_a867a0(v2);
  }
  v4 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 152);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 160) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  v9 = *(_QWORD*)(a1 + 136);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 96);
  if (v10 != 0) {
    v11 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 104) = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v13 = *(_QWORD*)(a1 + 72);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 80);
    if (v13 == v14) {
      goto LABEL_25;
    }
    do {
      v15 = *(_QWORD*)(v14 - 8);
      if (v15 != 0) {
        std___1___shared_weak_count___release_weak(v15);
      }
      v14 -= 16;
    } while (v14 != v13);
    v16 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a1 + 80) = v13;
    v13 = v16;
    if (v16 != 0) {
    LABEL_25:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v17, v13);
    }
  }
  v18 = *(_QWORD*)(a1 + 48);
  if (v18 != 0) {
    v19 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 56) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = *(_QWORD*)(a1 + 24);
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 32);
    if (v21 == v22) {
      goto LABEL_44;
    }
    do {
      v23 = *(_QWORD*)(v22 - 8);
      *(_QWORD*)(v22 - 8) = 0;
      if (v23 != 0) {
        GameRoutine_10758f0(v23 + 8);
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v24, v23);
      }
      v25 = *(_QWORD*)(v22 - 16);
      if (v25 != 0) {
        std___1___shared_weak_count___release_weak(v25);
      }
      v22 -= 24;
    } while (v22 != v21);
    v26 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v21;
    v21 = v26;
    if (v26 != 0) {
    LABEL_44:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v27, v21);
    }
  }
  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 PropActor_1806fc0(_QWORD* a1, _QWORD* a2, char a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 result;
  __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8 v45;
  char v46[15];
  __int64 v47;
  _DWORD v48[8];
  _DWORD* v49;

  v3 = a2[1];
  v43 = *a2;
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16),
                                            1u, memory_order_relaxed),
                  (v7 = a2[1]) != 0)) {
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = *a2;
    }
    else {
      v9 = 0;
    }
  }
  else {
    v9 = 0;
    v8 = 0;
  }
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  *(_BYTE*)v11 = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  v45 = 10;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  strcpy(v46, "_Prop");
  *(_DWORD*)(v11 + 8) = -1;
  v12 = GameRoutine_17fe9d0(v11 + 8, (__int64*)(v9 + 32), &v45, a3 & 1);
  *(_BYTE*)v11 = v12 & 1;
  if ((v12 & 1) != 0) {
    v49 = nullptr;
    if ((GameRoutine_1075d50(v11 + 8, v48) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v11 + 16, v11 + 64);
    }
    v12 = (__int64)v49;
    if (v49 == v48) {
      v13 = 32;
      goto LABEL_14;
    }
    if (v49 != nullptr) {
      v13 = 40;
    LABEL_14:
      v12 = (*(__int64 (**)(void))(*(_QWORD*)v49 + v13))();
    }
  }
  if ((v45 & 1) != 0 && v47 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v14 = 56;
    }
    v12 = nn_mem_StandardAllocator_Free(*v10 + v14, v47);
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    v12 = std___1___shared_weak_count___release_weak(v8);
  }
  v16 = (_QWORD*)a1[4];
  v15 = a1[5];
  if ((unsigned __int64)v16 >= v15) {
    v18 = a1[3];
    v19 = (char*)v16 - v18;
    v20 = 1 - 0x5555555555555555LL * (((__int64)v16 - v18) >> 3);
    if (v20 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1812c90(v12);
    }
    v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v18) >> 3);
    if (2 * v21 > v20) {
      v20 = 2 * v21;
    }
    if (v21 >= 0x555555555555555LL) {
      v22 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v22 = v20;
    }
    if (v22 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(v12);
    }
    v23 = 3 * v22;
    v24 = fw_memory_HeapManager_Allocate(*v10, 24 * v22, 16, 0);
    v25 = &v19[v24];
    v26 = v24 + 8 * v23;
    *((_QWORD*)v25 + 2) = v11;
    v17 = (__int64)&v19[v24 + 24];
    *(_QWORD*)v25 = v43;
    *((_QWORD*)v25 + 1) = v3;
    v27 = (char*)a1[3];
    v28 = (char*)a1[4];
    v29 = (__int64)&v19[v24 + v27 - v28];
    if (v27 != v28) {
      v44 = v26;
      v30 = (char*)a1[3];
      v31 = &v19[v24 + v27 - v28];
      do {
        *(_QWORD*)v31 = *(_QWORD*)v30;
        *((_QWORD*)v31 + 1) = *((_QWORD*)v30 + 1);
        *(_QWORD*)v30 = 0;
        *((_QWORD*)v30 + 1) = 0;
        v32 = *((_QWORD*)v30 + 2);
        *((_QWORD*)v30 + 2) = 0;
        v30 += 24;
        *((_QWORD*)v31 + 2) = v32;
        v31 += 24;
      } while (v30 != v28);
      do {
        v33 = *((_QWORD*)v27 + 2);
        *((_QWORD*)v27 + 2) = 0;
        if (v33 != 0) {
          GameRoutine_10758f0(v33 + 8);
          if (*(_QWORD*)(*v10 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v34, v33);
        }
        v35 = *((_QWORD*)v27 + 1);
        if (v35 != 0) {
          std___1___shared_weak_count___release_weak(v35);
        }
        v27 += 24;
      } while (v27 != v28);
      v27 = (char*)a1[3];
      v26 = v44;
    }
    a1[3] = v29;
    a1[4] = v17;
    a1[5] = v26;
    if (v27 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v36, v27);
    }
  }
  else {
    v17 = (__int64)(v16 + 3);
    v16[2] = v11;
    *v16 = v43;
    v16[1] = v3;
  }
  a1[4] = v17;
  result = std___1___shared_weak_count_lock(a2[1]);
  v38 = result;
  v39 = *(float*)(*a2 + 8LL);
  v41 = a1[6];
  v40 = a1[7];
  v42 = a1 + 6;
  *(float*)v48 = v39;
  if (v41 == v40 || *(float*)(v40 - 4) <= v39) {
    result = AnimCtrlModule_a78450(v42, v48);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    return std___1___shared_weak_count___release_weak(v38);
  }
  return result;
}

__int64 PropActor_Unknown2(__int64 result)
{
  int v1;
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 explicit;
  int* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  int v49;
  __int64 v51;
  unsigned __int8 v52;
  int* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _BOOL4 v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _BOOL4 v79;
  char* v80;
  char* v81;
  __int64 v82;

  v1 = *(_DWORD*)(result + 120);
  v2 = result;
  if (v1 == 3) {
    v14 = *(_QWORD*)(result + 144);
    if (v14 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                      memory_order_acquire);
      v16 = GameData_212ea98;
      if ((explicit & 1) == 0) {
        result = __cxa_guard_acquire(GameData_212eaa0);
        if ((_DWORD)result != 0) {
          *v16 = wld_Crc32(0, "MaterialAnimModule", 18);
          result = __cxa_guard_release(GameData_212eaa0);
        }
      }
      v17 = *(_QWORD*)(v14 + 512);
      v18 = v17;
      do {
        if (v18 == *(_QWORD*)(v14 + 504)) {
          goto LABEL_45;
        }
        v19 = *(_DWORD*)(v18 - 16);
        v18 -= 16;
        v17 -= 16;
      } while (v19 != *v16);
      if (*(_QWORD*)(v14 + 512) == v17) {
      LABEL_45:
        v14 = 0;
      }
      else {
        v14 = *(_QWORD*)(v17 + 8);
      }
    }
    v37 = *(_QWORD*)(v2 + 24);
    v38 = *(_QWORD*)(v2 + 32);
    if (v37 != v38 && v14 != 0) {
      do {
        result = GameRoutine_17fc340(v2 + 152, v14,
                                     (_QWORD*)(*(_QWORD*)(v37 + 16) + 8LL));
        v37 += 24;
      } while (v37 != v38);
    }
    v39 = 4;
  LABEL_84:
    *(_DWORD*)(v2 + 120) = v39;
    return result;
  }
  if (v1 == 2) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
    if ((unsigned int)(*(_DWORD*)(result + 124) - 1) <= 1) {
      *(_QWORD*)(result + 144) = Components_a870e0(*(_QWORD*)(v4 + 48), 0);
      LODWORD(v80) = 0;
      GameRoutine_d3d1c0();
      v5 = *(_QWORD*)(v2 + 144);
      result = std___1___shared_weak_count_lock(*(_QWORD*)(v2 + 16));
      v6 = *(_QWORD*)(v2 + 8);
      v7 = result;
      v8 = *(unsigned __int8*)(v6 + 24);
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 32);
      }
      else {
        v9 = v8 >> 1;
      }
      if (v9 != 0) {
        v10 = v6 + 25;
        v11 = *(_QWORD*)(v6 + 40);
        if ((v8 & 1) != 0) {
          v12 = v11;
        }
        else {
          v12 = v10;
        }
        if (v9 >= 0xFF) {
          v13 = 255;
        }
        else {
          v13 = v9;
        }
        result = memmove(v5 + 16, v12, v13);
      }
      *(_QWORD*)(v5 + 272) = v9;
      *(_BYTE*)(v5 + 16 + v9) = 0;
    LABEL_77:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = std___1___shared_weak_count___release_weak(v7);
      }
      goto LABEL_79;
    }
    v20 = *(_QWORD*)(v4 + 64);
    if (v20 == 0) {
    LABEL_79:
      v47 = *(_DWORD*)(v2 + 124);
      v48 = v47 > 6;
      v49 = (1 << v47) & 0x51;
      if (v48 || v49 == 0) {
        v51 = *(_QWORD*)(v2 + 144);
        v52 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                   memory_order_acquire);
        v53 = GameData_212df08;
        if ((v52 & 1) == 0) {
          result = __cxa_guard_acquire(GameData_212df10);
          if ((_DWORD)result != 0) {
            *v53 = wld_Crc32(0, "ModelModule", 11);
            result = __cxa_guard_release(GameData_212df10);
          }
        }
        v54 = *(_QWORD*)(v51 + 512);
        v55 = v54;
        do {
          if (v55 == *(_QWORD*)(v51 + 504)) {
            goto LABEL_83;
          }
          v56 = *(_DWORD*)(v55 - 16);
          v55 -= 16;
          v54 -= 16;
        } while (v56 != *v53);
        if (*(_QWORD*)(v51 + 512) != v54) {
          v57 = *(_QWORD*)(v54 + 8);
          if (v57 != 0 && *(_QWORD*)(v2 + 24) != *(_QWORD*)(v2 + 32)) {
            v58 = PropActor_1807a80_alt1(*(_QWORD*)(v2 + 144));
            if ((v58 | CharacterActor_18055a0(*(_QWORD*)(v2 + 144))) == 0) {
              v59 = *(_QWORD*)(v2 + 144);
              v80 = *(char**)(v57 + 24);
              PropActor_1807b60_alt1(v59, &v80);
            }
            result = CharacterActor_17ff8a0(*(_QWORD*)(v2 + 144));
            *(_QWORD*)(*(_QWORD*)(v57 + 24) + 104LL) &= ~4uLL;
          }
        }
      }
    LABEL_83:
      v39 = 3;
      goto LABEL_84;
    }
    v21 = *(_QWORD*)(v20 + 96);
    if (v21 != 0) {
      v22 = *(_QWORD**)(v21 + 24);
      v7 = *(_QWORD*)(v21 + 32);
      if (v7 == 0) {
        goto LABEL_31;
      }
    }
    else {
      LOWORD(v80) = 0;
      result = GameRoutine_c22420(v20 + 104, &v80);
      if (((unsigned __int8)v80 & 1) != 0 && v82 != 0) {
        v43 = result;
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
        result = v43;
      }
      if (result == 0) {
        goto LABEL_79;
      }
      v45 = *(_QWORD*)(result + 40);
      v22 = *(_QWORD**)(v45 + 24);
      v7 = *(_QWORD*)(v45 + 32);
      if (v7 == 0) {
        goto LABEL_31;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  LABEL_31:
    if (v22 != nullptr) {
      v23 = std___1___shared_weak_count_lock(*(_QWORD*)(v2 + 16));
      v24 = *(_QWORD*)(v2 + 8);
      v25 = v23;
      v26 = *(unsigned __int8*)(v24 + 48);
      v27 = v24 + 49;
      v30 = v24 + 56;
      v28 = *(_QWORD*)(v24 + 56);
      v29 = *(_QWORD*)(v30 + 8);
      v31 = (v26 & 1) == 0;
      v32 = v26 >> 1;
      if (v31) {
        v33 = v27;
      }
      else {
        v33 = v29;
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = v28;
      }
      result = (__int64)GameRoutine_c24a80(&v80, v22, v33, v34);
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        result = std___1___shared_weak_count___release_weak(v25);
      }
      v35 = v80;
      if (v80 != v81) {
        if (v81 - v80 == 8) {
          v36 = 3;
        }
        else {
          v36 = 4;
        }
        *(_DWORD*)(v2 + 124) = v36;
        *(_QWORD*)(v2 + 144) = *(_QWORD*)v35;
        goto LABEL_72;
      }
      if (*(_DWORD*)(v2 + 124) == 0) {
        v60 = (__int64*)v22[11];
        v61 = (__int64*)v22[12];
        if (v60 == v61) {
        LABEL_117:
          v70 = (__int64*)v22[14];
          v71 = (__int64*)v22[15];
          if (v70 != v71) {
            while (1) {
              v72 = *(_QWORD*)(v2 + 16);
              if (v72 != 0) {
                v73 = std___1___shared_weak_count_lock(v72);
                if (v73 != 0) {
                  v74 = *(_QWORD*)(v2 + 8);
                }
                else {
                  v74 = 0;
                }
              }
              else {
                v74 = 0;
                v73 = 0;
              }
              v75 = *v70;
              result = strlen(*v70 + 16);
              v76 = *(_BYTE*)(v74 + 48) >> 1;
              if ((*(_BYTE*)(v74 + 48) & 1) != 0) {
                v76 = *(_QWORD*)(v74 + 56);
              }
              if (result == v76) {
                v77 = result;
                if (result == -1) {
                  goto LABEL_144;
                }
                v78 = (*(_BYTE*)(v74 + 48) & 1) != 0 ? *(_QWORD*)(v74 + 64)
                                                     : v74 + 49;
                result = memcmp(v78, v75 + 16, v77);
                v79 = result == 0;
              }
              else {
                v79 = false;
              }
              if (v73 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
                result = std___1___shared_weak_count___release_weak(v73);
              }
              if (v79) {
                break;
              }
              if (++v70 == v71) {
                goto LABEL_72;
              }
            }
            *(_QWORD*)(v2 + 144) = *v70;
            *(_DWORD*)(v2 + 124) = 6;
          }
        }
        else {
          do {
            v62 = *(_QWORD*)(v2 + 16);
            if (v62 != 0) {
              v63 = std___1___shared_weak_count_lock(v62);
              if (v63 != 0) {
                v64 = *(_QWORD*)(v2 + 8);
              }
              else {
                v64 = 0;
              }
            }
            else {
              v64 = 0;
              v63 = 0;
            }
            v65 = *v60;
            result = strlen(*v60 + 16);
            v66 = *(_BYTE*)(v64 + 48) >> 1;
            if ((*(_BYTE*)(v64 + 48) & 1) != 0) {
              v66 = *(_QWORD*)(v64 + 56);
            }
            if (result == v66) {
              v67 = result;
              if (result == -1) {
              LABEL_144:
                String_60a230(result);
              }
              if ((*(_BYTE*)(v64 + 48) & 1) != 0) {
                v68 = *(_QWORD*)(v64 + 64);
              }
              else {
                v68 = v64 + 49;
              }
              result = memcmp(v68, v65 + 16, v67);
              v69 = result == 0;
            }
            else {
              v69 = false;
            }
            if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
              result = std___1___shared_weak_count___release_weak(v63);
            }
            if (v69) {
              *(_QWORD*)(v2 + 144) = *v60;
              *(_DWORD*)(v2 + 124) = 5;
              goto LABEL_72;
            }
            ++v60;
          } while (v60 != v61);
          if (*(_DWORD*)(v2 + 124) == 0) {
            goto LABEL_117;
          }
        }
      }
    LABEL_72:
      if (v80 != nullptr) {
        v81 = v80;
        v46 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v46 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
      }
    }
    if (v7 == 0) {
      goto LABEL_79;
    }
    goto LABEL_77;
  }
  if (v1 != 1) {
    return result;
  }
  result = *(_QWORD*)(result + 128);
  if (result != 0) {
    if (*(_BYTE*)(result + 165) == 1) {
      result = GameRoutine_ad7390(result);
      v3 = result;
    }
    else {
      v3 = 0;
    }
  }
  else {
    v3 = 1;
  }
  v40 = *(_QWORD*)(v2 + 24);
  v41 = *(_QWORD*)(v2 + 32);
  while (v40 != v41) {
    v42 = *(_QWORD*)(v40 + 16);
    if (*(_BYTE*)v42 == 1) {
      result = *(_QWORD*)(v42 + 64);
      if (result != 0) {
        if (*(_BYTE*)(result + 165) == 1) {
          result = GameRoutine_ad7390(result);
          v3 &= result;
          goto LABEL_54;
        }
        v3 = 0;
        v40 += 24;
      }
      else {
        v3 = 0;
        v40 += 24;
      }
    }
    else {
    LABEL_54:
      v40 += 24;
    }
  }
  if ((v3 & 1) != 0) {
    v39 = 2;
    goto LABEL_84;
  }
  return result;
}

__int64 PropActor_1807a80(__int64 a1)
{
  unsigned __int8 explicit;
  int* v2;
  int v3;
  __int64 v4;
  __int64 i;
  int v6;
  int v8;
  __int64 v9;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                  memory_order_acquire);
  v2 = GameData_212ea88;
  if ((explicit & 1) == 0) {
    v9 = a1;
    v8 = __cxa_guard_acquire(GameData_212ea90);
    v2 = GameData_212ea88;
    a1 = v9;
    if (v8 != 0) {
      *GameData_212ea88 = wld_Crc32(0, "AnimCtrlModule", 14);
      __cxa_guard_release(GameData_212ea90);
      v2 = GameData_212ea88;
      a1 = v9;
    }
  }
  v3 = *v2;
  v4 = *(_QWORD*)(a1 + 512);
  for (i = v4; i != *(_QWORD*)(a1 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == v3) {
      if (*(_QWORD*)(a1 + 512) != v4) {
        return *(_QWORD*)(v4 + 8);
      }
      return 0;
    }
  }
  return 0;
}

__int64 PropActor_1807b60(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  bool v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  int v48;
  __int64 v49;

  nn_os_LockMutex(GameData_212df28);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v6 = GameRoutine_ce3010(v5, a1, *a2, 4, 4);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v8 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire(GameData_212ed90);
    if ((_DWORD)v6 != 0) {
      *v8 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      v6 = __cxa_guard_release(GameData_212ed90);
    }
  }
  v9 = *v8;
  v10 = *(_QWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 512);
  v12 = v11;
  v48 = v9;
  v49 = v5;
  while (v12 != v10) {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    if (v13 == v9) {
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v10 == v11 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v10) <= 0x6F) {
    v14 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v14;
    *(_QWORD*)(a1 + 512) = v14;
    *(_QWORD*)(a1 + 520) = v14 + 112;
    if (v11 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v15, v10);
    }
  }
  v6 = GameRoutine_98f140(a1 + 504, &v48);
  if ((*(_BYTE*)(v5 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v5 + 16) = 1;
    *(_BYTE*)(v5 + 17) &= ~2u;
    *(_BYTE*)(v5 + 18) &= ~2u;
    *(_BYTE*)(v5 + 19) &= ~2u;
    *(_BYTE*)(v5 + 20) &= ~2u;
    v16 = *(_BYTE**)(v5 + 8);
    v16[632] = 0;
    v16[664] = 0;
    v16[696] = 0;
    v16[728] = 0;
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
    v17 = *(_BYTE**)(v5 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 72LL))(v5);
    }
  }

LABEL_20:
  v19 = *(__int64**)(a1 + 536);
  v20 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v19 >= v20) {
    v22 = *(_QWORD*)(a1 + 528);
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v26 = v20 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_56;
      }
      v28 = fw_memory_HeapManager_Allocate(*v4, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (char*)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v5;
    v21 = (__int64)&v23[v28 + 8];
    v6 = memcpy(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v32 = 56;
      }
      v6 = nn_mem_StandardAllocator_Free(*v4 + v32, v22);
    }
  }
  else {
    *v19 = v5;
    v21 = (__int64)(v19 + 1);
  }
  *(_QWORD*)(a1 + 536) = v21;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v5;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v6);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v4, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v6);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v5;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v46, v36);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex(GameData_212df28);
}

bool PropActor_Unknown3(__int64 a1)
{
  return (*(_DWORD*)(a1 + 120) & 0xFFFFFFFB) == 0;
}

#pragma GCC visibility pop
