#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterController_d0d7c0_alt1(_QWORD) __asm__(
    "CharacterController_d0d7c0");
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_d24980(__int64, __int64, float32x4_t*, float32x4_t*,
                           _DWORD*);
__int64 GameRoutine_d48b40(_QWORD, _QWORD, float, float, float);
__int64 GameRoutine_d744b0(_QWORD, _QWORD);
__int64 WaitRelease_cfa2a0(long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 StateActionBase_Unknown3(void);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool GameRoutine_d42740(_QWORD*, float32x4_t**, int*);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ed70;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd87b8[])();
extern __int64 (*GameData_1fd87d8[])();
extern __int64 (*GameData_1fda9e8[])();
extern __int64 (*GameData_1fdaa38[])();
extern __int64 (*GameData_1fdaa88[])();
extern __int64 (*GameData_1fdabf8[])();
extern __int64 (*game_zview_CharacterController_StateGuard_DamageN_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_Loop_vtable[])();
extern __int64 (*game_zview_CharacterController_StateGuard_Start_vtable[])();
extern __int64 (*game_zview_CharacterController_vtable[])();
extern __int64 GameData_212eca0;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212db48[3];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ec58[2];
extern __int64* GameData_212ed28[9];
extern __int64* GameData_212ed30[8];
extern __int64* GameData_212ed38[7];
extern __int64* GameData_212ed40[6];
extern __int64* GameData_212ed50[4];
extern __int64* GameData_212ed58[3];
extern __int64* GameData_212ed60[2];
extern __int64* GameData_212ed68;
extern __int64* GameData_212eea8[2];
extern __int64* GameData_212f0e8;
float GameRoutine_d1cbc0(_QWORD, _QWORD);
float atan2f(_QWORD, float, float);
float atan2f_alt1(_QWORD, long double, float) __asm__("atan2f");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_cdcc10(void);
void __attribute__((noreturn)) GameRoutine_cfa280(void);
__int64 CharacterController_StateWarpTo_Unknown2(__int64 result);
__int64 game_zview_CharacterController_CharacterController(__int64 a1,
                                                           __int64 a2);
__int64 CharacterController_d0d7c0(__int64 result);
_QWORD* CharacterController_Destructor(__int64 a1);
float game_zview_CharacterController_CharacterController_lambda0_Invoke(
    __int64 a1);
__int64 CharacterController_d40860(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4);
__int64 CharacterController_d42d20(__int64 result, char* a2, char* a3,
                                   unsigned __int64 a4);
__int64 CharacterController_StateStay_ToStayPos_Unknown4(__int64 result,
                                                         long double a2);
void CharacterController_d449c0(__int64 a1);
__int64 CharacterController_d468c0(__int64 result);
__int64 CharacterController_StateGuard_Unknown3(__int64 a1);
float CharacterController_StateGuard_Start_Unknown4(__int64 a1);

__int64 CharacterController_StateWarpTo_Unknown2(__int64 result)
{
  *(_WORD*)(result + 16) = 0;
  *(_DWORD*)(result + 64) = 0;
  return result;
}

__int64 game_zview_CharacterController_CharacterController(__int64 a1,
                                                           __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64* v107;
  unsigned __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  unsigned __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64* v137;
  unsigned __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD v151[4];
  _QWORD* v152;
  _QWORD v153[4];
  _QWORD* v154;

  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  v4 = GameData_212ec58[0];
  *(_BYTE*)(a1 + 32) = 0;
  v5 = GameData_212eca0;
  *(_QWORD*)a1 = game_zview_CharacterController_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_WORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v6 = (__int64*)(a1 + 40);
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 16) = v4 + 2;
  *(_BYTE*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 228) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 260) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 268) = 0;
  *(_WORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_DWORD*)(a1 + 276) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 136) = v5 + 16;
  *(_BYTE*)(a1 + 197) = 1;
  *(_DWORD*)(a1 + 236) = -1027080192;
  *(_QWORD*)(a1 + 220) = 1065353216;
  *(_WORD*)(a1 + 280) = 256;
  *(_WORD*)(a1 + 288) = 256;
  *(_QWORD*)(a1 + 292) = 0;
  v7 = (char*)GameData_212ed70 + 16;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_DWORD*)(a1 + 384) = 1065353216;
  *(_BYTE*)(a1 + 428) = 0;
  *(_BYTE*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 436) = 0;
  *(_BYTE*)(a1 + 440) = 0;
  *(_BYTE*)(a1 + 444) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_BYTE*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 540) = 0;
  *(_DWORD*)(a1 + 544) = 1065353216;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 352) = v7;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 388) = 0;
  *(_QWORD*)(a1 + 396) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *(_QWORD*)(a1 + 412) = 0;
  *(_QWORD*)(a1 + 417) = 0;
  *(_QWORD*)(a1 + 524) = 0;
  *(_QWORD*)(a1 + 532) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release(&GameData_22110b8);
  }
  v8 = GameData_22110ac;
  *(_DWORD*)(a1 + 600) = 0;
  *(_BYTE*)(a1 + 604) = 0;
  *(_QWORD*)(a1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(a1 + 584) = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22110b8) != 0) {
    GameData_22110ac = 0;
    __cxa_guard_release(&GameData_22110b8);
  }
  v9 = GameData_22110ac;
  *(_DWORD*)(a1 + 616) = 0;
  *(_BYTE*)(a1 + 620) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_BYTE*)(a1 + 640) = 0;
  *(_BYTE*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_BYTE*)(a1 + 716) = 0;
  *(_BYTE*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 668) = 0;
  *(_QWORD*)(a1 + 676) = 0;
  *(_BYTE*)(a1 + 724) = 0;
  *(_BYTE*)(a1 + 736) = 0;
  *(_BYTE*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_BYTE*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_BYTE*)(a1 + 936) = 0;
  *(_BYTE*)(a1 + 937) = 1;
  *(_QWORD*)(a1 + 608) = v9;
  *(_OWORD*)(a1 + 800) = 0u;
  CharacterController_d0d7c0_alt1(a1);
  *(_QWORD*)(a1 + 8) = a2;
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       432, 16, 0);
  v12 = GameData_212eea8[0];
  v13 = *(_QWORD*)(a1 + 496);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_BYTE*)(v11 + 80) = 0;
  *(_BYTE*)(v11 + 96) = 0;
  *(_DWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_DWORD*)(v11 + 128) = 0;
  *(_BYTE*)(v11 + 132) = 0;
  *(_QWORD*)v11 = GameData_1fda9e8;
  *(_BYTE*)(v11 + 136) = 0;
  *(_WORD*)(v11 + 140) = 0;
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 152) = 0;
  *(_DWORD*)(v11 + 160) = 0x2000;
  *(_BYTE*)(v11 + 208) = 0;
  *(_BYTE*)(v11 + 212) = 0;
  *(_BYTE*)(v11 + 252) = 0;
  *(_BYTE*)(v11 + 256) = 0;
  *(_BYTE*)(v11 + 260) = 0;
  *(_BYTE*)(v11 + 264) = 0;
  *(_BYTE*)(v11 + 268) = 0;
  *(_BYTE*)(v11 + 272) = 0;
  *(_BYTE*)(v11 + 352) = 0;
  *(_BYTE*)(v11 + 368) = 0;
  *(_BYTE*)(v11 + 372) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_BYTE*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 376) = 0;
  *(_QWORD*)(v11 + 384) = 0;
  *(_QWORD*)(v11 + 392) = 0;
  *(_QWORD*)(v11 + 400) = 0;
  *(_QWORD*)(v11 + 408) = 0;
  *(_DWORD*)(v11 + 416) = 0;
  *(_QWORD*)(v11 + 40) = a1;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(a1 + 496) = v11;
  *(_QWORD*)(v11 + 32) = v12 + 2;
  *(_QWORD*)(a1 + 488) = v11 + 32;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = fw_memory_HeapManager_Allocate(*v10, 160, 16, 0);
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)v14 = GameData_1fdaa38;
  v15 = GameData_212f0e8;
  v16 = *(_QWORD*)(a1 + 512);
  *(_QWORD*)(v14 + 64) = 0;
  *(_BYTE*)(v14 + 72) = 0;
  *(_BYTE*)(v14 + 80) = 0;
  *(_BYTE*)(v14 + 88) = 0;
  *(_BYTE*)(v14 + 96) = 0;
  *(_BYTE*)(v14 + 112) = 0;
  *(_BYTE*)(v14 + 116) = 0;
  *(_BYTE*)(v14 + 120) = 0;
  *(_BYTE*)(v14 + 124) = 0;
  *(_BYTE*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 140) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_DWORD*)(v14 + 152) = 0x2000;
  *(_QWORD*)(v14 + 32) = a1;
  *(_QWORD*)(a1 + 512) = v14;
  *(_QWORD*)(v14 + 24) = v15 + 2;
  *(_QWORD*)(a1 + 504) = v14 + 24;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v151[0] = GameData_1fdaa88;
  v151[1] = a1;
  v152 = v151;
  v154 = v153;
  v153[0] = GameData_1fdaa88;
  v153[1] = a1;
  GameRoutine_654050(v153, a1 + 64);
  if (v154 == v153) {
    v17 = 32;
  }
  else {
    if (v154 == nullptr) {
      goto LABEL_14;
    }
    v17 = 40;
  }
  (*(void (**)(void))(*v154 + v17))();
