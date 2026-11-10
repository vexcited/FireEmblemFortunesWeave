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
__int64 SpineModel_Destructor(__int64 a1);
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
__int64 SpineModel_1912fc0(__int64 a1);
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

__int64 SpineModel_Destructor(__int64 a1)
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
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
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
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
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
  __int64 result;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;

  *(_QWORD*)a1 = cspine_SpineModel_vtable;
  v2 = GameRoutine_1912fc0();
  v3 = *(_QWORD*)(a1 + 1416);
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1392) = GameData_21101c8;
  if (v3 != 0) {
    v4 = GameRoutine_19e10(v2);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v4 + 40LL))(
        v4, v3, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v5 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 1392);
  v6 = *(_QWORD*)(a1 + 1384);
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1360) = GameData_2110190;
  if (v6 != 0) {
    v7 = GameRoutine_19e10(v5);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v7 + 40LL))(
        v7, v6, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 1360);
  v8 = *(_QWORD*)(a1 + 1336);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)(a1 + 1344);
    if (v8 == v10) {
      goto LABEL_16;
    }
    v11 = *(_QWORD*)(a1 + 1344);
    do {
      v12 = *(_BYTE*)(v11 - 64);
      v11 -= 64;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
      }
      v10 = v11;
    } while (v11 != v8);
    v14 = *(_QWORD*)(a1 + 1336);
    *(_QWORD*)(a1 + 1344) = v8;
    if (v14 != 0) {
    LABEL_16:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v15);
    }
  }
  v16 = *(_QWORD*)(a1 + 1328);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = *(_QWORD**)(a1 + 1296);
  if (v17 != nullptr) {
    do {
      v19 = (_QWORD*)*v17;
      v20 = v17[5];
      v17[5] = 0;
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      v21 = v17[4];
      v17[4] = 0;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18);
      v17 = v19;
    } while (v19 != nullptr);
  }
  v22 = *(_QWORD*)(a1 + 1280);
  *(_QWORD*)(a1 + 1280) = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
  }
  v24 = *(_QWORD*)(a1 + 1032);
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = *(_QWORD*)(a1 + 1000);
  if (v25 != 0) {
    v26 = *(_QWORD*)(a1 + 1008);
    if (v25 == v26) {
      goto LABEL_47;
    }
    do {
      v27 = *(_QWORD*)(v26 - 8);
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
      }
      v26 -= 16;
    } while (v26 != v25);
    v28 = *(_QWORD*)(a1 + 1000);
    *(_QWORD*)(a1 + 1008) = v25;
    if (v28 != 0) {
    LABEL_47:
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
    }
  }
  v30 = *(_QWORD*)(a1 + 976);
  if (v30 != 0) {
    v31 = *(_QWORD*)(a1 + 984);
    if (v30 == v31) {
      goto LABEL_58;
    }
    do {
      v32 = *(_QWORD*)(v31 - 8);
      if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v32);
      }
      v31 -= 16;
    } while (v31 != v30);
    v33 = *(_QWORD*)(a1 + 976);
    *(_QWORD*)(a1 + 984) = v30;
    if (v33 != 0) {
    LABEL_58:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v34);
    }
  }
  v35 = *(_QWORD*)(a1 + 952);
  if (v35 != 0) {
    v36 = *(_QWORD*)(a1 + 960);
    if (v35 == v36) {
      goto LABEL_69;
    }
    do {
      v37 = *(_QWORD*)(v36 - 8);
      if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
      v36 -= 16;
    } while (v36 != v35);
    v38 = *(_QWORD*)(a1 + 952);
    *(_QWORD*)(a1 + 960) = v35;
    if (v38 != 0) {
    LABEL_69:
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v39);
    }
  }
  v40 = *(_QWORD*)(a1 + 832);
  *(_QWORD*)(a1 + 832) = 0;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = *(_QWORD*)(a1 + 824);
  *(_QWORD*)(a1 + 824) = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = *(_QWORD*)(a1 + 816);
  *(_QWORD*)(a1 + 816) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = *(_QWORD*)(a1 + 808);
  *(_QWORD*)(a1 + 808) = 0;
  if (v43 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
  }
  GameRoutine_604050(a1 + 680);
  GameRoutine_604050(a1 + 552);
  GameRoutine_604050(a1 + 424);
  v44 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 384) = 0;
  if (v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
  }
  v45 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 376) = 0;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  v46 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 336) = 0;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  v47 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  v48 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 288) = 0;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
  }
  v49 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 280) = 0;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  v50 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = 0;
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
  }
  v51 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = 0;
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  }
  v52 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 256) = 0;
  if (v52 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52);
  }
  v53 = *(_QWORD*)(a1 + 232);
  if (v53 != 0) {
    v54 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 240) = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(v54 + v55);
  }
  v56 = *(_QWORD**)(a1 + 208);
  if (v56 != nullptr) {
    v57 = *(_QWORD**)(a1 + 216);
    if (v56 == v57) {
      goto LABEL_111;
    }
    do {
      v58 = *(v57 - 1);
      *(v57 - 1) = 0;
      if (v58 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
      }
      v60 = *(v57 - 2);
      v57 -= 2;
      v59 = v60;
      *v57 = 0;
      if (v60 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
      }
    } while (v57 != v56);
    v61 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216) = v56;
    if (v61 != 0) {
    LABEL_111:
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v62);
    }
  }
  v63 = *(_QWORD*)(a1 + 184);
  if (v63 != 0) {
    v64 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 192) = v63;
    v65 = 128;
    if (*(_QWORD*)(v64 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(v64 + v65);
  }
  v66 = *(_QWORD**)(a1 + 160);
  if (v66 != nullptr) {
    v67 = *(_QWORD**)(a1 + 168);
    if (v66 == v67) {
      goto LABEL_127;
    }
    do {
      v68 = *(v67 - 1);
      *(v67 - 1) = 0;
      if (v68 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v68 + 8LL))(v68);
      }
      v70 = *(v67 - 2);
      v67 -= 2;
      v69 = v70;
      *v67 = 0;
      if (v70 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
      }
    } while (v67 != v66);
    v71 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v66;
    if (v71 != 0) {
    LABEL_127:
      v72 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v72);
    }
  }
  v73 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = 0;
  if (v73 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 8LL))(v73);
  }
  v74 = *(_QWORD**)(a1 + 128);
  if (v74 != nullptr) {
    v75 = *(_QWORD**)(a1 + 136);
    if (v74 == v75) {
      goto LABEL_148;
    }
    do {
      v78 = *--v75;
      v77 = v78;
      *v75 = 0;
      if (v78 != 0) {
        if ((*(_BYTE*)(v77 + 96) & 1) != 0 && *(_QWORD*)(v77 + 112) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v79 = 128;
          }
          else {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v79);
        }
        GameRoutine_606500(v77 + 16);
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v76);
      }
    } while (v75 != v74);
    v80 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v74;
    if (v80 != 0) {
    LABEL_148:
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v81);
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
  result = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v87 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v87);
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v88);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v89 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v89);
  }
  v90 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v90 != 0) {
    GameRoutine_19119d0(v90);
    cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(v90 + 8);
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v91 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v91);
  }
  return result;
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
  _DWORD* v11;

  if (*(_QWORD*)(a1 + 8) == 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
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
      cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(v6 + 8);
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
    }
  }
  if (*(_QWORD*)(a1 + 152) == 0) {
    v9 = (_QWORD*)GameRoutine_4e7c0(16);
    GameRoutine_4e940();
    *v9 = &cspine_TextureLoader_vtable;
    v9[1] = a1;
    v10 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 152) = v9;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
  }
  v11 = *(_DWORD**)(a1 + 8);
  if (v11 == nullptr) {
    return false;
  }
  cspine_SpineModel_AsyncArgument_Assign(v11 + 2, a2);
  *v11 = 1;
  return **(_DWORD**)(a1 + 8) != 0;
}

