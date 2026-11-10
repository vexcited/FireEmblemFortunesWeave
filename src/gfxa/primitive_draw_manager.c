#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1996700(void);
__int64 GameRoutine_1999040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19994c0(_QWORD);
__int64 GameRoutine_1999780(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_beefc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64 (*GameData_211d848[])();
extern __int64 (*GameData_211d8c8[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_1995160(void);
void __attribute__((noreturn)) GameRoutine_19953a0(void);
void __attribute__((noreturn)) GameRoutine_19953c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1995730(void);
void __attribute__((noreturn)) GameRoutine_1997cf0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
__int64* PrimitiveDrawManager_19928f0(__int64* result, __int128* a2, float a3,
                                      float a4, float a5, float a6);
__int64 gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(__int64 result,
                                                       __int64 a2, __int64 a3);
__int64 PrimitiveDrawManager_19932a0(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, int a5);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned int a4);
__int64 PrimitiveDrawManager_1994180(__int64 result);
__int64 PrimitiveDrawManager_1995020(__int64 result, _DWORD* a2);
__int64 PrimitiveDrawManager_1995180(__int64 result, __int64 a2, __int64 a3);
__int64 PrimitiveDrawManager_19953e0(__int64 a1, __int64 a2);
__int64 gfxa_PrimitiveDrawManager_Impl_initializeGfxObjects_closure_Invoke(
    __int64 result, __int64 a2);
__int64 PrimitiveDrawManager_1996450(_QWORD* a1, __int64 a2, unsigned int a3);
_QWORD* PrimitiveDrawManager_1997990(__int64* a1, _QWORD* a2, _QWORD* a3);
__int64 PrimitiveDrawManager_1997bc0(__int64* a1, __int64 a2);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64
gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx_closure_Invoke(__int64 a1,
                                                              __int64 a2);

__int64* PrimitiveDrawManager_19928f0(__int64* result, __int128* a2, float a3,
                                      float a4, float a5, float a6)
{
  __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  float v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;

  v6 = *result;
  v7 = *a2;
  *(float*)&v8 = a3 + (float)(a5 * 0.0);
  v9 = *(_QWORD*)(*result + 18736);
  v10 = *(_DWORD*)(*result + 19200);
  v11 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v10 + 1;
  if (v10 <= 262142) {
    *(float*)&v12 = a3 + (float)(a5 * 0.0);
    *((float*)&v12 + 1) = a4 + (float)(a6 * 0.0);
    v13 = *(_QWORD*)(v6 + 19136) + 40LL * (v10 + 1);
    *(_QWORD*)(v13 + 8) = 0;
    *(_QWORD*)(v13 + 16) = 0;
    *(_OWORD*)(v13 + 24) = v7;
    *(_QWORD*)v13 = v12;
    v14 = v9 + 1440LL * v11 + 4LL * *(int*)(v9 + 1440LL * v11 + 256);
    ++*(_DWORD*)(v14 + 260);
  }
  v15 = *result;
  *(float*)&v16 = a3 + a5;
  v17 = *a2;
  v18 = *(_QWORD*)(*result + 18736);
  v19 = *(_DWORD*)(*result + 19200);
  v20 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v19 + 1;
  if (v19 <= 262142) {
    LODWORD(v21) = v16;
    *((float*)&v21 + 1) = a4 + (float)(a6 * 0.0);
    v22 = *(_QWORD*)(v15 + 19136) + 40LL * (v19 + 1);
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 16) = 0;
    *(_OWORD*)(v22 + 24) = v17;
    *(_QWORD*)v22 = v21;
    v23 = v18 + 1440LL * v20 + 4LL * *(int*)(v18 + 1440LL * v20 + 256);
    ++*(_DWORD*)(v23 + 260);
  }
  v24 = *result;
  v25 = *a2;
  v26 = a4 + a6;
  v27 = *(_QWORD*)(*result + 18736);
  v28 = *(_DWORD*)(*result + 19200);
  v29 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v28 + 1;
  if (v28 <= 262142) {
    *((float*)&v16 + 1) = v26;
    v30 = *(_QWORD*)(v24 + 19136) + 40LL * (v28 + 1);
    *(_QWORD*)v30 = v16;
    *(_QWORD*)(v30 + 8) = 0;
    *(_QWORD*)(v30 + 16) = 0;
    *(_OWORD*)(v30 + 24) = v25;
    v31 = v27 + 1440LL * v29 + 4LL * *(int*)(v27 + 1440LL * v29 + 256);
    ++*(_DWORD*)(v31 + 260);
  }
  v32 = *result;
  v33 = *a2;
  v34 = *(_QWORD*)(*result + 18736);
  v35 = *(_DWORD*)(*result + 19200);
  v36 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v35 + 1;
  if (v35 <= 262142) {
    *((float*)&v8 + 1) = v26;
    v37 = *(_QWORD*)(v32 + 19136) + 40LL * (v35 + 1);
    *(_QWORD*)v37 = v8;
    *(_QWORD*)(v37 + 8) = 0;
    *(_QWORD*)(v37 + 16) = 0;
    *(_OWORD*)(v37 + 24) = v33;
    v38 = v34 + 1440LL * v36 + 4LL * *(int*)(v34 + 1440LL * v36 + 256);
    ++*(_DWORD*)(v38 + 260);
  }
  return result;
}

__int64 gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(__int64 result,
                                                       __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  unsigned __int64 v45;
  char* v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  __int64 v56;
  _BYTE* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  bool v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  char* v77;
  __int64* v78;

  v3 = result + 245760;
  v69 = result;
  v6 = *(_QWORD*)(result + 248632);
  v7 = *(_QWORD*)(result + 248640);
  v8 = v6;
  if (v6 != v7) {
    v8 = *(_QWORD*)(result + 248632);
    while (1) {
      v9 = *(unsigned __int8*)(v8 + 32);
      v10 = *(_QWORD*)(v8 + 40);
      if ((v9 & 1) == 0) {
        v10 = v9 >> 1;
      }
      if (a3 == v10) {
        v11 = (v9 & 1) != 0 ? *(_QWORD*)(v8 + 48) : v8 + 33;
        result = memcmp(a2, v11, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v8 += 88;
      if (v8 == v7) {
        goto LABEL_13;
      }
    }
  }
  if (v8 != v7) {
    ++*(_DWORD*)(v8 + 80);
    return result;
  }
LABEL_13:
  if (v6 == v7) {
    return result;
  }
  v12 = 0;
  while (1) {
    v16 = v6 + 88 * v12;
    v17 = *(_BYTE*)(v16 + 32);
    result = v16 + 32;
    v18 = v17 >> 1;
    if ((v17 & 1) != 0) {
      v19 = *(_QWORD*)(result + 8);
    }
    else {
      v19 = v18;
    }
    if (v19 != 0) {
      goto LABEL_20;
    }
    GameRoutine_60a060(result, a2, a3);
    v20 = *(_QWORD*)(v3 + 2872) + 88 * v12;
    v21 = *(unsigned __int8*)(v20 + 32);
    v22 = v20 + 33;
    v25 = v20 + 40;
    v23 = *(_QWORD*)(v20 + 40);
    v24 = *(_QWORD*)(v25 + 8);
    v26 = (v21 & 1) == 0;
    v27 = v21 >> 1;
    if (v26) {
      v28 = v27;
    }
    else {
      v28 = v23;
    }
    if (v26) {
      v29 = v22;
    }
    else {
      v29 = v24;
    }
    result = (*(__int64 (**)(_QWORD, __int64, unsigned __int64, __int64))(
        **(_QWORD**)(*(_QWORD*)(v69 + 8) + 13432LL) + 96LL))(
        *(_QWORD*)(*(_QWORD*)(v69 + 8) + 13432LL), v29, v28, 255);
    v30 = *(_QWORD*)(v3 + 2872) + 88 * v12;
    v33 = *(unsigned __int8*)(v30 + 32);
    v31 = v30 + 32;
    v32 = v33;
    if ((result & 1) == 0) {
      if ((v32 & 1) != 0) {
        *(_QWORD*)(v31 + 8) = 0;
        v57 = *(_BYTE**)(v31 + 16);
      }
      else {
        *(_BYTE*)v31 = 0;
        v57 = (_BYTE*)(v31 + 1);
      }
      *v57 = 0;
      return result;
    }
    v34 = *(_QWORD*)(v31 + 8);
    if ((v32 & 1) != 0) {
      v35 = *(_QWORD*)(v31 + 16);
    }
    else {
      v35 = v31 + 1;
    }
    v36 = v32 >> 1;
    if ((v32 & 1) != 0) {
      v36 = v34;
    }
    v37 = v36;
    do {
      if (v37 == 0) {
        v39 = 0;
        goto LABEL_43;
      }
      v38 = *(unsigned __int8*)(v35 - 1 + v37--);
    } while (v38 != 47);
    v39 = v37 + 1;
    if (v37 + 1 > v36) {
      String_60a230(result);
    }
  LABEL_43:
    v40 = v36 - v39;
    if (v36 - v39 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_122:
      String_60a1d0(result);
    }
    if (v40 >= 0x17) {
      v42 = (v40 | 7) == 0x17 ? 26LL : (v40 | 7) + 1;
      v41 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v42,
                                                  16, 0);
      v76 = v40;
      v77 = v41;
      v75 = v42 | 1;
    }
    else {
      v41 = (char*)&v75 + 1;
      LOBYTE(v75) = 2 * v40;
      if (v36 == v39) {
        goto LABEL_52;
      }
    }
    result = memmove(v41, v35 + v39, v40);
  LABEL_52:
    v41[v40] = 0;
    v43 = (unsigned __int64)(unsigned __int8)v75 >> 1;
    if ((v75 & 1) != 0) {
      v44 = v77;
    }
    else {
      v44 = (char*)&v75 + 1;
    }
    if ((v75 & 1) != 0) {
      v43 = v76;
    }
    v45 = v43;
    while (v45 != 0) {
      v46 = &v44[v45--];
      if (*(v46 - 1) == 46) {
        goto LABEL_62;
      }
    }
    v45 = -1;
  LABEL_62:
    if (v43 >= v45) {
      v47 = v45;
    }
    else {
      v47 = v43;
    }
    if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_122;
    }
    if (v47 >= 0x17) {
      v49 = (v47 | 7) == 0x17 ? 26LL : (v47 | 7) + 1;
      v48 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v49,
                                                  16, 0);
      v73 = v47;
      v74 = v48;
      v72 = v49 | 1;
    }
    else {
      v48 = (char*)&v72 + 1;
      LOBYTE(v72) = 2 * v47;
      if (v47 == 0) {
        goto LABEL_74;
      }
    }
    memmove(v48, v44, v47);
  LABEL_74:
    v50 = v75;
    v48[v47] = 0;
    if ((v50 & 1) != 0 && v77 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v51);
    }
    v75 = v72;
    v76 = v73;
    v77 = v74;
    result = *(_QWORD*)(v3 + 2872) + 88 * v12 + 56;
    if ((__int64*)result == &v75) {
      goto LABEL_91;
    }
    if ((*(_BYTE*)result & 1) != 0) {
      if ((v75 & 1) != 0) {
        v54 = v77;
      }
      else {
        v54 = (char*)&v75 + 1;
      }
      if ((v75 & 1) != 0) {
        v55 = v76;
      }
      else {
        v55 = (unsigned __int64)(unsigned __int8)v75 >> 1;
      }
      result = SpineModel_64dde0(result, v54, v55);
    LABEL_91:
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
      goto LABEL_92;
    }
    if ((v75 & 1) != 0) {
      result = GameRoutine_64df20(result, v77, v76);
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
    }
    else {
      v52 = v75;
      v53 = v77;
      *(_QWORD*)(*(_QWORD*)(v3 + 2872) + 88 * v12 + 64) = v76;
      *(_QWORD*)(result + 16) = v53;
      *(_QWORD*)result = v52;
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
    }
  LABEL_92:
    if (v77 != nullptr) {
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
    }
  LABEL_15:
    v6 = *(_QWORD*)(v3 + 2872);
    v13 = v6 + 88 * v12;
    v14 = *(unsigned __int8*)(v13 + 32);
    v15 = (v14 & 1) != 0 ? *(_QWORD*)(v13 + 40) : v14 >> 1;
    if (v15 != 0) {
      break;
    }
    v7 = *(_QWORD*)(v3 + 2880);
  LABEL_20:
    if (++v12 >= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((v7 - v6) >> 3))) {
      return result;
    }
  }
  v58 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v58[2] = 0;
  v58[8] = 0;
  *v58 = GameData_1fbf780;
  v58[1] = 0;
  v59 = *(_QWORD*)(v13 + 16);
  *(_QWORD*)(v13 + 8) = v58 + 4;
  *(_QWORD*)(v13 + 16) = v58;
  if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak(v59);
  }
  v60 = *(_QWORD*)(v13 + 8);
  v75 = (__int64)GameData_211d8c8;
  v76 = v6 + 88 * v12;
  v78 = &v75;
  GameRoutine_a934d0(&v75, v60);
  if (v78 == &v75) {
    v61 = 32;
  LABEL_109:
    (*(void (**)(void))(*v78 + v61))();
  }
  else if (v78 != nullptr) {
    v61 = 40;
    goto LABEL_109;
  }
  v62 = *(_QWORD*)(*(_QWORD*)(v69 + 8) + 13432LL);
  v63 = *(unsigned __int8*)(v13 + 32);
  v64 = (v63 & 1) == 0;
  v65 = v63 >> 1;
  if (v64) {
    v66 = v65;
  }
  else {
    v66 = *(_QWORD*)(v13 + 40);
  }
  if (v64) {
    v67 = v13 + 33;
  }
  else {
    v67 = *(_QWORD*)(v13 + 48);
  }
  v70 = *(_QWORD*)(v13 + 8);
  v68 = *(_QWORD*)(v13 + 16);
  v71 = v68;
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)v13 =
      (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64*))(
          *(_QWORD*)v62 + 40LL))(v62, v67, v66, &v70);
  result = v71;
  if (v71 != 0) {
    result = std___1___shared_weak_count___release_weak(v71);
  }
  ++*(_DWORD*)(v13 + 80);
  return result;
}