LABEL_14:
  if (v152 == v151) {
    v18 = 32;
  }
  else {
    if (v152 == nullptr) {
      goto LABEL_19;
    }
    v18 = 40;
  }
  (*(void (**)(void))(*v152 + v18))();
LABEL_19:
  result = fw_memory_HeapManager_Allocate(*v10, 48, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v20 = GameData_212ed28[0];
  *(_QWORD*)(result + 24) = 0;
  *(_BYTE*)(result + 32) = 0;
  *(_BYTE*)(result + 40) = 0;
  *(_QWORD*)result = v20 + 2;
  *(_QWORD*)(result + 8) = a1;
  v22 = *(__int64**)(a1 + 48);
  v21 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v22 >= v21) {
    v24 = *v6;
    v25 = (__int64)v22 - *v6;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 != 0) {
      goto LABEL_164;
    }
    v27 = v21 - v24;
    if (v27 >> 2 > v26) {
      v26 = v27 >> 2;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_165;
      }
      v29 = result;
      v30 = fw_memory_HeapManager_Allocate(*v10, 8 * v28, 16, 0);
      result = v29;
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v28;
    v32 = v30 + v25 - 8 * (v25 >> 3);
    *(_QWORD*)(v30 + v25) = result;
    v23 = (__int64*)(v30 + v25 + 8);
    memcpy(v32, v24, v25);
    *(_QWORD*)(a1 + 40) = v32;
    *(_QWORD*)(a1 + 48) = v23;
    *(_QWORD*)(a1 + 56) = v31;
    if (v24 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v33, v24);
    }
  }
  else {
    *v22 = result;
    v23 = v22 + 1;
  }
  v34 = *v10;
  *(_QWORD*)(a1 + 48) = v23;
  result = fw_memory_HeapManager_Allocate(v34, 288, 16, 0);
  *(_QWORD*)(result + 20) = 0x3F8000003F800000LL;
  *(_DWORD*)(result + 28) = 1065353216;
  v35 = GameData_212ed30[0];
  *(_WORD*)(result + 16) = 0;
  *(_BYTE*)(result + 32) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 213) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_DWORD*)(result + 272) = 0;
  *(_QWORD*)result = v35 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_BYTE*)(result + 248) = 1;
  v36 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v23 >= v36) {
    v38 = *v6;
    v39 = (__int64)v23 - *v6;
    v40 = (v39 >> 3) + 1;
    if (v40 >> 61 != 0) {
      goto LABEL_164;
    }
    v41 = v36 - v38;
    if (v41 >> 2 > v40) {
      v40 = v41 >> 2;
    }
    if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
      v42 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v42 = v40;
    }
    if (v42 != 0) {
      if (v42 >> 61 != 0) {
        goto LABEL_165;
      }
      v43 = result;
      v44 = fw_memory_HeapManager_Allocate(*v10, 8 * v42, 16, 0);
      result = v43;
    }
    else {
      v44 = 0;
    }
    v45 = v44 + 8 * v42;
    v46 = v44 + v39 - 8 * (v39 >> 3);
    *(_QWORD*)(v44 + v39) = result;
    v37 = (__int64*)(v44 + v39 + 8);
    memcpy(v46, v38, v39);
    *(_QWORD*)(a1 + 40) = v46;
    *(_QWORD*)(a1 + 48) = v37;
    *(_QWORD*)(a1 + 56) = v45;
    if (v38 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v47, v38);
    }
  }
  else {
    *v23 = result;
    v37 = v23 + 1;
  }
  v48 = *v10;
  *(_QWORD*)(a1 + 48) = v37;
  result = fw_memory_HeapManager_Allocate(v48, 80, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v49 = GameData_212db48[0];
  *(_BYTE*)(result + 52) = 0;
  *(_DWORD*)(result + 56) = 0;
  *(_BYTE*)(result + 60) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)result = v49 + 2;
  *(_QWORD*)(result + 8) = a1;
  v50 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v37 >= v50) {
    v52 = *v6;
    v53 = (__int64)v37 - *v6;
    v54 = (v53 >> 3) + 1;
    if (v54 >> 61 != 0) {
      goto LABEL_164;
    }
    v55 = v50 - v52;
    if (v55 >> 2 > v54) {
      v54 = v55 >> 2;
    }
    if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
      v56 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v56 = v54;
    }
    if (v56 != 0) {
      if (v56 >> 61 != 0) {
        goto LABEL_165;
      }
      v57 = result;
      v58 = fw_memory_HeapManager_Allocate(*v10, 8 * v56, 16, 0);
      result = v57;
    }
    else {
      v58 = 0;
    }
    v59 = v58 + 8 * v56;
    v60 = v58 + v53 - 8 * (v53 >> 3);
    *(_QWORD*)(v58 + v53) = result;
    v51 = v58 + v53 + 8;
    memcpy(v60, v52, v53);
    *(_QWORD*)(a1 + 40) = v60;
    *(_QWORD*)(a1 + 48) = v51;
    *(_QWORD*)(a1 + 56) = v59;
    if (v52 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v61, v52);
    }
  }
  else {
    *v37 = result;
    v51 = (__int64)(v37 + 1);
  }
  v62 = *v10;
  *(_QWORD*)(a1 + 48) = v51;
  result = fw_memory_HeapManager_Allocate(v62, 216, 16, 0);
  v63 = GameData_212ed38[0];
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 44) = 0;
  *(_QWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 20) = 0x4020000040200000LL;
  *(_QWORD*)(result + 84) = 0;
  *(_QWORD*)(result + 92) = 0;
  *(_QWORD*)(result + 60) = 0x4020000040200000LL;
  *(_QWORD*)(result + 68) = 0;
  *(_QWORD*)(result + 132) = 0;
  *(_QWORD*)(result + 124) = 0;
  *(_QWORD*)(result + 100) = 0x4020000040200000LL;
  *(_QWORD*)(result + 108) = 0;
  *(_BYTE*)(result + 140) = 0;
  *(_DWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 181) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)result = v63 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_QWORD*)(result + 36) = 0x40A0000040A00000LL;
  *(_QWORD*)(result + 76) = 0x40A0000040A00000LL;
  *(_QWORD*)(result + 116) = 0x40A0000040A00000LL;
  v65 = *(__int64**)(a1 + 48);
  v64 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v65 >= v64) {
    v67 = *v6;
    v68 = (__int64)v65 - *v6;
    v69 = (v68 >> 3) + 1;
    if (v69 >> 61 != 0) {
      goto LABEL_164;
    }
    v70 = v64 - v67;
    if (v70 >> 2 > v69) {
      v69 = v70 >> 2;
    }
    if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
      v71 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v71 = v69;
    }
    if (v71 != 0) {
      if (v71 >> 61 != 0) {
        goto LABEL_165;
      }
      v72 = result;
      v73 = fw_memory_HeapManager_Allocate(*v10, 8 * v71, 16, 0);
      result = v72;
    }
    else {
      v73 = 0;
    }
    v74 = v73 + 8 * v71;
    v75 = v73 + v68 - 8 * (v68 >> 3);
    *(_QWORD*)(v73 + v68) = result;
    v66 = v73 + v68 + 8;
    memcpy(v75, v67, v68);
    *(_QWORD*)(a1 + 40) = v75;
    *(_QWORD*)(a1 + 48) = v66;
    *(_QWORD*)(a1 + 56) = v74;
    if (v67 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v76, v67);
    }
  }
  else {
    *v65 = result;
    v66 = (__int64)(v65 + 1);
  }
  v77 = *v10;
  *(_QWORD*)(a1 + 48) = v66;
  result = fw_memory_HeapManager_Allocate(v77, 416, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v78 = GameData_212ed40[0];
  *(_QWORD*)(result + 352) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_BYTE*)(result + 96) = 0;
  *(_BYTE*)(result + 112) = 0;
  *(_WORD*)(result + 128) = 0;
  *(_WORD*)(result + 184) = 0;
  *(_DWORD*)(result + 208) = 0;
  *(_BYTE*)(result + 212) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_WORD*)(result + 160) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_BYTE*)(result + 348) = 0;
  *(_WORD*)(result + 368) = 0;
  *(_QWORD*)(result + 372) = 0;
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_QWORD*)(result + 400) = 0;
  *(_QWORD*)(result + 408) = 0;
  *(_QWORD*)(result + 236) = 0;
  *(_QWORD*)(result + 244) = 0;
  *(_QWORD*)(result + 252) = 0;
  *(_QWORD*)result = v78 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 224) = 1065353216;
  *(_QWORD*)(result + 357) = 0;
  *(_QWORD*)(result + 228) = 0;
  *(_QWORD*)(result + 260) = 0;
  *(_QWORD*)(result + 268) = 0;
  *(_QWORD*)(result + 276) = 0;
  *(_QWORD*)(result + 284) = 0;
  *(_QWORD*)(result + 292) = 0;
  *(_QWORD*)(result + 300) = 0;
  *(_QWORD*)(result + 308) = 0;
  *(_QWORD*)(result + 316) = 0;
  *(_QWORD*)(result + 324) = 0;
  *(_QWORD*)(result + 332) = 0;
  *(_QWORD*)(result + 337) = 0;
  v80 = *(__int64**)(a1 + 48);
  v79 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v80 >= v79) {
    v82 = *v6;
    v83 = (__int64)v80 - *v6;
    v84 = (v83 >> 3) + 1;
    if (v84 >> 61 != 0) {
      goto LABEL_164;
    }
    v85 = v79 - v82;
    if (v85 >> 2 > v84) {
      v84 = v85 >> 2;
    }
    if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFF8LL) {
      v86 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v86 = v84;
    }
    if (v86 != 0) {
      if (v86 >> 61 != 0) {
        goto LABEL_165;
      }
      v87 = result;
      v88 = fw_memory_HeapManager_Allocate(*v10, 8 * v86, 16, 0);
      result = v87;
    }
    else {
      v88 = 0;
    }
    v89 = v88 + 8 * v86;
    v90 = v88 + v83 - 8 * (v83 >> 3);
    *(_QWORD*)(v88 + v83) = result;
    v81 = (__int64*)(v88 + v83 + 8);
    memcpy(v90, v82, v83);
    *(_QWORD*)(a1 + 40) = v90;
    *(_QWORD*)(a1 + 48) = v81;
    *(_QWORD*)(a1 + 56) = v89;
    if (v82 != 0) {
      v91 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v91, v82);
    }
  }
  else {
    *v80 = result;
    v81 = v80 + 1;
  }
  v92 = *v10;
  *(_QWORD*)(a1 + 48) = v81;
  result = fw_memory_HeapManager_Allocate(v92, 80, 16, 0);
  *(_WORD*)(result + 16) = 0;
  v93 = GameData_212ed50[0];
  *(_BYTE*)(result + 18) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 36) = 0;
  *(_QWORD*)(result + 41) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_QWORD*)result = v93 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 64) = 0x2000;
  v94 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v81 >= v94) {
    v96 = *v6;
    v97 = (__int64)v81 - *v6;
    v98 = (v97 >> 3) + 1;
    if (v98 >> 61 != 0) {
      goto LABEL_164;
    }
    v99 = v94 - v96;
    if (v99 >> 2 > v98) {
      v98 = v99 >> 2;
    }
    if ((unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
      v100 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v100 = v98;
    }
    if (v100 != 0) {
      if (v100 >> 61 != 0) {
        goto LABEL_165;
      }
      v101 = result;
      v102 = fw_memory_HeapManager_Allocate(*v10, 8 * v100, 16, 0);
      result = v101;
    }
    else {
      v102 = 0;
    }
    v103 = v102 + 8 * v100;
    v104 = v102 + v97 - 8 * (v97 >> 3);
    *(_QWORD*)(v102 + v97) = result;
    v95 = v102 + v97 + 8;
    memcpy(v104, v96, v97);
    *(_QWORD*)(a1 + 40) = v104;
    *(_QWORD*)(a1 + 48) = v95;
    *(_QWORD*)(a1 + 56) = v103;
    if (v96 != 0) {
      v105 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v105, v96);
    }
  }
  else {
    *v81 = result;
    v95 = (__int64)(v81 + 1);
  }
  v106 = *v10;
  *(_QWORD*)(a1 + 48) = v95;
  result = fw_memory_HeapManager_Allocate(v106, 136, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v107 = GameData_212ed58[0];
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_WORD*)(result + 128) = 0;
  *(_QWORD*)result = v107 + 2;
  *(_QWORD*)(result + 8) = a1;
  v109 = *(__int64**)(a1 + 48);
  v108 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v109 >= v108) {
    v111 = *v6;
    v112 = (__int64)v109 - *v6;
    v113 = (v112 >> 3) + 1;
    if (v113 >> 61 != 0) {
      goto LABEL_164;
    }
    v114 = v108 - v111;
    if (v114 >> 2 > v113) {
      v113 = v114 >> 2;
    }
    if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFF8LL) {
      v115 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v115 = v113;
    }
    if (v115 != 0) {
      if (v115 >> 61 != 0) {
        goto LABEL_165;
      }
      v116 = result;
      v117 = fw_memory_HeapManager_Allocate(*v10, 8 * v115, 16, 0);
      result = v116;
    }
    else {
      v117 = 0;
    }
    v118 = v117 + 8 * v115;
    v119 = v117 + v112 - 8 * (v112 >> 3);
    *(_QWORD*)(v117 + v112) = result;
    v110 = v117 + v112 + 8;
    memcpy(v119, v111, v112);
    *(_QWORD*)(a1 + 40) = v119;
    *(_QWORD*)(a1 + 48) = v110;
    *(_QWORD*)(a1 + 56) = v118;
    if (v111 != 0) {
      v120 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v120 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v120, v111);
    }
  }
  else {
    *v109 = result;
    v110 = (__int64)(v109 + 1);
  }
  v121 = *v10;
  *(_QWORD*)(a1 + 48) = v110;
  result = fw_memory_HeapManager_Allocate(v121, 136, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v122 = GameData_212ed60[0];
  *(_QWORD*)(result + 88) = 0;
  *(_DWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_QWORD*)(result + 128) = 0;
  *(_QWORD*)result = v122 + 2;
  *(_QWORD*)(result + 8) = a1;
  v124 = *(__int64**)(a1 + 48);
  v123 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v124 >= v123) {
    v126 = *v6;
    v127 = (__int64)v124 - *v6;
    v128 = (v127 >> 3) + 1;
    if (v128 >> 61 != 0) {
      goto LABEL_164;
    }
    v129 = v123 - v126;
    if (v129 >> 2 > v128) {
      v128 = v129 >> 2;
    }
    if ((unsigned __int64)v129 >= 0x7FFFFFFFFFFFFFF8LL) {
      v130 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v130 = v128;
    }
    if (v130 != 0) {
      if (v130 >> 61 != 0) {
        goto LABEL_165;
      }
      v131 = result;
      v132 = fw_memory_HeapManager_Allocate(*v10, 8 * v130, 16, 0);
      result = v131;
    }
    else {
      v132 = 0;
    }
    v133 = v132 + 8 * v130;
    v134 = v132 + v127 - 8 * (v127 >> 3);
    *(_QWORD*)(v132 + v127) = result;
    v125 = v132 + v127 + 8;
    memcpy(v134, v126, v127);
    *(_QWORD*)(a1 + 40) = v134;
    *(_QWORD*)(a1 + 48) = v125;
    *(_QWORD*)(a1 + 56) = v133;
    if (v126 != 0) {
      v135 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v135 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v135, v126);
    }
  }
  else {
    *v124 = result;
    v125 = (__int64)(v124 + 1);
  }
  v136 = *v10;
  *(_QWORD*)(a1 + 48) = v125;
  result = fw_memory_HeapManager_Allocate(v136, 120, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  v137 = GameData_212ed68;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_DWORD*)(result + 112) = 0;
  *(_QWORD*)result = v137 + 2;
  *(_QWORD*)(result + 8) = a1;
  *(_DWORD*)(result + 88) = -2;
  v139 = *(__int64**)(a1 + 48);
  v138 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v139 < v138) {
    *v139 = result;
    v140 = (__int64)(v139 + 1);
    goto LABEL_163;
  }
  v141 = *v6;
  v142 = (__int64)v139 - *v6;
  v143 = (v142 >> 3) + 1;
  if (v143 >> 61 != 0) {
  LABEL_164:
    GameRoutine_cfa280();
  }
  v144 = v138 - v141;
  if (v144 >> 2 > v143) {
    v143 = v144 >> 2;
  }
  if ((unsigned __int64)v144 >= 0x7FFFFFFFFFFFFFF8LL) {
    v145 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v145 = v143;
  }
  if (v145 != 0) {
    if (v145 >> 61 == 0) {
      v146 = result;
      v147 = fw_memory_HeapManager_Allocate(*v10, 8 * v145, 16, 0);
      result = v146;
      goto LABEL_159;
    }
  LABEL_165:
    GameRoutine_60a210(result);
  }
  v147 = 0;
