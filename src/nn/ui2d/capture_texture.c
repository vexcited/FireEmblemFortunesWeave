#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 DynamicRenderingTexture_Unknown3(_QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_59e760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc380(_QWORD);
__int64 GameRoutine_5fc390(_QWORD);
__int64 GameRoutine_5fc420(_QWORD);
__int64 Pane_58e560(void);
__int64 Pane_58e6c0(void);
float GameRoutine_59fbe0(_QWORD);
void CaptureTexture_5815d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, char a6);
__int64 CaptureTexture_Unknown3(__int64 a1);
__int64 CaptureTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3);
__int64 CaptureTexture_Unknown5(__int64 a1);
__int64 CaptureTexture_Unknown9(__int64 result);
__int64 GameRoutine_575d70(void);
extern __int64 (*nn_ui2d_CaptureTexture_vtable[])();
__int64 CaptureTexture_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_5fc4d0(__int64 result);
__int64 GameRoutine_5fd760(__int64, __int64, int*, __int64, __int64, char);
__int64 CaptureTexture_582150(_QWORD* a1, __int64 a2, __int64 a3);
__int64 GameRoutine_5fc4c0(__int64 result);
extern _UNKNOWN** GameData_2132128[6];
extern _UNKNOWN** GameData_2132140[3];
extern _UNKNOWN** GameData_2136288[2];
extern _UNKNOWN** GameData_2136290;
__int64 CaptureTexture_581e00(_QWORD* a1, __int64 a2, __int64 a3);
__int64 GameHr_59e760(__int64, __int64, __int64, __int64, unsigned int);
__int64 GameRoutine_5fc390_alt1(__int64 result) __asm__("GameRoutine_5fc390");
__int64 GameRoutine_5fc420_alt1(__int64 result) __asm__("GameRoutine_5fc420");
__int64 Pane_58e560_alt1(__int64 result, __int64,
                         __int64) __asm__("Pane_58e560");
__int64 CaptureTexture_581e00_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("CaptureTexture_581e00");
__int64 CaptureTexture_582150_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("CaptureTexture_582150");
__int64 DrawInfo_5768f0(_QWORD);
__int64 DrawInfo_5769c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5a0070(_QWORD, _QWORD, long double, float);
__int64 GameRoutine_5fd650(_QWORD, _QWORD);
__int64 GameRoutine_5fd940(_QWORD, _QWORD, _QWORD, long double, float, float,
                           float);
__int64 Pane_58e2e0(_QWORD);
__int64 Pane_58f580(_QWORD, _QWORD, _QWORD);
void GameRoutine_5816b0();
__int64 CaptureTexture_Unknown7(__int64 a1, __int64 a2, __int64* a3,
                                __int64 a4);

__int64 CaptureTexture_DeletingDestructor(_QWORD* a1)
{
  *a1 = nn_ui2d_CaptureTexture_vtable;
  return GameRoutine_575d70();
}

