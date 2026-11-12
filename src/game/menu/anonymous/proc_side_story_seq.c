#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70e760(_QWORD, _QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcSideStorySeq_Unknown18(__int64 result);
_QWORD* GameRoutine_658c00(_QWORD* result);
_QWORD* RouteMenuItem_166e340(__int64, char**, __int64*, __int64*, __int64*,
                              __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8b50(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8c30(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8d20(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void game_1603f20(PSEUDO_X8, _QWORD*);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64 (*GameData_208b2f0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_ProcNextSeq_vtable)();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21759e0;
extern __int64 GameData_21c9728;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
extern int game_script_hub_ui_g_talk_result;
void __attribute__((noreturn)) String_60a1d0();
_QWORD* ProcSideStorySeq_Destructor_alt1(__int64 a1) __asm__(
    "ProcSideStorySeq_Destructor");
__attribute__((swiftcall)) void ProcSideStorySeq_Unknown19(PSEUDO_X8 x8_,
                                                           __int64 a1);
_QWORD* ProcSideStorySeq_Unknown20(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* RouteMenuItem_166e340_alt1(__int64, const char**, const char**,
                                   const char**, const char**, __int64, __int64,
                                   __int64,
                                   __int64) __asm__("RouteMenuItem_166e340");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcSideStorySeq_Destructor(__int64 a1);

void ProcSideStorySeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 256);
  if (game_script_hub_ui_g_talk_result == 0) {
    v4 = *(unsigned __int8*)(v2 + 22);
    *(_BYTE*)(v2 + 9) = 0;
    if (v4 != 1) {
      goto LABEL_10;
    }
  LABEL_8:
    *(_BYTE*)(v2 + 22) = 0;
    goto LABEL_10;
  }
  *(_BYTE*)(v2 + 9) = 1;
  if (*(unsigned __int8*)(v2 + 22) != *(unsigned __int8*)(a1 + 276)) {
    if (*(_BYTE*)(v2 + 22) == 0) {
      *(_WORD*)(v2 + 10) = *(_WORD*)(a1 + 264);
      *(_WORD*)(v2 + 12) = *(_WORD*)(a1 + 266);
      *(_WORD*)(v2 + 14) = *(_WORD*)(a1 + 268);
      *(_WORD*)(v2 + 16) = *(_WORD*)(a1 + 270);
      *(_WORD*)(v2 + 18) = *(_WORD*)(a1 + 272);
      *(_WORD*)(v2 + 20) = *(_WORD*)(a1 + 274);
      *(_BYTE*)(v2 + 22) = 1;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if (*(_BYTE*)(v2 + 22) != 0) {
    v3 = *(_QWORD*)(a1 + 264);
    *(_DWORD*)(v2 + 18) = *(_DWORD*)(a1 + 272);
    *(_QWORD*)(v2 + 10) = v3;
  }
LABEL_10:
  *(_BYTE*)(GameData_21c9728 + 128) = 0;
  *(_QWORD*)a1 = &game_menu_anonymous_ProcNextSeq_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 224);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_208b2f0;
  if (v7 == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_20;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_20:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 ProcSideStorySeq_Unknown18(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int* v3;
  int v4;

  if (*(_QWORD*)(result + 256) == 0 || (*(_BYTE*)(result + 276) & 1) == 0) {
    *(_DWORD*)(result + 152) = 2;
    return result;
  }
  if (*(__int16*)(result + 266) * *(__int16*)(result + 264) *
          *(__int16*)(result + 268) ==
      0) {
    v3 = (int*)(result + 152);
  LABEL_11:
    v4 = 2;
    goto LABEL_12;
  }
  v1 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_70e760(v2, result + 264);
  v3 = (int*)(v1 + 152);
  if ((int)result < 1) {
    goto LABEL_11;
  }
  v4 = 4;

LABEL_12:
  *v3 = v4;
  return result;
}

__attribute__((swiftcall)) void ProcSideStorySeq_Unknown19(PSEUDO_X8 x8_,
                                                           __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v4;
  const char* v5;
  __int64* v6;
  __int64* v7;
  const char** v8;
  __int64 v9;
  char* v10;
  const char* v11;
  const char* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  struct {
    __int64 v22[2];
    const char* v23;
    __int64* v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    unsigned __int64 v27;
    int v28;
    int v29;
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
  } v22_;

  game_1603f20((void*)(v22_.v22), *(_QWORD**)(**(_QWORD**)(a1 + 256) + 40LL));
  if ((v22_.v22[0] & 1) != 0) {
    v4 = v22_.v23;
  }
  else {
    v4 = (char*)v22_.v22 + 1;
  }
  v5 = *(const char**)(**(_QWORD**)(a1 + 256) + 64LL);
  v6 = msg_MessageManager_instance__ptr[0];
  v7 = GameData_212e348;
  v8 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v5 != nullptr && *v5 != 0) {
    v9 = *msg_MessageManager_instance__ptr[0];
    v22_.v30 = -1;
    v22_.v31 = -1;
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v36 = -1;
    v22_.v37 = -1;
    v22_.v38 = -1;
    v22_.v39 = -1;
    v22_.v40 = -1;
    v22_.v41 = -1;
    v22_.v24 = GameData_212e348 + 2;
    v22_.v25 = 0xFFFF0001FFFF0000LL;
    v22_.v26 = 0xFFFF0004FFFF0002LL;
    v22_.v27 = 0xFFFF0006FFFF0005LL;
    v22_.v42 = 8;
    v22_.v28 = -65529;
    v22_.v29 = -65528;
    v10 = GameRoutine_a4dbe0_alt1(v9, v5, 0);
  }
  else {
    v10 = *msg_MessageManager_empty_text__ptr;
  }
  if (v4 != nullptr) {
    v11 = v4;
  }
  else {
    v11 = *v8;
  }
  GameRoutine_60a020_alt1(*v6 + 14704, v11);
  if (v10 != nullptr) {
    v12 = v10;
  }
  else {
    v12 = *v8;
  }
  GameRoutine_60a020_alt1(*v6 + 14728, v12);
  v13 = *v6;
  v22_.v30 = -1;
  v22_.v31 = -1;
  v22_.v32 = -1;
  v22_.v33 = -1;
  v22_.v34 = -1;
  v22_.v35 = -1;
  v22_.v36 = -1;
  v22_.v37 = -1;
  v22_.v38 = -1;
  v22_.v39 = -1;
  v22_.v40 = -1;
  v22_.v41 = -1;
  v22_.v24 = v7 + 2;
  v22_.v25 = 0xFFFF0001FFFF0000LL;
  v22_.v26 = 0xFFFF0004FFFF0002LL;
  v22_.v27 = 0xFFFF0006FFFF0005LL;
  v22_.v42 = 8;
  v22_.v28 = -65529;
  v22_.v29 = -65528;
  v14 = GameRoutine_a4dbe0_alt1(v13, "MID_NextSelect_SideStory", 0);
  v15 = strlen_alt1(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v18, 16, 0);
    a2[1] = v16;
    a2[2] = v19;
    *a2 = v18 | 1;
    v17 = v19;
  }
  else {
    *(_BYTE*)a2 = 2 * v15;
    v17 = (__int64)a2 + 1;
    if (v15 == 0) {
      goto LABEL_23;
    }
  }
  memmove_alt1(v17, (__int64)v14, v16);
LABEL_23:
  v20 = v22_.v22[0];
  *(_BYTE*)(v17 + v16) = 0;
  if ((v20 & 1) != 0 && v22_.v23 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v22_.v23);
  }
}

_QWORD* ProcSideStorySeq_Unknown20(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4)
{
  __int16* v4;
  __int64 v9;
  int v10;
  int v11;
  const char* v12;
  const char* v13;
  __int64* v14;
  const char* v15;
  const char** v16;
  const char* v17;
  const char* v18;
  const char* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  const char* v31;
  const char* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  const char* v37;
  struct {
    const char* v38[2];
    const char* v39;
  } v38_;
  struct {
    const char* v40[2];
    const char* v41;
  } v40_;
  struct {
    const char* v42[2];
    const char* v43;
  } v42_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    const char* v46;
  } v44_;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
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
  } v47_;

  v4 = (__int16*)(a1 + 264);
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v9 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (*(_BYTE*)(a1 + 276) == 0) {
    v4 = (__int16*)v9;
  }
  v10 = v4[2];
  v11 = v4[3];
  GameRoutine_17d8b50((void*)((__int64*)v42_.v42), v4[1],
                      (__int64)&GameData_21759e0);
  if (((__int64)v42_.v42[0] & 1) != 0) {
    v12 = v42_.v43;
  }
  else {
    v12 = (char*)v42_.v42 + 1;
  }
  GameRoutine_17d8c30((void*)((__int64*)v40_.v40), v10,
                      (__int64)&GameData_21759e0);
  if (((__int64)v40_.v40[0] & 1) != 0) {
    v13 = v40_.v41;
  }
  else {
    v13 = (char*)v40_.v40 + 1;
  }
  GameRoutine_17d8d20((void*)((__int64*)v38_.v38), v11,
                      (__int64)&GameData_21759e0);
  v14 = msg_MessageManager_instance__ptr[0];
  if (((__int64)v38_.v38[0] & 1) != 0) {
    v15 = v38_.v39;
  }
  else {
    v15 = (char*)v38_.v38 + 1;
  }
  v16 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v12 != nullptr) {
    v17 = v12;
  }
  else {
    v17 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v17);
  if (v13 != nullptr) {
    v18 = v13;
  }
  else {
    v18 = *v16;
  }
  GameRoutine_60a020_alt1(*v14 + 14728, v18);
  if (v15 != nullptr) {
    v19 = v15;
  }
  else {
    v19 = *v16;
  }
  GameRoutine_60a020_alt1(*v14 + 14752, v19);
  v20 = *v14;
  v47_.v49 = -1;
  v47_.v50 = -1;
  v47_.v51 = -1;
  v47_.v52 = -1;
  v47_.v53 = -1;
  v47_.v54 = -1;
  v47_.v55 = -1;
  v47_.v56 = -1;
  v47_.v57 = -1;
  v47_.v58 = -1;
  v47_.v59 = -1;
  v47_.v60 = -1;
  v47_.v47[0] = GameData_212e348 + 2;
  v47_.v47[1] = 0xFFFF0001FFFF0000LL;
  v47_.v47[2] = 0xFFFF0004FFFF0002LL;
  v47_.v47[3] = 0xFFFF0006FFFF0005LL;
  v47_.v61 = 8;
  v47_.v48 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v21 = GameRoutine_a4dbe0_alt1(v20, "MID_NextSelect_SideStory_Confirm", 0);
  v22 = strlen_alt1(v21);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0);
    v44_.v45 = v23;
    v44_.v46 = v24;
    v44_.v44 = v25 | 1;
  }
  else {
    LOBYTE(v44_.v44) = 2 * v22;
    v24 = (char*)&v44_.v44 + 1;
    if (v22 == 0) {
      goto LABEL_33;
    }
  }
  memmove_alt1((__int64)v24, (__int64)v21, v23);
