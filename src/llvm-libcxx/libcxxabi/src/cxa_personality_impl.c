#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_GetIP_plt(_QWORD);
__int64 _Unwind_GetLanguageSpecificData_plt(_QWORD);
__int64 _Unwind_GetRegionStart_plt(_QWORD);
__int64 _Unwind_SetGR_plt(_QWORD, _QWORD, _QWORD);
__int64 _Unwind_SetIP_plt(_QWORD, _QWORD);
__int64 __assert_fail_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_begin_catch_plt(_QWORD);
__int64 __cxxabiv1___getExceptionClass(_QWORD);
__int64 __cxxabiv1___isOurExceptionClass(_QWORD);
__int64 __cxxabiv1_exception_spec_can_catch_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("__cxxabiv1_exception_spec_can_catch");
__int64 __cxxabiv1_readEncodedPointer(_QWORD, _QWORD, _QWORD);
__int64 std_get_terminate_plt(void);
__int64 std_get_unexpected_plt(void);
__int64 std_terminate_plt(_QWORD);
extern _QWORD SdkData_d02e88[13];
void __attribute__((noreturn)) std___terminate(void (*)(void));
void __attribute__((noreturn)) std___unexpected(_QWORD);
__int64 __gxx_personality_v0(int a1, int a2, __int64 a3, __int64 a4,
                             __int64 a5);
void __attribute__((noreturn)) __cxa_call_unexpected(__int64 a1);
bool __cxxabiv1_exception_spec_can_catch(__int64 a1, __int64 a2,
                                         unsigned int a3, __int64 a4,
                                         __int64 a5, __int64 a6, __int64 a7);

