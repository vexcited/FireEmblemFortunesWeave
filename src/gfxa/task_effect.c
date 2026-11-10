#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_20();
__int64 GameRoutine_5d3770(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_b5ce20();
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN** GameData_212e470[15];
extern _UNKNOWN** GameData_212e478[14];
extern _UNKNOWN** GameData_212e480[13];
extern _UNKNOWN** GameData_212e488[12];
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e498[10];
extern _UNKNOWN** GameData_212e4a0[9];
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4b8[6];
extern _UNKNOWN** GameData_212e4c0[5];
extern _UNKNOWN** GameData_212e848[11];
extern _UNKNOWN** GameData_212e878[5];
extern __int64 (*GameData_1fc64c0[])();
extern __int64 (*GameData_1fc6540[])();
extern __int64 (*GameData_1fc65c0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern unsigned int GameData_1b63834[6];
__int64 gfxa_TaskEffect_Impl_Impl(__int64 a1, __int64 a2);

__int64 gfxa_TaskEffect_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _OWORD* v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  void (**v28)(__int64);
  void (**v29)(__int64, __int64, __int64, __int64, __int64);
  void (**v30)(__int64);
  void (**v31)(__int64);
  _UNKNOWN** v32;
  unsigned __int64 v33;
  void (**v34)(__int64);
  void (**v35)(__int64, __int64);
  void (**v36)(__int64, bool);
  void (**v37)(__int64, bool);
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 result;
  long double v42;
  __int64 v43;
  __int64 v44;
  _QWORD v45[4];
  _QWORD* v46;
  _QWORD v47[2];
  __int64 v48;
  __int64 v49;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_604020(a1 + 16);
  *(_QWORD*)(a1 + 136) = -1;
  GameRoutine_604020(a1 + 144);
  *(_QWORD*)(a1 + 264) = -1;
  GameRoutine_604020(a1 + 272);
  *(_QWORD*)(a1 + 392) = -1;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_DWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  v3 = *eft_g_effectSystem_ptr[0];
  *(_QWORD*)(a1 + 520) = 0;
  *(_DWORD*)(a1 + 528) = 0;
  GameRoutine_5d3770(*(_QWORD*)(v3 + 96), 0, 23, GameRoutine_b5ce20);
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc64c0;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 16, *game_g_frame_clock_ptr[0] + 568, v47);
  *(_QWORD*)(a1 + 136) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 16);
  if (v46 == v45) {
    v5 = 32;
  }
  else {
    if (v46 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v46 + v5))((__int64)v46);
LABEL_8:
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc6540;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  GameRoutine_604060(a1 + 144, *v4 + 568, v47);
  *(_QWORD*)(a1 + 264) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 144);
  if (v46 == v45) {
    v6 = 32;
  }
  else {
    if (v46 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v46 + v6))((__int64)v46);
