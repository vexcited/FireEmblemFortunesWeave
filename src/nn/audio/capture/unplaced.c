#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
unsigned __int64 strlen_plt(const char*);
unsigned __int64 nn_audio_capture_279c20(__int64 a1, unsigned __int64 a2,
                                         const char* a3, char a4,
                                         unsigned int a5, const char* a6,
                                         unsigned int a7, unsigned int a8,
                                         unsigned int a9, unsigned int a10);

unsigned __int64 nn_audio_capture_279c20(__int64 a1, unsigned __int64 a2,
                                         const char* a3, char a4,
                                         unsigned int a5, const char* a6,
                                         unsigned int a7, unsigned int a8,
                                         unsigned int a9, unsigned int a10)
{
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  char v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _DWORD* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  _DWORD* v31;
  _DWORD* v32;

  memset_plt(a1, 0, a2);
  v18 = strlen_plt(a3);
  if (a2 < v18 + 1) {
    return 0;
  }
  memcpy_plt(a1, (__int64)a3, v18);
  v19 = strlen_plt(a3) & 0xFFFFFFFFFFFFFFFCLL;
  if (a2 <= v19 + 4) {
    return 0;
  }
  *(_BYTE*)(a1 + v19 + 4) = 44;
  v20 = a2 - (v19 + 5);
  if (a2 == v19 + 5) {
    return 0;
  }
  v21 = (char*)(a1 + v19 + 5);
  v22 = (a4 & 1) != 0 ? 84 : 70;
  *v21 = v22;
  if (v20 == 1) {
    return 0;
  }
  v21[1] = 105;
  if (v20 == 2) {
    return 0;
  }
  v21[2] = 115;
  if (v20 == 3) {
    return 0;
  }
  v21[3] = 105;
  if (v20 == 4) {
    return 0;
  }
  v23 = v20 - 5;
  v21[4] = 105;
  if (v23 == 0) {
    return 0;
  }
  v21[5] = 105;
  if (v23 == 1) {
    return 0;
  }
  v21[6] = 105;
  v24 = a2 - (v19 + 16);
  if (a2 < v19 + 16) {
    return 0;
  }
  v25 = v24 - 4;
  if (v24 < 4) {
    return 0;
  }
  v26 = (_DWORD*)(a1 + v19 + 16);
  *v26 = bswap32(a5);
  v27 = strlen_plt(a6);
  v28 = (v27 & 0xFFFFFFFFFFFFFFFCLL) + 4;
  v29 = v25 >= v28;
  v30 = v25 - v28;
  if (!v29) {
    return 0;
  }
  v31 = v26 + 1;
  memcpy_plt((__int64)(v26 + 1), (__int64)a6, v27);
  if (v30 < 4) {
    return 0;
  }
  v32 = (_DWORD*)((char*)v31 + v28);
  *(_DWORD*)((char*)v31 + v28) = bswap32(a7);
  if ((v30 & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  v32[1] = bswap32(a8);
  if (v30 - 8 < 4) {
    return 0;
  }
  v32[2] = bswap32(a9);
  if (((v30 - 8) & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  v32[3] = bswap32(a10);
  return v19 + v28 + 36;
}

#pragma GCC visibility pop
