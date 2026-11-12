#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_19089c0(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void
TextSelector_19063a0(PSEUDO_X8, __int64*, __int64, __int64, __int64, int);
__attribute__((swiftcall)) void TextTagProcessor_1908c60(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_1908f00(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void TextTagProcessor_19091a0(PSEUDO_X8, __int64,
                                                         __int64);
__int64 GameRoutine_1905b00();
__int64 GameRoutine_1905b10();
__int64 GameRoutine_1905b80();
__int64 GameRoutine_5662e0(_QWORD);
__int64 GameRoutine_59d3b0(_QWORD);
__int64 GameRoutine_a488a0(__int64*, __int64);
__int64 TextBox_566290(__int64);
__int64 game_1905b70();
__int64 memset(__int64, int, unsigned __int64);
__int64 ui_text_190a4b0(_QWORD**, unsigned int, unsigned int);
const char* Pane_58fac0(__int64, const char*);
extern __int64 (*GameData_210fb78[])();
extern __int64 (*GameData_210fc28[])();
extern __int64 (*GameData_210fcc8[])();
extern __int64 (*GameData_210fd68[])();
extern __int64 (*ui_text_TextSelector_vtable[])();
extern __int64* GameData_212eb78[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2175a00;
float GameRoutine_55c190(__int64, float, float);
void GameRoutine_19083e0(__int64, unsigned __int64, unsigned __int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float* a1, __int64 a2, float* a3, _QWORD* a4, __int64 a5);
__int64 ui_text_190a640(__int64 a1);

void ui_text_190a0c0(float* a1, __int64 a2, float* a3, _QWORD* a4, __int64 a5)
{

#pragma clang fp contract(off)
  _QWORD* v6;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  int v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  const char* v32;
  int v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  struct {
    __int128 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v39_;
  struct {
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v51_;
  struct {
    __int128 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
  } v56_;
  struct {
    unsigned __int64 v68;
    unsigned __int64 v69;
  } v68_;
  __int64 v70;
  float v71[3];
  float v72;
  _QWORD* v73;
  __int64 v74;

  v73 = a4;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)a2 = 0;
  if (a4 == nullptr) {
    return;
  }
  if (a5 == 0) {
    return;
  }
  v6 = a4;
  if (GameRoutine_59d3b0(a4) == 0) {
    return;
  }
  v10 = *(_QWORD*)((char*)v6 + 201);
  v74 = v6[31];
  v11 = vcvts_n_f32_u64(v10 & 0x7FFF, 6u);
  v12 = vcvts_n_f32_u64((v10 >> 15) & 0x7FFF, 6u);
  v13 = vcvts_n_f32_s64((__int64)(2 * v10) >> 49, 6u);
  v72 = v13;
  v14 = (__int64*)*GameData_212eb78[0];
  v15 = GameRoutine_59d3b0(v6);
  v16 = GameRoutine_a488a0(v14, v15);
  if (v16 != 0 && (v17 = *(_QWORD*)(v16 + 8)) != 0) {
    v18 = *(_QWORD*)(v17 + 20);
  }
  else {
    v18 = 0;
  }
  v19 = GameRoutine_59d3b0(v6);
  v20 = (float)(*(int (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19);
  v21 = GameRoutine_59d3b0(v6);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21);
  v23 = (float)(unsigned int)v18;
  v24 = v11 * v20;
  *a3 = v13;
  v70 = 0;
  v39_.v40 = -1;
  v39_.v41 = -1;
  v25 = (float)v22;
  v39_.v42 = -1;
  v39_.v43 = -1;
  v39_.v44 = -1;
  v39_.v45 = -1;
  v39_.v46 = -1;
  v39_.v47 = -1;
  v39_.v48 = -1;
  v39_.v49 = -1;
  if ((int)v18 < 1) {
    v23 = v20;
  }
  v26 = v12 * v25;
  v39_.v50 = -1;
  v51_.v51 = -1;
  if (SHIDWORD(v18) >= 1) {
    v25 = (float)HIDWORD(v18);
  }
  *(_QWORD*)&v39_.v39 = ui_text_TextSelector_vtable;
  *((_QWORD*)&v39_.v39 + 1) = -256;
  v51_.v52 = -1;
  v51_.v53 = -1;
  v27 = v24 / v23;
  v51_.v54 = -1;
  v51_.v55 = 1;
  v28 = v26 / v25;
  v71[0] = v24 / v23;
  v71[1] = v26 / v25;
  TextSelector_19063a0((void*)(&v68_.v68), &v70, a5, 0, (__int64)&v39_.v39, 0);
  v29 = v68_.v69;
  if (v68_.v69 != 0) {
    TextBox_566290((__int64)&v56_.v56);
    (*(void (**)(_QWORD*, __int128*))(*v6 + 376LL))(v6, &v56_.v56);
    v39_.v48 = v56_.v65;
    v39_.v49 = v56_.v66;
    v39_.v50 = v56_.v67;
    v39_.v44 = v56_.v61;
    v39_.v45 = v56_.v62;
    v39_.v46 = v56_.v63;
    v39_.v47 = v56_.v64;
    v39_.v40 = v56_.v57;
    v39_.v41 = v56_.v58;
    v39_.v42 = v56_.v59;
    v39_.v43 = v56_.v60;
    v39_.v39 = v56_.v56;
    memset((__int64)&v51_.v51, 0, 0x114u);
    GameRoutine_55c190((__int64)&v39_.v39, v27, v28);
    *(float*)&v39_.v46 = v13;
    GameRoutine_19083e0((__int64)&v39_.v39, v68_.v68, v29, (__int64)&v39_.v39);
    v30 = *((float*)&v51_.v52 + 1) - *((float*)&v51_.v51 + 1);
    v74 = *(_QWORD*)v71;
    *a1 = *(float*)&v51_.v52 - *(float*)&v51_.v51;
    a1[1] = v30;
    GameRoutine_5662e0(&v39_.v39);
    GameRoutine_5662e0(&v56_.v56);
    if (Pane_58fac0((__int64)v6, "SkipAdjustSmallFont") != nullptr) {
      v31 = *(float*)&GameData_2175a00;
    }
    else {
      v39_.v44 = (__int64)a3;
      *(_QWORD*)&v39_.v39 = &v73;
      *((_QWORD*)&v39_.v39 + 1) = a1;
      v39_.v40 = (__int64)v71;
      v39_.v41 = (__int64)&v72;
      v39_.v42 = (__int64)&v68_.v68;
      v39_.v43 = (__int64)&v74;
      ui_text_190a4b0((_QWORD**)&v39_.v39, 0, 1u);
      ui_text_190a4b0((_QWORD**)&v39_.v39, 3u, 4u);
      v6 = v73;
      v31 = *(float*)&GameData_2175a00;
      if (v73 == nullptr) {
      LABEL_22:
        v34 = *a1;
        if (*a1 < 0x1.0000000000000p+0f || a1[1] <= 0x1.0000000000000p+0f ||
            v31 >= 0x1.0000000000000p+0f ||
            (v35 = vcvts_n_f32_u64((v10 >> 30) & 0x3FFFF, 6u), v34 <= v35)) {
          *(_QWORD*)a2 = *(_QWORD*)a1;
        }
        else {
          v36 = v35 / v34;
          if (v36 < v31) {
            v36 = v31;
          }
          v37 = v36 * *(float*)&v74;
          *(float*)a2 = v34 * v36;
          *(float*)&v74 = v37;
          *(float*)(a2 + 4) = a1[1];
          *a3 = v36 * *a3;
        }
        goto LABEL_30;
      }
    }
    v32 = Pane_58fac0((__int64)v6, "AutoFitLower");
    if (v32 != nullptr) {
      v33 = *((unsigned __int8*)v32 + 10);
      if (v33 == 2) {
        v31 = *(float*)&v32[*((unsigned int*)v32 + 1)];
      }
      else if (v33 == 1) {
        v31 = (float)*(int*)&v32[*((unsigned int*)v32 + 1)] *
              0x1.47ae140000000p-7f;
      }
    }
    goto LABEL_22;
  }
LABEL_30:
  if (v70 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38,
                                  v70);
  }
}

__int64 ui_text_190a640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _BYTE v11[32];
  _BYTE* v12;
  _BYTE v13[32];
  _BYTE* v14;
  _BYTE v15[32];
  _BYTE* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _BYTE v19[32];
  _BYTE* v20;

  v17[0] = GameData_210fb78;
  v17[1] = GameRoutine_1905b00;
  v18 = v17;
  GameRoutine_19089c0((void*)((__int64)v19), a1, (__int64)v17);
  if (v20 == v19) {
    v2 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v20 + v2))((__int64)v20);
LABEL_6:
  if (v18 == v17) {
    v3 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_11;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v18 + v3))((__int64)v18);
LABEL_11:
  v17[0] = GameData_210fc28;
  v17[1] = GameRoutine_1905b10;
  v18 = v17;
  TextTagProcessor_1908c60((void*)((__int64)v15), a1, (__int64)v17);
  if (v16 == v15) {
    v4 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_16;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + v4))((__int64)v16);
LABEL_16:
  if (v18 == v17) {
    v5 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_21;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v18 + v5))((__int64)v18);
LABEL_21:
  v17[0] = GameData_210fcc8;
  v17[1] = game_1905b70;
  v18 = v17;
  TextTagProcessor_1908f00((void*)((__int64)v13), a1, (__int64)v17);
  if (v14 == v13) {
    v6 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_26;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + v6))((__int64)v14);
LABEL_26:
  if (v18 == v17) {
    v7 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_31;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v18 + v7))((__int64)v18);
LABEL_31:
  v17[0] = GameData_210fd68;
  v17[1] = GameRoutine_1905b80;
  v18 = v17;
  TextTagProcessor_19091a0((void*)((__int64)v11), a1, (__int64)v17);
  if (v12 == v11) {
    v8 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_36;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + v8))((__int64)v12);
LABEL_36:
  result = (__int64)v18;
  if (v18 == v17) {
    v10 = 32;
    goto LABEL_40;
  }
  if (v18 != nullptr) {
    v10 = 40;
  LABEL_40:
    result = (*(__int64 (**)(__int64))(*v18 + v10))((__int64)v18);
  }
  GameData_2175a00 = 1061075026;
  return result;
}

#pragma GCC visibility pop
