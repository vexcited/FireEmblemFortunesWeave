#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdf640[])();
extern __int64 (*game_hub_LocatorDispos_vtable[])();
extern __int64 GameData_220d620;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2213f50;
_QWORD* LocatorDispos_Destructor(_QWORD* result);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_db5550(__int64, __int64);
__int64 GameRoutine_db7770(_QWORD);
__int64 GameRoutine_df7380(_QWORD, _QWORD, _QWORD);
__int64 HubNatives_ccba40(_QWORD, _QWORD);
__int64 HubNatives_ccbf80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
void __attribute__((noreturn)) GameRoutine_db6220(void);
void __attribute__((noreturn)) GameRoutine_db68c0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 LocatorDispos_db3460(__int64 result);
_QWORD* LocatorDispos_db5ce0(__int64* a1, _QWORD* a2);
__int64 game_hub_LocatorDispos_Rebuild_lambda0_Invoke(__int64 result,
                                                      __int64* a2, __int64* a3);
__int64 LocatorDispos_db6990(__int64 a1, __int64 a2, _QWORD* a3);
bool game_hub_LocatorDispos_CreateExternalDataImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 game_hub_LocatorDispos_CreateExternalDataImpl_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3);
__int64
game_hub_LocatorDispos_BuildInitTransformLocator_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_hub_LocatorDispos_BuildInitTransformLocator_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3);

