#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_65cf40(_QWORD* result, int, int, int);
__int64 GameRoutine_65d2d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6616e0(_QWORD, _QWORD);
__int64 GameRoutine_6619e0(_QWORD, _QWORD);
__int64 GameRoutine_661c80(_QWORD);
__int64 GameRoutine_6622e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Stream_Destructor(__int64 a1, _DWORD* a2);
_QWORD* Stream_DeletingDestructor(__int64 a1, int a2);
__int64 Stream_Unknown2(__int64 a1, unsigned int* a2);
__int64 Stream_Unknown3(__int64 a1, int a2);

__int64 Stream_Destructor(__int64 a1, _DWORD* a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _DWORD v61[2];

  v3 = *(_DWORD*)(a1 + 20) & 3;
  if (*(int*)(a1 + 20) <= 0) {
    v3 = -(-*(_BYTE*)(a1 + 20) & 3);
  }
  if (v3 != 0) {
    v4 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v4 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v4) = 0;
    if (v3 != 3) {
      v5 = *(int*)(a1 + 20);
      *(_DWORD*)(a1 + 20) = v5 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 8) + v5) = 0;
      if (v3 != 2) {
        v6 = *(int*)(a1 + 20);
        *(_DWORD*)(a1 + 20) = v6 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v6) = 0;
        if (v3 != 1) {
          v7 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v7 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v7) = 0;
          v8 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v8 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v8) = 0;
          if (v3 != -1) {
            v9 = *(int*)(a1 + 20);
            *(_DWORD*)(a1 + 20) = v9 + 1;
            *(_BYTE*)(*(_QWORD*)(a1 + 8) + v9) = 0;
            if (v3 != -2) {
              v10 = *(int*)(a1 + 20);
              *(_DWORD*)(a1 + 20) = v10 + 1;
              *(_BYTE*)(*(_QWORD*)(a1 + 8) + v10) = 0;
              if (v3 != -3) {
                v11 = *(int*)(a1 + 20);
                *(_DWORD*)(a1 + 20) = v11 + 1;
                *(_BYTE*)(*(_QWORD*)(a1 + 8) + v11) = 0;
              }
            }
          }
        }
      }
    }
  }
  if (*(_QWORD*)(a1 + 64) == 0) {
    *(_DWORD*)(a1 + 20) = 1;
    **(_BYTE**)(a1 + 8) = 0;
    v12 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v12) = 0;
    v13 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v13) = 0;
    v14 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v14) = 0;
    v15 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v15) = 0;
    v16 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v16) = 0;
    v17 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v17) = 0;
    v18 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v18) = 0;
    v19 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v19) = 0;
    v20 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v20) = 0;
    v21 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v21) = 0;
    v22 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v22) = 0;
    v23 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v23) = 0;
    v24 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v24) = 0;
    v25 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v25) = 0;
    v26 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v26) = 0;
    v27 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v27) = 0;
    v28 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v28) = 0;
    v29 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v29) = 0;
    v30 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v30) = 0;
    v31 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v31) = 0;
    v32 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v32) = 0;
    v33 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v33) = 0;
    v34 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v34 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v34) = 0;
    v35 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v35) = 0;
    v36 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v36) = 0;
    v37 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v37) = 0;
    v38 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v38) = 0;
    v39 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v39) = 0;
    v40 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v40) = 0;
    v41 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v41) = 0;
    v42 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v42) = 0;
  }
  if (*a2 != 0) {
    v43 = *(_QWORD*)(a1 + 120);
    v44 = *(_DWORD*)(a1 + 20);
    v61[0] = *a2;
    v61[1] = v44;
    GameRoutine_6616e0(v43, v61);
  }
  v45 = *(_QWORD*)(a1 + 32);
  v46 = *(_QWORD*)(a1 + 40);
  v47 = ((v46 - v45) << 7) - 1;
  if (v46 == v45) {
    v47 = 0;
  }
  v48 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  if (v47 == v48) {
    GameRoutine_660f80(a1 + 24);
    v45 = *(_QWORD*)(a1 + 32);
    v48 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v45 + 8 * (v48 >> 10)) + 4 * (v48 & 0x3FF)) =
      *(_DWORD*)(a1 + 20);
  v50 = *(_QWORD*)(a1 + 80);
  v49 = *(_QWORD*)(a1 + 88);
  ++*(_QWORD*)(a1 + 64);
  if (v49 == v50) {
    v51 = 0;
  }
  else {
    v51 = 102 * ((v49 - v50) >> 3) - 1;
  }
  v52 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
  if (v51 == v52) {
    GameRoutine_661c80(a1 + 72);
    v50 = *(_QWORD*)(a1 + 80);
    v52 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
  }
  v53 = *(_QWORD*)(v50 + 8 * (v52 / 0x66)) + 40 * (v52 % 0x66);
  *(_QWORD*)(v53 + 16) = 0;
  *(_QWORD*)(v53 + 24) = 0;
  *(_QWORD*)v53 = 0;
  *(_QWORD*)(v53 + 8) = 0;
  *(_DWORD*)(v53 + 32) = 1065353216;
  ++*(_QWORD*)(a1 + 112);
  v54 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v54 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v54) = 0;
  v55 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v55 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v55) = 0;
  v56 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v56 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v56) = 0;
  v57 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v57 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v57) = 0;
  v58 = *(_QWORD*)(a1 + 112);
  if (v58 != 0) {
    v59 = *(_QWORD*)(*(_QWORD*)(a1 + 80) +
                     8 * ((v58 + *(_QWORD*)(a1 + 104) - 1) / 0x66uLL)) +
          40 * ((v58 + *(_QWORD*)(a1 + 104) - 1) % 0x66uLL);
  }
  else {
    v59 = 0;
  }
  *(_QWORD*)(a1 + 120) = v59;
  return 1;
}

