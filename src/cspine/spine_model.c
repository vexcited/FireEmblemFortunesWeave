#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19119d0(__int64 result);
__int64 GameRoutine_1912fc0(void);
__int64 GameRoutine_19e10(_QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_606500(_QWORD);
__int64 cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2110190[])();
extern __int64 (*GameData_21101c8[])();
extern __int64 (*cspine_SpineModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineModel_Destructor_alt1(__int64 a1) __asm__("SpineModel_Destructor");
__int64 SpineModel_1912d60(_QWORD* a1);
__int64 SpineModel_1912dc0(_QWORD* a1);
__int64 GameRoutine_4e7c0(_QWORD);
__int64 GameRoutine_4e940(void);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 SpineModel_19119d0(__int64 result);
__int64 cspine_SpineModel_AsyncArgument_Assign(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*cspine_TextureLoader_vtable)(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212fc98[3];
extern __int64* game_g_frame_clock_ptr[3];
__int64 SpineModel_19119d0(__int64 result);
bool SpineModel_1912e70(__int64 a1, __int64 a2);
__int64 SpineModel_1912fc0_alt1(__int64 a1) __asm__("SpineModel_1912fc0");
__int64 GameRoutine_5fb900(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_2132328[3];
extern _UNKNOWN** GameData_2132330[2];
extern _UNKNOWN** GameData_2132338;
extern __int64 (*GameData_2110200[])();
_QWORD* cspine_SpineModel_Draw_lambda0_Clone(_QWORD* a1);
__int64 cspine_SpineModel_Draw_lambda0_CloneInto(_QWORD* a1, _QWORD* a2);
__int64 cspine_SpineModel_Draw_lambda0_Invoke(_QWORD* a1, __int64* a2);
_QWORD* SpineModel_1919040(_QWORD* a1, _QWORD* a2);
void cspine_SpineModel_buildModel_lambda1_Invoke(__int64 a1, __int64 a2);
void cspine_SpineModel_buildModel_lambda2_Invoke(__int64 a1, __int64 a2);
__int64 GameRoutine_1efd0(_QWORD, _QWORD);
__int64 spine_RTTI_isExactly(_QWORD, _QWORD);
__int64 spine_Slot_getAttachment(_QWORD);
__int64 spine_VertexAttachment_getWorldVerticesLength(_QWORD);
extern _UNKNOWN GameData_2177268;
extern _UNKNOWN GameData_2177278;
extern __int64* GameData_21322b8[2];
extern char GameData_1a9f09e;
void GameRoutine_1bc10();
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64* SpineModel_190e620(__int64* result, _QWORD* a2, __int64* a3,
                            _QWORD* a4);
_QWORD* SpineModel_19160e0(__int64 a1, _QWORD* a2);
__int64 GameRoutine_1918840(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
_QWORD* SpineModel_19184e0(float* a1, _QWORD* a2, __int64** a3);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* cspine_SpineModel_Draw_lambda0_Destructor(_QWORD* a1);
void cspine_SpineModel_Draw_lambda0_DeletingDestructor(_QWORD* a1);
_QWORD* cspine_SpineModel_Draw_lambda0_Destroy(_QWORD* a1);
_QWORD* GameRoutine_4e940_alt1(_QWORD* result) __asm__("GameRoutine_4e940");
__int64* cspine_SpineModel_AsyncArgument_Assign_alt1(
    __int64* result, __int64) __asm__("cspine_SpineModel_AsyncArgument_Assign");
__int64 GameRoutine_19e10_alt1() __asm__("GameRoutine_19e10");
__int64 GameRoutine_4e7c0_alt1(__int64) __asm__("GameRoutine_4e7c0");
__int64 GameRoutine_6040f0_alt1(__int64) __asm__("GameRoutine_6040f0");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(_QWORD*) __asm__(
    "spine_SpineObject_Destroy_SpineObject_4e8a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*SpineModel_1912d60_ptr[])();
extern __int64 (*SpineModel_1912dc0_ptr[])();
extern __int64 (*cspine_TextureLoader_vtable_alt1)(_QWORD*) __asm__(
    "cspine_TextureLoader_vtable");
void cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(
    __int64) __asm__("cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument");
void SpineModel_Destructor(__int64 a1);
void SpineModel_1912fc0(__int64 a1);

__int64* SpineModel_190e620(__int64* result, _QWORD* a2, __int64* a3,
                            _QWORD* a4)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;

  *a2 = &GameData_1a9f09e;
  a2[1] = 0;
  *a3 = (__int64)&GameData_1a9f09e;
  a3[1] = 0;
  *a4 = &GameData_1a9f09e;
  a4[1] = 0;
  v4 = *result;
  v5 = result[1];
  v6 = v5;
  if (v5 != 0) {
    v7 = v4 - 1;
    v8 = result[1];
    while (v8 != 0) {
      v9 = *(unsigned __int8*)(v7 + v8--);
      if (v9 == 47) {
        goto LABEL_9;
      }
    }
    LODWORD(v8) = -1;
  LABEL_9:
    v10 = result[1];
    while (v10 != 0) {
      v11 = *(unsigned __int8*)(v7 + v10--);
      if (v11 == 92) {
        goto LABEL_12;
      }
    }
  }
  else {
    LODWORD(v8) = -1;
  }
  LODWORD(v10) = -1;
LABEL_12:
  if ((int)v8 <= (int)v10) {
    LODWORD(v8) = v10;
  }
  do {
    if (v6 == 0) {
      if ((_DWORD)v8 != -1) {
        goto LABEL_26;
      }
      goto LABEL_37;
    }
    v12 = *(unsigned __int8*)(v4 - 1 + v6--);
  } while (v12 != 46);
  if ((_DWORD)v8 != -1) {
    if (v6 != -1) {
      if (v6 >= (int)v8) {
        v13 = (int)v8 + 1LL;
        if (v5 >= v13) {
          v5 = (int)v8 + 1LL;
        }
        *a2 = v4;
        a2[1] = v5;
        v14 = result[1];
        if (v14 > (int)v8) {
          v15 = v14 - v13;
          if (v15 >= ~(__int64)(int)v8 + v6) {
            v15 = ~(__int64)(int)v8 + v6;
          }
          *a3 = *result + v13;
          a3[1] = v15;
          goto LABEL_34;
        }
        goto LABEL_39;
      }
      return result;
    }
  LABEL_26:
    v16 = (int)v8 + 1LL;
    if (v5 >= v16) {
      v5 = (int)v8 + 1LL;
    }
    *a2 = v4;
    a2[1] = v5;
    v17 = result[1];
    if (v17 <= (int)v8) {
      goto LABEL_39;
    }
    *a3 = *result + v16;
    a3[1] = v17 - v16;
    return result;
  }
  if (v6 == -1) {
  LABEL_37:
    v21 = result[1];
    *a3 = *result;
    a3[1] = v21;
    return result;
  }
  if (v5 >= v6) {
    v5 = v6;
  }
  *a3 = v4;
  a3[1] = v5;
LABEL_34:
  v18 = result[1];
  v19 = v18 >= v6;
  v20 = v18 - v6;
  if (!v19) {
  LABEL_39:
    String_60a250("string_view::substr");
  }
  *a4 = *result + v6;
  a4[1] = v20;
  return result;
}

__int64 SpineModel_19119d0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  _BYTE* v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 136);
  v2 = result;
  if (v1 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
  }
  v3 = *(_QWORD*)(v2 + 144);
  *(_QWORD*)(v2 + 136) = 0;
  if (v3 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
  }
  v4 = *(_QWORD*)(v2 + 152);
  *(_QWORD*)(v2 + 144) = 0;
  if (v4 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
  }
  v5 = *(_QWORD*)(v2 + 160);
  *(_QWORD*)(v2 + 152) = 0;
  if (v5 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v5 + 8), v5);
  }
  v6 = *(_BYTE*)(v2 + 16);
  *(_QWORD*)(v2 + 160) = 0;
  if ((v6 & 1) != 0) {
    v7 = *(_BYTE**)(v2 + 32);
    *(_QWORD*)(v2 + 24) = 0;
  }
  else {
    v7 = (_BYTE*)(v2 + 17);
    *(_BYTE*)(v2 + 16) = 0;
  }
  *v7 = 0;
  if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
    v8 = *(_BYTE**)(v2 + 56);
    *(_QWORD*)(v2 + 48) = 0;
  }
  else {
    v8 = (_BYTE*)(v2 + 41);
    *(_BYTE*)(v2 + 40) = 0;
  }
  *v8 = 0;
  if ((*(_BYTE*)(v2 + 64) & 1) != 0) {
    v9 = *(_BYTE**)(v2 + 80);
    *(_QWORD*)(v2 + 72) = 0;
  }
  else {
    v9 = (_BYTE*)(v2 + 65);
    *(_BYTE*)(v2 + 64) = 0;
  }
  *v9 = 0;
  if ((*(_BYTE*)(v2 + 88) & 1) != 0) {
    v10 = *(_BYTE**)(v2 + 104);
    *(_QWORD*)(v2 + 96) = 0;
  }
  else {
    v10 = (_BYTE*)(v2 + 89);
    *(_BYTE*)(v2 + 88) = 0;
  }
  *v10 = 0;
  v11 = *(_QWORD*)(v2 + 128);
  *(_DWORD*)(v2 + 112) = 1065353216;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  *(_DWORD*)v2 = 0;
  return result;
}

void SpineModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
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
  __int64 v34;
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
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;

  *(_QWORD*)a1 = cspine_SpineModel_vtable;
  SpineModel_1912fc0(a1);
  v2 = *(_QWORD*)(a1 + 1416);
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1392) = SpineModel_1912d60_ptr;
  if (v2 != 0) {
    v3 = GameRoutine_19e10_alt1();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v2, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1((_QWORD*)(a1 + 1392));
  v4 = *(_QWORD*)(a1 + 1384);
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1360) = SpineModel_1912dc0_ptr;
  if (v4 != 0) {
    v5 = GameRoutine_19e10_alt1();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v5 + 40LL))(
        v5, v4, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0_alt1((_QWORD*)(a1 + 1360));
  v6 = *(_QWORD*)(a1 + 1336);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)(a1 + 1344);
    if (v6 == v8) {
      goto LABEL_16;
    }
    v9 = *(_QWORD*)(a1 + 1344);
    do {
      v10 = *(_BYTE*)(v9 - 64);
      v9 -= 64;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v8 - 48);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v12, v11);
        }
      }
      v8 = v9;
    } while (v9 != v6);
    v13 = *(_QWORD*)(a1 + 1336);
    *(_QWORD*)(a1 + 1344) = v6;
    v6 = v13;
    if (v13 != 0) {
    LABEL_16:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v14, v6);
    }
  }
  v15 = *(_QWORD*)(a1 + 1328);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = *(_QWORD**)(a1 + 1296);
  if (v16 != nullptr) {
    do {
      v18 = (_QWORD*)*v16;
      v19 = v16[5];
      v16[5] = 0;
      if (v19 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
      }
      v20 = v16[4];
      v16[4] = 0;
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v17, (__int64)v16);
      v16 = v18;
    } while (v18 != nullptr);
  }
  v21 = *(_QWORD*)(a1 + 1280);
  *(_QWORD*)(a1 + 1280) = 0;
  if (v21 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v22, v21);
  }
  v23 = *(_QWORD*)(a1 + 1032);
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  v24 = *(_QWORD*)(a1 + 1000);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 1008);
    if (v24 == v25) {
      goto LABEL_47;
    }
    do {
      v26 = *(_QWORD*)(v25 - 8);
      if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak_alt1(v26);
      }
      v25 -= 16;
    } while (v25 != v24);
    v27 = *(_QWORD*)(a1 + 1000);
    *(_QWORD*)(a1 + 1008) = v24;
    v24 = v27;
    if (v27 != 0) {
    LABEL_47:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v28, v24);
    }
  }
  v29 = *(_QWORD*)(a1 + 976);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 984);
    if (v29 == v30) {
      goto LABEL_58;
    }
    do {
      v31 = *(_QWORD*)(v30 - 8);
      if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt1(v31);
      }
      v30 -= 16;
    } while (v30 != v29);
    v32 = *(_QWORD*)(a1 + 976);
    *(_QWORD*)(a1 + 984) = v29;
    v29 = v32;
    if (v32 != 0) {
    LABEL_58:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v33, v29);
    }
  }
  v34 = *(_QWORD*)(a1 + 952);
  if (v34 != 0) {
    v35 = *(_QWORD*)(a1 + 960);
    if (v34 == v35) {
      goto LABEL_69;
    }
    do {
      v36 = *(_QWORD*)(v35 - 8);
      if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_alt1(v36);
      }
      v35 -= 16;
    } while (v35 != v34);
    v37 = *(_QWORD*)(a1 + 952);
    *(_QWORD*)(a1 + 960) = v34;
    v34 = v37;
    if (v37 != 0) {
    LABEL_69:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v38, v34);
    }
  }
  v39 = *(_QWORD*)(a1 + 832);
  *(_QWORD*)(a1 + 832) = 0;
  if (v39 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
  }
  v40 = *(_QWORD*)(a1 + 824);
  *(_QWORD*)(a1 + 824) = 0;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = *(_QWORD*)(a1 + 816);
  *(_QWORD*)(a1 + 816) = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = *(_QWORD*)(a1 + 808);
  *(_QWORD*)(a1 + 808) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  GameRoutine_604050(a1 + 680);
  GameRoutine_604050(a1 + 552);
  GameRoutine_604050(a1 + 424);
  v43 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 384) = 0;
  if (v43 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
  }
  v44 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 376) = 0;
  if (v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
  }
  v45 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 336) = 0;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  v46 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  v47 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 288) = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  v48 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 280) = 0;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
  }
  v49 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = 0;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  v50 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = 0;
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
  }
  v51 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 256) = 0;
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  }
  v52 = *(_QWORD*)(a1 + 232);
  if (v52 != 0) {
    v53 = *(_QWORD*)v7;
    *(_QWORD*)(a1 + 240) = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v53 + v54, v52);
  }
  v55 = *(_QWORD*)(a1 + 208);
  if (v55 != 0) {
    v56 = *(_QWORD**)(a1 + 216);
    if ((_QWORD*)v55 == v56) {
      goto LABEL_111;
    }
    do {
      v57 = *(v56 - 1);
      *(v56 - 1) = 0;
      if (v57 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
      }
      v59 = *(v56 - 2);
      v56 -= 2;
      v58 = v59;
      *v56 = 0;
      if (v59 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
      }
    } while (v56 != (_QWORD*)v55);
    v60 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216) = v55;
    v55 = v60;
    if (v60 != 0) {
    LABEL_111:
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v61, v55);
    }
  }
  v62 = *(_QWORD*)(a1 + 184);
  if (v62 != 0) {
    v63 = *(_QWORD*)v7;
    *(_QWORD*)(a1 + 192) = v62;
    v64 = 128;
    if (*(_QWORD*)(v63 + 200) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v63 + v64, v62);
  }
  v65 = *(_QWORD*)(a1 + 160);
  if (v65 != 0) {
    v66 = *(_QWORD**)(a1 + 168);
    if ((_QWORD*)v65 == v66) {
      goto LABEL_127;
    }
    do {
      v67 = *(v66 - 1);
      *(v66 - 1) = 0;
      if (v67 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v67 + 8LL))(v67);
      }
      v69 = *(v66 - 2);
      v66 -= 2;
      v68 = v69;
      *v66 = 0;
      if (v69 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v68 + 8LL))(v68);
      }
    } while (v66 != (_QWORD*)v65);
    v70 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v65;
    v65 = v70;
    if (v70 != 0) {
    LABEL_127:
      v71 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v71 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v71, v65);
    }
  }
  v72 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = 0;
  if (v72 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v72 + 8LL))(v72);
  }
  v73 = *(_QWORD*)(a1 + 128);
  if (v73 != 0) {
    v74 = *(_QWORD**)(a1 + 136);
    if ((_QWORD*)v73 == v74) {
      goto LABEL_148;
    }
    do {
      v77 = *--v74;
      v76 = v77;
      *v74 = 0;
      if (v77 != 0) {
        if ((*(_BYTE*)(v76 + 96) & 1) != 0) {
          v78 = *(_QWORD*)(v76 + 112);
          if (v78 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v79 = 128;
            }
            else {
              v79 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v79, v78);
          }
        }
        GameRoutine_606500(v76 + 16);
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v75 = 128;
        }
        else {
          v75 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v75, v76);
      }
    } while (v74 != (_QWORD*)v73);
    v80 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v73;
    v73 = v80;
    if (v80 != 0) {
    LABEL_148:
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v81, v73);
    }
  }
  v82 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v82 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v82 + 8LL))(v82);
  }
  v83 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (v83 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v83 + 8LL))(v83);
  }
  v84 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v84 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v84 + 8LL))(v84);
  }
  v85 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v85 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
  }
  v86 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  if (v86 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v86 + 8LL))(v86);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v87 = *(_QWORD*)(a1 + 80);
    if (v87 != 0) {
      v88 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v88 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v88, v87);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v89 = *(_QWORD*)(a1 + 56);
    if (v89 != 0) {
      v90 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v90 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v90, v89);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v91 = *(_QWORD*)(a1 + 32);
    if (v91 != 0) {
      v92 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v92 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v92, v91);
    }
  }
  v93 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v93 != 0) {
    SpineModel_19119d0(v93);
    cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(v93 + 8);
    v94 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v94 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v94, v93);
  }
}

