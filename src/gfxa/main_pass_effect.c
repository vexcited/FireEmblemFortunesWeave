#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_b48e70(__int64, __int64);
__int64 GameRoutine_b4a510(__int64, __int64);
__int64 GameRoutine_b5a5d0(__int64, __int64, __int64*);
__int64 GameRoutine_b5d610(_DWORD*, __int64, __int64);
__int64 GameRoutine_b60f30(__int64*, __int64, __int64);
__int64 GameRoutine_b61ab0(_DWORD*, __int64, __int64, __int64);
__int64 ResourceBuilder_b61dc0(__int64, __int64, _QWORD**, __int64*);
__int64 TaskEffectDecal_b620c0(__int64, __int64, _QWORD*, _QWORD*, _QWORD*);
__int64 TaskEffect_b5e3a0(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD GameData_1b6bcec[3];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int64 (*GameData_1fca000[])();
extern __int64 (*GameData_1fca090[])();
extern __int64 (*GameData_1fca120[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
float exp2f(float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_b32f30();
__int64
MainPassEffect_b90e00_alt1(__int64 a1,
                           __int64* a2) __asm__("MainPassEffect_b90e00");
__int64 gfxa_MainPassEffect_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 gfxa_MainPassEffect_SetupLightingPass_lambda2_Invoke(__int64 a1,
                                                             __int64** a2,
                                                             __int64* a3);
__int64 gfxa_MainPassEffect_Setup3DPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3);
__int64 gfxa_MainPassEffect_SetupCursorUIPass_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             _QWORD* a3);
__int64 gfxa_MainPassEffect_SetupDecalPass_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3);
__int64 gfxa_MainPassEffect_SetupOffscreenPass_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _QWORD* a3);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 MainPassEffect_b90e00(__int64 a1, __int64 a2);
extern __int64 (*GameData_1fc94f8[])();
extern __int64 (*GameData_1fc9588[])();
extern __int64 (*GameData_1fc9618[])();
extern __int64 (*GameData_1fc9660[])();
extern __int64 (*GameData_1fc96f0[])();
extern __int64 (*GameData_1fc9780[])();
extern __int64 (*GameData_1fc97c8[])();
extern __int64 (*GameData_1fc9848[])();
extern __int64 (*GameData_1fc98c8[])();
extern __int64 (*GameData_1fc9958[])();
extern __int64 (*GameData_1fc99e8[])();
extern __int64 (*GameData_1fc9a30[])();
extern __int64 (*GameData_1fc9ab0[])();
extern __int64 (*GameData_1fc9b30[])();
extern __int64 (*GameData_1fc9bc0[])();
extern __int64 (*GameData_1fc9c50[])();
extern __int64 (*GameData_1fc9c98[])();
extern __int64 (*GameData_1fc9d18[])();
extern __int64 (*GameData_1fc9f00[])();
extern __int64 (*GameData_1fc9f80[])();
__int64 gfxa_MainPassEffect_SetupLightingPass(__int64 a1, __int64 a2,
                                              __int64 a3);
__int64 gfxa_MainPassEffect_Setup3DPass(__int64 a1, __int64 a2, _QWORD* a3);
__int64 gfxa_MainPassEffect_SetupCursorUIPass(__int64 a1, __int64 a2,
                                              __int64 a3);
__int64 gfxa_MainPassEffect_SetupOffscreenPass(__int64 a1, __int64 a2,
                                               __int64 a3);

