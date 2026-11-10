#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
_QWORD* GameRoutine_604020_alt1(_QWORD* result) __asm__("GameRoutine_604020");
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 Config_bc4f00(__int64, unsigned int, unsigned int);
__int64 Config_bc52e0(_QWORD*, int, unsigned int, int);
__int64 GameRoutine_5fc230_alt1(__int64 result) __asm__("GameRoutine_5fc230");
__int64 GameRoutine_5fe120(__int64, unsigned int, unsigned int, _QWORD*,
                           __int64);
__int64 GameRoutine_5fe1a0(__int64, unsigned int, unsigned int, _QWORD*,
                           __int64);
__int64 GameRoutine_604060_alt1(__int64, __int64*,
                                __int64) __asm__("GameRoutine_604060");
__int64 GameRoutine_615760_alt1(__int64, __int64) __asm__("GameRoutine_615760");
__int64 GameRoutine_ad5280(__int64*);
__int64 Manager_bc5490(__int64, __int64, int32x4_t*, __int128*, float, float);
__int64 ResourceBuilder_b5f0c0();
__int64 ResourceBuilder_b5f0f0(__int64 result, __int64, int);
__int64 TaskEffect_b5f330_alt1(__int64*, _QWORD*) __asm__("TaskEffect_b5f330");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c568;
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e828[15];
extern _UNKNOWN** GameData_212e830[14];
extern _UNKNOWN** GameData_212e838[13];
extern _UNKNOWN** GameData_212e840[12];
extern _UNKNOWN** GameData_212e850[10];
extern _UNKNOWN** GameData_212e858[9];
extern _UNKNOWN** GameData_212e860[8];
extern _UNKNOWN** GameData_212e868[7];
extern _UNKNOWN** GameData_212e870[6];
extern __int64 (*GameData_1fc63c0[])();
extern __int64 (*GameData_1fc6440[])();
extern __int64 (*GameData_21a4c58)(__int64, __int64, _QWORD);
extern __int64 eft_g_effectSystem;
void GameRoutine_5b28f0();
void GameRoutine_5d3320();
void GameRoutine_5d3420();
__int64 gfxa_TaskEffect_CompOffscreen_Impl_Impl(__int64 a1, __int64 a2);
__int64* TaskEffect_b5ce20(__int64* result);
__int64 TaskEffect_b5e3a0(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5);
__int64 TaskEffect_b5f330(__int64* a1, __int64* a2);

__int64 gfxa_TaskEffect_CompOffscreen_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64** v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _OWORD* v8;
  _OWORD* v9;
  __int64 v10;
  _OWORD* v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 (**v17)();
    __int64 v18;
    char gap16_[16];
    __int64 (***v19)();
  } v17_;
  struct {
    _QWORD v20[2];
    __int64 v21;
    __int64 v22;
  } v20_;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v3 = (__int64**)(a1 + 8);
  GameRoutine_604020_alt1((_QWORD*)(a1 + 24));
  *(_QWORD*)(a1 + 144) = -1;
  GameRoutine_604020_alt1((_QWORD*)(a1 + 152));
  *(_QWORD*)(a1 + 272) = -1;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20[0] = 0;
  v20_.v20[1] = 0;
  v17_.v17 = GameData_1fc63c0;
  v17_.v19 = &v17_.v17;
  GameRoutine_5fc230_alt1((__int64)v20_.v20);
  if (v17_.v19 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v17_.v19)[6])(v17_.v19,
                                                             v20_.v20);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060_alt1(a1 + 24, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                          (__int64)v20_.v20);
  *(_QWORD*)(a1 + 144) =
      GameRoutine_615760_alt1(*(_QWORD*)(*v4 + 552), a1 + 24);
  if (v17_.v19 == &v17_.v17) {
    v5 = 4;
  }
  else {
    if (v17_.v19 == nullptr) {
      goto LABEL_8;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v17_.v19)[v5])((__int64)v17_.v19);
LABEL_8:
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20[0] = 0;
  v20_.v20[1] = 0;
  v17_.v17 = GameData_1fc6440;
  v17_.v19 = &v17_.v17;
  GameRoutine_5fc230_alt1((__int64)v20_.v20);
  if (v17_.v19 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v17_.v19)[6])(v17_.v19,
                                                             v20_.v20);
  }
  GameRoutine_604060_alt1(a1 + 152, (__int64*)(*v4 + 568), (__int64)v20_.v20);
  *(_QWORD*)(a1 + 272) =
      GameRoutine_615760_alt1(*(_QWORD*)(*v4 + 552), a1 + 152);
  if (v17_.v19 == &v17_.v17) {
    v6 = 4;
    goto LABEL_14;
  }
  if (v17_.v19 != nullptr) {
    v6 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v17_.v19)[v6])((__int64)v17_.v19);
  }
  DecalObject_a91100((__int64*)(a1 + 280), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 48);
  v7 = *(_QWORD*)(a1 + 280);
  v8 = (_OWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7);
  v9 = GameData_212c568;
  *v8 = *(_OWORD*)GameData_212c568;
  v8[1] = *v9;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
  v10 = *(_QWORD*)(a1 + 288);
  v11 = (_OWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10);
  *v11 = *v9;
  v11[1] = *v9;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  gfx_shader_Archive_CreateShader((void*)(&v17_.v17),
                                  *(__int64**)(*(_QWORD*)a1 + 13408LL),
                                  (__int64)"filter", 6u, (__int64)"copy", 4u);
  v12 = v17_.v17;
  v13 = v17_.v18;
  v14 = *(_QWORD*)(a1 + 16);
  v17_.v17 = nullptr;
  v17_.v18 = 0;
  *(_QWORD*)(a1 + 8) = v12;
  *(_QWORD*)(a1 + 16) = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = v17_.v18;
  if (v17_.v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  return GameRoutine_ad5280(*v3);
}

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

