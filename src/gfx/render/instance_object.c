#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_render_InstanceObject_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* InstanceObject_Destructor(_QWORD* result);
__int64 GameRoutine_c00420(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 InstanceObject_c00180_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD) __asm__("InstanceObject_c00180");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_bffbf0(void);
void __attribute__((noreturn)) GameRoutine_bffec0(void);
__int64 InstanceObject_bff9e0(__int64 result, int a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64* a6);
__int64 InstanceObject_bffc20(__int64** a1, __int64 a2);
__int64*
InstanceObject_bffee0_alt1(__int64* result, __int64* a2, __int64** a3,
                           unsigned __int64 a4, __int64* a5,
                           signed __int64 a6) __asm__("InstanceObject_bffee0");
__int64* InstanceObject_c00180(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5);
__int64 gfx_render_InstanceObject_CollectElements_lambda0_Invoke(__int64 result,
                                                                 __int64* a2);
__int64 ElementRenderer_a74470(__int64 result, __int64, __int64*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 (*GameData_1fd1370[])();
extern __int64 g3d_g_passKinds;
void __attribute__((noreturn)) String_60a250(const char*);
__int64 gfx_render_InstanceObject_CollectElements(__int64 result, __int64 a2,
                                                  _QWORD* a3);
__int64 memmove(_QWORD, _QWORD, _QWORD);
char* InstanceObject_c00420(char* result, char* a2, char* a3, __int64** a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64* InstanceObject_bffee0(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5, __int64 a6);

_QWORD* InstanceObject_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v1 = result[29];
  v2 = result;
  *result = gfx_render_InstanceObject_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[30] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (_QWORD*)v2[26];
  if (v6 != nullptr) {
    v7 = (_QWORD*)v2[27];
    if (v6 == v7) {
      goto LABEL_14;
    }
    do {
      v8 = *(v7 - 6);
      *(v7 - 6) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      v9 = (_QWORD*)*(v7 - 7);
      v7 -= 7;
      result = v9;
      *v7 = 0;
      if (v9 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v7 != v6);
    v10 = v2[26];
    v2[27] = v6;
    if (v10 != 0) {
    LABEL_14:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
  }
  v12 = (_QWORD*)v2[23];
  if (v12 != nullptr) {
    v13 = (_QWORD*)v2[24];
    if (v12 == v13) {
      goto LABEL_26;
    }
    do {
      v14 = *(v13 - 6);
      *(v13 - 6) = 0;
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
      v15 = (_QWORD*)*(v13 - 7);
      v13 -= 7;
      result = v15;
      *v13 = 0;
      if (v15 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v13 != v12);
    v16 = v2[23];
    v2[24] = v12;
    if (v16 != 0) {
    LABEL_26:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
    }
  }
  v18 = v2[20];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[21] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = v2[17];
  if (v21 != 0) {
    v22 = v2[18];
    if (v21 == v22) {
      goto LABEL_43;
    }
    do {
      v23 = *(_QWORD*)(v22 - 32);
      if (v23 != 0) {
        *(_QWORD*)(v22 - 24) = v23;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
      }
      v22 -= 96;
    } while (v22 != v21);
    v25 = v2[17];
    v2[18] = v21;
    if (v25 != 0) {
    LABEL_43:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
    }
  }
  v27 = v2[16];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v2[10];
  *v2 = gfx_render_Object_vtable;
  if (v28 != 0) {
    v29 = *(_QWORD*)v3;
    v2[11] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v29 + v30);
  }
  if ((v2[1] & 1) != 0 && v2[3] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v31 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
  }
  return result;
}

__int64 gfx_render_InstanceObject_CollectElements(__int64 result, __int64 a2,
                                                  _QWORD* a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  struct {
    char gap40_[4];
    int v19;
    __int64 v20;
    __int64 v21;
  } v19_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD* v24;
    __int64 v25;
  } v24_;

  if (*(_BYTE*)(result + 32) == 1 && *(_DWORD*)(result + 352) != 0) {
    v4 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 120) + 48LL))(
        *(_QWORD*)(result + 120));
    if ((int)result >= 1) {
      v6 = 0;
      while (1) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
            **(_QWORD**)(v4 + 120) + 72LL))(
            (void*)(&v24_.v24), *(_QWORD*)(v4 + 120), (unsigned int)v6);
        if (v24_.v24 != nullptr) {
          break;
        }
      LABEL_31:
        v15 = v24_.v25;
        if (v24_.v25 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak(v15);
        }
        ++v6;
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 120) + 48LL))(
            *(_QWORD*)(v4 + 120));
        if (v6 >= (int)result) {
          return result;
        }
      }
      v8 = (unsigned int*)v24_.v24[30];
      v7 = (unsigned int*)v24_.v24[31];
      while (1) {
        if (v8 == v7) {
          goto LABEL_31;
        }
        v10 = *v8;
        v11 = *(_DWORD*)(g3d_g_passKinds + 4LL * (int)v10);
        if (v11 >= 6) {
          String_60a250("bitset test argument out of range");
        }
        if (((*a3 >> v11) & 1) != 0) {
          v12 = v24_.v24[33];
          if (0xAAAAAAAAAAAAAAABLL * ((v24_.v24[34] - v12) >> 3) > (int)v10 &&
              v11 != 4 && (*(_BYTE*)(v12 + 24LL * (int)v10 + 21) & 1) != 0 &&
              ((*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                   **(_QWORD**)(v4 + 120) + 128LL))(*(_QWORD*)(v4 + 120),
                                                    (unsigned int)v6, *v8) &
               1) != 0) {
            v22_.v23 = v22_.v22;
            v22_.v22[2] = (v10 << 32) | v6;
            v22_.v22[0] = GameData_1fd1370;
            v22_.v22[1] = v4;
            v19_.v20 = 0;
            v19_.v21 = 0xFFFFFFFFLL;
            v19_.v19 = *(_DWORD*)(v4 + 36);
            if ((*(_BYTE*)(v4 + 8) & 1) != 0) {
              fw_text_String_CopyTerminated(v17_.v17, *(_QWORD*)(v4 + 24),
                                            *(_QWORD*)(v4 + 16));
            }
            else {
              v13 = *(_QWORD*)(v4 + 16);
              v17_.v17[0] = *(_QWORD*)(v4 + 8);
              v17_.v17[1] = v13;
              v17_.v18 = *(_QWORD*)(v4 + 24);
            }
            LODWORD(v19_.v21) = v10;
            ElementRenderer_a74470(a2, (__int64)v22_.v22, (__int64*)&v19_.v19);
            if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
              v14 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v14 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
            }
            if (v22_.v23 == v22_.v22) {
              v9 = 32;
            LABEL_11:
              (*(void (**)(__int64))(*v22_.v23 + v9))((__int64)v22_.v23);
              goto LABEL_12;
            }
            if (v22_.v23 != nullptr) {
              v9 = 40;
              goto LABEL_11;
            }
          }
        }
      LABEL_12:
        ++v8;
      }
    }
  }
  return result;
}

