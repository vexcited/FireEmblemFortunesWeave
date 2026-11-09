#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameGlobalSkill_Destructor(_QWORD);
__int64 GameManager_a20000(void);
__int64 GameManager_a22fd0(void);
__int64 GameManager_a28c50(void);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_660280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6616e0(_QWORD, _QWORD);
__int64 GameRoutine_6e0f00(__int64, __int64, char);
__int64 GameRoutine_7188e0(_QWORD);
__int64 GameRoutine_71bd40(_QWORD, _QWORD);
__int64 GameRoutine_71d2c0(_QWORD, _QWORD);
__int64 GameRoutine_71e140(_QWORD, _QWORD);
__int64 GameRoutine_71e3e0(_QWORD, _QWORD);
__int64 GameRoutine_821570(_QWORD);
__int64 GameRoutine_826320(_QWORD);
__int64 GameRoutine_82d390(_QWORD, _QWORD);
__int64 GameRoutine_82d4a0(_QWORD);
__int64 GameRoutine_86abe0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_8aa110(_QWORD);
__int64 GameRoutine_8e2280(_QWORD, _QWORD);
__int64 GameRoutine_8e24a0(_QWORD, _QWORD);
__int64 GameRoutine_8eb020(_QWORD, _QWORD);
__int64 GameRoutine_8eb7a0(_QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 List_93b820(_QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fa8960[])();
extern __int64 (*GameData_1fa89f0[])();
extern __int64 (*GameData_1fa8a70[])();
extern __int64 (*game_anonymous_Impl_vtable[])();
extern __int64 GameData_212daf0[7];
extern __int64 GameData_212db08[4];
extern __int64 GameData_21eea40;
extern __int64 GameData_21f49b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212d588[4];
extern __int64* GameData_212d6d0;
extern __int64* GameData_212d7e0[7];
extern __int64* GameData_212db68[4];
extern __int64* GameData_212db90[3];
extern __int64* GameData_212dd80[6];
extern __int64* GameData_212dda0[2];
extern __int64* GameData_212df70[4];
__int64 Impl_Destructor_6eb1e0(_QWORD* a1);
__int64 Impl_Unknown7_6eb5c0(__int64 result, __int64 a2);
__int64 Impl_DeletingDestructor_6fac90(_QWORD* a1);
__int64 Impl_Destructor_718a40(__int64 a1);
__int64 Impl_Unknown9_71b700(__int64 a1, __int64 a2);
__int64 Impl_Unknown10_71ba20(__int64 a1, __int64 a2);
__int64 Impl_DeletingDestructor_812220(_QWORD* a1);
__int64 Impl_Unknown4();
__int64 Impl_Unknown5_8122c0();
__int64 Impl_Unknown6();
__int64 Impl_Unknown7_812300();
_DWORD* Impl_Unknown9_812380(__int64 a1, __int64 a2);
__int64 Impl_Unknown10_8123a0(__int64 a1, __int64 a2);
__int64 Impl_Destructor_86a740(_QWORD* a1);
__int64 Impl_DeletingDestructor_86a7a0(_QWORD* a1);
__int64 Impl_Unknown5_86a840(__int64 result);
__int64 Impl_Unknown7_86a870(__int64 result, __int64 a2);
__int64 Impl_Unknown8_86aa40(__int64 result, __int64 a2);
__int64 Impl_Unknown5_8acbd0(__int64 result);
__int64 Impl_Unknown7_8acc60(__int64 result, __int64 a2);
_DWORD* Impl_Unknown8_8acce0(_DWORD* result, __int64 a2, int a3);

__int64 Impl_Destructor_6eb1e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 i;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v34;

  v1 = a1[6];
  *a1 = game_anonymous_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    do {
      v5 = a1[5];
      v6 = (char*)a1[2];
      v7 = v1 - 1;
      v8 = *(
          _QWORD**)(*(_QWORD*)&v6[8 * ((unsigned __int64)(v1 - 1 + v5) >> 9)] +
                    8 * ((v1 - 1 + v5) & 0x1FF));
      if (v8 != nullptr) {
        v9 = v8[69539];
        if (v9 != 0) {
          v8[69540] = v9;
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
        }
        v11 = (_QWORD*)v8[69532];
        if (v11 != nullptr) {
          do {
            v12 = (_QWORD*)*v11;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v11);
            v11 = v12;
          } while (v12 != nullptr);
        }
        v14 = v8[69530];
        v8[69530] = 0;
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
        }
        v16 = v8 + 69222;
        for (i = -556000; i != 0; i += 2224) {
          game_Unit_Destroy_Unit(v16);
          v16 -= 278;
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v8);
        v19 = a1[6] + a1[5] - 1LL;
        *(_QWORD*)(*(_QWORD*)(a1[2] + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) = 0;
        v5 = a1[5];
        v1 = a1[6];
        v6 = (char*)a1[2];
        v7 = v1 - 1;
      }
      v4 = (char*)a1[3];
      v20 = v5 + v1;
      a1[6] = v7;
      if (v4 == v6) {
        v21 = 0;
      }
      else {
        v21 = ((v4 - v6) << 6) - 1;
      }
      if ((unsigned __int64)(v21 - v20 - 1023) <= 0xFFFFFFFFFFFFFBFFLL) {
        v22 = *((_QWORD*)v4 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v22);
          v4 = (char*)a1[3];
          v7 = a1[6];
        }
        v4 -= 8;
        a1[3] = v4;
      }
      v1 = v7;
    } while (v7 != 0);
  }
  else {
    v4 = (char*)a1[3];
  }
  v24 = (char*)a1[2];
  a1[6] = 0;
  a1[7] = 0;
  v25 = (v4 - v24) >> 3;
  if (v25 >= 3) {
    do {
      if (*(_QWORD*)v24 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26, *(_QWORD*)v24);
        v24 = (char*)a1[2];
        v4 = (char*)a1[3];
      }
      v24 += 8;
      a1[2] = v24;
      v25 = (v4 - v24) >> 3;
    } while (v25 > 2);
  }
  if (v25 == 1) {
    v27 = 256;
  }
  else {
    if (v25 != 2) {
      goto LABEL_50;
    }
    v27 = 512;
  }
  a1[5] = v27;

