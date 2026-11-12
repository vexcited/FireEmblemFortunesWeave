#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_107e090(_QWORD, _QWORD);
__int64 GameRoutine_108c8a0(_QWORD);
__int64 GameRoutine_1403f60(_QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_1407780(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1412540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 GameRoutine_1412d00(_QWORD);
__int64 GameRoutine_1416b10(_QWORD, _QWORD, float);
__int64 GameRoutine_1416c80(_QWORD, _QWORD);
__int64 GameRoutine_142b1a0(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 SceneCharacterLookAt_1416a00(_QWORD, _QWORD, float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64* GameRoutine_1391860(__int64, unsigned __int8);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_2038958[])();
extern __int64 (*GameData_20389d8[])();
extern __int64 (*GameData_2038a28[])();
extern __int64 (*GameData_2038a78[])();
extern __int64 (*GameData_2038ac8[])();
extern __int64 (*GameData_2038b18[])();
extern __int64 (*GameData_2038b68[])();
extern __int64 (*game_facility_SceneCharacterBehaviorAnim_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorFade_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorTurnTarget_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorTurn_vtable[])();
extern __int64 (*game_facility_SceneCharacter_vtable[])();
extern __int64 (*game_facility_SceneInterpolatorFloat_vtable[])();
extern __int64 (*game_facility_SceneObjectHolder_vtable)();
extern __int64 GameData_212dce8;
extern __int64 GameData_21c99c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131308[5];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 SceneCharacter_Destructor(__int64 a1);
__int64 SceneCharacter_13ff750(__int64 a1);
unsigned __int64 SceneCharacter_13ffb80(unsigned __int64 result);
__int64 SceneCharacter_13ffd30(__int64 a1);
__int64 SceneCharacter_14009a0(_QWORD* a1, __int64 a2);
__int64 SceneCharacter_1400a90(_QWORD* a1, __int64 a2);
__int64 SceneCharacter_1400b90(__int64 a1, __int64 a2);
__int64 SceneCharacter_1401090(__int64 result, __int64 a2);
__int64 SceneCharacter_1401180(__int64 a1, float a2);
__int64 SceneCharacter_1401300(__int64 result, __int64 a2, float a3);
__int64 SceneCharacter_14013e0(__int64 result, __int64 a2, float a3);
__int64 SceneCharacter_1401610(__int64 a1);
__int64* SceneCharacter_1401690(__int64 a1, unsigned __int8 a2);
__int64 SceneCharacter_1401750(__int64 a1, unsigned int a2, char a3,
                               __int64* a4);
__int64 SceneCharacter_1401850(__int64 a1, float a2);
__int64 SceneCharacter_14019b0(__int64 a1, float a2);
__int64 SceneCharacter_1401b10(__int64 a1, _QWORD* a2, char a3);
__int64 SceneCharacter_1401ce0(__int64 a1, _QWORD* a2);
__int64 SceneCharacter_1401e50_alt1(__int64 a1,
                                    float a2) __asm__("SceneCharacter_1401e50");
__int64 SceneCharacter_1401f80(__int64 a1, float a2);
_QWORD* SceneCharacter_14020c0(__int64 a1);
__int64 SceneCharacter_Unknown2(__int64 result);
__int64 GameRoutine_1413100(_QWORD);
__int64 GameRoutine_1984d70(_QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 GameRoutine_a7c2c0(_QWORD);
extern __int64 (*GameData_20387d8[])();
extern __int64 (*GameData_2038848[])();
extern __int64 (*GameData_20388d8[])();
__int64 SceneCharacter_1402240(_QWORD* a1, __int64* a2);
__int64 SceneCharacter_1402470(__int64 result, __int64 a2);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980(
    _QWORD* a1);
__int64
game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1402990(
    _QWORD* a1);
_QWORD*
game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_14029f0(__int64 a1);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1402af0(
    __int64 a1, __int64 a2);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400(
    _QWORD* a1);
__int64
game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1403410(
    _QWORD* a1);
_QWORD*
game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_1403470(__int64 a1);
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1403570(
    __int64 a1, __int64 a2);
_QWORD* game_facility_SceneCharacter_ChangeAppearance_lambda0_Clone(_QWORD* a1);
_QWORD*
game_facility_SceneCharacter_ChangeAppearance_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
__int64
game_facility_SceneCharacter_ChangeAppearance_lambda0_Invoke(_QWORD* a1,
                                                             __int64* a2);
_QWORD* SceneCharacterAnimator_1410e00(__int64, __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140ea90(PSEUDO_X8, _QWORD*, __int64);
__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8,
                                                               _QWORD);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_1410b80(PSEUDO_X8, __int64);
__int64 GameRoutine_10784f0(__int64*, int, __int64);
__int64
GameRoutine_14127e0_alt1(__int64,
                         unsigned __int8*) __asm__("GameRoutine_14127e0");
__int64 SceneManager_138ea40(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__n128 GameRoutine_a0d9a0_alt1(__int64) __asm__("GameRoutine_a0d9a0");
__n128 SceneCharacterAnimator_1412540(__int64, int, unsigned __int8*);
__n128 game_facility_1468e10(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern __int64 (*GameData_20385f8[])();
extern __int64 (*GameData_2038648[])();
extern __int64 (*GameData_2038698[])();
extern __int64 (*GameData_20386e8[])();
extern __int64 (*GameData_2038738[])();
extern __int64 (*GameData_2038788[])();
extern __int64 (
    *game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980_ptr
        [])();
extern __int64 (
    *game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400_ptr
        [])();
extern __int64* GameData_21312f0[8];
extern __int64* GameData_2131320[2];
extern __int64* GameData_2131380[7];
extern __int64* GameData_2131388[6];
extern __int64* GameData_2131390[5];
extern __int64* GameData_2132540;
extern __int64 GameData_2131530[2];
extern __int64 GameData_2131538;
extern __int64 GameData_21f4000;
unsigned __int64 GameRoutine_682bc0_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_682bc0");
void GameRoutine_1400780(_QWORD*, float*, float);
void GameRoutine_1984a30(__int64, float);
void GameRoutine_1984bd0(__int64, float);
void SceneCharacterLookAt_1400060(_QWORD*, float32x4_t*);
void SceneCharacter_13ffb80_alt1(__int64) __asm__("SceneCharacter_13ffb80");
void __attribute__((noreturn)) String_60a1d0();
void game_facility_1415980(_QWORD*);
__n128 SceneCharacter_13fed60(__int64 a1, __int64* a2, __int64* a3,
                              __int64* a4);
__int64 SceneCharacter_1400f80(__int64 result, char a2);
__n128 SceneCharacter_1401550(__int64 a1, __int64 a2);
void game_facility_SceneCharacter_SceneCharacter_lambda0_Invoke_1402c00_alt1(
    __int64 a1) __asm__("game_facility_SceneCharacter_SceneCharacter_lambda0_"
                        "Invoke_1402c00");
__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Invoke_1403680(
    float32x4_t* a1);
__n128
game_facility_SceneCharacter_ChangeAppearance_lambda0_Destructor(_QWORD* a1);
__n128 game_facility_SceneCharacter_ChangeAppearance_lambda0_DeletingDestructor(
    _QWORD* a1);
__n128
game_facility_SceneCharacter_ChangeAppearance_lambda0_Destroy(_QWORD* a1);
__attribute__((swiftcall)) void
game_facility_SceneCharacter_SetLookAtCharacter_lambda0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1);
__int64 GameHr_138ea40(__int64*, __int64);
__int64 GameHr_1984a30(__int64 result, float);
__int64 GameHr_1984bd0(__int64 result, float);
__int64 GameRoutine_1400780_alt1(_QWORD*, __int64,
                                 float) __asm__("GameRoutine_1400780");
__int64 SceneCharacterLookAt_1400060_alt1(__int64, float32x4_t*) __asm__(
    "SceneCharacterLookAt_1400060");
__int64 SceneCharacterLookAt_1416a00_alt1(
    __int64, __int64, float, float) __asm__("SceneCharacterLookAt_1416a00");
__int64 SceneCharacterLookAt_1416c80(__int64*, _QWORD*);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_1403f60_alt1(__int64*) __asm__("GameRoutine_1403f60");
void GameRoutine_a0d9a0_alt2(__int64) __asm__("GameRoutine_a0d9a0");
void SceneCharacterAnimator_1412540_alt1(
    __int64, int, unsigned __int8*) __asm__("SceneCharacterAnimator_1412540");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SceneCharacter_1401e50(__int64 a1, float a2);
__int64
game_facility_SceneCharacter_SceneCharacter_lambda0_Invoke_1402c00(__int64 a1);

__n128 SceneCharacter_13fed60(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  __int64* v8;
  _QWORD* v9;
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
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  long double v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  int v67;
  int v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __n128 result;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  char v104;
  struct {
    __int64 v105;
    __int64 v106;
  } v105_;
  struct {
    __int64 v107;
    __int64 v108;
    __int64 v109;
  } v107_;
  struct {
    _QWORD v110[4];
    int v111;
    char gap100_[4];
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    char v121;
    char gap177_[15];
    char v122;
  } v110_;
  struct {
    _BYTE v123[32];
    _BYTE* v124;
  } v123_;
  struct {
    __int64 v125;
    __int64 v126;
    char gap272_[16];
    __int64* v127;
  } v125_;
  struct {
    __int64 v128;
    __int64 v129;
  } v128_;
  __int64 v130;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)a1 = GameData_2131538 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = GameData_2131530[0];
  *(_QWORD*)(a1 + 16) = v9;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  *v9 = v15 + 16;
  v9[1] = a1;
  *(_QWORD*)a1 = game_facility_SceneCharacter_vtable;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1((__int64*)(a1 + 24), a2[2], a2[1]),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((*(_BYTE*)a3 & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v16 = *a2;
    v17 = a2[2];
    *(_QWORD*)(a1 + 32) = a2[1];
    *(_QWORD*)(a1 + 40) = v17;
    *(_QWORD*)(a1 + 24) = v16;
    if ((*(_BYTE*)a3 & 1) != 0) {
    LABEL_3:
      fw_text_String_CopyTerminated_alt1((__int64*)(a1 + 48), a3[2], a3[1]),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_6;
    }
  }
  v18 = *a3;
  v19 = a3[2];
  *(_QWORD*)(a1 + 56) = a3[1];
  *(_QWORD*)(a1 + 64) = v19;
  *(_QWORD*)(a1 + 48) = v18;
LABEL_6:
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 40);
  }
  else {
    v20 = a1 + 25;
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 64);
  }
  else {
    v21 = a1 + 49;
  }
  v22 = game_util_Format((__int64)"%s(%s)", v20, v21, v10, v11, v12, v13, v14,
                         v104),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23 = strlen(v22),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v24 = v23;
  if (v23 >= 0x17) {
    if ((v23 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v23 | 7) + 1;
    }
    v25 = fw_memory_HeapManager_Allocate_alt1(*v8, v26, 16, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(a1 + 80) = v24;
    *(_QWORD*)(a1 + 88) = v25;
    *(_QWORD*)(a1 + 72) = v26 | 1;
  }
  else {
    v25 = a1 + 73;
    *(_BYTE*)(a1 + 72) = 2 * v23;
    if (v23 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v25, v22, v24),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_21:
  *(_BYTE*)(v25 + v24) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  v27 = *v8;
  *(_BYTE*)(a1 + 104) = 0;
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v27, 136, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v29 = v28 + 3;
  v30 = v28;
  v28[1] = 0;
  v28[2] = 0;
  *v28 = GameData_20385f8;
  SceneCharacterAnimator_1410e00((__int64)(v28 + 3), a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v37 = *v8;
  *(_QWORD*)(a1 + 112) = v29;
  *(_QWORD*)(a1 + 120) = v30;
  v38 = fw_memory_HeapManager_Allocate_alt1(v37, 96, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v38 + 8) = 0;
  *(_QWORD*)(v38 + 16) = 0;
  *(_QWORD*)v38 = GameData_2038648;
  v39 = GameData_21312f0[0];
  *(_QWORD*)(v38 + 32) = a1;
  *(_QWORD*)(v38 + 40) = 0;
  *(_QWORD*)(v38 + 48) = 0;
  *(_QWORD*)(v38 + 56) = 0;
  *(_QWORD*)(v38 + 64) = 0;
  *(_QWORD*)(v38 + 72) = 0;
  *(_QWORD*)(v38 + 80) = 0;
  *(_BYTE*)(v38 + 88) = 0;
  *(_QWORD*)(a1 + 136) = v38;
  *(_QWORD*)(v38 + 24) = v39 + 2;
  *(_QWORD*)(a1 + 128) = v38 + 24;
  v40 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v8, 160, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v41 = v40 + 4;
  v42 = v40;
  v40[1] = 0;
  v40[2] = 0;
  *v40 = GameData_2038698;
  game_facility_1468e10((__int64)(v40 + 4), a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = *v8;
  *(_QWORD*)(a1 + 144) = v41;
  *(_QWORD*)(a1 + 152) = v42;
  v44 = fw_memory_HeapManager_Allocate_alt1(v43, 56, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v44 + 8) = 0;
  *(_QWORD*)(v44 + 16) = 0;
  *(_QWORD*)v44 = GameData_20386e8;
  v45 = GameData_2132540;
  *(_QWORD*)(v44 + 32) = a1;
  *(_QWORD*)(v44 + 40) = 0x3F80000000000000LL;
  *(_DWORD*)(v44 + 48) = 1050253722;
  *(_QWORD*)(a1 + 168) = v44;
  *(_QWORD*)(v44 + 24) = v45 + 2;
  *(_QWORD*)(a1 + 160) = v44 + 24;
  v46 = fw_memory_HeapManager_Allocate_alt1(*v8, 256, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v46 + 16) = 0;
  v47 = v46;
  v48 = GameData_2131380[0];
  *(_QWORD*)v46 = GameData_2038738;
  *(_QWORD*)(v46 + 8) = 0;
  *(_QWORD*)(v46 + 32) = v48 + 2;
  v49 = v46 + 32;
  v50 = GameData_2131388[0];
  *(_QWORD*)(v46 + 56) = 0;
  *(_QWORD*)(v46 + 64) = 0;
  *(_QWORD*)(v46 + 72) = 0;
  *(_QWORD*)(v46 + 80) = 0;
  *(_QWORD*)(v46 + 88) = 0;
  *(_QWORD*)(v46 + 96) = 0;
  *(_QWORD*)(v46 + 104) = 0;
  *(_QWORD*)(v46 + 112) = 0x200000003LL;
  *(_QWORD*)(v46 + 144) = 0;
  *(_DWORD*)(v46 + 152) = 0;
  *(_QWORD*)(v46 + 156) = 0x200000003LL;
  *(_QWORD*)(v46 + 40) = a1;
  *(_QWORD*)(v46 + 48) = v50 + 2;
  v51 = GameData_2131320[0];
  *(_WORD*)(v46 + 176) = 0;
  *(_QWORD*)(v46 + 208) = 0;
  *(_QWORD*)(v46 + 216) = 0;
  *(_QWORD*)(v46 + 224) = 0;
  *(_QWORD*)(v46 + 232) = 0;
  *(_QWORD*)(v46 + 240) = 0;
  *(_QWORD*)(v46 + 128) = v51 + 2;
  *(_QWORD*)(v46 + 136) = 0;
  *(_BYTE*)(v46 + 168) = 1;
  *(_QWORD*)(v46 + 200) = 0;
  game_facility_1415980((_QWORD*)(v46 + 200)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v52 = *v8;
  *(_QWORD*)(a1 + 176) = v49;
  *(_QWORD*)(a1 + 184) = v47;
  v53 = fw_memory_HeapManager_Allocate_alt1(v52, 80, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v53 + 8) = 0;
  *(_QWORD*)(v53 + 16) = 0;
  *(_QWORD*)v53 = GameData_2038788;
  v54 = GameData_2131390[0];
  *(_QWORD*)(v53 + 40) = a1;
  *(_QWORD*)(v53 + 32) = v54 + 2;
  v55 = v53 + 32;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v101 = v53;
    v102 = __cxa_guard_acquire(&GameData_21a6130),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v53 = v101;
    if (v102 != 0) {
      v103 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v103;
      __cxa_guard_release(&GameData_21a6130),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v53 = v101;
    }
  }
  v57 = *((_QWORD*)&GameData_21a6120 + 1);
  v56 = GameData_21a6120;
  *(_QWORD*)(a1 + 192) = v55;
  *(_QWORD*)(a1 + 200) = v53;
  *(_QWORD*)(v53 + 64) = 0x3F80000000000000LL;
  *(_BYTE*)(v53 + 72) = 0;
  *(_OWORD*)(v53 + 48) = __PAIR128__(v57, v56);
  v58 = *a4;
  if (*a4 == 0) {
    v59 = *(_QWORD*)(a1 + 64);
    BYTE4(v128_.v128) = 1;
    LODWORD(v128_.v128) = -1;
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      v60 = v59;
    }
    else {
      v60 = a1 + 49;
    }
    GameRoutine_682bc0_alt1(&v130, v60),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    SceneCharacterAppearance_140ea90((void*)(&v125_.v125), &v130,
                                     (__int64)&v128_.v128),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v62 = v125_.v125;
    v63 = v125_.v126;
    v64 = a4[1];
    v125_.v125 = 0;
    v125_.v126 = 0;
    *a4 = v62;
    a4[1] = v63;
    if (v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(__n128*)&v61 = std___1___shared_weak_count___release_weak_alt1(),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v65 = v125_.v126;
    if (v125_.v126 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v125_.v126 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v65 + 16LL))(v65, v61),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v58 = *a4;
  }
  v66 = *((unsigned __int8*)a4 + 176);
  v67 = *(unsigned __int8*)(v58 + 112);
  if ((v66 & 2) != 0) {
    v68 = 0;
  }
  else {
    v68 = 0x1000000;
  }
  v69 = *(_QWORD*)(v58 + 128);
  v128_.v128 = *(_QWORD*)(v58 + 120);
  v128_.v129 = v69;
  if (v69 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 8), 1u,
                              memory_order_relaxed);
    v58 = *a4;
  }
  v105_.v105 = v58;
  v70 = a4[1];
  v105_.v106 = v70;
  if (v70 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                              memory_order_relaxed);
  }
  v71 = v66 >> 2;
  if ((a4[2] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v107_.v107, a4[4], a4[3]),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v72 = a4[3];
    v73 = a4[4];
    v107_.v107 = a4[2];
    v107_.v108 = v72;
    v107_.v109 = v73;
  }
  v74 = v68 & 0xFBFFFFFF | ((v71 & 1) << 26);
  SceneCharacter_1402470((__int64)v110_.v110, (__int64)(a4 + 6)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v75 = (__int64*)a4[28];
  v110_.v122 = *((_BYTE*)a4 + 176);
  if (v75 != nullptr) {
    if (v75 == a4 + 24) {
      v123_.v124 = v123_.v123;
      (*(void (**)(__int64*, _BYTE*))(*v75 + 24))(v75, v123_.v123),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v123_.v124 = (_BYTE*)(*(__int64 (**)(__int64*))(*v75 + 16))(v75),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    v123_.v124 = nullptr;
  }
  v76 = *v8;
  v125_.v127 = nullptr;
  v77 = fw_memory_HeapManager_Allocate_alt1(v76, 272, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v77 + 80) = 0;
  *(_BYTE*)(v77 + 192) = 0;
  *(_QWORD*)v77 =
      game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980_ptr;
  *(_QWORD*)(v77 + 16) = a1;
  v79 = v105_.v105;
  v78 = v105_.v106;
  v105_.v105 = 0;
  v105_.v106 = 0;
  *(_QWORD*)(v77 + 32) = v79;
  *(_QWORD*)(v77 + 40) = v78;
  v80 = v107_.v107;
  v81 = v107_.v108;
  v107_.v107 = 0;
  v107_.v108 = 0;
  *(_QWORD*)(v77 + 48) = v80;
  *(_QWORD*)(v77 + 56) = v81;
  v82 = v107_.v109;
  v107_.v109 = 0;
  *(_QWORD*)(v77 + 64) = v82;
  if (v110_.v121 == 1) {
    v83 = v110_.v112;
    v84 = v110_.v113;
    v85 = v110_.v110[0];
    v86 = v110_.v111;
    v110_.v112 = 0;
    v110_.v113 = 0;
    *(_QWORD*)(v77 + 120) = v83;
    *(_QWORD*)(v77 + 128) = v84;
    v87 = v110_.v116;
    v88 = v110_.v117;
    *(_DWORD*)(v77 + 80) = v85;
    v89 = v110_.v110[2];
    v90 = v110_.v110[3];
    v110_.v116 = 0;
    v110_.v117 = 0;
    *(_DWORD*)(v77 + 112) = v86;
    *(_QWORD*)(v77 + 152) = v87;
    *(_QWORD*)(v77 + 160) = v88;
    v91 = v110_.v114;
    v92 = v110_.v115;
    *(_QWORD*)(v77 + 96) = v89;
    *(_QWORD*)(v77 + 104) = v90;
    v110_.v114 = 0;
    v110_.v115 = 0;
    *(_QWORD*)(v77 + 136) = v91;
    *(_QWORD*)(v77 + 144) = v92;
    v93 = v110_.v118;
    v94 = v110_.v119;
    v110_.v118 = 0;
    v110_.v119 = 0;
    *(_QWORD*)(v77 + 168) = v93;
    *(_QWORD*)(v77 + 176) = v94;
    v95 = v110_.v120;
    v110_.v120 = 0;
    *(_QWORD*)(v77 + 184) = v95;
    *(_BYTE*)(v77 + 192) = 1;
  }
  *(_BYTE*)(v77 + 208) = v110_.v122;
  v96 = v123_.v124;
  if (v123_.v124 != nullptr) {
    if (v123_.v124 == v123_.v123) {
      v97 = v77;
      *(_QWORD*)(v77 + 256) = v77 + 224;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v96 + 24LL))((void*)(v96), v96),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v77 = v97;
    }
    else {
      *(_QWORD*)(v77 + 256) = v123_.v124;
      v123_.v124 = nullptr;
    }
  }
  else {
    *(_QWORD*)(v77 + 256) = 0;
  }
  v125_.v127 = (__int64*)v77;
  *(_QWORD*)(a1 +
             8) =
      GameRoutine_10784f0(&v128_.v128, v74 | (2 * v67), (__int64)&v125_.v125),
             v10 = COERCE_AS(__typeof__(v10),
                             PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
             v11 = COERCE_AS(__typeof__(v11),
                             PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
             v12 = COERCE_AS(__typeof__(v12),
                             PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
             v13 = COERCE_AS(__typeof__(v13),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
             v14 = COERCE_AS(__typeof__(v14),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
             v61 = COERCE_AS(__typeof__(v61),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v125_.v127 == &v125_.v125) {
    v98 = 32;
  }
  else {
    if (v125_.v127 == nullptr) {
      goto LABEL_60;
    }
    v98 = 40;
  }
  (*(void (**)(__int64))(*v125_.v127 + v98))((__int64)v125_.v127),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_60:
  result = GameRoutine_a0d9a0_alt1((__int64)&v105_.v105),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v100 = v128_.v129;
  if (v128_.v129 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v128_.v129 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v100 + 16LL))(
        v100, *(long double*)&result),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__int64 SceneCharacter_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *(_QWORD*)a1 = game_facility_SceneCharacter_vtable;
  if (*(_QWORD*)(a1 + 8) != 0) {
    v12 = *(_QWORD*)(a1 + 8);
    GameRoutine_a867a0(&v12);
    *(_QWORD*)(a1 + 8) = 0;
  }
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 152);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 136);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 120);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
      goto LABEL_26;
    }
  }
  else if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
    goto LABEL_26;
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }

LABEL_26:
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = &game_facility_SceneObjectHolder_vtable;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SceneCharacter_13ff750(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  __int64* v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    v2 = *(_QWORD*)(a1 + 144);
    v3 = *(_QWORD*)(a1 + 152);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(v2 + 8);
      if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v10 = 0, v11 = &v10,
                      GameRoutine_1469c40(&v11, &v11, v6), v10 != 0)) {
        v7 = *(_BYTE*)(v10 + 342) & 1;
      }
      else {
        v7 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v7 != 0) {
        LABEL_9:
          LOBYTE(v1) = *(_BYTE*)(a1 + 104);
          return v1 & 1;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
        if ((v7 & 1) != 0) {
          goto LABEL_9;
        }
      }
    LABEL_15:
      LOBYTE(v1) = 0;
      return v1 & 1;
    }
    v1 = *(_QWORD*)(v2 + 8);
    if (v1 != 0) {
      v8 = *(_QWORD*)(v1 + 8);
      v10 = 0;
      v11 = &v10;
      GameRoutine_1469c40(&v11, &v11, v8);
      LOBYTE(v1) = v10;
      if (v10 != 0) {
        if ((*(_BYTE*)(v10 + 342) & 1) != 0) {
          goto LABEL_9;
        }
        goto LABEL_15;
      }
    }
  }
  return v1 & 1;
}