__int64 InstanceObject_bff9e0(__int64 result, int a2, __int64* a3, __int64* a4,
                              __int64* a5, __int64* a6)
{
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v24 = a3[4];
  v25 = a3[5];
  v26 = a3[6];
  v27 = a3[7];
  v20 = *a3;
  v21 = a3[1];
  v22 = a3[2];
  v23 = a3[3];
  v28 = *a4;
  v29 = a4[1];
  v30 = *a5;
  v31 = a5[1];
  v32 = *a6;
  v33 = a6[1];
  v6 = (_QWORD*)(*(_QWORD*)(result + 136) + 96LL * a2);
  v7 = (_QWORD*)v6[9];
  v8 = v6[10];
  if ((unsigned __int64)v7 >= v8) {
    v10 = v6[8];
    v11 = (char*)v7 - v10;
    v12 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v7 - v10) >> 4) + 1;
    if (v12 > 0x249249249249249LL) {
      GameRoutine_bffbf0();
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v8 - v10) >> 4);
    if (2 * v14 > v12) {
      v12 = 2 * v14;
    }
    if (v14 >= 0x124924924924924LL) {
      v15 = 0x249249249249249LL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 > 0x249249249249249LL) {
        GameRoutine_60a210(result);
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 112 * v15;
    v18 = &v11[v16];
    v9 = (__int64)&v11[v16 + 112];
    *((_QWORD*)v18 + 10) = v30;
    *((_QWORD*)v18 + 11) = v31;
    *((_QWORD*)v18 + 12) = v32;
    *((_QWORD*)v18 + 13) = v33;
    *((_QWORD*)v18 + 6) = v26;
    *((_QWORD*)v18 + 7) = v27;
    *((_QWORD*)v18 + 8) = v28;
    *((_QWORD*)v18 + 9) = v29;
    *((_QWORD*)v18 + 2) = v22;
    *((_QWORD*)v18 + 3) = v23;
    *((_QWORD*)v18 + 4) = v24;
    *((_QWORD*)v18 + 5) = v25;
    *(_QWORD*)v18 = v20;
    *((_QWORD*)v18 + 1) = v21;
    result = memcpy(v16, v10, v11);
    v6[8] = v16;
    v6[9] = v9;
    v6[10] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19);
    }
  }
  else {
    v9 = (__int64)(v7 + 14);
    v7[10] = v30;
    v7[11] = v31;
    v7[12] = v32;
    v7[13] = v33;
    v7[6] = v26;
    v7[7] = v27;
    v7[8] = v28;
    v7[9] = v29;
    v7[2] = v22;
    v7[3] = v23;
    v7[4] = v24;
    v7[5] = v25;
    *v7 = v20;
    v7[1] = v21;
  }
  v6[9] = v9;
  return result;
}