__int64 PrimitiveDrawManager_19932a0(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, int a5)
{
  __int64 v5;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  char v21;
  unsigned int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 result;
  _QWORD* v27;
  char v28;
  unsigned int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD v33[2];
  __int64 v34;
  int v35;

  v5 = a1 + 245760;
  v33[0] = a2;
  v33[1] = a3;
  v8 = *(_QWORD**)(a1 + 248736);
  v9 = *(_QWORD**)(a1 + 248744);
  if (v8 == v9) {
    goto LABEL_35;
  }
  v10 = v8 + 2;
  v13 = 0;
  do {
    v15 = v10 - 2;
    v14 = *((unsigned __int8*)v10 - 16);
    v16 = *(v10 - 1);
    if ((v14 & 1) == 0) {
      v16 = v14 >> 1;
    }
    if (a3 == v16) {
      v17 = (v14 & 1) != 0 ? (_QWORD*)*v10 : (_QWORD*)((char*)v10 - 15);
      if ((unsigned int)memcmp(a2, v17, a3) == 0) {
        ++v13;
      }
    }
    v10 += 5;
  } while (v15 + 5 != v9);
  if (v13 != 0) {
    v18 = (__int64)(v9 - 5);
    v19 = v9;
    v20 = v9;
    while (1) {
      v22 = *((unsigned __int8*)v20 - 40);
      v20 -= 5;
      v21 = v22;
      v23 = v20[1];
      v24 = (unsigned __int64)v22 >> 1;
      if ((v22 & 1) == 0) {
        v23 = v24;
      }
      if (a3 == v23) {
        v25 = (v21 & 1) != 0 ? (_QWORD*)*(v19 - 3) : (_QWORD*)((char*)v19 - 39);
        result = memcmp(a2, v25, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v18 -= 40;
      v19 = v20;
      if (v20 == v8) {
        goto LABEL_35;
      }
    }
  }
  else {
    v18 = (__int64)(v9 - 5);
    v19 = v9;
    v27 = v9;
    while (1) {
      v29 = *((unsigned __int8*)v27 - 40);
      v27 -= 5;
      v28 = v29;
      v30 = v27[1];
      v31 = (unsigned __int64)v29 >> 1;
      if ((v29 & 1) == 0) {
        v30 = v31;
      }
      if (a3 == v30) {
        v32 = (v28 & 1) != 0 ? (_QWORD*)*(v19 - 3) : (_QWORD*)((char*)v19 - 39);
        result = memcmp(a2, v32, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v18 -= 40;
      v19 = v27;
      if (v27 == v8) {
        goto LABEL_35;
      }
    }
  }
  if (v19 == v8 || v9 == (_QWORD*)v18) {
  LABEL_35:
    v34 = 0;
    v35 = -1;
    result = GameRoutine_1999040(v5 + 2976, v33, &v34);
    v18 = result;
  }
  *(_QWORD*)(v18 + 24) = a4;
  *(_DWORD*)(v18 + 32) = a5;
  return result;
}

_QWORD* PrimitiveDrawManager_19935e0(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned int a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
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

  if (a4 <= 0x1F) {
    v5 = a1[2171];
    v6 = a1[2172];
    if (v5 != v6) {
      while (*(_DWORD*)v5 != a4) {
        v5 += 40;
        if (v5 == v6) {
          goto LABEL_9;
        }
      }
    }
    if (v5 == v6) {
    LABEL_9:
      if (a3 != 0) {
        v8 = GameRoutine_19994c0(a1);
        v9 = a1[2172];
        v10 = a1[2173];
        v11 = v8;
        if (v9 >= v10) {
          v12 = a1[2171];
          v13 = v9 - v12;
          v14 = 1 - 0x3333333333333333LL * ((__int64)(v9 - v12) >> 3);
          if (v14 > 0x666666666666666LL) {
            GameRoutine_1995730();
          }
          v15 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v10 - v12) >> 3);
          if (2 * v15 > v14) {
            v14 = 2 * v15;
          }
          if (v15 >= 0x333333333333333LL) {
            v16 = 0x666666666666666LL;
          }
          else {
            v16 = v14;
          }
          if (v16 > 0x666666666666666LL) {
            GameRoutine_60a210(v8);
          }
          v17 = 5 * v16;
          v18 = fw_memory_g_heap_manager_ptr;
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v16, 16, 0);
          v20 = v19 + v13;
          v21 = v19;
          *(_DWORD*)v20 = a4;
          v22 = v19 + 8 * v17;
          *(_QWORD*)(v20 + 32) = v11;
          v23 = v19 + v13 + 40;
          *(_QWORD*)(v20 + 8) = 0;
          if (v12 != v9) {
            v24 = v12;
            v25 = v19;
            do {
              *(_DWORD*)v25 = *(_DWORD*)v24;
              v26 = *(_QWORD*)(v24 + 8);
              v27 = *(_QWORD*)(v24 + 24);
              *(_QWORD*)(v25 + 16) = *(_QWORD*)(v24 + 16);
              *(_QWORD*)(v25 + 24) = v27;
              *(_QWORD*)(v25 + 8) = v26;
              *(_QWORD*)(v24 + 16) = 0;
              *(_QWORD*)(v24 + 24) = 0;
              *(_QWORD*)(v24 + 8) = 0;
              v28 = *(_QWORD*)(v24 + 32);
              v24 += 40;
              *(_QWORD*)(v25 + 32) = v28;
              v25 += 40;
            } while (v24 != v9);
            do {
              if ((*(_BYTE*)(v12 + 8) & 1) != 0 && *(_QWORD*)(v12 + 24) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                  v29 = 128;
                }
                else {
                  v29 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v29);
              }
              v12 += 40;
            } while (v12 != v9);
            v12 = a1[2171];
          }
          a1[2171] = v21;
          a1[2172] = v23;
          a1[2173] = v22;
          if (v12 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v30);
          }
          a1[2172] = v23;
        }
        else {
          *(_DWORD*)v9 = a4;
          *(_QWORD*)(v9 + 8) = 0;
          *(_QWORD*)(v9 + 32) = v8;
          a1[2172] = v9 + 40;
        }
      }
    }
    else if (a3 != 0) {
      *(_QWORD*)(v5 + 32) = GameRoutine_19994c0(a1);
    }
    else {
      *(_QWORD*)(v5 + 32) = -1;
    }
  }
  return a1;
}