_QWORD* LocatorDispos_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
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

  v1 = result[10];
  v2 = result;
  *result = game_hub_LocatorDispos_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[11];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = result[11];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      v4 = v5;
    } while (v5 != v1);
    v8 = v2[10];
    v2[11] = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
  }
  v10 = v2[7];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[8] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12);
  }
  v13 = v2[4];
  if (v13 != 0) {
    v14 = v2[5];
    if (v13 == v14) {
      goto LABEL_33;
    }
    do {
      v15 = v14;
      v16 = *(_QWORD*)(v14 - 8);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v16);
      }
      v14 = v15 - 40;
      if ((*(_BYTE*)(v15 - 40) & 1) != 0 && *(_QWORD*)(v15 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
    } while (v14 != v13);
    v18 = v2[4];
    v2[5] = v13;
    if (v18 != 0) {
    LABEL_33:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  v20 = v2[1];
  if (v20 != 0) {
    v21 = v2[2];
    if (v20 == v21) {
      goto LABEL_44;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = v2[1];
    v2[2] = v20;
    if (v23 != 0) {
    LABEL_44:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
    }
  }
  *v2 = GameData_1fdf640;
  if ((_QWORD*)GameData_220d620 == v2) {
    GameData_220d620 = 0;
    GameData_2213f50 = 0;
  }
  return result;
}

__int64 LocatorDispos_db3460(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD**)(result + 8);
  v2 = *(_QWORD**)(result + 16);
  v3 = result;
  if (v1 != v2) {
    while ((*(_BYTE*)(*v1 + 16LL) & 1) == 0) {
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
  }
  v4 = v1 + 2;
  if (v1 != v2 && v4 != v2) {
    do {
      v6 = *v4;
      if ((*(_BYTE*)(*v4 + 16LL) & 1) == 0) {
        v7 = v4[1];
        *v4 = 0;
        v4[1] = 0;
        v8 = v1[1];
        *v1 = v6;
        v1[1] = v7;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
        }
        v1 += 2;
      }
      v4 += 2;
    } while (v4 != v2);
    v2 = *(_QWORD**)(v3 + 16);
  }
  if (v1 != v2) {
    do {
      v9 = *(v2 - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = std___1___shared_weak_count___release_weak(v9);
      }
      v2 -= 2;
    } while (v2 != v1);
    *(_QWORD*)(v3 + 16) = v1;
  }
  return result;
}

_QWORD* LocatorDispos_db5ce0(__int64* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
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
  _QWORD* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  v2 = a1[1] - *a1;
  v3 = 0x4FCACE213F2B3885LL * (v2 >> 3) + 1;
  if (v3 > 0x6A63BD81A98EF6LL) {
    GameRoutine_db6220();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x9F959C427E56710ALL * ((a1[2] - *a1) >> 3) > v3) {
    v3 = 0x9F959C427E56710ALL * ((a1[2] - *a1) >> 3);
  }
  if ((unsigned __int64)(0x4FCACE213F2B3885LL * ((a1[2] - *a1) >> 3)) >=
      0x3531DEC0D4C77BLL) {
    v7 = 0x6A63BD81A98EF6LL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x6A63BD81A98EF6LL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        616 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = (_QWORD*)(v8 + v2);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, a2[2], a2[1]);
  }
  else {
    v10 = a2[1];
    *v9 = *a2;
    v9[1] = v10;
    v9[2] = a2[2];
  }
  v11 = v8 + 616 * v7;
  HubNatives_ccba40(v9 + 3, a2 + 3);
  v12 = *a1;
  v13 = a1[1];
  v14 = v9 + 77;
  v15 = (char*)v9 + *a1 - v13;
  if (v13 != *a1) {
    v16 = 0;
    do {
      v17 = v12 + v16;
      v18 = &v15[v16];
      v19 = *(_QWORD*)(v12 + v16);
      v20 = *(_QWORD*)(v12 + v16 + 16);
      *((_QWORD*)v18 + 1) = *(_QWORD*)(v12 + v16 + 8);
      *((_QWORD*)v18 + 2) = v20;
      *(_QWORD*)v18 = v19;
      *(_QWORD*)(v17 + 8) = 0;
      *(_QWORD*)(v17 + 16) = 0;
      *(_QWORD*)v17 = 0;
      v21 = *(_QWORD*)(v12 + v16 + 24);
      v22 = *(_QWORD*)(v12 + v16 + 40);
      *((_QWORD*)v18 + 4) = *(_QWORD*)(v12 + v16 + 32);
      *((_QWORD*)v18 + 5) = v22;
      *((_QWORD*)v18 + 3) = v21;
      *(_QWORD*)(v17 + 32) = 0;
      *(_QWORD*)(v17 + 40) = 0;
      *(_QWORD*)(v17 + 24) = 0;
      v23 = *(_QWORD*)(v12 + v16 + 48);
      v24 = *(_QWORD*)(v12 + v16 + 64);
      *((_QWORD*)v18 + 7) = *(_QWORD*)(v12 + v16 + 56);
      *((_QWORD*)v18 + 8) = v24;
      *((_QWORD*)v18 + 6) = v23;
      *(_QWORD*)(v17 + 56) = 0;
      *(_QWORD*)(v17 + 64) = 0;
      *(_QWORD*)(v17 + 48) = 0;
      v25 = *(_QWORD*)(v12 + v16 + 80);
      *((_QWORD*)v18 + 9) = *(_QWORD*)(v12 + v16 + 72);
      *((_QWORD*)v18 + 10) = v25;
      v26 = *(_QWORD*)(v12 + v16 + 88);
      v27 = *(_QWORD*)(v12 + v16 + 104);
      *((_QWORD*)v18 + 12) = *(_QWORD*)(v12 + v16 + 96);
      *((_QWORD*)v18 + 13) = v27;
      *((_QWORD*)v18 + 11) = v26;
      *(_QWORD*)(v17 + 96) = 0;
      *(_QWORD*)(v17 + 104) = 0;
      *(_QWORD*)(v17 + 88) = 0;
      v28 = *(_QWORD*)(v12 + v16 + 112);
      v29 = *(_QWORD*)(v12 + v16 + 128);
      *((_QWORD*)v18 + 15) = *(_QWORD*)(v12 + v16 + 120);
      *((_QWORD*)v18 + 16) = v29;
      *((_QWORD*)v18 + 14) = v28;
      *(_QWORD*)(v17 + 120) = 0;
      *(_QWORD*)(v17 + 128) = 0;
      *(_QWORD*)(v17 + 112) = 0;
      *((_QWORD*)v18 + 18) = 0;
      *((_QWORD*)v18 + 19) = 0;
      *((_QWORD*)v18 + 17) = 0;
      *((_QWORD*)v18 + 17) = *(_QWORD*)(v12 + v16 + 136);
      *((_QWORD*)v18 + 18) = *(_QWORD*)(v12 + v16 + 144);
      *((_QWORD*)v18 + 19) = *(_QWORD*)(v12 + v16 + 152);
      *(_QWORD*)(v17 + 144) = 0;
      *(_QWORD*)(v17 + 152) = 0;
      *(_QWORD*)(v17 + 136) = 0;
      v30 = *(_QWORD*)(v12 + v16 + 168);
      *((_QWORD*)v18 + 20) = *(_QWORD*)(v12 + v16 + 160);
      *((_QWORD*)v18 + 21) = v30;
      *((_WORD*)v18 + 88) = *(_WORD*)(v12 + v16 + 176);
      v31 = *(_QWORD*)(v12 + v16 + 184);
      v32 = *(_QWORD*)(v12 + v16 + 200);
      *((_QWORD*)v18 + 24) = *(_QWORD*)(v12 + v16 + 192);
      *((_QWORD*)v18 + 25) = v32;
      *((_QWORD*)v18 + 23) = v31;
      *(_QWORD*)(v17 + 192) = 0;
      *(_QWORD*)(v17 + 200) = 0;
      *(_QWORD*)(v17 + 184) = 0;
      *((_QWORD*)v18 + 27) = 0;
      *((_QWORD*)v18 + 28) = 0;
      *((_QWORD*)v18 + 26) = 0;
      *((_QWORD*)v18 + 26) = *(_QWORD*)(v12 + v16 + 208);
      *((_QWORD*)v18 + 27) = *(_QWORD*)(v12 + v16 + 216);
      *((_QWORD*)v18 + 28) = *(_QWORD*)(v12 + v16 + 224);
      *(_QWORD*)(v17 + 216) = 0;
      *(_QWORD*)(v17 + 224) = 0;
      *(_QWORD*)(v17 + 208) = 0;
      v33 = *(_QWORD*)(v12 + v16 + 232);
      v34 = *(_QWORD*)(v12 + v16 + 248);
      *((_QWORD*)v18 + 30) = *(_QWORD*)(v12 + v16 + 240);
      *((_QWORD*)v18 + 31) = v34;
      *((_QWORD*)v18 + 29) = v33;
      *(_QWORD*)(v17 + 240) = 0;
      *(_QWORD*)(v17 + 248) = 0;
      *(_QWORD*)(v17 + 232) = 0;
      *((_QWORD*)v18 + 33) = 0;
      *((_QWORD*)v18 + 34) = 0;
      *((_QWORD*)v18 + 32) = 0;
      *((_QWORD*)v18 + 32) = *(_QWORD*)(v12 + v16 + 256);
      *((_QWORD*)v18 + 33) = *(_QWORD*)(v12 + v16 + 264);
      *((_QWORD*)v18 + 34) = *(_QWORD*)(v12 + v16 + 272);
      *(_QWORD*)(v17 + 264) = 0;
      *(_QWORD*)(v17 + 272) = 0;
      *(_QWORD*)(v17 + 256) = 0;
      v35 = *(_QWORD*)(v12 + v16 + 280);
      v36 = *(_QWORD*)(v12 + v16 + 296);
      *((_QWORD*)v18 + 36) = *(_QWORD*)(v12 + v16 + 288);
      *((_QWORD*)v18 + 37) = v36;
      *((_QWORD*)v18 + 35) = v35;
      *(_QWORD*)(v17 + 288) = 0;
      *(_QWORD*)(v17 + 296) = 0;
      *(_QWORD*)(v17 + 280) = 0;
      *((_QWORD*)v18 + 39) = 0;
      *((_QWORD*)v18 + 40) = 0;
      *((_QWORD*)v18 + 38) = 0;
      *((_QWORD*)v18 + 38) = *(_QWORD*)(v12 + v16 + 304);
      *((_QWORD*)v18 + 39) = *(_QWORD*)(v12 + v16 + 312);
      *((_QWORD*)v18 + 40) = *(_QWORD*)(v12 + v16 + 320);
      *(_QWORD*)(v17 + 312) = 0;
      *(_QWORD*)(v17 + 320) = 0;
      *(_QWORD*)(v17 + 304) = 0;
      v37 = *(_QWORD*)(v12 + v16 + 344);
      v38 = *(_QWORD*)(v12 + v16 + 328);
      *((_QWORD*)v18 + 42) = *(_QWORD*)(v12 + v16 + 336);
      *((_QWORD*)v18 + 43) = v37;
      *((_QWORD*)v18 + 41) = v38;
      *(_QWORD*)(v17 + 336) = 0;
      *(_QWORD*)(v17 + 344) = 0;
      *(_QWORD*)(v17 + 328) = 0;
      *((_QWORD*)v18 + 45) = 0;
      *((_QWORD*)v18 + 46) = 0;
      *((_QWORD*)v18 + 44) = 0;
      *((_QWORD*)v18 + 44) = *(_QWORD*)(v12 + v16 + 352);
      *((_QWORD*)v18 + 45) = *(_QWORD*)(v12 + v16 + 360);
      *((_QWORD*)v18 + 46) = *(_QWORD*)(v12 + v16 + 368);
      *(_QWORD*)(v17 + 360) = 0;
      *(_QWORD*)(v17 + 368) = 0;
      *(_QWORD*)(v17 + 352) = 0;
      v39 = *(_QWORD*)(v12 + v16 + 376);
      v40 = *(_QWORD*)(v12 + v16 + 392);
      *((_QWORD*)v18 + 48) = *(_QWORD*)(v12 + v16 + 384);
      *((_QWORD*)v18 + 49) = v40;
      *((_QWORD*)v18 + 47) = v39;
      *(_QWORD*)(v17 + 384) = 0;
      *(_QWORD*)(v17 + 392) = 0;
      *(_QWORD*)(v17 + 376) = 0;
      v18[400] = 0;
      v18[464] = 0;
      if (*(_BYTE*)(v12 + v16 + 464) == 1) {
        v41 = *(_QWORD*)(v17 + 400);
        v18[408] = *(_BYTE*)(v17 + 408);
        *((_QWORD*)v18 + 50) = v41;
        v42 = *(_QWORD*)(v17 + 416);
        v43 = *(_QWORD*)(v17 + 432);
        *((_QWORD*)v18 + 53) = *(_QWORD*)(v17 + 424);
        *((_QWORD*)v18 + 54) = v43;
        *((_QWORD*)v18 + 52) = v42;
        *(_QWORD*)(v17 + 424) = 0;
        *(_QWORD*)(v17 + 432) = 0;
        *(_QWORD*)(v17 + 416) = 0;
        *((_QWORD*)v18 + 56) = 0;
        *((_QWORD*)v18 + 57) = 0;
        *((_QWORD*)v18 + 55) = 0;
        *((_QWORD*)v18 + 55) = *(_QWORD*)(v17 + 440);
        *((_QWORD*)v18 + 56) = *(_QWORD*)(v17 + 448);
        *((_QWORD*)v18 + 57) = *(_QWORD*)(v17 + 456);
        *(_QWORD*)(v17 + 448) = 0;
        *(_QWORD*)(v17 + 456) = 0;
        *(_QWORD*)(v17 + 440) = 0;
        v18[464] = 1;
      }
      v18[472] = 0;
      v18[536] = 0;
      if (*(_BYTE*)(v17 + 536) == 1) {
        v44 = (_QWORD*)(v12 + v16);
        v45 = *(_QWORD*)(v12 + v16 + 472);
        v18[480] = *(_BYTE*)(v12 + v16 + 480);
        *((_QWORD*)v18 + 59) = v45;
        v46 = &v15[v16];
        v47 = *(_QWORD*)(v12 + v16 + 488);
        v48 = *(_QWORD*)(v12 + v16 + 504);
        *((_QWORD*)v46 + 62) = *(_QWORD*)(v12 + v16 + 496);
        *((_QWORD*)v46 + 63) = v48;
        *((_QWORD*)v46 + 61) = v47;
        v44[62] = 0;
        v44[63] = 0;
        v44[61] = 0;
        *((_QWORD*)v46 + 66) = 0;
        *((_QWORD*)v46 + 65) = 0;
        *((_QWORD*)v46 + 64) = 0;
        *((_QWORD*)v46 + 64) = *(_QWORD*)(v12 + v16 + 512);
        *((_QWORD*)v46 + 65) = *(_QWORD*)(v12 + v16 + 520);
        *((_QWORD*)v46 + 66) = *(_QWORD*)(v12 + v16 + 528);
        v44[66] = 0;
        v44[65] = 0;
        v44[64] = 0;
        v18[536] = 1;
      }
      v49 = &v15[v16];
      v49[544] = 0;
      v49[608] = 0;
      if (*(_BYTE*)(v17 + 608) == 1) {
        v50 = (_QWORD*)(v12 + v16);
        v51 = *(_QWORD*)(v12 + v16 + 544);
        v49[552] = *(_BYTE*)(v12 + v16 + 552);
        *((_QWORD*)v49 + 68) = v51;
        v52 = *(_QWORD*)(v12 + v16 + 560);
        v53 = *(_QWORD*)(v12 + v16 + 568);
        *((_QWORD*)v49 + 72) = *(_QWORD*)(v12 + v16 + 576);
        *((_QWORD*)v49 + 71) = v53;
        *((_QWORD*)v49 + 70) = v52;
        v50[71] = 0;
        v50[72] = 0;
        v50[70] = 0;
        *((_QWORD*)v49 + 75) = 0;
        *((_QWORD*)v49 + 74) = 0;
        *((_QWORD*)v49 + 73) = 0;
        *((_QWORD*)v49 + 73) = *(_QWORD*)(v12 + v16 + 584);
        *((_QWORD*)v49 + 74) = *(_QWORD*)(v12 + v16 + 592);
        *((_QWORD*)v49 + 75) = *(_QWORD*)(v12 + v16 + 600);
        v50[75] = 0;
        v50[74] = 0;
        v50[73] = 0;
        v49[608] = 1;
      }
      v16 += 616;
    } while (v17 + 616 != v13);
    do {
      HubNatives_ccbf80(v12 + 24);
      if ((*(_BYTE*)v12 & 1) != 0 && *(_QWORD*)(v12 + 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v54 = 128;
        }
        else {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v54);
      }
      v12 += 616;
    } while (v12 != v13);
    v12 = *a1;
  }
  *a1 = (__int64)v15;
  a1[1] = (__int64)v14;
  a1[2] = v11;
  if (v12 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v55);
  }
  return v14;
}

