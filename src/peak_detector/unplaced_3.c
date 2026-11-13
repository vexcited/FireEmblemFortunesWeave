#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 PulseSignal_IsPulseStable_plt(_QWORD);
__int64 PulseSignal_UpdateProgress_plt(void);
float PulseSignal_GetPulse_plt(__int64, __int64, __int64);
float peak_detector_757e60(void* this_, float a2);
void peak_detector_758010(void* this_, unsigned int a2);
bool peak_detector_758180(void* this_);
float peak_detector_7588a0(void* this_, float* a2, unsigned __int64* a3);
__int64 peak_detector_759340(void* this_, float a2, int a3);
float peak_detector_75a770(void* this_);

float peak_detector_757e60(void* this_, float a2)
{
  __int64 v2;
  unsigned __int64 v3;
  float v4;
  float v5;
  __int64* v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v17;
  __int64 v18;
  float* v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  float v29;
  float v30;
  float v31;
  float v32;

  {
    v3 = *((_QWORD*)this_ + 14);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 >= *((unsigned int*)this_ + 8)) {
    {
      v4 = *(float*)this_;
      __asm__ volatile("" ::"w"(v4));
    }
  }
  else {
    v4 = 0x1.0000000000000p+0f;
    *((_QWORD*)this_ + 14) = v3 + 1;
  }
  v5 = -a2;
  {
    v6 = *((__int64**)this_ + 13);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *((float*)this_ + 32) +
         (float)((float)(v5 - *((float*)this_ + 32)) * v4);
    __asm__ volatile("" ::"w"(v7));
  }
  *((float*)this_ + 32) = v7;
  {
    v8 = v6[2];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = v8 - 1;
  if (v8 == 1) {
    v14 = v5 - v7;
    {
      v15 = *(float*)(**((_QWORD**)this_ + 12) + 4 * v9);
      __asm__ volatile("" ::"w"(v15));
    }
    *(float*)(*v6 + 4 * v9) = v14;
    return (float)(v14 * v15) + 0x0.0p+0f;
  }
  else {
    {
      v10 = *v6;
      __asm__ volatile("" ::"r"(v10));
    }
    v11 = v9 & 3;
    if ((unsigned __int64)(v8 - 2) >= 3) {
      v13 = 0x0.0p+0f;
      v17 = 8;
      v12 = 0;
      do {
        *(_DWORD*)(v10 + 4 * v12) = *(_DWORD*)(v10 + 4 * v12 + 4);
        {
          v18 = **((_QWORD**)this_ + 13);
          __asm__ volatile("" ::"r"(v18));
        }
        v19 = (float*)(v18 + v17);
        v17 += 16;
        {
          v20 = v13 + (float)(*(v19 - 2) *
                              *(float*)(**((_QWORD**)this_ + 12) + 4 * v12));
          __asm__ volatile("" ::"w"(v20));
        }
        *(float*)(v18 + 4 * v12 + 4) = *v19;
        {
          v21 = **((_QWORD**)this_ + 13) + 4 * v12;
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 =
              v20 + (float)(*(float*)(v21 + 4) *
                            *(float*)(**((_QWORD**)this_ + 12) + 4 * v12 + 4));
          __asm__ volatile("" ::"w"(v22));
        }
        *(_DWORD*)(v21 + 8) = *(_DWORD*)(v21 + 12);
        {
          v23 = **((_QWORD**)this_ + 13) + 4 * v12;
          __asm__ volatile("" ::"r"(v23));
        }
        {
          v24 =
              v22 + (float)(*(float*)(v23 + 8) *
                            *(float*)(**((_QWORD**)this_ + 12) + 4 * v12 + 8));
          __asm__ volatile("" ::"w"(v24));
        }
        *(_DWORD*)(v23 + 12) = *(_DWORD*)(v23 + 16);
        {
          v10 = **((_QWORD**)this_ + 13);
          __asm__ volatile("" ::"r"(v10));
        }
        {
          v2 = **((_QWORD**)this_ + 12);
          __asm__ volatile("" ::"r"(v2));
        }
        v25 = v10 + 4 * v12;
        v26 = v2 + 4 * v12;
        v12 += 4;
        {
          v13 = v24 + (float)(*(float*)(v25 + 12) * *(float*)(v26 + 12));
          __asm__ volatile("" ::"w"(v13));
        }
      } while ((v9 & 0xFFFFFFFFFFFFFFFCLL) != v12);
    }
    else {
      v12 = 0;
      v13 = 0x0.0p+0f;
    }
    if ((v9 & 3) != 0) {
      v27 = 4 * v12;
      do {
        --v11;
        *(_DWORD*)(v10 + v27) = *(_DWORD*)(v10 + v27 + 4);
        {
          v28 = *((__int64**)this_ + 12);
          __asm__ volatile("" ::"r"(v28));
        }
        {
          v10 = **((_QWORD**)this_ + 13);
          __asm__ volatile("" ::"r"(v10));
        }
        {
          v2 = *v28;
          __asm__ volatile("" ::"r"(v2));
        }
        {
          v29 = *(float*)(v10 + v27);
          __asm__ volatile("" ::"w"(v29));
        }
        {
          v30 = *(float*)(*v28 + v27);
          __asm__ volatile("" ::"w"(v30));
        }
        v27 += 4;
        v13 = v13 + (float)(v29 * v30);
      } while (v11 != 0);
    }
    v31 = v5 - v7;
    {
      v32 = *(float*)(v2 + 4 * v9);
      __asm__ volatile("" ::"w"(v32));
    }
    *(float*)(v10 + 4 * v9) = v31;
    return v13 + (float)(v31 * v32);
  }
}

void peak_detector_758010(void* this_, unsigned int a2)
{

#pragma clang fp contract(off)
  float v2;
  unsigned int v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float v11;
  _BYTE v12[4];

  {
    v2 = *((float*)this_ + 35);
    __asm__ volatile("" ::"w"(v2));
  }
  *((_BYTE*)this_ + 152) = 0;
  v4 = a2 / 0x3E8;
  if (v2 == 0x0.0p+0f) {
    if ((PulseSignal_IsPulseStable_plt(this_) & 1) == 0) {
      return;
    }
    {
      v5 = *(_QWORD*)(*((_QWORD*)this_ + 8) + 8LL);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v5 == 0 || v5 < *((unsigned int*)this_ + 8)) {
    LABEL_17:
      *((_DWORD*)this_ + 35) = 0;
      return;
    }
    *((_QWORD*)this_ + 18) = v4;
    {
      v7 = *((unsigned int*)this_ + 14);
      __asm__ volatile("" ::"r"(v7));
    }
    v8 = v4 + 1 - (unsigned __int64)v4;
    if (v8 >= v7) {
      goto LABEL_9;
    }
  }
  else {
    {
      v9 = *(_QWORD*)(*((_QWORD*)this_ + 8) + 8LL);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 == 0 || v9 < *((unsigned int*)this_ + 8)) {
      goto LABEL_17;
    }
    {
      v7 = *((unsigned int*)this_ + 14);
      __asm__ volatile("" ::"r"(v7));
    }
    {
      v8 = v4 + 1 - *((_QWORD*)this_ + 18);
      __asm__ volatile("" ::"r"(v8));
    }
    if (v8 >= v7) {
    LABEL_9:
      *((_DWORD*)this_ + 35) = 1065353216;
      if (PulseSignal_GetPulse_plt((__int64)this_, (__int64)v12, 0) <
              0x1.0000000000000p+0f &&
          v8 < (unsigned int)(*((_DWORD*)this_ + 15) + v7)) {
        *((_DWORD*)this_ + 35) = 1065185444;
        *((_BYTE*)this_ + 152) = 1;
      }
      return;
    }
  }
  v11 = fminf((float)v8 / (float)(unsigned int)v7, 0x1.fae1480000000p-1f);
  *((float*)this_ + 35) = v11;
  if (v11 > 0x1.0000000000000p+0f) {
    *((_DWORD*)this_ + 35) = 1065353216;
  }
}

bool peak_detector_758180(void* this_)
{
  __int64* v1;
  unsigned __int64 v2;
  __int64 v4;
  float* v5;
  char v6;
  __int64 v7;
  char v8;
  float* v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;

  {
    v1 = *((__int64**)this_ + 8);
    __asm__ volatile("" ::"r"(v1));
  }
  {
    v2 = v1[1];
    __asm__ volatile("" ::"r"(v2));
  }
  if (v2 < 0x40) {
    return false;
  }
  {
    v4 = *v1;
    __asm__ volatile("" ::"r"(v4));
  }
  v5 = &v73;
  v6 = 1;
  v7 = 32;
  v72 = 0x0.0p+0f;
  v73 = 0x0.0p+0f;
  do {
    v8 = v6;
    v9 = (float*)(v4 + 4 * (v2 - v7));
    {
      v10 = v9[1];
      __asm__ volatile("" ::"w"(v10));
    }
    if (v10 >= *v9) {
      v11 = *v9;
      __asm__ volatile("" ::"w"(v11));
    }
    else {
      v11 = v9[1];
      __asm__ volatile("" ::"w"(v11));
    }
    if (*v9 >= v10) {
      v10 = *v9;
      __asm__ volatile("" ::"w"(v10));
    }
    {
      v13 = v9[2];
      __asm__ volatile("" ::"w"(v13));
    }
    {
      v12 = v9[3];
      __asm__ volatile("" ::"w"(v12));
    }
    if (v13 >= v11) {
      v14 = v11;
    }
    else {
      v14 = v9[2];
      __asm__ volatile("" ::"w"(v14));
    }
    {
      v15 = v9[3];
      __asm__ volatile("" ::"w"(v15));
    }
    if (v10 < v13) {
      v10 = v9[2];
      __asm__ volatile("" ::"w"(v10));
    }
    if (v12 >= v14) {
      v15 = v14;
      if (v10 < v12) {
      LABEL_17:
        {
          v16 = v9[4];
          __asm__ volatile("" ::"w"(v16));
        }
        v17 = v16;
        if (v16 < v15) {
          goto LABEL_18;
        }
        goto LABEL_76;
      }
    }
    else if (v10 < v12) {
      goto LABEL_17;
    }
    v12 = v10;
    {
      v16 = v9[4];
      __asm__ volatile("" ::"w"(v16));
    }
    v17 = v16;
    if (v16 < v15) {
    LABEL_18:
      if (v12 < v16) {
        goto LABEL_19;
      }
      goto LABEL_77;
    }
  LABEL_76:
    v17 = v15;
    if (v12 < v16) {
    LABEL_19:
      {
        v18 = v9[5];
        __asm__ volatile("" ::"w"(v18));
      }
      v19 = v18;
      if (v18 < v17) {
        goto LABEL_20;
      }
      goto LABEL_78;
    }
  LABEL_77:
    v16 = v12;
    {
      v18 = v9[5];
      __asm__ volatile("" ::"w"(v18));
    }
    v19 = v18;
    if (v18 < v17) {
    LABEL_20:
      if (v16 < v18) {
        goto LABEL_21;
      }
      goto LABEL_79;
    }
  LABEL_78:
    v19 = v17;
    if (v16 < v18) {
    LABEL_21:
      {
        v20 = v9[6];
        __asm__ volatile("" ::"w"(v20));
      }
      v21 = v20;
      if (v20 < v19) {
        goto LABEL_22;
      }
      goto LABEL_80;
    }
  LABEL_79:
    v18 = v16;
    {
      v20 = v9[6];
      __asm__ volatile("" ::"w"(v20));
    }
    v21 = v20;
    if (v20 < v19) {
    LABEL_22:
      if (v18 < v20) {
        goto LABEL_23;
      }
      goto LABEL_81;
    }
  LABEL_80:
    v21 = v19;
    if (v18 < v20) {
    LABEL_23:
      {
        v22 = v9[7];
        __asm__ volatile("" ::"w"(v22));
      }
      v23 = v22;
      if (v22 < v21) {
        goto LABEL_24;
      }
      goto LABEL_82;
    }
  LABEL_81:
    v20 = v18;
    {
      v22 = v9[7];
      __asm__ volatile("" ::"w"(v22));
    }
    v23 = v22;
    if (v22 < v21) {
    LABEL_24:
      if (v20 < v22) {
        goto LABEL_25;
      }
      goto LABEL_83;
    }
  LABEL_82:
    v23 = v21;
    if (v20 < v22) {
    LABEL_25:
      {
        v24 = v9[8];
        __asm__ volatile("" ::"w"(v24));
      }
      v25 = v24;
      if (v24 < v23) {
        goto LABEL_26;
      }
      goto LABEL_84;
    }
  LABEL_83:
    v22 = v20;
    {
      v24 = v9[8];
      __asm__ volatile("" ::"w"(v24));
    }
    v25 = v24;
    if (v24 < v23) {
    LABEL_26:
      if (v22 < v24) {
        goto LABEL_27;
      }
      goto LABEL_85;
    }
  LABEL_84:
    v25 = v23;
    if (v22 < v24) {
    LABEL_27:
      {
        v26 = v9[9];
        __asm__ volatile("" ::"w"(v26));
      }
      v27 = v26;
      if (v26 < v25) {
        goto LABEL_28;
      }
      goto LABEL_86;
    }
  LABEL_85:
    v24 = v22;
    {
      v26 = v9[9];
      __asm__ volatile("" ::"w"(v26));
    }
    v27 = v26;
    if (v26 < v25) {
    LABEL_28:
      if (v24 < v26) {
        goto LABEL_29;
      }
      goto LABEL_87;
    }
  LABEL_86:
    v27 = v25;
    if (v24 < v26) {
    LABEL_29:
      {
        v28 = v9[10];
        __asm__ volatile("" ::"w"(v28));
      }
      v29 = v28;
      if (v28 < v27) {
        goto LABEL_30;
      }
      goto LABEL_88;
    }
  LABEL_87:
    v26 = v24;
    {
      v28 = v9[10];
      __asm__ volatile("" ::"w"(v28));
    }
    v29 = v28;
    if (v28 < v27) {
    LABEL_30:
      if (v26 < v28) {
        goto LABEL_31;
      }
      goto LABEL_89;
    }
  LABEL_88:
    v29 = v27;
    if (v26 < v28) {
    LABEL_31:
      {
        v30 = v9[11];
        __asm__ volatile("" ::"w"(v30));
      }
      v31 = v30;
      if (v30 < v29) {
        goto LABEL_32;
      }
      goto LABEL_90;
    }
  LABEL_89:
    v28 = v26;
    {
      v30 = v9[11];
      __asm__ volatile("" ::"w"(v30));
    }
    v31 = v30;
    if (v30 < v29) {
    LABEL_32:
      if (v28 < v30) {
        goto LABEL_33;
      }
      goto LABEL_91;
    }
  LABEL_90:
    v31 = v29;
    if (v28 < v30) {
    LABEL_33:
      {
        v32 = v9[12];
        __asm__ volatile("" ::"w"(v32));
      }
      v33 = v32;
      if (v32 < v31) {
        goto LABEL_34;
      }
      goto LABEL_92;
    }
  LABEL_91:
    v30 = v28;
    {
      v32 = v9[12];
      __asm__ volatile("" ::"w"(v32));
    }
    v33 = v32;
    if (v32 < v31) {
    LABEL_34:
      if (v30 < v32) {
        goto LABEL_35;
      }
      goto LABEL_93;
    }
  LABEL_92:
    v33 = v31;
    if (v30 < v32) {
    LABEL_35:
      {
        v34 = v9[13];
        __asm__ volatile("" ::"w"(v34));
      }
      v35 = v34;
      if (v34 < v33) {
        goto LABEL_36;
      }
      goto LABEL_94;
    }
  LABEL_93:
    v32 = v30;
    {
      v34 = v9[13];
      __asm__ volatile("" ::"w"(v34));
    }
    v35 = v34;
    if (v34 < v33) {
    LABEL_36:
      if (v32 < v34) {
        goto LABEL_37;
      }
      goto LABEL_95;
    }
  LABEL_94:
    v35 = v33;
    if (v32 < v34) {
    LABEL_37:
      {
        v36 = v9[14];
        __asm__ volatile("" ::"w"(v36));
      }
      v37 = v36;
      if (v36 < v35) {
        goto LABEL_38;
      }
      goto LABEL_96;
    }
  LABEL_95:
    v34 = v32;
    {
      v36 = v9[14];
      __asm__ volatile("" ::"w"(v36));
    }
    v37 = v36;
    if (v36 < v35) {
    LABEL_38:
      if (v34 < v36) {
        goto LABEL_39;
      }
      goto LABEL_97;
    }
  LABEL_96:
    v37 = v35;
    if (v34 < v36) {
    LABEL_39:
      {
        v38 = v9[15];
        __asm__ volatile("" ::"w"(v38));
      }
      v39 = v38;
      if (v38 < v37) {
        goto LABEL_40;
      }
      goto LABEL_98;
    }
  LABEL_97:
    v36 = v34;
    {
      v38 = v9[15];
      __asm__ volatile("" ::"w"(v38));
    }
    v39 = v38;
    if (v38 < v37) {
    LABEL_40:
      if (v36 < v38) {
        goto LABEL_41;
      }
      goto LABEL_99;
    }
  LABEL_98:
    v39 = v37;
    if (v36 < v38) {
    LABEL_41:
      {
        v40 = v9[16];
        __asm__ volatile("" ::"w"(v40));
      }
      v41 = v40;
      if (v40 < v39) {
        goto LABEL_42;
      }
      goto LABEL_100;
    }
  LABEL_99:
    v38 = v36;
    {
      v40 = v9[16];
      __asm__ volatile("" ::"w"(v40));
    }
    v41 = v40;
    if (v40 < v39) {
    LABEL_42:
      if (v38 < v40) {
        goto LABEL_43;
      }
      goto LABEL_101;
    }
  LABEL_100:
    v41 = v39;
    if (v38 < v40) {
    LABEL_43:
      {
        v42 = v9[17];
        __asm__ volatile("" ::"w"(v42));
      }
      v43 = v42;
      if (v42 < v41) {
        goto LABEL_44;
      }
      goto LABEL_102;
    }
  LABEL_101:
    v40 = v38;
    {
      v42 = v9[17];
      __asm__ volatile("" ::"w"(v42));
    }
    v43 = v42;
    if (v42 < v41) {
    LABEL_44:
      if (v40 < v42) {
        goto LABEL_45;
      }
      goto LABEL_103;
    }
  LABEL_102:
    v43 = v41;
    if (v40 < v42) {
    LABEL_45:
      {
        v44 = v9[18];
        __asm__ volatile("" ::"w"(v44));
      }
      v45 = v44;
      if (v44 < v43) {
        goto LABEL_46;
      }
      goto LABEL_104;
    }
  LABEL_103:
    v42 = v40;
    {
      v44 = v9[18];
      __asm__ volatile("" ::"w"(v44));
    }
    v45 = v44;
    if (v44 < v43) {
    LABEL_46:
      if (v42 < v44) {
        goto LABEL_47;
      }
      goto LABEL_105;
    }
  LABEL_104:
    v45 = v43;
    if (v42 < v44) {
    LABEL_47:
      {
        v46 = v9[19];
        __asm__ volatile("" ::"w"(v46));
      }
      v47 = v46;
      if (v46 < v45) {
        goto LABEL_48;
      }
      goto LABEL_106;
    }
  LABEL_105:
    v44 = v42;
    {
      v46 = v9[19];
      __asm__ volatile("" ::"w"(v46));
    }
    v47 = v46;
    if (v46 < v45) {
    LABEL_48:
      if (v44 < v46) {
        goto LABEL_49;
      }
      goto LABEL_107;
    }
  LABEL_106:
    v47 = v45;
    if (v44 < v46) {
    LABEL_49:
      {
        v48 = v9[20];
        __asm__ volatile("" ::"w"(v48));
      }
      v49 = v48;
      if (v48 < v47) {
        goto LABEL_50;
      }
      goto LABEL_108;
    }
  LABEL_107:
    v46 = v44;
    {
      v48 = v9[20];
      __asm__ volatile("" ::"w"(v48));
    }
    v49 = v48;
    if (v48 < v47) {
    LABEL_50:
      if (v46 < v48) {
        goto LABEL_51;
      }
      goto LABEL_109;
    }
  LABEL_108:
    v49 = v47;
    if (v46 < v48) {
    LABEL_51:
      {
        v50 = v9[21];
        __asm__ volatile("" ::"w"(v50));
      }
      v51 = v50;
      if (v50 < v49) {
        goto LABEL_52;
      }
      goto LABEL_110;
    }
  LABEL_109:
    v48 = v46;
    {
      v50 = v9[21];
      __asm__ volatile("" ::"w"(v50));
    }
    v51 = v50;
    if (v50 < v49) {
    LABEL_52:
      if (v48 < v50) {
        goto LABEL_53;
      }
      goto LABEL_111;
    }
  LABEL_110:
    v51 = v49;
    if (v48 < v50) {
    LABEL_53:
      {
        v52 = v9[22];
        __asm__ volatile("" ::"w"(v52));
      }
      v53 = v52;
      if (v52 < v51) {
        goto LABEL_54;
      }
      goto LABEL_112;
    }
  LABEL_111:
    v50 = v48;
    {
      v52 = v9[22];
      __asm__ volatile("" ::"w"(v52));
    }
    v53 = v52;
    if (v52 < v51) {
    LABEL_54:
      if (v50 < v52) {
        goto LABEL_55;
      }
      goto LABEL_113;
    }
  LABEL_112:
    v53 = v51;
    if (v50 < v52) {
    LABEL_55:
      {
        v54 = v9[23];
        __asm__ volatile("" ::"w"(v54));
      }
      v55 = v54;
      if (v54 < v53) {
        goto LABEL_56;
      }
      goto LABEL_114;
    }
  LABEL_113:
    v52 = v50;
    {
      v54 = v9[23];
      __asm__ volatile("" ::"w"(v54));
    }
    v55 = v54;
    if (v54 < v53) {
    LABEL_56:
      if (v52 < v54) {
        goto LABEL_57;
      }
      goto LABEL_115;
    }
  LABEL_114:
    v55 = v53;
    if (v52 < v54) {
    LABEL_57:
      {
        v56 = v9[24];
        __asm__ volatile("" ::"w"(v56));
      }
      v57 = v56;
      if (v56 < v55) {
        goto LABEL_58;
      }
      goto LABEL_116;
    }
  LABEL_115:
    v54 = v52;
    {
      v56 = v9[24];
      __asm__ volatile("" ::"w"(v56));
    }
    v57 = v56;
    if (v56 < v55) {
    LABEL_58:
      if (v54 < v56) {
        goto LABEL_59;
      }
      goto LABEL_117;
    }
  LABEL_116:
    v57 = v55;
    if (v54 < v56) {
    LABEL_59:
      {
        v58 = v9[25];
        __asm__ volatile("" ::"w"(v58));
      }
      v59 = v58;
      if (v58 < v57) {
        goto LABEL_60;
      }
      goto LABEL_118;
    }
  LABEL_117:
    v56 = v54;
    {
      v58 = v9[25];
      __asm__ volatile("" ::"w"(v58));
    }
    v59 = v58;
    if (v58 < v57) {
    LABEL_60:
      if (v56 < v58) {
        goto LABEL_61;
      }
      goto LABEL_119;
    }
  LABEL_118:
    v59 = v57;
    if (v56 < v58) {
    LABEL_61:
      {
        v60 = v9[26];
        __asm__ volatile("" ::"w"(v60));
      }
      v61 = v60;
      if (v60 < v59) {
        goto LABEL_62;
      }
      goto LABEL_120;
    }
  LABEL_119:
    v58 = v56;
    {
      v60 = v9[26];
      __asm__ volatile("" ::"w"(v60));
    }
    v61 = v60;
    if (v60 < v59) {
    LABEL_62:
      if (v58 < v60) {
        goto LABEL_63;
      }
      goto LABEL_121;
    }
  LABEL_120:
    v61 = v59;
    if (v58 < v60) {
    LABEL_63:
      {
        v62 = v9[27];
        __asm__ volatile("" ::"w"(v62));
      }
      v63 = v62;
      if (v62 < v61) {
        goto LABEL_64;
      }
      goto LABEL_122;
    }
  LABEL_121:
    v60 = v58;
    {
      v62 = v9[27];
      __asm__ volatile("" ::"w"(v62));
    }
    v63 = v62;
    if (v62 < v61) {
    LABEL_64:
      if (v60 < v62) {
        goto LABEL_65;
      }
      goto LABEL_123;
    }
  LABEL_122:
    v63 = v61;
    if (v60 < v62) {
    LABEL_65:
      {
        v64 = v9[28];
        __asm__ volatile("" ::"w"(v64));
      }
      v65 = v64;
      if (v64 < v63) {
        goto LABEL_66;
      }
      goto LABEL_124;
    }
  LABEL_123:
    v62 = v60;
    {
      v64 = v9[28];
      __asm__ volatile("" ::"w"(v64));
    }
    v65 = v64;
    if (v64 < v63) {
    LABEL_66:
      if (v62 < v64) {
        goto LABEL_67;
      }
      goto LABEL_125;
    }
  LABEL_124:
    v65 = v63;
    if (v62 < v64) {
    LABEL_67:
      {
        v66 = v9[29];
        __asm__ volatile("" ::"w"(v66));
      }
      v67 = v66;
      if (v66 < v65) {
        goto LABEL_68;
      }
      goto LABEL_126;
    }
  LABEL_125:
    v64 = v62;
    {
      v66 = v9[29];
      __asm__ volatile("" ::"w"(v66));
    }
    v67 = v66;
    if (v66 < v65) {
    LABEL_68:
      if (v64 < v66) {
        goto LABEL_69;
      }
      goto LABEL_127;
    }
  LABEL_126:
    v67 = v65;
    if (v64 < v66) {
    LABEL_69:
      {
        v68 = v9[30];
        __asm__ volatile("" ::"w"(v68));
      }
      v69 = v68;
      if (v68 < v67) {
        goto LABEL_70;
      }
      goto LABEL_128;
    }
  LABEL_127:
    v66 = v64;
    {
      v68 = v9[30];
      __asm__ volatile("" ::"w"(v68));
    }
    v69 = v68;
    if (v68 < v67) {
    LABEL_70:
      if (v66 < v68) {
        goto LABEL_71;
      }
      goto LABEL_129;
    }
  LABEL_128:
    v69 = v67;
    if (v66 < v68) {
    LABEL_71:
      {
        v70 = v9[31];
        __asm__ volatile("" ::"w"(v70));
      }
      v71 = v70;
      if (v70 >= v69) {
        goto LABEL_130;
      }
      goto LABEL_72;
    }
  LABEL_129:
    v68 = v66;
    {
      v70 = v9[31];
      __asm__ volatile("" ::"w"(v70));
    }
    v71 = v70;
    if (v70 >= v69) {
    LABEL_130:
      v71 = v69;
      if (v68 < v70) {
        goto LABEL_4;
      }
      goto LABEL_131;
    }
  LABEL_72:
    if (v68 >= v70) {
    LABEL_131:
      v70 = v68;
    }
  LABEL_4:
    v7 = 64;
    v6 = 0;
    *v5 = v70 - v71;
    v5 = &v72;
  } while ((v8 & 1) != 0);
  return (float)((float)((float)((float)((float)(v73 -
                                                 (float)(PSEUDO_UNFUSED(
                                                     (float)((float)(v73 +
                                                                     0x0.0p+0f) +
                                                             v72) *
                                                     0x1.0000000000000p-1f))) *
                                         (float)(v73 -
                                                 (float)(PSEUDO_UNFUSED(
                                                     (float)((float)(v73 +
                                                                     0x0.0p+0f) +
                                                             v72) *
                                                     0x1.0000000000000p-1f)))) +
                                 0x0.0p+0f) +
                         (float)((float)(v72 -
                                         (float)(PSEUDO_UNFUSED(
                                             (float)((float)(v73 + 0x0.0p+0f) +
                                                     v72) *
                                             0x1.0000000000000p-1f))) *
                                 (float)(v72 -
                                         (float)(PSEUDO_UNFUSED(
                                             (float)((float)(v73 + 0x0.0p+0f) +
                                                     v72) *
                                             0x1.0000000000000p-1f))))) *
                 0x1.0000000000000p-1f) < 0x1.0000000000000p+10f;
}

float peak_detector_7588a0(void* this_, float* a2, unsigned __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  float result;
  __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  float v14;
  float v15;
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  _QWORD* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  float* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float* v35;
  unsigned __int64 v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  float* v44;
  float v45;
  bool v46;
  float v47;
  __int64 v48;
  float v49;
  bool v50;
  float v51;
  float v52;
  bool v53;
  float v54;
  bool v55;
  float v56;
  float v57;
  float v58;
  bool v59;
  float v60;
  unsigned __int64 v61;
  float v62;
  float v63;
  __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  _QWORD* v68;
  float v69;
  __int64 v70;
  unsigned __int64 v71;
  float v72;
  _QWORD* v73;
  _QWORD* v74;
  _QWORD* v75;
  float v76;
  unsigned __int64 v77;
  float v78;
  __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  float v82;
  _QWORD* v83;
  __int64 v84;
  _QWORD* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  float* v90;
  __int64 v91;
  float v92;
  float v93;
  float v94;
  float* v95;
  float v96;
  unsigned int v97;
  int v98;
  int v99;
  bool v100;
  int v101;
  unsigned int v102;
  bool v103;
  unsigned int v104;
  signed int v105;
  _QWORD v106[34];

  *a2 = 0x0.0p+0f;
  result = 0x0.0p+0f;
  {
    v5 = *((__int64**)this_ + 11);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = v5[1];
    __asm__ volatile("" ::"r"(v6));
  }
  if (v6 < *((unsigned int*)this_ + 13)) {
    return result;
  }
  v106[32] = v3;
  result = 0x0.0p+0f;
  memset(v106, 0, 256);
  if (v6 == 0) {
    return result;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v8 = 0;
  {
    v9 = (float)*((unsigned int*)this_ + 12);
    __asm__ volatile("" ::"w"(v9));
  }
  do {
    if (v8 == 0) {
      {
        v23 = *v5;
        __asm__ volatile("" ::"r"(v23));
      }
      if (v6 >= 8) {
        v25 = 0x0.0p+0f;
        v26 = 0x0.0p+0f;
        v30 = (float*)(v23 + 16);
        v31 = 0;
        do {
          v31 -= 8;
          v26 =
              (float)((float)((float)((float)((float)((float)((float)(v26 +
                                                                      0x1.0000000000000p+0f) +
                                                              0x1.0000000000000p+0f) +
                                                      0x1.0000000000000p+0f) +
                                              0x1.0000000000000p+0f) +
                                      0x1.0000000000000p+0f) +
                              0x1.0000000000000p+0f) +
                      0x1.0000000000000p+0f) +
              0x1.0000000000000p+0f;
          v32 = (float)((float)((float)((float)((float)(v25 + *(v30 - 4)) +
                                                *(v30 - 3)) +
                                        *(v30 - 2)) +
                                *(v30 - 1)) +
                        *v30) +
                v30[1];
          {
            v33 = v30[2];
            __asm__ volatile("" ::"w"(v33));
          }
          {
            v34 = v30[3];
            __asm__ volatile("" ::"w"(v34));
          }
          v30 += 8;
          v25 = (float)(v32 + v33) + v34;
        } while (-(__int64)(v6 & 0xFFFFFFFFFFFFFFF8LL) != v31);
        v24 = -v31;
        if ((v6 & 7) == 0) {
          goto LABEL_69;
        }
      }
      else {
        v24 = 0;
        v25 = 0x0.0p+0f;
        v26 = 0x0.0p+0f;
        if ((v6 & 7) == 0) {
        LABEL_69:
          v38 = v25 / v26;
          {
            v39 = *v5;
            __asm__ volatile("" ::"r"(v39));
          }
          if (v6 >= 8) {
            v40 = 0x0.0p+0f;
            v41 = 0x0.0p+0f;
            v44 = (float*)(v39 + 16);
            v42 = 0;
            v43 = 0;
            do {
              v45 = vabds_f32(*(v44 - 4), v38);
              v46 = v41 < v45;
              if (v41 < v45) {
                v40 = v45;
                v41 = v45;
              }
              v47 = vabds_f32(*(v44 - 3), v38);
              if (v46) {
                v48 = v43;
              }
              else {
                v48 = v42;
              }
              if (v41 < v47) {
                v40 = v47;
                v41 = v47;
                v48 = v43 + 1;
              }
              v49 = vabds_f32(*(v44 - 2), v38);
              v50 = v41 < v49;
              if (v41 < v49) {
                v40 = v49;
                v41 = v49;
              }
              v51 = vabds_f32(*(v44 - 1), v38);
              if (v50) {
                v48 = v43 + 2;
              }
              if (v41 < v51) {
                v40 = v51;
                v41 = v51;
                v48 = v43 + 3;
              }
              v52 = vabds_f32(*v44, v38);
              v53 = v41 < v52;
              if (v41 < v52) {
                v40 = v52;
                v41 = v52;
              }
              v54 = vabds_f32(v44[1], v38);
              if (v53) {
                v48 = v43 + 4;
              }
              v55 = v41 < v54;
              if (v41 < v54) {
                v40 = v54;
                v41 = v54;
              }
              {
                v56 = v44[2];
                __asm__ volatile("" ::"w"(v56));
              }
              {
                v57 = v44[3];
                __asm__ volatile("" ::"w"(v57));
              }
              if (v55) {
                v48 = v43 + 5;
              }
              v44 += 8;
              v58 = vabds_f32(v56, v38);
              v59 = v41 < v58;
              if (v41 < v58) {
                v40 = v58;
                v41 = v58;
              }
              v60 = vabds_f32(v57, v38);
              if (v59) {
                v48 = v43 + 6;
              }
              v42 = v43 + 7;
              v43 += 8;
              if (v41 >= v60) {
                v42 = v48;
              }
              else {
                v40 = v60;
                v41 = v60;
              }
            } while (v43 != (v6 & 0xFFFFFFFFFFFFFFF8LL));
          }
          else {
            v40 = 0x0.0p+0f;
            v41 = 0x0.0p+0f;
            v42 = 0;
            v43 = 0;
          }
          if ((v6 & 7) != 0) {
            v61 = v6 & 7;
            do {
              v62 = vabds_f32(*(float*)(v39 + 4 * v43), v38);
              if (v41 < v62) {
                v40 = v62;
                v41 = v62;
                v42 = v43;
              }
              ++v43;
              --v61;
            } while (v61 != 0);
          }
          goto LABEL_175;
        }
      }
      v35 = (float*)(v23 + 4 * v24);
      v36 = v6 & 7;
      do {
        {
          v37 = *v35++;
          __asm__ volatile("" ::"w"(v37));
        }
        v26 = v26 + 0x1.0000000000000p+0f;
        --v36;
        v25 = v25 + v37;
      } while (v36 != 0);
      goto LABEL_69;
    }
    v10 = v8 & 3;
    v11 = 0;
    v12 = (v8 - 1) & 0x1FFFFFFFFFFFFFFFLL;
    {
      v13 = &v106[v8];
      __asm__ volatile("" ::"r"(v13));
    }
    if (v6 != 1) {
      v14 = 0x0.0p+0f;
      v15 = 0x0.0p+0f;
      while (1) {
        v16 = v106;
        if ((v8 & 3) != 0) {
          v17 = v8 & 3;
          while (*v16 != v11) {
            ++v16;
            if (--v17 == 0) {
              goto LABEL_13;
            }
          }
        LABEL_24:
          if (v16 != v13) {
          LABEL_25:
            v19 = v11 | 1;
            v20 = v106;
            if ((v8 & 3) != 0) {
              goto LABEL_29;
            }
            goto LABEL_32;
          }
        }
        else {
        LABEL_13:
          if (v12 >= 3) {
            v16 += 2;
            while (1) {
              if (*(v16 - 2) == v11) {
                if (v16 - 2 != v13) {
                  goto LABEL_25;
                }
                goto LABEL_28;
              }
              if (*(v16 - 1) == v11) {
                --v16;
                goto LABEL_24;
              }
              if (*v16 == v11) {
                goto LABEL_24;
              }
              if (v16[1] == v11) {
                break;
              }
              v18 = v16 + 2;
              v16 += 4;
              if (v18 == v13) {
                goto LABEL_28;
              }
            }
            if (v16 + 1 != v13) {
              goto LABEL_25;
            }
          }
        }
      LABEL_28:
        v15 = v15 + 0x1.0000000000000p+0f;
        {
          v14 = v14 + *(float*)(*v5 + 4 * v11);
          __asm__ volatile("" ::"w"(v14));
        }
        v19 = v11 | 1;
        v20 = v106;
        if ((v8 & 3) != 0) {
        LABEL_29:
          v21 = v8 & 3;
          while (*v20 != v19) {
            ++v20;
            if (--v21 == 0) {
              goto LABEL_32;
            }
          }
        LABEL_43:
          if (v20 != v13) {
            goto LABEL_8;
          }
          goto LABEL_7;
        }
      LABEL_32:
        if (v12 >= 3) {
          v20 += 2;
          while (1) {
            if (*(v20 - 2) == v19) {
              if (v20 - 2 != v13) {
                goto LABEL_8;
              }
              goto LABEL_7;
            }
            if (*(v20 - 1) == v19) {
              --v20;
              goto LABEL_43;
            }
            if (*v20 == v19) {
              goto LABEL_43;
            }
            if (v20[1] == v19) {
              break;
            }
            v22 = v20 + 2;
            v20 += 4;
            if (v22 == v13) {
              goto LABEL_7;
            }
          }
          if (v20 + 1 != v13) {
            goto LABEL_8;
          }
        }
      LABEL_7:
        v15 = v15 + 0x1.0000000000000p+0f;
        {
          v14 = v14 + *(float*)(*v5 + 4 * v19);
          __asm__ volatile("" ::"w"(v14));
        }
      LABEL_8:
        v11 += 2;
        if (v11 == v7) {
          goto LABEL_51;
        }
      }
    }
    v14 = 0x0.0p+0f;
    v15 = 0x0.0p+0f;
  LABEL_51:
    if ((v6 & 1) == 0) {
      goto LABEL_112;
    }
    v27 = v106;
    if ((v8 & 3) != 0) {
      v28 = v8 & 3;
      while (*v27 != v11) {
        ++v27;
        if (--v28 == 0) {
          goto LABEL_56;
        }
      }
    LABEL_110:
      if (v27 != v13) {
        goto LABEL_112;
      }
    }
    else {
    LABEL_56:
      if (v12 >= 3) {
        v27 += 2;
        while (1) {
          if (*(v27 - 2) == v11) {
            if (v27 - 2 != v13) {
              goto LABEL_112;
            }
            goto LABEL_111;
          }
          if (*(v27 - 1) == v11) {
            --v27;
            goto LABEL_110;
          }
          if (*v27 == v11) {
            goto LABEL_110;
          }
          if (v27[1] == v11) {
            break;
          }
          v29 = v27 + 2;
          v27 += 4;
          if (v29 == v13) {
            goto LABEL_111;
          }
        }
        if (v27 + 1 != v13) {
          goto LABEL_112;
        }
      }
    }
  LABEL_111:
    v15 = v15 + 0x1.0000000000000p+0f;
    {
      v14 = v14 + *(float*)(*v5 + 4 * v11);
      __asm__ volatile("" ::"w"(v14));
    }
  LABEL_112:
    v63 = v14 / v15;
    v42 = 0;
    v64 = 0;
    if (v6 != 1) {
      v40 = 0x0.0p+0f;
      while (1) {
        v66 = v106;
        if ((v8 & 3) == 0) {
          break;
        }
        v67 = v8 & 3;
        while (*v66 != v64) {
          ++v66;
          if (--v67 == 0) {
            goto LABEL_121;
          }
        }
      LABEL_132:
        if (v66 == v13) {
          goto LABEL_133;
        }
      LABEL_135:
        v70 = v64 | 1;
        v65 = v106;
        if ((v8 & 3) != 0) {
          v71 = v8 & 3;
          while (*v65 != v70) {
            ++v65;
            if (--v71 == 0) {
              goto LABEL_139;
            }
          }
        }
        else {
        LABEL_139:
          if (v12 < 3) {
          LABEL_140:
            v72 = vabds_f32(*(float*)(*v5 + 4 * v70), v63);
            if (v40 < v72) {
              v40 = v72;
              v42 = v64 | 1;
            }
            goto LABEL_116;
          }
          v65 += 2;
          while (1) {
            if (*(v65 - 2) == v70) {
              v65 -= 2;
              goto LABEL_115;
            }
            if (*(v65 - 1) == v70) {
              --v65;
              goto LABEL_115;
            }
            if (*v65 == v70) {
              goto LABEL_115;
            }
            if (v65[1] == v70) {
              break;
            }
            v73 = v65 + 2;
            v65 += 4;
            if (v73 == v13) {
              goto LABEL_140;
            }
          }
          ++v65;
        }
      LABEL_115:
        if (v65 == v13) {
          goto LABEL_140;
        }
      LABEL_116:
        v64 += 2;
        if (v64 == v7) {
          goto LABEL_154;
        }
      }
    LABEL_121:
      if (v12 >= 3) {
        v66 += 2;
        while (1) {
          if (*(v66 - 2) == v64) {
            if (v66 - 2 != v13) {
              goto LABEL_135;
            }
            goto LABEL_133;
          }
          if (*(v66 - 1) == v64) {
            --v66;
            goto LABEL_132;
          }
          if (*v66 == v64) {
            goto LABEL_132;
          }
          if (v66[1] == v64) {
            break;
          }
          v68 = v66 + 2;
          v66 += 4;
          if (v68 == v13) {
            goto LABEL_133;
          }
        }
        if (v66 + 1 != v13) {
          goto LABEL_135;
        }
      }
    LABEL_133:
      v69 = vabds_f32(*(float*)(*v5 + 4 * v64), v63);
      if (v40 < v69) {
        v40 = v69;
        v42 = v64;
      }
      goto LABEL_135;
    }
    v40 = 0x0.0p+0f;
  LABEL_154:
    if ((v6 & 1) != 0) {
      if ((v8 & 3) != 0) {
        v74 = v106;
        while (*v74 != v64) {
          ++v74;
          if (--v10 == 0) {
            if (v12 >= 3) {
              goto LABEL_162;
            }
            goto LABEL_173;
          }
        }
      LABEL_172:
        if (v74 != v13) {
          goto LABEL_175;
        }
      }
      else {
        v74 = v106;
        if (v12 >= 3) {
        LABEL_162:
          v74 += 2;
          while (1) {
            if (*(v74 - 2) == v64) {
              if (v74 - 2 != v13) {
                goto LABEL_175;
              }
              goto LABEL_173;
            }
            if (*(v74 - 1) == v64) {
              --v74;
              goto LABEL_172;
            }
            if (*v74 == v64) {
              goto LABEL_172;
            }
            if (v74[1] == v64) {
              break;
            }
            v75 = v74 + 2;
            v74 += 4;
            if (v75 == v13) {
              goto LABEL_173;
            }
          }
          if (v74 + 1 != v13) {
            goto LABEL_175;
          }
        }
      }
    LABEL_173:
      v76 = vabds_f32(*(float*)(*v5 + 4 * v64), v63);
      if (v40 < v76) {
        v40 = v76;
        v42 = v64;
      }
    }
  LABEL_175:
    if (v40 <= v9) {
      goto LABEL_182;
    }
    v106[v8++] = v42;
  } while (v8 != v6);
  v8 = v6;
LABEL_182:
  v77 = v6 - v8;
  if (v6 - v8 >= 3) {
    if (v8 != 0) {
      v78 = 0x0.0p+0f;
      v79 = 0;
      v80 = 8 * v8 - 8;
      {
        v81 = &v106[v8];
        __asm__ volatile("" ::"r"(v81));
      }
      v82 = 0x0.0p+0f;
      while (1) {
        v83 = v106;
        if ((v80 & 0x18) == 0x18) {
        LABEL_192:
          if (v80 >= 0x18) {
            v83 += 2;
            while (1) {
              if (*(v83 - 2) == v79) {
                if (v83 - 2 != v81) {
                  goto LABEL_186;
                }
                goto LABEL_185;
              }
              if (*(v83 - 1) == v79) {
                --v83;
                goto LABEL_203;
              }
              if (*v83 == v79) {
                goto LABEL_203;
              }
              if (v83[1] == v79) {
                break;
              }
              v86 = v83 + 2;
              v83 += 4;
              if (v86 == v81) {
                goto LABEL_185;
              }
            }
            if (v83 + 1 != v81) {
              goto LABEL_186;
            }
          }
        }
        else {
          v84 = -(__int64)(((unsigned __int8)((unsigned int)v80 >> 3) + 1) & 3);
          while (*v83 != v79) {
            ++v83;
            if (__CFADD__(v84++, 1)) {
              goto LABEL_192;
            }
          }
        LABEL_203:
          if (v83 != v81) {
            goto LABEL_186;
          }
        }
      LABEL_185:
        v82 = v82 + 0x1.0000000000000p+0f;
        {
          v78 = v78 + *(float*)(*v5 + 4 * v79);
          __asm__ volatile("" ::"w"(v78));
        }
      LABEL_186:
        if (++v79 == v6) {
          goto LABEL_215;
        }
      }
    }
    {
      v87 = *v5;
      __asm__ volatile("" ::"r"(v87));
    }
    v88 = v6 & 7;
    if (v6 >= 8) {
      v78 = 0x0.0p+0f;
      v90 = (float*)(v87 + 16);
      v91 = 0;
      v82 = 0x0.0p+0f;
      do {
        v91 -= 8;
        v82 =
            (float)((float)((float)((float)((float)((float)((float)(v82 +
                                                                    0x1.0000000000000p+0f) +
                                                            0x1.0000000000000p+0f) +
                                                    0x1.0000000000000p+0f) +
                                            0x1.0000000000000p+0f) +
                                    0x1.0000000000000p+0f) +
                            0x1.0000000000000p+0f) +
                    0x1.0000000000000p+0f) +
            0x1.0000000000000p+0f;
        v92 = (float)((float)((float)((float)((float)(v78 + *(v90 - 4)) +
                                              *(v90 - 3)) +
                                      *(v90 - 2)) +
                              *(v90 - 1)) +
                      *v90) +
              v90[1];
        {
          v93 = v90[2];
          __asm__ volatile("" ::"w"(v93));
        }
        {
          v94 = v90[3];
          __asm__ volatile("" ::"w"(v94));
        }
        v90 += 8;
        v78 = (float)(v92 + v93) + v94;
      } while (-(__int64)(v6 & 0xFFFFFFFFFFFFFFF8LL) != v91);
      v89 = -v91;
    }
    else {
      v89 = 0;
      v78 = 0x0.0p+0f;
      v82 = 0x0.0p+0f;
    }
    if ((v6 & 7) != 0) {
      v95 = (float*)(v87 + 4 * v89);
      do {
        {
          v96 = *v95++;
          __asm__ volatile("" ::"w"(v96));
        }
        v82 = v82 + 0x1.0000000000000p+0f;
        --v88;
        v78 = v78 + v96;
      } while (v88 != 0);
    }
  LABEL_215:
    *a2 = v78 / v82;
    if (a3 != nullptr) {
      *a3 = v77;
    }
    v97 = (_DWORD)v77 << 10;
    if ((int)((_DWORD)v77 << 10) > 5120) {
      v102 = v97 >> 11;
      v103 = v97 > 0x3C00;
      v104 = ((unsigned int)(46080 * v77 - 276480) >> 10) + 1024;
      if (v103) {
        v104 = 1434;
      }
      if (v102 >= 3) {
        v99 = v104;
      }
      else {
        v99 = 1024;
      }
    }
    else {
      {
        v98 = *((_DWORD*)this_ + 13) << 10;
        __asm__ volatile("" ::"r"(v98));
      }
      v99 = 102;
      v100 = __OFSUB__(v98, v97);
      v101 = v98 - v97;
      if ((v101 < 0) ^ v100 | (v101 == 0)) {
        v99 = 102 - ((int)(0xC7C00u / (5120 - v98) * v101) >> 10);
      }
    }
    v105 = ((signed __int32)((_DWORD)v77 << 20) /
            (signed __int32)((_DWORD)v6 << 10) * v99) >>
           10;
    if (v105 >= 1024) {
      v105 = 1024;
    }
    return vcvts_n_f32_s32(v105, 0xAu);
  }
  return result;
}

__int64 peak_detector_759340(void* this_, float a2, int a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v7;
  float v8;
  unsigned __int64 v9;
  __int64 v10;
  float v11;
  unsigned __int64 v12;
  float v13;
  _DWORD* v14;
  _QWORD* v15;
  __int64 v16;

  result = PulseSignal_UpdateProgress_plt();
  {
    v7 = *((_QWORD*)this_ + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  if (*(_QWORD*)(v7 + 8) == *(_QWORD*)(v7 + 16)) {
    *((float*)this_ + 33) = a2 + (float)(*((float*)this_ + 33) - **(float**)v7);
    v8 = 0x0.0p+0f;
    {
      v9 = *(_QWORD*)(v7 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 < 2) {
      goto LABEL_13;
    }
  }
  else {
    *((float*)this_ + 33) = a2 + *((float*)this_ + 33);
    v8 = 0x0.0p+0f;
    {
      v9 = *(_QWORD*)(v7 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 < 2) {
      goto LABEL_13;
    }
  }
  v10 = 0;
  do {
    if (v9 == *(_QWORD*)(v7 + 16)) {
      *(_DWORD*)(*(_QWORD*)v7 + 4 * v10) =
          *(_DWORD*)(*(_QWORD*)v7 + 4 * v10 + 4);
      {
        v14 = (_DWORD*)(**((_QWORD**)this_ + 9) + 4 * v10);
        __asm__ volatile("" ::"r"(v14));
      }
      *(_DWORD*)v14 = v14[1];
      {
        v7 = *((_QWORD*)this_ + 8);
        __asm__ volatile("" ::"r"(v7));
      }
    }
    {
      v9 = *(_QWORD*)(v7 + 8);
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v11 = *(float*)(*(_QWORD*)v7 + 4 * v10);
      __asm__ volatile("" ::"w"(v11));
    }
    v12 = v10 + 2;
    ++v10;
    if (v11 >= v8) {
      v8 = v11;
    }
    v13 = fabsf(v11);
    if (v13 >= v8) {
      v8 = v13;
    }
  } while (v12 < v9);
LABEL_13:
  if (v9 == *(_QWORD*)(v7 + 16)) {
    *(float*)(*(_QWORD*)v7 + 4 * v9 - 4) = a2;
    *(_DWORD*)(**((_QWORD**)this_ + 9) +
               4LL * *(_QWORD*)(*((_QWORD*)this_ + 9) + 8LL) - 4) = a3;
  }
  else {
    *(float*)(*(_QWORD*)v7 + 4 * v9) = a2;
    *(_QWORD*)(v7 + 8) = v9 + 1;
    {
      v15 = *((_QWORD**)this_ + 9);
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = v15[1];
      __asm__ volatile("" ::"r"(v16));
    }
    *(_DWORD*)(*v15 + 4 * v16) = a3;
    v15[1] = v16 + 1;
  }
  return result;
}

float peak_detector_75a770(void* this_)
{

#pragma clang fp contract(off)
  bool v1;
  float result;
  float v3;

  v1 = PulseSignal_GetPulse_plt((__int64)this_, (__int64)&v3, 0) <= 0x0.0p+0f;
  result = 0x0.0p+0f;
  if (!v1) {
    return v3;
  }
  return result;
}

#pragma GCC visibility pop