_QWORD* Stream_DeletingDestructor(__int64 a1, int a2)
{
  int v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* i;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* result;
  unsigned __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned __int8* v66;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 j;
  int v72;
  __int64 v73;
  unsigned __int8* v74;
  int v75;
  int v76;

  v2 = *(_DWORD*)(a1 + 20);
  if (v2 <= 0) {
    v4 = -(-v2 & 3);
  }
  else {
    v4 = *(_DWORD*)(a1 + 20) & 3;
  }
  if (v4 != 0) {
    v5 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v5) = 0;
    if (v4 != 3) {
      v6 = *(int*)(a1 + 20);
      *(_DWORD*)(a1 + 20) = v6 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 8) + v6) = 0;
      if (v4 != 2) {
        v7 = *(int*)(a1 + 20);
        *(_DWORD*)(a1 + 20) = v7 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v7) = 0;
        if (v4 != 1) {
          v8 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v8 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v8) = 0;
          v9 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v9 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v9) = 0;
          if (v4 != -1) {
            v10 = *(int*)(a1 + 20);
            *(_DWORD*)(a1 + 20) = v10 + 1;
            *(_BYTE*)(*(_QWORD*)(a1 + 8) + v10) = 0;
            if (v4 != -2) {
              v11 = *(int*)(a1 + 20);
              *(_DWORD*)(a1 + 20) = v11 + 1;
              *(_BYTE*)(*(_QWORD*)(a1 + 8) + v11) = 0;
              if (v4 != -3) {
                v12 = *(int*)(a1 + 20);
                *(_DWORD*)(a1 + 20) = v12 + 1;
                *(_BYTE*)(*(_QWORD*)(a1 + 8) + v12) = 0;
              }
            }
          }
        }
      }
    }
    v2 = *(_DWORD*)(a1 + 20);
  }
  v13 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56) - 1LL;
  v14 = *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (v13 >> 10)) +
                4 * (v13 & 0x3FF));
  v15 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104) - 1LL;
  v16 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 8 * (v15 / 0x66)) + 40 * (v15 % 0x66);
  v17 = *(_QWORD*)(v16 + 24);
  *(_DWORD*)(a1 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v14) = v2;
  v18 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v18) = BYTE1(v2);
  v19 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v19) = BYTE2(v2);
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + *(int*)(a1 + 20)) = v17;
  *(_DWORD*)(a1 + 20) = v2;
  for (i = *(__int64**)(v16 + 16); i != nullptr; i = (__int64*)*i) {
    v21 = *(int*)(a1 + 20);
    v22 = *((_DWORD*)i + 4);
    v23 = *((_DWORD*)i + 5);
    *(_DWORD*)(a1 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v21) = v22;
    v24 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v24) = BYTE1(v22);
    v25 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v25) = BYTE2(v22);
    v26 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v26) = HIBYTE(v22);
    v27 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v27) = v23;
    v28 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v28) = BYTE1(v23);
    v29 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v29) = BYTE2(v23);
    LODWORD(v27) = HIBYTE(v23);
    v30 = *(int*)(a1 + 20);
    *(_DWORD*)(a1 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + v30) = v27;
  }
  if (a2 >= 1) {
    v31 = *(_DWORD*)(a1 + 20);
    v32 = a2 - v31;
    if (a2 != v31 && (v32 & 0x80000000) == 0) {
      v33 = v32 & 7;
      if ((unsigned int)(v31 - a2) <= 0xFFFFFFF8) {
        v34 = v32 & 0x7FFFFFF8;
        do {
          v35 = *(int*)(a1 + 20);
          v34 -= 8;
          *(_DWORD*)(a1 + 20) = v35 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v35) = 0;
          v36 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v36 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v36) = 0;
          v37 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v37 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v37) = 0;
          v38 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v38 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v38) = 0;
          v39 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v39 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v39) = 0;
          v40 = *(int*)(a1 + 20);
          v41 = *(_QWORD*)(a1 + 8);
          *(_DWORD*)(a1 + 20) = v40 + 1;
          *(_BYTE*)(v41 + v40) = 0;
          v42 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v42 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v42) = 0;
          v43 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v43 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v43) = 0;
        } while (v34 != 0);
      }
      for (; v33 != 0; *(_BYTE*)(*(_QWORD*)(a1 + 8) + v44) = 0) {
        v44 = *(int*)(a1 + 20);
        --v33;
        *(_DWORD*)(a1 + 20) = v44 + 1;
      }
    }
  }
  v46 = *(_QWORD*)(a1 + 32);
  v45 = *(_QWORD*)(a1 + 40);
  v47 = v45 - v46;
  v48 = v45 == v46;
  v50 = *(_QWORD*)(a1 + 56);
  v49 = *(_QWORD*)(a1 + 64);
  v51 = (v47 << 7) - 1;
  if (v48) {
    v51 = 0;
  }
  *(_QWORD*)(a1 + 64) = v49 - 1;
  if ((unsigned __int64)(v51 - (v49 + v50) + 1) >= 0x800) {
    v52 = *(_QWORD*)(v45 - 8);
    if (v52 != 0) {
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
      v45 = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v45 - 8;
  }
  result = (_QWORD*)GameRoutine_6622e0(a1 + 72);
  v55 = *(_QWORD*)(a1 + 112);
  if (v55 != 0) {
    v55 = *(_QWORD*)(*(_QWORD*)(a1 + 80) +
                     8 * ((v55 + *(_QWORD*)(a1 + 104) - 1) / 0x66)) +
          40 * ((v55 + *(_QWORD*)(a1 + 104) - 1) % 0x66);
  }
  *(_QWORD*)(a1 + 120) = v55;
  if (*(_QWORD*)(a1 + 64) == 0) {
    v56 = *(_DWORD*)(a1 + 20);
    v57 = (unsigned int)(v56 - 32);
    if (v56 < 33) {
      v64 = 0;
      return GameRoutine_65cf40((_QWORD*)a1, v57, v64, 1);
    }
    v58 = *(_QWORD*)(a1 + 8);
    v59 = -2128831035;
    v60 = v58 + 32;
    if ((unsigned int)v57 < 8) {
      v65 = 0;
      if ((_DWORD)v57 != 0) {
      LABEL_47:
        v70 = v57 & 7;
        for (j = v65; v70 != 0; v59 = (16777619 * v59) ^ v72) {
          v72 = *(unsigned __int8*)(v60 + j++);
          --v70;
        }
        if ((unsigned __int64)v65 - v57 <= 0xFFFFFFFFFFFFFFF8LL) {
          v73 = v57 - j;
          v74 = (unsigned __int8*)(j + v58 + 39);
          do {
            v73 -= 8;
            v75 =
                (16777619 *
                 ((16777619 *
                   ((16777619 *
                     ((16777619 * ((16777619 * ((16777619 * ((16777619 * v59) ^
                                                             *(v74 - 7))) ^
                                                *(v74 - 6))) ^
                                   *(v74 - 5))) ^
                      *(v74 - 4))) ^
                    *(v74 - 3))) ^
                  *(v74 - 2))) ^
                *(v74 - 1);
            v76 = *v74;
            v74 += 8;
            v59 = (16777619 * v75) ^ v76;
          } while (v73 != 0);
        }
      }
    LABEL_52:
      if (v59 != 0) {
        v64 = v59;
      }
      else {
        v64 = -1;
      }
      return GameRoutine_65cf40((_QWORD*)a1, v57, v64, 1);
    }
    v61 = v57 - 8;
    if ((unsigned __int64)(v57 - 8) >= 8) {
      v66 = (unsigned __int8*)(v58 + 47);
      v62 = 0;
      v67 = ((v61 >> 3) + 1) & 0x3FFFFFFFFFFFFFFELL;
      do {
        v62 += 16;
        v67 -= 2;
        v68 = 16777619 *
              ((16777619 *
                ((16777619 *
                  ((16777619 *
                    ((16777619 *
                      ((16777619 *
                        ((16777619 *
                          ((16777619 *
                            ((16777619 *
                              ((16777619 *
                                ((16777619 *
                                  ((16777619 *
                                    ((16777619 *
                                      ((16777619 *
                                        ((16777619 *
                                          ((16777619 * v59) ^ *(v66 - 15))) ^
                                         *(v66 - 14))) ^
                                       *(v66 - 13))) ^
                                     *(v66 - 12))) ^
                                   *(v66 - 11))) ^
                                 *(v66 - 10))) ^
                               *(v66 - 9))) ^
                             *(v66 - 8))) ^
                           *(v66 - 7))) ^
                         *(v66 - 6))) ^
                       *(v66 - 5))) ^
                     *(v66 - 4))) ^
                   *(v66 - 3))) ^
                 *(v66 - 2))) ^
               *(v66 - 1));
        v69 = *v66;
        v66 += 16;
        v59 = v68 ^ v69;
      } while (v67 != 0);
      v63 = 16777619 * v59;
      if ((v61 & 8) != 0) {
      LABEL_46:
        v65 = v57 & 0x7FFFFFF8;
        if (((unsigned int)v57 & 0x7FFFFFF8) < (unsigned int)v57) {
          goto LABEL_47;
        }
        goto LABEL_52;
      }
    }
    else {
      v62 = 0;
      v63 = 84696351;
      if ((v61 & 8) != 0) {
        goto LABEL_46;
      }
    }
    v59 = (16777619 *
           ((16777619 *
             ((16777619 *
               ((16777619 *
                 ((16777619 *
                   ((16777619 *
                     ((16777619 * (v63 ^ *(unsigned __int8*)(v60 + v62))) ^
                      *(unsigned __int8*)(v60 + v62 + 1))) ^
                    *(unsigned __int8*)(v60 + v62 + 2))) ^
                  *(unsigned __int8*)(v60 + v62 + 3))) ^
                *(unsigned __int8*)(v60 + v62 + 4))) ^
              *(unsigned __int8*)(v60 + v62 + 5))) ^
            *(unsigned __int8*)(v60 + v62 + 6))) ^
          *(unsigned __int8*)(v60 + v62 + 7);
    goto LABEL_46;
  }
  return result;
}