__int64 PrimitiveDrawManager_1994180(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v1 = *(_QWORD*)(result + 19112);
  v2 = result + 0x4000;
  v3 = (_QWORD*)result;
  v4 = *(_DWORD*)(v1 - 4);
  *(_QWORD*)(result + 19112) = v1 - 4;
  v5 = *(_QWORD*)(result + 18736);
  *(_DWORD*)(result + 17280) = v4;
  v6 = v5 + 1440LL * v4;
  *(_QWORD*)(result + 17296) = *(_QWORD*)v6;
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v6 + 16);
  v9 = *(_QWORD*)(v6 + 24);
  *(_QWORD*)(result + 17328) = *(_QWORD*)(v6 + 32);
  *(_QWORD*)(result + 17312) = v8;
  *(_QWORD*)(result + 17320) = v9;
  *(_QWORD*)(result + 17304) = v7;
  v10 = *(_QWORD*)(v6 + 56);
  LODWORD(v8) = *(_DWORD*)(v6 + 64);
  v11 = *(_QWORD*)(v6 + 40);
  *(_QWORD*)(result + 17344) = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(result + 17360) = v8;
  *(_QWORD*)(result + 17352) = v10;
  *(_QWORD*)(result + 17336) = v11;
  if (result + 17296 == v6) {
    v23 = *(_QWORD*)(v6 + 216);
    *(_QWORD*)(result + 17496) = *(_QWORD*)(v6 + 200);
    *(_QWORD*)(result + 17512) = v23;
    v24 = *(_QWORD*)(v6 + 184);
    *(_QWORD*)(result + 17464) = *(_QWORD*)(v6 + 168);
    *(_QWORD*)(result + 17480) = v24;
    v25 = *(_QWORD*)(v6 + 152);
    *(_QWORD*)(result + 17432) = *(_QWORD*)(v6 + 136);
    *(_QWORD*)(result + 17448) = v25;
    v26 = *(_QWORD*)(v6 + 120);
    *(_QWORD*)(result + 17400) = *(_QWORD*)(v6 + 104);
    *(_QWORD*)(result + 17416) = v26;
    v27 = *(_QWORD*)(v6 + 96);
    *(_QWORD*)(result + 17408) = *(_QWORD*)(v6 + 112);
    *(_QWORD*)(result + 17392) = v27;
    v28 = *(_QWORD*)(v6 + 128);
    *(_QWORD*)(result + 17440) = *(_QWORD*)(v6 + 144);
    *(_QWORD*)(result + 17424) = v28;
    v29 = *(_QWORD*)(v6 + 160);
    *(_QWORD*)(result + 17472) = *(_QWORD*)(v6 + 176);
    *(_QWORD*)(result + 17456) = v29;
    v30 = *(_QWORD*)(v6 + 192);
    *(_QWORD*)(result + 17504) = *(_QWORD*)(v6 + 208);
    *(_QWORD*)(result + 17488) = v30;
  }
  else {
    GameRoutine_1999780(result + 17368);
    v12 = *(_QWORD*)(v6 + 216);
    v13 = *(_BYTE*)(v2 + 1136);
    result = v2 + 1136;
    v3[2187] = *(_QWORD*)(v6 + 200);
    v3[2189] = v12;
    v14 = *(_QWORD*)(v6 + 184);
    v3[2183] = *(_QWORD*)(v6 + 168);
    v3[2185] = v14;
    v15 = *(_QWORD*)(v6 + 152);
    v3[2179] = *(_QWORD*)(v6 + 136);
    v3[2181] = v15;
    v16 = *(_QWORD*)(v6 + 120);
    v3[2175] = *(_QWORD*)(v6 + 104);
    v3[2177] = v16;
    v17 = *(_QWORD*)(v6 + 96);
    v3[2176] = *(_QWORD*)(v6 + 112);
    v3[2174] = v17;
    v18 = *(_QWORD*)(v6 + 128);
    v3[2180] = *(_QWORD*)(v6 + 144);
    v3[2178] = v18;
    v19 = *(_QWORD*)(v6 + 160);
    v3[2184] = *(_QWORD*)(v6 + 176);
    v3[2182] = v19;
    v20 = *(_QWORD*)(v6 + 192);
    v3[2188] = *(_QWORD*)(v6 + 208);
    v3[2186] = v20;
    v21 = *(unsigned __int8*)(v6 + 224);
    if ((v13 & 1) != 0) {
      v31 = (v21 & 1) == 0;
      v32 = v21 >> 1;
      if (v31) {
        v33 = v6 + 225;
      }
      else {
        v33 = *(_QWORD*)(v6 + 240);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *(_QWORD*)(v6 + 232);
      }
      result = SpineModel_64dde0(result, v33, v34);
    }
    else if ((v21 & 1) != 0) {
      result = GameRoutine_64df20(result, *(_QWORD*)(v6 + 240),
                                  *(_QWORD*)(v6 + 232));
    }
    else {
      *(_QWORD*)(v2 + 1144) = *(_QWORD*)(v6 + 232);
      v22 = *(_QWORD*)(v6 + 224);
      *(_QWORD*)(v2 + 1152) = *(_QWORD*)(v6 + 240);
      *(_QWORD*)result = v22;
    }
  }
  v35 = v3[2342] + 1440LL * *(int*)(v2 + 896);
  v36 = *(_QWORD*)(v35 + 1320);
  v3[2325] = *(_QWORD*)(v35 + 1304);
  v3[2327] = v36;
  v37 = *(_QWORD*)(v35 + 1296);
  v3[2326] = *(_QWORD*)(v35 + 1312);
  v3[2324] = v37;
  v38 = *(_QWORD*)(v35 + 1336);
  v39 = *(_QWORD*)(v35 + 1352);
  v40 = *(_QWORD*)(v35 + 1328);
  v3[2330] = *(_QWORD*)(v35 + 1344);
  v3[2328] = v40;
  v3[2331] = v39;
  v3[2329] = v38;
  v41 = *(_QWORD*)(v35 + 1416);
  v3[2337] = *(_QWORD*)(v35 + 1400);
  v3[2339] = v41;
  v42 = *(_QWORD*)(v35 + 1384);
  v3[2333] = *(_QWORD*)(v35 + 1368);
  v3[2335] = v42;
  v43 = *(_QWORD*)(v35 + 1376);
  v3[2332] = *(_QWORD*)(v35 + 1360);
  v3[2334] = v43;
  v44 = *(_QWORD*)(v35 + 1408);
  v3[2336] = *(_QWORD*)(v35 + 1392);
  v3[2338] = v44;
  *(_BYTE*)(v2 + 2196) = *(_BYTE*)(v35 + 1284);
  *(_DWORD*)(v35 + 4LL * *(int*)(v35 + 256) + 772) = *(_DWORD*)(v2 + 2816) + 1;
  return result;
}