__int64 gfxa_MainPassEffect_SetupLightingPass(__int64 a1, __int64 a2,
                                              __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 (***v10)();
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  signed __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  signed __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  signed __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v68;
  __int64 v69;
  struct {
    _QWORD v70[4];
    _QWORD* v71;
  } v70_;
  struct {
    __int64 (**v72)();
    __int64* v73;
    __int64 v74;
    char gap88_[8];
    __int64 (***v75)();
  } v72_;

  v69 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  v8 = *v6;
  v72_.v72 = GameData_1fc94f8;
  v72_.v73 = &v69;
  v72_.v75 = &v72_.v72;
  v70_.v70[0] = GameData_1fc9588;
  v70_.v70[1] = a1;
  v70_.v71 = v70_.v70;
  v9 = (char*)fw_memory_HeapManager_Allocate(v8, 26, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 16) = 23;
  *(_QWORD*)(v7 + 24) = v9;
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fc9618;
  *(_QWORD*)(v7 + 8) = 27;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  strcpy(v9, "EffectUpdateBuffersPass");
  v10 = v72_.v75;
  if (v72_.v75 == nullptr) {
    *(_QWORD*)(v7 + 304) = 0;
    v11 = v70_.v71;
    if (v70_.v71 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v72_.v75 == &v72_.v72) {
    *(_QWORD*)(v7 + 304) = v7 + 272;
    ((void (*)(__int64 (***)(void)))(*v10)[3])(v10);
    v11 = v70_.v71;
    if (v70_.v71 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v7 + 352) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v7 + 304) =
      ((__int64 (*)(__int64 (***)(void)))(*v72_.v75)[2])(v72_.v75);
  v11 = v70_.v71;
  if (v70_.v71 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v11 == v70_.v70) {
    *(_QWORD*)(v7 + 352) = v7 + 320;
    (*(void (**)(_QWORD*))(*v11 + 24LL))(v11);
  }
  else {
    *(_QWORD*)(v7 + 352) = (*(__int64 (**)(_QWORD*))(*v11 + 16LL))(v11);
  }
  if (v70_.v71 == v70_.v70) {
    v12 = 32;
  }
  else {
    if (v70_.v71 == nullptr) {
      goto LABEL_16;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v70_.v71 + v12))((__int64)v70_.v71);
LABEL_16:
  if (v72_.v75 == &v72_.v72) {
    v13 = 4;
  }
  else {
    if (v72_.v75 == nullptr) {
      goto LABEL_21;
    }
    v13 = 5;
  }
  ((__int64 (*)(__int64))(*v72_.v75)[v13])((__int64)v72_.v75);
LABEL_21:
  v15 = *(__int64**)(a2 + 8);
  v14 = *(_QWORD*)(a2 + 16);
  v68 = a1;
  if ((unsigned __int64)v15 >= v14) {
    v17 = *(_QWORD*)a2;
    v18 = (signed __int64)v15 - *(_QWORD*)a2;
    v19 = (v18 >> 3) + 1;
    if (v19 >> 61 != 0) {
      goto LABEL_72;
    }
    v20 = v14 - v17;
    if (v20 >> 2 > v19) {
      v19 = v20 >> 2;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
      v21 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 61 != 0) {
        goto LABEL_73;
      }
      v22 = v6;
      v23 = fw_memory_HeapManager_Allocate(*v6, 8 * v21, 16, 0);
    }
    else {
      v22 = v6;
      v23 = 0;
    }
    v24 = v23 + 8 * v21;
    v25 = v23 + v18 - 8 * (v18 >> 3);
    *(_QWORD*)(v23 + v18) = v7;
    v16 = v23 + v18 + 8;
    memcpy_alt1(v25, v17, v18);
    *(_QWORD*)a2 = v25;
    *(_QWORD*)(a2 + 8) = v16;
    *(_QWORD*)(a2 + 16) = v24;
    if (v17 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v22 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v22 + v26, v17);
    }
    v6 = v22;
    a1 = v68;
  }
  else {
    *v15 = v7;
    v16 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a2 + 8) = v16;
  v27 = *(__int64**)(v16 - 8);
  v72_.v72 = (__int64 (**)(void))a2;
  v72_.v73 = v27;
  (*(void (**)(__int64*, __int64 (***)(void)))(*v27 + 16))(v27, &v72_.v72);
  v29 = *(_QWORD*)a2;
  v28 = *(_QWORD*)(a2 + 8);
  v30 = *(_DWORD*)(a2 + 96);
  v31 = fw_memory_HeapManager_Allocate(*v6, 224, 16, 0);
  v72_.v74 = a1;
  v72_.v75 = &v72_.v72;
  *(_QWORD*)(v31 + 32) = 0;
  *(_QWORD*)(v31 + 40) = 0;
  *(_QWORD*)(v31 + 48) = 0;
  *(_QWORD*)(v31 + 56) = 0;
  *(_QWORD*)(v31 + 64) = 0;
  *(_QWORD*)(v31 + 72) = 0;
  *(_DWORD*)(v31 + 80) = v30;
  v72_.v72 = GameData_1fc9660;
  v72_.v73 = &v69;
  *(_BYTE*)(v31 + 8) = 30;
  *(_QWORD*)(v31 + 104) = 0;
  *(_QWORD*)(v31 + 112) = 0;
  *(_QWORD*)(v31 + 88) = 0;
  *(_QWORD*)(v31 + 96) = 0;
  *(_QWORD*)(v31 + 184) = a1;
  strcpy((char*)(v31 + 9), "PreEffect3DPass");
  *(_BYTE*)(v31 + 84) = 1;
  *(_QWORD*)(v31 + 128) = GameData_1fc9660;
  *(_QWORD*)v31 = GameData_1fc9780;
  *(_QWORD*)(v31 + 160) = v31 + 128;
  v32 = v72_.v73;
  v33 = v72_.v74;
  *(_QWORD*)(v31 + 176) = GameData_1fc96f0;
  *(_QWORD*)(v31 + 208) = v31 + 176;
  *(_QWORD*)(v31 + 136) = v32;
  *(_QWORD*)(v31 + 144) = v33;
  v35 = *(__int64**)(a2 + 8);
  v34 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v35 >= v34) {
    v37 = *(_QWORD*)a2;
    v38 = (signed __int64)v35 - *(_QWORD*)a2;
    v39 = (v38 >> 3) + 1;
    if (v39 >> 61 != 0) {
      goto LABEL_72;
    }
    v40 = v34 - v37;
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
      if (v41 >> 61 != 0) {
        goto LABEL_73;
      }
      v42 = v31;
      v43 = fw_memory_HeapManager_Allocate(*v6, 8 * v41, 16, 0);
      v31 = v42;
    }
    else {
      v43 = 0;
    }
    v44 = v43 + 8 * v41;
    v45 = v43 + v38 - 8 * (v38 >> 3);
    *(_QWORD*)(v43 + v38) = v31;
    v36 = v43 + v38 + 8;
    memcpy_alt1(v45, v37, v38);
    *(_QWORD*)a2 = v45;
    *(_QWORD*)(a2 + 8) = v36;
    *(_QWORD*)(a2 + 16) = v44;
    if (v37 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v46, v37);
    }
    a1 = v68;
  }
  else {
    *v35 = v31;
    v36 = (__int64)(v35 + 1);
  }
  *(_QWORD*)(a2 + 8) = v36;
  v47 = *(__int64**)(v36 - 8);
  v72_.v72 = (__int64 (**)(void))a2;
  v72_.v73 = v47;
  (*(void (**)(__int64*, __int64 (***)(void)))(*v47 + 16))(v47, &v72_.v72);
  v48 = v69;
  v49 = *v6;
  *(_QWORD*)(v69 + 488) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v28 - v29) & 0x7FFFFFFF8LL)) +
                 104LL);
  *(_QWORD*)(v48 + 496) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v28 - v29) & 0x7FFFFFFF8LL)) +
                 112LL);
  v50 = *(_DWORD*)(a2 + 96);
  v51 = fw_memory_HeapManager_Allocate(v49, 368, 16, 0);
  v72_.v74 = a1;
  v72_.v75 = &v72_.v72;
  *(_QWORD*)(v51 + 32) = 0;
  *(_QWORD*)(v51 + 40) = 0;
  *(_QWORD*)(v51 + 48) = 0;
  *(_QWORD*)(v51 + 56) = 0;
  *(_QWORD*)(v51 + 64) = 0;
  *(_QWORD*)(v51 + 72) = 0;
  v72_.v72 = GameData_1fc97c8;
  v72_.v73 = &v69;
  strcpy((char*)(v51 + 8), "$EffectLightingPass");
  *(_QWORD*)(v51 + 264) = 0;
  *(_QWORD*)(v51 + 272) = GameData_1fc97c8;
  *(_DWORD*)(v51 + 80) = v50;
  *(_QWORD*)v51 = GameData_1fc9618;
  *(_QWORD*)(v51 + 88) = 0;
  *(_QWORD*)(v51 + 96) = 0;
  *(_QWORD*)(v51 + 104) = 0;
  *(_QWORD*)(v51 + 112) = 0;
  *(_QWORD*)(v51 + 120) = 0;
  *(_QWORD*)(v51 + 128) = 0;
  *(_QWORD*)(v51 + 136) = 0;
  *(_QWORD*)(v51 + 144) = 0;
  *(_QWORD*)(v51 + 152) = 0;
  *(_QWORD*)(v51 + 160) = 0;
  *(_QWORD*)(v51 + 168) = 0;
  *(_QWORD*)(v51 + 176) = 0;
  *(_QWORD*)(v51 + 184) = 0;
  *(_QWORD*)(v51 + 192) = 0;
  *(_QWORD*)(v51 + 200) = 0;
  *(_QWORD*)(v51 + 208) = 0;
  *(_QWORD*)(v51 + 216) = 0;
  *(_QWORD*)(v51 + 224) = 0;
  *(_QWORD*)(v51 + 232) = 0;
  *(_QWORD*)(v51 + 240) = 0;
  *(_QWORD*)(v51 + 248) = 0;
  *(_QWORD*)(v51 + 256) = 0;
  *(_QWORD*)(v51 + 320) = GameData_1fc9848;
  *(_QWORD*)(v51 + 328) = a1;
  *(_BYTE*)(v51 + 84) = 1;
  *(_QWORD*)(v51 + 352) = v51 + 320;
  *(_QWORD*)(v51 + 304) = v51 + 272;
  v52 = v72_.v74;
  *(_QWORD*)(v51 + 280) = v72_.v73;
  *(_QWORD*)(v51 + 288) = v52;
  v54 = *(__int64**)(a2 + 8);
  v53 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v54 < v53) {
    *v54 = v51;
    v55 = (__int64)(v54 + 1);
    goto LABEL_71;
  }
  v56 = *(_QWORD*)a2;
  v57 = (signed __int64)v54 - *(_QWORD*)a2;
  v58 = (v57 >> 3) + 1;
  if (v58 >> 61 != 0) {
  LABEL_72:
    GameRoutine_b32f30();
  }
  v59 = v53 - v56;
  if (v59 >> 2 > v58) {
    v58 = v59 >> 2;
  }
  if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
    v60 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v60 = v58;
  }
  if (v60 != 0) {
    if (v60 >> 61 == 0) {
      v61 = v51;
      v62 = fw_memory_HeapManager_Allocate(*v6, 8 * v60, 16, 0);
      v51 = v61;
      goto LABEL_67;
    }
  LABEL_73:
    GameRoutine_60a210();
  }
  v62 = 0;
