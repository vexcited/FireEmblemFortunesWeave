#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2118bb8[])();
extern __int64 (*GameData_2118c88[])();
extern __int64 (*GameData_2118d38[])();
extern __int64 (*game_facility_anonymous_ProcBanquetScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_226bb60;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2131480;
extern __int64* GameData_2132488;
__int64 ProcBanquetScene_Destructor_alt1(__int64 a1) __asm__(
    "ProcBanquetScene_Destructor");
__int64 ProcBanquetScene_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcBanquetScene_DeletingDestructor");
__int64 ProcBanquetScene_194ebe0();
void ProcBanquetScene_194ec10();
__int64 ProcBanquetScene_Unknown18_alt1() __asm__("ProcBanquetScene_Unknown18");
__int64 ProcBanquetScene_Destructor_194eee0_alt1(_QWORD* a1) __asm__(
    "ProcBanquetScene_Destructor_194eee0");
__int64 ProcBanquetScene_Unknown2_alt1() __asm__("ProcBanquetScene_Unknown2");
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_809dc0(_QWORD, _QWORD, float);
extern _UNKNOWN* GameData_212c960;
extern __int64 game_ProcFadeView_instance_;
__int64
ProcBanquetScene_194ec50_alt1(__int64 a1) __asm__("ProcBanquetScene_194ec50");
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 game_809dc0_alt1(__int64, _QWORD*, __n128) __asm__("game_809dc0");
void GameRoutine_1487cc0_alt1(__int64, __int64) __asm__("GameRoutine_1487cc0");
void GameRoutine_1958ed0_alt1(__int64, __int64) __asm__("GameRoutine_1958ed0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcBanquetScene_194ec50(__int64 a1);
void ProcBanquetScene_Unknown18();
void ProcBanquetScene_Unknown2();
__attribute__((swiftcall)) void BanquetSceneDiff_142bfb0(PSEUDO_X8, __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameRoutine_13892a0(__int64);
__int64 GameRoutine_142c140(void);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern _DWORD* GameData_2131488;
extern _UNKNOWN GameData_2175a50;
extern __int64 (*GameData_2118a70[])();
extern __int64 (*GameData_2118d80[])();
extern __int64 (*ProcBanquetScene_Destructor_194eee0_ptr[])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131478[2];
extern __int64 fw_memory_g_heap_manager;
unsigned __int64 strlen(const char*);
void GameRoutine_1418aa0();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void game_facility_BanquetSceneDiff_Initialize(unsigned __int64, __int64);
__int64 game_facility_anonymous_ProcBanquetScene_CreateBind(__int64 a1);
void ProcBanquetScene_194e490(__int64 a1, unsigned __int8* a2);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
extern __int64 (*game_facility_194f1d0_ptr[])();
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcBanquetScene_Destructor(__int64 a1);
void ProcBanquetScene_DeletingDestructor(__int64 a1);
void ProcBanquetScene_Destructor_194eee0(_QWORD* a1);

__int64 game_facility_anonymous_ProcBanquetScene_CreateBind(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64* v13;
  __int64 result;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      240, 16, 0);
  v4 = GameData_212c608[0];
  v16_.v16[0] = GameData_2118a70;
  v16_.v17 = v16_.v16;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  *(_QWORD*)v3 = GameData_2118d80;
  GameData_226bb60 = v3;
  v5 = GameData_2132488;
  *(_BYTE*)(v3 + 160) = 0;
  *(_BYTE*)(v3 + 164) = 0;
  *(_QWORD*)(v3 + 152) = v5 + 2;
  v6 = GameData_2130240[0];
  *(_BYTE*)(v3 + 176) = 0;
  *(_BYTE*)(v3 + 180) = 0;
  *(_QWORD*)(v3 + 168) = v6 + 2;
  GameRoutine_1418aa0();
  v7 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v8 = (__int64*)fw_memory_HeapManager_Allocate(*v2, 336, 16, 0);
    GameRoutine_13892a0((__int64)v8);
    v9 = *v8;
    *v7 = v8;
    (*(void (**)(__int64*))(v9 + 16))(v8);
  }
  v10 = v16_.v17;
  *(_QWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  *(_QWORD*)(v3 + 200) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_BYTE*)(v3 + 232) = 0;
  *(_QWORD*)v3 = game_facility_anonymous_ProcBanquetScene_vtable;
  *(_QWORD*)(v3 + 152) = ProcBanquetScene_Destructor_194eee0_ptr;
  if (v10 != nullptr) {
    (*(void (**)(_QWORD*, __int64))(*v10 + 48LL))(v10, v3 + 184);
  }
  v11 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
  v12 = (unsigned __int64*)GameData_2131480;
  if (*GameData_2131480 == 0) {
    *GameData_2131488 = 1;
  }
  *(_WORD*)(v11 + 8) = 0;
  *(_WORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 88) = 1065353216;
  v13 = GameData_2131478[0];
  *(_QWORD*)(v11 + 96) = 0;
  *v12 = v11;
  *(_QWORD*)v11 = v13 + 2;
  GameRoutine_142c140();
  game_facility_BanquetSceneDiff_Initialize(*v12, v3 + 184);
  ProcInst_657850(v3, (__int64)&GameData_2175a50, (__int64)"ProcBanquetScene",
                  1, a1);
  result = (__int64)v16_.v17;
  if (v16_.v17 == v16_.v16) {
    v15 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (*(__int64 (**)(__int64))(*v16_.v17 + v15))((__int64)v16_.v17);
}

void ProcBanquetScene_194e490(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  BanquetSceneDiff_142bfb0((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (const char*)(a2 + 1);
  }
  else {
    v7 = *((const char**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v43_.v45);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(const char**)(a1 + 24);
  }
  else {
    v13 = (const char*)(a1 + 9);
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = (const char*)(a2 + 1);
  }
  else {
    v21 = *((const char**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v43_.v45);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(const char**)(a1 + 48);
  }
  else {
    v27 = (const char*)(a1 + 33);
  }
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v31,
                                                16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove((__int64)v30, (__int64)v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = (const char*)(a2 + 1);
  }
  else {
    v35 = *((const char**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v43_.v45);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

void ProcBanquetScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetScene_vtable;
  *(_QWORD*)(a1 + 152) = ProcBanquetScene_Destructor_194eee0_ptr;
  v2 = a1 + 152;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_QWORD*)(a1 + 184);
  *v3 = 0;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 192) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  *(_QWORD*)a1 = game_facility_194f1d0_ptr;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  FacilitySceneBase_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcBanquetScene_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;

  *(_QWORD*)a1 = game_facility_anonymous_ProcBanquetScene_vtable;
  *(_QWORD*)(a1 + 152) = ProcBanquetScene_Destructor_194eee0_ptr;
  v2 = a1 + 152;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = *(_QWORD*)(a1 + 184);
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v6 + v7, v4);
  }
  *(_QWORD*)a1 = game_facility_194f1d0_ptr;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  FacilitySceneBase_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v11, a1);
}

__int64 ProcBanquetScene_194ebe0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcBanquetScene_194ec10()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

void ProcBanquetScene_194ec50(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 v2;
  __int64 v3;
  unsigned __int64 v4;
  __n128* v5;
  __n128* v6;
  __n128 v7;

  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1958ed0_alt1(a1 + 152, a1),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 164) == 1 && (*(_DWORD*)(a1 + 160) & 0x80000000) != 0) {
    v3 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168) &&
          (v5 = (__n128*)(v4 + 160),
           LANES128(v2).n128_u64[1] =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160))
                   .n128_u64[1],
           LANES128(v2).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v5)).n128_f32[3] == LANES128(*(v5)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v5)).n128_u64[0] + 16))(v5),
              v2 = COERCE_AS(__typeof__(v2),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v2 = v5[3];
        }
        v7 = v2;
        LANES128(v2).n128_u64[0] = 0;
        v6 = &v7;
      }
      else {
        LANES128(v2).n128_u64[0] = 0;
        v6 = (__n128*)GameData_212c960;
      }
      game_809dc0_alt1(v3, v6, v2),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(a1, 1),
        v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