__int64 PrimitiveDrawManager_1995020(__int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  int* v13;
  int* v14;
  _DWORD* v15;
  _DWORD* v16;
  int v17;
  __int64 v18;

  v3 = *(_DWORD**)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v5 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64)v3 - *(_QWORD*)result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_19953a0();
    }
    v9 = v2 - *(_QWORD*)result;
    v10 = v9 >> 1;
    if (v9 >> 1 <= v8) {
      v10 = (v7 >> 2) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 62 != 0) {
      GameRoutine_60a210(result);
    }
    result = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(result + 24) + 16LL))(*(_QWORD*)(result + 24), 4 * v11, 4);
    v12 = (_DWORD*)(result + v7);
    *v12 = *a2;
    v6 = result + v7 + 4;
    v13 = *(int**)v5;
    v14 = *(int**)(v5 + 8);
    v15 = (_DWORD*)((char*)v12 + *(_QWORD*)v5 - (_QWORD)v14);
    if (*(int**)v5 != v14) {
      v16 = v15;
      do {
        v17 = *v13++;
        *v16++ = v17;
      } while (v13 != v14);
      v13 = *(int**)v5;
    }
    *(_QWORD*)v5 = v15;
    *(_QWORD*)(v5 + 8) = v6;
    v18 = *(_QWORD*)(v5 + 16);
    *(_QWORD*)(v5 + 16) = result + 4 * v11;
    if (v13 != nullptr) {
      result = (*(__int64 (**)(_QWORD, int*, __int64, __int64))(
          **(_QWORD**)(v5 + 24) + 24LL))(*(_QWORD*)(v5 + 24), v13,
                                         v18 - (_QWORD)v13, 4);
    }
  }
  else {
    *v3 = *a2;
    v6 = (__int64)(v3 + 1);
  }
  *(_QWORD*)(v5 + 8) = v6;
  return result;
}