LABEL_50:
  if (v24 != v4) {
    do {
      if (*(_QWORD*)v24 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28, *(_QWORD*)v24);
      }
      v24 += 8;
    } while (v24 != v4);
    v29 = a1[3];
    v30 = a1[2] - v29;
    if (v30 != 0) {
      a1[3] = v29 + ((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v31 = a1[1];
  if (v31 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32, v31);
  }
  v34 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v34);
}

__int64 Impl_Unknown7_6eb5c0(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  char v10;
  __int64 v11;
  __int64 v12;
  void (**v13)(__int64, int*);
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 j;
  char v20;
  __int64 v21;
  __int64 v22;
  void (**v23)(__int64, int*);
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 k;
  char v30;
  __int64 v31;
  __int64 v32;
  void (**v33)(__int64, int*);
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 m;
  char v40;
  __int64 v41;
  __int64 v42;
  void (**v43)(__int64, int*);
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 n;
  char v50;
  __int64 v51;
  __int64 v52;
  void (**v53)(__int64, int*);
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 ii;
  char v60;
  __int64 v61;
  __int64 v62;
  void (**v63)(__int64, int*);
  __int64 v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 jj;
  char v70;
  __int64 v71;
  __int64 v72;
  void (**v73)(__int64, int*);
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 kk;
  char v80;
  __int64 v81;
  __int64 v82;
  void (**v83)(__int64, int*);
  __int64 v84;
  __int64 v85;
  char v86;
  __int64 v87;
  __int64 v88;
  __int64 mm;
  char v90;
  __int64 v91;
  __int64 v92;
  void (**v93)(__int64, int*);
  __int64 v94;
  __int64 v95;
  int v96;

  v2 = *(_QWORD*)(result + 56);
  v4 = (_QWORD*)(v2 + 552960);
  v5 = *(_QWORD*)(v2 + 556000);
  if (v5 != 0) {
    v6 = 0;
    do {
      v5 = *(_QWORD*)(v5 + 432);
      ++v6;
    } while (v5 != 0);
    v7 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
    v8 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6;
    for (i = v4[380]; i != 0; i = *(_QWORD*)(i + 432)) {
      v13 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v13)(a2, &v96);
      v14 = *(_QWORD*)(i + 440);
      v10 = v14 != 0 && *(unsigned __int8*)(v14 + 16) < 4u;
      v11 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 36;
      v12 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v12 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v10;
      GameRoutine_6e0f00(i, a2, v10);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v15 = v4[383];
  if (v15 != 0) {
    v16 = 0;
    do {
      v15 = *(_QWORD*)(v15 + 432);
      ++v16;
    } while (v15 != 0);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 1;
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v16;
    for (j = v4[383]; j != 0; j = *(_QWORD*)(j + 432)) {
      v23 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v23)(a2, &v96);
      v24 = *(_QWORD*)(j + 440);
      v20 = v24 != 0 && *(unsigned __int8*)(v24 + 16) < 4u;
      v21 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = 36;
      v22 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v20;
      GameRoutine_6e0f00(j, a2, v20);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v25 = v4[386];
  if (v25 != 0) {
    v26 = 0;
    do {
      v25 = *(_QWORD*)(v25 + 432);
      ++v26;
    } while (v25 != 0);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = 2;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v26;
    for (k = v4[386]; k != 0; k = *(_QWORD*)(k + 432)) {
      v33 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v33)(a2, &v96);
      v34 = *(_QWORD*)(k + 440);
      v30 = v34 != 0 && *(unsigned __int8*)(v34 + 16) < 4u;
      v31 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v31 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = 36;
      v32 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v32 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v30;
      GameRoutine_6e0f00(k, a2, v30);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v35 = v4[389];
  if (v35 != 0) {
    v36 = 0;
    do {
      v35 = *(_QWORD*)(v35 + 432);
      ++v36;
    } while (v35 != 0);
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = 3;
    v38 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v36;
    for (m = v4[389]; m != 0; m = *(_QWORD*)(m + 432)) {
      v43 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v43)(a2, &v96);
      v44 = *(_QWORD*)(m + 440);
      v40 = v44 != 0 && *(unsigned __int8*)(v44 + 16) < 4u;
      v41 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v41 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = 36;
      v42 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v42 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v40;
      GameRoutine_6e0f00(m, a2, v40);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v45 = v4[392];
  if (v45 != 0) {
    v46 = 0;
    do {
      v45 = *(_QWORD*)(v45 + 432);
      ++v46;
    } while (v45 != 0);
    v47 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) = 4;
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = v46;
    for (n = v4[392]; n != 0; n = *(_QWORD*)(n + 432)) {
      v53 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v53)(a2, &v96);
      v54 = *(_QWORD*)(n + 440);
      v50 = v54 != 0 && *(unsigned __int8*)(v54 + 16) < 4u;
      v51 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = 36;
      v52 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v52 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = v50;
      GameRoutine_6e0f00(n, a2, v50);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v55 = v4[395];
  if (v55 != 0) {
    v56 = 0;
    do {
      v55 = *(_QWORD*)(v55 + 432);
      ++v56;
    } while (v55 != 0);
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = 5;
    v58 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v58 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = v56;
    for (ii = v4[395]; ii != 0; ii = *(_QWORD*)(ii + 432)) {
      v63 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v63)(a2, &v96);
      v64 = *(_QWORD*)(ii + 440);
      v60 = v64 != 0 && *(unsigned __int8*)(v64 + 16) < 4u;
      v61 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = 36;
      v62 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v62 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = v60;
      GameRoutine_6e0f00(ii, a2, v60);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v65 = v4[398];
  if (v65 != 0) {
    v66 = 0;
    do {
      v65 = *(_QWORD*)(v65 + 432);
      ++v66;
    } while (v65 != 0);
    v67 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v67 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = 6;
    v68 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v68 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = v66;
    for (jj = v4[398]; jj != 0; jj = *(_QWORD*)(jj + 432)) {
      v73 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v73)(a2, &v96);
      v74 = *(_QWORD*)(jj + 440);
      v70 = v74 != 0 && *(unsigned __int8*)(v74 + 16) < 4u;
      v71 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v71 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = 36;
      v72 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v72 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = v70;
      GameRoutine_6e0f00(jj, a2, v70);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v75 = v4[401];
  if (v75 != 0) {
    v76 = 0;
    do {
      v75 = *(_QWORD*)(v75 + 432);
      ++v76;
    } while (v75 != 0);
    v77 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v77 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = 7;
    v78 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v78 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = v76;
    for (kk = v4[401]; kk != 0; kk = *(_QWORD*)(kk + 432)) {
      v83 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v83)(a2, &v96);
      v84 = *(_QWORD*)(kk + 440);
      v80 = v84 != 0 && *(unsigned __int8*)(v84 + 16) < 4u;
      v81 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v81 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = 36;
      v82 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v82 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = v80;
      GameRoutine_6e0f00(kk, a2, v80);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v85 = v4[404];
  if (v85 != 0) {
    v86 = 0;
    do {
      v85 = *(_QWORD*)(v85 + 432);
      ++v86;
    } while (v85 != 0);
    v87 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v87 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = 8;
    v88 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v88 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = v86;
    for (mm = v4[404]; mm != 0; mm = *(_QWORD*)(mm + 432)) {
      v93 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v93)(a2, &v96);
      v94 = *(_QWORD*)(mm + 440);
      v90 = v94 != 0 && *(unsigned __int8*)(v94 + 16) < 4u;
      v91 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = 36;
      v92 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v92 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = v90;
      GameRoutine_6e0f00(mm, a2, v90);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v95 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v95 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = -1;
  return result;
}

__int64 Impl_DeletingDestructor_6fac90(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 Impl_Destructor_718a40(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  unsigned __int64 v5;
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
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
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
  char v32;
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
  __int64 v45;

  v1 = *(_QWORD**)(a1 + 2784);
  v2 = *(_QWORD**)(a1 + 2792);
  *(_QWORD*)(a1 + 2816) = 0;
  *(_QWORD*)a1 = game_anonymous_Impl_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v2 - v1;
  if (v5 >= 3) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, *v1);
        v1 = *(_QWORD**)(a1 + 2784);
        v2 = *(_QWORD**)(a1 + 2792);
      }
      *(_QWORD*)(a1 + 2784) = ++v1;
      v5 = v2 - v1;
    } while (v5 > 2);
  }
  if (v5 == 1) {
    v7 = 51;
  }
  else {
    if (v5 != 2) {
      goto LABEL_14;
    }
    v7 = 102;
  }
  *(_QWORD*)(a1 + 2808) = v7;

LABEL_14:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v9 = *(_QWORD*)(a1 + 2792);
    v10 = *(_QWORD*)(a1 + 2784) - v9;
    if (v10 != 0) {
      *(_QWORD*)(a1 + 2792) = v9 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v11 = *(_QWORD*)(a1 + 2776);
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v11);
  }
  v13 = *(_QWORD*)(a1 + 2768);
  *(_QWORD*)(a1 + 2760) = GameData_212dda0[0] + 2;
  if (v13 != 0) {
    List_93b820(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
    *(_QWORD*)(a1 + 2768) = 0;
  }
  v15 = *(_QWORD*)(a1 + 2752);
  *(_QWORD*)(a1 + 2744) = GameData_212dd80[0] + 2;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    *(_QWORD*)(a1 + 2752) = 0;
  }
  v16 = *(_QWORD*)(a1 + 2736);
  *(_QWORD*)(a1 + 2728) = GameData_212d7e0[0] + 2;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    *(_QWORD*)(a1 + 2736) = 0;
  }
  v17 = *(_QWORD**)(a1 + 2664);
  v18 = *(_QWORD**)(a1 + 2672);
  *(_QWORD*)(a1 + 2696) = 0;
  v19 = v18 - v17;
  if (v19 >= 3) {
    do {
      if (*v17 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, *v17);
        v17 = *(_QWORD**)(a1 + 2664);
        v18 = *(_QWORD**)(a1 + 2672);
      }
      *(_QWORD*)(a1 + 2664) = ++v17;
      v19 = v18 - v17;
    } while (v19 > 2);
  }
  if (v19 == 1) {
    v21 = 2048;
  }
  else {
    if (v19 != 2) {
      goto LABEL_49;
    }
    v21 = 4096;
  }
  *(_QWORD*)(a1 + 2688) = v21;

LABEL_49:
  if (v17 != v18) {
    do {
      if (*v17 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v22, *v17);
      }
      ++v17;
    } while (v17 != v18);
    v23 = *(_QWORD*)(a1 + 2672);
    v24 = *(_QWORD*)(a1 + 2664) - v23;
    if (v24 != 0) {
      *(_QWORD*)(a1 + 2672) = v23 + ((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v25 = *(_QWORD*)(a1 + 2656);
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v26, v25);
  }
  GameRoutine_7188e0(a1 + 264);
  if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 256);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v28, v27);
    }
  }
  v29 = *(_QWORD*)(a1 + 216);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 224);
    if (v29 == v30) {
      goto LABEL_79;
    }
    v31 = *(_QWORD*)(a1 + 224);
    do {
      v32 = *(_BYTE*)(v31 - 24);
      v31 -= 24;
      if ((v32 & 1) != 0) {
        v33 = *(_QWORD*)(v30 - 8);
        if (v33 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v34, v33);
        }
      }
      v30 = v31;
    } while (v31 != v29);
    v35 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v29;
    v29 = v35;
    if (v35 != 0) {
    LABEL_79:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v36, v29);
    }
  }
  GameGlobalSkill_Destructor(a1 + 184);
  v37 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 168) = GameData_212db08[0] + 16;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
    *(_QWORD*)(a1 + 176) = 0;
  }
  v38 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = GameData_212db90[0] + 2;
  if (v38 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
    *(_QWORD*)(a1 + 160) = 0;
  }
  v39 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 136) = GameData_212db68[0] + 2;
  if (v39 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
    *(_QWORD*)(a1 + 144) = 0;
  }
  v40 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 120) = GameData_212daf0[0] + 16;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    *(_QWORD*)(a1 + 128) = 0;
  }
  v41 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 104) = GameData_212df70[0] + 2;
  *(_QWORD*)(a1 + 112) = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = GameData_212d588[0] + 2;
  if (v42 != 0) {
    GameRoutine_826320(v42);
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v43, v42);
    *(_QWORD*)(a1 + 48) = 0;
  }
  v45 = a1;
  *(_QWORD*)a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v45);
}