LABEL_159:
  v148 = v147 + 8 * v145;
  v149 = v147 + v142 - 8 * (v142 >> 3);
  *(_QWORD*)(v147 + v142) = result;
  v140 = v147 + v142 + 8;
  result = memcpy(v149, v141, v142);
  *(_QWORD*)(a1 + 40) = v149;
  *(_QWORD*)(a1 + 48) = v140;
  *(_QWORD*)(a1 + 56) = v148;
  if (v141 != 0) {
    v150 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v150 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v10 + v150, v141);
  }
LABEL_163:
  *(_QWORD*)(a1 + 48) = v140;
  return result;
}

__int64 CharacterController_d0d7c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v2 = GameData_22110ac;
  *(_DWORD*)(v1 + 600) = 0;
  *(_BYTE*)(v1 + 604) = 0;
  *(_QWORD*)(v1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(v1 + 584) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v3 = GameData_22110ac;
  *(_DWORD*)(v1 + 616) = 0;
  *(_BYTE*)(v1 + 620) = 0;
  *(_QWORD*)(v1 + 608) = v3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v4 = GameData_22110ac;
  v5 = *(unsigned __int8*)(v1 + 648);
  *(_DWORD*)(v1 + 632) = 0;
  *(_QWORD*)(v1 + 624) = v4;
  if (v5 == 1) {
    *(_BYTE*)(v1 + 648) = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v6 = GameData_22110ac;
  *(_DWORD*)(v1 + 664) = 0;
  *(_QWORD*)(v1 + 656) = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  *(_QWORD*)(v1 + 668) = GameData_22110ac;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22110b8);
    if ((_DWORD)result != 0) {
      GameData_22110ac = 0;
      result = __cxa_guard_release(&GameData_22110b8);
    }
  }
  v7 = GameData_22110ac;
  *(_QWORD*)(v1 + 696) = *(_QWORD*)(v1 + 688);
  v8 = *(_QWORD*)(v1 + 768);
  *(_QWORD*)(v1 + 676) = v7;
  *(_QWORD*)(v1 + 776) = v8;
  if (*(_BYTE*)(v1 + 716) == 1) {
    *(_BYTE*)(v1 + 716) = 0;
  }
  if (*(_BYTE*)(v1 + 724) == 1) {
    *(_BYTE*)(v1 + 724) = 0;
  }
  if (*(_BYTE*)(v1 + 752) == 1) {
    *(_BYTE*)(v1 + 752) = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v16 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v16;
      result = __cxa_guard_release(&GameData_21a6130);
    }
  }
  v9 = *(_QWORD*)(v1 + 840);
  *(_BYTE*)(v1 + 816) = 0;
  *(_DWORD*)(v1 + 820) = 0;
  v10 = GameData_21a6120;
  *(_DWORD*)(v1 + 828) = 0;
  *(_QWORD*)(v1 + 832) = 0;
  *(_QWORD*)(v1 + 840) = 0;
  *(_BYTE*)(v1 + 824) = 1;
  *(_QWORD*)(v1 + 800) = v10;
  v11 = *(_OWORD*)(v1 + 800);
  *((_QWORD*)&v11 + 1) = DWORD2(v10);
  *(_OWORD*)(v1 + 800) = v11;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v12 = *(_QWORD*)(v1 + 864);
  *(_BYTE*)(v1 + 848) = 0;
  *(_QWORD*)(v1 + 856) = 0;
  *(_QWORD*)(v1 + 864) = 0;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(v1 + 880);
  *(_QWORD*)(v1 + 872) = 0;
  *(_QWORD*)(v1 + 880) = 0;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(v1 + 896);
  *(_QWORD*)(v1 + 888) = 0;
  *(_QWORD*)(v1 + 896) = 0;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = *(_QWORD*)(v1 + 904);
  *(_QWORD*)(v1 + 928) = 0;
  *(_QWORD*)(v1 + 912) = v15;
  *(_WORD*)(v1 + 936) = 256;
  return result;
}

