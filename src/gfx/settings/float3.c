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
void Float3_abb150(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, float a5,
                   float a6)
{
  __int64 v12;
  long double v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  long double v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  long double v38;
  __int64 (**v39)();
  _QWORD v40[2];
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  long double v52;
  char v53;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 56LL))(a4) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 48LL))(a4) & 1) == 0) {
    v34 = *a1;
    v35 = a1;
    v36 = a2;
    v37 = a3;
  LABEL_27:
    (*(void (**)(_QWORD*, __int64, __int64, float, float))(v34 + 24))(
        v35, v36, v37, a5, a6);
    return;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3) & 1) == 0) {
    v34 = *a1;
    v35 = a1;
    v36 = a2;
    v37 = a4;
    goto LABEL_27;
  }
  v12 = 112;
  if (*(_BYTE*)(a2 + 64) != 0) {
    v12 = 48;
  }
  v13 = *(long double*)(a2 + v12);
  v53 = 1;
  v38 = v13;
  v52 = v13;
  v14 = GameData_212e530[0];
  v39 = (__int64 (**)())(GameData_212e530[0] + 16);
  v15 = v40;
  if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
    v15 = (_QWORD*)fw_text_String_CopyTerminated(v40, *(_QWORD*)(a3 + 24),
                                                 *(_QWORD*)(a3 + 16));
  }
  else {
    v16 = *(_QWORD*)(a3 + 16);
    v17 = *(_QWORD*)(a3 + 24);
    v40[0] = *(_QWORD*)(a3 + 8);
    v40[1] = v16;
    v41 = v17;
  }
  v18 = *(_BYTE*)(a3 + 32);
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v39 = GameData_1fc1848;
  v42 = v18;
  v19 = *(_QWORD*)(a3 + 56);
  v43 = *(_QWORD*)(a3 + 48);
  v44 = v19;
  v20 = *(_QWORD*)(a3 + 72);
  v45 = *(_QWORD*)(a3 + 64);
  v46 = v20;
  v22 = *(_QWORD*)(a3 + 80);
  v21 = *(_QWORD*)(a3 + 88);
  v23 = fw_memory_g_heap_manager_ptr;
  v24 = v21 - v22;
  if (v21 != v22) {
    if (0xAAAAAAAAAAAAAAABLL * (v24 >> 4) >= 0x555555555555556LL) {
      GameRoutine_abc340(v15);
    }
    v25 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v24, 16, 0);
    v26 = v25 + v24;
    v47 = v25;
    v48 = v25;
    v49 = v25 + v24;
    memcpy(v25, v22, v24);
    v48 = v26;
  }
  v27 = *(_QWORD*)(a3 + 120);
  v50 = *(_QWORD*)(a3 + 112);
  v51 = v27;
  v28 = GameRoutine_abc0c0(a4, &v52, &v39, a6);
  v29 = ((long double (*)(__int64, long double, long double, float)) *
         (_QWORD*)(*(_QWORD*)a4 + 80LL))(a4, v38, v28, a5);
  v30 = *(_BYTE*)(a2 + 64);
  *(long double*)(a2 + 48) = v29;
  if ((v30 & 1) == 0) {
    *(_BYTE*)(a2 + 64) = 1;
  }
  v39 = GameData_1fc1848;
  if (v47 != 0) {
    v31 = *(_QWORD*)v23;
    v48 = v47;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(v31 + v32, v29);
  }
  v39 = (__int64 (**)())(v14 + 16);
  if ((v40[0] & 1) != 0 && v41 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v33, v29);
  }
}

#pragma GCC visibility pop