__int64 InstanceObject_bffc20(__int64** a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v8;
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
  __int64* v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;

  v2 = *a1;
  v3 = a1[1];
  v4 = (char*)v3 - (char*)*a1;
  v5 = 1 - 0x5555555555555555LL * (v4 >> 5);
  if (v5 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_bffec0();
  }
  if (0x5555555555555556LL * (((char*)a1[2] - (char*)v2) >> 5) > v5) {
    v5 = 0x5555555555555556LL * (((char*)a1[2] - (char*)v2) >> 5);
  }
  if (0xAAAAAAAAAAAAAAABLL * (((char*)a1[2] - (char*)v2) >> 5) >=
      0x155555555555555LL) {
    v5 = 0x2AAAAAAAAAAAAAALL;
  }
  if (v5 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_60a210(a1);
  }
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = 96 * v5;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       96 * v5, 16, 0);
  v11 = *(_QWORD*)(a2 + 32);
  v12 = *(_QWORD*)(a2 + 40);
  v13 = v10 + v4;
  v14 = v10;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 32) = v11;
  *(_QWORD*)(v13 + 40) = v12;
  *(_QWORD*)(v13 + 48) = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v13 + 56) = *(_DWORD*)(a2 + 56);
  v15 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)v13 = *(_QWORD*)a2;
  *(_QWORD*)(v13 + 8) = v15;
  v16 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(v13 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v13 + 24) = v16;
  v18 = *(_QWORD*)(a2 + 64);
  v17 = *(_QWORD*)(a2 + 72);
  v19 = v17 - v18;
  if (v17 != v18) {
    v34 = v9;
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v19 >> 4)) >=
        0x24924924924924ALL) {
      GameRoutine_bffbf0();
    }
    v20 = fw_memory_HeapManager_Allocate(*v8, v19, 16, 0);
    v21 = v20 + v19;
    *(_QWORD*)(v13 + 64) = v20;
    *(_QWORD*)(v13 + 80) = v20 + v19;
    memcpy(v20, v18, v19);
    *(_QWORD*)(v13 + 72) = v21;
    v9 = v34;
  }
  v22 = v14 + v9;
  if (v2 != v3) {
    v23 = v2;
    v24 = v13 - v4;
    do {
      v25 = *((_DWORD*)v23 + 14);
      *(_QWORD*)(v24 + 40) = v23[5];
      v26 = v23[3];
      *(_QWORD*)(v24 + 8) = v23[1];
      *(_QWORD*)(v24 + 24) = v26;
      v27 = *v23;
      *(_QWORD*)(v24 + 16) = v23[2];
      *(_QWORD*)v24 = v27;
      v28 = v23[4];
      v29 = v23[6];
      *(_DWORD*)(v24 + 56) = v25;
      *(_QWORD*)(v24 + 48) = v29;
      *(_QWORD*)(v24 + 32) = v28;
      *(_QWORD*)(v24 + 64) = v23[8];
      *(_QWORD*)(v24 + 72) = v23[9];
      *(_QWORD*)(v24 + 80) = v23[10];
      v23[9] = 0;
      v23[10] = 0;
      v23[8] = 0;
      v23 += 12;
      v24 += 96;
    } while (v23 != v3);
    do {
      v30 = v2[8];
      if (v30 != 0) {
        v2[9] = v30;
        if (*(_QWORD*)(*v8 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v31);
      }
      v2 += 12;
    } while (v2 != v3);
    v2 = *a1;
  }
  *a1 = (__int64*)(v13 - v4);
  a1[1] = (__int64*)(v13 + 96);
  a1[2] = (__int64*)v22;
  if (v2 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v32);
  }
  return v13 + 96;
}