_QWORD* CharacterController_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
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
  __int64* v23;
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
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* result;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  *(_QWORD*)a1 = game_zview_CharacterController_vtable;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 40);
  v4 = *(_QWORD**)(a1 + 48);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 40);
  }
  *(_QWORD*)(a1 + 48) = v3;
  v5 = *(_QWORD*)(a1 + 904);
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 912) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  v9 = *(_QWORD*)(a1 + 896);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 880);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 864);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 840);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 768);
  if (v13 != 0) {
    v14 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 776) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = *(_QWORD*)(a1 + 688);
  if (v16 != 0) {
    v17 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 696) = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = *(_QWORD*)(a1 + 536);
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = *(_QWORD*)(a1 + 512);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = *(_QWORD*)(a1 + 496);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v22 = *(_QWORD*)(a1 + 480);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(__int64**)(a1 + 464);
  *(_QWORD*)(a1 + 464) = 0;
  if (v23 != nullptr) {
    v24 = *v23;
    if (*v23 != 0) {
      v25 = v23[1];
      if (v24 == v25) {
        goto LABEL_55;
      }
      do {
        v26 = *(_QWORD*)(v25 - 8);
        if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v26);
        }
        v25 -= 16;
      } while (v25 != v24);
      v27 = *v23;
      v23[1] = v24;
      v24 = v27;
      if (v27 != 0) {
      LABEL_55:
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v28, v24);
      }
    }
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v29, v23);
  }
  v30 = *(_QWORD*)(a1 + 456);
  *(_QWORD*)(a1 + 456) = 0;
  if (v30 != 0) {
    v31 = *(_QWORD*)(v30 + 8);
    if (v31 != 0) {
      v32 = *(_QWORD*)(v30 + 16);
      if (v31 == v32) {
        goto LABEL_70;
      }
      do {
        v33 = *(_QWORD*)(v32 - 8);
        if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
        }
        v32 -= 16;
      } while (v32 != v31);
      v34 = *(_QWORD*)(v30 + 8);
      *(_QWORD*)(v30 + 16) = v31;
      v31 = v34;
      if (v34 != 0) {
      LABEL_70:
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v35, v31);
      }
    }
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v36, v30);
  }
  v37 = *(_QWORD*)(a1 + 448);
  *(_QWORD*)(a1 + 448) = 0;
  if (v37 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v38, v37);
  }
  v39 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 136) = GameData_1fd87d8;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  *(_QWORD*)(a1 + 16) = GameData_1fd87b8;
  if (*(_BYTE*)(a1 + 28) == 1) {
    v40 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 24));
    (*(void (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40);
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  v41 = *(_QWORD**)(a1 + 40);
  v42 = *(_QWORD**)(a1 + 48);
  if (v41 != v42) {
    do {
      if (*v41 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v41 + 8LL))(*v41);
        *v41 = 0;
      }
      ++v41;
    } while (v41 != v42);
    v41 = *(_QWORD**)(a1 + 40);
  }
  result = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 48) = v41;
  if (result == (_QWORD*)(a1 + 64)) {
    v44 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_97;
    }
    v44 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v44))((__int64)result);
  v41 = *(_QWORD**)(a1 + 40);