LABEL_33:
  v26 = (char)v38_.v38[0];
  v24[v23] = 0;
  if ((v26 & 1) != 0 && v38_.v39 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v38_.v39);
  }
  if (((__int64)v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v40_.v41);
  }
  if (((__int64)v42_.v42[0] & 1) != 0 && v42_.v43 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v42_.v43);
  }
  v47_.v48 = nullptr;
  v30 = v44_.v45;
  if ((v44_.v44 & 1) != 0) {
    v31 = v44_.v46;
  }
  else {
    v30 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
    v31 = (char*)&v44_.v44 + 1;
  }
  if (v30 != 0) {
    v32 = v31;
  }
  else {
    v32 = nullptr;
  }
  v42_.v42[0] = v32;
  v40_.v40[0] = "MID_NextSelect_Yes_Individual";
  v37 = "MID_Sys_No";
  v38_.v38[0] = "MID_NextSelect_Yes";
  v33 = RouteMenuItem_166e340_alt1(a1, v42_.v42, v40_.v40, v38_.v38, &v37, a2,
                                   a3, a4, (__int64)v47_.v47);
  if (v47_.v48 == v47_.v47) {
    v34 = 32;
    goto LABEL_58;
  }
  if (v47_.v48 != nullptr) {
    v34 = 40;
  LABEL_58:
    (*(void (**)(__int64))(*v47_.v48 + v34))((__int64)v47_.v48);
  }
  if ((v44_.v44 & 1) != 0 && v44_.v46 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v44_.v46);
  }
  return v33;
}

#pragma GCC visibility pop
