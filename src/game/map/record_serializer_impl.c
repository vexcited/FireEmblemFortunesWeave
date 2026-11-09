#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12439e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12adb70(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6e0f00(_QWORD, _QWORD);
__int64 GameRoutine_762f30(_QWORD, _QWORD);
__int64 Stream_Destructor(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212d290;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_2240178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_12352b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 RecordSerializer_123cfa0(__int64 a1, __int64 a2);
__int64 RecordSerializer_123d0b0(__int64 result);
__int64 RecordSerializer_123d170(__int64 a1);
__int64 RecordSerializer_123d420(__int64 a1);
__int64 RecordSerializer_123d650(__int64 a1, __int64 a2);
__int64* RecordSerializer_123d810(__int64* result, __int64* a2);
void RecordSerializer_126ad60(__int64 a1, __int64 a2);

__int64 RecordSerializer_123cfa0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v2 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v2) = 0;
  v5 = *(_QWORD*)(a2 + 440);
  if (v5 != 0) {
    v6 = *(_BYTE*)(v5 + 16);
  }
  else {
    v6 = 9;
  }
  v7 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v7) = v6;
  v8 = *(_QWORD*)(a2 + 424);
  if (v8 != 0) {
    LOBYTE(v8) = *(_BYTE*)(v8 + 2088);
  }
  v9 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v9) = v8;
  v15 = 0;
  (**(void (***)(__int64, int*))a1)(a1, &v15);
  v10 = *(_QWORD*)(a2 + 440);
  v11 = v10 != 0 && *(unsigned __int8*)(v10 + 16) < 4u;
  v12 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v12) = 36;
  v13 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + v13) = v11;
  GameRoutine_6e0f00(a2, a1);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 8LL))(a1, 0);
}

__int64 RecordSerializer_123d0b0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned __int8 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(int*)(result + 20);
  v2 = *(_QWORD*)(result + 8);
  v3 = result;
  v4 = GameData_2240178;
  v5 = v1 + 1;
  *(_DWORD*)(result + 20) = v1 + 1;
  if (*(_BYTE*)(v2 + v1) != 0) {
    if (v4 == 0) {
      return result;
    }
    *(_DWORD*)(result + 20) = v1 + 2;
    v6 = *(unsigned __int8*)(v2 + v5);
    v7 = GameRoutine_12adb70(*(unsigned __int8*)(v2 + v5));
    v8 = v7;
    v9 = v7;
    v10 = v4 + 416;
    v11 = v3;
    v12 = v6;
  }
  else {
    if (v4 == 0) {
      return result;
    }
    v13 = GameRoutine_12adb70(0);
    v8 = v13;
    v9 = v13;
    v10 = v4 + 416;
    v11 = v3;
    v12 = 0;
  }
  v14 = v4 + 32 * v8 + 8;
  if (v9 >= 0xC) {
    v15 = v10;
  }
  else {
    v15 = v14;
  }
  return GameRoutine_12439e0(v15, v11, v12);
}