LABEL_97:
  if (v41 != nullptr) {
    v45 = *(_QWORD*)v6;
    *(_QWORD*)(a1 + 48) = v41;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v45 + v46, v41);
  }
  return result;
}

float game_zview_CharacterController_CharacterController_lambda0_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  float result;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 128) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v1;
    v5 = __cxa_guard_acquire(&GameData_22110b8);
    v1 = v7;
    if (v5 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v1 = v7;
    }
  }
  v2 = GameData_22110ac;
  *(_DWORD*)(v1 + 600) = 0;
  *(_BYTE*)(v1 + 604) = 0;
  *(_QWORD*)(v1 + 592) = 0x417B53D240800000LL;
  *(_QWORD*)(v1 + 584) = v2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v8 = v1;
    v6 = __cxa_guard_acquire(&GameData_22110b8);
    v1 = v8;
    if (v6 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v1 = v8;
    }
  }
  v4 = GameData_22110ac;
  result = *(float*)&GameData_22110ac;
  *(_DWORD*)(v1 + 616) = 0;
  *(_BYTE*)(v1 + 620) = 0;
  *(_QWORD*)(v1 + 608) = v4;
  return result;
}

__int64 CharacterController_d40860(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  float* v4;
  float v9;
  int v10;
  float v11;
  __int64 result;
  int v13;
  float v16;
  int v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v29;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  int v36;
  float v37;
  float v38;
  int v39;
  float v40;
  int v41;
  int v42;
  int v44;
  int v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  _QWORD v52[2];
  __int64 v53;
  __int128 v54;

  v4 = *(float**)(a1 + 8);
  v9 = v4[157];
  if (v9 > 0.8f) {
    v10 = 1;
    goto LABEL_19;
  }
  v11 = v4[156];
  result = 0;
  if (v11 >= -0.8f) {
    v13 = 0;
  }
  else {
    v13 = 2;
  }
  if (v11 > 0.8f) {
    v13 = 3;
  }
  if (v9 >= -0.8f) {
    v10 = v13;
  }
  else {
    v10 = 0;
  }
  if (v9 < -0.8f || v11 > 0.8f || v11 < -0.8f) {
  LABEL_19:
    v16 = v4[73];
    *((_QWORD*)&v54 + 1) = 0;
    v52[0] = 0x4020000040200000LL;
    v52[1] = 0;
    v53 = 0x40A0000040A00000LL;
    v17 = (int)(float)((float)(v16 + 1280.0f) * 0.2f);
    v18 = v17 - 256;
    v19 = (int)(float)((float)(v4[74] + 1280.0f) * 0.2f);
    LODWORD(v54) = v17 - 256;
    *(_QWORD*)((char*)&v54 + 4) = (unsigned int)(v19 - 256);
    if (((v17 - 256) | (v19 - 256)) != 0) {
      DWORD2(v54) = v17 - 256;
      HIDWORD(v54) = v19 - 256;
      v25 = (float)((float)((float)v17 * 5.0f) + 2.5f) + -1280.0f;
      v23 = v25 + 2.5f;
      v20 = (float)((float)((float)v19 * 5.0f) + 2.5f) + -1280.0f;
      v24 = v25 + -2.5f;
      v21 = v20 + -2.5f;
      v22 = v20 + 2.5f;
      *(float*)v52 = v25;
      *((float*)v52 + 1) = v20;
      *(float*)&v52[1] = v25 + -2.5f;
      *((float*)&v52[1] + 1) = v20 + -2.5f;
      *(float*)&v53 = v25 + 2.5f;
      *((float*)&v53 + 1) = v20 + 2.5f;
    }
    else {
      v20 = 2.5f;
      v21 = 0.0f;
      v22 = 5.0f;
      v23 = 5.0f;
      v24 = 0.0f;
      v25 = 2.5f;
    }
    if ((GameRoutine_d744b0(v52, (unsigned int)v10) & 1) != 0) {
      v26 = *(_QWORD*)(a1 + 8);
      v27 = *(float*)(v26 + 292);
      if (v27 >= v24 && v27 <= v23) {
        v29 = *(float*)(v26 + 296);
        if (v29 >= v21 && v29 <= v22) {
          if (v10 > 1) {
            if (v10 == 2) {
              if (v27 <= (float)(v24 + 2.0f)) {
                goto LABEL_43;
              }
            }
            else if (v27 >= (float)(v23 + -2.0f)) {
            LABEL_43:
              v31 = 0.0f;
              v32 = 0.0f;
              *(float*)a2 = v25;
              *(float*)(a2 + 4) = v20;
              *(float*)(a2 + 8) = v24;
              *(float*)(a2 + 12) = v21;
              *(float*)(a2 + 16) = v23;
              *(float*)(a2 + 20) = v22;
              v33 = 0.0f;
              v34 = 0.0f;
              v35 = *((_QWORD*)&v54 + 1);
              v36 = v10 == 3;
              if (v10 == 2) {
                v36 = -1;
              }
              v37 = 0.0f;
              v38 = 0.0f;
              v39 = v10 == 1;
              v40 = 0.0f;
              if (v10 == 0) {
                v39 = -1;
              }
              *(_QWORD*)(a2 + 24) = v54;
              *(_QWORD*)(a2 + 32) = v35;
              v41 = v18 + v36;
              v42 = v19 - 256 + v39;
              if (v18 + v36 != -10000 || v42 != -10000) {
                v40 = (float)((float)((float)(v36 + v17) * 5.0f) + 2.5f) +
                      -1280.0f;
                v38 = (float)((float)((float)(v39 + v19) * 5.0f) + 2.5f) +
                      -1280.0f;
                v34 = v40 + -2.5f;
                v33 = v38 + -2.5f;
                v32 = v40 + 2.5f;
                v37 = v38 + 2.5f;
              }
              v44 = v41 + v36;
              *(float*)a3 = v40;
              *(float*)(a3 + 4) = v38;
              *(float*)(a3 + 8) = v34;
              *(float*)(a3 + 12) = v33;
              v45 = v42 + v39;
              v46 = 0.0f;
              v47 = 0.0f;
              v48 = 0.0f;
              *(float*)(a3 + 16) = v32;
              *(float*)(a3 + 20) = v37;
              *(_DWORD*)(a3 + 24) = v41;
              *(_DWORD*)(a3 + 28) = v42;
              v49 = 0.0f;
              v50 = 0.0f;
              *(_DWORD*)(a3 + 32) = v41;
              *(_DWORD*)(a3 + 36) = v42;
              if (v44 != -10000 || v45 != -10000) {
                v31 = (float)((float)((float)(v44 + 256) * 5.0f) + 2.5f) +
                      -1280.0f;
                v49 = (float)((float)((float)(v45 + 256) * 5.0f) + 2.5f) +
                      -1280.0f;
                v50 = v31 + -2.5f;
                v47 = v31 + 2.5f;
                v46 = v49 + -2.5f;
                v48 = v49 + 2.5f;
              }
              *(float*)a4 = v31;
              *(float*)(a4 + 4) = v49;
              *(float*)(a4 + 8) = v50;
              *(float*)(a4 + 12) = v46;
              *(float*)(a4 + 16) = v47;
              *(float*)(a4 + 20) = v48;
              *(_DWORD*)(a4 + 24) = v44;
              *(_DWORD*)(a4 + 28) = v45;
              *(_DWORD*)(a4 + 32) = v44;
              *(_DWORD*)(a4 + 36) = v45;
              return 1;
            }
          }
          else if (v10 != 0) {
            if (v29 >= (float)(v22 + -2.0f)) {
              goto LABEL_43;
            }
          }
          else if (v29 <= (float)(v21 + 2.0f)) {
            goto LABEL_43;
          }
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 CharacterController_d42d20(__int64 result, char* a2, char* a3,
                                   unsigned __int64 a4)
{
  __int64 v5;
  char* v6;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  unsigned int* v18;
  int v19;
  __int128 v20;
  char* v21;
  char* v22;
  __int64 v23;
  unsigned int* v24;
  int v25;
  __int128 v26;

  v5 = *(_QWORD*)(result + 16);
  v6 = *(char**)result;
  v8 = (_QWORD*)result;
  if (a4 <= (v5 - *(_QWORD*)result) >> 4) {
    v16 = *(char**)(result + 8);
    if (a4 <= (v16 - v6) >> 4) {
      while (a2 != a3) {
        v24 = (unsigned int*)(a2 + 8);
        *(_DWORD*)v6 = *(_DWORD*)a2;
        v25 = *((_DWORD*)a2 + 1);
        a2 += 16;
        *((_DWORD*)v6 + 1) = v25;
        v26 = *(_OWORD*)v6;
        *((_QWORD*)&v26 + 1) = *v24;
        *(_OWORD*)v6 = v26;
        v6 += 16;
      }
      *(_QWORD*)(result + 8) = v6;
    }
    else {
      v17 = &a2[v16 - v6];
      if (v16 != v6) {
        do {
          v18 = (unsigned int*)(a2 + 8);
          *(_DWORD*)v6 = *(_DWORD*)a2;
          v19 = *((_DWORD*)a2 + 1);
          a2 += 16;
          *((_DWORD*)v6 + 1) = v19;
          v20 = *(_OWORD*)v6;
          *((_QWORD*)&v20 + 1) = *v18;
          *(_OWORD*)v6 = v20;
          v6 += 16;
        } while (a2 != v17);
        v16 = *(char**)(result + 8);
      }
      v21 = v16;
      if (v17 != a3) {
        v21 = v16;
        v22 = v16;
        do {
          v21 += 16;
          *((_QWORD*)v22 + 1) = *((_QWORD*)v17 + 1);
          v23 = *(_QWORD*)v17;
          v17 += 16;
          *(_QWORD*)v22 = v23;
          v22 += 16;
        } while (v17 != a3);
      }
      *(_QWORD*)(result + 8) = v21;
    }
  }
  else {
    if (v6 != nullptr) {
      v9 = fw_memory_g_heap_manager;
      *(_QWORD*)(result + 8) = v6;
      v10 = a4;
      v11 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v9 + v11, v6);
      a4 = v10;
      v5 = 0;
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
    }
    if (a4 >> 60 != 0) {
      goto LABEL_28;
    }
    v12 = v5 >> 3;
    if (v5 >> 3 <= a4) {
      v12 = a4;
    }
    v13 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v12;
    if (v13 >> 60 != 0) {
    LABEL_28:
      GameRoutine_cdcc10();
    }
    result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 16 * v13,
                                            16, 0);
    v14 = result;
    *v8 = result;
    v8[1] = result;
    v8[2] = result + 16 * v13;
    if (a2 != a3) {
      v15 = (a3 - a2) & 0xFFFFFFFFFFFFFFF0LL;
      result = memcpy(result, a2, v15);
      v14 += v15;
    }
    v8[1] = v14;
  }
  return result;
}

__int64 CharacterController_StateStay_ToStayPos_Unknown4(__int64 result,
                                                         long double a2)
{
  __int64 v2;
  __int64 v3;
  float32x4_t v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  int v17;
  float32x4_t v18;
  float32x4_t* v19[3];
  int v20;

  v2 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    ((uint64_t*)&v4)[0] = *(_QWORD*)(v2 + 32);
    v5 = result;
    v17 = 4;
    v6 = ((uint32_t*)&v4)[1];
    ((uint32_t*)&v4)[1] = *(_DWORD*)(v3 + 576);
    ((uint64_t*)&v4)[1] = v6;
    v18 = v4;
    result = GameRoutine_d24980(
        *(_QWORD*)(*GameData_212eba8[0] + 72), *(_QWORD*)(v3 + 8),
        (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 16LL) + 560LL), &v18,
        &v17);
    v7 = *(_QWORD*)(v5 + 8);
    if ((result & 1) != 0) {
      *(_QWORD*)&a2 = 0;
      *(_DWORD*)(v5 + 16) = 0;
    }
    else {
      *(float*)&a2 =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL) + 8LL) +
                    228LL) +
          *(float*)(v5 + 16);
      *(_DWORD*)(v5 + 16) = LODWORD(a2);
    }
    v8 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8LL) + 8LL) +
                   228LL) +
         *(float*)(v5 + 20);
    *(float*)(v5 + 20) = v8;
    v9 = *(_QWORD*)(v7 + 8);
    v10 = *(float*)&a2 <
          (float)((float)(fminf(fmaxf(**(float**)(*(_QWORD*)(v9 + 8) + 144LL),
                                      0.0),
                                1.0) *
                          0.5) +
                  1.5);
    LODWORD(a2) = 4.0;
    v10 = v10 && v8 < 4.0;
    if (!v10) {
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 40) + 8LL) + 64LL) =
          *(_DWORD*)(v9 + 368);
      v11 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8LL);
      v12 = fw_memory_g_heap_manager_ptr;
      v13 = (float32x4_t*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
      v19[0] = v13;
      v19[1] = v13 + 1;
      v19[2] = v13 + 1;
      *v13 = v18;
      v14 = *(_QWORD*)(*(_QWORD*)(v11 + 40) + 8LL);
      *(_QWORD*)(v14 + 20) = 0x3F8000003F800000LL;
      *(_BYTE*)(v14 + 32) = 0;
      *(_DWORD*)(v14 + 28) = 1065353216;
      v20 = 1;
      GameRoutine_d42740((_QWORD*)v14, v19, &v20);
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15, v13);
      v7 = *(_QWORD*)(v5 + 8);
      v9 = *(_QWORD*)(v7 + 8);
    }
    if ((*(_BYTE*)(v7 + 40) & 1) != 0) {
      v16 = *(float*)(v9 + 292) - *(float*)(v7 + 32);
      if ((float)((float)((float)(*(float*)(v9 + 296) - *(float*)(v7 + 36)) *
                          (float)(*(float*)(v9 + 296) - *(float*)(v7 + 36))) +
                  (float)(v16 * v16)) > 6.25) {
        *(_DWORD*)(v9 + 128) |= 0x200u;
      }
      return result;
    }
  }
  GameRoutine_8123d0(result, a2);
}

