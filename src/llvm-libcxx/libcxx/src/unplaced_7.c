#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 vfprintf_plt(_QWORD, _QWORD, _QWORD);
bool algorithm_7c9880(unsigned __int64*, unsigned __int64*);
bool algorithm_7cb660(float*, float*);
extern void (*SdkData_e86b68[37])();
float* SdkRoutine_7cb940(float*, float*, float*);
float* algorithm_7cae80(float*, float*);
unsigned __int64* SdkRoutine_7c9b60(unsigned __int64*, unsigned __int64*,
                                    unsigned __int64*);
unsigned __int64* algorithm_7ca6a0(unsigned __int64*, char*);
void abort_plt();
unsigned __int64* llvm_libcxx_libcxx_src_7c0940(unsigned __int64* result,
                                                unsigned __int64* a2,
                                                __int64 a3, __int64 a4,
                                                char a5);
float* llvm_libcxx_libcxx_src_7c0f80(float* result, float* a2, __int64 a3,
                                     __int64 a4, char a5);
void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7e5700(char* a1, ...);

unsigned __int64* llvm_libcxx_libcxx_src_7c0940(unsigned __int64* result,
                                                unsigned __int64* a2,
                                                __int64 a3, __int64 a4, char a5)
{
  unsigned __int64* v7;
  unsigned __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  bool v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64* v54;
  char v55;
  bool v56;
  bool v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64* v108;
  bool v110;
  __int64 v111;
  unsigned __int64* v112;
  unsigned __int64* v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;

  v53 = COERCE_AS(__typeof__(v53),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = result;
LABEL_2:
  v8 = v7;
LABEL_3:
  v9 = 1 - a4;
  while (1) {
    v10 = v9;
    v7 = v8;
    v11 = a2 - v8;
    if (v11 > 2) {
      switch (v11) {
      case 3LL: {
        v67 = v8[1];
        __asm__ volatile("" ::"r"(v67));
      }
        {
          v68 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v68));
        }
        if (v67 >= v68) {
          v69 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v69));
        }
        else {
          v69 = v8[1];
          __asm__ volatile("" ::"r"(v69));
        }
        if (v67 <= v68) {
          v67 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v67));
        }
        *(a2 - 1) = v67;
        v8[1] = v69;
        {
          v70 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v70));
        }
        if (v70 >= *v8) {
          v71 = *v8;
          __asm__ volatile("" ::"r"(v71));
        }
        else {
          v71 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v71));
        }
        if (v70 <= *v8) {
          v70 = *v8;
          __asm__ volatile("" ::"r"(v70));
        }
        *(a2 - 1) = v70;
        {
          v73 = *v8;
          __asm__ volatile("" ::"r"(v73));
        }
        {
          v72 = v8[1];
          __asm__ volatile("" ::"r"(v72));
        }
        if (v71 >= v72) {
          v73 = v8[1];
          __asm__ volatile("" ::"r"(v73));
        }
        if (v71 > v72) {
          v72 = v71;
        }
        *v8 = v73;
        v8[1] = v72;
        return result;
      case 4LL: {
        v97 = v8[1];
        __asm__ volatile("" ::"r"(v97));
      }
        {
          v96 = v8[2];
          __asm__ volatile("" ::"r"(v96));
        }
        if (*v8 >= v96) {
          v98 = v8[2];
          __asm__ volatile("" ::"r"(v98));
        }
        else {
          v98 = *v8;
          __asm__ volatile("" ::"r"(v98));
        }
        if (*v8 > v96) {
          v96 = *v8;
          __asm__ volatile("" ::"r"(v96));
        }
        v8[2] = v96;
        *v8 = v98;
        {
          v99 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v99));
        }
        if (v97 >= v99) {
          v100 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v100));
        }
        else {
          v100 = v97;
        }
        if (v97 > v99) {
          v99 = v97;
        }
        *(a2 - 1) = v99;
        {
          v101 = *v8;
          __asm__ volatile("" ::"r"(v101));
        }
        if (*v8 >= v100) {
          v102 = v100;
        }
        else {
          v102 = *v8;
          __asm__ volatile("" ::"r"(v102));
        }
        if (*v8 <= v100) {
          v101 = v100;
        }
        *v8 = v102;
        v8[1] = v101;
        {
          v103 = v8[2];
          __asm__ volatile("" ::"r"(v103));
        }
        {
          v104 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v104));
        }
        if (v103 >= v104) {
          v105 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v105));
        }
        else {
          v105 = v8[2];
          __asm__ volatile("" ::"r"(v105));
        }
        if (v103 <= v104) {
          v103 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v103));
        }
        *(a2 - 1) = v103;
        {
          v106 = v8[1];
          __asm__ volatile("" ::"r"(v106));
        }
        if (v106 >= v105) {
          v107 = v105;
        }
        else {
          v107 = v8[1];
          __asm__ volatile("" ::"r"(v107));
        }
        if (v106 <= v105) {
          v106 = v105;
        }
        v8[1] = v107;
        v8[2] = v106;
        return result;
      case 5LL: {
        v74 = *v8;
        __asm__ volatile("" ::"r"(v74));
      }
        {
          v75 = v8[1];
          __asm__ volatile("" ::"r"(v75));
        }
        if (*v8 >= v75) {
          v76 = v8[1];
          __asm__ volatile("" ::"r"(v76));
        }
        else {
          v76 = *v8;
          __asm__ volatile("" ::"r"(v76));
        }
        if (*v8 <= v75) {
          v74 = v8[1];
          __asm__ volatile("" ::"r"(v74));
        }
        *v8 = v76;
        v8[1] = v74;
        {
          v77 = v8[3];
          __asm__ volatile("" ::"r"(v77));
        }
        {
          v78 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v78));
        }
        if (v77 >= v78) {
          v79 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v79));
        }
        else {
          v79 = v8[3];
          __asm__ volatile("" ::"r"(v79));
        }
        if (v77 <= v78) {
          v77 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v77));
        }
        *(a2 - 1) = v77;
        v8[3] = v79;
        {
          v80 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v80));
        }
        {
          v81 = v8[2];
          __asm__ volatile("" ::"r"(v81));
        }
        if (v80 >= v81) {
          v82 = v8[2];
          __asm__ volatile("" ::"r"(v82));
        }
        else {
          v82 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v82));
        }
        if (v80 <= v81) {
          v80 = v8[2];
          __asm__ volatile("" ::"r"(v80));
        }
        *(a2 - 1) = v80;
        {
          v84 = v8[2];
          __asm__ volatile("" ::"r"(v84));
        }
        {
          v83 = v8[3];
          __asm__ volatile("" ::"r"(v83));
        }
        {
          v85 = v8[1];
          __asm__ volatile("" ::"r"(v85));
        }
        if (v82 >= v83) {
          v84 = v8[3];
          __asm__ volatile("" ::"r"(v84));
        }
        if (v82 > v83) {
          v83 = v82;
        }
        v8[2] = v84;
        v8[3] = v83;
        {
          v86 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v86));
        }
        if (v85 >= v86) {
          v87 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v87));
        }
        else {
          v87 = v85;
        }
        if (v85 > v86) {
          v86 = v85;
        }
        *(a2 - 1) = v86;
        {
          v88 = *v8;
          __asm__ volatile("" ::"r"(v88));
        }
        {
          v90 = v8[2];
          __asm__ volatile("" ::"r"(v90));
        }
        {
          v89 = v8[3];
          __asm__ volatile("" ::"r"(v89));
        }
        if (v89 >= *v8) {
          v91 = *v8;
          __asm__ volatile("" ::"r"(v91));
        }
        else {
          v91 = v8[3];
          __asm__ volatile("" ::"r"(v91));
        }
        if (v89 <= *v8) {
          v89 = *v8;
          __asm__ volatile("" ::"r"(v89));
        }
        if (v91 >= v90) {
          v88 = v8[2];
          __asm__ volatile("" ::"r"(v88));
        }
        if (v91 > v90) {
          v90 = v91;
        }
        if (v89 >= v87) {
          v92 = v87;
        }
        else {
          v92 = v89;
        }
        if (v89 <= v87) {
          v89 = v87;
        }
        if (v92 >= v90) {
          v87 = v90;
        }
        *v8 = v88;
        v8[1] = v87;
        if (v92 <= v90) {
          v93 = v90;
        }
        else {
          v93 = v92;
        }
        v8[2] = v93;
        v8[3] = v89;
        return result;
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        {
          v94 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v94));
        }
        {
          v95 = *v8;
          __asm__ volatile("" ::"r"(v95));
        }
        if (v94 < *v8) {
          *v8 = v94;
          *(a2 - 1) = v95;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (v9 == 1) {
      if (v8 != a2) {
        return SdkRoutine_7c9b60(v8, a2, a2);
      }
      return result;
    }
    {
      v12 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = &v8[(unsigned __int64)v11 >> 1];
      __asm__ volatile("" ::"r"(v13));
    }
    if ((unsigned __int64)v11 < 0x81) {
      {
        v45 = *v8;
        __asm__ volatile("" ::"r"(v45));
      }
      if (*v8 >= v12) {
        v46 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v46));
      }
      else {
        v46 = *v8;
        __asm__ volatile("" ::"r"(v46));
      }
      if (*v8 <= v12) {
        v45 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v45));
      }
      *(a2 - 1) = v45;
      *v8 = v46;
      {
        v47 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v47));
      }
      if (v47 >= *v13) {
        v48 = *v13;
        __asm__ volatile("" ::"r"(v48));
      }
      else {
        v48 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v48));
      }
      if (v47 <= *v13) {
        v47 = *v13;
        __asm__ volatile("" ::"r"(v47));
      }
      *(a2 - 1) = v47;
      {
        v49 = *v8;
        __asm__ volatile("" ::"r"(v49));
      }
      v50 = v48 >= *v8;
      if (v48 < *v8) {
        v49 = *v13;
        __asm__ volatile("" ::"r"(v49));
      }
      *v13 = v49;
      {
        v51 = *v8;
        __asm__ volatile("" ::"r"(v51));
      }
      if (v50) {
        v51 = v48;
      }
      *v8 = v51;
      if ((a5 & 1) != 0) {
        goto LABEL_93;
      }
    }
    else {
      {
        v14 = *v13;
        __asm__ volatile("" ::"r"(v14));
      }
      if (*v13 >= v12) {
        v15 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v15));
      }
      else {
        v15 = *v13;
        __asm__ volatile("" ::"r"(v15));
      }
      if (*v13 <= v12) {
        v14 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v14));
      }
      *(a2 - 1) = v14;
      *v13 = v15;
      {
        v16 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v16));
      }
      if (v16 >= *v8) {
        v17 = *v8;
        __asm__ volatile("" ::"r"(v17));
      }
      else {
        v17 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v17));
      }
      if (v16 <= *v8) {
        v16 = *v8;
        __asm__ volatile("" ::"r"(v16));
      }
      *(a2 - 1) = v16;
      {
        v18 = *v13;
        __asm__ volatile("" ::"r"(v18));
      }
      v19 = v17 >= *v13;
      if (v17 < *v13) {
        v18 = *v8;
        __asm__ volatile("" ::"r"(v18));
      }
      *v8 = v18;
      {
        v21 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v21));
      }
      {
        v20 = *v13;
        __asm__ volatile("" ::"r"(v20));
      }
      if (v19) {
        v20 = v17;
      }
      *v13 = v20;
      {
        v22 = *(a2 - 2);
        __asm__ volatile("" ::"r"(v22));
      }
      if (v21 >= v22) {
        v23 = *(a2 - 2);
        __asm__ volatile("" ::"r"(v23));
      }
      else {
        v23 = v21;
      }
      if (v21 > v22) {
        v22 = v21;
      }
      *(a2 - 2) = v22;
      *(v13 - 1) = v23;
      {
        v24 = *(a2 - 2);
        __asm__ volatile("" ::"r"(v24));
      }
      {
        v25 = v8[1];
        __asm__ volatile("" ::"r"(v25));
      }
      if (v24 >= v25) {
        v26 = v8[1];
        __asm__ volatile("" ::"r"(v26));
      }
      else {
        v26 = *(a2 - 2);
        __asm__ volatile("" ::"r"(v26));
      }
      if (v24 <= v25) {
        v24 = v8[1];
        __asm__ volatile("" ::"r"(v24));
      }
      *(a2 - 2) = v24;
      {
        v27 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v27));
      }
      v28 = v26 >= v27;
      if (v26 < v27) {
        v27 = v8[1];
        __asm__ volatile("" ::"r"(v27));
      }
      v8[1] = v27;
      {
        v29 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v29));
      }
      if (v28) {
        v29 = v26;
      }
      *(v13 - 1) = v29;
      {
        v30 = v13[1];
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v31 = *(a2 - 3);
        __asm__ volatile("" ::"r"(v31));
      }
      if (v30 >= v31) {
        v32 = *(a2 - 3);
        __asm__ volatile("" ::"r"(v32));
      }
      else {
        v32 = v13[1];
        __asm__ volatile("" ::"r"(v32));
      }
      if (v30 <= v31) {
        v30 = *(a2 - 3);
        __asm__ volatile("" ::"r"(v30));
      }
      *(a2 - 3) = v30;
      v13[1] = v32;
      {
        v33 = *(a2 - 3);
        __asm__ volatile("" ::"r"(v33));
      }
      {
        v34 = v8[2];
        __asm__ volatile("" ::"r"(v34));
      }
      if (v33 >= v34) {
        v35 = v8[2];
        __asm__ volatile("" ::"r"(v35));
      }
      else {
        v35 = *(a2 - 3);
        __asm__ volatile("" ::"r"(v35));
      }
      if (v33 <= v34) {
        v33 = v8[2];
        __asm__ volatile("" ::"r"(v33));
      }
      *(a2 - 3) = v33;
      {
        v36 = v13[1];
        __asm__ volatile("" ::"r"(v36));
      }
      v37 = v35 >= v36;
      if (v35 < v36) {
        v36 = v8[2];
        __asm__ volatile("" ::"r"(v36));
      }
      v8[2] = v36;
      {
        v39 = *v13;
        __asm__ volatile("" ::"r"(v39));
      }
      {
        v38 = v13[1];
        __asm__ volatile("" ::"r"(v38));
      }
      if (v37) {
        v38 = v35;
      }
      {
        v40 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v40));
      }
      if (v39 >= v38) {
        v41 = v38;
      }
      else {
        v41 = *v13;
        __asm__ volatile("" ::"r"(v41));
      }
      if (v39 > v38) {
        v38 = *v13;
        __asm__ volatile("" ::"r"(v38));
      }
      if (v38 >= v40) {
        v42 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v42));
      }
      else {
        v42 = v38;
      }
      if (v38 <= v40) {
        v38 = *(v13 - 1);
        __asm__ volatile("" ::"r"(v38));
      }
      v13[1] = v38;
      if (v40 >= v41) {
        v43 = v41;
      }
      else {
        v43 = v40;
      }
      if (v40 < v41) {
        v42 = v41;
      }
      *(v13 - 1) = v43;
      *v13 = v42;
      {
        v44 = *v8;
        __asm__ volatile("" ::"r"(v44));
      }
      *v8 = v42;
      *v13 = v44;
      if ((a5 & 1) != 0) {
        goto LABEL_93;
      }
    }
    {
      v52 = *v8;
      __asm__ volatile("" ::"r"(v52));
    }
    if (*(v8 - 1) >= *v8) {
      if (v52 >= *(a2 - 1)) {
        v59 = (unsigned __int64)(v8 + 1);
        do {
          v8 = (unsigned __int64*)v59;
          if (v59 >= (unsigned __int64)a2) {
            break;
          }
          v59 += 8LL;
        } while (v52 >= *v8);
      }
      else {
        do {
          {
            v58 = v8[1];
            __asm__ volatile("" ::"r"(v58));
          }
          ++v8;
        } while (v52 >= v58);
      }
      v60 = a2;
      if (v8 < a2) {
        v60 = a2;
        do {
          v61 = *--v60;
        } while (v52 < v61);
      }
      if (v8 < v60) {
        {
          v62 = *v8;
          __asm__ volatile("" ::"r"(v62));
        }
        {
          v63 = *v60;
          __asm__ volatile("" ::"r"(v63));
        }
        do {
          *v8 = v63;
          *v60 = v62;
          do {
            {
              v64 = v8[1];
              __asm__ volatile("" ::"r"(v64));
            }
            ++v8;
            v62 = v64;
          } while (v52 >= v64);
          do {
            v65 = *--v60;
            v63 = v65;
          } while (v52 < v65);
        } while (v8 < v60);
      }
      v66 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v66;
      }
      *v66 = v52;
      goto LABEL_115;
    }
  LABEL_93:
    v54 = algorithm_7ca6a0(v8, (char*)a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v55 & 1) == 0) {
      goto LABEL_96;
    }
    v56 = algorithm_7c9880(v8, v54),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v54 + 1;
    v57 = v56;
    result = (unsigned __int64*)algorithm_7c9880(v54 + 1, a2),
    v53 = COERCE_AS(__typeof__(v53),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v10;
      a2 = v54;
      if (v57) {
        return result;
      }
      goto LABEL_2;
    }
    v9 = v10 + 1;
    if (!v57) {
    LABEL_96:
      result = llvm_libcxx_libcxx_src_7c0940(v7, v54, v53, -v10, a5 & 1),
      v53 = COERCE_AS(__typeof__(v53),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v54 + 1;
    LABEL_115:
      a5 = 0;
      a4 = -v10;
      goto LABEL_3;
    }
  }
  v108 = v8 + 1;
  v110 = v8 == a2 || v108 == a2;
  if ((a5 & 1) != 0) {
    if (!v110) {
      v111 = 0;
      v112 = v8;
      do {
        {
          v115 = *v112;
          __asm__ volatile("" ::"r"(v115));
        }
        {
          v114 = v112[1];
          __asm__ volatile("" ::"r"(v114));
        }
        v112 = v108;
        if (v114 < v115) {
          v116 = v111;
          do {
            *(unsigned __int64*)((char*)v8 + v116 + 8) = v115;
            if (v116 == 0) {
              v113 = v8;
              goto LABEL_215;
            }
            {
              v115 = *(unsigned __int64*)((char*)v8 + v116 - 8);
              __asm__ volatile("" ::"r"(v115));
            }
            v116 -= 8;
          } while (v114 < v115);
          v113 = (unsigned __int64*)((char*)v8 + v116 + 8);
        LABEL_215:
          *v113 = v114;
        }
        v108 = v112 + 1;
        v111 += 8;
      } while (v112 + 1 != a2);
    }
  }
  else if (!v110) {
    do {
      {
        v118 = *v7;
        __asm__ volatile("" ::"r"(v118));
      }
      {
        v117 = v7[1];
        __asm__ volatile("" ::"r"(v117));
      }
      v7 = v108;
      if (v117 < v118) {
        do {
          *v108 = v118;
          {
            v118 = *(v108 - 2);
            __asm__ volatile("" ::"r"(v118));
          }
          --v108;
        } while (v117 < v118);
        *v108 = v117;
      }
      v108 = v7 + 1;
    } while (v7 + 1 != a2);
  }
  return result;
}