__int64* TaskEffect_b5ce20(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  _QWORD* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
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
  _QWORD v63[2];

  v1 = result[3];
  v2 = result[1];
  v3 = result;
  v4 = *(__int64**)v1;
  v5 = *(_BYTE**)(v2 + 160);
  if (*(_BYTE*)(v1 + 9) == 1) {
    v6 = *(_BYTE**)(*(_QWORD*)(v2 + 568) + 792LL);
    if (v6 == nullptr || (*v6 & 2) == 0) {
      return result;
    }
    v32 = *result;
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e828[0])(
        *(_QWORD*)(*result + 208), 3, 0);
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e830[0])(
        *(_QWORD*)(v32 + 208), 3, 0);
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e838[0])(
        *(_QWORD*)(v32 + 208), 3, 0);
    (*(void (**)(_QWORD, __int64*))GameData_212e840[0])(*(_QWORD*)(v32 + 208),
                                                        v4 + 39);
    if (v5[2206] == 1) {
      v33 = 1;
    }
    else {
      v33 = -1;
    }
    if (v5[2206] != 0) {
      v34 = v33;
    }
    else {
      v34 = 0;
    }
    if (v5[2200] != 0) {
      v35 = v34;
    }
    else {
      v35 = -1;
    }
    ResourceBuilder_b5f0f0((__int64)v4, *v3, v35);
    v36 = *v4;
    v63[0] = *(_QWORD*)(*v4 + 72);
    v63[1] = 0;
    v37 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(v3) + 340);
    v38 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(v3) + 344);
    if (v37 != -1 && (*(_BYTE*)(v36 + 88) & 1) == 0) {
      GameRoutine_5fe120(*v3, v37, 0, v63, *(_QWORD*)(v36 + 80));
      *(_BYTE*)(v36 + 88) = 1;
    }
    if (v38 != -1 && (*(_BYTE*)(v36 + 89) & 1) == 0) {
      GameRoutine_5fe120(*v3, v38, 4u, v63, *(_QWORD*)(v36 + 80));
      *(_BYTE*)(v36 + 89) = 1;
    }
    v39 = *v4;
    v63[0] = *(_QWORD*)(*v4 + 24);
    v63[1] = 0;
    v40 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(v3) + 348);
    v41 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(v3) + 352);
    if (v40 != -1 && (*(_BYTE*)(v39 + 40) & 1) == 0) {
      GameRoutine_5fe120(*v3, v40, 0, v63, *(_QWORD*)(v39 + 32));
      *(_BYTE*)(v39 + 40) = 1;
    }
    if (v41 != -1 && (*(_BYTE*)(v39 + 41) & 1) == 0) {
      GameRoutine_5fe120(*v3, v41, 4u, v63, *(_QWORD*)(v39 + 32));
      *(_BYTE*)(v39 + 41) = 1;
    }
    v42 = (_QWORD*)v3[1];
    v43 = (__int64*)v4[1];
    if (v42[169] != 0) {
      v42 = (_QWORD*)v42[169];
    }
    v44 = *(_QWORD*)(v42[15] + 448LL);
    if (v44 != 0 && *(_BYTE*)(v44 + 445) == 1) {
      v45 = v42[20];
      v46 = strlen(v45 + 16);
      v47 = std___1___hash_memory(v45 + 16, v46);
      v48 = *(_QWORD*)(v44 + 360);
      v49 = v48;
      v50 = v48;
      while (v50 != *(_QWORD*)(v44 + 352)) {
        v51 = *(_QWORD*)(v50 - 16);
        v50 -= 16;
        v49 -= 16;
        if (v51 == v47) {
          goto LABEL_73;
        }
      }
    }
    goto LABEL_75;
  }
  if (*(_BYTE*)(v1 + 8) == 1) {
    v7 = *result;
    v8 = 8;
    v9 = *(_QWORD*)(*result + 208);
    if (v5[2201] == 0) {
      v8 = 0;
    }
    v10 = 16;
    if (v5[2203] == 0) {
      v10 = 0;
    }
    v11 = v8 | (unsigned __int8)v5[2202] | v10;
    GameData_21a4c58(v9, 3, 0);
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e830[0])(
        *(_QWORD*)(v7 + 208), 3, 0);
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e838[0])(
        *(_QWORD*)(v7 + 208), 3, 0);
    (*(void (**)(_QWORD, __int64*))GameData_212e840[0])(*(_QWORD*)(v7 + 208),
                                                        &v4[v11 + 7]);
    v12 = *v3;
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e4a8[0])((__int64)v4 + 52,
                                                               0, 0);
    (*(void (**)(__int64*, __int64, __int64, __int64,
                 __int64))GameData_212e4b8[0])(v4 + 5, 5, 2, 1, 2);
    (*(void (**)(__int64*, _QWORD, __int64, __int64, __int64,
                 __int64))GameData_212e848[0])(v4 + 6, 0, 1, 1, 1, 1);
    (*(void (**)(_QWORD, __int64*))GameData_212e850[0])(*(_QWORD*)(v12 + 208),
                                                        v4 + 5);
    (*(void (**)(_QWORD, __int64*))GameData_212e858[0])(*(_QWORD*)(v12 + 208),
                                                        v4 + 6);
    (*(void (**)(_QWORD, __int64))GameData_212e860[0])(*(_QWORD*)(v12 + 208),
                                                       (__int64)v4 + 52);
    *((_DWORD*)v4 + 4) = 5;
    TaskEffect_b5f330_alt1(v4, v3);
    v13 = (_QWORD*)v3[1];
    v14 = (_QWORD*)v4[1];
    if (v13[169] != 0) {
      v13 = (_QWORD*)v13[169];
    }
    v15 = *(_QWORD*)(v13[15] + 448LL);
    if (v15 != 0 && *(_BYTE*)(v15 + 445) == 1) {
      v16 = v13[20];
      v17 = strlen(v16 + 16);
      v18 = std___1___hash_memory(v16 + 16, v17);
      v19 = *(_QWORD*)(v15 + 360);
      v20 = v19;
      while (v20 != *(_QWORD*)(v15 + 352)) {
        v21 = *(_QWORD*)(v20 - 16);
        v20 -= 16;
        v19 -= 16;
        if (v21 == v18) {
          if (*(_QWORD*)(v15 + 360) == v19) {
            break;
          }
          v22 =
              *(_QWORD*)(v19 + 8) + 16LL * *(int*)(*(_QWORD*)(v19 + 8) + 16LL);
          v23 = (_QWORD*)(v22 + 24);
          v24 = (_QWORD*)(v22 + 32);
          goto LABEL_30;
        }
      }
    }
    v23 = (_QWORD*)(*v4 + 96);
    v24 = (_QWORD*)(*v4 + 104);
  LABEL_30:
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*v14 + 224LL))(*v14, 3, 4, *v23, *v24);
    return (__int64*)(*(__int64 (**)(__int64, __int64*))GameData_212e868[0])(
        *(_QWORD*)v4[1] + 8LL, v4 + 40);
  }
  v25 = *(_DWORD*)(v2 + 1024);
  v26 = *result;
  v27 = 8;
  v28 = *(_QWORD*)(*result + 208);
  if (v5[2201] == 0) {
    v27 = 0;
  }
  v29 = 16;
  if (v5[2203] == 0) {
    v29 = 0;
  }
  v30 = v27 | (unsigned __int8)v5[2202] | v29;
  GameData_21a4c58(v28, 3, 0);
  (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e830[0])(
      *(_QWORD*)(v26 + 208), 3, 0);
  (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e838[0])(
      *(_QWORD*)(v26 + 208), 3, 0);
  (*(void (**)(_QWORD, __int64*))GameData_212e840[0])(*(_QWORD*)(v26 + 208),
                                                      &v4[v30 + 7]);
  if (v5[2200] == 0) {
    if (v25 == 4) {
      v31 = 4;
      goto LABEL_66;
    }
    goto LABEL_62;
  }
  if (v5[2206] != 1) {
    if (v5[2206] == 0) {
      if (v25 == 4) {
        v31 = 2;
      }
      else {
        v31 = 0;
      }
      goto LABEL_66;
    }
  LABEL_62:
    v31 = -1;
    goto LABEL_66;
  }
  if (v25 == 4) {
    v31 = 3;
  }
  else {
    v31 = 1;
  }
