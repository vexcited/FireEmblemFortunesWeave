#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_1fc1848[])();
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
long double GameRoutine_abc0c0(_QWORD, _QWORD, _QWORD, float);
void __attribute__((noreturn)) GameRoutine_abc340(_QWORD);
void Float3_abb150(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, float a5,
                   float a6);
__int64 GameRoutine_abc0c0_alt1(__int64, _QWORD*, __int64,
                                float) __asm__("GameRoutine_abc0c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_abc340_alt1() __asm__("GameRoutine_abc340");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void Float3_abb150(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, float a5,
                   float a6)
{

#pragma clang fp contract(off)
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  long double v27;
  long double v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  long double v37;
  __int64 (**v38)();
  struct {
    __int64 v39[2];
    __int64 v40;
    char v41;
    char gap49_[15];
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    char gap120_[8];
    __int64 v49;
    __int64 v50;
  } v39_;
  struct {
    long double v51;
    char v52;
  } v51_;

  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 56LL))(a4) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 48LL))(a4) & 1) == 0) {
    v33 = *a1;
    v34 = a1;
    v35 = a2;
    v36 = a3;
  LABEL_27:
    (*(void (**)(_QWORD*, __int64, __int64, float, float))(v33 + 24))(
        v34, v35, v36, a5, a6),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3) & 1) == 0) {
    v33 = *a1;
    v34 = a1;
    v35 = a2;
    v36 = a4;
    goto LABEL_27;
  }
  v12 = 112;
  if (*(_BYTE*)(a2 + 64) != 0) {
    v12 = 48;
  }
  v13 = *(long double*)(a2 + v12);
  v51_.v52 = 1;
  v37 = v13;
  v51_.v51 = v13;
  v14 = GameData_212e530[0];
  v38 = (__int64 (**)(void))(GameData_212e530[0] + 16),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v39_.v39, *(_QWORD*)(a3 + 24),
                                       *(_QWORD*)(a3 + 16)),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v15 = *(_QWORD*)(a3 + 16);
    v16 = *(_QWORD*)(a3 + 24);
    v39_.v39[0] = *(_QWORD*)(a3 + 8);
    v39_.v39[1] = v15;
    v39_.v40 = v16;
  }
  v17 = *(_BYTE*)(a3 + 32);
  v39_.v46 = 0;
  v39_.v47 = 0;
  v39_.v48 = 0;
  v38 = GameData_1fc1848;
  v39_.v41 = v17;
  v18 = *(_QWORD*)(a3 + 56);
  v39_.v42 = *(_QWORD*)(a3 + 48);
  v39_.v43 = v18;
  v19 = *(_QWORD*)(a3 + 72);
  v39_.v44 = *(_QWORD*)(a3 + 64);
  v39_.v45 = v19;
  v21 = *(_QWORD*)(a3 + 80);
  v20 = *(_QWORD*)(a3 + 88);
  v22 = fw_memory_g_heap_manager_ptr;
  v23 = v20 - v21;
  if (v20 != v21) {
    if (0xAAAAAAAAAAAAAAABLL * (v23 >> 4) >= 0x555555555555556LL) {
      GameRoutine_abc340_alt1(),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v24 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v25 = v24 + v23;
    v39_.v46 = v24;
    v39_.v47 = v24;
    v39_.v48 = v24 + v23;
    memcpy_alt1(v24, v21, v23),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v39_.v47 = v25;
  }
  v26 = *(_QWORD*)(a3 + 120);
  v39_.v49 = *(_QWORD*)(a3 + 112);
  v39_.v50 = v26;
  GameRoutine_abc0c0_alt1(a4, &v51_.v51, (__int64)&v38, a6),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v28 = ((long double (*)(__int64, long double, long double, float)) *
         (_QWORD*)(*(_QWORD*)a4 + 80LL))(a4, v37, v27, a5),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v29 = *(_BYTE*)(a2 + 64);
  *(long double*)(a2 + 48) = v28;
  if ((v29 & 1) == 0) {
    *(_BYTE*)(a2 + 64) = 1;
  }
  v38 = GameData_1fc1848;
  if (v39_.v46 != 0) {
    v30 = *(_QWORD*)v22;
    v39_.v47 = v39_.v46;
    v31 = 128;
    if (*(_QWORD*)(v30 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v30 + v31, v39_.v46),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v38 = (__int64 (**)(void))(v14 + 16),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v32, v39_.v40),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

#pragma GCC visibility pop