__int64 Impl_Unknown9_71b700(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 result;
  int v29;
  __int64 v30;

  v30 = game_GetHero(9);
  v29 = 241;
  v4 = game_UnitPool_Find_6ead60(&v30, &v29);
  if (v4 != 0 && *(_BYTE*)(v4 + 2136) != 0) {
    v5 = *(_QWORD*)(a1 + 176);
    if (v5 + 112 != v4 + 2104) {
      v6 = *(unsigned __int8*)(v4 + 2112);
      if ((*(_BYTE*)(v5 + 120) & 1) != 0) {
        v9 = (v6 & 1) == 0;
        v10 = v6 >> 1;
        v11 = v4;
        if (v9) {
          v12 = v4 + 2113;
        }
        else {
          v12 = *(_QWORD*)(v4 + 2128);
        }
        if (v9) {
          v13 = v10;
        }
        else {
          v13 = *(_QWORD*)(v4 + 2120);
        }
        GameRoutine_64dde0(v5 + 120, v12, v13);
      }
      else {
        if ((v6 & 1) == 0) {
          v7 = *(_QWORD*)(v4 + 2112);
          v8 = *(_QWORD*)(v4 + 2128);
          *(_QWORD*)(v5 + 128) = *(_QWORD*)(v4 + 2120);
          *(_QWORD*)(v5 + 136) = v8;
          *(_QWORD*)(v5 + 120) = v7;
          goto LABEL_16;
        }
        v11 = v4;
        GameRoutine_64df20(v5 + 120, *(_QWORD*)(v4 + 2128),
                           *(_QWORD*)(v4 + 2120));
      }
      v4 = v11;
    }
  LABEL_16:
    *(_BYTE*)(v5 + 144) = *(_BYTE*)(v4 + 2136);
    *(_BYTE*)(v5 + 145) = *(_BYTE*)(v4 + 2137);
    *(_BYTE*)(v5 + 146) = *(_BYTE*)(v4 + 2138);
    *(_BYTE*)(v5 + 147) = *(_BYTE*)(v4 + 2139);
    *(_BYTE*)(v5 + 148) = *(_BYTE*)(v4 + 2140);
  }
  GameRoutine_82d390(a1 + 40, a2);
  GameRoutine_8e2280(*(_QWORD*)(a1 + 128), a2);
  GameRoutine_8eb020(*(_QWORD*)(a1 + 176), a2);
  GameRoutine_71bd40(a1 + 328, a2);
  GameRoutine_71d2c0(a1 + 404, a2);
  v14 = game_HashString32("GameMode");
  v15 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v14);
  GameRoutine_6616e0(v15, &v30);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + (int)(*(_DWORD*)(a2 + 20))++) =
      *(_BYTE*)(a1 + 12);
  v16 = game_HashString32("Difficulty");
  v17 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v16);
  GameRoutine_6616e0(v17, &v30);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + (int)(*(_DWORD*)(a2 + 20))++) =
      *(_BYTE*)(a1 + 13);
  v18 = game_HashString32("Causation");
  v19 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v18);
  GameRoutine_6616e0(v19, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(a2 + 20) += 4;
  v20 = game_HashString32("Shareline");
  v21 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v20);
  GameRoutine_6616e0(v21, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2708);
  *(_DWORD*)(a2 + 20) += 4;
  v22 = game_HashString32("RideSerial");
  v23 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v22);
  GameRoutine_6616e0(v23, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2712);
  *(_DWORD*)(a2 + 20) += 4;
  v24 = game_HashString32("SaveCount");
  v25 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v24);
  GameRoutine_6616e0(v25, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2716);
  *(_DWORD*)(a2 + 20) += 4;
  v26 = game_HashString32("MakeCount");
  v27 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v26);
  result = GameRoutine_6616e0(v27, &v30);
  *(_WORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_WORD*)(a1 + 2720);
  *(_DWORD*)(a2 + 20) += 2;
  return result;
}

