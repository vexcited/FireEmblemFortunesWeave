#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__attribute__((swiftcall)) void MindBase_ed77c0(PSEUDO_X8, _QWORD* result, int);
__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8);
__int64* GameHr_1005520(_QWORD*, __int64);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _DWORD* GameData_212d558;
extern _QWORD GameData_1b018e8[4];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1a8e364;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6120;
extern __int64 (*CmdBtlCamera_Destructor_ptr[])();
extern __int64 (*GameData_1fec818[])();
extern __int64 (*game_map_anonymous_MapTransition_vtable[])();
extern __int64* GameData_212d550;
extern __int64* GameData_212e460[2];
extern __int64* GameData_212e740[2];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4c0[7];
extern __int64* GameData_212f7d8[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c7f0[3];
extern __int64 GameData_212e438;
extern __int64 GameData_212f528[3];
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
int __cxa_guard_acquire(__int64);
void GameRoutine_8232c0(__int64*);
void MapTransition_823980(__int64, _QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) GameRoutine_e66f60();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_cmdbtl_e7f4d0(__int64 a1);
__attribute__((swiftcall)) void game_cmdbtl_ed78e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2);
void game_cmdbtl_1004e00(_QWORD* a1);

void game_cmdbtl_e7f4d0(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
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
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int128 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
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
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;

  v2 = GameData_212e740[0];
  *(_QWORD*)(a1 + 96) = 1065353216;
  *(_QWORD*)(a1 + 104) = 0x100000000LL;
  *(_QWORD*)(a1 + 112) = 0x4248000041D80000LL;
  *(_QWORD*)(a1 + 120) = 0x41C0000042100000LL;
  *(_QWORD*)(a1 + 128) = 0x4110000041800000LL;
  v3 = GameData_212c2a0;
  *(_QWORD*)a1 = CmdBtlCamera_Destructor_ptr;
  *(_QWORD*)(a1 + 16) = v2 + 2;
  *(_QWORD*)(a1 + 24) = 0;
  *(_OWORD*)(a1 + 32) = GameData_1a83090;
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_QWORD*)(a1 + 152) = 1092616192;
  v4 = v3[1];
  *(_QWORD*)(a1 + 176) = *v3;
  *(_QWORD*)(a1 + 184) = v4;
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 192) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 200) = v5;
  v6 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
  *(_QWORD*)(a1 + 224) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  *(_QWORD*)(a1 + 232) = v6;
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 208) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 216) = v7;
  v8 = (__int64*)GameData_212c2b0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v11 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8);
  v10 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8);
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v8);
  v14 = *v8;
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8 + 8);
  *(_QWORD*)(a1 + 256) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 8);
  *(_QWORD*)(a1 + 264) = v10;
  v17 = *v8;
  v18 = v8[1];
  *(_QWORD*)(a1 + 304) = v14;
  *(_QWORD*)(a1 + 312) = v9;
  v19 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v8);
  *(_QWORD*)(a1 + 240) = v17;
  *(_QWORD*)(a1 + 248) = v18;
  v21 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v8);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8);
  *(_QWORD*)(a1 + 352) = v13;
  *(_QWORD*)(a1 + 360) = v19;
  *(_QWORD*)(a1 + 288) = v20;
  *(_QWORD*)(a1 + 296) = v12;
  v23 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 16);
  *(_QWORD*)(a1 + 336) = v16;
  *(_QWORD*)(a1 + 344) = v21;
  *(_QWORD*)(a1 + 272) = v22;
  *(_QWORD*)(a1 + 280) = v15;
  *(_QWORD*)(a1 + 320) = v11;
  *(_QWORD*)(a1 + 328) = v23;
  *(_BYTE*)(a1 + 148) = 1;
  *(_OWORD*)(a1 + 64) = GameData_1a83610;
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  v24 = GameData_212e438;
  *(_BYTE*)(a1 + 149) = 1;
  *(_QWORD*)(a1 + 140) = 0x469C40003DCCCCCDLL;
  *(_DWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_BYTE*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 376) = 1023;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 408) = 1023;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 16) = v24 + 16;
  v25 = (__int64*)GameData_212c7f0[0];
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 544) = 1065353216;
  v26 = *v25;
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_DWORD*)(a1 + 552) = 0;
  if (v26 == 0) {
    v28 = fw_memory_HeapManager_Allocate(*v27, 16, 16, 0);
    v29 = *v25;
    v30 = (__int64*)v28;
    if (*v25 == 0) {
      *v25 = v28;
      v29 = v28;
      *GameData_212d558 = 1;
    }
    v31 = *v27;
    *v30 = (__int64)(GameData_212d550 + 2);
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate(v31, 40, 16, 0);
    v32[2] = 0;
    v32[3] = 0;
    v32[4] = 0;
    v30[1] = (__int64)v32;
    *v32 = game_map_anonymous_MapTransition_vtable;
    v32[1] = v32 + 2;
    v33 = *(_QWORD**)(v29 + 8);
    v34 = (_QWORD*)v33[2];
    v33 += 2;
    MapTransition_823980((__int64)(v33 - 1), v34);
    *v33 = 0;
    v33[1] = 0;
    *(v33 - 1) = v33;
    *((_DWORD*)v33 + 4) = 0;
    v35 = *v30;
    *v25 = (__int64)v30;
    (*(void (**)(__int64*))(v35 + 16))(v30);
    *(_BYTE*)(a1 + 504) = 1;
  }
  v36 = fw_memory_HeapManager_Allocate(*v27, 208, 16, 0);
  v37 = GameData_212f4c0[0];
  *(_QWORD*)(v36 + 8) = 0;
  *(_QWORD*)(v36 + 16) = 0;
  *(_QWORD*)v36 = v37 + 2;
  v38 = GameData_212f7d8[0];
  *(_QWORD*)(v36 + 40) = 0;
  *(_QWORD*)(v36 + 48) = 0;
  *(_QWORD*)(v36 + 56) = 0;
  *(_QWORD*)(v36 + 64) = 0;
  *(_QWORD*)(v36 + 72) = 0;
  *(_QWORD*)(v36 + 80) = 0;
  *(_QWORD*)(v36 + 32) = v38 + 2;
  v39 = v36 + 32;
  *(_QWORD*)(v36 + 96) = 0;
  *(_QWORD*)(v36 + 104) = 0x3F80000000000000LL;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v67 = v36;
    v68 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v36 = v67;
    if (v68 != 0) {
      v69 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v69;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v36 = v67;
    }
  }
  v40 = GameData_21a6120;
  *(_QWORD*)(a1 + 528) = v39;
  v41 = *(_QWORD*)(a1 + 536);
  *(_QWORD*)(v36 + 192) = 0;
  *(_QWORD*)(v36 + 200) = 0;
  *(_QWORD*)(v36 + 144) = 0;
  *(_QWORD*)(v36 + 152) = 0;
  *(_QWORD*)(v36 + 160) = 0;
  *(_QWORD*)(v36 + 168) = 0;
  *(_DWORD*)(v36 + 176) = 0;
  *(_QWORD*)(a1 + 536) = v36;
  *(_OWORD*)(v36 + 112) = v40;
  *(_QWORD*)(v36 + 128) = 0;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak(v41);
  }
  v42 = fw_memory_HeapManager_Allocate(*v27, 432, 16, 0);
  v43 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  v44 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(v42 + 112) = 1065353216;
  *(_QWORD*)(v42 + 120) = 0x100000000LL;
  *(_QWORD*)(v42 + 168) = 1092616192;
  *(_QWORD*)(v42 + 144) = 0x4110000041800000LL;
  *(_QWORD*)(v42 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v42 + 136) = 0x41C0000042100000LL;
  v45 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  v46 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
  *(_QWORD*)(v42 + 224) = v43;
  *(_QWORD*)(v42 + 232) = v44;
  *(_QWORD*)(v42 + 240) = v45;
  *(_QWORD*)(v42 + 248) = v46;
  v47 = v3[1];
  *(_QWORD*)(v42 + 192) = *v3;
  *(_QWORD*)(v42 + 200) = v47;
  v48 = GameData_212e460[0];
  v50 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8);
  v49 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  v51 = *v8;
  v53 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8);
  v52 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v8);
  v55 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
  v54 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8 + 8);
  v56 = *(_QWORD*)(a1 + 496);
  *(_QWORD*)(v42 + 16) = 0;
  *(_QWORD*)(v42 + 40) = 0;
  *(_DWORD*)(v42 + 152) = 0;
  *(_DWORD*)(v42 + 176) = 0;
  *(_QWORD*)(v42 + 408) = 0;
  *(_QWORD*)(v42 + 416) = 0;
  *(_QWORD*)(v42 + 384) = 0;
  *(_QWORD*)(v42 + 392) = 0;
  *(_QWORD*)(v42 + 156) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(a1 + 496) = v42;
  *(_QWORD*)v42 = v48 + 2;
  *(_QWORD*)(v42 + 8) = 0;
  v57 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
  v58 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  *(_OWORD*)(v42 + 48) = GameData_1a83090;
  *(_OWORD*)(v42 + 64) = (__typeof__(*(_OWORD*)(v42 + 64))){0};
  *(_OWORD*)(v42 + 80) = GameData_1a83610;
  *(_OWORD*)(v42 + 96) = (__typeof__(*(_OWORD*)(v42 + 96))){0};
  *(_QWORD*)(v42 + 208) = v57;
  *(_QWORD*)(v42 + 216) = v58;
  v59 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  *(_QWORD*)(v42 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 8);
  *(_QWORD*)(v42 + 280) = v49;
  v60 = *v8;
  v61 = v8[1];
  *(_QWORD*)(v42 + 320) = v51;
  *(_QWORD*)(v42 + 328) = v59;
  v62 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v8);
  *(_QWORD*)(v42 + 256) = v60;
  *(_QWORD*)(v42 + 264) = v61;
  v64 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v8);
  v63 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8);
  *(_QWORD*)(v42 + 368) = v53;
  *(_QWORD*)(v42 + 376) = v62;
  *(_QWORD*)(v42 + 304) = v63;
  *(_QWORD*)(v42 + 312) = v52;
  v66 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  v65 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 16);
  *(_QWORD*)(v42 + 352) = v55;
  *(_QWORD*)(v42 + 360) = v64;
  *(_QWORD*)(v42 + 424) = 1023;
  *(_QWORD*)(v42 + 392) = 1023;
  *(_QWORD*)(v42 + 400) = 0;
  *(_QWORD*)(v42 + 288) = v65;
  *(_QWORD*)(v42 + 296) = v54;
  *(_QWORD*)(v42 + 336) = v50;
  *(_QWORD*)(v42 + 344) = v66;
  *(_BYTE*)(v42 + 164) = 1;
  *(_BYTE*)(v42 + 165) = 1;
  *(_QWORD*)(v42 + 32) = v24 + 16;
  *(_QWORD*)(a1 + 488) = v42 + 32;
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak(v56);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 8LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 488) + 92LL) = 0;
  GameRoutine_8232c0(*(__int64**)(a1 + 488));
}

