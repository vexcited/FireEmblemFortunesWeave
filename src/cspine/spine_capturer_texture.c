#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190de60(_QWORD);
__int64 GameRoutine_190dfc0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e870[6];
extern _UNKNOWN** GameData_21322c8;
extern __int64 (*cspine_SpineCapturerBase_vtable)();
extern __int64 (*cspine_SpineCapturerTexture_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineCapturerTexture_Destructor(__int64 a1);
__int64 SpineCapturerTexture_Unknown2(__int64 a1, __int64* a2);
__int64 SpineCapturerTexture_Unknown3(__int64 a1);
__int64 SpineCapturerTexture_Unknown4(__int64 result);
__int64 SpineCapturerTexture_Unknown6(_QWORD* a1, char a2);
__int64 SpineCapturerTexture_Unknown7(__int64 result, __int64 a2, __int64* a3,
                                      __int64 a4);

__int64 SpineCapturerTexture_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)a1 = cspine_SpineCapturerTexture_vtable;
  if (v1 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
    v3 = *(_QWORD*)(a1 + 96);
    *(_QWORD*)(a1 + 104) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    *(_QWORD*)(a1 + 104) = 0;
  }
  *(_QWORD*)a1 = &cspine_SpineCapturerBase_vtable;
  *(_DWORD*)(a1 + 8) = -1;
  *(_QWORD*)(a1 + 16) = (unsigned __int64)*(unsigned int*)(a1 + 20) << 32;
  *(_QWORD*)(a1 + 24) = 0;
  v4 = *(_QWORD*)(a1 + 80);
  if (v4 != 0) {
    v5 = *(_QWORD**)(a1 + 48);
    v6 = *(_QWORD*)(a1 + 72);
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      --v4;
      *(_QWORD*)(a1 + 72) = ++v6;
      *(_QWORD*)(a1 + 80) = v4;
      if (v6 >= 0x800) {
        if (*v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v8);
          v5 = *(_QWORD**)(a1 + 48);
          v6 = *(_QWORD*)(a1 + 72);
          v4 = *(_QWORD*)(a1 + 80);
        }
        ++v5;
        v6 -= 1024LL;
        *(_QWORD*)(a1 + 48) = v5;
        *(_QWORD*)(a1 + 72) = v6;
      }
    } while (v4 != 0);
  }
  *(_QWORD*)(a1 + 32) = 0;
  return GameRoutine_190de60(a1 + 40);
}

__int64 SpineCapturerTexture_Unknown2(__int64 a1, __int64* a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;

  if (*(_QWORD*)(a1 + 80) != 0) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  v5 = *a2;
  v6 = a2[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = v5;
  *(_QWORD*)(a1 + 96) = v6;
  if (v7 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v5 = *(_QWORD*)(a1 + 88);
  }
  if (v5 != 0 && (v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5),
                  *(_QWORD*)(a1 + 104) = v8, v8 != 0)) {
    *(_QWORD*)(a1 + 32) = 0;
    v9 = v8;
    *(_DWORD*)(a1 + 32) = (*(__int64 (**)(void))GameData_212e778[0])();
    v10 = ((__int64 (*)(__int64))*GameData_212e780)(v9);
    v11 = *(_QWORD*)(a1 + 16);
    *(_DWORD*)(a1 + 36) = v10;
    *(_QWORD*)(a1 + 16) = v11 | 1;
    return 1;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
    return 0;
  }
}

__int64 SpineCapturerTexture_Unknown3(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  return 0;
}

__int64 SpineCapturerTexture_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_QWORD*)(result + 80) == 0) {
    v1 = *(unsigned int*)(result + 20);
    v2 = *(_QWORD*)(result + 96);
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 88) = 0;
    *(_QWORD*)(result + 96) = 0;
    *(_QWORD*)(result + 16) = v1 << 32;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v3 = result;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
      result = v3;
    }
    *(_QWORD*)(result + 104) = 0;
  }
  return result;
}

