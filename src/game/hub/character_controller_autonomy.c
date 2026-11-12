#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_e165f0(_QWORD);
__int64 CharacterControllerAutonomy_Unknown2(__int64 a1);
__int64 GameRoutine_e18130(_QWORD);
__int64 CharacterControllerAutonomy_e165f0(__int64 a1);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
__int64 CharacterControllerAutonomy_StateFollow_Unknown2(__int64 result);
__int64
game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy_lambda0_Invoke(
    __int64 a1, __int64* a2);
_QWORD* GameRoutine_dac8c0(_QWORD* result, _QWORD*);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__attribute__((swiftcall)) void Character_cb1ec0(PSEUDO_X8, __int64,
                                                 unsigned int);
__int64* GameRoutine_ceecc0(__int64* result, _DWORD*);
__int64 GameRoutine_cb2080(__int64 result, _QWORD*);
__int64 GameRoutine_cecb70(__int64);
__int64 GameRoutine_cecf30(__int64);
__int64 GameRoutine_e18130_alt1(__int64 result) __asm__("GameRoutine_e18130");
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fe2e10[])();
extern __int64 (*GameData_1fe2fc0[])();
extern __int64 (*game_hub_CharacterControllerAutonomy_StateCommand_vtable[])();
extern __int64 (*game_hub_CharacterControllerAutonomy_StateFollow_vtable[])();
extern __int64 (*game_hub_CharacterControllerAutonomy_StateMoveTo_vtable[])();
extern __int64 (*game_hub_CharacterControllerAutonomy_StateWait_vtable[])();
extern __int64 (*game_hub_CharacterControllerAutonomy_vtable[])();
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
extern __int64 (*game_hub_StateMachine_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_e17ef0();
__n128
game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy(__int64 a1,
                                                                 __int64 a2);
__n128 CharacterControllerAutonomy_Destructor(__int64 a1);
__n128 CharacterControllerAutonomy_StateFollow_Unknown3(__int64 a1,
                                                        __n128 result);
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64);
__n128

