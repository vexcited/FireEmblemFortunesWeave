#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 md5crypt(unsigned __int8*, _BYTE*, __int64);
__int64 memcmp_plt(_QWORD, _QWORD, _QWORD);
__int64 sha512crypt(_BYTE*, __int64, __int64);
extern _BYTE SdkData_cb1da8[];
extern _UNKNOWN SdkData_bb0978;
extern _UNKNOWN SdkData_cb1cac;
extern unsigned __int8 SdkData_cb1bec[];
const char* musl_crypt_7931f0(unsigned __int8* a1, _BYTE* a2, __int64 a3);
_DWORD* musl_crypt_7954e0(_DWORD* result, unsigned int* a2);
const char* musl_crypt_795750(_BYTE* a1, __int64 a2, __int64 a3);
_QWORD* musl_crypt_7969e0(_QWORD* result, __int64 a2);

const char* musl_crypt_7931f0(unsigned __int8* a1, _BYTE* a2, __int64 a3)
{
  __int64 v3;
  _BYTE* v4;
  const char* v5;
  _BYTE v7[64];

  v3 = md5crypt(a1, a2, a3);
  v4 = (_BYTE*)md5crypt(SdkData_cb1bec, "$1$abcd0123$", (__int64)v7);
  v5 = "*";
  if (v3 != 0 && v4 == v7 &&
      (unsigned int)memcmp_plt(v7, "$1$abcd0123$9Qcg8DyviekV3tDGMZynJ1", 35) ==
          0) {
    return (const char*)v3;
  }
  return v5;
}

_DWORD* musl_crypt_7954e0(_DWORD* result, unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  _DWORD* v12;
  unsigned int v13;
  unsigned __int64 v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned __int64 v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int* v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned __int64 v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned __int64 v47;
  int v48;
  _DWORD* v49;
  int v50;
  int v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  _DWORD v55[64];

  v2 = 0;
  v3 = bswap32(a2[1]);
  v55[0] = bswap32(*a2);
  v55[1] = v3;
  v4 = bswap32(a2[3]);
  v55[2] = bswap32(a2[2]);
  v55[3] = v4;
  v5 = bswap32(a2[5]);
  v55[4] = bswap32(a2[4]);
  v55[5] = v5;
  v6 = bswap32(a2[7]);
  v55[6] = bswap32(a2[6]);
  v55[7] = v6;
  v7 = bswap32(a2[9]);
  v55[8] = bswap32(a2[8]);
  v55[9] = v7;
  v8 = bswap32(a2[11]);
  v55[10] = bswap32(a2[10]);
  v55[11] = v8;
  v9 = bswap32(a2[13]);
  v55[12] = bswap32(a2[12]);
  v55[13] = v9;
  v10 = bswap32(a2[15]);
  v55[14] = bswap32(a2[14]);
  v55[15] = v10;
  v11 = v55[0];
  do {
    v12 = &v55[v2];
    v2 += 2;
    v13 = v12[15];
    HIDWORD(v14) = v12[14];
    LODWORD(v14) = HIDWORD(v14);
    v15 = ((v14 >> 17) ^ __ROR4__(HIDWORD(v14), 19) ^ (HIDWORD(v14) >> 10)) +
          v12[9] + v11;
    v16 = v12[1];
    v11 = v12[2];
    HIDWORD(v14) = v16;
    LODWORD(v14) = v16;
    v17 = v14 >> 7;
    v18 = __PAIR64__(v11, __ROR4__(v16, 18));
    v19 = v17 ^ v18 ^ (v16 >> 3);
    LODWORD(v18) = v11;
    v20 = v18 >> 7;
    v22 = __PAIR64__(v13, __ROR4__(v11, 18));
    v21 = v20 ^ v22;
    LODWORD(v22) = v13;
    v23 = ((v22 >> 17) ^ __ROR4__(v13, 19) ^ (v13 >> 10)) + v12[10] + v16 +
          (v21 ^ (v11 >> 3));
    v12[16] = v15 + v19;
    v12[17] = v23;
  } while (v2 != 48);
  v24 = result[3];
  v25 = result[6];
  v26 = result[7];
  v27 = (int*)&SdkData_cb1cac;
  v28 = 0;
  v29 = v26;
  v31 = result[8];
  v30 = result[9];
  v32 = v30;
  v34 = result[4];
  v33 = result[5];
  v35 = v31;
  v36 = v25;
  v37 = v33;
  v38 = v34;
  v39 = v24;
  v40 = result[2];
  do {
    v41 = v29;
    HIDWORD(v42) = v36;
    LODWORD(v42) = v36;
    v43 = v39;
    v44 = v36;
    v45 = v40;
    v46 = (v42 >> 6) ^ __ROR4__(v36, 11);
    v47 = __PAIR64__(v40, __ROR4__(v36, 25));
    v48 = v32 + (v41 & v36 | v35 & ~v36) + *(v27 - 1) + (v46 ^ v47);
    v49 = &v55[v28];
    v28 += 2;
    v50 = v49[1];
    LODWORD(v49) = v48 + *v49;
    LODWORD(v47) = v40;
    v29 = (_DWORD)v49 + v37;
    v39 = (v38 & (v43 | v40) | v43 & v40) +
          ((v47 >> 2) ^ __ROR4__(v40, 13) ^ __ROR4__(v40, 22)) + (_DWORD)v49;
    HIDWORD(v47) = v29;
    LODWORD(v47) = v29;
    v51 = (v47 >> 6) ^ __ROR4__(v29, 11);
    v52 = __PAIR64__(v39, __ROR4__(v29, 25));
    v53 = *v27;
    v27 += 2;
    v54 = v35 + (v36 & v29 | v41 & ~v29) + v53 + v50 + (v51 ^ v52);
    LODWORD(v52) = v39;
    v32 = v41;
    v36 = v54 + v38;
    v38 = v40;
    v40 = (v43 & (v40 | v39) | v40 & v39) +
          ((v52 >> 2) ^ __ROR4__(v39, 13) ^ __ROR4__(v39, 22)) + v54;
    v35 = v44;
    v37 = v43;
  } while (v28 != 64);
  result[2] += v40;
  result[3] = v39 + v24;
  result[6] = v36 + v25;
  result[7] = v29 + v26;
  result[4] = v45 + v34;
  result[5] = v43 + v33;
  result[8] = v44 + v31;
  result[9] = v41 + v30;
  return result;
}

