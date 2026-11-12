#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_Character_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 Character_Destructor(__int64 a1);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_Unit_GetJobUnknown30(__int64);
__int64 game_zview_d0e440(__int64 result, char);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 Character_cea860(__int64 a1);
__int64 game_zview_Character_Character_lambda0_Invoke(__int64 a1);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameRoutine_cef860(__int64*, __int64);
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_zview_ffe870(_QWORD*);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 (*GameData_1fd7cd8[])();
extern __int64* GameData_212d2f0;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ed00[14];
extern __int64* GameData_212ee60[5];
extern __int64* GameData_212eec8[3];
extern __int64* GameData_212eed0[2];
extern __int64* GameData_212fc00[3];
extern __int64* GameData_212fc08[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void CharacterCollisionShape_fff0a0(__int64);
void GameRoutine_cf3c40(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a78a90();
void game_zview_CharacterController_CharacterController(__int64, __int64);
__int64 game_zview_Character_Character(__int64 a1);

__int64 game_zview_Character_Character(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  float v37;
  unsigned __int64 v38;
  float* v39;
  float* v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  float v53;
  unsigned __int64 v54;
  float* v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  float v68;
  unsigned __int64 v69;
  float* v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  float v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  float v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  float v101;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned int v106;
  int v107;
  __int64 v108;
  struct {
    _QWORD v110[4];
    _QWORD* v111;
  } v110_;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 180) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_QWORD*)a1 = game_zview_Character_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  v2 = GameData_212d2f0 + 2;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_BYTE*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 300) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 336) = 0;
  *(_BYTE*)(a1 + 372) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_BYTE*)(a1 + 380) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_BYTE*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_BYTE*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 452) = 0;
  *(_BYTE*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 460) = 0;
  *(_BYTE*)(a1 + 464) = 0;
  *(_BYTE*)(a1 + 468) = 0;
  *(_BYTE*)(a1 + 472) = 0;
  *(_BYTE*)(a1 + 492) = 0;
  *(_BYTE*)(a1 + 496) = 0;
  *(_BYTE*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 508) = 0;
  *(_BYTE*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 481) = 0;
  *(_QWORD*)(a1 + 476) = 0;
  *(_QWORD*)(a1 + 248) = v2;
  *(_DWORD*)(a1 + 447) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  v3 = GameData_212ed00[0] + 2;
  *(_BYTE*)(a1 + 540) = 0;
  *(_BYTE*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_DWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 520) = v3;
  v4 = *GameData_212eba8[0];
  *(_DWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  v5 = *(_DWORD*)(v4 + 84);
  *(_DWORD*)(v4 + 84) = v5 + 1;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_DWORD*)(a1 + 184) = v5;
  v8 = fw_memory_HeapManager_Allocate(v7, 944, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_zview_CharacterController_CharacterController(v8, a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = fw_memory_HeapManager_Allocate(*v6, 416, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_cf3c40(v10, a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = v10;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = *(_QWORD*)(a1 + 16);
  v13 = fw_memory_HeapManager_Allocate(*v6, 496, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = GameData_212ee60[0];
  *(_BYTE*)(v13 + 32) = 0;
  *(_BYTE*)(v13 + 96) = 0;
  *(_BYTE*)(v13 + 112) = 0;
  *(_BYTE*)(v13 + 176) = 0;
  *(_BYTE*)(v13 + 192) = 0;
  *(_BYTE*)(v13 + 256) = 0;
  *(_BYTE*)(v13 + 272) = 0;
  *(_BYTE*)(v13 + 336) = 0;
  *(_BYTE*)(v13 + 464) = 0;
  *(_DWORD*)(v13 + 480) = 0;
  *(_WORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 352) = 0;
  *(_QWORD*)(v13 + 360) = 0;
  *(_QWORD*)(v13 + 368) = 0;
  *(_QWORD*)(v13 + 376) = 0;
  *(_QWORD*)(v13 + 384) = 0;
  *(_QWORD*)(v13 + 392) = 0;
  *(_BYTE*)(v13 + 400) = 0;
  *(_QWORD*)(v13 + 16) = v12;
  *(_QWORD*)v13 = v14 + 2;
  *(_QWORD*)(v13 + 8) = a1;
  v15 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = v13;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 16, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v16 = GameData_212eec8[0] + 2;
  v16[1] = a1;
  v17 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v18 = fw_memory_HeapManager_Allocate(*v6, 24, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = GameData_212eed0[0];
  *(_BYTE*)(v18 + 16) = 0;
  *(_QWORD*)v18 = v19 + 2;
  *(_QWORD*)(v18 + 8) = a1;
  v20 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = v18;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v21 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = *(_QWORD*)(a1 + 600);
  v23 = *(int*)(a1 + 376);
  v24 = *(_QWORD*)(a1 + 632);
  *(_BYTE*)(v21 + 24) = 0;
  *(_QWORD*)v21 = a1;
  *(_QWORD*)(a1 + 632) = v21;
  *(_QWORD*)(v21 + 8) = (v22 != 0) | (unsigned __int64)(v23 << 24);
  *(_QWORD*)(v21 + 16) = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v25, v24),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 40, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = GameData_212fc08[0];
  v26[2] = 0;
  v26[3] = 0;
  v26[4] = 0;
  *v26 = v27 + 2;
  v26[1] = a1;
  v28 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = v26;
  if (v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = GameData_212fc00[0];
  v29[2] = 0;
  v29[3] = 0;
  *v29 = v30 + 2;
  v29[1] = a1;
  v31 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = v29;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(a1 + 576) = a1;
  *(_QWORD*)(a1 + 568) = 0;
  *(_BYTE*)(a1 + 584) = 0;
  *(_DWORD*)(a1 + 528) = 1055286886;
  *(_QWORD*)(a1 + 544) = 0x3FE666663FE66666LL;
  *(_DWORD*)(a1 + 552) = 1072064102;
  *(_QWORD*)(a1 + 556) = 0x3FB5C28F3FB5C28FLL;
  v110_.v110[0] = GameData_1fd7cd8;
  v110_.v110[1] = a1;
  v110_.v111 = v110_.v110;
  v32 = *(_QWORD*)(a1 + 408);
  if (v32 >= *(_QWORD*)(a1 + 416)) {
    v34 = GameRoutine_cef860((__int64*)(a1 + 400), (__int64)v110_.v110),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_QWORD*)(v32 + 32) = v32;
    (*(void (**)(_QWORD*, unsigned __int64))(*v110_.v111 + 24LL))(v110_.v111,
                                                                  v32),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v34 = v32 + 48;
  }
  *(_QWORD*)(a1 + 408) = v34;
  if (v110_.v111 == v110_.v110) {
    v35 = 32;
  }
  else {
    if (v110_.v111 == nullptr) {
      goto LABEL_27;
    }
    v35 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v110_.v111 + v35))(v110_.v111, v33),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_27:
  HubCharacterNatives_cea6b0(a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = 1812433253 * ((*(_DWORD*)(a1 + 184) >> 30) ^ *(_DWORD*)(a1 + 184)) + 1;
  v37 = vcvts_n_f32_u64(
      (unsigned __int16)(v36 ^ ((_WORD)v36 << 11) ^
                         ((v36 ^ (unsigned int)(v36 << 11)) >> 8)) ^
          2LL,
      0x10u);
  v39 = *(float**)(a1 + 152);
  v38 = *(_QWORD*)(a1 + 160);
  if ((unsigned __int64)v39 >= v38) {
    v41 = *(_QWORD*)(a1 + 144);
    v42 = (char*)v39 - v41;
    v43 = ((__int64)v39 - v41) >> 2;
    v44 = v43 + 1;
    if ((unsigned __int64)(v43 + 1) >> 62 != 0) {
      goto LABEL_105;
    }
    v45 = v38 - v41;
    if (v45 >> 1 > v44) {
      v44 = v45 >> 1;
    }
    if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFFCLL) {
      v46 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v46 = v44;
    }
    if (v46 != 0) {
      if (v46 >> 62 != 0) {
        goto LABEL_106;
      }
      v47 = fw_memory_HeapManager_Allocate(*v6, 4 * v46, 16, 0),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v47 = 0;
    }
    v48 = v47 + 4 * v46;
    v49 = (unsigned __int64)v39 - v41;
    v50 = (__int64)&v42[v47 + -4 * v43];
    *(float*)&v42[v47] = v37;
    v40 = (float*)&v42[v47 + 4];
    memcpy(v50, v41, v49),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 144) = v50;
    *(_QWORD*)(a1 + 152) = v40;
    *(_QWORD*)(a1 + 160) = v48;
    if (v41 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v51, v41),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v39 = v37;
    v40 = v39 + 1;
  }
  v52 = *(unsigned int*)(a1 + 184);
  *(_QWORD*)(a1 + 152) = v40;
  LODWORD(v52) = 1812433253 * ((v52 >> 30) ^ v52) + 1;
  v53 = vcvts_n_f32_u64(
      (unsigned __int16)(v52 ^ ((_WORD)v52 << 11) ^
                         (((unsigned int)v52 ^ ((_DWORD)v52 << 11)) >> 8)) ^
          0x84E7LL,
      0x10u);
  v54 = *(_QWORD*)(a1 + 160);
  if ((unsigned __int64)v40 >= v54) {
    v56 = *(_QWORD*)(a1 + 144);
    v57 = (char*)v40 - v56;
    v58 = ((__int64)v40 - v56) >> 2;
    v59 = v58 + 1;
    if ((unsigned __int64)(v58 + 1) >> 62 != 0) {
      goto LABEL_105;
    }
    v60 = v54 - v56;
    if (v60 >> 1 > v59) {
      v59 = v60 >> 1;
    }
    if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFFCLL) {
      v61 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v61 = v59;
    }
    if (v61 != 0) {
      if (v61 >> 62 != 0) {
        goto LABEL_106;
      }
      v62 = fw_memory_HeapManager_Allocate(*v6, 4 * v61, 16, 0),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v62 = 0;
    }
    v63 = v62 + 4 * v61;
    v64 = (unsigned __int64)v40 - v56;
    v65 = (__int64)&v57[v62 + -4 * v58];
    *(float*)&v57[v62] = v53;
    v55 = (float*)&v57[v62 + 4];
    memcpy(v65, v56, v64),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 144) = v65;
    *(_QWORD*)(a1 + 152) = v55;
    *(_QWORD*)(a1 + 160) = v63;
    if (v56 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v66, v56),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v40 = v53;
    v55 = v40 + 1;
  }
  v67 = *(unsigned int*)(a1 + 184);
  *(_QWORD*)(a1 + 152) = v55;
  LODWORD(v67) = 1812433253 * ((v67 >> 30) ^ v67) + 1;
  v68 = vcvts_n_f32_u64(
      (unsigned __int16)(v67 ^ ((_WORD)v67 << 11) ^
                         (((unsigned int)v67 ^ ((_DWORD)v67 << 11)) >> 8)) ^
          0x9CDLL,
      0x10u);
  v69 = *(_QWORD*)(a1 + 160);
  if ((unsigned __int64)v55 >= v69) {
    v71 = *(_QWORD*)(a1 + 144);
    v72 = (char*)v55 - v71;
    v73 = ((__int64)v55 - v71) >> 2;
    v74 = v73 + 1;
    if ((unsigned __int64)(v73 + 1) >> 62 != 0) {
      goto LABEL_105;
    }
    v75 = v69 - v71;
    if (v75 >> 1 > v74) {
      v74 = v75 >> 1;
    }
    if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFFCLL) {
      v76 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v76 = v74;
    }
    if (v76 != 0) {
      if (v76 >> 62 != 0) {
        goto LABEL_106;
      }
      v77 = fw_memory_HeapManager_Allocate(*v6, 4 * v76, 16, 0),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v77 = 0;
    }
    v78 = v77 + 4 * v76;
    v79 = (unsigned __int64)v55 - v71;
    v80 = (__int64)&v72[v77 + -4 * v73];
    *(float*)&v72[v77] = v68;
    v70 = (float*)&v72[v77 + 4];
    memcpy(v80, v71, v79),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 144) = v80;
    *(_QWORD*)(a1 + 152) = v70;
    *(_QWORD*)(a1 + 160) = v78;
    if (v71 != 0) {
      v81 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v81, v71),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    *v55 = v68;
    v70 = v55 + 1;
  }
  v82 = *(unsigned int*)(a1 + 184);
  *(_QWORD*)(a1 + 152) = v70;
  LODWORD(v82) = 1812433253 * ((v82 >> 30) ^ v82) + 1;
  v83 = vcvts_n_f32_u64(
      (unsigned __int16)(v82 ^ ((_WORD)v82 << 11) ^
                         (((unsigned int)v82 ^ ((_DWORD)v82 << 11)) >> 8)) ^
          0xB4B3LL,
      0x10u);
  v84 = *(_QWORD*)(a1 + 160);
  if ((unsigned __int64)v70 < v84) {
    *v70 = v83;
    v85 = (__int64)(v70 + 1);
    goto LABEL_91;
  }
  v86 = *(_QWORD*)(a1 + 144);
  v87 = (char*)v70 - v86;
  v88 = ((__int64)v70 - v86) >> 2;
  v89 = v88 + 1;
  if ((unsigned __int64)(v88 + 1) >> 62 != 0) {
  LABEL_105:
    GameRoutine_a78a90(),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v90 = v84 - v86;
  if (v90 >> 1 > v89) {
    v89 = v90 >> 1;
  }
  if ((unsigned __int64)v90 >= 0x7FFFFFFFFFFFFFFCLL) {
    v91 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v91 = v89;
  }
  if (v91 != 0) {
    if (v91 >> 62 == 0) {
      v92 = fw_memory_HeapManager_Allocate(*v6, 4 * v91, 16, 0),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_87;
    }
  LABEL_106:
    GameRoutine_60a210(),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v92 = 0;
LABEL_87:
  v93 = v92 + 4 * v91;
  v94 = (unsigned __int64)v70 - v86;
  v95 = (__int64)&v87[v92 + -4 * v88];
  *(float*)&v87[v92] = v83;
  v85 = (__int64)&v87[v92 + 4];
  memcpy(v95, v86, v94),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 144) = v95;
  *(_QWORD*)(a1 + 152) = v85;
  *(_QWORD*)(a1 + 160) = v93;
  if (v86 != 0) {
    v96 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v96, v86),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_91:
  *(_QWORD*)(a1 + 152) = v85;
  v97 = 0x1.0000000000000p+0f;
  *(_QWORD*)(a1 + 424) = 0x3F8000003F800000LL;
  v98 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 448) != 0) {
    v97 = 0x0.0p+0f;
  }
  v99 = *(_QWORD*)(v98 + 232);
  *(float*)(v98 + 148) = v97;
  if (v99 != 0) {
    *(float*)(*(_QWORD*)(v99 + 304) + 12LL) = v97;
    v100 = *(_QWORD*)(v98 + 232);
    if (v100 != 0) {
      v97 = *(float*)(*(_QWORD*)(v100 + 304) + 16LL) * 0x1.0aef000000000p+4f;
      v101 = 0x1.0624de0000000p-10f;
      goto LABEL_98;
    }
    v97 = *(float*)(v98 + 148);
  }
  v101 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           160LL) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