__int64 game_hub_LocatorDispos_Rebuild_lambda0_Invoke(__int64 result,
                                                      __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v6 = *(_QWORD**)(result + 8);
  v7 = *(_QWORD*)(v4 + 56);
  v9 = (_QWORD*)v6[8];
  v8 = v6[9];
  if ((unsigned __int64)v9 >= v8) {
    v11 = v6[7];
    v12 = (char*)v9 - v11;
    v13 = ((__int64)v9 - v11) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_65c760();
    }
    v15 = v8 - v11;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        goto LABEL_50;
      }
      v17 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v16,
                                           16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v16;
    v19 = (char*)v9 - v11;
    v20 = (__int64)&v12[v17 + -8 * v13];
    *(_QWORD*)&v12[v17] = v7;
    v10 = (__int64)&v12[v17 + 8];
    result = memcpy(v20, v11, v19);
    v6[7] = v20;
    v6[8] = v10;
    v6[9] = v18;
    if (v11 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  v6[8] = v10;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(&v45, a2[2], a2[1]);
    v48 = v4;
    v49 = v3;
    if (v3 == 0) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v22 = a2[1];
  v45 = *a2;
  v46 = v22;
  v47 = a2[2];
  v48 = v4;
  v49 = v3;
  if (v3 != 0) {
  LABEL_21:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_22:
  v23 = (_QWORD*)v6[5];
  v24 = v6[6];
  if ((unsigned __int64)v23 < v24) {
    v25 = v45;
    v26 = v47;
    v27 = (__int64)(v23 + 5);
    v23[1] = v46;
    v23[2] = v26;
    *v23 = v25;
    v46 = 0;
    v47 = 0;
    v45 = 0;
    v23[3] = v48;
    v23[4] = v49;
    v48 = 0;
    v49 = 0;
  LABEL_40:
    v6[5] = v27;
    goto LABEL_41;
  }
  v28 = v6[4];
  v29 = (char*)v23 - v28;
  v30 = 1 - 0x3333333333333333LL * (((__int64)v23 - v28) >> 3);
  if (v30 > 0x666666666666666LL) {
    GameRoutine_db68c0(result);
  }
  v31 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v24 - v28) >> 3);
  if (2 * v31 > v30) {
    v30 = 2 * v31;
  }
  if (v31 >= 0x333333333333333LL) {
    v32 = 0x666666666666666LL;
  }
  else {
    v32 = v30;
  }
  if (v32 != 0) {
    if (v32 <= 0x666666666666666LL) {
      v33 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v32,
                                           16, 0);
      v28 = v6[4];
      v4 = v48;
      v34 = v49;
      v35 = (char*)(v6[5] - v28);
      goto LABEL_34;
    }
  LABEL_50:
    GameRoutine_60a210(result);
  }
  v33 = 0;
  v35 = v29;
  v34 = v3;