LABEL_67:
  v63 = v62 + 8 * v60;
  v64 = v62 + v57 - 8 * (v57 >> 3);
  *(_QWORD*)(v62 + v57) = v51;
  v55 = v62 + v57 + 8;
  memcpy_alt1(v64, v56, v57);
  *(_QWORD*)a2 = v64;
  *(_QWORD*)(a2 + 8) = v55;
  *(_QWORD*)(a2 + 16) = v63;
  if (v56 != 0) {
    v65 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v65, v56);
  }
LABEL_71:
  *(_QWORD*)(a2 + 8) = v55;
  v66 = *(__int64**)(v55 - 8);
  v72_.v72 = (__int64 (**)(void))a2;
  v72_.v73 = v66;
  return (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v66 + 16))(v66,
                                                                     &v72_.v72);
}

__int64 gfxa_MainPassEffect_Setup3DPass(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  signed __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD** v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  signed __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD** v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  signed __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD** v56;
  _QWORD* v58;
  struct {
    __int64 (**v59)();
    _QWORD** v60;
    __int64 v61;
    char gap40_[8];
    __int64 (***v62)();
  } v59_;

  v58 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = 0;
  *(_BYTE*)(v9 + 8) = 30;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fc99e8;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 160) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 288) = GameData_1fc9958;
  *(_QWORD*)(v9 + 296) = a1;
  strcpy((char*)(v9 + 9), "ModelEffectPass");
  *(_DWORD*)(v9 + 112) = -1;
  *(_QWORD*)(v9 + 240) = GameData_1fc98c8;
  *(_QWORD*)(v9 + 248) = &v58;
  v11 = *(__int64**)(a2 + 8);
  v10 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v9 + 272) = v9 + 240;
  *(_QWORD*)(v9 + 320) = v9 + 288;
  if ((unsigned __int64)v11 >= v10) {
    v13 = *(_QWORD*)a2;
    v14 = (signed __int64)v11 - *(_QWORD*)a2;
    v15 = (v14 >> 3) + 1;
    if (v15 >> 61 != 0) {
      goto LABEL_50;
    }
    v16 = v10 - v13;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        goto LABEL_51;
      }
      v18 = v9;
      v19 = fw_memory_HeapManager_Allocate(*v8, 8 * v17, 16, 0);
      v9 = v18;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + 8 * v17;
    v21 = v19 + v14 - 8 * (v14 >> 3);
    *(_QWORD*)(v19 + v14) = v9;
    v12 = v19 + v14 + 8;
    memcpy_alt1(v21, v13, v14);
    *(_QWORD*)a2 = v21;
    *(_QWORD*)(a2 + 8) = v12;
    *(_QWORD*)(a2 + 16) = v20;
    if (v13 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v22, v13);
    }
  }
  else {
    *v11 = v9;
    v12 = (__int64)(v11 + 1);
  }
  *(_QWORD*)(a2 + 8) = v12;
  v23 = *(_QWORD***)(v12 - 8);
  v59_.v59 = (__int64 (**)(void))a2;
  v59_.v60 = v23;
  ((void (*)(_QWORD**, __int64 (***)(void)))(*v23)[2])(v23, &v59_.v59);
  *v58 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) +
                    224LL);
  v24 = *(_DWORD*)(a2 + 96);
  v25 = fw_memory_HeapManager_Allocate(*v8, 368, 16, 0);
  v59_.v61 = a1;
  v59_.v62 = &v59_.v59;
  *(_QWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  v59_.v59 = GameData_1fc9a30;
  v59_.v60 = &v58;
  *(_QWORD*)(v25 + 264) = 0;
  *(_QWORD*)(v25 + 272) = GameData_1fc9a30;
  *(_BYTE*)(v25 + 8) = 20;
  *(_DWORD*)(v25 + 80) = v24;
  *(_QWORD*)(v25 + 248) = 0;
  *(_QWORD*)(v25 + 256) = 0;
  *(_QWORD*)(v25 + 232) = 0;
  *(_QWORD*)(v25 + 240) = 0;
  *(_QWORD*)(v25 + 216) = 0;
  *(_QWORD*)(v25 + 224) = 0;
  *(_QWORD*)(v25 + 200) = 0;
  *(_QWORD*)(v25 + 208) = 0;
  *(_QWORD*)(v25 + 184) = 0;
  *(_QWORD*)(v25 + 192) = 0;
  *(_QWORD*)(v25 + 168) = 0;
  *(_QWORD*)(v25 + 176) = 0;
  *(_QWORD*)(v25 + 152) = 0;
  *(_QWORD*)(v25 + 160) = 0;
  *(_QWORD*)(v25 + 136) = 0;
  *(_QWORD*)(v25 + 144) = 0;
  *(_QWORD*)(v25 + 120) = 0;
  *(_QWORD*)(v25 + 128) = 0;
  *(_QWORD*)(v25 + 104) = 0;
  *(_QWORD*)(v25 + 112) = 0;
  *(_QWORD*)(v25 + 88) = 0;
  *(_QWORD*)(v25 + 96) = 0;
  *(_QWORD*)(v25 + 320) = GameData_1fc9ab0;
  *(_QWORD*)(v25 + 328) = a1;
  *(_QWORD*)(v25 + 352) = v25 + 320;
  strcpy((char*)(v25 + 9), "EffectPass");
  *(_BYTE*)(v25 + 84) = 1;
  *(_QWORD*)v25 = GameData_1fc9618;
  *(_QWORD*)(v25 + 304) = v25 + 272;
  v26 = v59_.v61;
  *(_QWORD*)(v25 + 280) = v59_.v60;
  *(_QWORD*)(v25 + 288) = v26;
  v28 = *(__int64**)(a2 + 8);
  v27 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v28 >= v27) {
    v30 = *(_QWORD*)a2;
    v31 = (signed __int64)v28 - *(_QWORD*)a2;
    v32 = (v31 >> 3) + 1;
    if (v32 >> 61 != 0) {
      goto LABEL_50;
    }
    v33 = v27 - v30;
    if (v33 >> 2 > v32) {
      v32 = v33 >> 2;
    }
    if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
      v34 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v34 = v32;
    }
    if (v34 != 0) {
      if (v34 >> 61 != 0) {
        goto LABEL_51;
      }
      v35 = v25;
      v36 = fw_memory_HeapManager_Allocate(*v8, 8 * v34, 16, 0);
      v25 = v35;
    }
    else {
      v36 = 0;
    }
    v37 = v36 + 8 * v34;
    v38 = v36 + v31 - 8 * (v31 >> 3);
    *(_QWORD*)(v36 + v31) = v25;
    v29 = v36 + v31 + 8;
    memcpy_alt1(v38, v30, v31);
    *(_QWORD*)a2 = v38;
    *(_QWORD*)(a2 + 8) = v29;
    *(_QWORD*)(a2 + 16) = v37;
    if (v30 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v39, v30);
    }
  }
  else {
    *v28 = v25;
    v29 = (__int64)(v28 + 1);
  }
  *(_QWORD*)(a2 + 8) = v29;
  v40 = *(_QWORD***)(v29 - 8);
  v59_.v59 = (__int64 (**)(void))a2;
  v59_.v60 = v40;
  ((void (*)(_QWORD**, __int64 (***)(void)))(*v40)[2])(v40, &v59_.v59);
  v41 = *(_DWORD*)(a2 + 96);
  v42 = fw_memory_HeapManager_Allocate(*v8, 224, 16, 0);
  *(_DWORD*)(v42 + 80) = v41;
  *(_QWORD*)(v42 + 32) = 0;
  *(_QWORD*)(v42 + 40) = 0;
  *(_QWORD*)(v42 + 48) = 0;
  *(_QWORD*)(v42 + 56) = 0;
  *(_QWORD*)(v42 + 64) = 0;
  *(_QWORD*)(v42 + 72) = 0;
  *(_QWORD*)(v42 + 104) = 0;
  *(_QWORD*)(v42 + 112) = 0;
  *(_QWORD*)(v42 + 88) = 0;
  *(_QWORD*)(v42 + 96) = 0;
  *(_QWORD*)(v42 + 184) = a1;
  strcpy((char*)(v42 + 8), "\"EalryEffect2DPass");
  *(_BYTE*)(v42 + 84) = 1;
  *(_QWORD*)v42 = GameData_1fc9c50;
  *(_QWORD*)(v42 + 128) = GameData_1fc9b30;
  *(_QWORD*)(v42 + 136) = &v58;
  v44 = *(__int64**)(a2 + 8);
  v43 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v42 + 160) = v42 + 128;
  *(_QWORD*)(v42 + 176) = GameData_1fc9bc0;
  *(_QWORD*)(v42 + 208) = v42 + 176;
  if ((unsigned __int64)v44 < v43) {
    *v44 = v42;
    v45 = (__int64)(v44 + 1);
    goto LABEL_49;
  }
  v46 = *(_QWORD*)a2;
  v47 = (signed __int64)v44 - *(_QWORD*)a2;
  v48 = (v47 >> 3) + 1;
  if (v48 >> 61 != 0) {
  LABEL_50:
    GameRoutine_b32f30();
  }
  v49 = v43 - v46;
  if (v49 >> 2 > v48) {
    v48 = v49 >> 2;
  }
  if ((unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF8LL) {
    v50 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v50 = v48;
  }
  if (v50 != 0) {
    if (v50 >> 61 == 0) {
      v51 = v42;
      v52 = fw_memory_HeapManager_Allocate(*v8, 8 * v50, 16, 0);
      v42 = v51;
      goto LABEL_45;
    }
  LABEL_51:
    GameRoutine_60a210();
  }
  v52 = 0;
LABEL_45:
  v53 = v52 + 8 * v50;
  v54 = v52 + v47 - 8 * (v47 >> 3);
  *(_QWORD*)(v52 + v47) = v42;
  v45 = v52 + v47 + 8;
  memcpy_alt1(v54, v46, v47);
  *(_QWORD*)a2 = v54;
  *(_QWORD*)(a2 + 8) = v45;
  *(_QWORD*)(a2 + 16) = v53;
  if (v46 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v8 + v55, v46);
  }