__int64 PrimitiveDrawManager_1995180(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (result != a2) {
    v5 = result;
    v6 = result;
    do {
      v7 = *(_QWORD*)(v6 + 56);
      v8 = *(_DWORD*)(v6 + 64);
      *(_QWORD*)(a3 + 40) = *(_QWORD*)(v6 + 40);
      *(_QWORD*)(a3 + 56) = v7;
      v9 = *(_QWORD*)(v6 + 24);
      *(_QWORD*)(a3 + 8) = *(_QWORD*)(v6 + 8);
      *(_QWORD*)(a3 + 24) = v9;
      *(_QWORD*)a3 = *(_QWORD*)v6;
      v10 = *(_QWORD*)(v6 + 16);
      *(_QWORD*)(a3 + 32) = *(_QWORD*)(v6 + 32);
      *(_QWORD*)(a3 + 16) = v10;
      v11 = *(_QWORD*)(v6 + 48);
      *(_DWORD*)(a3 + 64) = v8;
      *(_QWORD*)(a3 + 72) = 0;
      *(_QWORD*)(a3 + 80) = 0;
      *(_QWORD*)(a3 + 88) = 0;
      *(_QWORD*)(a3 + 48) = v11;
      *(_QWORD*)(a3 + 72) = *(_QWORD*)(v6 + 72);
      *(_QWORD*)(a3 + 80) = *(_QWORD*)(v6 + 80);
      *(_QWORD*)(a3 + 88) = *(_QWORD*)(v6 + 88);
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      v13 = *(_QWORD*)(v6 + 96);
      v12 = *(_QWORD*)(v6 + 104);
      v14 = *(_QWORD*)(v6 + 120);
      *(_QWORD*)(a3 + 112) = *(_QWORD*)(v6 + 112);
      *(_QWORD*)(a3 + 120) = v14;
      *(_QWORD*)(a3 + 96) = v13;
      *(_QWORD*)(a3 + 104) = v12;
      v15 = *(_QWORD*)(v6 + 152);
      v17 = *(_QWORD*)(v6 + 128);
      v16 = *(_QWORD*)(v6 + 136);
      *(_QWORD*)(a3 + 144) = *(_QWORD*)(v6 + 144);
      *(_QWORD*)(a3 + 152) = v15;
      *(_QWORD*)(a3 + 128) = v17;
      *(_QWORD*)(a3 + 136) = v16;
      v18 = *(_QWORD*)(v6 + 184);
      v20 = *(_QWORD*)(v6 + 160);
      v19 = *(_QWORD*)(v6 + 168);
      *(_QWORD*)(a3 + 176) = *(_QWORD*)(v6 + 176);
      *(_QWORD*)(a3 + 184) = v18;
      *(_QWORD*)(a3 + 160) = v20;
      *(_QWORD*)(a3 + 168) = v19;
      v21 = *(_QWORD*)(v6 + 216);
      v23 = *(_QWORD*)(v6 + 192);
      v22 = *(_QWORD*)(v6 + 200);
      *(_QWORD*)(a3 + 208) = *(_QWORD*)(v6 + 208);
      *(_QWORD*)(a3 + 216) = v21;
      *(_QWORD*)(a3 + 192) = v23;
      *(_QWORD*)(a3 + 200) = v22;
      *(_QWORD*)(a3 + 232) = *(_QWORD*)(v6 + 232);
      v24 = *(_QWORD*)(v6 + 224);
      *(_QWORD*)(a3 + 240) = *(_QWORD*)(v6 + 240);
      *(_QWORD*)(a3 + 224) = v24;
      *(_QWORD*)(v6 + 224) = 0;
      *(_QWORD*)(v6 + 232) = 0;
      *(_QWORD*)(v6 + 240) = 0;
      result = memcpy(a3 + 256, v6 + 256, 1179);
      v6 += 1440;
      a3 += 1440;
    } while (v6 != a2);
    v25 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v5 + 224) & 1) != 0 && *(_QWORD*)(v5 + 240) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v28);
      }
      v29 = *(_QWORD*)(v5 + 72);
      if (v29 != 0) {
        v30 = *(_QWORD*)(v5 + 80);
        if (v29 == v30) {
          goto LABEL_6;
        }
        do {
          if ((*(_BYTE*)(v30 - 32) & 1) != 0 && *(_QWORD*)(v30 - 16) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v31 = 128;
            }
            else {
              v31 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v31);
          }
          v30 -= 40;
        } while (v30 != v29);
        v26 = *(_QWORD*)(v5 + 72);
        *(_QWORD*)(v5 + 80) = v29;
        if (v26 != 0) {
        LABEL_6:
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
            v27 = 128;
          }
          else {
            v27 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v27);
        }
      }
      v5 += 1440;
    } while (v5 != a2);
  }
  return result;
}