unsigned __int64 SceneCharacter_13ffb80(unsigned __int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  _QWORD v24[2];

  if ((*(_BYTE*)(result + 104) & 1) == 0) {
    v1 = result;
    v2 = *(_QWORD*)GameData_212dce8;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      v3 = *(_QWORD*)(result + 40);
    }
    else {
      v3 = result + 25;
    }
    result = strlen(v3);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0(result);
    }
    v4 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v6 = 26;
      }
      else {
        v6 = (result | 7) + 1;
      }
      v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6,
                                                 16, 0);
      v22 = v4;
      v23 = v5;
      v21 = v6 | 1;
    }
    else {
      LOBYTE(v21) = 2 * result;
      v5 = (char*)&v21 + 1;
      if (result == 0) {
      LABEL_14:
        v5[v4] = 0;
        v7 = *(_QWORD*)(v2 + 208);
        v8 = *(_QWORD*)(v2 + 216);
        if (v7 == v8) {
          v18 = false;
          if ((v21 & 1) == 0) {
          LABEL_34:
            if (!v18) {
              *(_BYTE*)(v1 + 104) = 1;
            }
            return result;
          }
        }
        else {
          v9 = v7 + 8;
          do {
            v10 = v23;
            v11 = *(_QWORD*)(v9 - 8);
            v12 = (unsigned __int64)(unsigned __int8)v21 >> 1;
            if ((v21 & 1) != 0) {
              v12 = v22;
            }
            else {
              v10 = (char*)&v21 + 1;
            }
            v24[0] = v10;
            v24[1] = v12;
            v13 = *(_BYTE*)(v11 + 24);
            v14 = *(_QWORD*)(v11 + 40);
            v15 = v11 + 25;
            if ((v13 & 1) != 0) {
              v16 = v14;
            }
            else {
              v16 = v15;
            }
            v17 = GameRoutine_7a88a0(v24);
            result = game_HashString(v16);
            v18 = v17 == result;
            v19 = v17 == result || v9 == v8;
            v9 += 8;
          } while (!v19);
          if ((v21 & 1) == 0) {
            goto LABEL_34;
          }
        }
        if (v23 != nullptr) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
        }
        goto LABEL_34;
      }
    }
    result = memmove(v5, v3, v4);
    goto LABEL_14;
  }
  return result;
}