LABEL_49:
  *(_QWORD*)(a2 + 8) = v45;
  v56 = *(_QWORD***)(v45 - 8);
  v59_.v59 = (__int64 (**)(void))a2;
  v59_.v60 = v56;
  return ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v56)[2])(v56,
                                                                 &v59_.v59);
}

__int64 gfxa_MainPassEffect_SetupCursorUIPass(__int64 a1, __int64 a2,
                                              __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  struct {
    __int64 (**v24)();
    __int64* v25;
    __int64 v26;
    char gap24_[8];
    __int64 (***v27)();
  } v24_;
  __int64 v28;

  v28 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  v24_.v27 = &v24_.v24;
  v24_.v24 = GameData_1fc9c98;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = GameData_1fc9c98;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  v24_.v25 = &v28;
  v24_.v26 = a1;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 320) = GameData_1fc9d18;
  *(_QWORD*)(v7 + 328) = a1;
  strcpy((char*)(v7 + 8), "$EffectCursorUIPass");
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)(v7 + 352) = v7 + 320;
  *(_QWORD*)v7 = GameData_1fc9618;
  *(_QWORD*)(v7 + 304) = v7 + 272;
  v8 = v24_.v26;
  *(_QWORD*)(v7 + 280) = v24_.v25;
  *(_QWORD*)(v7 + 288) = v8;
  v10 = *(__int64**)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v10 >= v9) {
    v12 = *(_QWORD*)a2;
    v13 = (signed __int64)v10 - *(_QWORD*)a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v15 = v9 - v12;
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
        GameRoutine_60a210();
      }
      v17 = v7;
      v18 = fw_memory_HeapManager_Allocate(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = v18 + v13 - 8 * (v13 >> 3);
    *(_QWORD*)(v18 + v13) = v7;
    v11 = v18 + v13 + 8;
    memcpy_alt1(v20, v12, v13);
    *(_QWORD*)a2 = v20;
    *(_QWORD*)(a2 + 8) = v11;
    *(_QWORD*)(a2 + 16) = v19;
    if (v12 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v21, v12);
    }
  }
  else {
    *v10 = v7;
    v11 = (__int64)(v10 + 1);
  }
  *(_QWORD*)(a2 + 8) = v11;
  v22 = *(__int64**)(v11 - 8);
  v24_.v24 = (__int64 (**)(void))a2;
  v24_.v25 = v22;
  return (*(__int64 (**)(__int64*, __int64 (***)(void)))(*v22 + 16))(v22,
                                                                     &v24_.v24);
}