__int64* InstanceObject_bffee0(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  char* v19;
  __int64* v23;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = *(a2 - 1);
      v7 = *result;
      if (*(float*)(**a3 + 96 * v6 + 56) <
          *(float*)(**a3 + 96 * *result + 56)) {
        *result = v6;
        *(a2 - 1) = v7;
      }
    }
    else if ((__int64)a4 > 128) {
      v16 = a4 >> 1;
      v18 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v23 = result;
        v26 = a5;
        InstanceObject_c00180(result, &result[v16], a3, a4 >> 1, a5);
        v27 = &v26[v16];
        result = InstanceObject_c00180(&v23[v16], a2, a3, v18, v27);
        v28 = &v26[a4];
        v29 = v27;
        while (v29 != v28) {
          v30 = *v29;
          v31 = **a3;
          v32 = *(float*)(v31 + 96 * *v29 + 56);
          v33 = *(float*)(v31 + 96 * *v26 + 56);
          if (v32 < v33) {
            v34 = 0;
          }
          else {
            v30 = *v26;
            v34 = 8;
          }
          v26 = (__int64*)((char*)v26 + v34);
          if (v32 >= v33) {
            v35 = 0;
          }
          else {
            v35 = 8;
          }
          *v23++ = v30;
          v29 = (__int64*)((char*)v29 + v35);
          if (v26 == v27) {
            while (v29 != v28) {
              v37 = *v29++;
              *v23++ = v37;
            }
            return result;
          }
        }
        while (v26 != v27) {
          v36 = *v26++;
          *v23++ = v36;
        }
      }
      else {
        v19 = (char*)result;
        InstanceObject_bffee0(result, &result[v16], a3, a4 >> 1, a5, a6);
        InstanceObject_bffee0((__int64*)&v19[8 * v16], a2, a3, v18, a5, a6);
        return (__int64*)InstanceObject_c00420(v19, &v19[8 * v16], (char*)a2,
                                               a3, v16, v18, (__int64)a5, a6);
      }
    }
    else if (result != a2) {
      v8 = result + 1;
      if (result + 1 != a2) {
        v9 = *a3;
        v10 = 0;
        v11 = result;
        do {
          v14 = *v11;
          v13 = v11[1];
          v11 = v8;
          if (*(float*)(*v9 + 96 * v13 + 56) < *(float*)(*v9 + 96 * v14 + 56)) {
            v15 = v10;
            do {
              *(__int64*)((char*)result + v15 + 8) = v14;
              if (v15 == 0) {
                v12 = result;
                goto LABEL_11;
              }
              v14 = *(__int64*)((char*)result + v15 - 8);
              v15 -= 8;
            } while (*(float*)(**a3 + 96 * v13 + 56) <
                     *(float*)(**a3 + 96 * v14 + 56));
            v12 = (__int64*)((char*)result + v15 + 8);
          LABEL_11:
            *v12 = v13;
            v9 = *a3;
          }
          ++v8;
          v10 += 8;
        } while (v11 + 1 != a2);
      }
    }
  }
  return result;
}