__int64 SceneCharacter_13ffd30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
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

  v2 = *(_QWORD*)(a1 + 144);
  v3 = *(_QWORD*)(a1 + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      result = std___1___shared_weak_count___release_weak(v3);
    }
    if (*(_QWORD*)(a1 + 8) == 0) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (*(_QWORD*)(a1 + 8) == 0) {
      return result;
    }
  }
  v5 = *(_QWORD*)(a1 + 144);
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 8);
    if (v7 != 0 && (v8 = *(_QWORD*)(v7 + 8), v22 = 0, v23 = &v22,
                    result = GameRoutine_1469c40(&v23, &v23, v8), v22 != 0)) {
      v9 = *(_BYTE*)(v22 + 342) & 1;
    }
    else {
      v9 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v9 == 0) {
        return result;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
      if ((v9 & 1) == 0) {
        return result;
      }
    }
  }
  else {
    v10 = *(_QWORD*)(v5 + 8);
    if (v10 == 0) {
      return result;
    }
    v11 = *(_QWORD*)(v10 + 8);
    v22 = 0;
    v23 = &v22;
    result = GameRoutine_1469c40(&v23, &v23, v11);
    if (v22 == 0 || (*(_BYTE*)(v22 + 342) & 1) == 0) {
      return result;
    }
  }
  if (*(_BYTE*)(a1 + 104) == 1) {
    v12 = *(_QWORD*)(a1 + 128);
    v13 = *(_QWORD*)(a1 + 136);
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
    }
    v14 = *(_QWORD*)(a1 + 112);
    v15 = *(_QWORD*)(a1 + 120);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
    }
    v16 = *(_QWORD*)(a1 + 160);
    v17 = *(_QWORD*)(a1 + 168);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    }
    v18 = *(_QWORD*)(a1 + 192);
    v19 = *(_QWORD*)(a1 + 200);
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      (*(void (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
    }
    v20 = *(_QWORD*)(a1 + 176);
    v21 = *(_QWORD*)(a1 + 184);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        return std___1___shared_weak_count___release_weak(v21);
      }
    }
    else {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
    }
  }
  return result;
}