__attribute__((swiftcall)) void game_cmdbtl_ed78e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                   int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  signed __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  v3 = a2;
  v5 = a3;
  v6 = 0;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  while (2) {
    MindBase_ed77c0((void*)(&v40_.v40), a1, v6);
    v7 = v40_.v41;
    if (v40_.v41 == 0) {
      goto LABEL_4;
    }
    v8 = std___1___shared_weak_count_lock(v40_.v41);
    if (v8 == 0) {
      goto LABEL_3;
    }
    v9 = v8;
    if (v40_.v40 == 0) {
      goto LABEL_58;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(v40_.v40 + 16) + 440LL);
    if (v10 != 0 &&
        (unsigned __int64)(v11 = *(unsigned __int8*)(v10 + 16)) <= 3) {
      v12 = GameData_1b018e8[v11];
    }
    else {
      v12 = 392;
    }
    if (*(_DWORD*)(GameData_2203490 + v12 + 672) != v3) {
      goto LABEL_58;
    }
    v13 = v5;
    v14 = (__int64*)*v5;
    v15 = (__int64*)v13[1];
    if (v14 == v15) {
      goto LABEL_38;
    }
    do {
      v16 = *v14;
      v17 = v14[1];
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
      }
      if (v40_.v41 != 0) {
        v18 = std___1___shared_weak_count_lock(v40_.v41);
        if (v18 != 0) {
          v19 = v40_.v40;
        }
        else {
          v19 = 0;
        }
        if (v17 == 0) {
        LABEL_28:
          v21 = v19 == 0;
          if (v18 == 0) {
            goto LABEL_30;
          }
          goto LABEL_29;
        }
      }
      else {
        v19 = 0;
        v18 = 0;
        if (v17 == 0) {
          goto LABEL_28;
        }
      }
      v20 = std___1___shared_weak_count_lock(v17);
      if (v20 == 0) {
        goto LABEL_28;
      }
      v21 = v19 == v16;
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v22);
      }
      if (v18 == 0) {
      LABEL_30:
        if (v17 == 0) {
          goto LABEL_32;
        }
      LABEL_31:
        std___1___shared_weak_count___release_weak(v17);
        goto LABEL_32;
      }
    LABEL_29:
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_30;
      }
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
      if (v17 != 0) {
        goto LABEL_31;
      }
    LABEL_32:
      if (v21) {
        goto LABEL_37;
      }
      v14 += 2;
    } while (v14 != v15);
    v14 = v15;
  LABEL_37:
    v3 = a2;
    v15 = (__int64*)a3[1];
  LABEL_38:
    v23 = v14 == v15;
    v5 = a3;
    if (v23) {
      v24 = a3[2];
      if ((unsigned __int64)v15 >= v24) {
        v27 = *a3;
        v28 = (signed __int64)v15 - *a3;
        v29 = (v28 >> 4) + 1;
        if (v29 >> 60 != 0) {
          GameRoutine_e66f60();
        }
        v30 = v24 - v27;
        if (v30 >> 3 > v29) {
          v29 = v30 >> 3;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF0LL) {
          v31 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v32 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v31, 16, 0);
        v33 = v40_.v41;
        v34 = (_QWORD*)(v32 + v28);
        *v34 = v40_.v40;
        v34[1] = v33;
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v35 = (__int64)&v34[-2 * (v28 >> 4)];
        v36 = v32 + 16 * v31;
        v26 = v34 + 2;
        memcpy(v35, v27, v28);
        v5 = a3;
        *a3 = v35;
        a3[2] = v36;
        if (v27 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v27);
        }
      }
      else {
        v25 = v40_.v41;
        *v15 = v40_.v40;
        v15[1] = v25;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
        }
        v26 = v15 + 2;
      }
      v5[1] = (__int64)v26;
      v3 = a2;
    }
  LABEL_58:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      v7 = v40_.v41;
      if (v40_.v41 == 0) {
        goto LABEL_4;
      }
      goto LABEL_3;
    }
    v7 = v40_.v41;
    if (v40_.v41 != 0) {
    LABEL_3:
      std___1___shared_weak_count___release_weak(v7);
    }
  LABEL_4:
    if (++v6 != 4) {
      continue;
    }
    break;
  }
}