__int64 RecordSerializer_123d170(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  char* v27;

  v1 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v1 + 1;
  LODWORD(v1) = *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + v1);
  v3 = GameData_21ca2f8;
  *(_DWORD*)(GameData_21ca2f8 + 20) &= 0xFFFFFFE1;
  v4 = *(int*)(a1 + 20);
  v5 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 20) = v4 + 1;
  v6 = *(unsigned __int8*)(v5 + v4);
  *(_DWORD*)(a1 + 20) = v4 + 2;
  v7 = v6 | (*(unsigned __int8*)(v5 + v4 + 1) << 8);
  *(_DWORD*)(a1 + 20) = v4 + 3;
  v8 = *(unsigned __int8*)(v5 + v4 + 2);
  *(_DWORD*)(a1 + 20) = v4 + 4;
  *(_DWORD*)(v3 + 20) |=
      v7 | (v8 << 16) | (*(unsigned __int8*)(v5 + v4 + 3) << 24);
  v9 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v9 + 1;
  *(_BYTE*)(v3 + 38) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + v9);
  v10 = *(int*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v10 + 1;
  *(_BYTE*)(v3 + 39) = *(_BYTE*)(*(_QWORD*)(a1 + 8) + v10);
  if ((_DWORD)v1 != 0) {
    GameRoutine_762f30(v3 + 40, a1);
    return GameRoutine_762f30(v3 + 168, a1);
  }
  else {
    v12 = *(int*)(a1 + 20);
    v13 = *(_QWORD*)(a1 + 8);
    v14 = &GameData_1a9f09e;
    v15 = v12 + 1;
    *(_DWORD*)(a1 + 20) = v12 + 1;
    v16 = *(unsigned __int8*)(v13 + v12);
    v17 = v12 + 2;
    *(_DWORD*)(a1 + 20) = v17;
    v18 = v16 | (*(unsigned __int8*)(v13 + v15) << 8);
    if (v18 != 0) {
      v19 = (char*)(v13 + v17);
      *(_DWORD*)(a1 + 20) = v17 + v18;
      if (*v19 != 0) {
        v14 = v19;
      }
    }
    GameRoutine_60a020(v3 + 40, v14);
    v20 = *(int*)(a1 + 20);
    v21 = *(_QWORD*)(a1 + 8);
    v22 = &GameData_1a9f09e;
    v23 = v20 + 1;
    *(_DWORD*)(a1 + 20) = v20 + 1;
    v24 = *(unsigned __int8*)(v21 + v20);
    v25 = v20 + 2;
    *(_DWORD*)(a1 + 20) = v25;
    v26 = v24 | (*(unsigned __int8*)(v21 + v23) << 8);
    if (v26 != 0) {
      v27 = (char*)(v21 + v25);
      *(_DWORD*)(a1 + 20) = v25 + v26;
      if (*v27 != 0) {
        v22 = v27;
      }
    }
    return GameRoutine_60a020(v3 + 168, v22);
  }
}

__int64 RecordSerializer_123d420(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
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
  int v25;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      491520, 16, 0);
  v4 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 136) = v3;
  if (v4 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v5);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 168) - v6) >> 2) <= 0x7F) {
    v7 = *(_QWORD*)(a1 + 160) - v6;
    v8 = fw_memory_HeapManager_Allocate(*v2, 1536, 16, 0);
    memcpy(v8, v6, v7);
    *(_QWORD*)(a1 + 152) = v8;
    *(_QWORD*)(a1 + 160) = v8 + v7;
    *(_QWORD*)(a1 + 168) = v8 + 1536;
    if (v6 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v9);
    }
  }
  *(_DWORD*)(a1 + 20) = 0;
  v25 = 0;
  result = Stream_Destructor(a1, &v25);
  v11 = *(_DWORD*)(a1 + 20);
  v12 = v11;
  if (v11 <= 128) {
    v12 = 128;
    if (v11 != 128) {
      v13 = (128 - v11) & 7;
      if ((unsigned int)(v11 - 121) >= 7) {
        v14 = (128 - v11) & 0xFFFFFFF8;
        do {
          v15 = *(int*)(a1 + 20);
          v14 -= 8;
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
          v21 = *(_QWORD*)(a1 + 8);
          *(_DWORD*)(a1 + 20) = v20 + 1;
          *(_BYTE*)(v21 + v20) = 0;
          v22 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v22 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v22) = 0;
          v23 = *(int*)(a1 + 20);
          *(_DWORD*)(a1 + 20) = v23 + 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 8) + v23) = 0;
        } while (v14 != 0);
      }
      for (; v13 != 0; *(_BYTE*)(*(_QWORD*)(a1 + 8) + v24) = 0) {
        v24 = *(int*)(a1 + 20);
        --v13;
        *(_DWORD*)(a1 + 20) = v24 + 1;
      }
      v12 = *(_DWORD*)(a1 + 20);
    }
  }
  *(_DWORD*)(a1 + 128) = v12;
  return result;
}