__int64 SpineModel_1912d60(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_21101c8;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

__int64 SpineModel_1912dc0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_2110190;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

bool SpineModel_1912e70(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  if (*(_QWORD*)(a1 + 8) == 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    v6 = *(_QWORD*)(a1 + 8);
    v7 = GameData_212fc98[0] + 2;
    *(_BYTE*)(v5 + 89) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_QWORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(a1 + 8) = v5;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = v7;
    *(_DWORD*)(v5 + 112) = 1065353216;
    if (v6 != 0) {
      SpineModel_19119d0(v6);
      cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(v6 + 8);
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v6);
    }
  }
  if (*(_QWORD*)(a1 + 152) == 0) {
    v9 = (_QWORD*)GameRoutine_4e7c0_alt1(16);
    GameRoutine_4e940_alt1(v9);
    *v9 = &cspine_TextureLoader_vtable_alt1;
    v9[1] = a1;
    v10 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 152) = v9;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 == 0) {
    return false;
  }
  cspine_SpineModel_AsyncArgument_Assign_alt1((__int64*)(v11 + 8), a2);
  *(_DWORD*)v11 = 1;
  return **(_DWORD**)(a1 + 8) != 0;
}

void SpineModel_1912fc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
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
  char v20;

  v2 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *(__int64**)(a1 + 128);
  v7 = *(__int64**)(a1 + 136);
  if (v6 != v7) {
    do {
      v8 = *v6++;
      v9 = *(_QWORD*)v8;
      *(_QWORD*)(v8 + 8) = 0;
      GameRoutine_634d80_alt1(*(_QWORD*)(v9 + 8), v9);
      *(_QWORD*)v8 = 0;
      *(_BYTE*)(v8 + 121) = 0;
    } while (v6 != v7);
    v6 = *(__int64**)(a1 + 128);
    v7 = *(__int64**)(a1 + 136);
  }
  while (v7 != v6) {
    v12 = *--v7;
    v11 = v12;
    *v7 = 0;
    if (v12 != 0) {
      if ((*(_BYTE*)(v11 + 96) & 1) != 0) {
        v13 = *(_QWORD*)(v11 + 112);
        if (v13 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v14,
                                             v13);
        }
      }
      GameRoutine_606500(v11 + 16);
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v10, v11);
    }
  }
  v15 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 136) = v6;
  *(_QWORD*)(a1 + 88) = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = *(_QWORD*)(a1 + 8);
  if (v17 != 0) {
    SpineModel_19119d0(v17);
    v18 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 8) = 0;
    if (v18 != 0) {
      SpineModel_19119d0(v18);
      cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(v18 + 8);
      v19 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v19, v18);
    }
  }
  v20 = *(_BYTE*)(a1 + 1042);
  *(_BYTE*)(a1 + 1041) = 0;
  if ((v20 & 1) != 0) {
    GameRoutine_6040f0_alt1(a1 + 424);
    GameRoutine_6040f0_alt1(a1 + 552);
    GameRoutine_6040f0_alt1(a1 + 680);
    *(_BYTE*)(a1 + 1042) = 0;
  }
}