__int64 Stream_Unknown2(__int64 a1, unsigned int* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  int v4;
  int v6;
  unsigned int* v7;
  char v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  int i;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  float v64;
  float v65;
  float v66;
  _BOOL8 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 primeEm;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  _QWORD* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  bool v100;
  unsigned __int64 v101;
  __int64 v102;
  _QWORD* v103;
  _QWORD* v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64** v108;
  __int64* v109;
  unsigned __int64 v110;
  __int64 v111;
  _QWORD* v112;
  _QWORD* v113;
  float v114;
  float v115;
  float v116;
  _BOOL8 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  _QWORD* v132;
  _QWORD* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64 v138;
  unsigned __int64 v139;
  _QWORD* v140;
  unsigned __int64 v141;
  float v142;
  char v143[4];
  char v144[4];

  v4 = *(_DWORD*)(a1 + 20);
  if (v4 <= 0) {
    v6 = -(-v4 & 3);
  }
  else {
    v6 = *(_DWORD*)(a1 + 20) & 3;
  }
  if (v6 != 0) {
    v4 = v4 - v6 + 4;
    *(_DWORD*)(a1 + 20) = v4;
  }
  if (*(_QWORD*)(a1 + 64) == 0) {
    v7 = a2;
    *(_DWORD*)(a1 + 20) = 0;
    v8 = GameRoutine_65d2d0(a1, &v138, v144, v143);
    a2 = v7;
    v4 = *(_DWORD*)(a1 + 20) + 32;
    *(_DWORD*)(a1 + 20) = v4;
    if ((v8 & 1) == 0) {
      goto LABEL_32;
    }
  }
  v9 = *a2;
  if ((_DWORD)v9 == 0) {
    goto LABEL_42;
  }
  v10 = *(_QWORD**)(a1 + 120);
  v11 = v10[1];
  v12 = v11 == 0 || v10[3] == 0;
  if (v12) {
    goto LABEL_32;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = *a2;
    if (v11 <= v9) {
      v14 = (unsigned int)v9 % (unsigned int)v11;
    }
  }
  else {
    v14 = ((_DWORD)v11 - 1) & (unsigned int)v9;
  }
  v15 = *(__int64***)(*v10 + 8 * v14);
  if (v15 == nullptr || (v16 = *v15) == nullptr) {
  LABEL_32:
    v19 = *(_QWORD*)(a1 + 80);
    v20 = *(_QWORD*)(a1 + 88);
    v21 = 102 * ((v20 - v19) >> 3) - 1;
    if (v20 == v19) {
      v21 = 0;
    }
    v22 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
    if (v21 == v22) {
      GameRoutine_661c80(a1 + 72);
      v19 = *(_QWORD*)(a1 + 80);
      v22 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
    }
    v23 = *(_QWORD*)(v19 + 8 * (v22 / 0x66)) + 40 * (v22 % 0x66);
    *(_QWORD*)(v23 + 16) = 0;
    *(_QWORD*)(v23 + 24) = 0;
    *(_QWORD*)v23 = 0;
    *(_QWORD*)(v23 + 8) = 0;
    *(_DWORD*)(v23 + 32) = 1065353216;
    v24 = *(_QWORD*)(a1 + 32);
    v25 = *(_QWORD*)(a1 + 40);
    v26 = ((v25 - v24) << 7) - 1;
    if (v25 == v24) {
      v26 = 0;
    }
    ++*(_QWORD*)(a1 + 112);
    v27 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
    if (v26 == v27) {
      GameRoutine_660f80(a1 + 24);
      v24 = *(_QWORD*)(a1 + 32);
      v27 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
    }
    *(_DWORD*)(*(_QWORD*)(v24 + 8 * (v27 >> 10)) + 4 * (v27 & 0x3FF)) =
        *(_DWORD*)(a1 + 20);
    ++*(_QWORD*)(a1 + 64);
    return 0;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == v9) {
        if (*((_DWORD*)v16 + 4) == (_DWORD)v9) {
          goto LABEL_41;
        }
      }
      else if ((v18 & v13) != v14) {
        goto LABEL_32;
      }
      v16 = (__int64*)*v16;
      if (v16 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v9) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      goto LABEL_32;
    }
  LABEL_22:
    v16 = (__int64*)*v16;
    if (v16 == nullptr) {
      goto LABEL_32;
    }
  }
  if (*((_DWORD*)v16 + 4) != (_DWORD)v9) {
    goto LABEL_22;
  }