void CharacterController_d449c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  float* v5;
  float v6;
  __int128 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((*(_BYTE*)(a1 + 364) & 1) != 0) {
    return;
  }
  v1 = a1;
  if (*(_QWORD*)(a1 + 280) == 0) {
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v12[2] = 0;
    v13 = *(_QWORD*)(v1 + 288);
    v12[5] = 0;
    v12[6] = 0;
    v12[7] = 0;
    v12[8] = 0;
    v12[9] = 0;
    v12[10] = 0;
    v12[11] = 0;
    *(_QWORD*)(v1 + 288) = v12;
    *v12 = GameData_1fdabf8;
    v12[1] = 0;
    v12[4] = 0;
    a1 = (__int64)(v12 + 4);
    *(_QWORD*)(v1 + 280) = a1;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      a1 = std___1___shared_weak_count___release_weak(v13);
    }
    v14 = *(_QWORD*)(v1 + 280);
    *(_DWORD*)(v14 + 20) = 1067506044;
    *(_BYTE*)(v14 + 24) = 1;
    v15 = *(_QWORD*)(v1 + 280);
    *(_DWORD*)(v15 + 4) = 1095307227;
    *(_BYTE*)(v15 + 8) = 1;
    v16 = *(_QWORD*)(v1 + 280);
    if (*(unsigned __int8*)(v16 + 48) == *(unsigned __int8*)(v1 + 112)) {
      if (*(_BYTE*)(v16 + 48) != 0) {
        *(_DWORD*)(v16 + 32) = *(_DWORD*)(v1 + 96);
        *(_DWORD*)(v16 + 36) = *(_DWORD*)(v1 + 100);
        v17 = *(_OWORD*)(v16 + 32);
        *((_QWORD*)&v17 + 1) = *(unsigned int*)(v1 + 104);
        *(_OWORD*)(v16 + 32) = v17;
      }
    }
    else if (*(_BYTE*)(v16 + 48) != 0) {
      *(_BYTE*)(v16 + 48) = 0;
    }
    else {
      *(_QWORD*)(v16 + 40) = *(_QWORD*)(v1 + 104);
      *(_QWORD*)(v16 + 32) = *(_QWORD*)(v1 + 96);
      *(_BYTE*)(v16 + 48) = 1;
    }
    v21 = *(_QWORD*)(v1 + 280);
    v22 = *(_QWORD*)(v1 + 288);
    v23 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 488LL);
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
    }
    v24 = *(_QWORD*)(v23 + 192);
    *(_QWORD*)(v23 + 184) = v21;
    *(_QWORD*)(v23 + 192) = v22;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      a1 = std___1___shared_weak_count___release_weak(v24);
    }
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      a1 = std___1___shared_weak_count___release_weak(v22);
    }
  }
  v2 = *(_QWORD*)(v1 + 88);
  if (v2 == 0) {
    goto LABEL_12;
  }
  v3 = *(_QWORD**)(GameData_220b6f0 + 8);
  v4 = *(_QWORD**)(GameData_220b6f0 + 16);
  if (v3 != v4) {
    while (*v3 != v2) {
      v3 += 2;
      if (v3 == v4) {
        goto LABEL_12;
      }
    }
  }
  if (v3 == v4) {
  LABEL_12:
    if (*(_BYTE*)(v1 + 112) != 1) {
      v10 = *(float*)(v1 + 152);
      v11 = *(float*)(v1 + 156);
      goto LABEL_22;
    }
    v7 = *(_OWORD*)(v1 + 96);
    LODWORD(v8) = *(_QWORD*)(v1 + 104);
  }
  else {
    v5 = *(float**)(v2 + 16);
    v6 = *(float*)(v1 + 352) - *(float*)(v1 + 80);
    if (v6 < 0.0) {
      v6 = 0.0;
    }
    *(float*)&v7 = v5[73] + (float)(v5[167] * v6);
    v8 = v5[74] + (float)(v5[168] * v6);
  }
  v9 = *(_QWORD*)(v1 + 8);
  v10 = *(float*)&v7 - *(float*)(v9 + 292);
  v11 = v8 - *(float*)(v9 + 296);