const char* musl_crypt_795750(_BYTE* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _BYTE* v4;
  const char* v5;
  _BYTE v7[128];

  v3 = sha512crypt(a1, a2, a3);
  v4 = (_BYTE*)sha512crypt(
      SdkData_cb1da8, (__int64)"$6$rounds=1234$abc0123456789$", (__int64)v7);
  v5 = "*";
  if (v3 != 0 && v4 == v7 &&
      (unsigned int)memcmp_plt(
          v7,
          "$6$rounds=1234$abc0123456789$BCpt8zLrc/"
          "RcyuXmCDOE1ALqMXB2MH6n1g891HhFj8.w7LxGv.FTkqq6Vxc/km3Y0jE0"
          "j24jY5PIv/oOu6reg1",
          116) == 0) {
    return (const char*)v3;
  }
  return v5;
}

_QWORD* musl_crypt_7969e0(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 i;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v44[80];

  v2 = a2 + 7;
  for (i = 0; i != 16; i += 2) {
    v4 = *(_QWORD*)(v2 - 7);
    v5 = *(_QWORD*)(v2 + 1);
    v6 = &v44[i];
    v2 += 16;
    *v6 = bswap64(v4);
    v6[1] = bswap64(v5);
  }
  v7 = v44[0];
  v8 = 0;
  do {
    v9 = &v44[v8];
    v8 += 2;
    v10 = (__ROR8__(v9[14], 19) ^ __ROR8__(v9[14], 61) ^ (v9[14] >> 6)) +
          v9[9] + v7;
    v11 = v9[1];
    v7 = v9[2];
    v12 = (__ROR8__(v9[15], 19) ^ __ROR8__(v9[15], 61) ^ (v9[15] >> 6)) +
          v9[10] + v11 + (__ROR8__(v7, 1) ^ __ROR8__(v7, 8) ^ (v7 >> 7));
    v9[16] = v10 + (__ROR8__(v11, 1) ^ __ROR8__(v11, 8) ^ (v11 >> 7));
    v9[17] = v12;
  } while (v8 != 64);
  v13 = result[2];
  v14 = result[5];
  v15 = result[6];
  v16 = (__int64*)&SdkData_bb0978;
  v17 = 0;
  v18 = v15;
  v20 = result[7];
  v19 = result[8];
  v21 = v19;
  v23 = result[3];
  v22 = result[4];
  v24 = v20;
  v25 = v14;
  v26 = v22;
  v27 = v23;
  v28 = v13;
  v29 = result[1];
  do {
    v30 = v18;
    v31 = v28;
    v32 = v25;
    v33 = v29;
    v34 = __ROR8__(v25, 14) ^ __ROR8__(v25, 18);
    v35 = __ROR8__(v25, 41);
    v36 = v21 + (v30 & v25 | v24 & ~v25);
    v37 = *(v16 - 1);
    v38 = *v16;
    v16 += 2;
    v39 = v36 + v37 + (v34 ^ v35);
    v40 = &v44[v17];
    v17 += 2;
    v41 = v40[1];
    v42 = v39 + *v40;
    v18 = v42 + v26;
    v28 = (v27 & (v31 | v33) | v31 & v33) +
          (__ROR8__(v33, 28) ^ __ROR8__(v33, 34) ^ __ROR8__(v33, 39)) + v42;
    v43 = v24 + (v32 & v18 | v30 & ~v18) + v38 + v41 +
          (__ROR8__(v18, 14) ^ __ROR8__(v18, 18) ^ __ROR8__(v18, 41));
    v25 = v43 + v27;
    v21 = v30;
    v27 = v33;
    v29 = (v31 & (v33 | v28) | v33 & v28) +
          (__ROR8__(v28, 28) ^ __ROR8__(v28, 34) ^ __ROR8__(v28, 39)) + v43;
    v24 = v32;
    v26 = v31;
  } while (v17 != 80);
  result[1] += v29;
  result[2] = v28 + v13;
  result[5] = v25 + v14;
  result[6] = v18 + v15;
  result[3] = v33 + v23;
  result[4] = v31 + v22;
  result[7] = v32 + v20;
  result[8] = v30 + v19;
  return result;
}

#pragma GCC visibility pop