__int64 RecordSerializer_123d650(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int16 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;

  v2 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 40);
  v4 = *(_DWORD*)(a1 + 128);
  v7 = ((v3 - v2) << 7) - 1;
  if (v3 == v2) {
    v7 = 0;
  }
  v8 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  if (v7 == v8) {
    GameRoutine_660f80(a1 + 24);
    v2 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 64) + *(_QWORD*)(a1 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v2 + 8 * (v8 >> 10)) + 4 * (v8 & 0x3FF)) =
      *(_DWORD*)(a1 + 20);
  *(_DWORD*)(a1 + 20) = v4;
  ++*(_QWORD*)(a1 + 64);
  (**(void (***)(__int64, __int64))a2)(a2, a1);
  v9 = *(_DWORD*)(a1 + 144);
  v10 = *(int*)(a1 + 20) - (__int64)*(int*)(a1 + 128);
  v26 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a2 + 8LL))(
      a2, v9, (unsigned int)v10);
  v27 = v11;
  result = RecordSerializer_123d810(a1 + 152, &v26);
  v13 = *(_QWORD*)(a1 + 136);
  if (v13 != 0) {
    if ((int)v10 <= (int)(491520 - v9)) {
      result =
          memcpy(v13 + (int)v9, *(_QWORD*)(a1 + 8) + *(int*)(a1 + 128), v10);
    }
    *(_DWORD*)(a1 + 144) += v10;
  }
  v15 = *(_QWORD*)(a1 + 56);
  v14 = *(_QWORD*)(a1 + 64);
  v17 = *(_QWORD*)(a1 + 32);
  v16 = *(_QWORD*)(a1 + 40);
  v18 = v16 == v17;
  v19 = v14 - 1 + v15;
  v20 = v19 >> 10;
  v21 = v19 & 0x3FF;
  v22 = ((v16 - v17) << 7) - 1;
  v23 = *(_QWORD*)(v17 + 8 * v20);
  if (v18) {
    v22 = 0;
  }
  v24 = *(_DWORD*)(v23 + 4 * v21);
  *(_QWORD*)(a1 + 64) = v14 - 1;
  *(_DWORD*)(a1 + 20) = v24;
  if ((unsigned __int64)(v22 - (v14 + v15) + 1) >= 0x800) {
    if (*(_QWORD*)(v16 - 8) != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
      v16 = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v16 - 8;
  }
  return result;
}

__int64* RecordSerializer_123d810(__int64* result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = result[1];
  v2 = result[2];
  v4 = result;
  if (v3 >= v2) {
    v7 = *result;
    v8 = v3 - *result;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 2);
    if (v9 > 0x1555555555555555LL) {
      GameRoutine_12352b0();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - v7) >> 2);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0xAAAAAAAAAAAAAAALL) {
      v12 = 0x1555555555555555LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x1555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    v16 = v14 + 12 * v12;
    v6 = v14 + v8 + 12;
    *(_QWORD*)v15 = *a2;
    *(_DWORD*)(v15 + 8) = *((_DWORD*)a2 + 2);
    result = (__int64*)memcpy(v14, v7, v8);
    *v4 = v14;
    v4[1] = v6;
    v4[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17);
    }
  }
  else {
    v5 = *a2;
    v6 = v3 + 12;
    *(_DWORD*)(v3 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)v3 = v5;
  }
  v4[1] = v6;
  return result;
}