__int64 SceneCharacter_14009a0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v3 = a1[16];
  v4 = a1[17];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1405080(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v6 = a1[14];
    v7 = a1[15];
    if (v7 != 0) {
      goto LABEL_5;
    }
    return GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  }
  GameRoutine_1405080(v3);
  v6 = a1[14];
  v7 = a1[15];
  if (v7 == 0) {
    return GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  }

LABEL_5:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v6, *(unsigned int*)(v6 + 108), a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 SceneCharacter_1400a90(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 result;
  unsigned int v10;

  v3 = a1[16];
  v4 = a1[17];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1405080(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v7 = a1[14];
    v6 = a1[15];
    if (v6 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    v10 = GameRoutine_108c8a0(*(unsigned int*)(v7 + 108));
    return GameRoutine_1412540(v7, v10, a2);
  }
  GameRoutine_1405080(v3);
  v7 = a1[14];
  v6 = a1[15];
  if (v6 == 0) {
    goto LABEL_8;
  }

LABEL_5:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_108c8a0(*(unsigned int*)(v7 + 108));
  result = GameRoutine_1412540(v7, v8, a2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 SceneCharacter_1400b90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  __int64 result;
  unsigned int v7;

  v3 = *(_QWORD*)(a1 + 112);
  v2 = *(_QWORD*)(a1 + 120);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_108c8a0(*(unsigned int*)(v3 + 108));
    result = GameRoutine_1412540(v3, v5, a2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    v7 = GameRoutine_108c8a0(*(unsigned int*)(v3 + 108));
    return GameRoutine_1412540(v3, v7, a2);
  }
  return result;
}

__int64 SceneCharacter_1400f80(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;

  v2 = *(_QWORD*)(result + 144);
  v3 = *(_QWORD*)(result + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v2 + 8);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 8);
      v11 = 0;
      v12 = &v11;
      result = GameRoutine_1469c40(&v12, &v12, v6);
      if (v11 != 0) {
        if ((a2 & 1) != 0) {
          v7 = 0;
        }
        else {
          v7 = 0x1000000;
        }
        *(_DWORD*)((char*)((_UNKNOWN*)0x154LL) + v11) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x154LL) + v11) & 0xFEFFFFFF | v7;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v8 = *(_QWORD*)(v2 + 8);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 8);
      v11 = 0;
      v12 = &v11;
      result = GameRoutine_1469c40(&v12, &v12, v9);
      if (v11 != 0) {
        if ((a2 & 1) != 0) {
          v10 = 0;
        }
        else {
          v10 = 0x1000000;
        }
        *(_DWORD*)((char*)((_UNKNOWN*)0x154LL) + v11) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x154LL) + v11) & 0xFEFFFFFF | v10;
      }
    }
  }
  return result;
}

__int64 SceneCharacter_1401090(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;

  v2 = *(_QWORD*)(result + 144);
  v3 = *(_QWORD*)(result + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v2 + 8);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 8);
      v9 = 0;
      v10 = &v9;
      GameRoutine_1469c40(&v10, &v10, v6);
      result = v9;
      if (v9 != 0) {
        result = GameRoutine_107e090(v9, a2);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v7 = *(_QWORD*)(v2 + 8);
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 8);
      v9 = 0;
      v10 = &v9;
      GameRoutine_1469c40(&v10, &v10, v8);
      result = v9;
      if (v9 != 0) {
        return GameRoutine_107e090(v9, a2);
      }
    }
  }
  return result;
}

__int64 SceneCharacter_1401180(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
    char gap40_[8];
    int v11;
    float v12;
    __int16 v13;
    char gap58_[14];
    __int64 v14;
  } v9_;

  v2 = *(_QWORD*)(a1 + 176);
  v3 = *(_QWORD*)(a1 + 184);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v9_.v10 = nullptr;
    v9_.v12 = a2;
    v9_.v13 = 0;
    v9_.v11 = 0x800000;
    SceneCharacterLookAt_1416c80((__int64*)(v2 + 168), v9_.v9);
    if ((v9_.v13 & 1) != 0 && v9_.v14 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v9_.v14);
    }
    result = (__int64)v9_.v10;
    if (v9_.v10 == v9_.v9) {
      v6 = 32;
    }
    else {
      if (v9_.v10 == nullptr) {
        goto LABEL_20;
      }
      v6 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak_alt2(v3);
    }
    return result;
  }
  v9_.v10 = nullptr;
  v9_.v12 = a2;
  v9_.v13 = 0;
  v9_.v11 = 0x800000;
  SceneCharacterLookAt_1416c80((__int64*)(v2 + 168), v9_.v9);
  if ((v9_.v13 & 1) != 0 && v9_.v14 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v9_.v14);
  }
  result = (__int64)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

__int64 SceneCharacter_1401300(__int64 result, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 != 0 && a2 != result) {
    v10_.v10[0] = GameData_2038958;
    v10_.v10[1] = a2;
    v10_.v11 = v10_.v10;
    v5 = result;
    v6 = *(_QWORD*)(result + 176);
    v7 = *(_QWORD*)(v5 + 184);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      SceneCharacterLookAt_1416a00_alt1(v6, (__int64)v10_.v10,
                                        0x1.0000000000000p+0f, a3),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt2(v7),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else {
      SceneCharacterLookAt_1416a00_alt1(v6, (__int64)v10_.v10,
                                        0x1.0000000000000p+0f, a3),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    result = (__int64)v10_.v11;
    if (v10_.v11 == v10_.v10) {
      v9 = 32;
    }
    else {
      if (v10_.v11 == nullptr) {
        return result;
      }
      v9 = 40;
    }
    return (*(__int64 (**)(_QWORD*, __int64))(*v10_.v11 + v9))(v10_.v11, v8);
  }
  return result;
}

