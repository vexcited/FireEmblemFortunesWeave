#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* BF_encode(_BYTE* result, unsigned __int8*);
_BYTE* BF_set_key(_BYTE* result, __int64, _DWORD*, unsigned __int8);
__int64 BF_decode(_BYTE*, unsigned __int8*);
__int64 BF_encrypt(_DWORD*, unsigned int, int, unsigned int*, unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_caf18c;
extern char SdkData_bc995a[65];
extern char SdkData_cb018c[15];
extern unsigned __int8 SdkData_caf12a[26];
_BYTE* BF_crypt(_BYTE* a1, _BYTE* a2, _BYTE* a3, unsigned int a4);

_BYTE* BF_crypt(_BYTE* a1, _BYTE* a2, _BYTE* a3, unsigned int a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  bool v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  char v27;
  struct {
    unsigned int v28;
    unsigned int v29;
  } v28_;
  struct {
    unsigned int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    __int64 v48;
    char gap88_[4088];
    _DWORD v49[18];
    unsigned int v50;
    unsigned int v51;
    unsigned int v52;
    unsigned int v53;
    unsigned int v54;
    unsigned int v55;
  } v30_;

  if (*a2 != 36) {
    return nullptr;
  }
  if (a2[1] != 50) {
    return nullptr;
  }
  v4 = (unsigned __int8)a2[2];
  if ((unsigned int)(v4 - 97) > 0x19) {
    return nullptr;
  }
  if (((1LL << ((unsigned __int8)v4 - 97)) & 0x27FFFFC) != 0) {
    return nullptr;
  }
  if (a2[3] != 36) {
    return nullptr;
  }
  v5 = (unsigned __int8)a2[4] - 48;
  if (v5 > 1) {
    return nullptr;
  }
  v6 = (unsigned __int8)a2[5] - 48;
  if (v6 > 9) {
    return nullptr;
  }
  if (a2[6] != 36) {
    return nullptr;
  }
  v7 = 1 << (v6 + 10 * v5);
  if (v7 < a4 || (unsigned int)BF_decode(&v30_.v50, a2 + 7) != 0) {
    return nullptr;
  }
  v30_.v50 = bswap32(v30_.v50);
  v30_.v51 = bswap32(v30_.v51);
  v30_.v52 = bswap32(v30_.v52);
  v30_.v53 = bswap32(v30_.v53);
  BF_set_key(a1, (__int64)v30_.v49, &v30_.v30, SdkData_caf12a[v4 - 97]);
  memcpy_plt(&v30_.v48, &SdkData_caf18c, 4096);
  v12 = BF_encrypt(&v30_.v30, v30_.v50, v30_.v51, &v30_.v30,
                   (unsigned __int64)&v30_.v30);
  v13 = 0;
  do {
    v14 = BF_encrypt(&v30_.v30, v30_.v52 ^ v12,
                     v30_.v53 ^ *(unsigned int*)((char*)&v30_.v30 + v13 + 4),
                     (unsigned int*)((char*)&v30_.v32 + v13),
                     (unsigned __int64)&v30_.v32 + v13);
    v15 = BF_encrypt(&v30_.v30, v30_.v50 ^ v14,
                     v30_.v51 ^ *(int*)((char*)&v30_.v33 + v13),
                     (unsigned int*)((char*)&v30_.v34 + v13),
                     (unsigned __int64)&v30_.v34 + v13);
    v16 = v13 >> 4;
    v12 = v15;
    v13 += 16LL;
  } while (v16 < 0x103);
  do {
    v30_.v30 ^= v30_.v49[0];
    v30_.v31 ^= v30_.v49[1];
    v30_.v32 ^= v30_.v49[2];
    v30_.v33 ^= v30_.v49[3];
    v30_.v34 ^= v30_.v49[4];
    v30_.v35 ^= v30_.v49[5];
    v30_.v36 ^= v30_.v49[6];
    v30_.v37 ^= v30_.v49[7];
    v30_.v38 ^= v30_.v49[8];
    v30_.v39 ^= v30_.v49[9];
    v30_.v40 ^= v30_.v49[10];
    v30_.v41 ^= v30_.v49[11];
    v30_.v42 ^= v30_.v49[12];
    v30_.v43 ^= v30_.v49[13];
    v30_.v44 ^= v30_.v49[14];
    v30_.v45 ^= v30_.v49[15];
    v30_.v46 ^= v30_.v49[16];
    v30_.v47 ^= v30_.v49[17];
    BF_encrypt(&v30_.v30, 0, 0, &v30_.v30, (unsigned __int64)v30_.v49);
    v30_.v30 ^= v30_.v50;
    v30_.v31 ^= v30_.v51;
    v30_.v32 ^= v30_.v52;
    v30_.v33 ^= v30_.v53;
    v30_.v34 ^= v30_.v50;
    v30_.v35 ^= v30_.v51;
    v30_.v36 ^= v30_.v52;
    v30_.v37 ^= v30_.v53;
    v30_.v38 ^= v30_.v50;
    v30_.v39 ^= v30_.v51;
    v30_.v40 ^= v30_.v52;
    v30_.v41 ^= v30_.v53;
    v30_.v44 ^= v30_.v52;
    v30_.v45 ^= v30_.v53;
    v30_.v42 ^= v30_.v50;
    v30_.v43 ^= v30_.v51;
    v30_.v46 ^= v30_.v50;
    v30_.v47 ^= v30_.v51;
    BF_encrypt(&v30_.v30, 0, 0, &v30_.v30, (unsigned __int64)v30_.v49);
    --v7;
  } while (v7 != 0);
  v17 = -64;
  v18 = 1332899944;
  v28_.v29 = 1700884034;
  do {
    v19 = BF_encrypt(&v30_.v30, v18, v28_.v29, &v28_.v28,
                     (unsigned __int64)&v28_.v28);
    v20 = __CFADD__(v17++, 1);
    v18 = v19;
  } while (!v20);
  v30_.v50 = v19;
  v21 = -64;
  v22 = 1701343084;
  v30_.v51 = v28_.v29;
  v28_.v29 = 1684370003;
  do {
    v23 = BF_encrypt(&v30_.v30, v22, v28_.v29, &v28_.v28,
                     (unsigned __int64)&v28_.v28);
    v20 = __CFADD__(v21++, 1);
    v22 = v23;
  } while (!v20);
  v30_.v52 = v23;
  v24 = -64;
  v25 = 1668446532;
  v30_.v53 = v28_.v29;
  v28_.v29 = 1869963892;
  do {
    v26 = BF_encrypt(&v30_.v30, v25, v28_.v29, &v28_.v28,
                     (unsigned __int64)&v28_.v28);
    v20 = __CFADD__(v24++, 1);
    v25 = v26;
  } while (!v20);
  v30_.v54 = v26;
  v30_.v55 = v28_.v29;
  memcpy_plt(a3, a2, 28);
  v27 = SdkData_cb018c[(unsigned __int8)a2[28] - 32];
  v30_.v50 = bswap32(v30_.v50);
  v30_.v51 = bswap32(v30_.v51);
  a3[28] = SdkData_bc995a[v27 & 0x30];
  v30_.v52 = bswap32(v30_.v52);
  v30_.v53 = bswap32(v30_.v53);
  v30_.v54 = bswap32(v30_.v54);
  v30_.v55 = bswap32(v30_.v55);
  BF_encode(a3 + 29, (unsigned __int8*)&v30_.v50);
  a3[60] = 0;
  return a3;
}

#pragma GCC visibility pop