LABEL_34:
  v36 = &v29[v33];
  v48 = 0;
  v49 = 0;
  v37 = v33 + 40 * v32;
  v38 = v45;
  v39 = v46;
  v40 = (char*)(&v29[v33] - v35);
  v45 = 0;
  v46 = 0;
  *((_QWORD*)v36 + 4) = v34;
  v27 = (__int64)&v29[v33 + 40];
  *(_QWORD*)v36 = v38;
  *((_QWORD*)v36 + 1) = v39;
  v41 = v47;
  v47 = 0;
  *((_QWORD*)v36 + 2) = v41;
  *((_QWORD*)v36 + 3) = v4;
  result = memcpy(v40, v28, v35);
  v6[4] = v40;
  v6[5] = v27;
  v6[6] = v37;
  if (v28 == 0) {
    goto LABEL_40;
  }
  v42 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v42 = 56;
  }
  result = nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
  v43 = v49;
  v6[5] = v27;
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    result = std___1___shared_weak_count___release_weak(v43);
  }
LABEL_41:
  if ((v45 & 1) != 0 && v47 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 LocatorDispos_db6990(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  char* v13;

  v3 = *a3;
  v6 = strlen(*a3);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v12[1] = v7;
    v13 = v8;
    v12[0] = v9 | 1;
  }
  else {
    LOBYTE(v12[0]) = 2 * v6;
    v8 = (char*)v12 + 1;
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v8, v3, v7);
LABEL_10:
  v8[v7] = 0;
  GameRoutine_df7380(a1, a2, v12);
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return a1;
}