game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy(__int64 a1,
                                                                 __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
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
  __int64 v35;
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
  __int64 v49;
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
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __n128 result;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
  } v74_;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 44) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  v3 = (__int64*)(a1 + 56);
  *(_QWORD*)a1 = game_hub_CharacterControllerAutonomy_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_WORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 32) = game_hub_StateMachine_vtable;
  v4 = a1 + 32;
  GameRoutine_cecb70(*(_QWORD*)(a2 + 24)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *v6 = game_hub_CharacterControllerAutonomy_StateWait_vtable;
  v6[1] = a1;
  v8 = *(_QWORD**)(a1 + 64);
  v7 = *(_QWORD*)(a1 + 72);
  if ((unsigned __int64)v8 >= v7) {
    v10 = *v3;
    v11 = (__int64)v8 - *v3;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      goto LABEL_91;
    }
    v13 = v7 - v10;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v12;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        goto LABEL_92;
      }
      v15 = v6;
      v16 = fw_memory_HeapManager_Allocate(*v5, 8 * v14, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v6;
    v9 = (__int64*)(v16 + v11 + 8);
    memcpy(v18, v10, v11),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(a1 + 56) = v18;
    *(_QWORD*)(a1 + 64) = v9;
    *(_QWORD*)(a1 + 72) = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v19),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    *v8 = v6;
    v9 = v8 + 1;
  }
  v20 = *v5;
  *(_QWORD*)(a1 + 64) = v9;
  v21 = fw_memory_HeapManager_Allocate(v20, 64, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v21 + 48) = 0;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)(v21 + 24) = 0;
  *(_WORD*)(v21 + 32) = 0;
  *(_QWORD*)v21 = game_hub_CharacterControllerAutonomy_StateFollow_vtable;
  *(_QWORD*)(v21 + 8) = a1;
  v22 = *(_QWORD*)(a1 + 72);
  if ((unsigned __int64)v9 >= v22) {
    v24 = *v3;
    v25 = (__int64)v9 - *v3;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 != 0) {
      goto LABEL_91;
    }
    v27 = v22 - v24;
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
        goto LABEL_92;
      }
      v29 = v21;
      v30 = fw_memory_HeapManager_Allocate(*v5, 8 * v28, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v21 = v29;
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v28;
    v32 = v30 + v25 - 8 * (v25 >> 3);
    *(_QWORD*)(v30 + v25) = v21;
    v23 = (__int64*)(v30 + v25 + 8);
    memcpy(v32, v24, v25),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(a1 + 56) = v32;
    *(_QWORD*)(a1 + 64) = v23;
    *(_QWORD*)(a1 + 72) = v31;
    if (v24 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v33),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    *v9 = v21;
    v23 = v9 + 1;
  }
  v34 = *v5;
  *(_QWORD*)(a1 + 64) = v23;
  v35 = fw_memory_HeapManager_Allocate(v34, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v35 + 16) = 0;
  *(_WORD*)(v35 + 24) = 0;
  *(_QWORD*)v35 = game_hub_CharacterControllerAutonomy_StateCommand_vtable;
  *(_QWORD*)(v35 + 8) = a1;
  v36 = *(_QWORD*)(a1 + 72);
  if ((unsigned __int64)v23 >= v36) {
    v38 = *v3;
    v39 = (__int64)v23 - *v3;
    v40 = (v39 >> 3) + 1;
    if (v40 >> 61 != 0) {
      goto LABEL_91;
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
        goto LABEL_92;
      }
      v43 = v35;
      v44 = fw_memory_HeapManager_Allocate(*v5, 8 * v42, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v35 = v43;
    }
    else {
      v44 = 0;
    }
    v45 = v44 + 8 * v42;
    v46 = v44 + v39 - 8 * (v39 >> 3);
    *(_QWORD*)(v44 + v39) = v35;
    v37 = (__int64*)(v44 + v39 + 8);
    memcpy(v46, v38, v39),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(a1 + 56) = v46;
    *(_QWORD*)(a1 + 64) = v37;
    *(_QWORD*)(a1 + 72) = v45;
    if (v38 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v47),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    *v23 = v35;
    v37 = v23 + 1;
  }
  v48 = *v5;
  *(_QWORD*)(a1 + 64) = v37;
  v49 = fw_memory_HeapManager_Allocate(v48, 64, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_DWORD*)(v49 + 16) = 0;
  *(_BYTE*)(v49 + 20) = 0;
  *(_QWORD*)(v49 + 32) = 0;
  *(_QWORD*)(v49 + 40) = 0;
  *(_DWORD*)(v49 + 48) = 0;
  *(_QWORD*)v49 = game_hub_CharacterControllerAutonomy_StateMoveTo_vtable;
  *(_QWORD*)(v49 + 8) = a1;
  v50 = *(_QWORD*)(a1 + 72);
  if ((unsigned __int64)v37 < v50) {
    *v37 = v49;
    v51 = (__int64)(v37 + 1);
    goto LABEL_65;
  }
  v52 = *v3;
  v53 = (__int64)v37 - *v3;
  v54 = (v53 >> 3) + 1;
  if (v54 >> 61 != 0) {
  LABEL_91:
    GameRoutine_e17ef0(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
    if (v56 >> 61 == 0) {
      v57 = v49;
      v58 = fw_memory_HeapManager_Allocate(*v5, 8 * v56, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v49 = v57;
      goto LABEL_61;
    }
  LABEL_92:
    GameRoutine_60a210(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v58 = 0;
LABEL_61:
  v59 = v58 + 8 * v56;
  v60 = v58 + v53 - 8 * (v53 >> 3);
  *(_QWORD*)(v58 + v53) = v49;
  v51 = v58 + v53 + 8;
  memcpy(v60, v52, v53),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 56) = v60;
  *(_QWORD*)(a1 + 64) = v51;
  *(_QWORD*)(a1 + 72) = v59;
  if (v52 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v61),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_65:
  v62 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = v51;
  v63 = *(_QWORD*)(v62 + 24);
  LODWORD(v76_.v76[0]) = 1;
  GameRoutine_ceecc0((__int64*)(v63 + 344), v76_.v76),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HubCharacterNatives_cea6b0(v63),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HubCharacterNatives_ceca80(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL), 8, 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HubCharacterNatives_ceca80(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL), 0x40000,
                             1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v64 = *(_QWORD*)(a1 + 8);
  v74_.v74[0] = GameData_1fe2fc0;
  v76_.v76[0] = GameData_1fe2fc0;
  v65 = *(_QWORD*)(*(_QWORD*)(v64 + 24) + 32LL);
  v74_.v75 = v74_.v74;
  v76_.v77 = v76_.v76;
  GameRoutine_dac8c0(v76_.v76, (_QWORD*)(v65 + 176)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v76_.v77 == v76_.v76) {
    v67 = 32;
  }
  else {
    if (v76_.v77 == nullptr) {
      goto LABEL_70;
    }
    v67 = 40;
  }
  (*(void (**)(__int64))(*v76_.v77 + v67))((__int64)v76_.v77),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_70:
  if (v74_.v75 == v74_.v74) {
    v68 = 32;
    goto LABEL_74;
  }
  if (v74_.v75 != nullptr) {
    v68 = 40;
  LABEL_74:
    (*(void (**)(__int64))(*v74_.v75 + v68))((__int64)v74_.v75),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (*(_BYTE*)(a1 + 44) != 1 || *(_DWORD*)(a1 + 40) != 0) {
    *(_DWORD*)(a1 + 48) = 0;
    *(_BYTE*)(a1 + 52) = 1;
  }
  if ((*(_BYTE*)(a1 + 128) & 1) == 0 && (*(_BYTE*)(a1 + 129) & 1) != 0) {
    GameRoutine_e18130_alt1(v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v69 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v69 != 0) {
    v70 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v71 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                              memory_order_relaxed);
    v72 = std___1___shared_weak_count_lock(v71),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v69);
    if (v72 != 0 && v70 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16), 1u,
                                memory_order_relaxed);
      v73 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 16) = v70;
      *(_QWORD*)(a1 + 24) = v72;
      if (v73 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v73),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      result = std___1___shared_weak_count___release_weak_alt1(v72);
    }
    else if (v72 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v72 + 16LL))(
          v72, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak_alt1(v72);
    }
  }
  return result;
}