__int64 SceneCharacter_14013e0(__int64 result, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  char* v13;

  if (a2 == 0 || a2 == result) {
    return result;
  }
  v4 = *(_QWORD*)(result + 176);
  v3 = *(_QWORD*)(result + 184);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a2 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 40);
  }
  else {
    v6 = a2 + 25;
  }
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v12[1] = v8;
    v13 = v9;
    v12[0] = v10 | 1;
    goto LABEL_16;
  }
  LOBYTE(v12[0]) = 2 * v7;
  v9 = (char*)v12 + 1;
  if (v7 != 0) {
  LABEL_16:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  result = GameRoutine_1416b10(v4, v12, a3);
  if ((v12[0] & 1) != 0 && v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__n128 SceneCharacter_1401550(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  struct {
    unsigned __int8 v7[16];
    __int64 v8;
  } v7_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_facility_1410b80((void*)((__int64)v7_.v7), a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 112);
  v4 = *(_QWORD*)(a1 + 120);
  if (v4 == 0) {
    GameRoutine_14127e0_alt1(v3, v7_.v7),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v7_.v7[0] & 1) == 0) {
      return result;
    }
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_14127e0_alt1(v3, v7_.v7),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1();
  }
  if ((v7_.v7[0] & 1) != 0) {
  LABEL_7:
    if (v7_.v8 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    }
  }
  return result;
}

__int64 SceneCharacter_1401610(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 112);
  v3 = *(_QWORD*)(a1 + 120);
  if (v3 == 0) {
    return GameRoutine_1412d00(v2);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412d00(v2);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64* SceneCharacter_1401690(__int64 a1, unsigned __int8 a2)
{
  __int64 v4;
  __int64* result;
  __int64 v6;
  __int64 v7;
  _BYTE v8[8];

  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 64);
  }
  else {
    v4 = a1 + 49;
  }
  GameRoutine_682bc0(v8, v4);
  result = GameRoutine_1391860((__int64)v8, a2);
  if (*result != 0 && *(_BYTE*)*result != 0) {
    strlen(*result);
    v6 = *(_QWORD*)(a1 + 112);
    v7 = *(_QWORD*)(a1 + 120);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
      result = (__int64*)GameRoutine_1412d00(v6);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return (__int64*)std___1___shared_weak_count___release_weak(v7);
      }
    }
    else {
      return (__int64*)GameRoutine_1412d00(v6);
    }
  }
  return result;
}

__int64 SceneCharacter_1401750(__int64 a1, unsigned int a2, char a3,
                               __int64* a4)
{
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  _QWORD v14[3];
  int v15;
  char v16;
  __int64 v17;
  int v18;
  __int16 v19;

  v7 = GameRoutine_142b1a0(a2, a1);
  v8 = *a4;
  v9 = *((_DWORD*)a4 + 2);
  v15 = v7;
  v14[0] = 0;
  v16 = a3;
  v17 = v8;
  LOWORD(v8) = *((_WORD*)a4 + 6);
  v10 = *(_QWORD*)(a1 + 112);
  v11 = *(_QWORD*)(a1 + 120);
  v18 = v9;
  v19 = v8;
  if (v11 == 0) {
    result = GameRoutine_14127e0(v10, v14);
    if ((v14[0] & 1) == 0) {
      return result;
    }
    goto LABEL_7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_14127e0(v10, v14);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v14[0] & 1) != 0) {
  LABEL_7:
    if (v14[2] != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    }
  }
  return result;
}

__int64 SceneCharacter_1401850(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  v7 = result;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)result = GameData_20389d8;
  *(float*)(result + 52) = a2;
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 24) = game_facility_SceneCharacterBehaviorTurn_vtable;
  v8 = result + 24;
  *(_QWORD*)(result + 84) = 0x200000003LL;
  *(_QWORD*)(result + 56) = game_facility_SceneInterpolatorFloat_vtable;
  *(_QWORD*)(result + 64) = 0;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    result = GameRoutine_1403f60(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_14019b0(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  v7 = result;
  *(_BYTE*)(result + 48) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_QWORD*)result = GameData_2038a28;
  *(_QWORD*)(result + 84) = 0x200000003LL;
  *(_QWORD*)(result + 56) = game_facility_SceneInterpolatorFloat_vtable;
  *(_QWORD*)(result + 64) = 0;
  *(float*)(result + 96) = a2;
  *(_QWORD*)(result + 24) =
      game_facility_SceneCharacterBehaviorTurnTarget_vtable;
  v8 = result + 24;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    result = GameRoutine_1403f60(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64 SceneCharacter_1401b10(__int64 a1, _QWORD* a2, char a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;

  v4 = *(_QWORD**)(a1 + 128);
  v3 = *(_QWORD*)(a1 + 136);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = v4[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  v9 = result;
  *(_QWORD*)result = GameData_2038a78;
  v10 = GameData_2131308[0];
  *(_QWORD*)(result + 40) = v4;
  *(_QWORD*)(result + 48) = v7;
  *(_BYTE*)(result + 56) = 0;
  *(_QWORD*)(result + 32) = v10 + 2;
  v11 = result + 32;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(result + 64, a2[2], a2[1]);
  }
  else {
    v12 = a2[1];
    *(_QWORD*)(result + 64) = *a2;
    *(_QWORD*)(result + 72) = v12;
    *(_QWORD*)(result + 80) = a2[2];
  }
  *(_BYTE*)(v9 + 88) = a3 & 1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21a6130);
    if ((_DWORD)result != 0) {
      v19 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v19;
      result = __cxa_guard_release(&GameData_21a6130);
    }
  }
  v13 = GameData_21a6120;
  *(_BYTE*)(v9 + 112) = 0;
  *(_BYTE*)(v9 + 128) = 0;
  *(_DWORD*)(v9 + 144) = 0;
  *(_OWORD*)(v9 + 96) = v13;
  v14 = v4[3];
  v15 = v4[4];
  v16 = 32 * (v15 - v14) - 1;
  if (v15 == v14) {
    v16 = 0;
  }
  v17 = v4[7] + v4[6];
  if (v16 == v17) {
    result = GameRoutine_1403f60(v4 + 2);
    v14 = v4[3];
    v17 = v4[7] + v4[6];
  }
  v18 = (__int64*)(*(_QWORD*)(v14 + 8 * (v17 >> 8)) +
                   16LL * (unsigned __int8)v17);
  *v18 = v11;
  v18[1] = v9;
  ++v4[7];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 SceneCharacter_1401ce0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  v7 = (_QWORD*)result;
  *(_QWORD*)result = GameData_2038ac8;
  *(_QWORD*)(result + 32) = v3;
  *(_QWORD*)(result + 40) = v5;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = game_facility_SceneCharacterBehaviorAnim_vtable;
  v8 = result + 24;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = fw_text_String_CopyTerminated(result + 56, a2[2], a2[1]);
  }
  else {
    v9 = a2[1];
    *(_QWORD*)(result + 56) = *a2;
    *(_QWORD*)(result + 64) = v9;
    *(_QWORD*)(result + 72) = a2[2];
  }
  v10 = a2[4];
  v7[10] = a2[3];
  v7[11] = v10;
  *(_QWORD*)((char*)v7 + 94) = *(_QWORD*)((char*)a2 + 38);
  v11 = v3[3];
  v12 = v3[4];
  v13 = 32 * (v12 - v11) - 1;
  if (v12 == v11) {
    v13 = 0;
  }
  v14 = v3[7] + v3[6];
  if (v13 == v14) {
    result = GameRoutine_1403f60(v3 + 2);
    v11 = v3[3];
    v14 = v3[7] + v3[6];
  }
  v15 = (__int64*)(*(_QWORD*)(v11 + 8 * (v14 >> 8)) +
                   16LL * (unsigned __int8)v14);
  *v15 = v8;
  v15[1] = (__int64)v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

void SceneCharacter_1401e50(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 32) = v3;
  *(_QWORD*)(v6 + 40) = v5;
  v7 = v6;
  *(_WORD*)(v6 + 48) = 0;
  *(_QWORD*)v6 = GameData_2038b18;
  *(float*)(v6 + 52) = a2;
  *(_QWORD*)(v6 + 24) = game_facility_SceneCharacterBehaviorFade_vtable;
  v8 = v6 + 24;
  v9 = v3[3];
  v10 = v3[4];
  v11 = 32 * (v10 - v9) - 1;
  if (v10 == v9) {
    v11 = 0;
  }
  v12 = v3[7] + v3[6];
  if (v11 == v12) {
    GameRoutine_1403f60_alt1(v3 + 2);
    v9 = v3[3];
    v12 = v3[7] + v3[6];
  }
  v13 =
      (__int64*)(*(_QWORD*)(v9 + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12);
  *v13 = v8;
  v13[1] = v7;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
}

