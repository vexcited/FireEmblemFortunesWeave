#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_108e620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_1950380(_QWORD, _QWORD);
__int64 GameRoutine_1951b80(_QWORD, _QWORD, _QWORD);
__int64 Impl_1951600(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_13ff750(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2131678;
extern __int64 GameData_2241840;
extern __int64 GameData_226bb88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2171090;
__attribute__((swiftcall)) void SceneEffectManager_1950850_alt1(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2,
    unsigned int a3) __asm__("SceneEffectManager_1950850");
__int64 GameRoutine_1951cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_98ed40(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_bd16c0(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__attribute__((swiftcall)) void SceneEffectManager_1950ce0(PSEUDO_X8 x8_,
                                                           _QWORD* a1,
                                                           __int64 a2,
                                                           unsigned int a3);
_QWORD** GameRoutine_1951b80_alt1(_QWORD** result, __int64,
                                  _QWORD*) __asm__("GameRoutine_1951b80");
__int64 GameHr_108e620(__int64, __int64**, const char*, int, char);
__int64 GameHr_1950380(__int64*, __int64);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 Impl_1951600_alt1(__int64, __int64**,
                          unsigned __int8) __asm__("Impl_1951600");
__int64 SceneCharacter_13ff750_alt1(__int64) __asm__("SceneCharacter_13ff750");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void SceneEffectManager_1950850(PSEUDO_X8 x8_,
                                                           __int64 a1,
                                                           __int64 a2,
                                                           unsigned __int8 a3);

__attribute__((swiftcall)) void SceneEffectManager_1950850(PSEUDO_X8 x8_,
                                                           __int64 a1,
                                                           __int64 a2,
                                                           unsigned __int8 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  bool v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39[2];
    __int64 v40;
  } v39_;
  struct {
    __int64* v41;
    __int64 v42;
  } v41_;
  __int64 v43;
  __int64* v44;

  if (a2 == 0 || (SceneCharacter_13ff750_alt1(a2) & 1) == 0) {
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v9 + 16) = 0;
    v10 = GameData_2131678;
    *(_DWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_DWORD*)(v9 + 48) = 0x2000;
    *(_DWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_WORD*)(v9 + 80) = 0;
    *(_WORD*)(v9 + 116) = 0;
    *(_WORD*)(v9 + 136) = 0;
    *(_BYTE*)(v9 + 160) = 0;
    *(_BYTE*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 272) = 0;
    *(_QWORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)(v9 + 248) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_DWORD*)(v9 + 127) = 0;
    a4[1] = v9;
    *(_QWORD*)v9 = v10 + 16;
    *(_QWORD*)(v9 + 8) = 0;
    *(_WORD*)(v9 + 108) = 256;
    *(_DWORD*)(v9 + 112) = -1082130432;
    *(_DWORD*)(v9 + 292) = 2;
    *(_QWORD*)(v9 + 24) = 0;
    result = v9 + 24;
    *a4 = result;
    {
      result;
      return;
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v39_.v39, *(_QWORD*)(a1 + 16),
                                       *(_QWORD*)(a1 + 8));
  }
  else {
    v8 = *(_QWORD*)(a1 + 8);
    v39_.v39[0] = *(_QWORD*)a1;
    v39_.v39[1] = v8;
    v39_.v40 = *(_QWORD*)(a1 + 16);
  }
  GameHr_1950380((__int64*)&v41_.v41, (__int64)v39_.v39);
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v39_.v40);
  }
  v13 = v41_.v41;
  if (*v41_.v41 == 0 ||
      *(_DWORD*)(*v41_.v41 + 16) != *((_DWORD*)v41_.v41 + 2)) {
  LABEL_67:
    v36 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v36 + 16) = 0;
    v37 = GameData_2131678;
    *(_DWORD*)(v36 + 32) = 0;
    *(_QWORD*)(v36 + 40) = 0;
    *(_DWORD*)(v36 + 48) = 0x2000;
    *(_DWORD*)(v36 + 104) = 0;
    *(_QWORD*)(v36 + 56) = 0;
    *(_QWORD*)(v36 + 64) = 0;
    *(_QWORD*)(v36 + 72) = 0;
    *(_WORD*)(v36 + 80) = 0;
    *(_WORD*)(v36 + 116) = 0;
    *(_WORD*)(v36 + 136) = 0;
    *(_BYTE*)(v36 + 160) = 0;
    *(_BYTE*)(v36 + 288) = 0;
    *(_QWORD*)(v36 + 272) = 0;
    *(_QWORD*)(v36 + 280) = 0;
    *(_QWORD*)(v36 + 256) = 0;
    *(_QWORD*)(v36 + 264) = 0;
    *(_QWORD*)(v36 + 240) = 0;
    *(_QWORD*)(v36 + 248) = 0;
    *(_QWORD*)(v36 + 224) = 0;
    *(_QWORD*)(v36 + 232) = 0;
    *(_QWORD*)(v36 + 208) = 0;
    *(_QWORD*)(v36 + 216) = 0;
    *(_QWORD*)(v36 + 192) = 0;
    *(_QWORD*)(v36 + 200) = 0;
    *(_QWORD*)(v36 + 176) = 0;
    *(_QWORD*)(v36 + 184) = 0;
    *(_QWORD*)(v36 + 168) = 0;
    *(_QWORD*)(v36 + 120) = 0;
    *(_DWORD*)(v36 + 127) = 0;
    a4[1] = v36;
    *(_QWORD*)v36 = v37 + 16;
    *(_QWORD*)(v36 + 8) = 0;
    *(_WORD*)(v36 + 108) = 256;
    *(_DWORD*)(v36 + 112) = -1082130432;
    *(_DWORD*)(v36 + 292) = 2;
    *(_QWORD*)(v36 + 24) = 0;
    result = v36 + 24;
    *a4 = result;
    goto LABEL_68;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 16);
  }
  else {
    v14 = a1 + 1;
  }
  v15 = game_HashString_alt1(v14);
  if (v15 == 0) {
    v21 = 0;
    v18 = a2;
    goto LABEL_44;
  }
  v16 = *(_QWORD*)(GameData_2241840 + 96);
  v17 = v16 == 0 || *(_QWORD*)(GameData_2241840 + 112) == 0;
  v18 = a2;
  if (v17) {
    goto LABEL_43;
  }
  v19 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    v20 = v15;
    if (v15 >= v16) {
      v20 = v15 % v16;
    }
  }
  else {
    v20 = v19 & v15;
  }
  v22 = *(_QWORD**)(*(_QWORD*)(GameData_2241840 + 88) + 8 * v20);
  if (v22 == nullptr || (v23 = (_QWORD*)*v22) == nullptr) {
  LABEL_43:
    v21 = 0;
    goto LABEL_44;
  }
  if ((v16 & v19) == 0) {
    while (1) {
      v25 = v23[1];
      if (v25 == v15) {
        if (v23[2] == v15) {
          goto LABEL_71;
        }
      }
      else if ((v25 & v19) != v20) {
        goto LABEL_43;
      }
      v23 = (_QWORD*)*v23;
      v21 = 0;
      if (v23 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v24 = v23[1];
    if (v24 == v15) {
      break;
    }
    if (v24 >= v16) {
      v24 %= v16;
    }
    if (v24 != v20) {
      goto LABEL_43;
    }
  LABEL_33:
    v23 = (_QWORD*)*v23;
    if (v23 == nullptr) {
      goto LABEL_43;
    }
  }
  if (v23[2] != v15) {
    goto LABEL_33;
  }
LABEL_71:
  v21 = v23[3];
LABEL_44:
  v26 = *(_QWORD**)(v18 + 8);
  v43 = 0;
  v44 = &v43;
  GameRoutine_1951b80_alt1(&v44, (__int64)&v44, v26);
  v27 = v43;
  v28 = v41_.v42;
  if (v41_.v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v41_.v42 + 8), 1u,
                              memory_order_relaxed);
  }
  v29 = *v13;
  if (*v13 == 0) {
  LABEL_52:
    v30 = 0;
    if (v28 == 0) {
      goto LABEL_58;
    }
    goto LABEL_56;
  }
  if (*(_DWORD*)(v29 + 16) != *((_DWORD*)v13 + 2)) {
    v30 = 0;
  LABEL_55:
    if (v28 != 0) {
      goto LABEL_56;
    }
    goto LABEL_58;
  }
  v30 = *(_DWORD*)(v21 + 48);
  if (v30 != 0) {
    goto LABEL_55;
  }
  v31 = *(_QWORD*)(v29 + 24);
  if (v31 == 0) {
    goto LABEL_52;
  }
  v30 = *(unsigned __int8*)(v31 + 248) >> 5;
  if (v28 != 0) {
  LABEL_56:
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v32 = v27;
      v33 = v30;
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak_alt1(v28);
      v30 = v33;
      v27 = v32;
    }
  }