__int64 gfxa_MainPassEffect_SetupOffscreenPass(__int64 a1, __int64 a2,
                                               __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  struct {
    __int64 (**v26)();
    __int64 v27;
    __int64* v28;
    char gap24_[8];
    __int64 (***v29)();
  } v26_;
  __int64 v30;

  v30 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  strcpy((char*)(v9 + 8), "&EffectOffscreenPass");
  v26_.v29 = &v26_.v26;
  v26_.v27 = a1;
  v26_.v28 = &v30;
  v26_.v26 = GameData_1fc9f00;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 272) = GameData_1fc9f00;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 160) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 320) = GameData_1fc9f80;
  *(_QWORD*)(v9 + 328) = a1;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)(v9 + 352) = v9 + 320;
  *(_QWORD*)v9 = GameData_1fc9618;
  *(_QWORD*)(v9 + 304) = v9 + 272;
  v10 = v26_.v28;
  *(_QWORD*)(v9 + 280) = v26_.v27;
  *(_QWORD*)(v9 + 288) = v10;
  v12 = *(__int64**)(a2 + 8);
  v11 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v12 >= v11) {
    v14 = *(_QWORD*)a2;
    v15 = (signed __int64)v12 - *(_QWORD*)a2;
    v16 = (v15 >> 3) + 1;
    if (v16 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v17 = v11 - v14;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v16;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v19 = v9;
      v20 = fw_memory_HeapManager_Allocate(*v8, 8 * v18, 16, 0);
      v9 = v19;
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v18;
    v22 = v20 + v15 - 8 * (v15 >> 3);
    *(_QWORD*)(v20 + v15) = v9;
    v13 = v20 + v15 + 8;
    memcpy_alt1(v22, v14, v15);
    *(_QWORD*)a2 = v22;
    *(_QWORD*)(a2 + 8) = v13;
    *(_QWORD*)(a2 + 16) = v21;
    if (v14 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v23, v14);
    }
  }
  else {
    *v12 = v9;
    v13 = (__int64)(v12 + 1);
  }
  *(_QWORD*)(a2 + 8) = v13;
  v24 = *(_QWORD*)(v13 - 8);
  v26_.v26 = (__int64 (**)(void))a2;
  v26_.v27 = v24;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v24 + 16LL))(v24, &v26_.v26);
  *(_QWORD*)(v30 + 96) = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) + 232LL);
  return result;
}

__int64 MainPassEffect_b90e00(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  v2 = *(_DWORD*)(a2 + 96);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v6 = *v4;
  v28_.v28[0] = GameData_1fca000;
  v28_.v29 = v28_.v28;
  v26_.v27 = v26_.v26;
  v26_.v26[0] = GameData_1fca090;
  v7 = (char*)fw_memory_HeapManager_Allocate(v6, 26, 16, 0);
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_DWORD*)(v5 + 80) = v2;
  *(_QWORD*)(v5 + 16) = 23;
  *(_QWORD*)(v5 + 24) = v7;
  strcpy(v7, "EffectCalcSOEmitterPass");
  v8 = v28_.v29;
  *(_BYTE*)(v5 + 84) = 1;
  *(_QWORD*)v5 = GameData_1fca120;
  *(_QWORD*)(v5 + 8) = 27;
  if (v8 == nullptr) {
    *(_QWORD*)(v5 + 128) = 0;
    v9 = v26_.v27;
    if (v26_.v27 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v8 == v28_.v28) {
    *(_QWORD*)(v5 + 128) = v5 + 96;
    (*(void (**)(_QWORD*))(*v8 + 24LL))(v8);
    v9 = v26_.v27;
    if (v26_.v27 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v5 + 176) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v5 + 128) = (*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8);
  v9 = v26_.v27;
  if (v26_.v27 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v9 == v26_.v26) {
    *(_QWORD*)(v5 + 176) = v5 + 144;
    (*(void (**)(_QWORD*))(*v9 + 24LL))(v9);
  }
  else {
    *(_QWORD*)(v5 + 176) = (*(__int64 (**)(_QWORD*))(*v9 + 16LL))(v9);
  }
  if (v26_.v27 == v26_.v26) {
    v10 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_16;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v26_.v27 + v10))((__int64)v26_.v27);
LABEL_16:
  if (v28_.v29 == v28_.v28) {
    v11 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_21;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v11))((__int64)v28_.v29);
LABEL_21:
  v13 = *(__int64**)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v13 >= v12) {
    v15 = *(_QWORD*)a2;
    v16 = (signed __int64)v13 - *(_QWORD*)a2;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 != 0) {
      GameRoutine_b32f30();
    }
    v18 = v12 - v15;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v20 = fw_memory_HeapManager_Allocate(*v4, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = v20 + v16 - 8 * (v16 >> 3);
    *(_QWORD*)(v20 + v16) = v5;
    v14 = v20 + v16 + 8;
    memcpy_alt1(v22, v15, v16);
    *(_QWORD*)a2 = v22;
    *(_QWORD*)(a2 + 8) = v14;
    *(_QWORD*)(a2 + 16) = v21;
    if (v15 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v23, v15);
    }
  }
  else {
    *v13 = v5;
    v14 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a2 + 8) = v14;
  v24 = *(_QWORD*)(v14 - 8);
  v28_.v28[0] = a2;
  v28_.v28[1] = v24;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v24 + 16LL))(v24,
                                                                   v28_.v28);
}