__int64 SceneCharacter_1401f80(__int64 a1, float a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;

  v3 = *(_QWORD**)(a1 + 128);
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[1];
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2038b68;
  result = GameRoutine_1407780(v6 + 3, v3, v5, a2);
  v10 = v3[3];
  v11 = v3[4];
  v12 = 32 * (v11 - v10) - 1;
  if (v11 == v10) {
    v12 = 0;
  }
  v13 = v3[7] + v3[6];
  if (v12 == v13) {
    result = GameRoutine_1403f60(v3 + 2);
    v10 = v3[3];
    v13 = v3[7] + v3[6];
  }
  v14 =
      (_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13);
  *v14 = v7;
  v14[1] = v8;
  ++v3[7];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

_QWORD* SceneCharacter_14020c0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    return *(_QWORD**)(v1 + 392);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 64);
  }
  else {
    v3 = a1 + 49;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    return nullptr;
  }
  v5 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return nullptr;
  }
  v8 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v9 = v4;
    if (v4 >= v5) {
      v9 = v4 % v5;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v2 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v9);
  if (v2 != nullptr) {
    v10 = (_QWORD*)*v2;
    if (*v2 != 0) {
      if ((v5 & v8) == 0) {
        while (1) {
          v12 = v10[1];
          if (v12 == v4) {
            if (v10[2] == v4) {
              return (_QWORD*)v10[3];
            }
          }
          else if ((v12 & v8) != v9) {
            return nullptr;
          }
          v10 = (_QWORD*)*v10;
          v2 = nullptr;
          if (v10 == nullptr) {
            return v2;
          }
        }
      }
      while (1) {
        v11 = v10[1];
        if (v11 == v4) {
          if (v10[2] == v4) {
            return (_QWORD*)v10[3];
          }
        }
        else {
          if (v11 >= v5) {
            v11 %= v5;
          }
          if (v11 != v9) {
            return nullptr;
          }
        }
        v10 = (_QWORD*)*v10;
        v2 = nullptr;
        if (v10 == nullptr) {
          return v2;
        }
      }
    }
    return nullptr;
  }
  return v2;
}

__int64 SceneCharacter_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = result;
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    result = GameRoutine_a867a0(&v2);
  }
  *(_QWORD*)(v1 + 8) = 0;
  return result;
}

__int64 SceneCharacter_1402240(_QWORD* a1, __int64* a2)
{
  _QWORD* v2;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  v2 = (_QWORD*)a1[2];
  v5 = (_QWORD*)v2[3];
  v6 = (_QWORD*)v2[4];
  v2[2] = 0;
  if (v5 != v6) {
    do {
      v7 = (_QWORD*)*v5++;
      GameRoutine_a7c2c0(*v7);
    } while (v5 != v6);
    v5 = (_QWORD*)v2[3];
  }
  v2[4] = v5;
  v8 = a1[14];
  v9 = a1[15];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_1413100(v8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    GameRoutine_1413100(v8);
  }
  v11 = a1[18];
  v10 = a1[19];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *a2;
  v12 = a2[1];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v13 == 0 || (v14 = *(_QWORD*)(v13 + 24)) == 0) {
    v14 = 0;
  }
  *(_QWORD*)(v11 + 112) = v14;
  if (v12 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v13 == 0 || (v15 = *(_QWORD*)(v13 + 32)) == 0) {
    v15 = 0;
  }
  *(_QWORD*)(v11 + 120) = v15;
  if (v12 != 0) {
    v16 = (atomic_ullong*)(v12 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_25;
      }
    LABEL_29:
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      if (v10 == 0) {
        goto LABEL_30;
      }
      goto LABEL_26;
    }
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_29;
    }
  }
LABEL_25:
  if (v10 != 0) {
  LABEL_26:
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_30:
  v17 = a1[20];
  v18 = a1[21];
  if (v18 == 0) {
    return GameRoutine_1984d70(v17);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1984d70(v17);
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

__int64 SceneCharacter_1402470(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_BYTE*)result = 0;
  *(_BYTE*)(result + 112) = 0;
  if (*(_BYTE*)(a2 + 112) == 1) {
    v3 = result;
    *(_DWORD*)result = *(_DWORD*)a2;
    *(_QWORD*)(result + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(result + 16) = *(_QWORD*)(a2 + 16);
    *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
    if ((*(_BYTE*)(a2 + 40) & 1) != 0) {
      result = fw_text_String_CopyTerminated(result + 40, *(_QWORD*)(a2 + 56),
                                             *(_QWORD*)(a2 + 48));
    }
    else {
      v4 = *(_QWORD*)(a2 + 40);
      v5 = *(_QWORD*)(a2 + 56);
      *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(result + 56) = v5;
      *(_QWORD*)(result + 40) = v4;
    }
    if ((*(_BYTE*)(a2 + 64) & 1) != 0) {
      result = fw_text_String_CopyTerminated(v3 + 64, *(_QWORD*)(a2 + 80),
                                             *(_QWORD*)(a2 + 72));
    }
    else {
      *(_QWORD*)(v3 + 72) = *(_QWORD*)(a2 + 72);
      v6 = *(_QWORD*)(a2 + 64);
      *(_QWORD*)(v3 + 80) = *(_QWORD*)(a2 + 80);
      *(_QWORD*)(v3 + 64) = v6;
    }
    if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
      result = fw_text_String_CopyTerminated(v3 + 88, *(_QWORD*)(a2 + 104),
                                             *(_QWORD*)(a2 + 96));
    }
    else {
      v7 = *(_QWORD*)(a2 + 88);
      v8 = *(_QWORD*)(a2 + 104);
      *(_QWORD*)(v3 + 96) = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(v3 + 104) = v8;
      *(_QWORD*)(v3 + 88) = v7;
    }
    *(_BYTE*)(v3 + 112) = 1;
  }
  return result;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1402980(
    _QWORD* a1)
{
  *a1 = GameData_20387d8;
  return GameRoutine_a0d9a0(a1 + 4);
}

__int64

game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1402990(
    _QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_20387d8;
  GameRoutine_a0d9a0(a1 + 4);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

_QWORD*

game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_14029f0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  v3 = v2;
  *v2 = GameData_20387d8;
  v2[2] = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 40);
  v2[4] = *(_QWORD*)(a1 + 32);
  v2[5] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 6, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    v5 = *(_QWORD*)(a1 + 56);
    v6 = *(_QWORD*)(a1 + 64);
    v2[6] = *(_QWORD*)(a1 + 48);
    v2[7] = v5;
    v2[8] = v6;
  }
  SceneCharacter_1402470((__int64)(v3 + 10), a1 + 80);
  v7 = *(_QWORD*)(a1 + 256);
  *((_BYTE*)v3 + 208) = *(_BYTE*)(a1 + 208);
  if (v7 != 0) {
    if (v7 == a1 + 224) {
      v3[32] = v3 + 28;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    }
    else {
      v3[32] = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v3[32] = 0;
  }
  return v3;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1402af0(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  *(_QWORD*)a2 = GameData_20387d8;
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(a2 + 48, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
    v5 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 64) = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 48) = v5;
  }
  SceneCharacter_1402470(a2 + 80, a1 + 80);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
  result = *(_QWORD*)(a1 + 256);
  if (result != 0) {
    if (result == a1 + 224) {
      *(_QWORD*)(a2 + 256) = a2 + 224;
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24LL))(
          *(_QWORD*)(a1 + 256));
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(a2 + 256) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 256) = 0;
  }
  return result;
}

__int64

game_facility_SceneCharacter_SceneCharacter_lambda0_Invoke_1402c00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
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
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
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
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  int v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int16 v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 result;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  struct {
    __int64 v71;
    __int64 v72;
  } v71_;
  struct {
    __int64 v73;
    __int64 v74;
    __int64 v75;
  } v73_;
  struct {
    int v76[4];
    __int64 v77;
    __int64 v78;
    int v79;
    char gap100_[4];
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    char v89;
    char gap177_[15];
    char v90;
  } v76_;
  struct {
    _BYTE v91[32];
    _BYTE* v92;
  } v91_;
  struct {
    __int16 v93;
    char v94;
    char gap259_[29];
    __int16* v95;
  } v93_;

  v1 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(v1 + 8);
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    v4 = *(const char**)(v1 + 88);
  }
  else {
    v4 = (const char*)(v1 + 73);
  }
  v5 = strlen_alt1(v4);
  if (v5 != 0) {
    if (v5 >= 0xFF) {
      v6 = 255;
    }
    else {
      v6 = v5;
    }
    memmove_alt1(v3 + 16, (__int64)v4, v6);
  }
  *(_QWORD*)(v3 + 272) = v5;
  *(_BYTE*)(v3 + 16 + v5) = 0;
  v7 = *(_QWORD*)(v1 + 112);
  v8 = *(_QWORD*)(v1 + 120);
  if (v8 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    v9 = *(_QWORD*)(v1 + 128);
    v10 = *(_QWORD*)(v1 + 136);
    if (v10 != 0) {
      goto LABEL_13;
    }
  LABEL_28:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    v11 = *(_QWORD*)(v1 + 144);
    v12 = *(_QWORD*)(v1 + 152);
    if (v12 != 0) {
      goto LABEL_16;
    }
  LABEL_29:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    v13 = *(_QWORD*)(v1 + 160);
    v14 = *(_QWORD*)(v1 + 168);
    if (v14 != 0) {
      goto LABEL_19;
    }
  LABEL_30:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    v15 = *(_QWORD*)(v1 + 176);
    v16 = *(_QWORD*)(v1 + 184);
    if (v16 != 0) {
      goto LABEL_22;
    }
    goto LABEL_31;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  v9 = *(_QWORD*)(v1 + 128);
  v10 = *(_QWORD*)(v1 + 136);
  if (v10 == 0) {
    goto LABEL_28;
  }
LABEL_13:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                            memory_order_relaxed);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt2(v10);
  }
  v11 = *(_QWORD*)(v1 + 144);
  v12 = *(_QWORD*)(v1 + 152);
  if (v12 == 0) {
    goto LABEL_29;
  }