LABEL_66:
  ResourceBuilder_b5f0f0((__int64)v4, *v3, v31);
  TaskEffect_b5f330_alt1(v4, v3);
  v52 = (_QWORD*)v3[1];
  v43 = (__int64*)v4[1];
  if (v52[169] != 0) {
    v52 = (_QWORD*)v52[169];
  }
  v53 = *(_QWORD*)(v52[15] + 448LL);
  if (v53 != 0 && *(_BYTE*)(v53 + 445) == 1) {
    v54 = v52[20];
    v55 = strlen(v54 + 16);
    v56 = std___1___hash_memory(v54 + 16, v55);
    v48 = *(_QWORD*)(v53 + 360);
    v49 = v48;
    v57 = v48;
    while (v57 != *(_QWORD*)(v53 + 352)) {
      v58 = *(_QWORD*)(v57 - 16);
      v57 -= 16;
      v49 -= 16;
      if (v58 == v56) {
      LABEL_73:
        if (v48 == v49) {
          break;
        }
        v59 = *v43;
        v60 = *(_QWORD*)(v49 + 8) + 16LL * *(int*)(*(_QWORD*)(v49 + 8) + 16LL);
        v61 = *(_QWORD*)(v60 + 24);
        v62 = *(_QWORD*)(v60 + 32);
        return (__int64*)(*(__int64 (**)(__int64, __int64, __int64, __int64,
                                         __int64))(*(_QWORD*)v59 + 224LL))(
            v59, 3, 4, v61, v62);
      }
    }
  }
