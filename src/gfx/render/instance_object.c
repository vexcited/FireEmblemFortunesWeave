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
__int64* InstanceObject_bffee0(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5,
                               signed __int64 a6);
__int64* InstanceObject_c00180(__int64* result, __int64* a2, __int64** a3,
                               unsigned __int64 a4, __int64* a5);
__int64 gfx_render_InstanceObject_CollectElements_lambda0_Invoke(__int64 result,
                                                                 __int64* a2);

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
                               unsigned __int64 a4, __int64* a5,
                               signed __int64 a6)
{
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
  __int64* v19;
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
        ((void (*)(void))InstanceObject_c00180_alt1)();
        v27 = &v26[v16];
        result =
            (__int64*)InstanceObject_c00180_alt1(&v23[v16], a2, a3, v18, v27);
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
        v19 = result;
        InstanceObject_bffee0(result, &result[v16], a3, a4 >> 1, a5, a6);
        InstanceObject_bffee0(&v19[v16], a2, a3, v18, a5, a6);
        return (__int64*)GameRoutine_c00420(v19, &v19[v16], a2, a3, v16, v18,
                                            a5, a6);
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
      InstanceObject_bffee0(result, v22, a3, v16, a5, v16);
      result = InstanceObject_bffee0(v22, a2, a3, a4 - v16, &a5[v16], a4 - v16);
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