float* llvm_libcxx_libcxx_src_7c0f80(float* result, float* a2, __int64 a3,
                                     __int64 a4, char a5)
{

#pragma clang fp contract(off)
  float* v7;
  float* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  bool v27;
  float v28;
  float v29;
  float v30;
  int v31;
  float v32;
  float v33;
  float v34;
  float v35;
  bool v36;
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
  bool v49;
  float v50;
  float v51;
  __int64 v52;
  float* v53;
  char v54;
  bool v55;
  bool v56;
  float v57;
  unsigned __int64 v58;
  float* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float* v65;
  float v66;
  float v67;
  int v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  int v78;
  float v79;
  float v80;
  float v81;
  float v82;
  int v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float* v107;
  bool v109;
  __int64 v110;
  float* v111;
  float* v112;
  float v113;
  float v114;
  __int64 v115;
  float v116;
  float v117;
  float* v118;

  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = result;
LABEL_2:
  v8 = v7;
LABEL_3:
  v9 = 1 - a4;
  while (1) {
    v10 = v9;
    v7 = v8;
    v11 = a2 - v8;
    if (v11 > 2) {
      switch (v11) {
      case 3LL: {
        v66 = v8[1];
        __asm__ volatile("" ::"w"(v66));
      }
        {
          v67 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v67));
        }
        if (v66 < v67) {
          v68 = *((_DWORD*)v8 + 1);
          __asm__ volatile("" ::"r"(v68));
        }
        else {
          v68 = *((_DWORD*)a2 - 1);
          __asm__ volatile("" ::"r"(v68));
        }
        if (v66 < v67) {
          v66 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v66));
        }
        *(a2 - 1) = v66;
        *((_DWORD*)v8 + 1) = v68;
        {
          v69 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v69));
        }
        if (v69 < *v8) {
          v70 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v70));
        }
        else {
          v70 = *v8;
          __asm__ volatile("" ::"w"(v70));
        }
        if (v69 < *v8) {
          v69 = *v8;
          __asm__ volatile("" ::"w"(v69));
        }
        *(a2 - 1) = v69;
        {
          v72 = *v8;
          __asm__ volatile("" ::"w"(v72));
        }
        {
          v71 = v8[1];
          __asm__ volatile("" ::"w"(v71));
        }
        if (v70 >= v71) {
          {
            v72 = v8[1];
            __asm__ volatile("" ::"w"(v72));
          }
          v71 = v70;
        }
        *v8 = v72;
        v8[1] = v71;
        return result;
      case 4LL: {
        v96 = v8[1];
        __asm__ volatile("" ::"w"(v96));
      }
        {
          v95 = v8[2];
          __asm__ volatile("" ::"w"(v95));
        }
        if (*v8 < v95) {
          v97 = *v8;
          __asm__ volatile("" ::"w"(v97));
        }
        else {
          v97 = v8[2];
          __asm__ volatile("" ::"w"(v97));
        }
        if (*v8 >= v95) {
          v95 = *v8;
          __asm__ volatile("" ::"w"(v95));
        }
        v8[2] = v95;
        *v8 = v97;
        {
          v98 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v98));
        }
        if (v96 < v98) {
          v99 = v96;
        }
        else {
          v99 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v99));
        }
        if (v96 >= v98) {
          v98 = v96;
        }
        *(a2 - 1) = v98;
        {
          v100 = *v8;
          __asm__ volatile("" ::"w"(v100));
        }
        if (*v8 < v99) {
          v101 = *v8;
          __asm__ volatile("" ::"w"(v101));
        }
        else {
          v101 = v99;
        }
        if (*v8 < v99) {
          v100 = v99;
        }
        *v8 = v101;
        v8[1] = v100;
        {
          v102 = v8[2];
          __asm__ volatile("" ::"w"(v102));
        }
        {
          v103 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v103));
        }
        if (v102 < v103) {
          v104 = v8[2];
          __asm__ volatile("" ::"w"(v104));
        }
        else {
          v104 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v104));
        }
        if (v102 < v103) {
          v102 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v102));
        }
        *(a2 - 1) = v102;
        {
          v105 = v8[1];
          __asm__ volatile("" ::"w"(v105));
        }
        if (v105 < v104) {
          v106 = v8[1];
          __asm__ volatile("" ::"w"(v106));
        }
        else {
          v106 = v104;
        }
        if (v105 < v104) {
          v105 = v104;
        }
        v8[1] = v106;
        v8[2] = v105;
        return result;
      case 5LL: {
        v73 = *v8;
        __asm__ volatile("" ::"w"(v73));
      }
        {
          v74 = v8[1];
          __asm__ volatile("" ::"w"(v74));
        }
        if (*v8 < v74) {
          v75 = *v8;
          __asm__ volatile("" ::"w"(v75));
        }
        else {
          v75 = v8[1];
          __asm__ volatile("" ::"w"(v75));
        }
        if (*v8 < v74) {
          v73 = v8[1];
          __asm__ volatile("" ::"w"(v73));
        }
        *v8 = v75;
        v8[1] = v73;
        {
          v76 = v8[3];
          __asm__ volatile("" ::"w"(v76));
        }
        {
          v77 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v77));
        }
        if (v76 < v77) {
          v78 = *((_DWORD*)v8 + 3);
          __asm__ volatile("" ::"r"(v78));
        }
        else {
          v78 = *((_DWORD*)a2 - 1);
          __asm__ volatile("" ::"r"(v78));
        }
        if (v76 < v77) {
          v76 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v76));
        }
        *(a2 - 1) = v76;
        *((_DWORD*)v8 + 3) = v78;
        {
          v79 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v79));
        }
        {
          v80 = v8[2];
          __asm__ volatile("" ::"w"(v80));
        }
        if (v79 < v80) {
          v81 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v81));
        }
        else {
          v81 = v8[2];
          __asm__ volatile("" ::"w"(v81));
        }
        if (v79 < v80) {
          v79 = v8[2];
          __asm__ volatile("" ::"w"(v79));
        }
        *(a2 - 1) = v79;
        {
          v83 = *((_DWORD*)v8 + 2);
          __asm__ volatile("" ::"r"(v83));
        }
        {
          v82 = v8[3];
          __asm__ volatile("" ::"w"(v82));
        }
        {
          v84 = v8[1];
          __asm__ volatile("" ::"w"(v84));
        }
        if (v81 >= v82) {
          {
            v83 = *((_DWORD*)v8 + 3);
            __asm__ volatile("" ::"r"(v83));
          }
          v82 = v81;
        }
        *((_DWORD*)v8 + 2) = v83;
        v8[3] = v82;
        {
          v85 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v85));
        }
        if (v84 < v85) {
          v86 = v84;
        }
        else {
          v86 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v86));
        }
        if (v84 >= v85) {
          v85 = v84;
        }
        *(a2 - 1) = v85;
        {
          v87 = *v8;
          __asm__ volatile("" ::"w"(v87));
        }
        {
          v89 = v8[2];
          __asm__ volatile("" ::"w"(v89));
        }
        {
          v88 = v8[3];
          __asm__ volatile("" ::"w"(v88));
        }
        if (v88 < *v8) {
          v90 = v8[3];
          __asm__ volatile("" ::"w"(v90));
        }
        else {
          v90 = *v8;
          __asm__ volatile("" ::"w"(v90));
        }
        if (v88 < *v8) {
          v88 = *v8;
          __asm__ volatile("" ::"w"(v88));
        }
        if (v90 >= v89) {
          {
            v87 = v8[2];
            __asm__ volatile("" ::"w"(v87));
          }
          v89 = v90;
        }
        if (v88 < v86) {
          v91 = v88;
        }
        else {
          v91 = v86;
        }
        if (v88 < v86) {
          v88 = v86;
        }
        if (v91 >= v89) {
          v86 = v89;
        }
        *v8 = v87;
        v8[1] = v86;
        if (v91 < v89) {
          v92 = v89;
        }
        else {
          v92 = v91;
        }
        v8[2] = v92;
        v8[3] = v88;
        return result;
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v11 < 2) {
        return result;
      }
      if (v11 == 2) {
        {
          v93 = *(a2 - 1);
          __asm__ volatile("" ::"w"(v93));
        }
        {
          v94 = *v8;
          __asm__ volatile("" ::"w"(v94));
        }
        if (v93 < *v8) {
          *v8 = v93;
          *(a2 - 1) = v94;
        }
        return result;
      }
    }
    if (v11 <= 23) {
      break;
    }
    if (v9 == 1) {
      if (v8 != a2) {
        return SdkRoutine_7cb940(v8, a2, a2);
      }
      return result;
    }
    {
      v12 = *(a2 - 1);
      __asm__ volatile("" ::"w"(v12));
    }
    {
      v13 = &v8[(unsigned __int64)v11 >> 1];
      __asm__ volatile("" ::"r"(v13));
    }
    if ((unsigned __int64)v11 < 0x81) {
      if (*v8 < v12) {
        v45 = *v8;
        __asm__ volatile("" ::"w"(v45));
      }
      else {
        v45 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v45));
      }
      if (*v8 >= v12) {
        v12 = *v8;
        __asm__ volatile("" ::"w"(v12));
      }
      *(a2 - 1) = v12;
      *v8 = v45;
      {
        v46 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v46));
      }
      if (v46 < *v13) {
        v47 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v47));
      }
      else {
        v47 = *v13;
        __asm__ volatile("" ::"w"(v47));
      }
      if (v46 < *v13) {
        v46 = *v13;
        __asm__ volatile("" ::"w"(v46));
      }
      *(a2 - 1) = v46;
      {
        v48 = *v8;
        __asm__ volatile("" ::"w"(v48));
      }
      v49 = v47 < *v8;
      if (v47 < *v8) {
        v48 = *v13;
        __asm__ volatile("" ::"w"(v48));
      }
      *v13 = v48;
      {
        v50 = *v8;
        __asm__ volatile("" ::"w"(v50));
      }
      if (!v49) {
        v50 = v47;
      }
      *v8 = v50;
      if ((a5 & 1) != 0) {
        goto LABEL_90;
      }
    }
    else {
      if (*v13 < v12) {
        v14 = *v13;
        __asm__ volatile("" ::"w"(v14));
      }
      else {
        v14 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v14));
      }
      if (*v13 >= v12) {
        v12 = *v13;
        __asm__ volatile("" ::"w"(v12));
      }
      *(a2 - 1) = v12;
      *v13 = v14;
      {
        v15 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v15));
      }
      if (v15 < *v8) {
        v16 = *(a2 - 1);
        __asm__ volatile("" ::"w"(v16));
      }
      else {
        v16 = *v8;
        __asm__ volatile("" ::"w"(v16));
      }
      if (v15 < *v8) {
        v15 = *v8;
        __asm__ volatile("" ::"w"(v15));
      }
      *(a2 - 1) = v15;
      {
        v17 = *v13;
        __asm__ volatile("" ::"w"(v17));
      }
      v18 = v16 < *v13;
      if (v16 < *v13) {
        v17 = *v8;
        __asm__ volatile("" ::"w"(v17));
      }
      *v8 = v17;
      {
        v20 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v20));
      }
      {
        v19 = *v13;
        __asm__ volatile("" ::"w"(v19));
      }
      if (!v18) {
        v19 = v16;
      }
      *v13 = v19;
      {
        v21 = *(a2 - 2);
        __asm__ volatile("" ::"w"(v21));
      }
      if (v20 < v21) {
        v22 = v20;
      }
      else {
        v22 = *(a2 - 2);
        __asm__ volatile("" ::"w"(v22));
      }
      if (v20 >= v21) {
        v21 = v20;
      }
      *(a2 - 2) = v21;
      *(v13 - 1) = v22;
      {
        v23 = *(a2 - 2);
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = v8[1];
        __asm__ volatile("" ::"w"(v24));
      }
      if (v23 < v24) {
        v25 = *(a2 - 2);
        __asm__ volatile("" ::"w"(v25));
      }
      else {
        v25 = v8[1];
        __asm__ volatile("" ::"w"(v25));
      }
      if (v23 < v24) {
        v23 = v8[1];
        __asm__ volatile("" ::"w"(v23));
      }
      *(a2 - 2) = v23;
      {
        v26 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v26));
      }
      v27 = v25 < v26;
      if (v25 < v26) {
        v26 = v8[1];
        __asm__ volatile("" ::"w"(v26));
      }
      v8[1] = v26;
      {
        v28 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v28));
      }
      if (!v27) {
        v28 = v25;
      }
      *(v13 - 1) = v28;
      {
        v29 = v13[1];
        __asm__ volatile("" ::"w"(v29));
      }
      {
        v30 = *(a2 - 3);
        __asm__ volatile("" ::"w"(v30));
      }
      if (v29 < v30) {
        v31 = *((_DWORD*)v13 + 1);
        __asm__ volatile("" ::"r"(v31));
      }
      else {
        v31 = *((_DWORD*)a2 - 3);
        __asm__ volatile("" ::"r"(v31));
      }
      if (v29 < v30) {
        v29 = *(a2 - 3);
        __asm__ volatile("" ::"w"(v29));
      }
      *(a2 - 3) = v29;
      *((_DWORD*)v13 + 1) = v31;
      {
        v32 = *(a2 - 3);
        __asm__ volatile("" ::"w"(v32));
      }
      {
        v33 = v8[2];
        __asm__ volatile("" ::"w"(v33));
      }
      if (v32 < v33) {
        v34 = *(a2 - 3);
        __asm__ volatile("" ::"w"(v34));
      }
      else {
        v34 = v8[2];
        __asm__ volatile("" ::"w"(v34));
      }
      if (v32 < v33) {
        v32 = v8[2];
        __asm__ volatile("" ::"w"(v32));
      }
      *(a2 - 3) = v32;
      {
        v35 = v13[1];
        __asm__ volatile("" ::"w"(v35));
      }
      v36 = v34 < v35;
      if (v34 < v35) {
        v35 = v8[2];
        __asm__ volatile("" ::"w"(v35));
      }
      v8[2] = v35;
      {
        v38 = *v13;
        __asm__ volatile("" ::"w"(v38));
      }
      {
        v37 = v13[1];
        __asm__ volatile("" ::"w"(v37));
      }
      if (!v36) {
        v37 = v34;
      }
      {
        v39 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v39));
      }
      if (v38 < v37) {
        v40 = *v13;
        __asm__ volatile("" ::"w"(v40));
      }
      else {
        v40 = v37;
      }
      if (v38 >= v37) {
        v37 = *v13;
        __asm__ volatile("" ::"w"(v37));
      }
      if (v37 < v39) {
        v41 = v37;
      }
      else {
        v41 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v41));
      }
      if (v37 < v39) {
        v42 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v42));
      }
      else {
        v42 = v37;
      }
      if (v41 < v40) {
        v43 = *(v13 - 1);
        __asm__ volatile("" ::"w"(v43));
      }
      else {
        v43 = v40;
      }
      if (v41 < v40) {
        v41 = v40;
      }
      *(v13 - 1) = v43;
      *v13 = v41;
      v13[1] = v42;
      {
        v44 = *v8;
        __asm__ volatile("" ::"w"(v44));
      }
      *v8 = v41;
      *v13 = v44;
      if ((a5 & 1) != 0) {
        goto LABEL_90;
      }
    }
    {
      v51 = *v8;
      __asm__ volatile("" ::"w"(v51));
    }
    if (*(v8 - 1) >= *v8) {
      if (v51 >= *(a2 - 1)) {
        v58 = (unsigned __int64)(v8 + 1);
        do {
          v8 = (float*)v58;
          if (v58 >= (unsigned __int64)a2) {
            break;
          }
          v58 += 4LL;
        } while (v51 >= *v8);
      }
      else {
        do {
          {
            v57 = v8[1];
            __asm__ volatile("" ::"w"(v57));
          }
          ++v8;
        } while (v51 >= v57);
      }
      v59 = a2;
      if (v8 < a2) {
        v59 = a2;
        do {
          v60 = *--v59;
        } while (v51 < v60);
      }
      if (v8 < v59) {
        {
          v61 = *v8;
          __asm__ volatile("" ::"w"(v61));
        }
        {
          v62 = *v59;
          __asm__ volatile("" ::"w"(v62));
        }
        do {
          *v8 = v62;
          *v59 = v61;
          do {
            {
              v63 = v8[1];
              __asm__ volatile("" ::"w"(v63));
            }
            ++v8;
            v61 = v63;
          } while (v51 >= v63);
          do {
            v64 = *--v59;
            v62 = v64;
          } while (v51 < v64);
        } while (v8 < v59);
      }
      v65 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v65;
      }
      *v65 = v51;
      goto LABEL_112;
    }
  LABEL_90:
    v53 = algorithm_7cae80(v8, a2),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v54 & 1) == 0) {
      goto LABEL_93;
    }
    v55 = algorithm_7cb660(v8, v53),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v53 + 1;
    v56 = v55;
    result = (float*)algorithm_7cb660(v53 + 1, a2),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v54 = COERCE_AS(__typeof__(v54),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v10;
      a2 = v53;
      if (v56) {
        return result;
      }
      goto LABEL_2;
    }
    v9 = v10 + 1;
    if (!v56) {
    LABEL_93:
      result = llvm_libcxx_libcxx_src_7c0f80(v7, v53, v52, -v10, a5 & 1),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v53 + 1;
    LABEL_112:
      a5 = 0;
      a4 = -v10;
      goto LABEL_3;
    }
  }
  v107 = v8 + 1;
  v109 = v8 == a2 || v107 == a2;
  if ((a5 & 1) != 0) {
    if (!v109) {
      v110 = 0;
      v111 = v8;
      do {
        {
          v114 = *v111;
          __asm__ volatile("" ::"w"(v114));
        }
        {
          v113 = v111[1];
          __asm__ volatile("" ::"w"(v113));
        }
        v111 = v107;
        if (v113 < v114) {
          v115 = v110;
          do {
            *(float*)((char*)v8 + v115 + 4) = v114;
            if (v115 == 0) {
              v112 = v8;
              goto LABEL_206;
            }
            {
              v114 = *(float*)((char*)v8 + v115 - 4);
              __asm__ volatile("" ::"w"(v114));
            }
            v115 -= 4;
          } while (v113 < v114);
          v112 = (float*)((char*)v8 + v115 + 4);
        LABEL_206:
          *v112 = v113;
        }
        v107 = v111 + 1;
        v110 += 4;
      } while (v111 + 1 != a2);
    }
  }
  else if (!v109) {
    do {
      {
        v117 = *v7;
        __asm__ volatile("" ::"w"(v117));
      }
      {
        v116 = v7[1];
        __asm__ volatile("" ::"w"(v116));
      }
      v7 = v107;
      if (v116 < v117) {
        v118 = v107;
        do {
          *v118 = v117;
          {
            v117 = *(v118 - 2);
            __asm__ volatile("" ::"w"(v117));
          }
          --v118;
        } while (v116 < v117);
        *v118 = v116;
      }
      ++v107;
    } while (v7 + 1 != a2);
  }
  return result;
}

void __attribute__((noreturn)) llvm_libcxx_libcxx_src_7e5700(char* a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  vfprintf_plt(*(_QWORD*)SdkData_e86b68[0], a1, (__int64)&va);
  abort_plt();
}

#pragma GCC visibility pop