void RecordSerializer_126ad60(__int64 a1, __int64 a2)
{
  __int64 v2;
  int* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  char v18;
  __int64 v19;
  char v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
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
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  char v59;
  __int64 v60;
  char v61;
  __int64 v62;
  char v63;
  __int64 v64;
  char v65;
  __int64 v66;
  char v67;
  __int64 v68;
  char v69;
  __int64 v70;
  char v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  char v77;
  __int64 v78;
  char v79;
  __int64 v80;
  char v81;
  __int64 v82;
  char v83;
  __int64 v84;
  char v85;
  __int64 v86;
  char v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int* v120;
  char v121;
  _QWORD* v122;
  __int64 v123;
  char v124;
  __int64 v125;
  char v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int v180;
  __int64 v181;
  unsigned __int64 v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  int v195;
  __int64 v196;

  v3 = (int*)(a2 + 20);
  v2 = *(int*)(a2 + 20);
  v6 = (__int64*)(a2 + 8);
  v5 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(v5 + v2) = 0;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = 0;
  v9 = GameData_212d290;
  v10 = *(_QWORD*)GameData_212d290;
  if (*(_QWORD*)GameData_212d290 != 0) {
    v11 = *v3;
    v12 = *(_BYTE*)(v10 + 29);
    *v3 = v11 + 1;
    *(_BYTE*)(*v6 + v11) = v12;
    LOBYTE(v10) = *(_BYTE*)(v10 + 30);
  }
  else {
    v13 = *v3;
    *v3 = v13 + 1;
    *(_BYTE*)(*v6 + v13) = 0;
  }
  v14 = *v3;
  *v3 = v14 + 1;
  *(_BYTE*)(*v6 + v14) = v10;
  v15 = *v3;
  *v3 = v15 + 1;
  *(_BYTE*)(*v6 + v15) = 0;
  if (*(_QWORD*)v9 != 0) {
    v16 = *v3;
    v17 = *(_DWORD**)(*(_QWORD*)v9 + 8LL);
    v18 = v17[200];
    *v3 = v16 + 1;
    *(_BYTE*)(*v6 + v16) = v18;
    v19 = *v3;
    v20 = v17[202];
    *v3 = v19 + 1;
    *(_BYTE*)(*v6 + v19) = v20;
    v21 = *v3;
    v22 = v17[201];
    *v3 = v21 + 1;
    *(_BYTE*)(*v6 + v21) = v22;
    if ((int)v17[200] >= 1) {
      v23 = 0;
      do {
        if (*((_BYTE*)v17 + v23) != 0 &&
            ((v26 = *(_QWORD*)(GameData_21ca310 + 56) +
                    2224LL * *((unsigned __int8*)v17 + v23),
              *((unsigned __int8*)v17 + v23) <= 0xFAu)
                 ? (v27 = v26 == 2224)
                 : (v27 = true),
             !v27 && (v28 = *(_QWORD*)(v26 - 1784)) != 0 &&
                 *(unsigned __int8*)(v28 + 16) <= 8u)) {
          v24 = *(_BYTE*)(v26 - 136);
        }
        else {
          v24 = 0;
        }
        v25 = *v3;
        ++v23;
        *v3 = v25 + 1;
        *(_BYTE*)(*v6 + v25) = v24;
      } while (v23 < (int)v17[200]);
    }
  }
  else {
    v29 = *v3;
    *v3 = v29 + 1;
    *(_BYTE*)(*v6 + v29) = 0;
    v30 = *v3;
    *v3 = v30 + 1;
    *(_BYTE*)(*v6 + v30) = 0;
    v31 = *v3;
    *v3 = v31 + 1;
    *(_BYTE*)(*v6 + v31) = 0;
    v32 = 160;
    do {
      v33 = *v3;
      v32 -= 10;
      *v3 = v33 + 1;
      *(_BYTE*)(*v6 + v33) = 0;
      v34 = *v3;
      *v3 = v34 + 1;
      *(_BYTE*)(*v6 + v34) = 0;
      v35 = *v3;
      *v3 = v35 + 1;
      *(_BYTE*)(*v6 + v35) = 0;
      v36 = *v3;
      *v3 = v36 + 1;
      *(_BYTE*)(*v6 + v36) = 0;
      v37 = *v3;
      *v3 = v37 + 1;
      *(_BYTE*)(*v6 + v37) = 0;
      v38 = *v3;
      *v3 = v38 + 1;
      *(_BYTE*)(*v6 + v38) = 0;
      v39 = *v3;
      *v3 = v39 + 1;
      *(_BYTE*)(*v6 + v39) = 0;
      v40 = *v3;
      v41 = *v6;
      *v3 = v40 + 1;
      *(_BYTE*)(v41 + v40) = 0;
      v42 = *v3;
      *v3 = v42 + 1;
      *(_BYTE*)(*v6 + v42) = 0;
      v43 = *v3;
      *v3 = v43 + 1;
      *(_BYTE*)(*v6 + v43) = 0;
    } while (v32 != 0);
  }
  v44 = *v3;
  *v3 = v44 + 1;
  *(_BYTE*)(*v6 + v44) = 0;
  if (*(_QWORD*)v9 != 0) {
    v45 = *v3;
    v46 = *(_QWORD*)(*(_QWORD*)v9 + 16LL);
    v47 = *(_BYTE*)(v46 + 2240);
    *v3 = v45 + 1;
    *(_BYTE*)(*v6 + v45) = v47;
    v48 = *v3;
    v49 = *(_DWORD*)(v46 + 2248);
    *v3 = v48 + 1;
    *(_BYTE*)(*v6 + v48) = v49;
    v50 = *v3;
    *v3 = v50 + 1;
    *(_BYTE*)(*v6 + v50) = BYTE1(v49);
    v51 = *v3;
    *v3 = v51 + 1;
    *(_BYTE*)(*v6 + v51) = BYTE2(v49);
    v52 = *v3;
    *v3 = v52 + 1;
    *(_BYTE*)(*v6 + v52) = HIBYTE(v49);
    v53 = *v3;
    v54 = *v6;
    *v3 = v53 + 1;
    v55 = 252;
    *(_BYTE*)(v54 + v53) = -4;
    v56 = *v3;
    *v3 = v56 + 1;
    *(_BYTE*)(*v6 + v56) = 0;
    v57 = (char*)(v46 + 22659);
    do {
      v58 = *v3;
      v59 = *(v57 - 3);
      v55 -= 7;
      *v3 = v58 + 1;
      *(_BYTE*)(*v6 + v58) = v59;
      v60 = *v3;
      v61 = *(v57 - 2);
      *v3 = v60 + 1;
      *(_BYTE*)(*v6 + v60) = v61;
      v62 = *v3;
      v63 = *(v57 - 1);
      *v3 = v62 + 1;
      *(_BYTE*)(*v6 + v62) = v63;
      v64 = *v3;
      v65 = *v57;
      *v3 = v64 + 1;
      *(_BYTE*)(*v6 + v64) = v65;
      v66 = *v3;
      v67 = v57[1];
      *v3 = v66 + 1;
      *(_BYTE*)(*v6 + v66) = v67;
      v68 = *v3;
      v69 = v57[2];
      *v3 = v68 + 1;
      *(_BYTE*)(*v6 + v68) = v69;
      v70 = *v3;
      v71 = v57[3];
      v57 += 7;
      *v3 = v70 + 1;
      *(_BYTE*)(*v6 + v70) = v71;
    } while (v55 != 0);
    v72 = (char*)(v46 + 22911);
    v73 = 252;
    do {
      v74 = *v3;
      v75 = *(v72 - 3);
      v73 -= 7;
      *v3 = v74 + 1;
      *(_BYTE*)(*v6 + v74) = v75;
      v76 = *v3;
      v77 = *(v72 - 2);
      *v3 = v76 + 1;
      *(_BYTE*)(*v6 + v76) = v77;
      v78 = *v3;
      v79 = *(v72 - 1);
      *v3 = v78 + 1;
      *(_BYTE*)(*v6 + v78) = v79;
      v80 = *v3;
      v81 = *v72;
      *v3 = v80 + 1;
      *(_BYTE*)(*v6 + v80) = v81;
      v82 = *v3;
      v83 = v72[1];
      *v3 = v82 + 1;
      *(_BYTE*)(*v6 + v82) = v83;
      v84 = *v3;
      v85 = v72[2];
      *v3 = v84 + 1;
      *(_BYTE*)(*v6 + v84) = v85;
      v86 = *v3;
      v87 = v72[3];
      v72 += 7;
      *v3 = v86 + 1;
      *(_BYTE*)(*v6 + v86) = v87;
    } while (v73 != 0);
  }
  else {
    v88 = *v3;
    *v3 = v88 + 1;
    *(_BYTE*)(*v6 + v88) = 0;
    v89 = *v3;
    *v3 = v89 + 1;
    *(_BYTE*)(*v6 + v89) = 0;
    v90 = *v3;
    *v3 = v90 + 1;
    *(_BYTE*)(*v6 + v90) = 0;
    v91 = *v3;
    *v3 = v91 + 1;
    *(_BYTE*)(*v6 + v91) = 0;
    v92 = *v3;
    *v3 = v92 + 1;
    *(_BYTE*)(*v6 + v92) = 0;
    v93 = *v3;
    v94 = *v6;
    *v3 = v93 + 1;
    v95 = 252;
    *(_BYTE*)(v94 + v93) = -4;
    v96 = *v3;
    *v3 = v96 + 1;
    *(_BYTE*)(*v6 + v96) = 0;
    do {
      v97 = *v3;
      v95 -= 9;
      *v3 = v97 + 1;
      *(_BYTE*)(*v6 + v97) = 0;
      v98 = *v3;
      *v3 = v98 + 1;
      *(_BYTE*)(*v6 + v98) = 0;
      v99 = *v3;
      *v3 = v99 + 1;
      *(_BYTE*)(*v6 + v99) = 0;
      v100 = *v3;
      *v3 = v100 + 1;
      *(_BYTE*)(*v6 + v100) = 0;
      v101 = *v3;
      *v3 = v101 + 1;
      *(_BYTE*)(*v6 + v101) = 0;
      v102 = *v3;
      *v3 = v102 + 1;
      *(_BYTE*)(*v6 + v102) = 0;
      v103 = *v3;
      v104 = *v6;
      *v3 = v103 + 1;
      *(_BYTE*)(v104 + v103) = 0;
      v105 = *v3;
      *v3 = v105 + 1;
      *(_BYTE*)(*v6 + v105) = 0;
      v106 = *v3;
      *v3 = v106 + 1;
      *(_BYTE*)(*v6 + v106) = 0;
    } while (v95 != 0);
    v107 = 252;
    do {
      v108 = *v3;
      v107 -= 9;
      *v3 = v108 + 1;
      *(_BYTE*)(*v6 + v108) = 0;
      v109 = *v3;
      *v3 = v109 + 1;
      *(_BYTE*)(*v6 + v109) = 0;
      v110 = *v3;
      *v3 = v110 + 1;
      *(_BYTE*)(*v6 + v110) = 0;
      v111 = *v3;
      *v3 = v111 + 1;
      *(_BYTE*)(*v6 + v111) = 0;
      v112 = *v3;
      *v3 = v112 + 1;
      *(_BYTE*)(*v6 + v112) = 0;
      v113 = *v3;
      *v3 = v113 + 1;
      *(_BYTE*)(*v6 + v113) = 0;
      v114 = *v3;
      v115 = *v6;
      *v3 = v114 + 1;
      *(_BYTE*)(v115 + v114) = 0;
      v116 = *v3;
      *v3 = v116 + 1;
      *(_BYTE*)(*v6 + v116) = 0;
      v117 = *v3;
      *v3 = v117 + 1;
      *(_BYTE*)(*v6 + v117) = 0;
    } while (v107 != 0);
  }
  v118 = *v3;
  *v3 = v118 + 1;
  *(_BYTE*)(*v6 + v118) = 0;
  if (*(_QWORD*)v9 == 0) {
    v129 = *v3;
    *v3 = v129 + 1;
    *(_BYTE*)(*v6 + v129) = 0;
    v130 = *v3;
    *v3 = v130 + 1;
    *(_BYTE*)(*v6 + v130) = 0;
    v131 = *v3;
    *v3 = v131 + 1;
    *(_BYTE*)(*v6 + v131) = 0;
    v132 = *v3;
    *v3 = v132 + 1;
    *(_BYTE*)(*v6 + v132) = 0;
    v133 = *v3;
    *v3 = v133 + 1;
    *(_BYTE*)(*v6 + v133) = 0;
    v134 = *v3;
    *v3 = v134 + 1;
    *(_BYTE*)(*v6 + v134) = 0;
    v135 = *v3;
    *v3 = v135 + 1;
    *(_BYTE*)(*v6 + v135) = 0;
    v136 = *v3;
    *v3 = v136 + 1;
    *(_BYTE*)(*v6 + v136) = 0;
    v137 = *v3;
    *v3 = v137 + 1;
    *(_BYTE*)(*v6 + v137) = 0;
    v138 = *v3;
    *v3 = v138 + 1;
    *(_BYTE*)(*v6 + v138) = 0;
    v139 = *v3;
    *v3 = v139 + 1;
    *(_BYTE*)(*v6 + v139) = 0;
    v140 = *v3;
    *v3 = v140 + 1;
    *(_BYTE*)(*v6 + v140) = 0;
    v141 = *v3;
    *v3 = v141 + 1;
    *(_BYTE*)(*v6 + v141) = 0;
    v142 = *v3;
    *v3 = v142 + 1;
    *(_BYTE*)(*v6 + v142) = 0;
    v143 = *v3;
    *v3 = v143 + 1;
    *(_BYTE*)(*v6 + v143) = 0;
    v144 = *v3;
    *v3 = v144 + 1;
    *(_BYTE*)(*v6 + v144) = 0;
    v145 = *v3;
    *v3 = v145 + 1;
    *(_BYTE*)(*v6 + v145) = 0;
    v146 = *v3;
    *v3 = v146 + 1;
    *(_BYTE*)(*v6 + v146) = 0;
    v147 = *v3;
    *v3 = v147 + 1;
    *(_BYTE*)(*v6 + v147) = 0;
    v148 = *v3;
    *v3 = v148 + 1;
    *(_BYTE*)(*v6 + v148) = 0;
    v149 = *v3;
    *v3 = v149 + 1;
    *(_BYTE*)(*v6 + v149) = 0;
    v150 = *v3;
    *v3 = v150 + 1;
    *(_BYTE*)(*v6 + v150) = 0;
    v151 = *v3;
    *v3 = v151 + 1;
    *(_BYTE*)(*v6 + v151) = 0;
    v152 = *v3;
    *v3 = v152 + 1;
    *(_BYTE*)(*v6 + v152) = 0;
    v153 = *v3;
    *v3 = v153 + 1;
    *(_BYTE*)(*v6 + v153) = 0;
    v154 = *v3;
    *v3 = v154 + 1;
    *(_BYTE*)(*v6 + v154) = 0;
    v155 = *v3;
    *v3 = v155 + 1;
    *(_BYTE*)(*v6 + v155) = 0;
    v156 = *v3;
    *v3 = v156 + 1;
    *(_BYTE*)(*v6 + v156) = 0;
    v157 = *v3;
    *v3 = v157 + 1;
    *(_BYTE*)(*v6 + v157) = 0;
    v158 = *v3;
    *v3 = v158 + 1;
    *(_BYTE*)(*v6 + v158) = 0;
    v159 = *v3;
    *v3 = v159 + 1;
    *(_BYTE*)(*v6 + v159) = 0;
    v160 = *v3;
    *v3 = v160 + 1;
    *(_BYTE*)(*v6 + v160) = 0;
    v161 = *v3;
    *v3 = v161 + 1;
    *(_BYTE*)(*v6 + v161) = 0;
    v162 = *v3;
    *v3 = v162 + 1;
    *(_BYTE*)(*v6 + v162) = 0;
    v163 = *v3;
    *v3 = v163 + 1;
    *(_BYTE*)(*v6 + v163) = 0;
    v164 = *v3;
    *v3 = v164 + 1;
    *(_BYTE*)(*v6 + v164) = 0;
    v165 = *v3;
    *v3 = v165 + 1;
    *(_BYTE*)(*v6 + v165) = 0;
    v166 = *v3;
    *v3 = v166 + 1;
    *(_BYTE*)(*v6 + v166) = 0;
    v167 = *v3;
    *v3 = v167 + 1;
    *(_BYTE*)(*v6 + v167) = 0;
    v168 = *v3;
    *v3 = v168 + 1;
    *(_BYTE*)(*v6 + v168) = 0;
    v169 = *v3;
    *v3 = v169 + 1;
    *(_BYTE*)(*v6 + v169) = 0;
    v170 = *v3;
    *v3 = v170 + 1;
    *(_BYTE*)(*v6 + v170) = 0;
    v171 = *v3;
    *v3 = v171 + 1;
    *(_BYTE*)(*v6 + v171) = 0;
    v172 = *v3;
    *v3 = v172 + 1;
    *(_BYTE*)(*v6 + v172) = 0;
    v173 = *v3;
    *v3 = v173 + 1;
    *(_BYTE*)(*v6 + v173) = 0;
    v174 = *v3;
    *v3 = v174 + 1;
    *(_BYTE*)(*v6 + v174) = 0;
    v175 = *v3;
    *v3 = v175 + 1;
    *(_BYTE*)(*v6 + v175) = 0;
    v176 = *v3;
    *v3 = v176 + 1;
    *(_BYTE*)(*v6 + v176) = 0;
    v177 = *v3;
    *v3 = v177 + 1;
    *(_BYTE*)(*v6 + v177) = 0;
    if (*(_QWORD*)v9 == 0) {
      return;
    }
    goto LABEL_36;
  }
  v119 = *v3;
  v120 = *(int**)(*(_QWORD*)(*(_QWORD*)v9 + 16LL) + 22640LL);
  v121 = *v120;
  *v3 = v119 + 1;
  *(_BYTE*)(*v6 + v119) = v121;
  if (*v120 >= 1) {
    v122 = v120 + 2;
    v123 = 0;
    do {
      v124 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v122 + 56LL))(*v122);
      v125 = *v3;
      *v3 = v125 + 1;
      *(_BYTE*)(*v6 + v125) = v124;
      v126 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v122 + 64LL))(*v122);
      v127 = *v3;
      ++v123;
      *v3 = v127 + 1;
      *(_BYTE*)(*v6 + v127) = v126;
      v128 = *v3;
      LOBYTE(v127) = *((_BYTE*)v122 + 8);
      v122 += 2;
      *v3 = v128 + 1;
      *(_BYTE*)(*v6 + v128) = v127;
    } while (v123 < *v120);
  }
  if (*(_QWORD*)v9 != 0) {
  LABEL_36:
    v178 = *(_QWORD*)(a2 + 32);
    v179 = *(_QWORD*)(a2 + 40);
    v180 = *v3;
    v181 = ((v179 - v178) << 7) - 1;
    if (v179 == v178) {
      v181 = 0;
    }
    v182 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
    if (v181 == v182) {
      GameRoutine_660f80(a2 + 24);
      v178 = *(_QWORD*)(a2 + 32);
      v182 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      v183 = *(_DWORD*)(a2 + 20);
    }
    else {
      v183 = v180;
    }
    *(_DWORD*)(*(_QWORD*)(v178 + 8 * (v182 >> 10)) + 4 * (v182 & 0x3FF)) = v183;
    *(_DWORD*)(a2 + 20) = v2 + 1;
    v184 = *(_QWORD*)(a2 + 8);
    ++*(_QWORD*)(a2 + 64);
    *(_BYTE*)(v184 + v2) = v180 - v8;
    v185 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v185 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v185) = (unsigned __int16)(v180 - v8) >> 8;
    v187 = *(_QWORD*)(a2 + 56);
    v186 = *(_QWORD*)(a2 + 64);
    v189 = *(_QWORD*)(a2 + 32);
    v188 = *(_QWORD*)(a2 + 40);
    v27 = v188 == v189;
    v190 = v186 - 1 + v187;
    v191 = v190 >> 10;
    v192 = v190 & 0x3FF;
    v193 = ((v188 - v189) << 7) - 1;
    v194 = *(_QWORD*)(v189 + 8 * v191);
    if (v27) {
      v193 = 0;
    }
    v195 = *(_DWORD*)(v194 + 4 * v192);
    *(_QWORD*)(a2 + 64) = v186 - 1;
    *(_DWORD*)(a2 + 20) = v195;
    if ((unsigned __int64)(v193 - (v186 + v187) + 1) >= 0x800) {
      if (*(_QWORD*)(v188 - 8) != 0) {
        v196 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v196 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v196);
        v188 = *(_QWORD*)(a2 + 40);
      }
      *(_QWORD*)(a2 + 40) = v188 - 8;
    }
  }
}

#pragma GCC visibility pop