__n128 CharacterControllerAutonomy_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __n128 result;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)a1 = game_hub_CharacterControllerAutonomy_vtable;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v3 = *(_QWORD**)(a1 + 56);
  v4 = *(_QWORD**)(a1 + 64);
  if (v3 != v4) {
    do {
      if (*v3 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *v3 = 0;
      }
      ++v3;
    } while (v3 != v4);
    v3 = *(_QWORD**)(a1 + 56);
  }
  v5 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = v3;
  v6 = *(_QWORD*)(v5 + 24);
  v7 = *(_QWORD*)(v6 + 352);
  if (v7 != *(_QWORD*)(v6 + 344)) {
    *(_QWORD*)(v6 + 352) = v7 - 4;
  }
  HubCharacterNatives_cea6b0(v6),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_cecf30(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HubCharacterNatives_ceca80(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL), 0x40000,
                             0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  HubCharacterNatives_ceca80(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 24LL), 8, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 32) = GameData_1fe2e10;
  if (*(_BYTE*)(a1 + 44) == 1) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * *(int*)(a1 + 40));
    (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_BYTE*)(a1 + 44) == 1) {
      *(_BYTE*)(a1 + 44) = 0;
    }
  }
  v10 = *(_QWORD**)(a1 + 56);
  v11 = *(_QWORD**)(a1 + 64);
  if (v10 != v11) {
    do {
      if (*v10 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v10 + 8LL))(*v10),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *v10 = 0;
      }
      ++v10;
    } while (v10 != v11);
    v10 = *(_QWORD**)(a1 + 56);
  }
  v12 = *(_QWORD**)(a1 + 112);
  *(_QWORD*)(a1 + 64) = v10;
  if (v12 == (_QWORD*)(a1 + 80)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_26;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = *(_QWORD**)(a1 + 56);
LABEL_26:
  if (v10 != nullptr) {
    *(_QWORD*)(a1 + 64) = v10;
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v15 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)a1 = &game_hub_CharacterControllerBase_vtable;
  if (v15 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v15);
  }
  return result;
}