__int64* InstanceObject_c00180(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 1);
      if (*(float*)(**a3 + 96 * v5 + 56) >=
          *(float*)(**a3 + 96 * *result + 56)) {
        *a5 = *result;
        v6 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        v6 = *result;
      }
      a5[1] = v6;
    }
    else if (a4 == 1) {
      *a5 = *result;
    }
    else if ((__int64)a4 > 8) {
      v16 = a4 >> 1;
      v17 = result;
      v22 = &result[a4 >> 1];
      v23 = 8 * (a4 >> 1);
      InstanceObject_bffee0_alt1(result, v22, a3, v16, a5, v16);
      result =
          InstanceObject_bffee0_alt1(v22, a2, a3, a4 - v16, &a5[v16], a4 - v16);
      if (v23 != 0) {
        v24 = v22;
        v25 = a5;
        v26 = a2;
        v27 = v17;
        while (v24 != a2) {
          v28 = *v24;
          v29 = **a3;
          v30 = *(float*)(v29 + 96 * *v24 + 56);
          v31 = *(float*)(v29 + 96 * *v27 + 56);
          if (v30 < v31) {
            v32 = 8;
          }
          else {
            v28 = *v27;
            v32 = 0;
          }
          v24 = (__int64*)((char*)v24 + v32);
          if (v30 >= v31) {
            v33 = 8;
          }
          else {
            v33 = 0;
          }
          *v25++ = v28;
          v27 = (__int64*)((char*)v27 + v33);
          if (v27 == v22) {
            goto LABEL_38;
          }
        }
        while (v27 != v22) {
          v34 = *v27++;
          *v25++ = v34;
        }
      }
      else {
        v24 = v22;
        v25 = a5;
        v26 = a2;
      LABEL_38:
        while (v24 != v26) {
          v35 = *v24++;
          *v25++ = v35;
        }
      }
    }
    else if (result != a2) {
      v7 = *result++;
      *a5 = v7;
      if (result != a2) {
        v8 = 0;
        v9 = a5;
        v10 = a5;
        do {
          v12 = *v10++;
          v11 = v12;
          if (*(float*)(**a3 + 96 * *result + 56) >=
              *(float*)(**a3 + 96 * v12 + 56)) {
            *v10 = *result;
          }
          else {
            v9[1] = v11;
            v13 = a5;
            if (v9 != a5) {
              v14 = v8;
              while (1) {
                v13 = (__int64*)((char*)a5 + v14);
                v15 = *(__int64*)((char*)a5 + v14 - 8);
                if (*(float*)(**a3 + 96 * *result + 56) >=
                    *(float*)(**a3 + 96 * v15 + 56)) {
                  break;
                }
                v14 -= 8;
                *v13 = v15;
                if (v14 == 0) {
                  v13 = a5;
                  break;
                }
              }
            }
            *v13 = *result;
          }
          ++result;
          v8 += 8;
          v9 = v10;
        } while (result != a2);
      }
    }
  }
  return result;
}