LABEL_22:
  v18 = (float)(v11 * v11) + (float)(v10 * v10);
  v19 = 0.0;
  if (v18 > 0.0) {
    if (v10 != 0.0 || v11 != 0.0) {
      v20 = sqrtf(v18);
      v10 = v10 / v20;
      v11 = v11 / v20;
    }
    v19 = atan2f(a1, v10, v11);
  }
  **(float**)(v1 + 280) = v19;
}

__int64 CharacterController_d468c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  if ((*(_BYTE*)(result + 144) & 1) != 0) {
    v2 = *(_QWORD*)(result + 160);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(v1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 72);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(v1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(v1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

__int64 CharacterController_StateGuard_Unknown3(__int64 a1)
{
  __int64 v2;
  long double v3;
  float v4;
  float v5;
  float v6;
  float v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  long double v50;
  unsigned __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 result;

  StateActionBase_Unknown3();
  v2 = GameRoutine_d48b40(a1, 0, *(float*)(a1 + 96), *(float*)(a1 + 100), 0.2);
  LODWORD(v3) = *(_DWORD*)(a1 + 96);
  v4 = *(float*)(a1 + 100);
  v5 = 0.0;
  v6 = (float)(v4 * v4) + (float)(*(float*)&v3 * *(float*)&v3);
  if (v6 > 0.0) {
    if (*(float*)&v3 != 0.0 || v4 != 0.0) {
      v7 = sqrtf(v6);
      *(float*)&v3 = *(float*)&v3 / v7;
      v4 = v4 / v7;
    }
    v5 = atan2f_alt1(v2, v3, v4);
  }
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v9[2] = 0;
  v10 = *(_QWORD*)(a1 + 112);
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  *(_QWORD*)(a1 + 112) = v9;
  *v9 = GameData_1fdabf8;
  v9[1] = 0;
  v9[4] = 0;
  *(_QWORD*)(a1 + 104) = v9 + 4;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  **(float**)(a1 + 104) = v5;
  v11 = *(_QWORD*)(a1 + 104);
  *(_DWORD*)(v11 + 4) = 1100401636;
  *(_BYTE*)(v11 + 8) = 1;
  v12 = *(_QWORD*)(a1 + 104);
  v13 = *(_QWORD*)(a1 + 112);
  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488LL);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD*)(v14 + 192);
  *(_QWORD*)(v14 + 184) = v12;
  *(_QWORD*)(v14 + 192) = v13;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 112, 16, 0);
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v17 = v16;
  v16[6] = 0;
  v16[7] = 0;
  v16[8] = 0;
  v16[9] = 0;
  v16[10] = 0;
  v16[11] = 0;
  v16[12] = 0;
  v16[13] = 0;
  *v16 = GameData_212ec58[0] + 2;
  v16[1] = 0;
  v18 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v17;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    v17 = *(_QWORD**)(a1 + 120);
  }
  v19 = fw_memory_HeapManager_Allocate(*v8, 24, 16, 0);
  *(_DWORD*)(v19 + 16) = 0;
  *(_QWORD*)v19 = game_zview_CharacterController_StateGuard_Start_vtable;
  *(_QWORD*)(v19 + 8) = a1;
  v21 = (__int64*)v17[4];
  v20 = v17[5];
  if ((unsigned __int64)v21 >= v20) {
    v23 = v17[3];
    v24 = (char*)v21 - v23;
    v25 = ((__int64)v21 - v23) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      goto LABEL_74;
    }
    v27 = v20 - v23;
    if (v27 >> 2 > v26) {
      v26 = v27 >> 2;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        goto LABEL_75;
      }
      v29 = v19;
      v30 = fw_memory_HeapManager_Allocate(*v8, 8 * v28, 16, 0);
      v19 = v29;
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v28;
    v32 = (__int64)&v24[v30 + -8 * v25];
    *(_QWORD*)&v24[v30] = v19;
    v22 = (__int64)&v24[v30 + 8];
    memcpy(v32, v23, v24);
    v17[3] = v32;
    v17[4] = v22;
    v17[5] = v31;
    if (v23 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v33);
    }
  }
  else {
    *v21 = v19;
    v22 = (__int64)(v21 + 1);
  }
  v17[4] = v22;
  v34 = *(_QWORD**)(a1 + 120);
  v19 = fw_memory_HeapManager_Allocate(*v8, 24, 16, 0);
  *(_QWORD*)(v19 + 8) = a1;
  *(_QWORD*)(v19 + 16) = 0;
  *(_QWORD*)v19 = game_zview_CharacterController_StateGuard_DamageN_vtable;
  v36 = (__int64*)v34[4];
  v35 = v34[5];
  if ((unsigned __int64)v36 >= v35) {
    v38 = v34[3];
    v39 = (char*)v36 - v38;
    v40 = ((__int64)v36 - v38) >> 3;
    v41 = v40 + 1;
    if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
      goto LABEL_74;
    }
    v42 = v35 - v38;
    if (v42 >> 2 > v41) {
      v41 = v42 >> 2;
    }
    if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
      v43 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v43 = v41;
    }
    if (v43 != 0) {
      if (v43 >> 61 != 0) {
        goto LABEL_75;
      }
      v44 = v19;
      v45 = fw_memory_HeapManager_Allocate(*v8, 8 * v43, 16, 0);
      v19 = v44;
    }
    else {
      v45 = 0;
    }
    v46 = v45 + 8 * v43;
    v47 = (__int64)&v39[v45 + -8 * v40];
    *(_QWORD*)&v39[v45] = v19;
    v37 = (__int64)&v39[v45 + 8];
    memcpy(v47, v38, v39);
    v34[3] = v47;
    v34[4] = v37;
    v34[5] = v46;
    if (v38 != 0) {
      v48 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v48);
    }
  }
  else {
    *v36 = v19;
    v37 = (__int64)(v36 + 1);
  }
  v34[4] = v37;
  v49 = *(_QWORD**)(a1 + 120);
  v19 = fw_memory_HeapManager_Allocate(*v8, 16, 16, 0);
  *(_QWORD*)v19 = game_zview_CharacterController_StateGuard_Loop_vtable;
  *(_QWORD*)(v19 + 8) = a1;
  v52 = (__int64*)v49[4];
  v51 = v49[5];
  if ((unsigned __int64)v52 < v51) {
    *v52 = v19;
    v53 = (__int64)(v52 + 1);
    goto LABEL_67;
  }
  v54 = v49[3];
  v55 = (char*)v52 - v54;
  v56 = ((__int64)v52 - v54) >> 3;
  v57 = v56 + 1;
  if ((unsigned __int64)(v56 + 1) >> 61 != 0) {
  LABEL_74:
    GameRoutine_cfa280();
  }
  v58 = v51 - v54;
  if (v58 >> 2 > v57) {
    v57 = v58 >> 2;
  }
  if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
    v59 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v59 = v57;
  }
  if (v59 != 0) {
    if (v59 >> 61 == 0) {
      v60 = v19;
      v61 = fw_memory_HeapManager_Allocate(*v8, 8 * v59, 16, 0);
      v19 = v60;
      goto LABEL_63;
    }
  LABEL_75:
    GameRoutine_60a210(v19);
  }
  v61 = 0;