__int64 gfxa_MainPassEffect_SetupLightingPass_lambda1_Invoke(__int64 a1,
                                                             __int64* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  float v9;
  int v10;
  bool v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int v64;
  __int64 v65;
  char v66;
  __int64 v67;
  float v68;
  int v69;
  __int64 v70;
  char v71;
  __int64 v72;
  float v73;
  __int64 v74;
  float v75;
  float v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  _BYTE* v81;
  __int64 v82;
  __int128 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int* v102;
  float* v103;
  float v104;
  int v105;
  float v106;
  int v108;
  int v109;
  float v110;
  float32x4_t v111;
  __int64* v112;
  _QWORD v113[2];
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  bool v119;
  __int64 v120;
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  int v125;
  float32x4_t v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  float v132;
  float v133;
  float v134;
  int v135;
  int v136;
  int v137;
  int v138;
  float v139;
  int v140;
  int v141;
  char v142;
  char v143;
  __int64 v144;
  int v145;
  __int64 v146;
  int v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  float v162;
  float v163;
  int v164;

  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD**)(a1 + 8);
  v119 = false;
  v114 = 0;
  v115 = 0;
  v3 = a2[3];
  v116 = 0;
  v117 = 0;
  v122 = 0;
  v124 = 0;
  LANES128(v126).n128_u8[0] = 0;
  v148 = 0;
  v151 = 0x3F8000003F800000LL;
  v152 = 0;
  v153 = 0;
  v164 = 0;
  v120 = 0x3F80000042480000LL;
  v121 = 1065353216;
  v123 = -1;
  v125 = -1;
  v149 = 0x3F80000000000000LL;
  v150 = 0x3F8000003F800000LL;
  v5 = (__int64*)(*v2 + 13304LL);
  v6 = *(_QWORD*)(v3 + 128);
  if (*(_BYTE*)(*v2 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*v2 + 16672LL) + 24LL);
  }
  v118 = *v5;
  v113[0] = v2[3];
  v113[1] = v6;
  v7 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 128LL);
  v8 = 128;
  if (v7[96] != 0) {
    v8 = 92;
  }
  v119 = *(_DWORD*)&v7[v8] != 0;
  v9 = (*(float (**)(_QWORD))(*(_QWORD*)v2[3] + 120LL))(v2[3]),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (unsigned __int8)v7[176];
  *(float*)&v120 = v9;
  v11 = v10 == 0;
  v12 = 208;
  if (!v11) {
    v12 = 172;
  }
  v13 = *(_DWORD*)&v7[v12];
  v11 = v7[256] == 0;
  v14 = 288;
  HIDWORD(v120) = v13;
  if (!v11) {
    v14 = 252;
  }
  v121 = *(_DWORD*)&v7[v14];
  v15 = *(_DWORD*)(v3 + 56);
  v16 = *(_QWORD*)(v3 + 8);
  v122 = *(_QWORD*)(v3 + 48);
  v123 = v15;
  v114 = v16;
  LODWORD(v16) = *(_DWORD*)(v3 + 72);
  v124 = *(_QWORD*)(v3 + 64);
  v125 = v16;
  v17 = *(_QWORD*)(v2[7] + 8LL * *(int*)(v2[7] + 224LL) + 208);
  v115 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 104LL);
  v19 = 120;
  if (*(_BYTE*)(v18 + 90) != 0) {
    v19 = 89;
  }
  v112 = a2;
  if ((*(_BYTE*)(v18 + v19) & 1) == 0) {
    goto LABEL_16;
  }
  v20 = 800;
  if (*(_BYTE*)(v18 + 768) != 0) {
    v20 = 764;
  }
  v21 = *(_DWORD*)(v18 + v20);
  if (v21 <= 2) {
    v22 = GameData_1b6bcec[v21];
  }
  else {
  LABEL_16:
    v22 = 2;
  }
  LODWORD(v149) = v22;
  v23 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
  v24 = *(_QWORD*)(v2[1] + 288LL);
  v25 = *(_QWORD*)(v23 + 112);
  v26 = *(_QWORD*)(v24 + 792);
  if (v26 == 0) {
    goto LABEL_27;
  }
  v27 = v24 + 792;
  v28 = *(_DWORD*)(*(_QWORD*)(v3 + 24) + 36LL);
  do {
    v29 = *(_DWORD*)(v26 + 32);
    v30 = v29 < v28;
    if (v29 >= v28) {
      v31 = 0;
    }
    else {
      v31 = 8;
    }
    if (!v30) {
      v27 = v26;
    }
    v26 = *(_QWORD*)(v26 + v31);
  } while (v26 != 0);
  if (v27 != v24 + 792 && v28 >= (signed __int32)*(_DWORD*)(v27 + 32)) {
    v32 = *(_QWORD*)(v27 + 40);
  }
  else {
  LABEL_27:
    v32 = 0;
  }
  v33 = 720;
  if (*(_BYTE*)(v25 + 672) != 0) {
    v33 = 656;
  }
  v34 = *(float32x4_t*)(v25 + v33);
  if ((unsigned int)(*(_DWORD*)(*game_g_frame_clock_ptr[0] + 13240) - 3) <= 3) {
    v35 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u64[0];
    v36 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    v37 = vmulq_f32(v34, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v37, v37, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v34).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u32[0];
  }
  if (*(_BYTE*)(v25 + 1088) == 1) {
    v38 = *(float*)(v25 + 1084);
  }
  else {
    v39 = *(_QWORD*)(v23 + 8);
    v40 = 952;
    if (*(_BYTE*)(v39 + 920) != 0) {
      v40 = 916;
    }
    v38 = *(float*)(v39 + v40);
  }
  v41 = 120;
  if (*(_BYTE*)(v25 + 90) != 0) {
    v41 = 89;
  }
  v111 = v34;
  if ((*(_BYTE*)(v25 + v41) & 1) != 0) {
    v42 = 1040;
    if (*(_BYTE*)(v25 + 1008) != 0) {
      v42 = 1004;
    }
    v43 = *(_DWORD*)(v25 + v42);
    if (v32 != 0 && v43 == 0) {
      v44 = (_QWORD*)(v32 + 808);
      goto LABEL_47;
    }
  }
  else {
    v43 = 3;
  }
  v44 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 32LL) + 24LL);