__int64 PrimitiveDrawManager_19953e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
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
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
  v3 = 0x4FA4FA4FA4FA4FA5LL * (v2 >> 5) + 1;
  if (v3 > 0x2D82D82D82D82DLL) {
    GameRoutine_1995160();
  }
  if (0x9F49F49F49F49F4ALL *
          ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 5) >
      v3) {
    v3 = 0x9F49F49F49F49F4ALL *
         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 5);
  }
  if ((unsigned __int64)(0x4FA4FA4FA4FA4FA5LL *
                         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >>
                          5)) >= 0x16C16C16C16C16LL) {
    v6 = 0x2D82D82D82D82DLL;
  }
  else {
    v6 = v3;
  }
  if (v6 != 0) {
    if (v6 > 0x2D82D82D82D82DLL) {
      GameRoutine_60a210(a1);
    }
    v7 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(a1 + 24) + 16LL))(*(_QWORD*)(a1 + 24), 1440 * v6, 16);
  }
  else {
    v7 = 0;
  }
  v8 = *(_QWORD*)(a2 + 56);
  v9 = v7 + v2;
  v10 = *(_DWORD*)(a2 + 64);
  *(_QWORD*)(v9 + 40) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v9 + 56) = v8;
  v11 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(v9 + 8) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(v9 + 24) = v11;
  *(_QWORD*)v9 = *(_QWORD*)a2;
  v12 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v9 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v9 + 16) = v12;
  v13 = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v9 + 64) = v10;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 48) = v13;
  *(_QWORD*)(v9 + 72) = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(v9 + 80) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v9 + 88) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  v15 = *(_QWORD*)(a2 + 96);
  v14 = *(_QWORD*)(a2 + 104);
  v16 = *(_QWORD*)(a2 + 120);
  *(_QWORD*)(v9 + 112) = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(v9 + 120) = v16;
  *(_QWORD*)(v9 + 96) = v15;
  *(_QWORD*)(v9 + 104) = v14;
  v17 = *(_QWORD*)(a2 + 152);
  v19 = *(_QWORD*)(a2 + 128);
  v18 = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(v9 + 144) = *(_QWORD*)(a2 + 144);
  *(_QWORD*)(v9 + 152) = v17;
  *(_QWORD*)(v9 + 128) = v19;
  *(_QWORD*)(v9 + 136) = v18;
  v20 = *(_QWORD*)(a2 + 184);
  v22 = *(_QWORD*)(a2 + 160);
  v21 = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v9 + 176) = *(_QWORD*)(a2 + 176);
  *(_QWORD*)(v9 + 184) = v20;
  *(_QWORD*)(v9 + 160) = v22;
  *(_QWORD*)(v9 + 168) = v21;
  v23 = *(_QWORD*)(a2 + 216);
  v25 = *(_QWORD*)(a2 + 192);
  v24 = *(_QWORD*)(a2 + 200);
  *(_QWORD*)(v9 + 208) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v9 + 216) = v23;
  *(_QWORD*)(v9 + 192) = v25;
  *(_QWORD*)(v9 + 200) = v24;
  *(_QWORD*)(v9 + 232) = *(_QWORD*)(a2 + 232);
  v26 = *(_QWORD*)(a2 + 224);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(a2 + 240);
  *(_QWORD*)(v9 + 224) = v26;
  *(_QWORD*)(a2 + 224) = 0;
  *(_QWORD*)(a2 + 232) = 0;
  *(_QWORD*)(a2 + 240) = 0;
  v27 = v7 + 1440 * v6;
  memcpy(v9 + 256, a2 + 256, 1179);
  v28 = *(_QWORD*)(a1 + 8);
  v29 = v9 + *(_QWORD*)a1 - v28;
  PrimitiveDrawManager_1995180(*(_QWORD*)a1, v28, v29);
  v30 = *(_QWORD*)a1;
  v31 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = v29;
  *(_QWORD*)(a1 + 8) = v9 + 1440;
  *(_QWORD*)(a1 + 16) = v27;
  if (v30 != 0) {
    (*(void (**)(_QWORD, __int64, __int64, __int64))(
        **(_QWORD**)(a1 + 24) + 24LL))(*(_QWORD*)(a1 + 24), v30, v31 - v30, 16);
  }
  return v9 + 1440;
}