LABEL_98:
  *(float*)(v98 + 228) = v97 * v101;
  Character_cea860(a1),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v103 = *(_QWORD*)(a1 + 384);
  v104 = *(_QWORD*)(a1 + 56);
  v105 = v103 >> 29;
  v106 = (unsigned int)v103 >> 1;
  if ((*(_QWORD*)(a1 + 384) & 0x40000000LL) != 0) {
    v107 = 33;
  }
  else {
    v107 = 1;
  }
  LODWORD(v108) = (v107 | v105 & 0x10 | v106 & 6) << 16;
  if (*(_QWORD*)(a1 + 168) != 0) {
    v108 = (unsigned int)v108 | 0x80000;
  }
  else {
    v108 = (unsigned int)v108;
  }
  *(_QWORD*)(a1 + 440) = v108 + *(unsigned int*)(a1 + 184);
  CharacterCollisionShape_fff0a0(v104),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return game_zview_ffe870(*(_QWORD**)(a1 + 64));
}

__int64 Character_cea860(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  int v25;
  bool v26;
  __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  int v37;

  result = *(_QWORD*)(a1 + 168);
  if (result != 0) {
    result = game_Unit_GetJobUnknown30(result);
    v3 = *(_QWORD*)(a1 + 384);
    v4 = 0x80000000LL;
    if ((unsigned __int8)result != 8) {
      v4 = 0;
    }
    v5 = v3 & 0xFFFFFFFF7FFFFFFFLL | v4;
    *(_QWORD*)(a1 + 384) = v5;
    if (v5 != v3) {
      v6 = *(_QWORD**)(a1 + 8);
      if (v6 != nullptr && v6[39] != 0) {
        v7 = v6[29];
        if (v7 != 0) {
          v8 = *(_DWORD*)(v7 + 340) & 0xFFFFFFFD |
               (2 * ((*(_DWORD*)(v6[2] + 384LL) & 2) != 0));
          *(_DWORD*)(v7 + 340) = v8;
          *(_DWORD*)(v7 + 340) = v8 & 0xFFFFFFFE |
                                 ((*(_DWORD*)(v6[2] + 384LL) & 0x20) != 0) |
                                 0x2000;
        }
      }
      result = game_zview_d0e440(*(_QWORD*)(a1 + 16), 1);
      v9 = *(_QWORD*)(a1 + 384);
      v10 = v9 >> 29;
      v11 = (unsigned int)v9 >> 1;
      if ((*(_QWORD*)(a1 + 384) & 0x40000000LL) != 0) {
        v12 = 33;
      }
      else {
        v12 = 1;
      }
      LODWORD(v13) = (v12 | v10 & 0x10 | v11 & 6) << 16;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v13 = (unsigned int)v13 | 0x80000;
      }
      else {
        v13 = (unsigned int)v13;
      }
      *(_QWORD*)(a1 + 440) = v13 + *(unsigned int*)(a1 + 184);
    }
  }
  v14 = a1;
  do {
    v15 = v14;
    v14 = *(_QWORD*)(v14 + 600);
  } while (v14 != 0);
  v16 = *(_QWORD*)(v15 + 168);
  if (v16 != 0) {
    v37 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C4LL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    result = game_HasSkill((_QWORD*)(v16 + 1744), (unsigned int*)&v37);
    v17 = *(_QWORD*)(a1 + 384);
    v18 = 16;
    if ((result & 1) == 0) {
      v18 = 0;
    }
    v19 = v17 & 0xFFFFFFFFFFFFFFEFLL | v18;
    *(_QWORD*)(a1 + 384) = v19;
    if (v19 != v17) {
      v20 = *(_QWORD**)(a1 + 8);
      if (v20 != nullptr && v20[39] != 0) {
        v21 = v20[29];
        if (v21 != 0) {
          v22 = *(_DWORD*)(v21 + 340) & 0xFFFFFFFD |
                (2 * ((*(_DWORD*)(v20[2] + 384LL) & 2) != 0));
          *(_DWORD*)(v21 + 340) = v22;
          *(_DWORD*)(v21 + 340) = v22 & 0xFFFFFFFE |
                                  ((*(_DWORD*)(v20[2] + 384LL) & 0x20) != 0) |
                                  0x2000;
        }
      }
      result = game_zview_d0e440(*(_QWORD*)(a1 + 16), 1);
      v17 = *(_QWORD*)(a1 + 384);
      if ((v17 & 0x40000000) != 0) {
        v23 = 33;
      }
      else {
        v23 = 1;
      }
      LODWORD(v24) = (v23 | (v17 >> 29) & 0x10 | ((unsigned int)v17 >> 1) & 6)
                     << 16;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v24 = (unsigned int)v24 | 0x80000;
      }
      else {
        v24 = (unsigned int)v24;
      }
      *(_QWORD*)(a1 + 440) = v24 + *(unsigned int*)(a1 + 184);
    }
    v25 = *(unsigned __int8*)(*(_QWORD*)(v16 + 440) + 16LL);
    v26 = v25 == 3 || v25 == 0;
    v27 = 4;
    if (v26) {
      v27 = 0;
    }
    v28 = v27 | v17 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD*)(a1 + 384) = v28;
    if (v28 != v17) {
      v29 = *(_QWORD**)(a1 + 8);
      if (v29 != nullptr && v29[39] != 0) {
        v30 = v29[29];
        if (v30 != 0) {
          v31 = *(_DWORD*)(v30 + 340) & 0xFFFFFFFD |
                (2 * ((*(_DWORD*)(v29[2] + 384LL) & 2) != 0));
          *(_DWORD*)(v30 + 340) = v31;
          *(_DWORD*)(v30 + 340) = v31 & 0xFFFFFFFE |
                                  ((*(_DWORD*)(v29[2] + 384LL) & 0x20) != 0) |
                                  0x2000;
        }
      }
      result = game_zview_d0e440(*(_QWORD*)(a1 + 16), 1);
      v32 = *(_QWORD*)(a1 + 384);
      v33 = v32 >> 29;
      v34 = (unsigned int)v32 >> 1;
      if ((*(_QWORD*)(a1 + 384) & 0x40000000LL) != 0) {
        v35 = 33;
      }
      else {
        v35 = 1;
      }
      LODWORD(v36) = (v35 | v33 & 0x10 | v34 & 6) << 16;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v36 = (unsigned int)v36 | 0x80000;
      }
      else {
        v36 = (unsigned int)v36;
      }
      *(_QWORD*)(a1 + 440) = v36 + *(unsigned int*)(a1 + 184);
    }
  }
  return result;
}