LABEL_63:
  v62 = v61 + 8 * v59;
  v63 = (__int64)&v55[v61 + -8 * v56];
  *(_QWORD*)&v55[v61] = v19;
  v53 = (__int64)&v55[v61 + 8];
  memcpy(v63, v54, v55);
  v49[3] = v63;
  v49[4] = v53;
  v49[5] = v62;
  if (v54 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v64 = 56;
    }
    *(__n128*)&v50 = nn_mem_StandardAllocator_Free_alt1(*v8 + v64);
  }
LABEL_67:
  v49[4] = v53;
  result = *(_QWORD*)(a1 + 120);
  if (*(_BYTE*)(result + 12) != 1 || *(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 16) = 0;
    *(_BYTE*)(result + 20) = 1;
  }
  if ((*(_BYTE*)(result + 96) & 1) == 0 && (*(_BYTE*)(result + 97) & 1) != 0) {
    return WaitRelease_cfa2a0(v50);
  }
  return result;
}

float CharacterController_StateGuard_Start_Unknown4(__int64 a1)
{
  long double v2;
  __int64 v3;
  float result;

  *(float*)&v2 =
      GameRoutine_d1cbc0(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                                      8LL) +
                                           8LL) +
                                8LL) +
                     344LL),
          501870813) /
      60.0;
  if (*(float*)(a1 + 16) >= *(float*)&v2) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 120LL);
    if (*(_BYTE*)(v3 + 12) != 1 || *(_DWORD*)(v3 + 8) != 2) {
      *(_DWORD*)(v3 + 16) = 2;
      *(_BYTE*)(v3 + 20) = 1;
    }
    if ((*(_BYTE*)(v3 + 96) & 1) == 0 && (*(_BYTE*)(v3 + 97) & 1) != 0) {
      WaitRelease_cfa2a0(v2);
    }
  }
  result =
      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) +
                                      8LL) +
                           8LL) +
                228LL) +
      *(float*)(a1 + 16);
  *(float*)(a1 + 16) = result;
  return result;
}

#pragma GCC visibility pop
