#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DisposFile_6bc220(_QWORD);
__int64 GameRoutine_1a042e0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_212b2d0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapHintMap_Unknown7(_QWORD* a1, __int64* a2);

__int64 MapHintMap_Unknown7(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 result;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;

  v3 = a2[1];
  v65 = 0;
  v66 = 0;
  if (v3 != 0) {
    v66 = std___1___shared_weak_count_lock(v3);
    if (v66 != 0) {
      v65 = *a2;
    }
  }
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  v62 = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  *v6 = GameData_212b2d0;
  v6[1] = a1;
  v6[2] = &v64;
  v6[3] = &v65;
  v6[4] = &v63;
  v6[5] = &v67;
  v6[6] = &v62;
  v6[7] = a2;
  v6[8] = &v61;
  GameRoutine_1a042e0();
  v7 = DisposFile_6bc220("Enemy");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v7);
  v8 = DisposFile_6bc220("Third");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v8);
  v9 = DisposFile_6bc220("Ally");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v9);
  v10 = DisposFile_6bc220("Enemy1");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v10);
  v11 = DisposFile_6bc220("Enemy2");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v11);
  v12 = a1[7];
  v13 = v67;
  if (v67 < 0xCCCCCCCCCCCCCCCDLL * ((a1[8] - v12) >> 4)) {
    v14 = 80 * v67;
    do {
      v15 = (_QWORD*)(v12 + v14);
      v16 = v15 + 1;
      if ((v15[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v15[3], v15[2]);
      }
      else {
        v17 = *v16;
        v18 = v16[1];
        v19 = (char*)v16[2];
        v59 = v18;
        v60 = v19;
        v58 = v17;
      }
      if ((v58 & 1) != 0) {
        v20 = v60;
      }
      else {
        v20 = (char*)&v58 + 1;
      }
      v21 = ui_LayoutAccessor_FindPane(v65, v20);
      if (v21 != 0) {
        *(_BYTE*)(v21 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22);
      }
      v12 = a1[7];
      ++v13;
      v14 += 80;
    } while (v13 < 0xCCCCCCCCCCCCCCCDLL * ((a1[8] - v12) >> 4));
  }
  v23 = a1[10];
  v24 = v64;
  if (v64 < 0xCCCCCCCCCCCCCCCDLL * ((a1[11] - v23) >> 4)) {
    v25 = 80 * v64;
    do {
      v26 = (_QWORD*)(v23 + v25);
      v27 = v26 + 1;
      if ((v26[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v26[3], v26[2]);
      }
      else {
        v28 = *v27;
        v29 = v27[1];
        v30 = (char*)v27[2];
        v59 = v29;
        v60 = v30;
        v58 = v28;
      }
      if ((v58 & 1) != 0) {
        v31 = v60;
      }
      else {
        v31 = (char*)&v58 + 1;
      }
      v32 = ui_LayoutAccessor_FindPane(v65, v31);
      if (v32 != 0) {
        *(_BYTE*)(v32 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v33);
      }
      v23 = a1[10];
      ++v24;
      v25 += 80;
    } while (v24 < 0xCCCCCCCCCCCCCCCDLL * ((a1[11] - v23) >> 4));
  }
  v34 = a1[13];
  v35 = v63;
  if (v63 < 0xCCCCCCCCCCCCCCCDLL * ((a1[14] - v34) >> 4)) {
    v36 = 80 * v63;
    do {
      v37 = (_QWORD*)(v34 + v36);
      v38 = v37 + 1;
      if ((v37[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v37[3], v37[2]);
      }
      else {
        v39 = *v38;
        v40 = v38[1];
        v41 = (char*)v38[2];
        v59 = v40;
        v60 = v41;
        v58 = v39;
      }
      if ((v58 & 1) != 0) {
        v42 = v60;
      }
      else {
        v42 = (char*)&v58 + 1;
      }
      v43 = ui_LayoutAccessor_FindPane(v65, v42);
      if (v43 != 0) {
        *(_BYTE*)(v43 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v44);
      }
      v34 = a1[13];
      ++v35;
      v36 += 80;
    } while (v35 < 0xCCCCCCCCCCCCCCCDLL * ((a1[14] - v34) >> 4));
  }
  v45 = a1[16];
  v46 = v62;
  if (v62 < 0xCCCCCCCCCCCCCCCDLL * ((a1[17] - v45) >> 3)) {
    v47 = 40 * v62;
    do {
      v48 = (_QWORD*)(v45 + v47);
      v49 = v48 + 1;
      if ((v48[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v48[3], v48[2]);
      }
      else {
        v50 = *v49;
        v51 = v49[1];
        v52 = (char*)v49[2];
        v59 = v51;
        v60 = v52;
        v58 = v50;
      }
      if ((v58 & 1) != 0) {
        v53 = v60;
      }
      else {
        v53 = (char*)&v58 + 1;
      }
      v54 = ui_LayoutAccessor_FindPane(v65, v53);
      if (v54 != 0) {
        *(_BYTE*)(v54 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v55);
      }
      v45 = a1[16];
      ++v46;
      v47 += 40;
    } while (v46 < 0xCCCCCCCCCCCCCCCDLL * ((a1[17] - v45) >> 3));
  }
  result = (*(__int64 (**)(_QWORD*))(*v6 + 40LL))(v6);
  v57 = v66;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    return std___1___shared_weak_count___release_weak(v57);
  }
  return result;
}

#pragma GCC visibility pop