LABEL_41:
  v4 = *((_DWORD*)v16 + 5);

LABEL_42:
  v29 = *(_QWORD*)(a1 + 32);
  v30 = *(_QWORD*)(a1 + 40);
  v31 = *(_QWORD*)(a1 + 8);
  v32 = v30 - v29;
  v12 = v30 == v29;
  v140 = nullptr;
  v141 = 0;
  v138 = 0;
  v139 = 0;
  v142 = 1.0f;
  v33 = v4;
  v34 = v4 + 4;
  v35 = v33 + 1;
  v36 = v33 + 2;
  v37 = (v32 << 7) - 1;
  *(_DWORD*)(a1 + 20) = v33 + 1;
  if (v12) {
    v37 = 0;
  }
  v38 = *(unsigned __int8*)(v31 + v33);
  *(_DWORD*)(a1 + 20) = v36;
  v39 = v33 + 3;
  v40 = *(unsigned __int8*)(v31 + v35);
  *(_DWORD*)(a1 + 20) = v39;
  v41 = v38 | (v40 << 8);
  v42 = *(unsigned __int8*)(v31 + v36);
  *(_DWORD*)(a1 + 20) = v34;
  v43 = v41 | (v42 << 16);
  v137 = *(unsigned __int8*)(v31 + v39);
  v44 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  if (v37 == v44) {
    GameRoutine_660f80(a1 + 24);
    v29 = *(_QWORD*)(a1 + 32);
    v44 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
    v34 = *(_DWORD*)(a1 + 20);
  }
  *(_DWORD*)(*(_QWORD*)(v29 + 8 * (v44 >> 10)) + 4 * (v44 & 0x3FF)) = v34;
  *(_DWORD*)(a1 + 20) = v43;
  v45 = *(_QWORD*)(a1 + 64) + 1LL;
  *(_QWORD*)(a1 + 64) = v45;
  if (v137 != 0) {
    for (i = 0; i != v137; ++i) {
      v47 = *(int*)(a1 + 20);
      v48 = *(_QWORD*)(a1 + 8);
      v49 = v139;
      *(_DWORD*)(a1 + 20) = v47 + 1;
      v50 = *(unsigned __int8*)(v48 + v47);
      *(_DWORD*)(a1 + 20) = v47 + 2;
      v51 = v50 | (*(unsigned __int8*)(v48 + v47 + 1) << 8);
      *(_DWORD*)(a1 + 20) = v47 + 3;
      v52 = v51 | (*(unsigned __int8*)(v48 + v47 + 2) << 16);
      *(_DWORD*)(a1 + 20) = v47 + 4;
      v3 = v52 | (*(unsigned __int8*)(v48 + v47 + 3) << 24);
      *(_DWORD*)(a1 + 20) = v47 + 5;
      v53 = *(unsigned __int8*)(v48 + v47 + 4);
      *(_DWORD*)(a1 + 20) = v47 + 6;
      v54 = *(unsigned __int8*)(v48 + v47 + 5);
      *(_DWORD*)(a1 + 20) = v47 + 7;
      v55 = *(unsigned __int8*)(v48 + v47 + 6);
      *(_DWORD*)(a1 + 20) = v47 + 8;
      v56 = *(unsigned __int8*)(v48 + v47 + 7);
      if (v49 != 0) {
        v57 = v49 - 1;
        if ((v49 & (v49 - 1)) != 0) {
          v2 = v3;
          if (v49 <= v3) {
            v2 = (unsigned int)v3 % (unsigned int)v49;
          }
        }
        else {
          v2 = ((_DWORD)v49 - 1) & (unsigned int)v3;
        }
        v58 = *(__int64**)(v138 + 8 * v2);
        if (v58 != nullptr) {
          v59 = *v58;
          if (*v58 != 0) {
            if ((v49 & v57) == 0) {
              while (1) {
                v61 = *(_QWORD*)(v59 + 8);
                if (v61 == v3) {
                  if (*(_DWORD*)(v59 + 16) == (_DWORD)v3) {
                    goto LABEL_105;
                  }
                }
                else if ((v61 & v57) != v2) {
                  goto LABEL_68;
                }
                v59 = *(_QWORD*)v59;
                if (v59 == 0) {
                  goto LABEL_68;
                }
              }
            }
            do {
              v60 = *(_QWORD*)(v59 + 8);
              if (v60 == v3) {
                if (*(_DWORD*)(v59 + 16) == (_DWORD)v3) {
                  goto LABEL_105;
                }
              }
              else {
                if (v60 >= v49) {
                  v60 %= v49;
                }
                if (v60 != v2) {
                  break;
                }
              }
              v59 = *(_QWORD*)v59;
            } while (v59 != 0);
          }
        }
      }
    LABEL_68:
      v62 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      v63 = v141;
      v64 = v142;
      v59 = v62;
      *(_QWORD*)v62 = 0;
      *(_QWORD*)(v62 + 8) = v3;
      *(_DWORD*)(v62 + 16) = v3;
      *(_DWORD*)(v62 + 20) = 0;
      v65 = (float)(v63 + 1);
      if (v49 == 0 || (float)(v64 * (float)v49) < v65) {
        v66 = v65 / v64;
        v67 = (v49 & (v49 - 1)) != 0;
        if (v49 < 3) {
          v67 = true;
        }
        v68 = v67 | (2 * v49);
        v69 = vcvtps_u32_f32(v66);
        if (v68 <= v69) {
          v70 = v69;
        }
        else {
          v70 = v68;
        }
        if (v70 == 1) {
          v70 = 2;
        }
        else if ((v70 & (v70 - 1)) != 0) {
          primeEm = std___1___next_prime(v70);
          v49 = v139;
          v70 = primeEm;
        }
        if (v70 > v49) {
          goto LABEL_80;
        }
        if (v70 < v49) {
          v72 = vcvtps_u32_f32((float)v141 / v142);
          if (v49 < 3 || (v49 & (v49 - 1)) != 0) {
            v72 = std___1___next_prime(v72);
          }
          else {
            v73 = 1LL << -(char)__clz(v72 - 1);
            if (v72 >= 2) {
              v72 = v73;
            }
          }
          if (v70 <= v72) {
            v70 = v72;
          }
          if (v70 < v49) {
          LABEL_80:
            GameRoutine_6619e0(&v138, v70);
          }
        }
        v49 = v139;
        if ((v139 & (v139 - 1)) != 0) {
          if (v139 <= v3) {
            v2 = v3 % v139;
          }
          else {
            v2 = v3;
          }
        }
        else {
          v2 = ((_DWORD)v139 - 1) & (unsigned int)v3;
        }
      }
      v74 = v138;
      v75 = *(__int64**)(v138 + 8 * v2);
      if (v75 != nullptr) {
        *(_QWORD*)v59 = *v75;
        *v75 = v59;
      }
      else {
        v76 = v140;
        v140 = (_QWORD*)v59;
        *(_QWORD*)v59 = v76;
        *(_QWORD*)(v74 + 8 * v2) = &v140;
        if (*(_QWORD*)v59 != 0) {
          v77 = *(_QWORD*)(*(_QWORD*)v59 + 8LL);
          if ((v49 & (v49 - 1)) != 0) {
            if (v77 >= v49) {
              v77 %= v49;
            }
          }
          else {
            v77 &= v49 - 1;
          }
          *(_QWORD*)(v138 + 8 * v77) = v59;
        }
      }
      ++v141;
    LABEL_105:
      *(_DWORD*)(v59 + 20) = v53 | (v54 << 8) | (v55 << 16) | (v56 << 24);
    }
    v43 = *(_DWORD*)(a1 + 20);
    v45 = *(_QWORD*)(a1 + 64);
  }
  v78 = *(_QWORD*)(a1 + 56);
  v80 = *(_QWORD*)(a1 + 32);
  v79 = *(_QWORD*)(a1 + 40);
  v81 = v45 - 1;
  v82 = v45 - 1 + v78;
  v12 = v79 == v80;
  v83 = v45 + v78;
  v84 = v82 >> 10;
  v85 = (v79 - v80) << 7;
  v86 = v82 & 0x3FF;
  v87 = *(_QWORD*)(v80 + 8 * v84);
  v88 = v85 - 1;
  if (v12) {
    v88 = 0;
  }
  v89 = *(_DWORD*)(v87 + 4 * v86);
  *(_QWORD*)(a1 + 64) = v81;
  *(_DWORD*)(a1 + 20) = v89;
  if ((unsigned __int64)(v88 - v83 + 1) >= 0x800) {
    v90 = *(_QWORD*)(v79 - 8);
    if (v90 != 0) {
      v91 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v90);
      v79 = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v79 - 8;
  }
  v92 = *(_QWORD*)(a1 + 80);
  v93 = *(_QWORD*)(a1 + 88);
  v94 = 102 * ((v93 - v92) >> 3) - 1;
  if (v93 == v92) {
    v94 = 0;
  }
  v95 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
  if (v94 == v95) {
    GameRoutine_661c80(a1 + 72);
    v92 = *(_QWORD*)(a1 + 80);
    v95 = *(_QWORD*)(a1 + 112) + *(_QWORD*)(a1 + 104);
  }
  v96 = *(_QWORD*)(v92 + 8 * (v95 / 0x66)) + 40 * (v95 % 0x66);
  *(_QWORD*)(v96 + 16) = 0;
  *(_QWORD*)(v96 + 24) = 0;
  *(_QWORD*)v96 = 0;
  *(_QWORD*)(v96 + 8) = 0;
  *(float*)(v96 + 32) = v142;
  v97 = v139;
  if (v139 == 1) {
    v97 = 2;
    goto LABEL_135;
  }
  if ((v139 & (v139 - 1)) != 0) {
    v98 = std___1___next_prime(v139);
    v99 = *(_QWORD*)(v96 + 8);
    v97 = v98;
    v100 = v98 >= v99;
    if (v98 > v99) {
      goto LABEL_135;
    }
  }
  else {
    v99 = 0;
    v100 = true;
    if (v139 != 0) {
      goto LABEL_135;
    }
  }
  if (!v100) {
    v101 = vcvtps_u32_f32((float)*(unsigned __int64*)(v96 + 24) /
                          *(float*)(v96 + 32));
    if (v99 < 3 || (v99 & (v99 - 1)) != 0) {
      v3 = v97;
      v101 = std___1___next_prime(v101);
      v97 = v3;
    }
    else {
      v102 = 1LL << -(char)__clz(v101 - 1);
      if (v101 >= 2) {
        v101 = v102;
      }
    }
    if (v97 <= v101) {
      v97 = v101;
    }
    if (v97 < v99) {
    LABEL_135:
      GameRoutine_6619e0(v96, v97);
    }
  }
  v103 = v140;
  if (v140 != nullptr) {
    v104 = (_QWORD*)(v96 + 16);
    do {
      v105 = *((unsigned int*)v103 + 4);
      v106 = *(_QWORD*)(v96 + 8);
      if (v106 != 0) {
        v107 = v106 - 1;
        if ((v106 & (v106 - 1)) != 0) {
          v3 = *((unsigned int*)v103 + 4);
          if (v106 <= v105) {
            v3 = (unsigned int)v105 % (unsigned int)v106;
          }
        }
        else {
          v3 = ((_DWORD)v106 - 1) & (unsigned int)v105;
        }
        v108 = *(__int64***)(*(_QWORD*)v96 + 8 * v3);
        if (v108 != nullptr) {
          v109 = *v108;
          if (v109 != nullptr) {
            if ((v106 & v107) == 0) {
              while (1) {
                v111 = v109[1];
                if (v111 == v105) {
                  if (*((_DWORD*)v109 + 4) == (_DWORD)v105) {
                    goto LABEL_195;
                  }
                }
                else if ((v111 & v107) != v3) {
                  goto LABEL_158;
                }
                v109 = (__int64*)*v109;
                if (v109 == nullptr) {
                  goto LABEL_158;
                }
              }
            }
            do {
              v110 = v109[1];
              if (v110 == v105) {
                if (*((_DWORD*)v109 + 4) == (_DWORD)v105) {
                  goto LABEL_195;
                }
              }
              else {
                if (v110 >= v106) {
                  v110 %= v106;
                }
                if (v110 != v3) {
                  break;
                }
              }
              v109 = (__int64*)*v109;
            } while (v109 != nullptr);
          }
        }
      }
    LABEL_158:
      v112 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *v112 = 0;
      v112[1] = v105;
      v113 = v112;
      v112[2] = v103[2];
      v114 = *(float*)(v96 + 32);
      v115 = (float)(unsigned __int64)(*(_QWORD*)(v96 + 24) + 1LL);
      if (v106 == 0 || (float)(v114 * (float)v106) < v115) {
        v116 = v115 / v114;
        v117 = (v106 & (v106 - 1)) != 0;
        if (v106 < 3) {
          v117 = true;
        }
        v118 = v117 | (2 * v106);
        v119 = vcvtps_u32_f32(v116);
        if (v118 <= v119) {
          v120 = v119;
        }
        else {
          v120 = v118;
        }
        if (v120 == 1) {
          v120 = 2;
        }
        else if ((v120 & (v120 - 1)) != 0) {
          v121 = std___1___next_prime(v120);
          v106 = *(_QWORD*)(v96 + 8);
          v120 = v121;
        }
        if (v120 > v106) {
          goto LABEL_170;
        }
        if (v120 < v106) {
          v122 = vcvtps_u32_f32((float)*(unsigned __int64*)(v96 + 24) /
                                *(float*)(v96 + 32));
          if (v106 < 3 || (v106 & (v106 - 1)) != 0) {
            v122 = std___1___next_prime(v122);
          }
          else {
            v123 = 1LL << -(char)__clz(v122 - 1);
            if (v122 >= 2) {
              v122 = v123;
            }
          }
          if (v120 <= v122) {
            v120 = v122;
          }
          if (v120 < v106) {
          LABEL_170:
            GameRoutine_6619e0(v96, v120);
          }
        }
        v106 = *(_QWORD*)(v96 + 8);
        if ((v106 & (v106 - 1)) != 0) {
          if (v106 <= v105) {
            v3 = v105 % v106;
          }
          else {
            v3 = v105;
          }
        }
        else {
          v3 = ((_DWORD)v106 - 1) & (unsigned int)v105;
        }
      }
      v124 = *(_QWORD*)v96;
      v125 = *(_QWORD**)(*(_QWORD*)v96 + 8 * v3);
      if (v125 != nullptr) {
        *v113 = *v125;
        *v125 = v113;
      }
      else {
        *v113 = *v104;
        *v104 = v113;
        *(_QWORD*)(v124 + 8 * v3) = v104;
        if (*v113 != 0) {
          v126 = *(_QWORD*)(*v113 + 8LL);
          if ((v106 & (v106 - 1)) != 0) {
            if (v126 >= v106) {
              v126 %= v106;
            }
          }
          else {
            v126 &= v106 - 1;
          }
          *(_QWORD*)(*(_QWORD*)v96 + 8 * v126) = v113;
        }
      }
      ++*(_QWORD*)(v96 + 24);
    LABEL_195:
      v103 = (_QWORD*)*v103;
    } while (v103 != nullptr);
  }
  v127 = *(_QWORD*)(a1 + 32);
  v128 = *(_QWORD*)(a1 + 40);
  v129 = ((v128 - v127) << 7) - 1;
  if (v128 == v127) {
    v129 = 0;
  }
  ++*(_QWORD*)(a1 + 112);
  v130 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  if (v129 == v130) {
    GameRoutine_660f80(a1 + 24);
    v127 = *(_QWORD*)(a1 + 32);
    v130 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v127 + 8 * (v130 >> 10)) + 4 * (v130 & 0x3FF)) = v43;
  ++*(_QWORD*)(a1 + 64);
  v131 = *(_QWORD*)(a1 + 112);
  if (v131 != 0) {
    v131 = *(_QWORD*)(*(_QWORD*)(a1 + 80) +
                      8 * ((v131 + *(_QWORD*)(a1 + 104) - 1) / 0x66)) +
           40 * ((v131 + *(_QWORD*)(a1 + 104) - 1) % 0x66);
  }
  v132 = v140;
  *(_QWORD*)(a1 + 120) = v131;
  if (v132 != nullptr) {
    do {
      v133 = (_QWORD*)*v132;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v134 = 128;
      }
      else {
        v134 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v134, v132);
      v132 = v133;
    } while (v133 != nullptr);
  }
  v135 = v138;
  v138 = 0;
  if (v135 != 0) {
    v136 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v136 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v136, v135);
  }
  return 1;
}