void CaptureTexture_5815d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, char a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  float v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x2_t v15;
  float v16;
  float v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  float v22;
  __int64 v23;
  int v24;
  int v25;
  struct {
    _QWORD v26[2];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v26_;
  _QWORD _48[9];

  *(_QWORD*)(a1 + 48) = a3;
  *(_QWORD*)(a1 + 56) = a5;
  if (*(_BYTE*)(a4 + 34) == 1) {
    *(_WORD*)(a1 + 104) |= 1u;
    if (*(_BYTE*)(a4 + 35) != 1) {
    LABEL_3:
      if ((a6 & 1) == 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else if (*(_BYTE*)(a4 + 35) != 1) {
    goto LABEL_3;
  }
  *(_WORD*)(a1 + 104) |= 2u;
  if ((a6 & 1) != 0) {
  LABEL_4:
    *(_WORD*)(a1 + 104) |= 0x10u;
  }
LABEL_5:
  *(_DWORD*)(a1 + 68) = *(unsigned __int16*)(a4 + 32);
  *(_OWORD*)(a1 + 80) = *(_OWORD*)(a4 + 16);
  *(_DWORD*)(a1 + 64) = *(unsigned __int16*)(a4 + 36);
  v10 = GameRoutine_59fbe0(a4);
  v11 = *(_WORD*)(a1 + 104);
  *(float*)(a1 + 40) = v10;
  if ((v11 & 0x12) != 0) {
    v12 = *(_QWORD*)(a1 + 48);
    _48[1] = v7;
    _48[2] = v6;
    _48[3] = _48[7];
    _48[4] = _48[8];
    v13 = *(_QWORD*)(a1 + 56);
    _48[0] = 0;
    v14 = v12;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 96LL))(v13, _48);
    PSEUDO_LOW_LANE64(v15, n64_u64, *(unsigned __int64*)(a1 + 96));
    v26_.v31 = 0;
    v26_.v32 = 0;
    v16 = *(float*)_48 * LANES64(v15).n64_f32[0];
    v17 = vmuls_lane_f32(*((float*)_48 + 1), v15, 1);
    v26_.v29 = 0;
    v26_.v30 = 0;
    v26_.v27 = 0;
    v26_.v28 = 0;
    v26_.v26[0] = 0;
    v26_.v26[1] = 0;
    if ((int)(float)(*(float*)_48 * LANES64(v15).n64_f32[0]) <= 1) {
      v18 = 1;
    }
    else {
      v18 = (int)(float)(*(float*)_48 * LANES64(v15).n64_f32[0]);
    }
    if ((int)v17 <= 1) {
      v19 = 1;
    }
    else {
      v19 = (int)v17;
    }
    GameRoutine_5fc420_alt1((__int64)v26_.v26);
    v20 = *(_DWORD*)(a1 + 68);
    v21 = *(_QWORD*)(a1 + 32);
    HIDWORD(v26_.v27) = v18;
    LODWORD(v26_.v28) = v19;
    HIDWORD(v26_.v26[1]) = v20;
    LODWORD(v26_.v27) = 163;
    BYTE1(v26_.v26[0]) = 2;
    HIWORD(v26_.v26[0]) = 1;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 48LL))(v21) & 1) == 0) {
      GameHr_59e760(*(_QWORD*)(a1 + 32), a2, v14, (__int64)v26_.v26, 0);
    }
    v22 = *(float*)(a1 + 40);
    v23 = *(_QWORD*)(a1 + 8);
    v24 = (int)(float)(v16 * v22);
    v25 = (int)(float)(v17 * v22);
    if (v24 <= 1) {
      v24 = 1;
    }
    if (v25 <= 1) {
      v25 = 1;
    }
    HIDWORD(v26_.v27) = v24;
    LODWORD(v26_.v28) = v25;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 48LL))(v23) & 1) == 0) {
      GameHr_59e760(*(_QWORD*)(a1 + 8), a2, v14, (__int64)v26_.v26, 0);
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 212LL) == 0 &&
        *(_DWORD*)(*(_QWORD*)(a1 + 8) + 212LL) == 0) {
      *(_WORD*)(a1 + 104) |= 4u;
    }
  }
}

__int64 CaptureTexture_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v3 + 8LL))(*(_QWORD*)(a1 + 32));
      GameRoutine_5791a0(v3);
    }
    *(_QWORD*)(a1 + 32) = 0;
  }
  return DynamicRenderingTexture_Unknown3(a1);
}

__int64 CaptureTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  _BYTE* v8;
  _QWORD v10[4];
  struct {
    __int64 v11;
    _QWORD* v12;
    __int64 v13;
    __int64 v14;
  } v11_;
  _QWORD v15[5];

  v3 = *a3;
  v4 = a3[1];
  v11_.v13 = 0;
  v11_.v14 = 0;
  v11_.v11 = 0;
  v11_.v12 = nullptr;
  memset(v10, 0, sizeof(v10));
  v15[0] = v3;
  v15[1] = v4;
  v7 = a3[4];
  v15[2] = a3[2];
  v15[4] = v7;
  GameRoutine_5fc390_alt1((__int64)&v11_.v11);
  GameRoutine_5fc380(v10);
  v8 = *(_BYTE**)(a1 + 56);
  v11_.v12 = v10;
  v15[3] = &v11_.v11;
  LODWORD(v10[0]) = 2817;
  LOBYTE(v11_.v11) = 1;
  if ((v8[98] & 2) != 0) {
    return (*(__int64 (**)(_BYTE*, __int64, _QWORD*))(*(_QWORD*)v8 + 184LL))(
        v8, a2, v15);
  }
  else {
    return Pane_58e560_alt1((__int64)v8, a2, (__int64)v15);
  }
}

__int64 CaptureTexture_Unknown5(__int64 a1)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(a1 + 56);
  if ((v1[98] & 2) != 0) {
    return (*(__int64 (**)(_BYTE*))(*(_QWORD*)v1 + 200LL))(v1);
  }
  else {
    return Pane_58e6c0();
  }
}