bool game_hub_LocatorDispos_CreateExternalDataImpl_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  char* v4;

  v2 = *(_QWORD**)(a1 + 8);
  if (*(_QWORD*)(*(_QWORD*)a2 + 32LL) != 0) {
    v4 = *(char**)(*(_QWORD*)a2 + 32LL);
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v3 = v2[1];
  return strlen(v4) == v3 && (unsigned int)memcmp(v4, *v2) == 0;
}

__int64 game_hub_LocatorDispos_CreateExternalDataImpl_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[6];
  char v19;
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
  __int16 v32;
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
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  char v61;
  char v62;
  char v63;
  char v64;
  char v65;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  result = GameRoutine_db7770(v4);
  if ((result & 1) != 0) {
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v19 = 0;
    memset(v18, 0, sizeof(v18));
    v16 = 0;
    v17 = 0;
    v15 = 0;
    if (&v15 != a2) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        GameRoutine_64df20(&v15, a2[2], a2[1]);
      }
      else {
        v8 = a2[1];
        v15 = *a2;
        v16 = v8;
        v17 = a2[2];
      }
    }
    GameRoutine_db5550((__int64)v18, v4);
    v9 = *(__int64**)(a1 + 8);
    v10 = (_QWORD*)v9[1];
    if ((unsigned __int64)v10 >= v9[2]) {
      v13 = LocatorDispos_db5ce0(v9, &v15);
    }
    else {
      if ((v15 & 1) != 0) {
        fw_text_String_CopyTerminated(v9[1], v17, v16);
      }
      else {
        v11 = v15;
        v12 = v17;
        v10[1] = v16;
        v10[2] = v12;
        *v10 = v11;
      }
      HubNatives_ccba40(v10 + 3, v18);
      v13 = v10 + 77;
    }
    v9[1] = (__int64)v13;
    result = HubNatives_ccbf80(v18);
    if ((v15 & 1) != 0 && v17 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64

game_hub_LocatorDispos_BuildInitTransformLocator_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return *(_WORD*)(*(_QWORD*)a2 + 72LL) & 1;
}