LABEL_58:
  v34 = *(char**)(v21 + 40);
  if (v34 == nullptr || *v34 == 0) {
    v34 = GameData_2171090;
  }
  if ((GameHr_108e620(v27, &v41_.v41, v34, v30, 1) & 1) == 0) {
    GameRoutine_14a1390_alt1((__int64*)&v41_.v41, 1);
    goto LABEL_67;
  }
  result = GameData_226bb88;
  if (GameData_226bb88 != 0) {
    result = Impl_1951600_alt1(GameData_226bb88, &v41_.v41, a3);
  }
  v35 = v41_.v42;
  *a4 = (__int64)v41_.v41;
  a4[1] = v35;
  if (v35 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_68:
  v38 = v41_.v42;
  if (v41_.v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    {
      std___1___shared_weak_count___release_weak_alt1(v38);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SceneEffectManager_1950ce0(PSEUDO_X8 x8_,
                                                           _QWORD* a1,
                                                           __int64 a2,
                                                           unsigned int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  int v9;
  bool v10;
  int v11;
  __int64 v12;
  __n128 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  long double v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  char v53;
  char v54;
  char* v55;
  __int64 v56;
  int v57;
  char v58;
  int v59;
  char v60;
  int v61;
  _QWORD v62[2];
  __int64 v63;
  _DWORD* v64;
  __int64 v65;
  __int64 v66;

  if (a2 == 0) {
    goto LABEL_7;
  }
  v6 = *(_QWORD*)(a2 + 136);
  if (v6 != 0 &&
      (*(_BYTE*)(v6 + 165) != 1 || (GameRoutine_ad7390(v6) & 1) == 0)) {
    v9 = *(_DWORD*)(a2 + 132);
    v10 = __OFSUB__(v9, 1);
    v11 = v9 - 1;
    if (v11 < 0 == v10) {
      *(_DWORD*)(a2 + 132) = v11;
    LABEL_7:
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
      *(_QWORD*)(v12 + 16) = 0;
      v14 = GameData_2131678;
      *(_DWORD*)(v12 + 32) = 0;
      *(_QWORD*)(v12 + 40) = 0;
      *(_DWORD*)(v12 + 48) = 0x2000;
      *(_DWORD*)(v12 + 104) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_WORD*)(v12 + 80) = 0;
      *(_WORD*)(v12 + 116) = 0;
      *(_WORD*)(v12 + 136) = 0;
      *(_BYTE*)(v12 + 160) = 0;
      *(_BYTE*)(v12 + 288) = 0;
      *(_QWORD*)(v12 + 272) = 0;
      *(_QWORD*)(v12 + 280) = 0;
      *(_QWORD*)(v12 + 256) = 0;
      *(_QWORD*)(v12 + 264) = 0;
      *(_QWORD*)(v12 + 240) = 0;
      *(_QWORD*)(v12 + 248) = 0;
      *(_QWORD*)(v12 + 224) = 0;
      *(_QWORD*)(v12 + 232) = 0;
      *(_QWORD*)(v12 + 208) = 0;
      *(_QWORD*)(v12 + 216) = 0;
      *(_QWORD*)(v12 + 192) = 0;
      *(_QWORD*)(v12 + 200) = 0;
      *(_QWORD*)(v12 + 176) = 0;
      *(_QWORD*)(v12 + 184) = 0;
      *(_QWORD*)(v12 + 168) = 0;
      *(_QWORD*)(v12 + 120) = 0;
      *(_DWORD*)(v12 + 127) = 0;
      a4[1] = v12;
      *(_QWORD*)v12 = v14 + 16;
      *(_QWORD*)(v12 + 8) = 0;
      *(_WORD*)(v12 + 108) = 256;
      *(_DWORD*)(v12 + 112) = -1082130432;
      *(_DWORD*)(v12 + 292) = 2;
      *(_QWORD*)(v12 + 24) = 0;
      *a4 = v12 + 24;
      {
        result;
        return;
      }
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v62, a1[2], a1[1]);
  }
  else {
    v15 = a1[1];
    v62[0] = *a1;
    v62[1] = v15;
    v63 = a1[2];
  }
  GameRoutine_1950380(&v64, v62);
  if ((v62[0] & 1) != 0 && v63 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  v17 = v64;
  if (*(_QWORD*)v64 == 0 || *(_DWORD*)(*(_QWORD*)v64 + 16LL) != v64[2]) {
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    *(_QWORD*)(v24 + 16) = 0;
    v25 = GameData_2131678;
    *(_DWORD*)(v24 + 32) = 0;
    *(_QWORD*)(v24 + 40) = 0;
    *(_DWORD*)(v24 + 48) = 0x2000;
    *(_DWORD*)(v24 + 104) = 0;
    *(_QWORD*)(v24 + 56) = 0;
    *(_QWORD*)(v24 + 64) = 0;
    *(_QWORD*)(v24 + 72) = 0;
    *(_WORD*)(v24 + 80) = 0;
    *(_WORD*)(v24 + 116) = 0;
    *(_WORD*)(v24 + 136) = 0;
    *(_BYTE*)(v24 + 160) = 0;
    *(_BYTE*)(v24 + 288) = 0;
    *(_QWORD*)(v24 + 272) = 0;
    *(_QWORD*)(v24 + 280) = 0;
    *(_QWORD*)(v24 + 256) = 0;
    *(_QWORD*)(v24 + 264) = 0;
    *(_QWORD*)(v24 + 240) = 0;
    *(_QWORD*)(v24 + 248) = 0;
    *(_QWORD*)(v24 + 224) = 0;
    *(_QWORD*)(v24 + 232) = 0;
    *(_QWORD*)(v24 + 208) = 0;
    *(_QWORD*)(v24 + 216) = 0;
    *(_QWORD*)(v24 + 192) = 0;
    *(_QWORD*)(v24 + 200) = 0;
    *(_QWORD*)(v24 + 176) = 0;
    *(_QWORD*)(v24 + 184) = 0;
    *(_QWORD*)(v24 + 168) = 0;
    *(_QWORD*)(v24 + 120) = 0;
    *(_DWORD*)(v24 + 127) = 0;
    a4[1] = v24;
    *(_QWORD*)v24 = v25 + 16;
    *(_QWORD*)(v24 + 8) = 0;
    *(_WORD*)(v24 + 108) = 256;
    *(_DWORD*)(v24 + 112) = -1082130432;
    *(_DWORD*)(v24 + 292) = 2;
    *(_QWORD*)(v24 + 24) = 0;
    *a4 = v24 + 24;
    goto LABEL_30;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v18 = (char*)a1[2];
  }
  else {
    v18 = (char*)a1 + 1;
  }
  v19 = game_HashString(v18);
  if (v19 == 0) {
    goto LABEL_50;
  }
  v20 = *(_QWORD*)(GameData_2241840 + 96);
  if (v20 == 0 || *(_QWORD*)(GameData_2241840 + 112) == 0) {
    goto LABEL_50;
  }
  v22 = v20 - 1;
  if ((v20 & (v20 - 1)) != 0) {
    v23 = v19;
    if (v19 >= v20) {
      v23 = v19 % v20;
    }
  }
  else {
    v23 = v22 & v19;
  }
  v27 = *(_QWORD**)(*(_QWORD*)(GameData_2241840 + 88) + 8 * v23);
  if (v27 == nullptr || (v28 = (_QWORD*)*v27) == nullptr) {
  LABEL_50:
    v30 = 0;
    goto LABEL_51;
  }
  if ((v20 & v22) == 0) {
    while (1) {
      v31 = v28[1];
      if (v31 == v19) {
        if (v28[2] == v19) {
          goto LABEL_86;
        }
      }
      else if ((v31 & v22) != v23) {
        goto LABEL_50;
      }
      v28 = (_QWORD*)*v28;
      v30 = 0;
      if (v28 == nullptr) {
        goto LABEL_51;
      }
    }
  }
  while (1) {
    v29 = v28[1];
    if (v29 == v19) {
      break;
    }
    if (v29 >= v20) {
      v29 %= v20;
    }
    if (v29 != v23) {
      goto LABEL_50;
    }
  LABEL_40:
    v28 = (_QWORD*)*v28;
    if (v28 == nullptr) {
      goto LABEL_50;
    }
  }
  if (v28[2] != v19) {
    goto LABEL_40;
  }
LABEL_86:
  v30 = v28[3];
LABEL_51:
  v32 = *(_QWORD*)(a2 + 8);
  v66 = 0;
  v51 = &v66;
  GameRoutine_1951cc0(&v51, &v51, v32);
  v33 = v66;
  if (v66 == 0) {
    v33 = GameRoutine_98ed40(*(_QWORD*)(a2 + 8));
  }
  v34 = v65;
  if (v65 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                              memory_order_relaxed);
  }
  v35 = *(_QWORD*)v17;
  if (*(_QWORD*)v17 == 0) {
  LABEL_61:
    v36 = 0;
    if (v34 != 0) {
      goto LABEL_65;
    }
    goto LABEL_67;
  }
  if (*(_DWORD*)(v35 + 16) != v17[2]) {
    v36 = 0;
  LABEL_64:
    if (v34 == 0) {
      goto LABEL_67;
    }
    goto LABEL_65;
  }
  v36 = *(_DWORD*)(v30 + 48);
  if (v36 != 0) {
    goto LABEL_64;
  }
  v37 = *(_QWORD*)(v35 + 24);
  if (v37 == 0) {
    goto LABEL_61;
  }
  v36 = *(unsigned __int8*)(v37 + 248) >> 5;
  if (v34 != 0) {
  LABEL_65:
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
    }
  }
LABEL_67:
  v38 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_DWORD*)(v39 + 48) = 0x2000;
  v41 = GameData_2131678;
  *(_WORD*)(v39 + 108) = 256;
  *(_DWORD*)(v39 + 112) = -1082130432;
  *(_QWORD*)(v39 + 8) = 0;
  *(_QWORD*)(v39 + 16) = 0;
  *(_QWORD*)(v39 + 24) = 0;
  *(_DWORD*)(v39 + 32) = 0;
  v61 = -1;
  *(_QWORD*)(v39 + 40) = 0;
  *(_DWORD*)(v39 + 104) = 0;
  *(_QWORD*)(v39 + 56) = 0;
  *(_QWORD*)(v39 + 64) = 0;
  *(_QWORD*)(v39 + 72) = 0;
  *(_WORD*)(v39 + 80) = 0;
  *(_WORD*)(v39 + 116) = 0;
  *(_WORD*)(v39 + 136) = 0;
  *(_BYTE*)(v39 + 160) = 0;
  *(_BYTE*)(v39 + 288) = 0;
  *(_QWORD*)(v39 + 272) = 0;
  *(_QWORD*)(v39 + 280) = 0;
  *(_QWORD*)(v39 + 256) = 0;
  *(_QWORD*)(v39 + 264) = 0;
  *(_QWORD*)(v39 + 240) = 0;
  *(_QWORD*)(v39 + 248) = 0;
  *(_QWORD*)(v39 + 224) = 0;
  *(_QWORD*)(v39 + 232) = 0;
  *(_QWORD*)(v39 + 208) = 0;
  *(_QWORD*)(v39 + 216) = 0;
  *(_QWORD*)(v39 + 192) = 0;
  *(_QWORD*)(v39 + 200) = 0;
  *(_QWORD*)(v39 + 176) = 0;
  *(_QWORD*)(v39 + 184) = 0;
  *(_QWORD*)(v39 + 168) = 0;
  *(_QWORD*)(v39 + 120) = 0;
  *(_DWORD*)(v39 + 127) = 0;
  v53 = 0;
  v54 = 0;
  v58 = 0;
  LOBYTE(v57) = 0;
  v55 = nullptr;
  v56 = 0;
  v60 = 0;
  *(_QWORD*)v39 = v41 + 16;
  *(_DWORD*)(v39 + 292) = 2;
  v59 = 1;
  v43 = (__int64*)v64;
  v42 = v65;
  if (v65 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                              memory_order_relaxed);
  }
  v51 = v43;
  v52 = v42;
  if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v44 = v39;
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    *(__n128*)&v40 = std___1___shared_weak_count___release_weak(v44);
  }
  v45 = v52;
  if (v52 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v45 + 16LL))(v45, v40);
      std___1___shared_weak_count___release_weak(v45);
    }
  }
  v46 = *(char**)(v30 + 40);
  if (v46 == nullptr || *v46 == 0) {
    v46 = GameData_2171090;
  }
  v47 = strlen(v46);
  v55 = v46;
  v56 = v47;
  v57 = v36;
  v59 = 0;
  v58 = 1;
  v60 = 1;
  if ((GameRoutine_bd16c0(v33, &v51) & 1) != 0) {
    if (GameData_226bb88 != 0) {
      Impl_1951600(GameData_226bb88, &v64, a3);
    }
    v48 = v65;
    *a4 = v64;
    a4[1] = v48;
    if (v48 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    GameRoutine_14a1390(&v64, 1);
    v49 = fw_memory_HeapManager_Allocate(*v38, 296, 16, 0);
    *(_QWORD*)(v49 + 8) = 0;
    *(_QWORD*)(v49 + 16) = 0;
    *(_DWORD*)(v49 + 32) = 0;
    *(_QWORD*)(v49 + 40) = 0;
    *(_DWORD*)(v49 + 104) = 0;
    *(_QWORD*)(v49 + 56) = 0;
    *(_QWORD*)(v49 + 64) = 0;
    *(_QWORD*)(v49 + 72) = 0;
    *(_WORD*)(v49 + 80) = 0;
    *(_WORD*)(v49 + 116) = 0;
    *(_WORD*)(v49 + 136) = 0;
    *(_BYTE*)(v49 + 160) = 0;
    *(_BYTE*)(v49 + 288) = 0;
    *(_QWORD*)v49 = v41 + 16;
    *(_QWORD*)(v49 + 272) = 0;
    *(_QWORD*)(v49 + 280) = 0;
    *(_QWORD*)(v49 + 256) = 0;
    *(_QWORD*)(v49 + 264) = 0;
    *(_QWORD*)(v49 + 240) = 0;
    *(_QWORD*)(v49 + 248) = 0;
    *(_QWORD*)(v49 + 224) = 0;
    *(_QWORD*)(v49 + 232) = 0;
    *(_QWORD*)(v49 + 208) = 0;
    *(_QWORD*)(v49 + 216) = 0;
    *(_QWORD*)(v49 + 192) = 0;
    *(_QWORD*)(v49 + 200) = 0;
    *(_QWORD*)(v49 + 176) = 0;
    *(_QWORD*)(v49 + 184) = 0;
    *(_QWORD*)(v49 + 168) = 0;
    *(_QWORD*)(v49 + 120) = 0;
    *(_DWORD*)(v49 + 127) = 0;
    *(_DWORD*)(v49 + 48) = 0x2000;
    a4[1] = v49;
    *(_WORD*)(v49 + 108) = 256;
    *(_DWORD*)(v49 + 112) = -1082130432;
    *(_DWORD*)(v49 + 292) = 2;
    *(_QWORD*)(v49 + 24) = 0;
    *a4 = v49 + 24;
  }
  v50 = v52;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    result = std___1___shared_weak_count___release_weak(v50);
  }
LABEL_30:
  v26 = v65;
  if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    {
      std___1___shared_weak_count___release_weak(v26);
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