__int64 CharacterControllerAutonomy_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  struct {
    _QWORD v5[2];
    char v6;
    char gap17_[63];
    char v7;
    char gap81_[15];
    char v8;
    char gap97_[15];
    char v9;
  } v5_;

  v1 = *(_QWORD*)(a1 + 8);
  v5_.v7 = 0;
  v5_.v8 = 0;
  v5_.v9 = 0;
  v3 = *(_QWORD*)(v1 + 24);
  v5_.v5[0] = 0;
  v5_.v5[1] = 0;
  v5_.v6 = 0;
  CharacterInputPlayer_da9a80(*(_QWORD*)(v3 + 32), (__int64)v5_.v5);
  return CharacterControllerAutonomy_e165f0(a1 + 32);
}

__int64 CharacterControllerAutonomy_e165f0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_BYTE*)(a1 + 96) = 1;
  result = GameRoutine_e18130(a1);
  if (*(_BYTE*)(a1 + 12) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    result = GameRoutine_e18130(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    }
    if (*(_BYTE*)(a1 + 20) == 1) {
      result = GameRoutine_e18130(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      }
      if (*(_BYTE*)(a1 + 20) == 1) {
        result = GameRoutine_e18130(a1);
        if (*(_BYTE*)(a1 + 12) == 1) {
          v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        }
        if (*(_BYTE*)(a1 + 20) == 1) {
          result = GameRoutine_e18130(a1);
          if (*(_BYTE*)(a1 + 12) == 1) {
            v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          }
          if (*(_BYTE*)(a1 + 20) == 1) {
            result = GameRoutine_e18130(a1);
            if (*(_BYTE*)(a1 + 12) == 1) {
              v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
            }
            if (*(_BYTE*)(a1 + 20) == 1) {
              result = GameRoutine_e18130(a1);
              if (*(_BYTE*)(a1 + 12) == 1) {
                v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
              }
              if (*(_BYTE*)(a1 + 20) == 1) {
                result = GameRoutine_e18130(a1);
                if (*(_BYTE*)(a1 + 12) == 1) {
                  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
                }
                if (*(_BYTE*)(a1 + 20) == 1) {
                  result = GameRoutine_e18130(a1);
                  if (*(_BYTE*)(a1 + 12) == 1) {
                    v11 =
                        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
                  }
                  if (*(_BYTE*)(a1 + 20) == 1) {
                    result = GameRoutine_e18130(a1);
                    if (*(_BYTE*)(a1 + 12) == 1) {
                      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                       8LL * *(int*)(a1 + 8));
                      result =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_WORD*)(a1 + 96) = 256;
  return result;
}

__int64 CharacterControllerAutonomy_StateFollow_Unknown2(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  return result;
}

__n128 CharacterControllerAutonomy_StateFollow_Unknown3(__int64 a1,
                                                        __n128 result)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  __int128 v25;
  float32x4_t v26;
  char v27;
  float32x4_t v28;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;

  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL) +
                       24LL) +
            24LL) = 1;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0) {
    v4 = *(_QWORD**)(v2 + 16);
    v6 = *(_QWORD*)(v2 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    result = std___1___shared_weak_count___release_weak_alt1(v3);
    if (v7 == 0 || v4 == nullptr) {
      if (v7 == 0) {
        return result;
      }
      goto LABEL_32;
    }
    v9 = *(__int64**)(GameData_21ec7c0 + 24);
    v10 = *(__int64**)(GameData_21ec7c0 + 32);
    if (v9 == v10) {
    LABEL_12:
      v11 = 0;
    }
    else {
      while (1) {
        v11 = *v9;
        if (*v9 == *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL)) {
          break;
        }
        v9 += 2;
        if (v9 == v10) {
          goto LABEL_12;
        }
      }
      v13 = v9[1];
      if (v13 != 0) {
        v12 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        v29_.v29 = v11;
        v29_.v30 = v13;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                  memory_order_relaxed);
        goto LABEL_14;
      }
    }
    v12 = 1;
    v13 = 0;
    v29_.v29 = v11;
    v29_.v30 = 0;
  LABEL_14:
    GameRoutine_cb2080((__int64)v4, &v29_.v29);
    if (v29_.v30 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v29_.v30);
    }
    v14 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
    if (v14 == 0 || (v15 = v4[142], v4[143] == v15)) {
      LODWORD(v17) = 0;
    }
    else {
      v27 = v12;
      v16 = 0;
      v17 = 0;
      while (1) {
        v18 = (__int64*)(v15 + v16);
        v19 = *(_QWORD*)(v15 + v16 + 8);
        if (v19 != 0) {
          v20 = std___1___shared_weak_count_lock(v19);
          if (v20 != 0) {
            v21 = *v18;
            if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v22 = v20;
              (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
              std___1___shared_weak_count___release_weak_alt1(v22);
            }
            if (v21 == v14) {
              break;
            }
          }
        }
        v15 = v4[142];
        ++v17;
        v16 += 16;
        if (v17 >= (v4[143] - v15) >> 4) {
          LODWORD(v17) = 0;
          break;
        }
      }
      v12 = v27;
    }
    Character_cb1ec0((void*)(&v28), (__int64)v4, v17);
    v23 = v28;
    v24 = *(float32x4_t*)(*(_QWORD*)(v4[3] + 16LL) + 560LL);
    *(_QWORD*)(a1 + 48) = LANES128(v28).n128_u64[0];
    v25 = *(_OWORD*)(a1 + 48);
    v26 = vsubq_f32(v24, v23);
    *((_QWORD*)&v25 + 1) = LANES128(v23).n128_u32[2];
    LANES128(v26).n128_u32[1] = 0;
    result = vmulq_f32(v26, v26);
    *(_OWORD*)(a1 + 48) = v25;
    LANES128(result).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(
                         float32x2_t,
                         LANES128_OF(vextq_s8(result, result, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(result).n128_u64[0])))
            .n64_u64[0];
    LANES128(result).n128_u64[0] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]))))
            .n64_u64[0];
    *(_DWORD*)(a1 + 28) = LANES128(result).n128_u32[0];
    if ((v12 & 1) == 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v13);
    }
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
          v7, *(long double*)&result);
      return std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  return result;
}

__int64

game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned int v14;
  unsigned int v15;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD**)(GameData_21ec7c0 + 24);
  v5 = *(_QWORD**)(GameData_21ec7c0 + 32);
  if (v4 == v5) {
    goto LABEL_14;
  }
  v6 = *(_QWORD*)(v2 + 40);
  while (1) {
    v7 = *v4;
    if (*(_QWORD*)(*v4 + 24LL) == v6) {
      break;
    }
    v4 += 2;
    if (v4 == v5) {
      goto LABEL_14;
    }
  }
  v8 = v4[1];
  if (v8 != 0 && (v9 = v4[1],
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16),
                                            1u, memory_order_relaxed),
                  v10 = std___1___shared_weak_count_lock(v9),
                  std___1___shared_weak_count___release_weak(v8), v10 != 0)) {
    v11 = *(_QWORD*)(v7 + 56);
    if (*(_DWORD*)(v7 + 1112) != 1 || v11 == 0) {
      result = 2;
    }
    else if (*(_BYTE*)(v11 + 180) != 0) {
      result = 0;
    }
    else {
      result = 3;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = result;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      result = v15;
    }
  }
  else {
  LABEL_14:
    result = 0;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