__int64 Character_Destructor(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
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
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 result;
  struct {
    unsigned __int64 v61;
    int v62;
    char v63;
  } v61_;

  v1 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_zview_Character_vtable;
  if (v1 != 0 && *(_BYTE*)(a1 + 240) != 0) {
    *(_BYTE*)(a1 + 240) = 0;
    v3 = *(_DWORD*)(v1 + 32) - 1;
    *(_DWORD*)(v1 + 32) = v3;
    if (v3 == 0) {
      v4 = *(_QWORD*)(v1 + 8);
      v61_.v63 = 0;
      v61_.v61 = 0xBF800000BF800000LL;
      v61_.v62 = 1065353216;
      v5 = UnitActor_819f40(v4);
      if (v5 != *(_DWORD*)(v1 + 16)) {
        UnitActor_81a540(v1, v5, (__int64)&v61_.v61);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 600);
  if (v14 == 0) {
    goto LABEL_49;
  }
  v15 = *(char**)(v14 + 608);
  v16 = *(char**)(v14 + 616);
  if (v15 == v16) {
    goto LABEL_39;
  }
  v17 = v16 - v15 - 8;
  if ((~(_BYTE)v17 & 0x18) != 0) {
    v18 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 3;
    while (*(_QWORD*)v15 != a1) {
      v15 += 8;
      if (--v18 == 0) {
        goto LABEL_28;
      }
    }
    goto LABEL_39;
  }
LABEL_28:
  if (v17 >= 0x18) {
    v15 += 16;
    while (1) {
      if (*((_QWORD*)v15 - 2) == a1) {
        v15 -= 16;
        goto LABEL_39;
      }
      if (*((_QWORD*)v15 - 1) == a1) {
        v15 -= 8;
        goto LABEL_39;
      }
      if (*(_QWORD*)v15 == a1) {
        goto LABEL_39;
      }
      if (*((_QWORD*)v15 + 1) == a1) {
        break;
      }
      v19 = v15 + 16;
      v15 += 32;
      if (v19 == v16) {
        goto LABEL_48;
      }
    }
    v15 += 8;
  LABEL_39:
    if (v15 != v16) {
      v20 = v15 + 8;
      if (v15 + 8 != v16) {
        do {
          if (*(_QWORD*)v20 != a1) {
            *(_QWORD*)v15 = *(_QWORD*)v20;
            v15 += 8;
          }
          v20 += 8;
        } while (v20 != v16);
        v16 = *(char**)(v14 + 616);
      }
    }
    if (v15 != v16) {
      *(_QWORD*)(v14 + 616) = v15;
    }
  }
LABEL_48:
  *(_QWORD*)(a1 + 600) = 0;
LABEL_49:
  v21 = *(_QWORD*)(a1 + 608);
  v22 = *(_QWORD*)(a1 + 616) - v21;
  if ((int)(v22 >> 3) < 1) {
    goto LABEL_82;
  }
  v23 = (v22 >> 3) & 0x7FFFFFFF;
  do {
    v25 = *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * (v23 - 1));
    v26 = *(_QWORD*)(v25 + 600);
    if (v26 != 0) {
      v27 = *(char**)(v26 + 608);
      v28 = *(char**)(v26 + 616);
      if (v27 != v28) {
        v29 = v28 - v27 - 8;
        if ((~(_BYTE)v29 & 0x18) == 0) {
        LABEL_59:
          if (v29 < 0x18) {
          LABEL_51:
            *(_QWORD*)(v25 + 600) = 0;
            continue;
          }
          v27 += 16;
          while (1) {
            if (*((_QWORD*)v27 - 2) == v25) {
              v27 -= 16;
              if (v27 != v28) {
                goto LABEL_71;
              }
              goto LABEL_77;
            }
            if (*((_QWORD*)v27 - 1) == v25) {
              v27 -= 8;
              goto LABEL_70;
            }
            if (*(_QWORD*)v27 == v25) {
              goto LABEL_70;
            }
            if (*((_QWORD*)v27 + 1) == v25) {
              break;
            }
            v31 = v27 + 16;
            v27 += 32;
            if (v31 == v28) {
              goto LABEL_51;
            }
          }
          v27 += 8;
          if (v27 != v28) {
            goto LABEL_71;
          }
        LABEL_77:
          if (v27 != v28) {
            *(_QWORD*)(v26 + 616) = v27;
          }
          goto LABEL_51;
        }
        v30 = ((unsigned __int8)((unsigned int)v29 >> 3) + 1) & 3;
        while (*(_QWORD*)v27 != v25) {
          v27 += 8;
          if (--v30 == 0) {
            goto LABEL_59;
          }
        }
      }
    LABEL_70:
      if (v27 != v28) {
      LABEL_71:
        v32 = v27 + 8;
        if (v27 + 8 != v28) {
          do {
            if (*(_QWORD*)v32 != v25) {
              *(_QWORD*)v27 = *(_QWORD*)v32;
              v27 += 8;
            }
            v32 += 8;
          } while (v32 != v28);
          v28 = *(char**)(v26 + 616);
        }
      }
      goto LABEL_77;
    }
  } while (v23-- > 1);
  v21 = *(_QWORD*)(a1 + 608);
LABEL_82:
  *(_QWORD*)(a1 + 616) = v21;
  v33 = *(_QWORD*)(a1 + 632);
  *(_QWORD*)(a1 + 632) = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v34, v33);
    v21 = *(_QWORD*)(a1 + 608);
  }
  if (v21 != 0) {
    v35 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 616) = v21;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v35 + v36, v21);
  }
  v37 = *(_QWORD*)(a1 + 400);
  if (v37 == 0) {
    goto LABEL_103;
  }
  v38 = *(_QWORD*)(a1 + 408);
  if (v37 == v38) {
  LABEL_100:
    v43 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v43, v37);
    goto LABEL_103;
  }
  while (2) {
    v40 = *(_QWORD**)(v38 - 16);
    v41 = v38 - 48;
    if ((_QWORD*)(v38 - 48) == v40) {
      v39 = 32;
      goto LABEL_94;
    }
    if (v40 != nullptr) {
      v39 = 40;
    LABEL_94:
      (*(void (**)(_QWORD*, __int64))(*v40 + v39))(v40, v21);
    }
    v38 = v41;
    if (v41 != v37) {
      continue;
    }
    break;
  }
  v42 = *(_QWORD*)(a1 + 400);
  *(_QWORD*)(a1 + 408) = v37;
  v37 = v42;
  if (v42 != 0) {
    goto LABEL_100;
  }