LABEL_16:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt2(v12);
  }
  v13 = *(_QWORD*)(v1 + 160);
  v14 = *(_QWORD*)(v1 + 168);
  if (v14 == 0) {
    goto LABEL_30;
  }
LABEL_19:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                            memory_order_relaxed);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt2(v14);
  }
  v15 = *(_QWORD*)(v1 + 176);
  v16 = *(_QWORD*)(v1 + 184);
  if (v16 != 0) {
  LABEL_22:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt2(v16);
    }
    v17 = *(_QWORD*)(v1 + 192);
    v18 = *(_QWORD*)(v1 + 200);
    if (v18 != 0) {
      goto LABEL_25;
    }
  LABEL_32:
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    goto LABEL_33;
  }
LABEL_31:
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  v17 = *(_QWORD*)(v1 + 192);
  v18 = *(_QWORD*)(v1 + 200);
  if (v18 == 0) {
    goto LABEL_32;
  }
LABEL_25:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                            memory_order_relaxed);
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt2(v18);
  }
LABEL_33:
  v20 = *(_QWORD*)(v1 + 144);
  v19 = *(_QWORD*)(v1 + 152);
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  v22 = *(_QWORD*)(a1 + 32);
  v21 = *(_QWORD*)(a1 + 40);
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v22 == 0 || (v23 = *(_QWORD*)(v22 + 24)) == 0) {
    v23 = 0;
  }
  *(_QWORD*)(v20 + 112) = v23;
  if (v21 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt2(v21);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v22 == 0 || (v24 = *(_QWORD*)(v22 + 32)) == 0) {
    v24 = 0;
  }
  *(_QWORD*)(v20 + 120) = v24;
  if (v21 != 0) {
    v25 = (atomic_ullong*)(v21 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_50;
      }
    LABEL_54:
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt2(v21);
      if (v19 == 0) {
        goto LABEL_55;
      }
      goto LABEL_51;
    }
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt2(v21);
    if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_54;
    }
  }
LABEL_50:
  if (v19 != 0) {
  LABEL_51:
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt2(v19);
    }
  }
LABEL_55:
  v26 = GameData_21f4000;
  v27 = *(_QWORD*)(a1 + 40);
  v71_.v71 = *(_QWORD*)(a1 + 32);
  v71_.v72 = v27;
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v73_.v73, *(_QWORD*)(a1 + 64),
                                       *(_QWORD*)(a1 + 56));
  }
  else {
    v28 = *(_QWORD*)(a1 + 56);
    v29 = *(_QWORD*)(a1 + 64);
    v73_.v73 = *(_QWORD*)(a1 + 48);
    v73_.v74 = v28;
    v73_.v75 = v29;
  }
  SceneCharacter_1402470((__int64)v76_.v76, a1 + 80);
  v30 = *(_QWORD*)(a1 + 256);
  v76_.v90 = *(_BYTE*)(a1 + 208);
  if (v30 != 0) {
    if (v30 == a1 + 224) {
      v91_.v92 = v91_.v91;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v30 + 24LL))(v30, v91_.v91);
    }
    else {
      v91_.v92 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    }
  }
  else {
    v91_.v92 = nullptr;
  }
  v93_.v95 = nullptr;
  v31 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  *(_BYTE*)(v31 + 80) = 0;
  *(_BYTE*)(v31 + 192) = 0;
  *(_QWORD*)v31 =
      game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400_ptr;
  *(_QWORD*)(v31 + 16) = v1;
  v33 = v71_.v71;
  v32 = v71_.v72;
  v71_.v71 = 0;
  v71_.v72 = 0;
  *(_QWORD*)(v31 + 32) = v33;
  *(_QWORD*)(v31 + 40) = v32;
  v34 = v73_.v73;
  v35 = v73_.v74;
  v73_.v73 = 0;
  v73_.v74 = 0;
  *(_QWORD*)(v31 + 48) = v34;
  *(_QWORD*)(v31 + 56) = v35;
  v36 = v73_.v75;
  v73_.v75 = 0;
  *(_QWORD*)(v31 + 64) = v36;
  if (v76_.v89 == 1) {
    v37 = v76_.v80;
    v38 = v76_.v81;
    v39 = v76_.v76[0];
    v40 = v76_.v79;
    v76_.v80 = 0;
    v76_.v81 = 0;
    *(_QWORD*)(v31 + 120) = v37;
    *(_QWORD*)(v31 + 128) = v38;
    v41 = v76_.v84;
    v42 = v76_.v85;
    *(_DWORD*)(v31 + 80) = v39;
    v43 = v76_.v77;
    v44 = v76_.v78;
    v76_.v84 = 0;
    v76_.v85 = 0;
    *(_DWORD*)(v31 + 112) = v40;
    *(_QWORD*)(v31 + 152) = v41;
    *(_QWORD*)(v31 + 160) = v42;
    v45 = v76_.v82;
    v46 = v76_.v83;
    *(_QWORD*)(v31 + 96) = v43;
    *(_QWORD*)(v31 + 104) = v44;
    v76_.v82 = 0;
    v76_.v83 = 0;
    *(_QWORD*)(v31 + 136) = v45;
    *(_QWORD*)(v31 + 144) = v46;
    v47 = v76_.v86;
    v48 = v76_.v87;
    v76_.v86 = 0;
    v76_.v87 = 0;
    *(_QWORD*)(v31 + 168) = v47;
    *(_QWORD*)(v31 + 176) = v48;
    v49 = v76_.v88;
    v76_.v88 = 0;
    *(_QWORD*)(v31 + 184) = v49;
    *(_BYTE*)(v31 + 192) = 1;
  }
  *(_BYTE*)(v31 + 208) = v76_.v90;
  v50 = v91_.v92;
  if (v91_.v92 != nullptr) {
    if (v91_.v92 == v91_.v91) {
      v51 = v31;
      *(_QWORD*)(v31 + 256) = v31 + 224;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v50 + 24LL))((void*)(v50), v50);
      v31 = v51;
    }
    else {
      *(_QWORD*)(v31 + 256) = v91_.v92;
      v91_.v92 = nullptr;
    }
  }
  else {
    *(_QWORD*)(v31 + 256) = 0;
  }
  v52 = *(unsigned __int8*)(v26 + 132);
  v93_.v95 = (__int16*)v31;
  if (v52 == 1) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 48LL))(v31);
  }
  else {
    v53 = *(_QWORD*)(v26 + 144);
    if (v53 >= *(_QWORD*)(v26 + 152)) {
      v54 = GameHr_138ea40((__int64*)(v26 + 136), (__int64)&v93_.v93);
    }
    else {
      *(_QWORD*)(v53 + 32) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      v54 = v53 + 48;
    }
    *(_QWORD*)(v26 + 144) = v54;
  }
  if (v93_.v95 == &v93_.v93) {
    v55 = 32;
  }
  else {
    if (v93_.v95 == nullptr) {
      goto LABEL_83;
    }
    v55 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v93_.v95 + v55))((__int64)v93_.v95);
LABEL_83:
  GameRoutine_a0d9a0_alt2((__int64)&v71_.v71);
  v56 = *(_QWORD*)(v1 + 112);
  v57 = *(_QWORD*)(v1 + 120);
  if (v57 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                              memory_order_relaxed);
    v58 = *(_BYTE*)(v56 + 72);
    if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if ((v58 & 1) != 0) {
        goto LABEL_97;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
      std___1___shared_weak_count___release_weak_alt2(v57);
      if ((v58 & 1) != 0) {
        goto LABEL_97;
      }
    }
  }
  else if ((*(_BYTE*)(v56 + 72) & 1) != 0) {
    goto LABEL_97;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 112LL) == 1) {
    v59 = 257;
    v93_.v94 = 0;
  }
  else {
    v93_.v94 = 0;
    v59 = 1;
  }
  v60 = *(_QWORD*)(v1 + 112);
  v61 = *(_QWORD*)(v1 + 120);
  v93_.v93 = v59;
  if (v61 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                              memory_order_relaxed);
    SceneCharacterAnimator_1412540_alt1(v60, *(_DWORD*)(v60 + 108),
                                        (unsigned __int8*)&v93_.v93);
    if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
      std___1___shared_weak_count___release_weak_alt2(v61);
    }
  }
  else {
    SceneCharacterAnimator_1412540_alt1(v60, *(_DWORD*)(v60 + 108),
                                        (unsigned __int8*)&v93_.v93);
  }