__int64 gfxa_PrimitiveDrawManager_Impl_initializeGfxObjects_closure_Invoke(
    __int64 result, __int64 a2)
{
  int v2;
  __int16 v3;
  unsigned int v4;
  unsigned int v5;

  v2 = *(_DWORD*)(result + 8);
  if (v2 != 0) {
    if (v2 != 1) {
      goto LABEL_6;
    }
    v3 = 21;
  }
  else {
    v3 = 42;
  }
  *(_WORD*)(a2 + 6) = v3;
LABEL_6:
  v4 = *(_DWORD*)(result + 12);
  if (v4 <= 2) {
    v5 = 0x10200u >> (8 * v4);
    *(_BYTE*)a2 = v5;
    *(_BYTE*)(a2 + 1) = v5;
    *(_BYTE*)(a2 + 2) = v5;
  }
  return result;
}

__int64 PrimitiveDrawManager_1996450(_QWORD* a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3;
  __int64 result;
  int* v7;
  int* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int* v13;
  int* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int* v35;
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;
  _QWORD v39[4];
  _QWORD* v40;
  _QWORD v41[4];
  _QWORD* v42;

  result = GameRoutine_1996700();
  v7 = (int*)a1[2346];
  v8 = (int*)a1[2347];
  if (v7 != v8) {
    v9 = a1 + 30720;
    v10 = a3;
    v35 = (int*)a1[2347];
    v36 = a1;
    v34 = a3;
    v33 = a3;
    do {
      v12 = *v7;
      v3 = v3 & 0xFFFFFFFF00000000LL | v10;
      v13 = (unsigned int*)(a1[2342] + 1440LL * *v7);
      if (v13[356] == 0 || v13[27] != a3) {
        goto LABEL_5;
      }
      v14 = (int*)v9[364];
      v15 = v9[365];
      if ((unsigned __int64)v14 >= v15) {
        v17 = v9[363];
        v18 = v9;
        v19 = (char*)v14 - v17;
        v20 = ((__int64)v14 - v17) >> 2;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 62 != 0) {
          GameRoutine_19953c0(result);
        }
        v22 = v15 - v17;
        if (v22 >> 1 > v21) {
          v21 = v22 >> 1;
        }
        if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFFCLL) {
          v23 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v23 = v21;
        }
        if (v23 != 0) {
          if (v23 >> 62 != 0) {
            GameRoutine_60a210(result);
          }
          v24 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v23, 16, 0);
        }
        else {
          v24 = 0;
        }
        v25 = v24 + 4 * v23;
        v26 = (char*)v14 - v17;
        v27 = (__int64)&v19[v24 + -4 * v20];
        *(_DWORD*)&v19[v24] = v12;
        v16 = (__int64)&v19[v24 + 4];
        memcpy(v27, v17, v26);
        v18[363] = v27;
        v9 = v18;
        v18[364] = v16;
        v18[365] = v25;
        if (v17 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v28);
        }
        a3 = v34;
        v8 = v35;
        a1 = v36;
        v10 = v33;
      }
      else {
        *v14 = v12;
        v16 = (__int64)(v14 + 1);
      }
      v9[364] = v16;
      v29 = v13[8];
      v37[0] = GameData_211d848;
      v37[1] = a1;
      v37[2] = v3;
      v38 = v37;
      v42 = v41;
      v40 = v39;
      v30 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16664);
      v41[0] = GameData_2109ae8;
      v39[0] = GameData_2109b78;
      GameRoutine_beefc0(v30, v37, v41, v39, 0, v29, v16 - 4);
      if (v40 == v39) {
        v31 = 32;
      }
      else {
        if (v40 == nullptr) {
          goto LABEL_30;
        }
        v31 = 40;
      }
      (*(void (**)(void))(*v40 + v31))();
    LABEL_30:
      if (v42 == v41) {
        v32 = 32;
      }
      else {
        if (v42 == nullptr) {
          goto LABEL_35;
        }
        v32 = 40;
      }
      (*(void (**)(void))(*v42 + v32))();
    LABEL_35:
      result = (__int64)v38;
      if (v38 == v37) {
        v11 = 32;
      }
      else {
        if (v38 == nullptr) {
          goto LABEL_5;
        }
        v11 = 40;
      }
      result = (*(__int64 (**)(void))(*v38 + v11))();
    LABEL_5:
      ++v7;
    } while (v7 != v8);
  }
  return result;
}