_QWORD* SpineModel_19160e0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  _QWORD v34[2];
  const char* v35;
  char v36;

  if (*(_BYTE*)(a1 + 1041) == 1) {
    a2[1] = 0;
    v3 = *(_QWORD*)(a1 + 96);
    v36 = 0;
    v4 = GameData_21322b8[0] + 2;
    v34[0] = GameData_21322b8[0] + 2;
    v34[1] = 6;
    v35 = "Render";
    v5 = GameRoutine_1efd0(v3, v34);
    v6 = spine_Slot_getAttachment(v5);
    if (v6 != 0) {
      v7 = v6;
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      v9 = spine_RTTI_isExactly(v8, &GameData_2177278);
      if ((v9 & 1) != 0) {
        v11 = a2[1];
        v10 = a2[2];
        v12 = 4;
        a2[1] = 4;
        if (v10 <= 3) {
          v13 = a2[3];
          a2[2] = 8;
          v14 = GameRoutine_19e10(v9);
          v15 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                __int64))(*(_QWORD*)v14 + 32LL))(
              v14, v13, 256, "/Program/Externals/Spine/include\\spine/Vector.h",
              82);
          v12 = a2[1];
          a2[3] = v15;
        }
        if (v11 < v12) {
          v16 = 32 * v11;
          do {
            ++v11;
            v17 = (_QWORD*)(a2[3] + v16);
            v16 += 32;
            v17[2] = 0;
            v17[3] = 0;
            *v17 = 0;
            v17[1] = 0;
          } while (v11 < a2[1]);
        }
        v6 = ((__int64 (*)(__int64, __int64, _QWORD, _QWORD,
                           __int64))GameRoutine_1bc10)(v7, v5, a2[3], 0, 8);
      }
      else {
        v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        v6 = spine_RTTI_isExactly(v18, &GameData_2177268);
        if ((v6 & 1) != 0) {
          v19 = spine_VertexAttachment_getWorldVerticesLength(v7);
          v21 = a2[1];
          v20 = a2[2];
          v22 = v19 >> 1;
          a2[1] = v19 >> 1;
          if (v20 < v19 >> 1) {
            v23 = a2[3];
            v24 = (int)(float)((float)v22 * 1.75f);
            if (v24 <= 8) {
              v25 = 8;
            }
            else {
              v25 = v24;
            }
            a2[2] = v25;
            v26 = GameRoutine_19e10(v19);
            v27 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                  __int64))(*(_QWORD*)v26 + 32LL))(
                v26, v23, 32LL * v25,
                "/Program/Externals/Spine/include\\spine/Vector.h", 82);
            v22 = a2[1];
            a2[3] = v27;
          }
          if (v21 < v22) {
            v28 = 32 * v21;
            do {
              ++v21;
              v29 = (_QWORD*)(a2[3] + v28);
              v28 += 32;
              v29[2] = 0;
              v29[3] = 0;
              *v29 = 0;
              v29[1] = 0;
            } while (v21 < a2[1]);
          }
          v30 = spine_VertexAttachment_getWorldVerticesLength(v7);
          v6 = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD,
                               _QWORD, __int64))(*(_QWORD*)v7 + 32LL))(
              v7, v5, 0, v30, a2[3], 0, 8);
        }
      }
    }
    v31 = v35;
    v34[0] = v4;
    if (v35 != nullptr && (v36 & 1) != 0) {
      v32 = GameRoutine_19e10(v6);
      (*(void (**)(__int64, const char*, const char*, __int64))(*(_QWORD*)v32 +
                                                                40LL))(
          v32, v31, "/Program/Externals/Spine/include\\spine/SpineString.h",
          206);
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(v34);
  }
  return a2;
}