LABEL_97:
  SceneCharacter_13ffb80_alt1(v1);
  v62 = *(_BYTE*)(a1 + 208);
  v63 = *(_QWORD*)(v1 + 160);
  v64 = *(_QWORD*)(v1 + 168);
  if ((v62 & 1) == 0) {
    if (v64 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                                memory_order_relaxed);
      result = GameHr_1984a30(v63, -0x1.0000000000000p+0f);
      if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
      v66 = v64;
      return std___1___shared_weak_count___release_weak_alt2(v66);
    }
    return GameHr_1984a30(v63, -0x1.0000000000000p+0f);
  }
  if (v64 == 0) {
    result = GameHr_1984bd0(v63, -0x1.0000000000000p+0f);
    v67 = *(_QWORD*)(v1 + 144);
    v68 = *(_QWORD*)(v1 + 152);
    if (v68 != 0) {
      goto LABEL_105;
    }
  LABEL_112:
    v70 = *(_QWORD*)(v67 + 16);
    if (v70 != 0) {
      *(_BYTE*)(v70 + 8) = 1;
    }
    return result;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                            memory_order_relaxed);
  result = GameHr_1984bd0(v63, -0x1.0000000000000p+0f);
  if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    result = std___1___shared_weak_count___release_weak_alt2(v64);
  }
  v67 = *(_QWORD*)(v1 + 144);
  v68 = *(_QWORD*)(v1 + 152);
  if (v68 == 0) {
    goto LABEL_112;
  }
LABEL_105:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 8), 1u,
                            memory_order_relaxed);
  v69 = *(_QWORD*)(v67 + 16);
  if (v69 != 0) {
    *(_BYTE*)(v69 + 8) = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
    v66 = v68;
    return std___1___shared_weak_count___release_weak_alt2(v66);
  }
  return result;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Destructor_1403400(
    _QWORD* a1)
{
  *a1 = GameData_2038848;
  return GameRoutine_a0d9a0(a1 + 4);
}

__int64

game_facility_SceneCharacter_SceneCharacter_lambda0_DeletingDestructor_1403410(
    _QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_2038848;
  GameRoutine_a0d9a0(a1 + 4);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

_QWORD*

game_facility_SceneCharacter_SceneCharacter_lambda0_Clone_1403470(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 272, 16, 0);
  v3 = v2;
  *v2 = GameData_2038848;
  v2[2] = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 40);
  v2[4] = *(_QWORD*)(a1 + 32);
  v2[5] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 6, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    v5 = *(_QWORD*)(a1 + 56);
    v6 = *(_QWORD*)(a1 + 64);
    v2[6] = *(_QWORD*)(a1 + 48);
    v2[7] = v5;
    v2[8] = v6;
  }
  SceneCharacter_1402470((__int64)(v3 + 10), a1 + 80);
  v7 = *(_QWORD*)(a1 + 256);
  *((_BYTE*)v3 + 208) = *(_BYTE*)(a1 + 208);
  if (v7 != 0) {
    if (v7 == a1 + 224) {
      v3[32] = v3 + 28;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    }
    else {
      v3[32] = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v3[32] = 0;
  }
  return v3;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_CloneInto_1403570(
    __int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  *(_QWORD*)a2 = GameData_2038848;
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(a2 + 48, *(_QWORD*)(a1 + 64),
                                  *(_QWORD*)(a1 + 56));
  }
  else {
    *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
    v5 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 64) = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 48) = v5;
  }
  SceneCharacter_1402470(a2 + 80, a1 + 80);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
  result = *(_QWORD*)(a1 + 256);
  if (result != 0) {
    if (result == a1 + 224) {
      *(_QWORD*)(a2 + 256) = a2 + 224;
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 256) + 24LL))(
          *(_QWORD*)(a1 + 256));
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      *(_QWORD*)(a2 + 256) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 256) = 0;
  }
  return result;
}

__int64 game_facility_SceneCharacter_SceneCharacter_lambda0_Invoke_1403680(
    float32x4_t* a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  struct {
    __int128 v7;
    char gap16_[8];
    char v8;
    char gap25_[15];
    __int64 v9;
  } v7_;

  v1 = (_QWORD*)LANES128(a1[1]).n128_u64[0];
  if (LANES128(a1[12]).n128_u8[0] == 1) {
    SceneCharacterLookAt_1400060_alt1(LANES128(a1[1]).n128_i64[0], a1 + 5);
  }
  else {
    game_facility_140d160((void*)(&v7_.v7), (__int64)&a1[3]);
    GameRoutine_1400780_alt1(v1, (__int64)&v7_.v7, 0x0.0p+0f);
    if ((v7_.v8 & 1) != 0 && v7_.v9 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v7_.v9);
    }
  }
  v4 = v1[24];
  v5 = v1[25];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  result = LANES128(a1[16]).n128_i64[0];
  if (result != 0) {
    *(_QWORD*)&v7_.v7 = v1;
    return (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)result + 48LL))(
        result, &v7_.v7);
  }
  return result;
}

__n128

game_facility_SceneCharacter_ChangeAppearance_lambda0_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *a1 = GameData_20388d8;
  v2 = a1 + 6;
  v3 = (_QWORD*)a1[10];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_6:
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__n128 game_facility_SceneCharacter_ChangeAppearance_lambda0_DeletingDestructor(
    _QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = GameData_20388d8;
  v2 = a1 + 6;
  v3 = (_QWORD*)a1[10];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[4];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1();
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
}

_QWORD* game_facility_SceneCharacter_ChangeAppearance_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_20388d8;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = a1[4];
  result[4] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = (_QWORD*)a1[10];
  if (v5 != nullptr) {
    if (v5 == a1 + 6) {
      v6 = result;
      result[10] = result + 6;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v5 + 24LL))(
          (void*)v5, v5);
    }
    else {
      v6 = result;
      result[10] = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v5 + 16LL))((void*)v5, v5));
    }
    return v6;
  }
  else {
    result[10] = 0;
  }
  return result;
}

_QWORD*

game_facility_SceneCharacter_ChangeAppearance_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_20388d8;
  a2[2] = result[2];
  a2[3] = result[3];
  v3 = result[4];
  a2[4] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = (_QWORD*)result[10];
  if (v4 != nullptr) {
    if (v4 == result + 6) {
      a2[10] = a2 + 6;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[10] + 24LL))(
          result[10]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, result[10]));
      a2[10] = result;
    }
  }
  else {
    a2[10] = 0;
  }
  return result;
}

__n128 game_facility_SceneCharacter_ChangeAppearance_lambda0_Destroy(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __n128 result;
  __int64 v6;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1 + 6;
  v3 = (_QWORD*)a1[10];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_6:
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__int64

game_facility_SceneCharacter_ChangeAppearance_lambda0_Invoke(_QWORD* a1,
                                                             __int64* a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  __int64 v7[2];
  __int64 v8;

  v3 = *a2;
  v4 = (_QWORD*)a1[2];
  v5 = a1[4];
  v7[0] = a1[3];
  v7[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    SceneCharacter_1402240(v4, v7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    SceneCharacter_1402240(v4, v7);
  }
  result = a1[10];
  if (result != 0) {
    v8 = v3;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v8);
  }
  return result;
}

__attribute__((swiftcall)) void

game_facility_SceneCharacter_SetLookAtCharacter_lambda0_Invoke(PSEUDO_X8 x8_,
                                                               __int64 a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  float32x4_t result;
  unsigned __int64 v8;
  float32x4_t v9;
  int8x16_t v10;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v3 + 192);
  v4 = *(_QWORD*)(v3 + 200);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v5 + 24);
    LANES128(v10).n128_u64[0] = *(_QWORD*)(v5 + 16);
    LANES128(v10).n128_u64[1] = v6;
    game_13f9200((void*)(&v9), &v10);
    SceneCharacterMovement_1417860((void*)(&v10), v5);
    result = vaddq_f32(v9, v10);
    *a2 = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v8 = *(_QWORD*)(v5 + 24);
    LANES128(v10).n128_u64[0] = *(_QWORD*)(v5 + 16);
    LANES128(v10).n128_u64[1] = v8;
    game_13f9200((void*)(&v9), &v10);
    SceneCharacterMovement_1417860((void*)(&v10), v5);
    result = vaddq_f32(v9, v10);
    *a2 = result;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
