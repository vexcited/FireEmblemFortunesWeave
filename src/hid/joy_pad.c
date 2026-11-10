#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_hid_GetNpadState_1a0a360(_QWORD, _QWORD);
__int64 nn_hid_GetNpadState_1a0a370(_QWORD, _QWORD);
__int64 nn_hid_GetNpadState_1a0a380(_QWORD, _QWORD);
__int64 nn_hid_GetNpadStyleSet(_QWORD);
extern __int64 game_g_game_setting;
void GameRoutine_617b80();
__int64 JoyPad_Destructor(__int64 a1, unsigned int* a2, float32x4_t* a3);

__int64 JoyPad_Destructor(__int64 a1, unsigned int* a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  char NpadStyleSetERKj;
  __int64 result;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  float v19;
  float v20;
  float v21;
  float32x4_t v22;
  unsigned int v23;
  float v24;
  float v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  bool v39;
  int v40;
  struct {
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
  } v41_;
  unsigned int v46;

  *a2 = 0;
  LANES128(*(a3)).n128_u64[0] = 0;
  LANES128(*(a3)).n128_u64[1] = 0;
  *(_WORD*)(a1 + 376) = 0;
  *(_BYTE*)(a1 + 378) = 0;
  v46 = 0;
  NpadStyleSetERKj = nn_hid_GetNpadStyleSet(&v46);
  if ((NpadStyleSetERKj & 2) != 0) {
    v41_.v44 = 0;
    v41_.v45 = 0;
    v41_.v42 = 0;
    v41_.v43 = 0;
    v41_.v41 = 0;
    nn_hid_GetNpadState_1a0a360(&v41_.v41, &v46);
    if ((v41_.v45 & 1) != 0) {
      goto LABEL_15;
    }
    goto LABEL_9;
  }
  if ((NpadStyleSetERKj & 4) != 0) {
    v41_.v44 = 0;
    v41_.v45 = 0;
    v41_.v42 = 0;
    v41_.v43 = 0;
    v41_.v41 = 0;
    nn_hid_GetNpadState_1a0a370(&v41_.v41, &v46);
    if ((~(_DWORD)v41_.v45 & 0x14) == 0) {
      goto LABEL_17;
    }
    goto LABEL_9;
  }
  if ((NpadStyleSetERKj & 1) == 0 ||
      (v41_.v44 = 0, v41_.v45 = 0, v41_.v42 = 0, v41_.v43 = 0, v41_.v41 = 0,
       nn_hid_GetNpadState_1a0a380(&v41_.v41, &v46), (v41_.v45 & 1) == 0)) {
  LABEL_9:
    v46 = 32;
    result = nn_hid_GetNpadStyleSet(&v46);
    if ((result & 2) == 0) {
      if ((result & 4) == 0) {
        if ((result & 1) == 0) {
          return result;
        }
        v41_.v44 = 0;
        v41_.v45 = 0;
        v41_.v42 = 0;
        v41_.v43 = 0;
        v41_.v41 = 0;
        result = nn_hid_GetNpadState_1a0a380(&v41_.v41, &v46);
        if ((v41_.v45 & 1) == 0) {
          return result;
        }
        goto LABEL_13;
      }
      v41_.v44 = 0;
      v41_.v45 = 0;
      v41_.v42 = 0;
      v41_.v43 = 0;
      v41_.v41 = 0;
      result = nn_hid_GetNpadState_1a0a370(&v41_.v41, &v46);
      if ((~(_DWORD)v41_.v45 & 0x14) != 0) {
        return result;
      }
    LABEL_17:
      v8 = v41_.v42;
      v9 = v41_.v43;
      v10 = HIDWORD(v41_.v43);
      v11 = 4;
      v12 = *(_QWORD*)(a1 + 368);
      v13 = v46;
      *(_BYTE*)(a1 + 376) = 1;
      goto LABEL_18;
    }
    v41_.v44 = 0;
    v41_.v45 = 0;
    v41_.v42 = 0;
    v41_.v43 = 0;
    v41_.v41 = 0;
    result = nn_hid_GetNpadState_1a0a360(&v41_.v41, &v46);
    if ((v41_.v45 & 1) == 0) {
      return result;
    }
  LABEL_15:
    v8 = v41_.v42;
    v9 = v41_.v43;
    v10 = HIDWORD(v41_.v43);
    v11 = 2;
    v12 = *(_QWORD*)(a1 + 368);
    v13 = v46;
    *(_WORD*)(a1 + 376) = 257;
    goto LABEL_18;
  }
LABEL_13:
  v8 = v41_.v42;
  v9 = v41_.v43;
  v10 = HIDWORD(v41_.v43);
  v11 = 1;
  v12 = *(_QWORD*)(a1 + 368);
  v13 = v46;
  *(_BYTE*)(a1 + 376) = 1;
  *(_BYTE*)(a1 + 378) = 1;
LABEL_18:
  v14 = v41_.v44;
  v15 = HIDWORD(v41_.v44);
  result = ((__int64 (*)(__int64, __int64, __int64))GameRoutine_617b80)(
      v12, v13, v11);
  v16 = *a2 | v8 & 1 | v8 & 6 | v8 & 8 | ((_WORD)v8 << 6) & 0x1000 |
        ((_WORD)v8 << 6) & 0x2000 | (4 * (_WORD)v8) & 0x400 |
        (4 * (_WORD)v8) & 0x800;
  if ((v8 & 0x3CF) != 0) {
    *a2 = v16;
  }
  if (*(_BYTE*)(game_g_game_setting + 976) == 1) {
    if ((v8 & 0x800) != 0) {
      v16 |= 0x200u;
    }
    v17 = v16 | 0x100;
  }
  else {
    if ((v8 & 0x800) != 0) {
      v16 |= 0x40u;
    }
    v17 = v16 | 0x80;
  }
  if ((v8 & 0x400) != 0) {
    v16 = v17;
  }
  if ((v8 & 0xC00) != 0) {
    *a2 = v16;
  }
  v18 = (4 * (_WORD)v8) & 0x8000 | (((v8 & 0x8000) != 0) << 16) & 0x1FFFF |
        (((v8 & 0x1000) != 0) << 17) & 0xFFFBFFFF |
        (((v8 & 0x4000) != 0) << 18) | v16;
  if ((v8 & 0xF000) != 0) {
    *a2 = v18;
  }
  v19 = *(float*)(a1 + 360);
  v20 = -v19;
  v21 = (float)v10 / 0x1.fffc000000000p+14f;
  LANES128(v22).n128_f32[0] = (float)v9 / 0x1.fffc000000000p+14f;
  v23 = v8 & 0x30 | ((HIBYTE(v8) & 0xF) << 27) | v18 & 0xF807FFFF;
  v24 = (float)v15 / 0x1.fffc000000000p+14f;
  v25 = (float)v14 / 0x1.fffc000000000p+14f;
  if (v21 <= v19) {
    v26 = 0;
  }
  else {
    v26 = 0x80000;
  }
  v27 = v23 | v26;
  if (v21 >= v20) {
    v28 = 0;
  }
  else {
    v28 = 0x100000;
  }
  if (LANES128(v22).n128_f32[0] >= v20) {
    v29 = 0;
  }
  else {
    v29 = 0x200000;
  }
  v30 = v27 | v28 | v29;
  if (LANES128(v22).n128_f32[0] <= v19) {
    v31 = 0;
  }
  else {
    v31 = 0x400000;
  }
  if (v24 <= v19) {
    v32 = 0;
  }
  else {
    v32 = 0x800000;
  }
  if (v24 >= v20) {
    v33 = 0;
  }
  else {
    v33 = 0x1000000;
  }
  v34 = v30 | v31 | v32 | v33;
  if (v25 >= v20) {
    v35 = 0;
  }
  else {
    v35 = 0x2000000;
  }
  if (v25 <= v19) {
    v36 = 0;
  }
  else {
    v36 = 0x4000000;
  }
  LANES128(v22).n128_f32[3] = (float)v15 / 0x1.fffc000000000p+14f;
  *a2 = v34 | v35 | v36;
  LANES128(v22).n128_f32[1] = (float)v10 / 0x1.fffc000000000p+14f;
  LANES128(v22).n128_f32[2] = (float)v14 / 0x1.fffc000000000p+14f;
  *a3 = vaddq_f32(v22, *a3);
  v37 = *a2;
  v38 = *a2 & 0x18000;
  v39 = v38 == 98304;
  if (v38 == 98304) {
    v37 = *a2 & 0xFFFEFFFF;
  }
  v40 = v37 & 0x60000;
  if (v39 || v40 == 393216) {
    if (v40 == 393216) {
      v37 &= ~0x40000u;
    }
    *a2 = v37;
  }
  return result;
}

#pragma GCC visibility pop