LABEL_15:
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc65c0;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  GameRoutine_604060(a1 + 272, *v4 + 568, v47);
  *(_QWORD*)(a1 + 392) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 272);
  if (v46 == v45) {
    v7 = 32;
    goto LABEL_21;
  }
  if (v46 != nullptr) {
    v7 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v46 + v7))((__int64)v46);
  }
  DecalObject_a91100((__int64*)(a1 + 400), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 1224);
  DecalObject_a91100((__int64*)(a1 + 512), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 144);
  DecalObject_a91100((__int64*)(a1 + 456), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 1224);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  *(_QWORD*)(v9 + 128) = 0;
  *(_DWORD*)(v9 + 136) = 0;
  v10 = GameData_212c2b0;
  v11 = *((_OWORD*)GameData_212c2b0 + 1);
  v12 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)GameData_212c2b0);
  v13 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)GameData_212c2b0 + 16);
  *(_OWORD*)v9 = *(_OWORD*)GameData_212c2b0;
  *(_OWORD*)(v9 + 16) = v11;
  *(_OWORD*)(v9 + 32) = v12;
  *(_OWORD*)(v9 + 48) = v13;
  v14 = v10[1];
  v15 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v16 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_OWORD*)(v9 + 64) = *v10;
  *(_OWORD*)(v9 + 80) = v14;
  *(_OWORD*)(v9 + 96) = v15;
  *(_OWORD*)(v9 + 112) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v17 = *(_QWORD*)(a1 + 520);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
  v19 = *v10;
  v20 = v10[1];
  v21 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v22 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_QWORD*)(v18 + 128) = 0;
  *(_DWORD*)(v18 + 136) = 0;
  *(_OWORD*)v18 = v19;
  *(_OWORD*)(v18 + 16) = v20;
  *(_OWORD*)(v18 + 32) = v21;
  *(_OWORD*)(v18 + 48) = v22;
  v23 = v10[1];
  v24 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v25 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_OWORD*)(v18 + 64) = *v10;
  *(_OWORD*)(v18 + 80) = v23;
  *(_OWORD*)(v18 + 96) = v24;
  *(_OWORD*)(v18 + 112) = v25;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
  v26 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       336, 16, 0);
  *(_QWORD*)v26 = 0;
  *(_QWORD*)(v26 + 8) = 0;
  v27 = v26;
  *(_DWORD*)(v26 + 16) = -1;
  *(_QWORD*)(v26 + 324) = 0;
  v28 = (void (**)(__int64))GameData_212e490[0];
  (*(void (**)(__int64))GameData_212e490[0])(v26 + 24);
  v29 = (void (**)(__int64, __int64, __int64, __int64,
                   __int64))GameData_212e4b8[0];
  (*(void (**)(__int64, __int64, __int64, __int64,
               __int64))GameData_212e4b8[0])(v27 + 24, 5, 6, 1, 6);
  v30 = (void (**)(__int64))GameData_212e498[0];
  (*(void (**)(__int64))GameData_212e498[0])(v27 + 32);
  v31 = (void (**)(__int64))GameData_212e4a0[0];
  (*(void (**)(__int64))GameData_212e4a0[0])(v27 + 36);
  v32 = GameData_212e4a8[0];
  (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(v27 + 36, 0, 1);
  (*v28)(v27 + 40);
  (*v29)(v27 + 40, 5, 2, 1, 6);
  (*v30)(v27 + 48);
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
               _QWORD))GameData_212e848[0])(v27 + 48, 0, 1, 1, 1, 0);
  (*v31)(v27 + 52);
  ((void (*)(__int64, _QWORD, __int64))*v32)(v27 + 52, 0, 1);
  v33 = 0;
  v34 = (void (**)(__int64))GameData_212e470[0];
  v35 = (void (**)(__int64, __int64))GameData_212e488[0];
  v36 = (void (**)(__int64, bool))GameData_212e478[0];
  v37 = (void (**)(__int64, bool))GameData_212e480[0];
  v38 = v27 + 56;
  do {
    (*v34)(v38);
    v40 = (v33 & 7) - 1;
    if (v40 <= 5 && ((0x2Du >> v40) & 1) != 0) {
      v39 = GameData_1b63834[v40];
    }
    else {
      v39 = (unsigned int)(v33 & 7) + 1;
    }
    (*v35)(v38, v39);
    (*v36)(v38, (v33 & 8) != 0);
    (*v37)(v38, v33++ > 0xF);
    v38 += 8;
  } while (v33 != 32);
  (*(void (**)(__int64))GameData_212e4c0[0])(v27 + 320);
  (*(void (**)(__int64, __int64))GameData_212e878[0])(v27 + 320, 1);
  (*v34)(v27 + 312);
  (*v35)(v27 + 312, 4);
  (*v36)(v27 + 312, true);
  result = ((__int64 (*)(__int64, _QWORD))*v37)(v27 + 312, 0);
  v43 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = v27;
  if (v43 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v42);
  }
  return result;
}

#pragma GCC visibility pop