__int64 SpineCapturerTexture_Unknown6(_QWORD* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = a1[2];
  if ((v2 & 1) != 0) {
    v3 = a1[10];
    if ((a2 & 1) != 0) {
      if (v3 == 0) {
        v5 = a1[5];
        a1[3] = 0x100000000LL;
        v6 = (char*)a1[6];
        v7 = (char*)a1[7];
        a1[5] = 0;
        a1[6] = 0;
        a1[9] = 0;
        a1[10] = 0;
        v8 = v7 - v6;
        a1[7] = 0;
        a1[8] = 0;
        v9 = fw_memory_g_heap_manager_ptr;
        if ((unsigned __int64)(v7 - v6) >= 0x11) {
          do {
            if (*(_QWORD*)v6 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
                v10 = 128;
              }
              else {
                v10 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v10);
            }
            v6 += 8;
            v8 -= 8LL;
          } while (v8 > 0x10);
        }
        for (; v6 != v7; v6 += 8) {
          if (*(_QWORD*)v6 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16);
          }
        }
        if (v5 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v17);
        }
        v11 = a1[6];
        v18 = a1[7];
        v19 = ((v18 - v11) << 7) - 1;
        if (v18 == v11) {
          v19 = 0;
        }
        v14 = a1[10] + a1[9];
        if (v19 == v14) {
          GameRoutine_190dfc0(a1 + 5);
          v11 = a1[6];
          v14 = a1[10] + a1[9];
        }
        v15 = 2;
      LABEL_36:
        *(_DWORD*)(*(_QWORD*)(v11 + 8 * (v14 >> 10)) + 4 * (v14 & 0x3FF)) = v15;
        ++a1[10];
      }
    }
    else if (v3 != 0) {
      v11 = a1[6];
      v12 = a1[7];
      if (v12 == v11) {
        v13 = 0;
      }
      else {
        v13 = ((v12 - v11) << 7) - 1;
      }
      v14 = a1[9] + v3;
      if (v13 == v14) {
        GameRoutine_190dfc0(a1 + 5);
        v11 = a1[6];
        v14 = a1[10] + a1[9];
      }
      v15 = 3;
      goto LABEL_36;
    }
  }
  return v2 & 1;
}