__int64 __gxx_personality_v0(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result;
  unsigned __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  unsigned __int64 v25;
  unsigned int v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned int v30;
  unsigned int v31;
  char v32;
  unsigned __int64 v33;
  char* v34;
  char* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  unsigned __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int8* v49;
  unsigned int v50;
  unsigned int v51;
  unsigned __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  int v62;
  __int64 v63;
  unsigned __int8* v64;
  __int64 v65;
  char v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  unsigned int v70;
  unsigned int v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int8* v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int8* v83;
  char* v84;
  char* v85;
  unsigned __int8* v86;

  result = 3;
  if (a1 != 1 || a4 == 0 || a5 == 0) {
    return result;
  }
  v9 = a3 & 0xFFFFFFFFFFFFFF00LL;
  v10 = a2;
  if (a2 == 6 && v9 == 0x434C4E47432B2B00LL) {
    v11 = *(int*)(a4 - 36);
    v12 = *(_QWORD*)(a4 - 16);
    _Unwind_SetGR_plt(a5, 0, a4);
    _Unwind_SetGR_plt(a5, 1, v11);
    _Unwind_SetIP_plt(a5, v12);
    if ((v11 & 0x80000000) == 0) {
      return 7;
    }
  LABEL_7:
    *(_QWORD*)(a4 - 16) = 0;
    return 7;
  }
  if ((a2 & 1) == 0) {
    if ((a2 & 2) == 0) {
      return result;
    }
    if ((~a2 & 0xC) != 0) {
      goto LABEL_14;
    }
    result = __assert_fail_plt(
        "results.reason == _URC_HANDLER_FOUND",
        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/cxa_personality.cpp",
        985, "__gxx_personality_v0");
  }
  if ((v10 & 0xE) != 0) {
    return result;
  }
LABEL_14:
  v13 = _Unwind_GetLanguageSpecificData_plt(a5);
  if (v13 == 0) {
    return 8;
  }
  v14 = (unsigned __int8*)v13;
  v15 = _Unwind_GetIP_plt(a5);
  v16 = _Unwind_GetRegionStart_plt(a5);
  v17 = *v14;
  v18 = v16;
  v85 = (char*)(v14 + 1);
  if ((_DWORD)v17 != 255) {
    v80 = __cxxabiv1_readEncodedPointer(&v85, v17, 0);
    v19 = v85 + 1;
    v20 = (unsigned __int8)*v85;
    v21 = ~v18;
    ++v85;
    v82 = v20;
    if (v20 != 255) {
      goto LABEL_17;
    }
  LABEL_21:
    v83 = nullptr;
    goto LABEL_22;
  }
  v80 = v16;
  v26 = v14[1];
  v19 = (char*)(v14 + 2);
  v21 = ~v16;
  v85 = (char*)(v14 + 2);
  v82 = v26;
  if (v26 == 255) {
    goto LABEL_21;
  }
LABEL_17:
  v22 = 0;
  v23 = 0;
  do {
    v24 = *v19++;
    v25 = (unsigned __int64)(v24 & 0x7F) << v22;
    v22 += 7;
    v23 |= v25;
  } while (v24 < 0);
  v83 = (unsigned __int8*)&v19[v23];
LABEL_22:
  v27 = v19 + 1;
  v81 = v9;
  v28 = v15 + v21;
  v78 = v14;
  v29 = 0;
  v30 = 0;
  v85 = v19 + 1;
  v31 = (unsigned __int8)*v19;
  do {
    v32 = *v27++;
    v33 = (unsigned __int64)(v32 & 0x7F) << v29;
    v29 += 7;
    v30 |= v33;
  } while (v32 < 0);
  v34 = &v27[v30];
  v84 = v27;
  v85 = v27;
  v79 = v30;
  v35 = v27;
  while (1) {
    if (v35 >= v34) {
    LABEL_94:
      v76 = __cxa_begin_catch_plt(a4);
      if (v81 == 0x434C4E47432B2B00LL) {
        std___terminate(*(void (**)(void))(a4 - 56));
      }
      std_terminate_plt(v76);
    LABEL_97:
      __cxa_begin_catch_plt(a4);
      std___terminate(*(void (**)(void))(a4 - 56));
    }
    v36 = __cxxabiv1_readEncodedPointer(&v84, v31, 0);
    v37 = __cxxabiv1_readEncodedPointer(&v84, v31, 0);
    v38 = __cxxabiv1_readEncodedPointer(&v84, v31, 0);
    v35 = v84;
    v39 = 0;
    v40 = 0;
    do {
      v41 = *v35++;
      v42 = (unsigned __int64)(v41 & 0x7F) << v39;
      v39 += 7;
      v40 |= v42;
    } while (v41 < 0);
    v84 = v35;
    if (v36 <= v28 && v28 < v37 + v36) {
      break;
    }
    if (v28 < v36) {
      goto LABEL_94;
    }
  }
  if (v38 == 0) {
    return 8;
  }
  v43 = v38 + v80;
  if (v40 == 0) {
    if ((v10 & 1) == 0) {
      v56 = 0;
      goto LABEL_87;
    }
    return 8;
  }
  v77 = v38 + v80;
  v44 = 0;
  v45 = (__int64)&v27[v79 - 1 + v40];
  v46 = v82 & 0xF;
  while (1) {
    v47 = 0;
    v48 = 0;
    v49 = (unsigned __int8*)v45;
    do {
      v51 = *v49++;
      v50 = v51;
      v52 = (unsigned __int64)(v51 & 0x7F) << v47;
      v47 += 7LL;
      v48 |= v52;
    } while ((v51 & 0x80) != 0);
    v53 = v47 >= 0x40;
    v54 = -1LL << v47;
    if (v53 || v50 <= 0x3F) {
      v54 = 0;
    }
    v56 = v48 | v54;
    if ((v48 | v54) >= 1) {
      break;
    }
    v62 = (v56 == 0) | v44;
    if ((v10 & 8) == 0 && v56 != 0) {
      v63 = __cxxabiv1___getExceptionClass(a4);
      if (v81 != 0x434C4E47432B2B00LL) {
        goto LABEL_79;
      }
      v64 = (unsigned __int8*)(a4 + 32);
      if (v63 == 0x434C4E47432B2B01LL) {
        v64 = *(unsigned __int8**)(a4 - 88);
      }
      if (v64 == nullptr) {
        goto LABEL_97;
      }
      v65 = *(_QWORD*)(a4 - 80);
      if (v65 == 0) {
        goto LABEL_97;
      }
      v66 = __cxxabiv1_exception_spec_can_catch_alt1(v56, v83, v82, v65, v64,
                                                     a4, 0);
      v62 = v44;
      if ((v66 & 1) != 0) {
        if ((v10 & 1) != 0) {
          v43 = v77;
          goto LABEL_93;
        }
      LABEL_101:
        __assert_fail_plt("actions & _UA_SEARCH_PHASE",
                          "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                          "cxa_personality.cpp",
                          805, "scan_eh_tab");
        __udf(0);
      }
    }
  LABEL_61:
    v67 = 0;
    v68 = 0;
    v69 = v49;
    do {
      v71 = *v69++;
      v70 = v71;
      v72 = (unsigned __int64)(v71 & 0x7F) << v67;
      v67 += 7LL;
      v68 |= v72;
    } while ((v71 & 0x80) != 0);
    v53 = v67 >= 0x40;
    v73 = -1LL << v67;
    if (v53 || v70 <= 0x3F) {
      v73 = 0;
    }
    v75 = v68 | v73;
    if (v75 == 0) {
      v43 = v77;
      if (((unsigned __int8)v62 & ((v10 & 2) != 0)) != 0) {
        v45 = 0;
        v56 = 0;
        v64 = nullptr;
        if ((v10 & 1) == 0) {
          goto LABEL_87;
        }
        goto LABEL_83;
      }
      return 8;
    }
    v45 = (__int64)&v49[v75];
    v44 = v62;
  }
  if (v83 == nullptr || (unsigned int)v46 > 0xC ||
      ((0x1C1Du >> v46) & 1) == 0) {
    goto LABEL_94;
  }
  v86 = &v83[SdkData_d02e88[v46] * v56];
  v57 = __cxxabiv1_readEncodedPointer(&v86, v82, 0);
  if (v57 == 0) {
    if ((v10 & 0xD) != 0) {
      v63 = __cxxabiv1___getExceptionClass(a4);
    LABEL_79:
      v43 = v77;
      if (v63 != 0x434C4E47432B2B01LL) {
        v64 = (unsigned __int8*)(a4 + 32);
        if ((v10 & 1) == 0) {
          goto LABEL_87;
        }
        goto LABEL_83;
      }
      v64 = *(unsigned __int8**)(a4 - 88);
      if ((v10 & 1) != 0) {
      LABEL_83:
        if (v81 == 0x434C4E47432B2B00LL) {
          goto LABEL_93;
        }
        return 6;
      }
    LABEL_87:
      if ((v10 & 2) != 0) {
        _Unwind_SetGR_plt(a5, 0, a4);
        _Unwind_SetGR_plt(a5, 1, v56);
        _Unwind_SetIP_plt(a5, v43);
        if ((v56 & 0x8000000000000000LL) == 0) {
          return 7;
        }
        goto LABEL_7;
      }
      __assert_fail_plt("actions & _UA_CLEANUP_PHASE",
                        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                        "cxa_personality.cpp",
                        984, "__gxx_personality_v0");
    }
    __assert_fail_plt(
        "actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)",
        "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/cxa_personality.cpp",
        746, "scan_eh_tab");
    goto LABEL_100;
  }
  if (v81 == 0x434C4E47432B2B00LL) {
    v58 = v57;
    v59 = __cxxabiv1___getExceptionClass(a4);
    v60 = (unsigned __int8*)(a4 + 32);
    if (v59 == 0x434C4E47432B2B01LL) {
      v60 = *(unsigned __int8**)(a4 - 88);
    }
    v86 = v60;
    if (v60 == nullptr) {
      goto LABEL_97;
    }
    v61 = *(_QWORD*)(a4 - 80);
    if (v61 == 0) {
      goto LABEL_97;
    }
    if (((*(__int64 (**)(__int64, __int64, unsigned __int8**))(
             *(_QWORD*)v58 + 32LL))(v58, v61, &v86) &
         1) != 0) {
      v43 = v77;
      if ((v10 & 9) == 0) {
      LABEL_100:
        __assert_fail_plt("actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)",
                          "D:/bb/ntd/ryn-flt-lto/llvm-project/libcxxabi/src/"
                          "cxa_personality.cpp",
                          772, "scan_eh_tab");
        goto LABEL_101;
      }
      if ((v10 & 1) == 0) {
        goto LABEL_87;
      }
      v64 = v86;
    LABEL_93:
      *(_DWORD*)(a4 - 36) = v56;
      *(_QWORD*)(a4 - 16) = v43;
      *(_QWORD*)(a4 - 8) = v64;
      *(_QWORD*)(a4 - 32) = v45;
      *(_QWORD*)(a4 - 24) = v78;
      return 6;
    }
  }
  v62 = v44;
  goto LABEL_61;
}