__int64 Impl_Unknown10_71ba20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  _BOOL4 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  int v28;
  __int64 v29;

  GameRoutine_82d4a0(a1 + 40);
  GameRoutine_8e24a0(*(_QWORD*)(a1 + 128), a2);
  GameRoutine_8eb7a0(*(_QWORD*)(a1 + 176), a2);
  GameRoutine_71e140(a1 + 328, a2);
  GameRoutine_71e3e0(a1 + 404, a2);
  LODWORD(v29) = game_HashString32("GameMode");
  GameRoutine_660280(a2, &v29, a1 + 12, 1);
  LODWORD(v29) = game_HashString32("Difficulty");
  GameRoutine_660280(a2, &v29, a1 + 13, 1);
  LODWORD(v29) = game_HashString32("Causation");
  GameRoutine_660280(a2, &v29, a1 + 80, 4);
  LODWORD(v29) = game_HashString32("Shareline");
  GameRoutine_660280(a2, &v29, a1 + 2708, 4);
  LODWORD(v29) = game_HashString32("RideSerial");
  GameRoutine_660280(a2, &v29, a1 + 2712, 4);
  LODWORD(v29) = game_HashString32("SaveCount");
  GameRoutine_660280(a2, &v29, a1 + 2716, 4);
  LODWORD(v29) = game_HashString32("MakeCount");
  GameRoutine_660280(a2, &v29, a1 + 2720, 2);
  v29 = game_GetHero(9);
  v28 = 241;
  v4 = game_UnitPool_Find_6ead60(&v29, &v28);
  if (v4 == 0 || *(_BYTE*)(v4 + 2136) == 0) {
    return GameRoutine_821570(v4);
  }
  v5 = *(_QWORD*)(a1 + 176);
  if (*(_BYTE*)(v5 + 144) != 0) {
    if (v4 + 2104 != v5 + 112) {
      v6 = *(unsigned __int8*)(v5 + 120);
      if ((*(_BYTE*)(v4 + 2112) & 1) != 0) {
        v9 = (v6 & 1) == 0;
        v10 = v6 >> 1;
        v11 = v4;
        v12 = v4 + 2112;
        if (v9) {
          v13 = v5 + 121;
        }
        else {
          v13 = *(_QWORD*)(v5 + 136);
        }
        if (v9) {
          v14 = v10;
        }
        else {
          v14 = *(_QWORD*)(v5 + 128);
        }
        GameRoutine_64dde0(v12, v13, v14);
      }
      else {
        if ((v6 & 1) == 0) {
          v7 = *(_QWORD*)(v5 + 120);
          v8 = *(_QWORD*)(v5 + 136);
          *(_QWORD*)(v4 + 2120) = *(_QWORD*)(v5 + 128);
          *(_QWORD*)(v4 + 2128) = v8;
          *(_QWORD*)(v4 + 2112) = v7;
          goto LABEL_17;
        }
        v11 = v4;
        GameRoutine_64df20(v4 + 2112, *(_QWORD*)(v5 + 136),
                           *(_QWORD*)(v5 + 128));
      }
      v4 = v11;
    }
  LABEL_17:
    *(_BYTE*)(v4 + 2136) = *(_BYTE*)(v5 + 144);
    *(_BYTE*)(v4 + 2137) = *(_BYTE*)(v5 + 145);
    *(_BYTE*)(v4 + 2138) = *(_BYTE*)(v5 + 146);
    *(_BYTE*)(v4 + 2139) = *(_BYTE*)(v5 + 147);
    *(_BYTE*)(v4 + 2140) = *(_BYTE*)(v5 + 148);
  }
  v15 = game_GetHero(9);
  if (v15 == 0) {
    goto LABEL_28;
  }
  for (i = v15; i != 0; i = *(_QWORD*)(i + 624)) {
    v17 = i;
  }
  if (*(_BYTE*)(v17 + 441) != 3) {
    goto LABEL_28;
  }
  v18 = *(_QWORD*)(v15 + 624);
  if (v18 == 0) {
    v18 = v15;
  }
  v29 = v18;
  v28 = 241;
  v19 = game_UnitPool_Find_6ead60(&v29, &v28);
  if (v19 == 0) {
    v21 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v21 + 144) != 0) {
      v20 = (__int64*)(v21 + 112);
      goto LABEL_29;
    }
  LABEL_28:
    v20 = &GameData_21f49b8;
    goto LABEL_29;
  }
  v20 = (__int64*)(v19 + 2104);