__int64 CaptureTexture_Unknown7(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  __int64 result;
  long double v9;
  long double v10;
  __int64 v11;
  __int16 v13;
  __int64 v14;
  int v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float v32;
  long double v33;
  unsigned int v34;
  unsigned int v35;
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
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
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
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;

  result = Pane_58e2e0(*(_QWORD*)(a1 + 56));
  if ((result & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 48);
    *(float*)&v9 = *((float*)a3 + 66) / *(float*)(v11 + 40);
    *(float*)&v10 = *((float*)a3 + 67) / *(float*)(v11 + 44);
    if (*(float*)&v9 != COERCE_FLOAT(*(_QWORD*)(a1 + 96)) ||
        *(float*)&v10 != COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 96)))) {
      *((float*)&v9 + 1) = *((float*)a3 + 67) / *(float*)(v11 + 44);
      v13 = *(_WORD*)(a1 + 104);
      *(_QWORD*)(a1 + 96) = *(_QWORD*)&v9;
      if ((v13 & 4) != 0) {
        if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 32) + 48LL))(
                 *(_QWORD*)(a1 + 32)) &
             1) != 0) {
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 24LL))(
              *(_QWORD*)(a1 + 32), a2);
        }
        if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
                 *(_QWORD*)(a1 + 8)) &
             1) != 0) {
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 24LL))(
              *(_QWORD*)(a1 + 8), a2);
        }
        ((void (*)(__int64, __int64, __int64, _QWORD))GameRoutine_5816b0)(
            a1, a2, v11, 0);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
      }
    }
    v14 = *(_QWORD*)(a1 + 56);
    v15 = *(_DWORD*)(v14 + 96);
    if ((v15 & 0x20000) != 0) {
      if ((*(_BYTE*)(v14 + 92) & 0x10) == 0) {
        return result;
      }
      while (1) {
        v14 = *(_QWORD*)(v14 + 24);
        if (v14 == 0) {
          break;
        }
        if ((~*(unsigned __int8*)(v14 + 88) & 0x81) != 0) {
          return result;
        }
      }
    }
    v16 = *(_WORD*)(a1 + 104);
    if ((v16 & 2) != 0) {
      if ((v16 & 8) != 0) {
        return result;
      }
      v16 |= 8u;
      *(_WORD*)(a1 + 104) = v16;
    }
    if ((v16 & 4) == 0) {
      v17 = *(_QWORD*)(a1 + 48);
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 32) + 48LL))(
               *(_QWORD*)(a1 + 32)) &
           1) != 0) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 24LL))(
            *(_QWORD*)(a1 + 32), a2);
      }
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
               *(_QWORD*)(a1 + 8)) &
           1) != 0) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 24LL))(
            *(_QWORD*)(a1 + 8), a2);
      }
      v9 = ((long double (*)(__int64, __int64, __int64,
                             __int64))GameRoutine_5816b0)(a1, a2, v17, 1);
    }
    (*(void (**)(__int64*, __int64, long double, long double))(*a3 + 32))(
        a3, a4, v9, v10);
    v18 = *(_QWORD*)(a1 + 32) + 64LL;
    GameRoutine_5fd940(a4, v18, 0, *(long double*)(a1 + 80),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 80))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 88)),
                       COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 80))));
    if ((*(_WORD*)(a1 + 104) & 1) != 0) {
      CaptureTexture_581e00_alt1(a1, a3, a4);
    }
    GameRoutine_5fd650(a4, *(_QWORD*)(a1 + 32) + 136LL);
    v19 = a3[39];
    v20 = a3[40];
    v22 = a3[37];
    v21 = a3[38];
    v23 = *(_QWORD*)(a1 + 56);
    v67 = 0;
    v68 = 0;
    v65 = 0;
    v66 = 0;
    v63 = 0;
    v64 = 0;
    v61 = 0;
    v62 = 0;
    v59 = 0;
    v60 = 0;
    v75 = v21;
    v76 = v19;
    v24 = a3[41];
    v25 = *((_DWORD*)a3 + 56);
    v26 = *((_DWORD*)a3 + 57);
    v57 = a3[42];
    v58 = 0;
    v77 = v20;
    v78 = v24;
    v27 = a3[35];
    v28 = a3[36];
    v29 = a3[33];
    v71 = a3[34];
    v72 = v27;
    v31 = a3[31];
    v30 = a3[32];
    v73 = v28;
    v74 = v22;
    v69 = v30;
    v70 = v29;
    v56 = a3[27];
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v23 + 96LL))(v23, &v58);
    *(_QWORD*)&v33 = *(_QWORD*)(a1 + 96);
    v32 = *(float*)&v58 * *(float*)&v33;
    *(float*)&v33 = vmuls_lane_f32(*((float*)&v58 + 1), *(float32x2_t*)&v33, 1);
    if ((int)v32 <= 1) {
      v34 = 1;
    }
    else {
      v34 = (int)v32;
    }
    if ((int)*(float*)&v33 <= 1) {
      v35 = 1;
    }
    else {
      v35 = (int)*(float*)&v33;
    }
    *(float*)&v33 = (float)v34;
    GameRoutine_5a0070(&v59, &v65, v33, (float)v35);
    DrawInfo_5769c0(a3, *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL), v34, v35);
    v36 = v61;
    v37 = v63;
    v38 = v64;
    a3[35] = v62;
    a3[36] = v37;
    v39 = v59;
    v40 = v60;
    a3[31] = v18;
    a3[32] = v39;
    a3[33] = v40;
    a3[34] = v36;
    v41 = v67;
    a3[41] = v68;
    a3[42] = 0;
    v42 = v65;
    a3[39] = v66;
    a3[40] = v41;
    v43 = *a3;
    a3[37] = v38;
    a3[38] = v42;
    (*(void (**)(__int64*, __int64))(v43 + 24))(a3, a4);
    v44 = *(_QWORD*)(a1 + 56);
    v45 = a3[49];
    v46 = *(_DWORD*)(v44 + 124);
    LODWORD(v44) = *(_DWORD*)(v44 + 140);
    *((_DWORD*)a3 + 98) = v46;
    *((_DWORD*)a3 + 99) = v44;
    v47 = *(_QWORD*)(a1 + 56);
    if ((v15 & 0x20000) != 0) {
      (*(void (**)(__int64, __int64*, __int64))(*(_QWORD*)v47 + 224LL))(v47, a3,
                                                                        a4);
    }
    else {
      Pane_58f580(v47, a3, a4);
    }
    CaptureTexture_582150_alt1(a1, a3, a4);
    v48 = v71;
    v49 = v72;
    v50 = v73;
    v51 = v74;
    a3[49] = v45;
    a3[35] = v49;
    a3[36] = v50;
    v52 = v69;
    v53 = v70;
    a3[31] = v31;
    a3[32] = v52;
    a3[33] = v53;
    a3[34] = v48;
    v54 = v77;
    a3[41] = v78;
    a3[42] = v57;
    v55 = v75;
    a3[39] = v76;
    a3[40] = v54;
    a3[37] = v51;
    a3[38] = v55;
    DrawInfo_5769c0(a3, v56, v25, v26);
    result = DrawInfo_5768f0(a3);
    *((_BYTE*)a3 + 404) |= 0x40u;
  }
  return result;
}