LABEL_47:
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v44 + 40LL))(*v44),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = *(_QWORD*)(v24 + 576);
  v47 = *(_DWORD*)(v24 + 584);
  v48 = v45;
  v50 = v49;
  v51 = 280;
  v110 = v38 + 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v25 + 248) != 0) {
    v51 = 244;
  }
  v52 = *(_DWORD*)(v25 + v51);
  v53 = 360;
  v109 = v52;
  if (*(_BYTE*)(v25 + 328) != 0) {
    v53 = 324;
  }
  v54 = *(_DWORD*)(v25 + v53);
  v55 = 440;
  v108 = v54;
  if (*(_BYTE*)(v25 + 408) != 0) {
    v55 = 404;
  }
  v56 = *(_DWORD*)(v25 + v55);
  v57 = 600;
  if (*(_BYTE*)(v25 + 568) != 0) {
    v57 = 564;
  }
  v58 = *(_DWORD*)(v25 + v57);
  v59 = 520;
  if (*(_BYTE*)(v25 + 488) != 0) {
    v59 = 484;
  }
  v60 = *(_DWORD*)(v25 + v59);
  v61 = 808;
  if (*(_BYTE*)(v25 + 776) != 0) {
    v61 = 772;
  }
  v62 = *(_DWORD*)(v25 + v61);
  v63 = 200;
  if (*(_BYTE*)(v25 + 168) != 0) {
    v63 = 164;
  }
  v64 = *(_DWORD*)(v25 + v63);
  v65 = 1192;
  if (*(_BYTE*)(v25 + 1162) != 0) {
    v65 = 1161;
  }
  v66 = *(_BYTE*)(v25 + v65);
  v67 = 960;
  if (*(_BYTE*)(v25 + 928) != 0) {
    v67 = 924;
  }
  v68 = 0x1.0000000000000p+0f / *(float*)(*(_QWORD*)(v3 + 8) + 4LL);
  v69 = *(_DWORD*)(v25 + v67);
  v70 = 880;
  if (*(_BYTE*)(v25 + 850) != 0) {
    v70 = 849;
  }
  v71 = *(_BYTE*)(v25 + v70);
  v72 = 1344;
  if (*(_BYTE*)(v25 + 1312) != 0) {
    v72 = 1308;
  }
  v73 = *(float*)(v25 + v72);
  v74 = 1424;
  if (*(_BYTE*)(v25 + 1392) != 0) {
    v74 = 1388;
  }
  v75 = v73 + 0x1.0000000000000p+0f;
  v76 = exp2f(*(float*)(v25 + v74)),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = 1504;
  if (*(_BYTE*)(v25 + 1472) != 0) {
    v77 = 1468;
  }
  v78 = *(_DWORD*)(v25 + v77);
  v79 = 1584;
  if (*(_BYTE*)(v25 + 1552) != 0) {
    v79 = 1548;
  }
  v80 = *(_DWORD*)(v25 + v79);
  v126 = v111;
  v129 = v56;
  v130 = v60;
  v133 = v75;
  v134 = v76;
  v137 = v62;
  v138 = v69;
  v139 = v68;
  v140 = v64;
  v141 = v43;
  v142 = v66;
  v143 = v71;
  v144 = v48;
  v145 = v50;
  v146 = v46;
  v147 = v47;
  v127 = v109;
  v128 = v108;
  v135 = v78;
  v136 = v80;
  v131 = v58;
  v132 = v110;
  v148 = 1;
  v81 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 264LL);
  v82 = 256;
  if (v81[208] != 0) {
    v82 = 192;
  }
  v83 = *(_OWORD*)&v81[v82];
  LODWORD(v151) = *(_QWORD*)&v81[v82 + 8];
  v84 = (unsigned __int8)v81[312];
  v150 = v83;
  v11 = v84 == 0;
  v85 = 344;
  if (!v11) {
    v85 = 308;
  }
  HIDWORD(v151) = *(_DWORD*)&v81[v85];
  v86 = 128;
  if (v81[96] != 0) {
    v86 = 92;
  }
  HIDWORD(v149) = *(_DWORD*)&v81[v86];
  v87 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 344LL);
  v88 = 208;
  if (*(_BYTE*)(v87 + 176) != 0) {
    v88 = 172;
  }
  HIDWORD(v152) = *(_DWORD*)(v87 + v88);
  v89 = 288;
  if (*(_BYTE*)(v87 + 256) != 0) {
    v89 = 252;
  }
  v153 = *(_DWORD*)(v87 + v89);
  v117 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 16LL);
  v116 = *(_QWORD*)(v3 + 40);
  v90 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 232LL);
  v91 = 2216;
  if (*(_BYTE*)(v90 + 2184) != 0) {
    v91 = 2180;
  }
  LODWORD(v152) = *(_DWORD*)(v90 + v91);
  if (*(float*)&v152 > 0x0.0p+0f) {
    v92 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 232LL);
    v93 = 2376;
    if (*(_BYTE*)(v92 + 2344) != 0) {
      v93 = 2340;
    }
    v94 = *(_DWORD*)(v92 + v93);
    if (v94 != 0) {
      if (v94 != 1) {
        goto LABEL_98;
      }
      v95 = 2;
    }
    else {
      v95 = 1;
    }
    v164 = v95;
  }
LABEL_98:
  v96 = (_QWORD*)v2[7];
  v97 = *v112;
  v98 = v96[137];
  v154 = v96[136];
  v155 = v98;
  v99 = v96[139];
  v156 = v96[138];
  v157 = v99;
  v100 = v96[143];
  v160 = v96[142];
  v161 = v100;
  v101 = v96[141];
  v158 = v96[140];
  v159 = v101;
  v102 = (int*)(*v2 + 13304LL);
  v103 = (float*)v2[7];
  if (*(_BYTE*)(*v2 + 16700LL) != 0) {
    v102 = (int*)(*(_QWORD*)(*v2 + 16672LL) + 24LL);
  }
  v104 = v103[306];
  v105 = v102[1];
  v106 = v103[308];
  v162 = (float)(v103[307] - v103[305]) / (float)*v102;
  v163 = (float)(v106 - v104) / (float)v105;
  return GameRoutine_b5d610((_DWORD*)v2[12], v97, (__int64)v113);
}

__int64 gfxa_MainPassEffect_SetupLightingPass_lambda2_Invoke(__int64 a1,
                                                             __int64** a2,
                                                             __int64* a3)
{
  __int64* v3;
  __int64 v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;
  int v12;
  int v13;
  __int64 result;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v3 = *(__int64**)(a1 + 16);
  **a2 = GameRoutine_b48e70((__int64)a3, ***(_QWORD***)(a1 + 8));
  (*a2)[1] =
      GameRoutine_b4a510((__int64)a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 32LL));
  v7 = *v3;
  v15_.v18 = 0x100000001LL;
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (int*)(v7 + 13304);
  v11 = (int*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v15_.v15 = 0x1400000000LL;
  v13 = *v10;
  v12 = v10[1];
  v15_.v19 = 1;
  v15_.v20 = 0;
  v15_.v16 = v13;
  v15_.v17 = v12;
  *a2[1] = GameRoutine_b5a5d0((__int64)a3, (__int64)"CopyColor", &v15_.v15);
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  v15_.v20 = 0;
  v15_.v16 = v13;
  v15_.v17 = v12;
  v15_.v15 = 0x1500000000LL;
  result = GameRoutine_b60f30(a3, (__int64)"CopyDepth", (__int64)&v15_.v15);
  a2[1][1] = result;
  return result;
}

__int64 gfxa_MainPassEffect_Setup3DPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    int v13;
    int v14;
    __int64 v15;
    bool v16;
    char v17;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v15 = 0;
  v4 = *(__int64**)(a2 + 24);
  v12_.v12[0] = *(_QWORD*)(v3 + 24);
  v12_.v13 = 1;
  v5 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v6 = *v5;
  v12_.v17 = 0;
  v12_.v12[1] = v6;
  v12_.v14 = *(_DWORD*)(v3 + 88);
  v7 = *v4;
  v8 = *((_BYTE*)v4 + 116);
  v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 232LL);
  v10 = 2216;
  if (*(_BYTE*)(v9 + 2184) != 0) {
    v10 = 2180;
  }
  v12_.v16 = *(float*)(v9 + v10) > 0x0.0p+0f;
  if ((v8 & 1) == 0) {
    v12_.v15 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 1220LL);
  }
  return TaskEffect_b5e3a0(*(_QWORD*)(v3 + 96), *(__int64**)a2,
                           *(_QWORD**)(a2 + 8), a3, v12_.v12);
}