_QWORD* PrimitiveDrawManager_1997990(__int64* a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  __int64* v4;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v3 = *a1;
  v4 = (__int64*)a1[1];
  v7 = a1;
  if ((__int64*)*a1 == v4 && 0xCCCCCCCCCCCCCCCDLL * ((a1[2] - v3) >> 3) <= 6) {
    v8 = fw_memory_g_heap_manager_ptr;
    a1 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
    *v7 = (__int64)a1;
    v7[1] = (__int64)a1;
    v7[2] = (__int64)(a1 + 35);
    if (v3 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v9 = 56;
      }
      a1 = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v9);
      v4 = (__int64*)v7[1];
    }
    else {
      v4 = a1;
    }
  }
  v10 = v7[2];
  if ((unsigned __int64)v4 >= v10) {
    v13 = *v7;
    v14 = (__int64)v4 - *v7;
    v15 = 1 - 0x3333333333333333LL * (v14 >> 3);
    if (v15 > 0x666666666666666LL) {
      GameRoutine_1997cf0(a1);
    }
    v16 = fw_memory_g_heap_manager_ptr;
    v17 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v10 - v13) >> 3);
    if (2 * v17 > v15) {
      v15 = 2 * v17;
    }
    if (v17 >= 0x333333333333333LL) {
      v18 = 0x666666666666666LL;
    }
    else {
      v18 = v15;
    }
    if (v18 != 0) {
      if (v18 > 0x666666666666666LL) {
        GameRoutine_60a210(a1);
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v18, 16, 0);
    }
    else {
      v19 = 0;
    }
    v22 = (_QWORD*)(v19 + v14);
    v23 = v19 + 40 * v18;
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(v19 + v14, a2[2], a2[1]);
      v13 = *v7;
      v14 = v7[1] - *v7;
    }
    else {
      v24 = a2[1];
      *v22 = *a2;
      v22[1] = v24;
      v22[2] = a2[2];
    }
    v25 = a3[1];
    v21 = v22 + 5;
    v22[3] = *a3;
    v22[4] = v25;
    memcpy((char*)v22 - v14, v13, v14);
    *v7 = (__int64)v22 - v14;
    v7[1] = (__int64)(v22 + 5);
    v7[2] = v23;
    if (v13 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v26);
    }
  }
  else {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(v4, a2[2], a2[1]);
    }
    else {
      v11 = *a2;
      v12 = a2[2];
      v4[1] = a2[1];
      v4[2] = v12;
      *v4 = v11;
    }
    v20 = a3[1];
    v21 = v4 + 5;
    v4[3] = *a3;
    v4[4] = v20;
  }
  v7[1] = (__int64)v21;
  return v21 - 5;
}

__int64 PrimitiveDrawManager_1997bc0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = *a1;
  v2 = a1[1];
  v4 = v2;
  if (v2 != *a1) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 8);
    }
    else {
      v6 = *(_BYTE*)a2 >> 1;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v13 = *(_QWORD*)(a2 + 16);
      v4 = a1[1];
      v14 = v4;
      while (1) {
        v16 = *(unsigned __int8*)(v14 - 40);
        v14 -= 40;
        v15 = v16;
        v17 = *(_QWORD*)(v14 + 8);
        v18 = (unsigned __int64)v16 >> 1;
        if ((v16 & 1) == 0) {
          v17 = v18;
        }
        if (v17 == v6) {
          v19 = (v15 & 1) != 0 ? *(_QWORD*)(v4 - 24) : v4 - 39;
          if ((unsigned int)memcmp(v19, v13, v6) == 0) {
            break;
          }
        }
        v4 = v14;
        if (v14 == v3) {
          return v2;
        }
      }
    }
    else {
      v4 = a1[1];
      v7 = v4;
      while (1) {
        v9 = *(unsigned __int8*)(v7 - 40);
        v7 -= 40;
        v8 = v9;
        v10 = *(_QWORD*)(v7 + 8);
        v11 = (unsigned __int64)v9 >> 1;
        if ((v9 & 1) == 0) {
          v10 = v11;
        }
        if (v10 == v6) {
          v12 = (v8 & 1) != 0 ? *(_QWORD*)(v4 - 24) : v4 - 39;
          if ((unsigned int)memcmp(v12, a2 + 1, v6) == 0) {
            break;
          }
        }
        v4 = v7;
        if (v7 == v3) {
          return v2;
        }
      }
    }
  }
  if (v4 != v3) {
    return v4 - 40;
  }
  return v2;
}

__int64

gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx_closure_Invoke(__int64 a1,
                                                              __int64 a2)
{
  __int64 result;

  result = GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)a2 + 592LL));
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) = result;
  return result;
}

#pragma GCC visibility pop