__int64 CaptureTexture_581e00(_QWORD* a1, __int64 a2, __int64 a3)
{
  signed int v3;
  signed int v4;
  __int64 result;
  float32x2_t* v9;
  float32x2_t v10;
  float v11;
  float v12;
  float32x2_t v13;
  float v14;
  int32x4_t* v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  float v19;
  float v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  float32x2_t v25;
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
  int v37;
  bool v38;
  int v39;
  int v42;
  char v43;
  float v44;
  float v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  float v51;
  float v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  void (**v60)(_QWORD*);
  _UNKNOWN** v61;
  void (*v62)(_QWORD*);
  _QWORD v63[2];
  _QWORD v64[2];
  struct {
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
  } v65_;
  struct {
    _QWORD v71[2];
    int v72;
    int v73;
  } v71_;
  struct {
    _QWORD v74[2];
    __int64 v75;
    __int64 v76;
    int v77;
  } v74_;
  struct {
    unsigned __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    int v82;
  } v78_;
  __int64 v83;

  v4 = *(_DWORD*)(a2 + 224);
  v3 = *(_DWORD*)(a2 + 228);
  v83 = 0;
  GameRoutine_5fc4c0((__int64)&v83);
  v78_.v82 = 0;
  v78_.v80 = 0;
  v78_.v81 = 0;
  v78_.v78 = 0;
  v78_.v79 = 0;
  v74_.v77 = 0;
  v74_.v75 = 0;
  v74_.v76 = 0;
  v74_.v74[0] = 0;
  v74_.v74[1] = 0;
  GameRoutine_5fc4d0((__int64)&v78_.v78);
  result = GameRoutine_5fc4d0((__int64)v74_.v74);
  v9 = (float32x2_t*)a1[7];
  LANES64(v10).n64_u64[0] = a1[12];
  v11 = LANES64(v9[10]).n64_f32[0];
  v12 = LANES64(v9[10]).n64_f32[1];
  PSEUDO_LOW_LANE64(v13, n64_u64, LANES64(v9[6]).n64_u64[0]);
  v14 = LANES64(v9[7]).n64_f32[0];
  v15 = (int32x4_t*)LANES64(v9[3]).n64_u64[0];
  v16 = v15[7];
  v17 = v15[8];
  v18 = v15[9];
  v19 = v11 * LANES64(v10).n64_f32[0];
  v20 = vmuls_lane_f32(v12, v10, 1);
  v21 = vzip1q_s32(v16, v18);
  v22 = vzip2q_s32(v16, v18);
  v23 = vzip1q_s32(v17, COERCE_AS(int32x4_t, 0));
  v24 = vzip2q_s32(v17, COERCE_AS(int32x4_t, 0));
  LANES64(v25).n64_u64[0] =
      LANES128_OF(
          vaddq_f32(
              vzip2q_s32(v22, v24),
              vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(vzip1q_s32(v21, v23),
                                                     LANES64(v13).n64_f32[0]),
                                         vzip2q_s32(v21, v23), v13, 1),
                          vzip1q_s32(v22, v24), v14)))
          .n128_u64[0];
  v26 = (int)vmuls_n_f32(LANES64(v10).n64_f32[0], LANES64(v25).n64_f32[0]) -
        (int)v19 / 2 + v4 / 2;
  v27 = v3 / 2 - (int)vmuls_lane_f32(LANES64(v10).n64_f32[1], v25, 1) -
        (int)v20 / 2;
  v28 = v26 >> 31;
  v29 = v26 & ~(v26 >> 31);
  v30 = (v26 & (v26 >> 31)) + (int)v19;
  v31 = v27 >> 31;
  v32 = v27 & ~(v27 >> 31);
  v33 = (v27 & (v27 >> 31)) + (int)v20;
  v34 = v4 - (v30 + v29);
  if (v4 >= v30 + v29) {
    v34 = 0;
  }
  v35 = v34 + v30;
  v36 = v3 - (v33 + v32);
  if (v3 >= v33 + v32) {
    v36 = 0;
  }
  v37 = v36 + v33;
  v38 = v29 >= v4 || v35 + v29 < 1;
  v39 = v37 + v32;
  if (!v38 && v32 < v3 && v39 >= 1) {
    v42 = -v26;
    v43 = *(_BYTE*)(a2 + 404);
    v44 = *(float*)(a2 + 264);
    v45 = *(float*)(a2 + 268);
    v46 = v3 - v39;
    v47 = -v27;
    if ((v43 & 8) != 0) {
      v32 = v46;
    }
    if (v44 == 0x0.0p+0f && v45 == 0x0.0p+0f) {
      v48 = v37;
      v49 = v3 - v37 - v32;
      v50 = v35;
    }
    else {
      v51 = v44 / (float)(unsigned int)v4;
      v52 = v45 / (float)(unsigned int)v3;
      v29 = (int)(float)(*(float*)(a2 + 256) +
                         (float)((float)(unsigned int)v29 * v51));
      v49 = (int)(float)(*(float*)(a2 + 260) +
                         (float)((float)(v3 - v37 - v32) * v52));
      v50 = (int)(float)(v51 * (float)v35);
      v48 = (int)(float)(v52 * (float)v37);
    }
    v53 = v28 & v42;
    v54 = a1[4];
    v55 = *(_QWORD*)(a2 + 216);
    v56 = v31 & v47;
    v78_.v78 = __PAIR64__(v49, v29);
    HIDWORD(v78_.v79) = v50;
    LODWORD(v78_.v80) = v48;
    v57 = *(_QWORD*)(v54 + 24);
    if ((v43 & 8) != 0) {
      LODWORD(v74_.v74[0]) = v53;
      HIDWORD(v74_.v74[0]) = v31 & v47;
      HIDWORD(v74_.v74[1]) = v35;
      LODWORD(v74_.v75) = v37;
      return GameRoutine_5fd760(a3, v57, (int*)v74_.v74, v55,
                                (__int64)&v78_.v78, 0);
    }
    else {
      v58 = (*(__int64 (**)(_QWORD))GameData_2136288[0])(*(_QWORD*)(v55 + 8));
      v65_.v65 = v53;
      v65_.v66 = 0;
      v71_.v71[0] = v78_.v78;
      v71_.v71[1] = v78_.v79;
      v71_.v72 = v78_.v80;
      v71_.v73 = 1;
      if (v58 == 3) {
        v59 = 0;
        v65_.v66 = HIDWORD(v83);
      }
      else {
        v65_.v66 = v56;
        if ((v58 & 0xFFFFFFFD) == 4) {
          v59 = HIDWORD(v83);
        }
        else {
          v59 = 0;
        }
      }
      v65_.v67 = v59;
      v65_.v68 = v35;
      v64[0] = 0;
      v64[1] = 0;
      v65_.v69 = v37;
      v65_.v70 = 1;
      v60 = (void (**)(_QWORD*))GameData_2132128[0];
      (*(void (**)(_QWORD*))GameData_2132128[0])(v64);
      v61 = GameData_2136290;
      ((void (*)(_QWORD*, _QWORD, __int64))*GameData_2136290)(
          v64, (unsigned __int16)v78_.v81, 1);
      v62 = *v60;
      v63[0] = 0;
      v63[1] = 0;
      v62(v63);
      ((void (*)(_QWORD*, _QWORD, __int64))*v61)(v63, (unsigned __int16)v83, 1);
      return (*(__int64 (**)(_QWORD, _QWORD, _QWORD*, _QWORD*, _QWORD, _QWORD*,
                             int*, __int64))GameData_2132140[0])(
          *(_QWORD*)(a3 + 208), *(_QWORD*)(v55 + 8), v64, v71_.v71,
          *(_QWORD*)(v57 + 8), v63, &v65_.v65, 8);
    }
  }
  return result;
}