char* InstanceObject_c00420(char* result, char* a2, char* a3, __int64** a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  char* v31;
  char* v32;
  char* v33;
  char* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64** v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64** v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  _QWORD* v55;
  _QWORD* v56;
  char* v57;
  __int64 v58;
  bool v59;
  char v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64** v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float v73;
  float v74;
  __int64 v75;
  _QWORD* v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  char* v92;
  char* v93;
  char* v94;

  if (a6 != 0) {
    while (a5 > a8 && a6 > a8) {
      if (a5 == 0) {
        return result;
      }
      v9 = 0;
      v10 = 0;
      v11 = **a4;
      while (1) {
        v12 = *(_QWORD*)&result[8 * v10];
        if (*(float*)(v11 + 96LL * *(_QWORD*)a2 + 56) <
            *(float*)(v11 + 96 * v12 + 56)) {
          break;
        }
        ++v10;
        v9 -= 8;
        if (a5 == v10) {
          return result;
        }
      }
      v13 = a5 - v10;
      v14 = &result[-v9];
      if (a5 - v10 >= a6) {
        if (a5 - 1 == v10) {
          *(_QWORD*)&result[8 * v10] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v12;
          return result;
        }
        v24 = v13 / 2;
        v25 = &result[8 * (v13 / 2)];
        if (a3 == a2) {
          v16 = a3;
          v31 = a3;
        }
        else {
          v26 = (a3 - a2) >> 3;
          v16 = a2;
          do {
            v27 = v26 >> 1;
            v28 = &v16[8 * (v26 >> 1)];
            v30 = *(_QWORD*)v28;
            v29 = v28 + 8;
            v26 += ~(v26 >> 1);
            if (*(float*)(v11 + 96 * v30 + 56) <
                *(float*)(v11 + 96LL * *(_QWORD*)&v25[8 * v10] + 56)) {
              v16 = v29;
            }
            else {
              v26 = v27;
            }
          } while (v26 != 0);
          v31 = a2;
        }
        v17 = &v25[-v9];
        v15 = (v16 - v31) >> 3;
      }
      else {
        v15 = a6 / 2;
        v16 = &a2[8 * (a6 / 2)];
        if (v14 == a2) {
          v17 = a2;
          v23 = a2;
        }
        else {
          v17 = &result[-v9];
          v18 = (a2 - result + v9) >> 3;
          do {
            v19 = v18 >> 1;
            v20 = &v17[8 * (v18 >> 1)];
            v22 = *(_QWORD*)v20;
            v21 = v20 + 8;
            v18 += ~(v18 >> 1);
            if (*(float*)(v11 + 96LL * *(_QWORD*)v16 + 56) <
                *(float*)(v11 + 96 * v22 + 56)) {
              v18 = v19;
            }
            else {
              v17 = v21;
            }
          } while (v18 != 0);
          v23 = v14;
        }
        v24 = (v17 - v23) >> 3;
      }
      v32 = v16;
      if (v17 != a2) {
        v32 = v17;
        if (a2 != v16) {
          v33 = v17 + 8;
          if (v17 + 8 == a2) {
            v40 = v16 - a2;
            v41 = a5;
            v42 = a6;
            v43 = a4;
            v44 = v15;
            v87 = *(_QWORD*)v17;
            v93 = a3;
            v89 = a7;
            v91 = v14;
            memmove(v17, v17 + 8, v16 - a2);
            a7 = v89;
            a6 = v42;
            v32 = &v17[v40];
            v15 = v44;
            a4 = v43;
            a5 = v41;
            *(_QWORD*)&v17[v40] = v87;
            v14 = v91;
            a3 = v93;
          }
          else {
            v34 = a2 + 8;
            if (a2 + 8 == v16) {
              v45 = *((_QWORD*)v16 - 1);
              v32 = v17 + 8;
              if (v16 - 8 != v17) {
                v94 = a3;
                v46 = a5;
                v88 = a6;
                v47 = a4;
                v48 = v15;
                v90 = a7;
                v92 = v14;
                memmove(v17 + 8, v17, v16 - 8 - v17);
                a7 = v90;
                v14 = v92;
                a3 = v94;
                v15 = v48;
                a4 = v47;
                a5 = v46;
                a6 = v88;
              }
              *(_QWORD*)v17 = v45;
            }
            else {
              v35 = (char*)(a2 - v17);
              v36 = (a2 - v17) >> 3;
              v37 = (v16 - a2) >> 3;
              if (v36 == v37) {
                do {
                  v38 = *((_QWORD*)v33 - 1);
                  *((_QWORD*)v33 - 1) = *((_QWORD*)v34 - 1);
                  *((_QWORD*)v34 - 1) = v38;
                  if (v33 == a2) {
                    break;
                  }
                  v33 += 8;
                  v39 = v34 == v16;
                  v34 += 8;
                } while (!v39);
                v32 = a2;
              }
              else {
                v49 = (a2 - v17) >> 3;
                do {
                  v50 = v49;
                  v49 = v37;
                  v37 = v50 % v37;
                } while (v37 != 0);
                if (8 * v49 != 0) {
                  v51 = &v17[8 * v49];
                  do {
                    v53 = *((_QWORD*)v51 - 1);
                    v51 -= 8;
                    v52 = v53;
                    v54 = &v51[(_QWORD)v35];
                    v55 = v51;
                    do {
                      v56 = v54;
                      *v55 = *(_QWORD*)v54;
                      v57 = &v35[(_QWORD)v54];
                      v58 = (v16 - v54) >> 3;
                      v59 = __OFSUB__(v36, v58);
                      v61 = v36 - v58;
                      v60 = (v61 < 0) ^ v59;
                      v54 = &v17[8 * v61];
                      if (v60) {
                        v54 = v57;
                      }
                      v55 = v56;
                    } while (v54 != v51);
                    *v56 = v52;
                  } while (v51 != v17);
                }
                v32 = &v17[v16 - a2];
              }
            }
          }
        }
      }
      v62 = a6 - v15;
      v63 = a5 - v24 - v10;
      if (v24 + v15 >= a6 + a5 - (v24 + v15) - v10) {
        v65 = a4;
        v67 = a5 - v24 - v10;
        v66 = a7;
        v68 = v14;
        v62 = v15;
        v63 = v24;
        InstanceObject_c00420(v32, v16, a3, a4, v67, a6 - v15, a7, a8);
        result = v68;
        v16 = v17;
        a3 = v32;
      }
      else {
        v64 = a3;
        v65 = a4;
        v66 = a7;
        InstanceObject_c00420(v14, v17, v32, a4, v24, v15, a7, a8);
        a3 = v64;
        result = v32;
      }
      a5 = v63;
      a6 = v62;
      a2 = v16;
      a7 = v66;
      a4 = v65;
      if (v62 == 0) {
        return result;
      }
    }
    if (a5 <= a6) {
      if (result != a2) {
        v75 = -a7;
        v76 = (_QWORD*)a7;
        v77 = result;
        do {
          v78 = *(_QWORD*)v77;
          v77 += 8;
          v75 -= 8;
          *v76++ = v78;
        } while (v77 != a2);
        while (a2 != a3) {
          v79 = *(_QWORD*)a2;
          v80 = **a4;
          v81 = *(float*)(v80 + 96LL * *(_QWORD*)a2 + 56);
          v82 = *(float*)(v80 + 96LL * *(_QWORD*)a7 + 56);
          if (v81 < v82) {
            v83 = 8;
          }
          else {
            v79 = *(_QWORD*)a7;
            v83 = 0;
          }
          a2 += v83;
          if (v81 >= v82) {
            v84 = 8;
          }
          else {
            v84 = 0;
          }
          *(_QWORD*)result = v79;
          result += 8;
          a7 += v84;
          if (v76 == (_QWORD*)a7) {
            return result;
          }
        }
        return (char*)memmove(result, a7, -(a7 + v75));
      }
    }
    else if (a2 != a3) {
      v69 = 0;
      do {
        *(_QWORD*)(a7 + v69) = *(_QWORD*)&a2[v69];
        v69 += 8;
      } while (&a2[v69] != a3);
      v70 = a7 + v69;
      while (a2 != result) {
        v71 = *((_QWORD*)a2 - 1);
        v72 = **a4;
        v73 = *(float*)(v72 + 96LL * *(_QWORD*)(v70 - 8) + 56);
        v74 = *(float*)(v72 + 96 * v71 + 56);
        if (v73 < v74) {
          a2 -= 8;
        }
        else {
          v71 = *(_QWORD*)(v70 - 8);
        }
        if (v73 >= v74) {
          v70 -= 8;
        }
        *((_QWORD*)a3 - 1) = v71;
        a3 -= 8;
        if (v70 == a7) {
          return result;
        }
      }
      if (a7 != v70) {
        v85 = -8;
        do {
          v86 = *(_QWORD*)(v70 - 8);
          v70 -= 8;
          *(_QWORD*)&a3[v85] = v86;
          v85 -= 8;
        } while (v70 != a7);
      }
    }
  }
  return result;
}