LABEL_29:
  v22 = *((unsigned __int8*)v20 + 32);
  v23 = v22 == 1;
  v24 = v22 != 1 && v22 == 2;
  v25 = GameRoutine_9a28e0(7);
  game_VariableManager_SetFlag(v25, v23);
  v26 = GameRoutine_9a28e0(8);
  v4 = game_VariableManager_SetFlag(v26, v24);
  return GameRoutine_821570(v4);
}

__int64 Impl_DeletingDestructor_812220(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 Impl_Unknown4()
{
  if (game_sound_g_game_sound != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 Impl_Unknown5_8122c0()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a20000();
  }
  return result;
}

__int64 Impl_Unknown6()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a28c50();
  }
  return result;
}

__int64 Impl_Unknown7_812300()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a22fd0();
  }
  return result;
}

_DWORD* Impl_Unknown9_812380(__int64 a1, __int64 a2)
{
  _DWORD* result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  result = (_DWORD*)game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v3 = *(int*)(a2 + 20);
    v4 = *(_DWORD*)(game_sound_g_game_sound + 2548);
    *(_DWORD*)(a2 + 20) = v3 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v4;
    v5 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = BYTE1(v4);
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = BYTE2(v4);
    v7 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = HIBYTE(v4);
    v8 = *(int*)(a2 + 20);
    v9 = result[638];
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v9);
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE2(v9);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = HIBYTE(v9);
    v13 = *(int*)(a2 + 20);
    v14 = result[639];
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE1(v14);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE2(v14);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v14);
    v18 = *(int*)(a2 + 20);
    v19 = result[640];
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v19);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE2(v19);
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = HIBYTE(v19);
    v23 = *(int*)(a2 + 20);
    v24 = result[641];
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v24;
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE1(v24);
    v26 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE2(v24);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = HIBYTE(v24);
    v28 = *(int*)(a2 + 20);
    v29 = result[642];
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v29;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE1(v29);
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE2(v29);
    v32 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = HIBYTE(v29);
    v33 = *(int*)(a2 + 20);
    v34 = result[643];
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34;
    v35 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = BYTE1(v34);
    v36 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = BYTE2(v34);
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = HIBYTE(v34);
    v38 = *(int*)(a2 + 20);
    v39 = result[644];
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v39;
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v39);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE2(v39);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = HIBYTE(v39);
  }
  return result;
}