void ProcBanquetScene_Unknown18()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  __int16 v3;
  char v4;
  __int64 v5;

  v4 = 0;
  v1 = 20;
  v3 = -19282;
  v2 = 0xE597A5E95F4D4742LL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && v5 != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, v5);
  }
}

void ProcBanquetScene_Destructor_194eee0(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(a1 - 19) = game_facility_anonymous_ProcBanquetScene_vtable;
  v2 = (__int64)(a1 - 19);
  *a1 = ProcBanquetScene_Destructor_194eee0_ptr;
  v3 = GameData_2131480;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131480 + 24LL))(*GameData_2131480);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = a1[4];
  *v3 = 0;
  if (v4 != 0) {
    a1[5] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  *(a1 - 19) = game_facility_194f1d0_ptr;
  *a1 = GameData_2118d38;
  FacilitySceneBase_1958ed0((__int64)a1, v2);
  *a1 = GameData_2132488 + 2;
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  GameData_226bb60 = 0;
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v2);
  GameRoutine_658c00_alt1(a1 - 8);
}

void ProcBanquetScene_Unknown2()
{
  __int64 v0;
  char v1;
  unsigned __int64 v2;
  __int16 v3;
  char v4;
  __int64 v5;

  v4 = 0;
  v1 = 20;
  v3 = -19282;
  v2 = 0xE597A5E95F4D4742LL;
  GameRoutine_1487cc0_alt1((__int64)&v1, 0x13F000000LL);
  if ((v1 & 1) != 0 && v5 != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, v5);
  }
}

#pragma GCC visibility pop