_QWORD* SpineModel_19184e0(float* a1, _QWORD* a2, __int64** a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD** v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 primeEm;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  unsigned __int64 v33;

  v4 = *a2;
  v5 = a2[1];
  v8 = std___1___hash_memory(*a2, v5);
  v9 = *((_QWORD*)a1 + 1);
  v10 = v8;
  if (v9 != 0) {
    v11 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v3 = v8;
      if (v8 >= v9) {
        v3 = v8 % v9;
      }
    }
    else {
      v3 = v11 & v8;
    }
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v12 != nullptr) {
      v13 = *v12;
      if (*v12 != nullptr) {
        if ((v9 & v11) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == v10) {
              if (v13[3] == v5 && (unsigned int)memcmp(v13[2], v4, v5) == 0) {
                return v13;
              }
            }
            else if ((v15 & v11) != v3) {
              goto LABEL_25;
            }
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == v10) {
            if (v13[3] == v5 && (unsigned int)memcmp(v13[2], v4, v5) == 0) {
              return v13;
            }
          }
          else {
            if (v14 >= v9) {
              v14 %= v9;
            }
            if (v14 != v3) {
              break;
            }
          }
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_25:
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       104, 16, 0);
  v17 = *a3;
  *(_QWORD*)v16 = 0;
  *(_QWORD*)(v16 + 8) = v10;
  v18 = a1[8];
  v13 = (_QWORD*)v16;
  v20 = *v17;
  v19 = v17[1];
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 16) = v20;
  *(_QWORD*)(v16 + 24) = v19;
  *(_DWORD*)(v16 + 92) = 1065353216;
  v21 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v9 == 0 || (float)(v18 * (float)v9) < v21) {
    v22 = v21 / v18;
    v23 = true;
    if (v9 >= 3) {
      v23 = (v9 & (v9 - 1)) != 0;
    }
    v24 = v23 | (2 * v9);
    v25 = vcvtps_u64_f32(v22);
    if (v24 <= v25) {
      v26 = v25;
    }
    else {
      v26 = v24;
    }
    if (v26 == 1) {
      v26 = 2;
    }
    else if ((v26 & (v26 - 1)) != 0) {
      primeEm = std___1___next_prime(v26);
      v9 = *((_QWORD*)a1 + 1);
      v26 = primeEm;
    }
    if (v26 > v9) {
      goto LABEL_37;
    }
    if (v26 < v9) {
      v28 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v9 < 3 || (v9 & (v9 - 1)) != 0) {
        v28 = std___1___next_prime(v28);
      }
      else {
        v29 = 1LL << (-(char)__clz(v28 - 1) & 63);
        if (v28 >= 2) {
          v28 = v29;
        }
      }
      if (v26 <= v28) {
        v26 = v28;
      }
      if (v26 < v9) {
      LABEL_37:
        GameRoutine_1918840(a1, v26);
      }
    }
    v9 = *((_QWORD*)a1 + 1);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v3 = v10 % v9;
      }
      else {
        v3 = v10;
      }
    }
    else {
      v3 = (v9 - 1) & v10;
    }
  }
  v30 = *(_QWORD*)a1;
  v31 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v31 != nullptr) {
    *v13 = *v31;
    *v31 = v13;
  }
  else {
    v32 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v13;
    *v13 = v32;
    *(_QWORD*)(v30 + 8 * v3) = a1 + 4;
    if (*v13 != 0) {
      v33 = *(_QWORD*)(*v13 + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v33 >= v9) {
          v33 %= v9;
        }
      }
      else {
        v33 &= v9 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = v13;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v13;
}

_QWORD* cspine_SpineModel_Draw_lambda0_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;

  *a1 = GameData_2110200;
  v2 = a1 + 10;
  v3 = (_QWORD*)a1[14];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  result = (_QWORD*)a1[8];
  if (result == a1 + 4) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

void cspine_SpineModel_Draw_lambda0_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_2110200;
  v2 = a1 + 10;
  v3 = (_QWORD*)a1[14];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[8];
  if (v5 == a1 + 4) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)a1);
}