__int64 Impl_Unknown10_8123a0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    *(_QWORD*)(game_sound_g_game_sound + 2564) = 0;
    *(_QWORD*)(result + 2572) = 0;
    *(_QWORD*)(result + 2548) = 0;
    *(_QWORD*)(result + 2556) = 0;
    v3 = *(int*)(a2 + 20);
    v4 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v3 + 1;
    v5 = *(unsigned __int8*)(v4 + v3);
    *(_DWORD*)(a2 + 20) = v3 + 2;
    v6 = v5 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v3 + 3;
    v7 = *(unsigned __int8*)(v4 + v3 + 2);
    *(_DWORD*)(a2 + 20) = v3 + 4;
    *(_DWORD*)(result + 2548) =
        v6 | (v7 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
    v8 = *(int*)(a2 + 20);
    v9 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    v10 = *(unsigned __int8*)(v9 + v8);
    *(_DWORD*)(a2 + 20) = v8 + 2;
    v11 = v10 | (*(unsigned __int8*)(v9 + v8 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v8 + 3;
    v12 = *(unsigned __int8*)(v9 + v8 + 2);
    *(_DWORD*)(a2 + 20) = v8 + 4;
    *(_DWORD*)(result + 2552) =
        v11 | (v12 << 16) | (*(unsigned __int8*)(v9 + v8 + 3) << 24);
    v13 = *(int*)(a2 + 20);
    v14 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    v15 = *(unsigned __int8*)(v14 + v13);
    *(_DWORD*)(a2 + 20) = v13 + 2;
    v16 = v15 | (*(unsigned __int8*)(v14 + v13 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v13 + 3;
    v17 = *(unsigned __int8*)(v14 + v13 + 2);
    *(_DWORD*)(a2 + 20) = v13 + 4;
    *(_DWORD*)(result + 2556) =
        v16 | (v17 << 16) | (*(unsigned __int8*)(v14 + v13 + 3) << 24);
    v18 = *(int*)(a2 + 20);
    v19 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    v20 = *(unsigned __int8*)(v19 + v18);
    *(_DWORD*)(a2 + 20) = v18 + 2;
    v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v18 + 3;
    v22 = *(unsigned __int8*)(v19 + v18 + 2);
    *(_DWORD*)(a2 + 20) = v18 + 4;
    *(_DWORD*)(result + 2560) =
        v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
    v23 = *(int*)(a2 + 20);
    v24 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    v25 = *(unsigned __int8*)(v24 + v23);
    *(_DWORD*)(a2 + 20) = v23 + 2;
    v26 = v25 | (*(unsigned __int8*)(v24 + v23 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v23 + 3;
    v27 = *(unsigned __int8*)(v24 + v23 + 2);
    *(_DWORD*)(a2 + 20) = v23 + 4;
    *(_DWORD*)(result + 2564) =
        v26 | (v27 << 16) | (*(unsigned __int8*)(v24 + v23 + 3) << 24);
    v28 = *(int*)(a2 + 20);
    v29 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    v30 = *(unsigned __int8*)(v29 + v28);
    *(_DWORD*)(a2 + 20) = v28 + 2;
    v31 = v30 | (*(unsigned __int8*)(v29 + v28 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v28 + 3;
    v32 = *(unsigned __int8*)(v29 + v28 + 2);
    *(_DWORD*)(a2 + 20) = v28 + 4;
    *(_DWORD*)(result + 2568) =
        v31 | (v32 << 16) | (*(unsigned __int8*)(v29 + v28 + 3) << 24);
    v33 = *(int*)(a2 + 20);
    v34 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    v35 = *(unsigned __int8*)(v34 + v33);
    *(_DWORD*)(a2 + 20) = v33 + 2;
    v36 = v35 | (*(unsigned __int8*)(v34 + v33 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v33 + 3;
    v37 = *(unsigned __int8*)(v34 + v33 + 2);
    *(_DWORD*)(a2 + 20) = v33 + 4;
    *(_DWORD*)(result + 2572) =
        v36 | (v37 << 16) | (*(unsigned __int8*)(v34 + v33 + 3) << 24);
    v38 = *(int*)(a2 + 20);
    v39 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    v40 = *(unsigned __int8*)(v39 + v38);
    *(_DWORD*)(a2 + 20) = v38 + 2;
    v41 = v40 | (*(unsigned __int8*)(v39 + v38 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v38 + 3;
    v42 = *(unsigned __int8*)(v39 + v38 + 2);
    *(_DWORD*)(a2 + 20) = v38 + 4;
    *(_DWORD*)(result + 2576) =
        v41 | (v42 << 16) | (*(unsigned __int8*)(v39 + v38 + 3) << 24);
  }
  return result;
}

__int64 Impl_Destructor_86a740(_QWORD* a1)
{
  _QWORD* v3;

  *a1 = game_anonymous_Impl_vtable;
  GameRoutine_86abe0(a1 + 7);
  v3 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v3);
}

__int64 Impl_DeletingDestructor_86a7a0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  *a1 = game_anonymous_Impl_vtable;
  GameRoutine_86abe0(a1 + 7);
  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 Impl_Unknown5_86a840(__int64 result)
{
  *(_DWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 Impl_Unknown7_86a870(__int64 result, __int64 a2)
{
  __int64 v2;
  __int16 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(int*)(a2 + 20);
  v3 = *(_WORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = HIBYTE(v3);
  v5 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 10);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 12);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3;
  v7 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 14);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v3;
  v8 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 16);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v3;
  v9 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 18);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v3;
  v10 = *(int*)(a2 + 20);
  v11 = *(_WORD*)(result + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = HIBYTE(v11);
  v13 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 22);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v11;
  v14 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 24);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v11;
  v15 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 26);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v11;
  v16 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 28);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v11;
  v17 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 30);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v11;
  v18 = *(int*)(a2 + 20);
  v19 = *(_DWORD*)(result + 44);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v19);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE2(v19);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = HIBYTE(v19);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 0;
  return result;
}

__int64 Impl_Unknown8_86aa40(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int16 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v4 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_WORD*)(result + 8) = v4 | (*(unsigned __int8*)(v3 + v2 + 1) << 8);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_WORD*)(result + 10) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v5);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_WORD*)(result + 12) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v6);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_WORD*)(result + 14) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_WORD*)(result + 16) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_WORD*)(result + 18) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v12 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  *(_WORD*)(result + 20) = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_WORD*)(result + 22) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_WORD*)(result + 24) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v14);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_WORD*)(result + 26) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v15);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_WORD*)(result + 28) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v16);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_WORD*)(result + 30) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v17);
  v18 = *(int*)(a2 + 20);
  v19 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  v20 = *(unsigned __int8*)(v19 + v18);
  *(_DWORD*)(a2 + 20) = v18 + 2;
  v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v18 + 3;
  v22 = *(unsigned __int8*)(v19 + v18 + 2);
  *(_DWORD*)(a2 + 20) = v18 + 4;
  *(_DWORD*)(result + 44) =
      v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
  ++*(_DWORD*)(a2 + 20);
  return result;
}