__int64 SpineCapturerTexture_Unknown7(__int64 result, __int64 a2, __int64* a3,
                                      __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (**v8)(__int64);
  __int64 (**v9)(__int64);
  char* v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;

  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 80);
    v5 = result;
    if (v4 != 0) {
      v6 = *a3;
      v8 = (__int64 (**)(__int64))GameData_212e778[0];
      v9 = (__int64 (**)(__int64))GameData_212e780;
      while (1) {
        while (1) {
          v10 = *(char**)(v5 + 48);
          v11 = *(_DWORD*)(*(_QWORD*)&v10[8 * (*(_QWORD*)(v5 + 72) >> 10)] +
                           4 * (*(_QWORD*)(v5 + 72) & 0x3FFLL));
          v12 = v4 - 1;
          v13 = *(_QWORD*)(v5 + 72) + 1LL;
          *(_QWORD*)(v5 + 72) = v13;
          *(_QWORD*)(v5 + 80) = v12;
          if (v13 >= 0x800) {
            if (*(_QWORD*)v10 != 0) {
              v14 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v14 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
              v10 = *(char**)(v5 + 48);
              v13 = *(_QWORD*)(v5 + 72);
            }
            v10 += 8;
            v13 -= 1024LL;
            *(_QWORD*)(v5 + 48) = v10;
            *(_QWORD*)(v5 + 72) = v13;
          }
          if ((unsigned __int8)v11 != 2) {
            break;
          }
          v22 = *(char**)(v5 + 56);
          if (v22 == v10) {
            v23 = 0;
          }
          else {
            v23 = ((v22 - v10) << 7) - 1;
          }
          v24 = *(_QWORD*)(v5 + 80) + v13;
          if (v23 == v24) {
            result = GameRoutine_190dfc0(v5 + 40);
            v10 = *(char**)(v5 + 48);
            v24 = *(_QWORD*)(v5 + 80) + *(_QWORD*)(v5 + 72);
          }
          *(_DWORD*)(*(_QWORD*)&v10[8 * (v24 >> 10)] + 4 * (v24 & 0x3FF)) = 5;
          v25 = *(_QWORD*)(v5 + 48);
          v26 = *(_QWORD*)(v5 + 56);
          v27 = *(_QWORD*)(v5 + 72);
          v28 = ((v26 - v25) << 7) - 1;
          if (v26 == v25) {
            v28 = 0;
          }
          v29 = *(_QWORD*)(v5 + 80) + 1LL;
          *(_QWORD*)(v5 + 80) = v29;
          v30 = v27 + v29;
          if (v28 == v30) {
            result = GameRoutine_190dfc0(v5 + 40);
            v25 = *(_QWORD*)(v5 + 48);
            v30 = *(_QWORD*)(v5 + 80) + *(_QWORD*)(v5 + 72);
          }
          *(_DWORD*)(*(_QWORD*)(v25 + 8 * (v30 >> 10)) + 4 * (v30 & 0x3FF)) = 1;
          v31 = *(_QWORD*)(v5 + 48);
          v32 = *(_QWORD*)(v5 + 56);
          v33 = *(_QWORD*)(v5 + 72);
          v34 = ((v32 - v31) << 7) - 1;
          if (v32 == v31) {
            v34 = 0;
          }
          v35 = *(_QWORD*)(v5 + 80) + 1LL;
          *(_QWORD*)(v5 + 80) = v35;
          v36 = v33 + v35;
          if (v34 == v36) {
            result = GameRoutine_190dfc0(v5 + 40);
            v31 = *(_QWORD*)(v5 + 48);
            v36 = *(_QWORD*)(v5 + 80) + *(_QWORD*)(v5 + 72);
          }
          *(_DWORD*)(*(_QWORD*)(v31 + 8 * (v36 >> 10)) + 4 * (v36 & 0x3FF)) = 3;
          v4 = *(_QWORD*)(v5 + 80) + 1LL;
          *(_QWORD*)(v5 + 80) = v4;
          if (v4 == 0) {
            return result;
          }
        }
        if ((unsigned __int8)v11 != 5) {
          break;
        }
        v15 = *(_QWORD*)(v5 + 104);
        v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 40LL))(a4);
        v17 = v16;
        if (v16 != 0) {
          v18 = (*v8)(v16);
          v19 = (*v9)(v17);
          v20 = v18 & ~(v18 >> 31);
          v21 = v19 & ~(v19 >> 31);
          if (v20 >= 1024) {
            v20 = 1024;
          }
          if (v21 >= 1024) {
            v21 = 1024;
          }
        }
        else {
          v20 = 0;
          v21 = 0;
        }
        v53 = 0;
        v54 = 0;
        v55 = v20;
        v56 = v21;
        v57 = 1;
        if (v15 != 0) {
          v37 = (*v8)(v15);
          v38 = (*v9)(v15);
          v39 = v37 & ~(v37 >> 31);
          v40 = v38 & ~(v38 >> 31);
          if (v39 >= 1024) {
            v39 = 1024;
          }
          if (v40 >= 1024) {
            v40 = 1024;
          }
        }
        else {
          v39 = 0;
          v40 = 0;
        }
        v48 = 0;
        v49 = 0;
        v50 = v39;
        v51 = v40;
        v52 = 1;
        (*(void (**)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                     __int64*, __int64))GameData_212e870[0])(
            v6 + 8, v17, 0, &v53, v15, 0, &v48, 9);
        result = ((__int64 (*)(__int64))*GameData_21322c8)(v15);
        v4 = *(_QWORD*)(v5 + 80);
        if (v4 == 0) {
          return result;
        }
      }
      if ((unsigned __int8)v11 == 3) {
        v41 = *(char**)(v5 + 56);
        v42 = *(_QWORD*)(v5 + 40);
        *(_QWORD*)(v5 + 40) = 0;
        *(_QWORD*)(v5 + 48) = 0;
        v43 = v41 - v10;
        *(_QWORD*)(v5 + 72) = 0;
        *(_QWORD*)(v5 + 80) = 0;
        *(_QWORD*)(v5 + 56) = 0;
        *(_QWORD*)(v5 + 64) = 0;
        if ((unsigned __int64)(v41 - v10) < 0x11) {
          v44 = fw_memory_g_heap_manager_ptr;
        }
        else {
          v44 = fw_memory_g_heap_manager_ptr;
          do {
            if (*(_QWORD*)v10 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) != 0) {
                v45 = 128;
              }
              else {
                v45 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v45);
            }
            v10 += 8;
            v43 -= 8LL;
          } while (v43 > 0x10);
        }
        for (; v10 != v41; v10 += 8) {
          if (*(_QWORD*)v10 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) != 0) {
              v46 = 128;
            }
            else {
              v46 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v46);
          }
        }
        if (v42 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v47);
        }
        ++*(_DWORD*)(v5 + 24);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