LABEL_103:
  v44 = *(_QWORD*)(a1 + 344);
  if (v44 != 0) {
    v45 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 352) = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v45 + v46, v44);
  }
  v47 = *(_QWORD*)(a1 + 144);
  if (v47 != 0) {
    v48 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 152) = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v48 + v49, v47);
  }
  v50 = *(_QWORD*)(a1 + 136);
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak_alt1(v50);
  }
  v51 = *(_QWORD**)(a1 + 112);
  if (v51 == (_QWORD*)(a1 + 80)) {
    v52 = 32;
  LABEL_118:
    (*(void (**)(_QWORD*, __int64))(*v51 + v52))(v51, v47);
  }
  else if (v51 != nullptr) {
    v52 = 40;
    goto LABEL_118;
  }
  v53 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v53 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
  }
  v54 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54);
  }
  v55 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v55 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 8LL))(v55);
  }
  v56 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v56 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
  }
  v57 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  v58 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v58 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
  }
  v59 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v59 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
  }
  result = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 game_zview_Character_Character_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  int v11;
  __int64 v12;
  float32x4_t* v13;
  float32x4_t* v14;
  __int64 v15;
  float v16;
  float32x4_t v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  int v26;
  __int64 v27;
  __int64 v28;

  result = *(_QWORD*)(a1 + 8) + 520LL;
  if (*(_BYTE*)(result + 64) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 56) + 8LL) + 232LL);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 408);
      if (v3 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
        v5 = GameData_212df08;
        if ((explicit & 1) == 0) {
          v27 = v3;
          v28 = result;
          v26 = __cxa_guard_acquire(GameData_212df10);
          v5 = GameData_212df08;
          v3 = v27;
          result = v28;
          if (v26 != 0) {
            *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
            __cxa_guard_release(GameData_212df10);
            v5 = GameData_212df08;
            v3 = v27;
            result = v28;
          }
        }
        v6 = *v5;
        v8 = *(_QWORD*)(v3 + 504);
        v7 = *(_QWORD*)(v3 + 512);
        v9 = v7;
        for (i = v7; i != v8; i -= 16) {
          v11 = *(_DWORD*)(i - 16);
          v9 -= 16;
          if (v11 == v6) {
            if (v7 != v9) {
              v12 = *(_QWORD*)(v9 + 8);
              if (v12 != 0) {
                v15 = v12 + 24;
                v13 = *(float32x4_t**)(v12 + 24);
                v14 = *(float32x4_t**)(v15 + 8);
                v16 = *(float*)(result + 8);
                if (v14 != nullptr) {
                  v13 = v14;
                }
                v17 = vsubq_f32(v13[3], v13[4]);
                v18 = fabsf(LANES128(v17).n128_f32[0]) * 0x1.0000000000000p-1f;
                v19 = fabsf(LANES128(v17).n128_f32[2]) * 0x1.0000000000000p-1f;
                if (v18 >= v19) {
                  v19 = v18;
                }
                v20 = v19 / 0x1.69fbe80000000p+0f;
                if (vabds_f32(v16, v19 / 0x1.69fbe80000000p+0f) <=
                    (float)(v16 * 0x1.0000000000000p-1f)) {
                  v25 = *(float*)(result + 32);
                }
                else {
                  v21 = 0x1.0000000000000p+0f;
                  if (v16 > 0x0.0p+0f) {
                    v21 = v20 / v16;
                  }
                  *(float*)(result + 8) = v20;
                  *(float*)(result + 12) = v20;
                  v22 = v21 * *(float*)(result + 28);
                  v23 = v21 * *(float*)(result + 40);
                  *(float*)(result + 24) = v21 * *(float*)(result + 24);
                  *(float*)(result + 28) = v22;
                  v24 = v21 * *(float*)(result + 36);
                  v25 = v21 * *(float*)(result + 32);
                  *(float*)(result + 36) = v24;
                  *(float*)(result + 40) = v23;
                }
                *(_BYTE*)(result + 65) = 1;
                if (v25 < 0x1.cccccc0000000p+0f) {
                  v25 = 0x1.cccccc0000000p+0f;
                }
                *(float*)(result + 32) = v25;
              }
            }
            return result;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