__int64 Impl_Unknown5_8acbd0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  if (*(_DWORD*)(result + 12) == 0) {
    v6 = v1;
    v7 = v2;
    v4[0] = GameData_1fa8a70;
    v4[1] = result;
    v5 = v4;
    GameRoutine_8aa110(v4);
    result = (__int64)v5;
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
        return result;
      }
      v3 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
  }
  return result;
}

__int64 Impl_Unknown7_8acc60(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if (*(_DWORD*)(result + 12) == 0) {
    v7 = v2;
    v8 = v3;
    v5[2] = a2;
    v5[0] = GameData_1fa8960;
    v5[1] = result;
    v6 = v5;
    GameRoutine_8aa110(v5);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(__int64))(*v6 + v4))((__int64)v6);
  }
  return result;
}

_DWORD* Impl_Unknown8_8acce0(_DWORD* result, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  _DWORD* v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  if (result[3] == 0) {
    v11 = v3;
    v12 = v4;
    v7 = result;
    result =
        (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 32LL))(result);
    if (a3 == (_DWORD)result) {
      v9[2] = a2;
      v9[0] = GameData_1fa89f0;
      v9[1] = v7;
      v10 = v9;
      GameRoutine_8aa110(v9);
      result = v10;
      if (v10 == v9) {
        v8 = 32;
      }
      else {
        if (v10 == nullptr) {
          return result;
        }
        v8 = 40;
      }
      return (_DWORD*)(*(__int64 (**)(__int64))(*v10 + v8))((__int64)v10);
    }
  }
  return result;
}

#pragma GCC visibility pop