_QWORD* cspine_SpineModel_Draw_lambda0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
  *v2 = GameData_2110200;
  v2[2] = a1[2];
  v3 = (_QWORD*)a1[8];
  if (v3 == nullptr) {
    v2[8] = 0;
    v4 = (_QWORD*)a1[14];
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v3 == a1 + 4) {
    v2[8] = v2 + 4;
    (*(void (**)(_QWORD*))(*v3 + 24LL))(v3);
    v4 = (_QWORD*)a1[14];
    if (v4 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    v2[14] = 0;
    return v2;
  }
  v2[8] = (*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
  v4 = (_QWORD*)a1[14];
  if (v4 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v4 == a1 + 10) {
    v2[14] = v2 + 10;
    (*(void (**)(_QWORD*))(*v4 + 24LL))(v4);
  }
  else {
    v2[14] = (*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
  }
  return v2;
}

__int64 cspine_SpineModel_Draw_lambda0_CloneInto(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 result;

  *a2 = GameData_2110200;
  a2[2] = a1[2];
  v4 = (_QWORD*)a1[8];
  if (v4 == nullptr) {
    a2[8] = 0;
    result = a1[14];
    if (result != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v4 == a1 + 4) {
    a2[8] = a2 + 4;
    (*(void (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    result = a1[14];
    if (result != 0) {
      goto LABEL_6;
    }
  LABEL_9:
    a2[14] = 0;
    return result;
  }
  a2[8] = (*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
  result = a1[14];
  if (result == 0) {
    goto LABEL_9;
  }
LABEL_6:
  if ((_QWORD*)result == a1 + 10) {
    a2[14] = a2 + 10;
    return (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[14] + 24LL))(a1[14]);
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    a2[14] = result;
  }
  return result;
}

_QWORD* cspine_SpineModel_Draw_lambda0_Destroy(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;

  v2 = a1 + 10;
  v3 = (_QWORD*)a1[14];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  result = (_QWORD*)a1[8];
  if (result == a1 + 4) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

__int64 cspine_SpineModel_Draw_lambda0_Invoke(_QWORD* a1, __int64* a2)
{
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
  __int64 v15;

  v3 = *a2;
  v4 = a1[2];
  v5 = a1[14];
  if (v5 != 0) {
    v15 = v4;
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v15);
  }
  v6 = a1[8];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
  }
  (*(void (**)(_QWORD))(**(_QWORD**)(v4 + 808) + 40LL))(*(_QWORD*)(v4 + 808));
  v7 = (*(__int64 (**)(__int64))GameData_212e4d8[0])(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256) + 8LL);
  ((void (*)(__int64, __int64, _QWORD, __int64))*GameData_212e4e0)(v3 + 8, 1, 0,
                                                                   v7);
  v8 = *(_QWORD*)(v4 + 256 + 8LL * *(_QWORD*)(v4 + 848));
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 48LL))(v8);
  v10 = *(_QWORD*)(v4 + 256 + 8LL * *(_QWORD*)(v4 + 848));
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10);
  (*(void (**)(__int64, _QWORD, __int64, __int64))GameData_2132328[0])(
      v3 + 8, 0, v9, v11);
  (*(void (**)(__int64, __int64))GameData_212e888[0])(v3 + 8, v4 + 944);
  v12 = GameRoutine_5fb900(*(_QWORD*)(**(_QWORD**)(v4 + 976) + 136LL));
  (*(void (**)(__int64, _QWORD, __int64))GameData_2132330[0])(
      v3 + 8, *(_QWORD*)(v12 + 8), 3);
  v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 272) + 48LL))(
      *(_QWORD*)(v4 + 272));
  return ((__int64 (*)(__int64, __int64, __int64, __int64,
                       __int64))*GameData_2132338)(v3 + 8, 4, 1, 6, v13);
}

