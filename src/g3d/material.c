#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gfx_shader_Material_Destroy_Material(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*g3d_Material_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Material_Destructor(_QWORD* a1);
__int64 Material_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "Material_DeletingDestructor");
__int64* GameRoutine_adf6e0(_QWORD*, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
__int64 strncpy(_QWORD, _QWORD, _QWORD);
extern char GameData_1a9f09e;
__int64 Material_SetFloat(__int64 a1, char* a2, __int64 a3, float a4);
void gfx_shader_Material_Destroy_Material_alt1(__int64) __asm__(
    "gfx_shader_Material_Destroy_Material");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Material_DeletingDestructor(_QWORD* a1);

__int64 Material_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[53];
  *a1 = g3d_Material_vtable;
  if (v1 != 0) {
    v3 = a1[54];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = a1[54];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = a1[53];
    a1[54] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  return gfx_shader_Material_Destroy_Material(a1);
}

void Material_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[53];
  *a1 = g3d_Material_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[54];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = a1[54];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = a1[53];
    a1[54] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10, v1);
    }
  }
  gfx_shader_Material_Destroy_Material_alt1((__int64)a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v11, (__int64)a1);
}

__int64 Material_SetFloat(__int64 a1, char* a2, __int64 a3, float a4)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  __int64* v9;
  char* v10;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int16* v25;
  unsigned int v26;
  char* v27;
  __int64 v28;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  char* v39;
  _QWORD v40[17];

  v4 = *(_QWORD**)(a1 + 8);
  v39 = a2;
  v40[0] = a3;
  if (v4 != nullptr && v4[19] != v4[18] &&
      (v9 = GameRoutine_adf6e0(v4 + 21, &v39)) != nullptr &&
      *((_DWORD*)v9 + 10) == 0) {
    v26 = 1;
    *(float*)(*(_QWORD*)(a1 + 24) + 4LL * *((int*)v9 + 11)) = a4;
    v35 = *(_DWORD*)(a1 + 48);
    v36 = *((_DWORD*)v9 + 11);
    if (v35 <= 1) {
      v35 = 1;
    }
    *(_DWORD*)(a1 + 48) = v35;
    v37 = *(_DWORD*)(a1 + 56);
    if (v36 < v37) {
      v37 = v36;
    }
    if (*(_DWORD*)(a1 + 60) <= v36 + 1) {
      v38 = v36 + 1;
    }
    else {
      v38 = *(_DWORD*)(a1 + 60);
    }
    *(_DWORD*)(a1 + 56) = v37;
    *(_DWORD*)(a1 + 60) = v38;
  }
  else {
    __builtin_memset(v40, 0, 128);
    v39 = nullptr;
    if (a3 != 0) {
      if (a2[a3] != 0) {
        if ((unsigned __int64)(a3 - 128) > 0xFFFFFFFFFFFFFF7ELL) {
          v10 = (char*)v40;
        }
        else {
          v10 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, a3 + 1, 16, 0);
          memset(v10, 0, a3 + 1);
          v39 = v10;
        }
        strncpy(v10, a2, a3);
        v10[a3] = 0;
      }
      else {
        v10 = a2;
      }
      v14 = *(__int64**)(a1 + 416);
    }
    else {
      v14 = *(__int64**)(a1 + 416);
      v10 = &GameData_1a9f09e;
    }
    v40[16] = v10;
    v15 = *v14;
    v16 = *(_QWORD*)(*v14 + 88);
    if (v16 == 0) {
      goto LABEL_24;
    }
    v17 = strlen(v10);
    v18 = v16 + 8;
    v19 = *(unsigned __int16*)(v16 + 12);
    v20 = v16 + 8 + 16 * v19;
    v21 = *(_DWORD*)v20;
    if (*(_DWORD*)(v16 + 8) < *(_DWORD*)v20) {
      do {
        v24 = (__int64)v21 >> 3;
        if (v17 > v24) {
          v22 = ((unsigned __int8)v10[v17 + ~v24] >> (v21 & 7)) & 1;
        }
        else {
          v22 = 0;
        }
        v19 = *(unsigned __int16*)(v16 + 12 + 16 * v19 + 2 * v22);
        v23 = v21 < *(_DWORD*)(v18 + 16 * v19);
        v21 = *(_DWORD*)(v18 + 16 * v19);
      } while (v23);
      v20 = v18 + 16 * v19;
    }
    v25 = *(unsigned __int16**)(v20 + 8);
    if (v17 != *v25 || (unsigned int)memcmp(v25 + 1, v10, v17) != 0 ||
        (v30 = v20 - v16 - 24, v31 = (unsigned __int64)v30 >> 4,
         (unsigned int)((unsigned __int64)v30 >> 4) == -1)) {
    LABEL_24:
      v26 = 0;
    }
    else {
      v32 = *(_QWORD*)(v15 + 80);
      v33 = v32 + 32LL * (int)(v30 >> 4);
      if ((*(_DWORD*)(v33 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v14[2] + 4LL * ((int)v31 >> 5)) |= 1 << v31;
        *((_BYTE*)v14 + 44) |= 1u;
        v32 = *(_QWORD*)(*v14 + 80);
      }
      v34 = *(unsigned __int16*)(v33 + 24);
      if ((*(_DWORD*)(v32 + 32 * v34 + 20) & 0x80000000) == 0) {
        *(_DWORD*)(v14[2] + ((v34 >> 3) & 0x1FFC)) |= 1 << v34;
        *((_BYTE*)v14 + 44) |= 1u;
      }
      v26 = 1;
      *(float*)(v14[9] + *(unsigned __int16*)(v33 + 18)) = a4;
    }
    v27 = v39;
    v39 = nullptr;
    if (v27 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (_QWORD)(v27));
    }
  }
  return v26;
}

#pragma GCC visibility pop