void game_cmdbtl_1004e00(_QWORD* a1)
{
  int v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  unsigned __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64* v40;
    __int64* v41;
  } v40_;
  struct {
    __int64 (**v42)();
    __int64* v43;
    __int64* v44;
    char gap88_[8];
    unsigned __int64* v45;
  } v42_;
  __int64 v46;

  v42_.v43 = (__int64*)&GameData_1a8e364;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212f528[0] + 16LL);
  v42_.v42 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a8e364);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v42_.v42)) != 0) {
    v4 = *(_DWORD*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  v5 = GameRoutine_9db9e0(2u, v4);
  game_ec1260((void*)((__int64*)&v40_.v40));
  v6 = v40_.v40;
  v7 = v40_.v41;
  if (v40_.v40 == v40_.v41) {
    goto LABEL_59;
  }
  v8 = 0;
  v35 = v5 & ~(v5 >> 31);
  v36 = v2 + 1;
  do {
    if (GameHr_1005520(a1, *v6) == nullptr) {
      goto LABEL_7;
    }
    v9 = *v6;
    v38_.v38 = 0;
    v38_.v39 = 0;
    v46 = v9;
    v42_.v42 = GameData_1fec818;
    v42_.v43 = &v46;
    v42_.v44 = &v38_.v38;
    v42_.v45 = (unsigned __int64*)&v42_.v42;
    CmdbtlPartyNatives_e9a800((_QWORD*)*GameData_212ea58, (__int64)&v42_.v42);
    if (v42_.v45 == (unsigned __int64*)&v42_.v42) {
      v10 = 32;
    }
    else {
      if (v42_.v45 == nullptr) {
        goto LABEL_14;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v42_.v45 + v10))((__int64)v42_.v45);
  LABEL_14:
    if (v38_.v38 != 0 && v8 <= (signed __int32)*(_DWORD*)(v38_.v38 + 408)) {
      v8 = *(_DWORD*)(v38_.v38 + 408);
    }
    v11 = v38_.v39;
    if (v38_.v39 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  LABEL_7:
    ++v6;
  } while (v6 != v7);
  v6 = v40_.v40;
  if (v8 != 0) {
    v12 = v40_.v41;
    if (v40_.v40 != v40_.v41) {
      v37 = 0;
      v13 = nullptr;
      v14 = 0;
      while (2) {
        if (GameHr_1005520(a1, *v6) == nullptr) {
          goto LABEL_23;
        }
        v15 = *v6;
        v38_.v38 = 0;
        v38_.v39 = 0;
        v46 = v15;
        v42_.v42 = GameData_1fec818;
        v42_.v43 = &v46;
        v42_.v44 = &v38_.v38;
        v42_.v45 = (unsigned __int64*)&v42_.v42;
        CmdbtlPartyNatives_e9a800((_QWORD*)*GameData_212ea58,
                                  (__int64)&v42_.v42);
        if (v42_.v45 == (unsigned __int64*)&v42_.v42) {
          v16 = 32;
        LABEL_29:
          (*(void (**)(__int64))(*v42_.v45 + v16))((__int64)v42_.v45);
        }
        else if (v42_.v45 != nullptr) {
          v16 = 40;
          goto LABEL_29;
        }
        if (v38_.v38 != 0 && *(_DWORD*)(v38_.v38 + 408) == v8) {
          if ((unsigned __int64)v13 >= v37) {
            v18 = (unsigned __int64)v13 - v14;
            v19 = ((__int64)v13 - v14) >> 3;
            v20 = v19 + 1;
            if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
              GameRoutine_6c1f60();
            }
            v21 = v14;
            if ((__int64)(v37 - v14) >> 2 > v20) {
              v20 = (__int64)(v37 - v14) >> 2;
            }
            if (v37 - v14 >= 0x7FFFFFFFFFFFFFF8LL) {
              v22 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v22 = v20;
            }
            if (v22 != 0) {
              if (v22 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v23 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
            }
            else {
              v23 = 0;
            }
            v37 = v23 + 8 * v22;
            v24 = v23 + v18 - 8 * v19;
            *(_QWORD*)(v23 + v18) = *v6;
            v13 = (__int64*)(v23 + v18 + 8);
            memcpy(v24, v21, v18);
            if (v21 != 0) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v21);
            }
            v14 = v24;
            v17 = v38_.v39;
            if (v38_.v39 == 0) {
              goto LABEL_23;
            }
          LABEL_35:
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              std___1___shared_weak_count___release_weak(v17);
            }
            goto LABEL_23;
          }
          *v13++ = *v6;
        }
        v17 = v38_.v39;
        if (v38_.v39 != 0) {
          goto LABEL_35;
        }
      LABEL_23:
        if (++v6 == v12) {
          goto LABEL_54;
        }
        continue;
      }
    }
    v14 = 0;
    v13 = nullptr;
  LABEL_54:
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v26 = game_map_MapRandom_instance__ptr[0];
    v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 4) = v27;
    v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 8) = v28;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 12) = v30;
    v31 = v30 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    v32 = GameHr_1005520(
        a1, *(_QWORD*)(v14 +
                       8LL * (unsigned int)(v31 % (int)(((unsigned __int64)v13 -
                                                         v14) >>
                                                        3))));
    if (v32 != nullptr) {
      *((_DWORD*)v32 + 5) += v35 * v36;
    }
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v14);
    v6 = v40_.v40;
  }
LABEL_59:
  if (v6 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                                  (__int64)v6);
  }
}

#pragma GCC visibility pop