__int64 gfxa_MainPassEffect_SetupCursorUIPass_lambda1_Invoke(__int64 a1,
                                                             __int64 a2,
                                                             _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    int v13;
    int v14;
    __int64 v15;
    bool v16;
    char v17;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v15 = 0;
  v4 = *(__int64**)(a2 + 24);
  v12_.v12[0] = *(_QWORD*)(v3 + 24);
  v12_.v13 = 2;
  v5 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v6 = *v5;
  v12_.v17 = 0;
  v12_.v12[1] = v6;
  v12_.v14 = *(_DWORD*)(v3 + 88);
  v7 = *v4;
  v8 = *((_BYTE*)v4 + 116);
  v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 232LL);
  v10 = 2216;
  if (*(_BYTE*)(v9 + 2184) != 0) {
    v10 = 2180;
  }
  v12_.v16 = *(float*)(v9 + v10) > 0x0.0p+0f;
  if ((v8 & 1) == 0) {
    v12_.v15 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 1220LL);
  }
  return TaskEffect_b5e3a0(*(_QWORD*)(v3 + 96), *(__int64**)a2,
                           *(_QWORD**)(a2 + 8), a3, v12_.v12);
}

__int64 gfxa_MainPassEffect_SetupDecalPass_lambda1_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          __int64* a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  int v14;
  bool v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  char v20;
  long double v21;
  float32x4_t v22;
  __int128 v23;
  __int64 v24;
  __int128 v25;
  int v26;
  int* v27;
  int* v28;
  __int64 v29;
  int v30;
  int v31;
  _QWORD** v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 result;
  struct {
    _QWORD v38[2];
    int v39;
    int v40;
    bool v41;
    char gap25_[3];
    float v42;
    int v43;
    int v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    int v48;
    char gap68_[4];
    __int64 v49;
    int v50;
    char gap84_[12];
    long double v51;
    __int128 v52;
    float32x4_t v53;
    __int128 v54;
    char v55;
  } v38_;

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(__int64**)(a2 + 24);
  v4 = *(__int64**)(a1 + 8);
  v38_.v46 = 0;
  v38_.v47 = 0;
  v38_.v45 = 0;
  v38_.v49 = 0;
  LOBYTE(v38_.v51) = 0;
  v7 = *v3;
  v8 = v4[3];
  v38_.v55 = 0;
  v9 = *(_BYTE**)(*(_QWORD*)(v7 + 8) + 128LL);
  v38_.v48 = -1;
  v38_.v50 = -1;
  v38_.v39 = 8;
  v10 = (__int64*)(*v4 + 13304);
  if (*(_BYTE*)(*v4 + 16700) != 0) {
    v10 = (__int64*)(*(_QWORD*)(*v4 + 16672) + 24LL);
  }
  v11 = *v10;
  v38_.v38[0] = v8;
  v38_.v38[1] = v11;
  v12 = 128;
  if (v9[96] != 0) {
    v12 = 92;
  }
  v38_.v41 = *(_DWORD*)&v9[v12] != 0;
  v13 = (*(float (**)(__int64))(*(_QWORD*)v8 + 120LL))(v8),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = (unsigned __int8)v9[176];
  v38_.v42 = v13;
  v15 = v14 == 0;
  v16 = 208;
  if (!v15) {
    v16 = 172;
  }
  v17 = *(_DWORD*)&v9[v16];
  v15 = v9[256] == 0;
  v18 = 288;
  v38_.v43 = v17;
  if (!v15) {
    v18 = 252;
  }
  v19 = *(_DWORD*)&v9[v18];
  v38_.v40 = *((_DWORD*)v4 + 22);
  v20 = *((_BYTE*)v3 + 116);
  v38_.v44 = v19;
  if ((v20 & 1) == 0) {
    v21 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v4[3] + 24LL))(v4[3]),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = *v4;
    v38_.v51 = v21;
    v38_.v52 = v25;
    v26 = *(unsigned __int8*)(v24 + 16700);
    v27 = (int*)(v24 + 13304);
    v28 = (int*)(*(_QWORD*)(v24 + 16672) + 24LL);
    v15 = v26 == 0;
    v29 = v4[7];
    if (v15) {
      v28 = v27;
    }
    v30 = *v28;
    v31 = v28[1];
    v38_.v55 = 1;
    v38_.v53 = vsubq_f32(
        v22, COERCE_AS(float32x4_t,
                       __PAIR64__(
                           COERCE_UNSIGNED_INT((float)(*(float*)(v29 + 1224) *
                                                       -0x1.0000000000000p+1f) /
                                               (float)v31),
                           COERCE_UNSIGNED_INT((float)(*(float*)(v29 + 1220) +
                                                       *(float*)(v29 + 1220)) /
                                               (float)v30))));
    v38_.v54 = v23;
  }
  v33 = *(_QWORD**)a2;
  v32 = *(_QWORD***)(a2 + 8);
  v34 = v4[13];
  *(_QWORD*)(v34 +
             816) = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v33 + 16LL))(*v33),
             v22 = COERCE_AS(__typeof__(v22),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v23 = COERCE_AS(__typeof__(v23),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
             v25 = COERCE_AS(__typeof__(v25),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v35 = COERCE_AS(__typeof__(v35),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v36 = COERCE_AS(__typeof__(v36),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_b61ab0((_DWORD*)v34, (__int64)v33, (__int64)v32,
                     (__int64)v38_.v38),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b61dc0(v34, v35, v32, a3),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = TaskEffectDecal_b620c0(v34, v36, v32, a3, v38_.v38),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v34 + 816) = 0;
  return result;
}

__int64 gfxa_MainPassEffect_SetupOffscreenPass_lambda1_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  int* v6;
  float v7;
  int v8;
  _QWORD* v9;
  __int64* v10;
  struct {
    __int64 v12;
    int v13;
    unsigned int v14;
    int v15;
    int v16;
    __int64 v17;
    __int16 v18;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v12_.v18 = 0;
  v12_.v17 = 0;
  v5 = *(_QWORD*)(v3 + 96);
  v12_.v12 = *(_QWORD*)(v3 + 24);
  v12_.v15 = 16;
  v6 = (int*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v6 = (int*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v7 = (float)v6[1];
  v12_.v13 =
      (int)(float)((float)((float)*v6 / v7) *
                   (float)(int)(((int)(float)(v7 * 0x1.6666660000000p-1f) + 1) &
                                0xFFFFFFFE));
  v12_.v14 = ((int)(float)(v7 * 0x1.6666660000000p-1f) + 1) & 0xFFFFFFFE;
  v8 = *(_DWORD*)(v3 + 88);
  v10 = *(__int64**)a2;
  v9 = *(_QWORD**)(a2 + 8);
  v12_.v16 = v8;
  return TaskEffect_b5e3a0(v5, v10, v9, a3, &v12_.v12);
}

#pragma GCC visibility pop
