#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* unplaced_176ee0(_QWORD* result, void (*)(const char*));
__int64 SdkRoutine_1a5500(_QWORD);
__int64 SdkRoutine_85e090(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_AcquireWriteLock_plt(__int64);
__int64 nn_os_ReleaseWriteLock_plt(__int64);
__int64 nn_ro_detail_LookupGlobalManual_plt(__int64, const char*);
__int64 nn_ro_detail_Puts_plt(_QWORD);
__int64 nn_ro_detail_RoModule_BindVariables_plt(_QWORD, _QWORD);
__int64 nn_ro_detail_Unexpected_plt(const char*);
__int64 unplaced_176b20(__int64 result, __int64, __int64, __int64*, char,
                        __int64 (*)(__int64, __int64));
__int64 unplaced_177290();
atomic_uint* SdkRoutine_16cc80(atomic_uint* result);
extern _UNKNOWN SdkData_eb80a0;
extern __int64 SdkData_e86f98;
extern __int64 SdkData_e86fb8;
extern __int64 SdkData_e86fd0;
extern __int64 SdkData_eb8098;
extern void (*SdkData_e86fb0[257])();
extern void (*SdkData_e86fc0[255])();
extern void (*SdkData_e86fc8[254])();
extern void (*SdkData_e86fd8[252])();
unsigned __int8* nn_os_16cce0(__int64);
unsigned int* ro_api_175060(__int64, void* this_);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_ro_174660(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4, char a5,
                     char a6);

__int64 nn_ro_174660(__int64* a1, _DWORD* a2, __int64 a3, __int64 a4, char a5,
                     char a6)
{
  __int64 v6;
  __int64 v7;
  unsigned int v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int* v30;
  __int64 v31;
  char v32;
  _BOOL4 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  void(__attribute__((noreturn)) * v38)();
  void (*v39)(unsigned __int64);
  void(__attribute__((noreturn)) * v40)();
  __int64 v41;
  __int64 i;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int* v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  _DWORD* v65;
  __int64 v66;
  __int64* v67;
  int v68;
  __int64 (*v69)(__int64);
  __int64 v70;
  _QWORD v71[2];
  unsigned __int64 v72;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2[4] != 810504782) {
    return 2070;
  }
  {
    v6 = (unsigned int)a2[6];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = (unsigned int)a2[14];
    __asm__ volatile("" ::"r"(v7));
  }
  v72 = 0;
  SdkRoutine_1a5500(2147483651LL),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v14 = (*(__int64 (**)(__int64, unsigned __int64*, _QWORD, _DWORD*, __int64,
                        __int64, __int64))(*(_QWORD*)SdkData_eb8098 + 32LL))(
      SdkData_eb8098, &v72, 0, a2, v6, a3, a4),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  SdkRoutine_1a5500(2147483652LL),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  result = v14;
  if ((v14 & 0x1FF) != 0x16 || ((v14 >> 9) & 0x1FFF) - 1 >= 0x3FF) {
    LODWORD(v71[0]) = v14;
    if (v14 != 0) {
      goto LABEL_79;
    }
    v16 = v72;
    if (v72 == -1) {
      nn_diag_detail_AbortImpl_plt_856170(),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v71[0] = 0;
    v71[1] = 0;
    v70 = 0;
    if ((SdkRoutine_85e090((__int64)&v70, (__int64)v71, v72) & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v17 = v70;
    if (v70 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    {
      v18 = *(unsigned int*)((char*)((__int64*)0x4LL) + v70 + 4);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(unsigned int*)((char*)((__int64*)0x4LL) + v70 + 8);
      __asm__ volatile("" ::"r"(v19));
    }
    if ((_DWORD)v19 != (_DWORD)v18) {
      memset_plt(v18 + v70, 0, v19 - v18),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = v70;
    }
    v64 = a5;
    v65 = a2;
    v66 = a3;
    v67 = a1;
    {
      v20 = *(unsigned int*)((char*)(*(void*(*)[1])0x18LL) + v17) + v17;
      __asm__ volatile("" ::"r"(v20));
    }
    *(_QWORD*)v20 = v20;
    *(_QWORD*)(v20 + 8) = v20;
    *a1 = v20;
    unplaced_176b20(
        v20, v16, v7 + v6,
        (__int64*)(*(unsigned int*)((char*)((__int64*)0x4LL) + v70) + v70),
        a6 & 1, (__int64 (*)(__int64, __int64))unplaced_177290),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    nn_os_AcquireWriteLock_plt((__int64)&SdkData_eb80a0),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v21 = SdkData_e86f98;
    SdkRoutine_16cc80((atomic_uint*)SdkData_e86f98),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v22 = *(_QWORD*)v20;
      __asm__ volatile("" ::"r"(v22));
    }
    {
      v23 = *(_QWORD*)SdkData_e86fb0[0];
      __asm__ volatile("" ::"r"(v23));
    }
    *(_QWORD*)v20 = **(_QWORD**)SdkData_e86fb0[0];
    *(_QWORD*)(v22 + 8) = v23;
    *(_QWORD*)(*(_QWORD*)v23 + 8LL) = v20;
    *(_QWORD*)v23 = v22;
    nn_os_16cce0(v21),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v24 = (unsigned __int64)unplaced_176ee0(
        (_QWORD*)v20, (void (*)(const char*))SdkData_e86fb8);
    if (*(_QWORD*)(v20 + 144) < *(_QWORD*)(v20 + 136) >> 4) {
      nn_ro_detail_Unexpected_plt("RoModule::RelocateRel is called"),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      __udf(0);
    }
    v69 = *(__int64 (**)(__int64))SdkData_e86fc0[0],
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    {
      v25 = *(_QWORD*)(v20 + 152);
      __asm__ volatile("" ::"r"(v25));
    }
    {
      v68 = **(unsigned __int8**)SdkData_e86fc8[0];
      __asm__ volatile("" ::"r"(v68));
    }
    if (v25 < *(_QWORD*)(v20 + 128) / 0x18uLL) {
      v26 = 24 * v25;
      while (1) {
        {
          v27 = *(_QWORD*)(v20 + 24);
          __asm__ volatile("" ::"r"(v27));
        }
        {
          v28 = *(_QWORD*)(v27 + v26 + 8);
          __asm__ volatile("" ::"r"(v28));
        }
        if ((unsigned int)(v28 - 257) < 2 || (_DWORD)v28 == 1025) {
          break;
        }
        if ((_DWORD)v28 == 1024) {
        LABEL_78:
          nn_ro_detail_Unexpected_plt("R_COPY is not supported"),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        LABEL_79:
          nn_diag_detail_AbortImpl_plt_858db0((__int64)v71),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      LABEL_14:
        ++v25;
        v26 += 24;
        if (v25 >= *(_QWORD*)(v20 + 128) / 0x18uLL) {
          goto LABEL_36;
        }
      }
      {
        v29 = *(_QWORD*)(v20 + 96);
        __asm__ volatile("" ::"r"(v29));
      }
      {
        v30 = (unsigned int*)(*(_QWORD*)(v20 + 104) + 24LL * HIDWORD(v28));
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v31 = *v30;
        __asm__ volatile("" ::"r"(v31));
      }
      {
        v32 = *((_BYTE*)v30 + 4);
        __asm__ volatile("" ::"r"(v32));
      }
      LODWORD(v30) = *((_BYTE*)v30 + 5) & 3;
      v33 = (_DWORD)v30 == 0;
      if ((_DWORD)v30 != 0) {
        v24 = (unsigned __int64)ro_api_175060(v20, (void*)(v29 + v31));
        if (v24 == 0) {
          goto LABEL_26;
        }
        {
          v24 = *(_QWORD*)(v24 + 8) + *(_QWORD*)(v20 + 40);
          __asm__ volatile("" ::"r"(v24));
        }
        if (v24 == 0) {
          goto LABEL_26;
        }
      }
      else {
        v24 = v69(v29 + v31);
        if (v24 != 0) {
          v33 = false;
        }
        else {
          v24 = nn_ro_detail_LookupGlobalManual_plt(v20,
                                                    (const char*)(v29 + v31));
          if (v24 == 0) {
          LABEL_26:
            if ((v32 & 0xF0) != 0x20) {
              *(_BYTE*)(v20 + 195) |= 8u;
              if (v68 != 0) {
                {
                  v35 = *(_QWORD*)(v20 + 96);
                  __asm__ volatile("" ::"r"(v35));
                }
                nn_ro_detail_Puts_plt("[ro] warning: unresolved symbol = '"),
                    v24 = COERCE_AS(
                        __typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                nn_ro_detail_Puts_plt(v35 + v31),
                    v24 = COERCE_AS(
                        __typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v24 = nn_ro_detail_Puts_plt("'\n");
              }
              goto LABEL_14;
            }
            v24 = 0;
          }
        }
      }
      *(_QWORD*)(*(_QWORD*)(v27 + v26) + *(_QWORD*)(v20 + 40)) =
          *(_QWORD*)(v27 + v26 + 16) + v24;
      if (v24 == 0 || v33 && ((v34 = *(_QWORD*)(v20 + 40), v24 < v34) ||
                              v24 >= *(_QWORD*)(v20 + 184) + v34)) {
        *(_BYTE*)(v20 + 195) |= 8u;
      }
      goto LABEL_14;
    }
  LABEL_36:
    {
      v36 = *(_QWORD*)(v20 + 56);
      __asm__ volatile("" ::"r"(v36));
    }
    if ((*(_BYTE*)(v20 + 195) & 2) == 0) {
      if (v36 < 0x10) {
      LABEL_40:
        {
          v37 = *(_QWORD*)(v20 + 120);
          __asm__ volatile("" ::"r"(v37));
        }
        v38 = SdkData_e86fb0[0];
        if (v37 != 0) {
          *(_QWORD*)(v37 + 16) = SdkData_e86fd0;
          *(_QWORD*)(*(_QWORD*)(v20 + 120) + 8LL) = v20;
        }
        v39 = *(void (**)(unsigned __int64))(v20 + 64),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (v39 != nullptr) {
          v39(v24),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        v40 = SdkData_e86fd8[0];
        {
          v41 = *(_QWORD*)(*(_QWORD*)SdkData_e86fd8[0] + 8LL);
          __asm__ volatile("" ::"r"(v41));
        }
        if (v41 != *(_QWORD*)SdkData_e86fd8[0]) {
          do {
            nn_ro_detail_RoModule_BindVariables_plt(v41, v20),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            {
              v41 = *(_QWORD*)(v41 + 8);
              __asm__ volatile("" ::"r"(v41));
            }
          } while (v41 != *(_QWORD*)v40);
        }
        for (i = *(_QWORD*)(*(_QWORD*)v38 + 8LL);
             *(_QWORD*)(i + 8) != *(_QWORD*)v38; i = *(_QWORD*)(i + 8)) {
          nn_ro_detail_RoModule_BindVariables_plt(i, v20),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        nn_os_ReleaseWriteLock_plt((__int64)&SdkData_eb80a0),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        result = 0;
        v67[2] = (__int64)v65;
        v67[3] = v66;
        *((_DWORD*)v67 + 2) = 1;
        return result;
      }
      v24 = nn_ro_detail_Unexpected_plt("RoModule::RelocatePltRel is called");
    }
    if (v36 < 0x18) {
      goto LABEL_40;
    }
    if ((v64 & 2) != 0) {
      v57 = 0;
      v58 = 0;
      while (1) {
        {
          v59 = (__int64*)(*(_QWORD*)(v20 + 16) + v57);
          __asm__ volatile("" ::"r"(v59));
        }
        if (*((_DWORD*)v59 + 2) == 1026) {
          {
            v60 = *(_QWORD*)(v20 + 40);
            __asm__ volatile("" ::"r"(v60));
          }
          {
            v61 = *v59;
            __asm__ volatile("" ::"r"(v61));
          }
          {
            v62 = *(_QWORD*)(v20 + 200);
            __asm__ volatile("" ::"r"(v62));
          }
          {
            v63 = *(_QWORD*)(v61 + v60) + v60;
            __asm__ volatile("" ::"r"(v63));
          }
          if (v62 != 0) {
            if (v62 != v63) {
            LABEL_77:
              nn_ro_detail_Unexpected_plt(
                  "m_ArchData.defaultPltGot != defaultPltGot"),
                  v24 = COERCE_AS(
                      __typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              goto LABEL_78;
            }
          }
          else {
            *(_QWORD*)(v20 + 200) = v63;
          }
          *(_QWORD*)(v61 + v60) = v63;
          {
            v36 = *(_QWORD*)(v20 + 56);
            __asm__ volatile("" ::"r"(v36));
          }
        }
        ++v58;
        v57 += 24;
        if (v58 >= v36 / 0x18) {
          goto LABEL_40;
        }
      }
    }
    v43 = 0;
    v44 = 0;
    while (1) {
      {
        v46 = *(_QWORD*)(v20 + 16);
        __asm__ volatile("" ::"r"(v46));
      }
      v47 = (__int64*)(v46 + v43);
      {
        v48 = *(_QWORD*)(v46 + v43 + 8);
        __asm__ volatile("" ::"r"(v48));
      }
      if ((_DWORD)v48 != 1026) {
        goto LABEL_55;
      }
      {
        v49 = *(_QWORD*)(v20 + 40);
        __asm__ volatile("" ::"r"(v49));
      }
      {
        v50 = *v47;
        __asm__ volatile("" ::"r"(v50));
      }
      {
        v45 = *(_QWORD*)(*v47 + v49) + v49;
        __asm__ volatile("" ::"r"(v45));
      }
      {
        v51 = *(_QWORD*)(v20 + 200);
        __asm__ volatile("" ::"r"(v51));
      }
      if (v51 != 0) {
        if (v51 != v45) {
          goto LABEL_77;
        }
      }
      else {
        *(_QWORD*)(v20 + 200) = v45;
        {
          v48 = v47[1];
          __asm__ volatile("" ::"r"(v48));
        }
      }
      {
        v52 = *(_QWORD*)(v20 + 96);
        __asm__ volatile("" ::"r"(v52));
      }
      {
        v53 = (unsigned int*)(*(_QWORD*)(v20 + 104) + 24LL * HIDWORD(v48));
        __asm__ volatile("" ::"r"(v53));
      }
      {
        v54 = *v53;
        __asm__ volatile("" ::"r"(v54));
      }
      {
        v55 = *((_BYTE*)v53 + 4);
        __asm__ volatile("" ::"r"(v55));
      }
      if ((*((_BYTE*)v53 + 5) & 3) != 0) {
        v24 = (unsigned __int64)ro_api_175060(v20, (void*)(v52 + v54));
        if (v24 != 0) {
          {
            v24 = *(_QWORD*)(v24 + 8) + *(_QWORD*)(v20 + 40);
            __asm__ volatile("" ::"r"(v24));
          }
          if (v24 != 0) {
            goto LABEL_53;
          }
        }
      }
      else {
        v24 = v69(v52 + v54);
        if (v24 != 0) {
          goto LABEL_53;
        }
        v24 =
            nn_ro_detail_LookupGlobalManual_plt(v20, (const char*)(v52 + v54));
        if (v24 != 0) {
          goto LABEL_53;
        }
      }
      if ((v55 & 0xF0) != 0x20) {
        if (v68 != 0) {
          {
            v56 = *(_QWORD*)(v20 + 96);
            __asm__ volatile("" ::"r"(v56));
          }
          nn_ro_detail_Puts_plt("[ro] warning: unresolved symbol = '"),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          nn_ro_detail_Puts_plt(v56 + v54),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v24 = nn_ro_detail_Puts_plt("'\n");
        }
        goto LABEL_54;
      }
      v24 = 0;
    LABEL_53:
      {
        v45 = *(_QWORD*)(v46 + v43 + 16) + v24;
        __asm__ volatile("" ::"r"(v45));
      }
    LABEL_54:
      *(_QWORD*)(v50 + v49) = v45;
      {
        v36 = *(_QWORD*)(v20 + 56);
        __asm__ volatile("" ::"r"(v36));
      }
    LABEL_55:
      ++v44;
      v43 += 24;
      if (v44 >= v36 / 0x18) {
        goto LABEL_40;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