__int64 CaptureTexture_582150(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 (*v3)(__int64, _QWORD*, _QWORD*, __int64, _QWORD*, _QWORD, _QWORD);
  _QWORD* v4;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    int v18;
  } v14_;
  struct {
    _QWORD v19[2];
    __int64 v20;
    __int64 v21;
    int v22;
  } v19_;
  _QWORD var4[2];

  v3 = *(__int64 (**)(__int64, _QWORD*, _QWORD*, __int64, _QWORD*, _QWORD,
                      _QWORD))(a2 + 376);
  v4 = (_QWORD*)a1[1];
  if (v3 == nullptr || ((result = v3(a3, v4 + 8, v4 + 1, a1[4] + 8LL, v4 + 17,
                                     a1[7], *(_QWORD*)(a2 + 384))) &
                        1) == 0) {
    v8 = a1[4];
    v9 = v4[3];
    v19_.v19[0] = 0;
    v19_.v19[1] = 0;
    v10 = *(_QWORD*)(v8 + 24);
    v19_.v22 = 0;
    v19_.v20 = 0;
    v19_.v21 = 0;
    GameRoutine_5fc4d0((__int64)v19_.v19);
    v19_.v19[0] = 0;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 32LL))(
        (void*)(&v14_.v14), v4);
    HIDWORD(v19_.v19[1]) = (unsigned __int16)v14_.v14;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 32LL))(
        (void*)(&v14_.v14), v4);
    v11 = WORD1(v14_.v14);
    v14_.v18 = 0;
    v14_.v16 = 0;
    v14_.v17 = 0;
    v14_.v14 = 0;
    v14_.v15 = 0;
    LODWORD(v19_.v20) = v11;
    GameRoutine_5fc4d0((__int64)&v14_.v14);
    v12 = a1[4];
    v14_.v14 = 0;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v12 + 32LL))((void*)(var4), (__int64)v12);
    v13 = a1[4];
    HIDWORD(v14_.v15) = LOWORD(var4[0]);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v13 + 32LL))((void*)(var4), (__int64)v13);
    LODWORD(v14_.v16) = WORD1(var4[0]);
    return GameRoutine_5fd760(a3, v9, (int*)v19_.v19, v10, (__int64)&v14_.v14,
                              0);
  }
  return result;
}

__int64 CaptureTexture_Unknown9(__int64 result)
{
  *(_WORD*)(result + 104) &= ~8u;
  return result;
}

#pragma GCC visibility pop