_QWORD* SpineModel_1919040(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return nullptr;
  }
  v4 = *a2;
  v5 = a2[1];
  v7 = std___1___hash_memory(*a2, v5);
  v8 = v2 - 1;
  v9 = v7;
  if ((v2 & (v2 - 1)) != 0) {
    v10 = v7;
    if (v7 >= v2) {
      v10 = v7 % v2;
    }
  }
  else {
    v10 = v7 & v8;
  }
  v11 = *(_QWORD**)(*a1 + 8 * v10);
  if (v11 == nullptr) {
    return nullptr;
  }
  v12 = (_QWORD*)*v11;
  if (*v11 != 0) {
    if ((v2 & v8) == 0) {
      while (1) {
        v14 = v12[1];
        if (v14 == v9) {
          if (v12[3] == v5 && (unsigned int)memcmp(v12[2], v4, v5) == 0) {
            return v12;
          }
        }
        else if ((v14 & v8) != v10) {
          return nullptr;
        }
        v12 = (_QWORD*)*v12;
        if (v12 == nullptr) {
          return v12;
        }
      }
    }
    do {
      v13 = v12[1];
      if (v13 == v9) {
        if (v12[3] == v5 && (unsigned int)memcmp(v12[2], v4, v5) == 0) {
          return v12;
        }
      }
      else {
        if (v13 >= v2) {
          v13 %= v2;
        }
        if (v13 != v10) {
          return nullptr;
        }
      }
      v12 = (_QWORD*)*v12;
    } while (v12 != nullptr);
  }
  return v12;
}

void cspine_SpineModel_buildModel_lambda1_Invoke(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 0;
  *(_BYTE*)(a2 + 2) = 0;
  *(_WORD*)(a2 + 6) = 42;
}

void cspine_SpineModel_buildModel_lambda2_Invoke(__int64 a1, __int64 a2)
{
  *(_WORD*)(a2 + 6) = 42;
  *(_BYTE*)(a2 + 4) = 2;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 2) = 3;
}

#pragma GCC visibility pop