void __attribute__((noreturn)) __cxa_call_unexpected(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (a1 == 0) {
    v1 = __cxa_begin_catch_plt(0);
    a1 = std_terminate_plt(v1);
  }
  v2 = a1;
  __cxa_begin_catch_plt(a1);
  if ((__cxxabiv1___isOurExceptionClass(v2) & 1) != 0) {
    v3 = *(_QWORD*)(v2 - 64);
  }
  else {
    std_get_terminate_plt();
    v3 = std_get_unexpected_plt();
  }
  std___unexpected(v3);
}

bool __cxxabiv1_exception_spec_can_catch(__int64 a1, __int64 a2,
                                         unsigned int a3, __int64 a4,
                                         __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8;
  __int64 v13;
  __int64 v14;
  char* v15;
  char v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  char v20;
  __int64 v22;
  __int64 v24;

  if (a2 == 0) {
    v22 = __cxa_begin_catch_plt(a6);
    std_terminate_plt(v22);
    __udf(0);
  }
  v8 = a3 & 0xF;
  v13 = 0;
  v14 = 0;
  v15 = (char*)(a2 + ~a1);
  do {
    do {
      v16 = *v15++;
      v17 = (unsigned __int64)(v16 & 0x7F) << v13;
      v13 += 7;
      v18 = v17 | v14;
      v14 |= v17;
    } while (v16 < 0);
    if (v18 == 0) {
      break;
    }
    if ((unsigned int)v8 > 0xC || ((0x1C1Du >> v8) & 1) == 0) {
      __cxa_begin_catch_plt(a6);
      std___terminate(*(void (**)(void))(a6 - 56));
    }
    v24 = a2 + SdkData_d02e88[v8] * v18;
    v19 = __cxxabiv1_readEncodedPointer(&v24, a3, a7);
    v24 = a5;
    v20 = (*(__int64 (**)(__int64, __int64, __int64*))(*(_QWORD*)v19 + 32LL))(
        v19, a4, &v24);
    v13 = 0;
    v14 = 0;
  } while ((v20 & 1) == 0);
  return v18 == 0;
}

#pragma GCC visibility pop