LABEL_75:
  v59 = *v43;
  v61 = *(_QWORD*)(*v4 + 96);
  v62 = *(_QWORD*)(*v4 + 104);
  return (__int64*)(*(__int64 (**)(__int64, __int64, __int64, __int64,
                                   __int64))(*(_QWORD*)v59 + 224LL))(v59, 3, 4,
                                                                     v61, v62);
}

__int64 TaskEffect_b5e3a0(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
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
  _QWORD* v42;
  __int64* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _DWORD* v48;
  __int64 v49;
  _DWORD* v50;
  _DWORD* v51;
  _DWORD* v52;
  _DWORD* v53;
  _DWORD* v54;
  __int64 v55;
  _DWORD* v56;
  __int64 v57;
  _DWORD* v58;
  __int64 v59;
  _DWORD* v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  _DWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  _DWORD* v78;
  __int64 v79;
  int v80;
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
  __int64 (**v91)(__int64);
  __int64 (**v92)(__int64);
  __int64 (*v93)(__int64);
  int v94;
  __int64 (*v95)(__int64);
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned int v112;
  __int128 v113;
  float32x4_t v114;
  float32x2_t v115;
  __int128 v116;
  unsigned __int64 v117;
  __int64 v118;
  long double v119;
  __int64 v120;
  __int128 v121;
  __int128 v122;
  __int128 v123;
  long double v124;
  __int64 v125;
  float v126;
  float v127;
  __int64 v128;
  unsigned int v129;
  __int64 v130;
  unsigned int i;
  unsigned int v132;
  __int128 v133;
  float32x4_t v134;
  float32x2_t v135;
  __int128 v136;
  unsigned __int64 v137;
  __int64 v138;
  long double v139;
  __int64 v140;
  __int128 v141;
  __int128 v142;
  __int128 v143;
  long double v144;
  __int64 v145;
  float v146;
  float v147;
  __int64 v148;
  __int64 v149;
  unsigned int v150;
  __int64 v151;
  unsigned int j;
  __int64 v153;
  struct {
    _QWORD v155[2];
    __int16 v156;
    char gap18_[6];
    __int64 v157;
    __int64 v158;
    __int16 v159;
    char gap42_[6];
    __int64 v160;
    __int64 v161;
    __int16 v162;
    char gap66_[6];
    __int64 v163;
    __int64 v164;
    __int16 v165;
    char gap90_[6];
    __int64 v166;
    __int64 v167;
    __int16 v168;
    char gap114_[6];
    __int64 v169;
    __int64 v170;
    __int16 v171;
    char gap138_[6];
    __int64 v172;
    __int64 v173;
    __int16 v174;
    char gap162_[6];
    __int64 v175;
    __int64 v176;
    __int16 v177;
  } v155_;
  long double v178;
  struct {
    _QWORD v179[4];
    __int128 v180;
    __int128 v181;
  } v179_;
  struct {
    int32x4_t v182;
    __int128 v183;
    float32x4_t v184;
    __int128 v185;
    char gap336_[24];
    __int64 v186;
  } v182_;

  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(int*)(a1 + 416);
  v155_.v156 = 0;
  v155_.v159 = 0;
  v11 = a1 + 16 * v5;
  v12 = *a2;
  v155_.v162 = 0;
  v155_.v165 = 0;
  v155_.v166 = 0;
  v155_.v167 = 0;
  v155_.v168 = 0;
  v155_.v171 = 0;
  v155_.v174 = 0;
  v155_.v177 = 0;
  v14 = *(_QWORD*)(v11 + 424);
  v13 = *(_QWORD*)(v11 + 432);
  v155_.v155[0] = v14;
  v155_.v155[1] = v13;
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  v17 = a2[11];
  v19 = *(_QWORD*)(v16 + 24);
  v18 = *(_QWORD*)(v16 + 32);
  v155_.v157 = v19;
  v155_.v158 = v18;
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = v20 + 16LL * *(int*)(v20 + 16);
  v22 = a2[1];
  v24 = *(_QWORD*)(v21 + 24);
  v23 = *(_QWORD*)(v21 + 32);
  v155_.v160 = v24;
  v155_.v161 = v23;
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = v25 + 16LL * *(int*)(v25 + 8);
  v27 = a2[2];
  v29 = *(_QWORD*)(v26 + 16);
  v28 = *(_QWORD*)(v26 + 24);
  v155_.v172 = v29;
  v155_.v173 = v28;
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = v30 + 16LL * *(int*)(v30 + 16);
  v32 = a2[3];
  v34 = *(_QWORD*)(v31 + 24);
  v33 = *(_QWORD*)(v31 + 32);
  v155_.v169 = v34;
  v155_.v170 = v33;
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
  v103 = COERCE_AS(__typeof__(v103),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v106 = COERCE_AS(__typeof__(v106),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v111 = COERCE_AS(__typeof__(v111),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v72 = COERCE_AS(__typeof__(v72),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v84 = COERCE_AS(__typeof__(v84),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v98 = COERCE_AS(__typeof__(v98),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = v35 + 16LL * *(int*)(v35 + 16);
  v38 = *(_QWORD*)(v36 + 24);
  v37 = *(_QWORD*)(v36 + 32);
  v155_.v175 = v38;
  v155_.v176 = v37;
  v39 = a1 + 16LL * *(int*)(a1 + 472);
  v41 = *(_QWORD*)(v39 + 480);
  v40 = *(_QWORD*)(v39 + 488);
  v155_.v163 = v41;
  v155_.v164 = v40;
  v42 = *(_QWORD**)(a1 + 8);
  *v42 = v155_.v155;
  v42[1] = a4;
  *(_QWORD*)((char*)v42 + 324) = 0;
  v43 = eft_g_effectSystem_ptr[0];
  v44 = *((_DWORD*)a5 + 4);
  v45 = *eft_g_effectSystem_ptr[0];
  v46 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 96);
  v47 = *(unsigned int*)(v46 + 8);
  if ((int)v47 < 1) {
  LABEL_26:
    if (v44 == 16) {
      v67 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 32LL))(v67),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v68,
                                                                     v69),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v70 = *a4;
      LANES128(v182_.v182).n128_u64[0] = 0;
      LANES128(v182_.v182).n128_u64[1] = 0x3F80000000000000LL;
      (*(void (**)(__int64, _QWORD, int32x4_t*))(*(_QWORD*)v70 + 144LL))(
          v70, 0, &v182_.v182),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    v48 = *(_DWORD**)(v46 + 16);
    v49 = 0;
    v50 = v48 + 2;
    v51 = v48 + 3;
    v52 = v48 + 4;
    v53 = v48 + 5;
  LABEL_3:
    v54 = v50;
    v55 = v47;
    while ((*v54 & v44) == 0) {
      v54 += 634;
      if (--v55 == 0) {
        v56 = v51;
        v57 = v47;
        while ((*v56 & v44) == 0) {
          v56 += 634;
          if (--v57 == 0) {
            v58 = v52;
            v59 = v47;
            while ((*v58 & v44) == 0) {
              v58 += 634;
              if (--v59 == 0) {
                if (v49 == 28) {
                  goto LABEL_26;
                }
                v60 = v53;
                v61 = v47;
                while ((*v60 & v44) == 0) {
                  v60 += 634;
                  if (--v61 == 0) {
                    v49 += 4;
                    v50 += 4;
                    v51 += 4;
                    v52 += 4;
                    v53 += 4;
                    goto LABEL_3;
                  }
                }
                goto LABEL_17;
              }
            }
            goto LABEL_17;
          }
        }
        break;
      }
    }
  LABEL_17:
    if (*(_QWORD*)(*(_QWORD*)(v45 + 296) - 16LL) !=
        *(_QWORD*)(*(_QWORD*)(v45 + 296) - 24LL)) {
      v62 = 1976;
      v63 = 0;
      while (1) {
        if ((Config_bc4f00(v45, v63, 0xFFFFFFFF) & 1) != 0) {
          v64 = *(_QWORD*)(v45 + 96);
          v65 = *(unsigned int*)(v64 + 8);
          if ((int)v65 >= 1) {
            break;
          }
        }
      LABEL_19:
        ++v63;
        v62 += 4;
        if (v63 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v45 + 296) - 16LL) -
                             *(_QWORD*)(*(_QWORD*)(v45 + 296) - 24LL)) >>
            3) {
          v45 = *v43;
          goto LABEL_29;
        }
      }
      v66 = (_DWORD*)(*(_QWORD*)(v64 + 16) + v62);
      while ((*v66 & v44) == 0) {
        v66 += 634;
        if (--v65 == 0) {
          goto LABEL_19;
        }
      }
      v71 = (*(__int64 (**)(__int64))(*(_QWORD*)a2[14] + 16LL))(a2[14]),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v71 + 40LL))(v71),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = *v43;
      *(_QWORD*)(*v43 + 144) = v72;
    }
  LABEL_29:
    if (*(_QWORD*)(*(_QWORD*)(v45 + 296) - 16LL) !=
        *(_QWORD*)(*(_QWORD*)(v45 + 296) - 24LL)) {
      v73 = *((_DWORD*)a5 + 4);
      v74 = 2232;
      v75 = 0;
      while (1) {
        if ((Config_bc4f00(v45, v75, 0xFFFFFFFF) & 1) != 0) {
          v76 = *(_QWORD*)(v45 + 96);
          v77 = *(unsigned int*)(v76 + 8);
          if ((int)v77 >= 1) {
            break;
          }
        }
      LABEL_31:
        ++v75;
        v74 += 4;
        if (v75 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v45 + 296) - 16LL) -
                             *(_QWORD*)(*(_QWORD*)(v45 + 296) - 24LL)) >>
            3) {
          goto LABEL_39;
        }
      }
      v78 = (_DWORD*)(*(_QWORD*)(v76 + 16) + v74);
      while ((*v78 & v73) == 0) {
        v78 += 634;
        if (--v77 == 0) {
          goto LABEL_31;
        }
      }
      v79 = (*(__int64 (**)(__int64))(*(_QWORD*)a2[15] + 16LL))(a2[15]),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v79 + 40LL))(v79),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(*v43 + 152) = v80;
    }
  LABEL_39:
    if (*((_DWORD*)a5 + 4) == 16) {
      v81 = a3[2];
      v182_.v186 = *a4;
      v82 = (*(__int64 (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 32LL))(v82),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v85 = v84;
      v86 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v87 = (*(__int64 (**)(__int64))(*(_QWORD*)v86 + 32LL))(v86),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LANES128(v182_.v182).n128_u32[2] = 0;
      LANES128(v182_.v182).n128_u64[0] = 0;
      v88 = v87;
      v90 = v89;
      v91 = (__int64 (**)(__int64))GameData_212e778[0],
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LANES128(v182_.v182).n128_u32[3] =
          (*(__int64 (**)(void))GameData_212e778[0])(),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v92 = (__int64 (**)(__int64))GameData_212e780,
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v182_.v183 =
          ((unsigned int (*)(__int64))*GameData_212e780)(v88) | 0x100000000LL,
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(int32x4_t*)v179_.v179 = v182_.v182;
      v179_.v179[2] = v182_.v183;
      v93 = *v91;
      v43 = &eft_g_effectSystem;
      v94 = v93(v83),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v95 = *v92;
      HIDWORD(v179_.v179[1]) = v94;
      LODWORD(v179_.v179[2]) = v95(v83),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, _QWORD*, __int64, __int64,
                   int32x4_t*, _QWORD))GameData_212e870[0])(
          v182_.v186 + 8, v83, v85, v179_.v179, v88, v90, &v182_.v182, 0),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v106 = COERCE_AS(__typeof__(v106),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v111 = COERCE_AS(__typeof__(v111),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v96 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v97 = (*(__int64 (**)(__int64))(*(_QWORD*)v96 + 32LL))(v96),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v99 = v98;
    if (*((_DWORD*)a5 + 4) == 16) {
      v100 = *a4;
      v101 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v102 = (*(__int64 (**)(__int64))(*(_QWORD*)v101 + 32LL))(v101),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, unsigned __int64, __int64, __int64))(
          *(_QWORD*)v100 + 104LL))(v100, v97, v99, v102, v103),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v104 = *a4;
      LANES128(v182_.v182).n128_u64[0] = 0;
      LANES128(v182_.v182).n128_u64[1] = 0x3F80000000000000LL;
      (*(void (**)(__int64, _QWORD, int32x4_t*))(*(_QWORD*)v104 + 144LL))(
          v104, 0, &v182_.v182),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v105 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v182_.v183 =
          (*(__int64 (**)(__int64))(*(_QWORD*)v105 + 32LL))(v105),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *((_QWORD*)&v182_.v183 + 1) = v106;
      v107 = a3[2];
      LANES128(v182_.v182).n128_u64[0] = v97;
      LANES128(v182_.v182).n128_u64[1] = v99;
      v108 = *a4;
      v109 = (*(__int64 (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v110 = (*(__int64 (**)(__int64))(*(_QWORD*)v109 + 32LL))(v109),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, int32x4_t*, __int64, __int64))(
          *(_QWORD*)v108 + 128LL))(v108, 2, &v182_.v182, v110, v111),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *((unsigned int*)a5 + 2),
                                 *((unsigned int*)a5 + 3)),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (*((_BYTE*)a5 + 32) == 1) {
      v112 = *((_DWORD*)a5 + 4);
      v182_.v182 = COERCE_INT32X4_T(
          ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 24LL))(*a5)),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v182_.v183 = v113;
      PSEUDO_LOW_LANE64(v115, n64_u64, a5[3]);
      *(float32x2_t*)&v113 = vmul_f32(v115, v115);
      v182_.v184 = v114;
      v182_.v185 = v116;
      if (LANES64_OF(vpadd_f32(*(float32x2_t*)&v113, *(float32x2_t*)&v113))
              .n64_f32[0] > 0x0.0p+0f) {
        *(float*)&v117 =
            (float)(LANES64(v115).n64_f32[0] + LANES64(v115).n64_f32[0]) /
            (float)*((int*)a5 + 2);
        *((float*)&v117 + 1) = vmuls_lane_f32(-0x1.0000000000000p+1f, v115, 1) /
                               (float)*((int*)a5 + 3);
        v182_.v184 = vsubq_f32(v114, COERCE_AS(float32x4_t, v117));
      }
      v118 = *v43;
      v119 = ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 16LL))(*a5),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v120 = *a5;
      *(long double*)v179_.v179 = v119;
      *(_OWORD*)&v179_.v179[2] = v121;
      v179_.v180 = v122;
      v179_.v181 = v123;
      v124 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v120 + 40LL))(v120),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v125 = *a5;
      v178 = v124;
      v126 = (*(float (**)(__int64))(*(_QWORD*)v125 + 56LL))(v125),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v127 = (*(float (**)(_QWORD))(*(_QWORD*)*a5 + 64LL))(*a5),
      v103 = COERCE_AS(__typeof__(v103),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v106 = COERCE_AS(__typeof__(v106),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v111 = COERCE_AS(__typeof__(v111),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v72 = COERCE_AS(__typeof__(v72),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v84 = COERCE_AS(__typeof__(v84),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v98 = COERCE_AS(__typeof__(v98),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      Manager_bc5490(v118, (__int64)v179_.v179, &v182_.v182, (__int128*)&v178,
                     v126, v127),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v128 = *v43;
      v179_.v179[0] = *(_QWORD*)(a1 + 8);
      LOWORD(v179_.v179[1]) = 256;
      *(_QWORD*)(*(_QWORD*)(v128 + 96) + 4600LL) = ResourceBuilder_b5f0c0;
      if ((*(_BYTE*)(v128 + 313) & 1) == 0) {
        v129 = *((_DWORD*)a5 + 5);
        v130 = a4[2];
        Config_bc52e0((_QWORD*)v128, v112, v129, 0),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v143 = COERCE_AS(__typeof__(v143),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v98 = COERCE_AS(__typeof__(v98),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        for (i = 0; i != 31; ++i) {
          if ((Config_bc4f00(v128, i, v129) & 1) != 0) {
            ((void (*)(_QWORD, _QWORD, _QWORD, _QWORD))GameRoutine_5d3320)(
                *(_QWORD*)(v128 + 96), 0, i, v112),
                v103 =
                    COERCE_AS(__typeof__(v103),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v106 =
                    COERCE_AS(__typeof__(v106),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v111 =
                    COERCE_AS(__typeof__(v111),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v113 = COERCE_AS(__typeof__(v113),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v116 = COERCE_AS(__typeof__(v116),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v121 = COERCE_AS(__typeof__(v121),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v122 = COERCE_AS(__typeof__(v122),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v123 = COERCE_AS(__typeof__(v123),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v134 = COERCE_AS(__typeof__(v134),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v141 = COERCE_AS(__typeof__(v141),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(__n128, "v3", "=w")),
                v69 =
                    COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v72 =
                    COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v84 =
                    COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v98 =
                    COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        ((void (*)(_QWORD, _QWORD, __int64, __int64,
                   _QWORD*))GameRoutine_5d3420)(*(_QWORD*)(v128 + 96), 0, v130,
                                                1, v179_.v179),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v113 = COERCE_AS(__typeof__(v113),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v114 = COERCE_AS(__typeof__(v114),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v116 = COERCE_AS(__typeof__(v116),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v122 = COERCE_AS(__typeof__(v122),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v123 = COERCE_AS(__typeof__(v123),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v141 = COERCE_AS(__typeof__(v141),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v142 = COERCE_AS(__typeof__(v142),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v143 = COERCE_AS(__typeof__(v143),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 = COERCE_AS(__typeof__(v69),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v72 = COERCE_AS(__typeof__(v72),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v84 = COERCE_AS(__typeof__(v84),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v98 = COERCE_AS(__typeof__(v98),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v128 = *v43;
      }
      *(_QWORD*)(*(_QWORD*)(v128 + 96) + 4600LL) = 0;
    }
    v132 = *((_DWORD*)a5 + 4);
    v182_.v182 = COERCE_INT32X4_T(
        ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 24LL))(*a5)),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v182_.v183 = v133;
    PSEUDO_LOW_LANE64(v135, n64_u64, a5[3]);
    *(float32x2_t*)&v133 = vmul_f32(v135, v135);
    v182_.v184 = v134;
    v182_.v185 = v136;
    if (LANES64_OF(vpadd_f32(*(float32x2_t*)&v133, *(float32x2_t*)&v133))
            .n64_f32[0] > 0x0.0p+0f) {
      *(float*)&v137 =
          (float)(LANES64(v135).n64_f32[0] + LANES64(v135).n64_f32[0]) /
          (float)*((int*)a5 + 2);
      *((float*)&v137 + 1) = vmuls_lane_f32(-0x1.0000000000000p+1f, v135, 1) /
                             (float)*((int*)a5 + 3);
      v182_.v184 = vsubq_f32(v134, COERCE_AS(float32x4_t, v137));
    }
    v138 = *v43;
    v139 = ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 16LL))(*a5),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v140 = *a5;
    *(long double*)v179_.v179 = v139;
    *(_OWORD*)&v179_.v179[2] = v141;
    v179_.v180 = v142;
    v179_.v181 = v143;
    v144 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v140 + 40LL))(v140),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v145 = *a5;
    v178 = v144;
    v146 = (*(float (**)(__int64))(*(_QWORD*)v145 + 56LL))(v145),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v147 = (*(float (**)(_QWORD))(*(_QWORD*)*a5 + 64LL))(*a5),
    v103 = COERCE_AS(__typeof__(v103),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v106 = COERCE_AS(__typeof__(v106),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v111 = COERCE_AS(__typeof__(v111),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v72 = COERCE_AS(__typeof__(v72),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v84 = COERCE_AS(__typeof__(v84),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v98 = COERCE_AS(__typeof__(v98),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    Manager_bc5490(v138, (__int64)v179_.v179, &v182_.v182, (__int128*)&v178,
                   v146, v147),
        v103 = COERCE_AS(__typeof__(v103),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v106 = COERCE_AS(__typeof__(v106),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v111 = COERCE_AS(__typeof__(v111),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v113 = COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v116 = COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v141 = COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v72 = COERCE_AS(__typeof__(v72),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v84 = COERCE_AS(__typeof__(v84),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v98 = COERCE_AS(__typeof__(v98),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v148 = *(_QWORD*)(a1 + 8);
    v149 = *v43;
    LOWORD(v179_.v179[1]) = 0;
    v179_.v179[0] = v148;
    if ((*(_BYTE*)(v149 + 313) & 1) == 0) {
      v150 = *((_DWORD*)a5 + 5);
      v151 = a4[2];
      Config_bc52e0((_QWORD*)v149, v132, v150, 0),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      for (j = 0; j != 31; ++j) {
        if ((Config_bc4f00(v149, j, v150) & 1) != 0) {
          ((void (*)(_QWORD, _QWORD, _QWORD, _QWORD))GameRoutine_5d3320)(
              *(_QWORD*)(v149 + 96), 0, j, v132),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v113 = COERCE_AS(__typeof__(v113),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v116 = COERCE_AS(__typeof__(v116),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v122 = COERCE_AS(__typeof__(v122),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v141 = COERCE_AS(__typeof__(v141),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(__n128, "v3", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ((void (*)(_QWORD, _QWORD, __int64, __int64, _QWORD*))GameRoutine_5d3420)(
          *(_QWORD*)(v149 + 96), 0, v151, 1, v179_.v179),
          v103 = COERCE_AS(__typeof__(v103),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v106 = COERCE_AS(__typeof__(v106),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v111 = COERCE_AS(__typeof__(v111),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v113 =
              COERCE_AS(__typeof__(v113), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v116 =
              COERCE_AS(__typeof__(v116), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v141 =
              COERCE_AS(__typeof__(v141), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v72 = COERCE_AS(__typeof__(v72),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v84 = COERCE_AS(__typeof__(v84),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v98 = COERCE_AS(__typeof__(v98),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v153 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)v153 = 0;
  *(_QWORD*)(v153 + 8) = 0;
  *(_DWORD*)(v153 + 16) = -1;
  return *(_QWORD*)(v153 + 324);
}

__int64 TaskEffect_b5f330(__int64* a1, __int64* a2)
{
  __int64* v2;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64* v9;
  unsigned int v10;
  unsigned int v11;
  __int64* v12;
  unsigned int v13;
  __int64 result;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v2 = (__int64*)*a1;
  if ((*(_BYTE*)(*a1 + 161) & 1) != 0) {
    if ((*((_BYTE*)v2 + 137) & 1) != 0) {
      goto LABEL_3;
    }
  LABEL_25:
    v18 = v2[16];
    v19 = *a2;
    v20_.v20 = v2[15];
    v20_.v21 = 0;
    GameRoutine_5fe1a0(v19, 4u, 4u, &v20_.v20, v18);
    *((_BYTE*)v2 + 137) = 1;
    v2 = (__int64*)*a1;
    if ((*(_BYTE*)(*a1 + 185) & 1) != 0) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v16 = v2[19];
  v17 = *a2;
  v20_.v20 = v2[18];
  v20_.v21 = 0;
  GameRoutine_5fe1a0(v17, 1u, 4u, &v20_.v20, v16);
  *((_BYTE*)v2 + 161) = 1;
  v2 = (__int64*)*a1;
  if ((*(_BYTE*)(*a1 + 137) & 1) == 0) {
    goto LABEL_25;
  }
LABEL_3:
  if ((*((_BYTE*)v2 + 185) & 1) == 0) {
  LABEL_4:
    v5 = v2[22];
    v6 = *a2;
    v20_.v20 = v2[21];
    v20_.v21 = 0;
    GameRoutine_5fe1a0(v6, 0, 4u, &v20_.v20, v5);
    *((_BYTE*)v2 + 185) = 1;
    v2 = (__int64*)*a1;
  }
LABEL_5:
  v20_.v21 = 0;
  v20_.v20 = *v2;
  v7 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2) + 340);
  v8 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2) + 344);
  if (v7 != -1 && (v2[2] & 1) == 0) {
    GameRoutine_5fe120(*a2, v7, 0, &v20_.v20, v2[1]);
    *((_BYTE*)v2 + 16) = 1;
  }
  if (v8 != -1 && (*((_BYTE*)v2 + 17) & 1) == 0) {
    GameRoutine_5fe120(*a2, v8, 4u, &v20_.v20, v2[1]);
    *((_BYTE*)v2 + 17) = 1;
  }
  v9 = (__int64*)*a1;
  v20_.v20 = *(_QWORD*)(*a1 + 24);
  v20_.v21 = 0;
  v10 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2) + 348);
  v11 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2) + 352);
  if (v10 != -1 && (v9[5] & 1) == 0) {
    GameRoutine_5fe120(*a2, v10, 0, &v20_.v20, v9[4]);
    *((_BYTE*)v9 + 40) = 1;
  }
  if (v11 != -1 && (*((_BYTE*)v9 + 41) & 1) == 0) {
    GameRoutine_5fe120(*a2, v11, 4u, &v20_.v20, v9[4]);
    *((_BYTE*)v9 + 41) = 1;
  }
  v12 = (__int64*)*a1;
  v20_.v20 = *(_QWORD*)(*a1 + 48);
  v20_.v21 = 0;
  v13 = *(_DWORD*)(((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2) + 356);
  result = ((__int64 (*)(__int64*))GameRoutine_5b28f0)(a2);
  v15 = *(_DWORD*)(result + 360);
  if (v13 != -1 && (v12[8] & 1) == 0) {
    result = GameRoutine_5fe120(*a2, v13, 0, &v20_.v20, v12[7]);
    *((_BYTE*)v12 + 64) = 1;
  }
  if (v15 != -1 && (*((_BYTE*)v12 + 65) & 1) == 0) {
    result = GameRoutine_5fe120(*a2, v15, 4u, &v20_.v20, v12[7]);
    *((_BYTE*)v12 + 65) = 1;
  }
  return result;
}

#pragma GCC visibility pop
