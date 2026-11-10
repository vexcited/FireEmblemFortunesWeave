#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_850980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 libunwind_LocalAddressSpace_getULEB128(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_aeb60(const char*, ...);
__int64 libunwind_UnwindCursor_step(__int64 a1, char a2);
__int64 libunwind_850760(__int64 a1);
__int64 libunwind_LocalAddressSpace_getEncodedP(__int64 a1,
                                                unsigned __int8** a2,
                                                unsigned __int8* a3,
                                                unsigned __int8 a4, __int64 a5,
                                                __int64* a6);

__int64 libunwind_UnwindCursor_step(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;

  if ((*(_BYTE*)(a1 + 616) & 1) != 0) {
    return 0;
  }
  v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1,
                                                                0xFFFFFFFFLL);
  result = SdkRoutine_850980(*(_QWORD*)(a1 + 8), v5, *(_QWORD*)(a1 + 600),
                             *(_QWORD*)(a1 + 584), a1 + 16, a1 + 617, a2 & 1);
  if ((_DWORD)result == 1) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 104LL))(a1, 1);
    return (*(_BYTE*)(a1 + 616) & 1) == 0;
  }
  return result;
}

__int64 libunwind_850760(__int64 a1)
{
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 24LL))(a1, 0xFFFFFFFFLL);
  return 0;
}

__int64 libunwind_LocalAddressSpace_getEncodedP(__int64 a1,
                                                unsigned __int8** a2,
                                                unsigned __int8* a3,
                                                unsigned __int8 a4, __int64 a5,
                                                __int64* a6)
{
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  unsigned __int8 v9;
  __int64 v10;
  __int64 result;
  unsigned int v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned int v17;
  unsigned int v18;
  bool v19;
  char v20;
  bool v21;
  __int64 v22;

  v6 = (__int64)*a2;
  v7 = a4 & 0xF;
  if (v7 <= 3) {
    if ((a4 & 0xFu) > 1) {
      if (v7 == 2) {
        result = *(unsigned __int16*)v6;
        *a2 = (unsigned __int8*)(v6 + 2);
        v12 = (a4 >> 4) & 7;
        if (v12 > 1) {
          goto LABEL_27;
        }
      }
      else {
        if (v7 != 3) {
          goto LABEL_55;
        }
        result = *(unsigned int*)v6;
        *a2 = (unsigned __int8*)(v6 + 4);
        v12 = (a4 >> 4) & 7;
        if (v12 > 1) {
          goto LABEL_27;
        }
      }
      goto LABEL_38;
    }
    if ((a4 & 0xF) != 0) {
      if (v7 != 1) {
        goto LABEL_55;
      }
      v8 = a6;
      v9 = a4;
      v10 = a5;
      result = libunwind_LocalAddressSpace_getULEB128(a2, a3);
      a5 = v10;
      a4 = v9;
      a6 = v8;
      v12 = (v9 >> 4) & 7;
      if (v12 > 1) {
        goto LABEL_27;
      }
      goto LABEL_38;
    }
    goto LABEL_31;
  }
  if ((a4 & 0xFu) <= 9) {
    if (v7 != 4) {
      if (v7 != 9) {
        goto LABEL_55;
      }
      v13 = -7;
      v14 = 0;
      v15 = *a2;
      v16 = *a2;
      do {
        if (v16 == a3) {
          SdkRoutine_aeb60("libunwind: %s %s:%d - %s\n", "getSLEB128",
                           "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/"
                           "src\\AddressSpace.hpp",
                           265, "truncated sleb128 expression");
        }
        v18 = *v16++;
        v17 = v18;
        v13 += 7LL;
        ++v15;
        v14 |= (unsigned __int64)(v18 & 0x7F) << v13;
      } while ((v18 & 0x80) != 0);
      v19 = v13 >= 0x39;
      v20 = v13 + 7;
      *a2 = v15;
      v21 = !v19 && v17 > 0x3F;
      v22 = -1LL << v20;
      if (!v21) {
        v22 = 0;
      }
      result = v14 | v22;
      v12 = (a4 >> 4) & 7;
      if (v12 > 1) {
        goto LABEL_27;
      }
      goto LABEL_38;
    }
    goto LABEL_31;
  }
  if (v7 == 10) {
    result = *(__int16*)v6;
    *a2 = (unsigned __int8*)(v6 + 2);
    v12 = (a4 >> 4) & 7;
    if (v12 > 1) {
      goto LABEL_27;
    }
    goto LABEL_38;
  }
  if (v7 != 11) {
    if (v7 != 12) {
    LABEL_55:
      SdkRoutine_aeb60(
          "libunwind: %s %s:%d - %s\n", "getEncodedP",
          "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\AddressSpace.hpp",
          330, "unknown pointer encoding");
    }
  LABEL_31:
    result = *(_QWORD*)v6;
    *a2 = (unsigned __int8*)(v6 + 8);
    v12 = (a4 >> 4) & 7;
    if (v12 > 1) {
      goto LABEL_27;
    }
    goto LABEL_38;
  }
  result = *(int*)v6;
  *a2 = (unsigned __int8*)(v6 + 4);
  v12 = (a4 >> 4) & 7;
  if (v12 > 1) {
  LABEL_27:
    if ((int)v12 > 3) {
      if (v12 != 4) {
        if (v12 == 5) {
          SdkRoutine_aeb60("libunwind: %s %s:%d - %s\n", "getEncodedP",
                           "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/"
                           "src\\AddressSpace.hpp",
                           356,
                           "DW_EH_PE_aligned pointer encoding not supported");
        }
        SdkRoutine_aeb60("libunwind: %s %s:%d - %s\n", "getEncodedP",
                         "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/"
                         "src\\AddressSpace.hpp",
                         359, "unknown pointer encoding");
      }
      SdkRoutine_aeb60(
          "libunwind: %s %s:%d - %s\n", "getEncodedP",
          "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\AddressSpace.hpp",
          353, "DW_EH_PE_funcrel pointer encoding not supported");
    }
    if (v12 != 3) {
      SdkRoutine_aeb60(
          "libunwind: %s %s:%d - %s\n", "getEncodedP",
          "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\AddressSpace.hpp",
          342, "DW_EH_PE_textrel pointer encoding not supported");
    }
    if (a5 == 0) {
      SdkRoutine_aeb60(
          "libunwind: %s %s:%d - %s\n", "getEncodedP",
          "D:/bb/ntd/ryn-flt-lto/llvm-project/libunwind/src\\AddressSpace.hpp",
          349, "DW_EH_PE_datarel is invalid with a datarelBase of 0");
    }
    result += a5;
    goto LABEL_40;
  }
LABEL_38:
  if (v12 != 0) {
    result += v6;
  }
LABEL_40:
  if ((a4 & 0x80) != 0) {
    if (a6 != nullptr) {
      *a6 = result;
    }
    return *(_QWORD*)result;
  }
  else if (a6 != nullptr) {
    *a6 = v6;
  }
  return result;
}

#pragma GCC visibility pop