__int64 SpineModel_1912fc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64* v20;

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
  v6 = *(__int64***)(a1 + 128);
  v7 = *(__int64***)(a1 + 136);
  if (v6 != v7) {
    do {
      v8 = *v6++;
      v9 = *v8;
      v8[1] = 0;
      GameRoutine_634d80(*(_QWORD*)(v9 + 8), v9);
      *v8 = 0;
      *((_BYTE*)v8 + 121) = 0;
    } while (v6 != v7);
    v6 = *(__int64***)(a1 + 128);
    v7 = *(__int64***)(a1 + 136);
  }
  while (v7 != v6) {
    v12 = (__int64)*--v7;
    v11 = v12;
    *v7 = nullptr;
    if (v12 != 0) {
      if ((*(_BYTE*)(v11 + 96) & 1) != 0 && *(_QWORD*)(v11 + 112) != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13);
      }
      GameRoutine_606500(v11 + 16);
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
    }
  }
  v14 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 136) = v6;
  *(_QWORD*)(a1 + 88) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = SpineModel_19119d0(result);
    v17 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 8) = 0;
    if (v17 != 0) {
      SpineModel_19119d0(v17);
      cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(v17 + 8);
      v18 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v18);
    }
  }
  v19 = *(_BYTE*)(a1 + 1042);
  *(_BYTE*)(a1 + 1041) = 0;
  if ((v19 & 1) != 0) {
    v20 = game_g_frame_clock_ptr[0];
    GameRoutine_6040f0(a1 + 424, *game_g_frame_clock_ptr[0] + 568);
    GameRoutine_6040f0(a1 + 552, *v20 + 568);
    result = GameRoutine_6040f0(a1 + 680, *v20 + 568);
    *(_BYTE*)(a1 + 1042) = 0;
  }
  return result;
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