__int64 gfx_render_InstanceObject_CollectElements_lambda0_Invoke(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  char v6;
  __int64 v8;
  __int64 v9;
  void (**v10)(__int64, __int64, __int64, __int64, __int64);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_DWORD*)(v2 + 256);
  if (v3 >= 1) {
    v4 = *(_DWORD*)(result + 16);
    v5 = *(unsigned int*)(result + 20);
    v6 = 1;
    v8 = 0;
    v9 = 0;
    v10 = (void (**)(__int64, __int64, __int64, __int64,
                     __int64))GameData_212e3b0[0];
    do {
      if (*(_DWORD*)(*(_QWORD*)(v2 + 232) + 4 * v9) != 0) {
        if ((v6 & 1) != 0) {
          (*(void (**)(_QWORD, __int64*, _QWORD, _QWORD, __int64))(
              **(_QWORD**)(v2 + 120) + 88LL))(*(_QWORD*)(v2 + 120), a2, v4, 0,
                                              v5);
          (*(void (**)(_QWORD, __int64*, _QWORD, _QWORD, __int64))(
              **(_QWORD**)(v2 + 120) + 80LL))(*(_QWORD*)(v2 + 120), a2, v4, 0,
                                              v5);
        }
        v11 = *a2;
        v12 = *(_QWORD*)(v2 + 184) + v8 +
              16LL * *(int*)(*(_QWORD*)(v2 + 184) + v8 + 16);
        v13 = *(_QWORD*)(v12 + 24);
        v14 = *(_QWORD*)(v12 + 32);
        (*v10)(*a2 + 8, 0, 11, v13, v14);
        (*v10)(v11 + 8, 1, 11, v13, v14);
        v15 = *a2;
        v16 = *(_QWORD*)(v2 + 208) + v8 +
              16LL * *(int*)(*(_QWORD*)(v2 + 208) + v8 + 16);
        v17 = *(_QWORD*)(v16 + 24);
        v18 = *(_QWORD*)(v16 + 32);
        (*v10)(*a2 + 8, 0, 12, v17, v18);
        (*v10)(v15 + 8, 1, 12, v17, v18);
        result = (*(__int64 (**)(_QWORD, __int64*, _QWORD, _QWORD, _QWORD,
                                 _QWORD))(**(_QWORD**)(v2 + 120) + 96LL))(
            *(_QWORD*)(v2 + 120), a2, v4, 0,
            *(unsigned int*)(*(_QWORD*)(v2 + 232) + 4 * v9), 0);
        v3 = *(_DWORD*)(v2 + 256);
        v6 = 0;
      }
      ++v9;
      v8 += 56;
    } while (v9 < v3);
  }
  return result;
}

#pragma GCC visibility pop