__int64 Stream_Unknown3(__int64 a1, int a2)
{
  int v2;
  int v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;

  v2 = *(_DWORD*)(a1 + 20);
  if (v2 <= 0) {
    v4 = -(-v2 & 3);
  }
  else {
    v4 = *(_DWORD*)(a1 + 20) & 3;
  }
  if (v4 != 0) {
    *(_DWORD*)(a1 + 20) = v2 - v4 + 4;
  }
  v5 = a1 + 72;
  v6 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56) - 1LL;
  v7 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (v6 >> 10)) +
                  4 * (v6 & 0x3FF));
  if (a2 > v7) {
    v7 = a2;
  }
  *(_DWORD*)(a1 + 20) = v7;
  result = GameRoutine_6622e0(v5);
  v10 = *(_QWORD*)(a1 + 32);
  v9 = *(_QWORD*)(a1 + 40);
  v11 = v9 - v10;
  v12 = v9 == v10;
  v14 = *(_QWORD*)(a1 + 56);
  v13 = *(_QWORD*)(a1 + 64);
  v15 = (v11 << 7) - 1;
  if (v12) {
    v15 = 0;
  }
  *(_QWORD*)(a1 + 64) = v13 - 1;
  if ((unsigned __int64)(v15 - (v13 + v14) + 1) >= 0x800) {
    v16 = *(_QWORD*)(v9 - 8);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      v9 = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9 - 8;
  }
  v18 = *(_QWORD*)(a1 + 112);
  if (v18 != 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(a1 + 80) +
                     8 * ((v18 + *(_QWORD*)(a1 + 104) - 1) / 0x66)) +
          40 * ((v18 + *(_QWORD*)(a1 + 104) - 1) % 0x66);
  }
  *(_QWORD*)(a1 + 120) = v18;
  return result;
}

#pragma GCC visibility pop