__int64 game_hub_LocatorDispos_BuildInitTransformLocator_lambda1_Invoke(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[6];
  char v19;
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
  __int16 v32;
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
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  char v61;
  char v62;
  char v63;
  char v64;
  char v65;

  v4 = *a3;
  v3 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  result = GameRoutine_db7770(v4);
  if ((result & 1) != 0) {
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v19 = 0;
    memset(v18, 0, sizeof(v18));
    v16 = 0;
    v17 = 0;
    v15 = 0;
    if (&v15 != a2) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        GameRoutine_64df20(&v15, a2[2], a2[1]);
      }
      else {
        v8 = a2[1];
        v15 = *a2;
        v16 = v8;
        v17 = a2[2];
      }
    }
    GameRoutine_db5550((__int64)v18, v4);
    v9 = *(__int64**)(a1 + 8);
    v10 = (_QWORD*)v9[1];
    if ((unsigned __int64)v10 >= v9[2]) {
      v13 = LocatorDispos_db5ce0(v9, &v15);
    }
    else {
      if ((v15 & 1) != 0) {
        fw_text_String_CopyTerminated(v9[1], v17, v16);
      }
      else {
        v11 = v15;
        v12 = v17;
        v10[1] = v16;
        v10[2] = v12;
        *v10 = v11;
      }
      HubNatives_ccba40(v10 + 3, v18);
      v13 = v10 + 77;
    }
    v9[1] = (__int64)v13;
    result = HubNatives_ccbf80(v18);
    if ((v15 & 1) != 0 && v17 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
