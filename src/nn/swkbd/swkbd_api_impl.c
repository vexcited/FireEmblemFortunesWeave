#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_swkbd_MakePreset(void* this_, void* a2, __int64 a3,
                            unsigned __int64 a4);

__int64 nn_swkbd_MakePreset(void* this_, void* a2, __int64 a3,
                            unsigned __int64 a4)
{
  unsigned __int64 v5;
  char* v6;
  __int64 result;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((int)a2 <= 1) {
    if ((_DWORD)a2 == 0) {
      memset_plt((void*)((char*)this_ + 16), a2, 1288, a4),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      *(_DWORD*)this_ = 2;
      *((_DWORD*)this_ + 7) = 0;
      *((_DWORD*)this_ + 8) = 1;
      *((_DWORD*)this_ + 238) = 1;
      *((_BYTE*)this_ + 956) = 1;
      goto LABEL_9;
    }
    if ((_DWORD)a2 == 1) {
      memset_plt(this_, nullptr, 1304, a4),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      *(_DWORD*)this_ = 2;
      *((_DWORD*)this_ + 7) = 0;
      *((_DWORD*)this_ + 8) = 1;
      *((_DWORD*)this_ + 237) = 1;
    LABEL_9:
      *((_BYTE*)this_ + 958) = 1;
    LABEL_11:
      *((_QWORD*)this_ + 124) = -1;
      *((_QWORD*)this_ + 125) = -1;
      *((_QWORD*)this_ + 126) = -1;
      *((_QWORD*)this_ + 127) = -1;
      goto LABEL_12;
    }
  LABEL_13:
    nn_diag_detail_AbortImpl_plt_856170(this_),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if ((_DWORD)a2 == 2) {
    memset_plt(this_, nullptr, 1304, a4),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    *((_WORD*)this_ + 478) = 0;
    *((_DWORD*)this_ + 7) = 256;
    *((_DWORD*)this_ + 8) = 1;
    *((_BYTE*)this_ + 958) = 1;
    *(_QWORD*)((char*)this_ + 940) = 0;
    *(_QWORD*)((char*)this_ + 948) = 0;
    goto LABEL_11;
  }
  if ((_DWORD)a2 != 3) {
    goto LABEL_13;
  }
  memset_plt(this_, nullptr, 1304, a4),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_DWORD*)this_ = 2;
  *((_DWORD*)this_ + 238) = 2;
  *(_QWORD*)((char*)this_ + 28) = 0x100000080LL;
  *((_BYTE*)this_ + 958) = 1;
  *(_QWORD*)((char*)this_ + 940) = 0x1000000010LL;
  *(_QWORD*)((char*)this_ + 1004) = -1;
  *(_QWORD*)((char*)this_ + 1012) = -1;
  *((_DWORD*)this_ + 255) = -1;
  *((_QWORD*)this_ + 124) = 0x700000003LL;
  *((_DWORD*)this_ + 250) = 11;
LABEL_12:
  *(_QWORD*)((char*)this_ + 12) = 0;
  *(_QWORD*)((char*)this_ + 4) = 0;
  *(_QWORD*)((char*)this_ + 36) = 0;
  *(_QWORD*)((char*)this_ + 44) = 0;
  *(_QWORD*)((char*)this_ + 52) = 0;
  *(_QWORD*)((char*)this_ + 60) = 0;
  *(_QWORD*)((char*)this_ + 68) = 0;
  *(_QWORD*)((char*)this_ + 76) = 0;
  *(_QWORD*)((char*)this_ + 84) = 0;
  *(_QWORD*)((char*)this_ + 92) = 0;
  *(_QWORD*)((char*)this_ + 100) = 0;
  *(_QWORD*)((char*)this_ + 108) = 0;
  *(_QWORD*)((char*)this_ + 116) = 0;
  *(_QWORD*)((char*)this_ + 124) = 0;
  *(_QWORD*)((char*)this_ + 132) = 0;
  *(_QWORD*)((char*)this_ + 140) = 0;
  *(_QWORD*)((char*)this_ + 148) = 0;
  *(_QWORD*)((char*)this_ + 156) = 0;
  *(_QWORD*)((char*)this_ + 166) = 0;
  v6 = (char*)this_ + 166;
  *((_QWORD*)v6 + 30) = 0;
  *((_QWORD*)v6 + 31) = 0;
  *((_QWORD*)v6 + 28) = 0;
  *((_QWORD*)v6 + 29) = 0;
  *((_QWORD*)v6 + 26) = 0;
  *((_QWORD*)v6 + 27) = 0;
  *((_QWORD*)v6 + 24) = 0;
  *((_QWORD*)v6 + 25) = 0;
  *((_QWORD*)v6 + 22) = 0;
  *((_QWORD*)v6 + 23) = 0;
  *((_QWORD*)v6 + 20) = 0;
  *((_QWORD*)v6 + 21) = 0;
  *((_QWORD*)v6 + 18) = 0;
  *((_QWORD*)v6 + 19) = 0;
  *((_QWORD*)v6 + 16) = 0;
  *((_QWORD*)v6 + 17) = 0;
  *((_QWORD*)v6 + 14) = 0;
  *((_QWORD*)v6 + 15) = 0;
  *((_QWORD*)v6 + 12) = 0;
  *((_QWORD*)v6 + 13) = 0;
  *((_QWORD*)v6 + 10) = 0;
  *((_QWORD*)v6 + 11) = 0;
  *((_QWORD*)v6 + 8) = 0;
  *((_QWORD*)v6 + 9) = 0;
  *((_QWORD*)v6 + 6) = 0;
  *((_QWORD*)v6 + 7) = 0;
  *((_QWORD*)v6 + 4) = 0;
  *((_QWORD*)v6 + 5) = 0;
  *((_QWORD*)v6 + 2) = 0;
  *((_QWORD*)v6 + 3) = 0;
  *((_QWORD*)v6 + 1) = 0;
  result = memset_plt((void*)(v6 + 258), nullptr, 512, v5),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v6[810] = 0;
  *(_QWORD*)(v6 + 794) = 0;
  *(_QWORD*)(v6 + 818) = 0;
  *(_QWORD*)(v6 + 802) = 0;
  *(_QWORD*)(v6 + 1058) = 0;
  *(_QWORD*)(v6 + 1066) = 0;
  *((_WORD*)v6 + 537) = 256;
  return result;
}

#pragma GCC visibility pop
