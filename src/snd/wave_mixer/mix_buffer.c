#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_2134c08[2];
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
_QWORD* MixBuffer_Destructor(_QWORD* result);
void MixBuffer_DeletingDestructor(_QWORD* a1);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 snd_g_proxy_ptr[2];
__int64 MixBuffer_17d5c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6);
__int64 MixBuffer_17d780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6);
__int64 MixBuffer_17d940(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                         __int64 a6);
__int64 MixBuffer_17da60(__int64 a1, __int64 a2, unsigned int a3,
                         unsigned int a4, unsigned int a5);
__int64 MixBuffer_17e320(__int64 result, int a2);
bool MixBuffer_17e680(__int64 a1, __int64 a2, int a3, int a4, int a5);
__int64 MixBuffer_17e7e0(__int64 a1, __int64 a2, int a3, int a4);

_QWORD* MixBuffer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = result[1];
  *result = GameData_2134c08[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    v1[1] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (v1[2] != 0) {
    v5 = *v3;
    v1[2] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (v1[3] != 0) {
    v6 = *v3;
    v1[3] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (v1[4] != 0) {
    v7 = *v3;
    v1[4] = 0;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  return result;
}

__int64 MixBuffer_17d5c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 result;

  memset(*(_QWORD*)(a1 + 5568), 0, 115200, a4, a5, a6);
  memset(*(_QWORD*)(a1 + 5576), 0, 115200, v7, v8, v9);
  memset(*(_QWORD*)(a1 + 5584), 0, 115200, v10, v11, v12);
  memset(*(_QWORD*)(a1 + 5592), 0, 115200, v13, v14, v15);
  v16 = *(_QWORD*)(a1 + 5624);
  *(_QWORD*)(a1 + 5600) = 0;
  *(_DWORD*)(a1 + 5608) = -1;
  memset(v16, 0, 115200, v17, v18, v19);
  memset(*(_QWORD*)(a1 + 5632), 0, 115200, v20, v21, v22);
  memset(*(_QWORD*)(a1 + 5640), 0, 115200, v23, v24, v25);
  memset(*(_QWORD*)(a1 + 5648), 0, 115200, v26, v27, v28);
  v29 = *(_QWORD*)(a1 + 5680);
  *(_QWORD*)(a1 + 5656) = 0;
  *(_DWORD*)(a1 + 5664) = -1;
  memset(v29, 0, 115200, v30, v31, v32);
  memset(*(_QWORD*)(a1 + 5688), 0, 115200, v33, v34, v35);
  memset(*(_QWORD*)(a1 + 5696), 0, 115200, v36, v37, v38);
  memset(*(_QWORD*)(a1 + 5704), 0, 115200, v39, v40, v41);
  v42 = *(_QWORD*)(a1 + 5768);
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5720) = -1;
  memset(v42, 0, 57600, v43, v44, v45);
  *(_DWORD*)(*(_QWORD*)(a1 + 5768) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5768) + 57604LL) = 0;
  memset(*(_QWORD*)(a1 + 5776), 0, 57600, v46, v47, v48);
  *(_DWORD*)(*(_QWORD*)(a1 + 5776) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5776) + 57604LL) = 0;
  memset(*(_QWORD*)(a1 + 5784), 0, 57600, v49, v50, v51);
  *(_DWORD*)(*(_QWORD*)(a1 + 5784) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5784) + 57604LL) = 0;
  result = memset(*(_QWORD*)(a1 + 5792), 0, 57600, v52, v53, v54);
  *(_DWORD*)(*(_QWORD*)(a1 + 5792) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5792) + 57604LL) = 0;
  return result;
}

__int64 MixBuffer_17d780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 result;

  memset(*(_QWORD*)(a1 + 5568), 0, 115200, a4, a5, a6);
  memset(*(_QWORD*)(a1 + 5576), 0, 115200, v7, v8, v9);
  memset(*(_QWORD*)(a1 + 5584), 0, 115200, v10, v11, v12);
  memset(*(_QWORD*)(a1 + 5592), 0, 115200, v13, v14, v15);
  v16 = *(_QWORD*)(a1 + 5624);
  *(_QWORD*)(a1 + 5600) = 0;
  *(_DWORD*)(a1 + 5608) = -1;
  memset(v16, 0, 115200, v17, v18, v19);
  memset(*(_QWORD*)(a1 + 5632), 0, 115200, v20, v21, v22);
  memset(*(_QWORD*)(a1 + 5640), 0, 115200, v23, v24, v25);
  memset(*(_QWORD*)(a1 + 5648), 0, 115200, v26, v27, v28);
  v29 = *(_QWORD*)(a1 + 5680);
  *(_QWORD*)(a1 + 5656) = 0;
  *(_DWORD*)(a1 + 5664) = -1;
  memset(v29, 0, 115200, v30, v31, v32);
  memset(*(_QWORD*)(a1 + 5688), 0, 115200, v33, v34, v35);
  memset(*(_QWORD*)(a1 + 5696), 0, 115200, v36, v37, v38);
  memset(*(_QWORD*)(a1 + 5704), 0, 115200, v39, v40, v41);
  v42 = *(_QWORD*)(a1 + 5768);
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5720) = -1;
  memset(v42, 0, 57600, v43, v44, v45);
  *(_DWORD*)(*(_QWORD*)(a1 + 5768) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5768) + 57604LL) = 0;
  memset(*(_QWORD*)(a1 + 5776), 0, 57600, v46, v47, v48);
  *(_DWORD*)(*(_QWORD*)(a1 + 5776) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5776) + 57604LL) = 0;
  memset(*(_QWORD*)(a1 + 5784), 0, 57600, v49, v50, v51);
  *(_DWORD*)(*(_QWORD*)(a1 + 5784) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5784) + 57604LL) = 0;
  result = memset(*(_QWORD*)(a1 + 5792), 0, 57600, v52, v53, v54);
  *(_DWORD*)(*(_QWORD*)(a1 + 5792) + 57600LL) = 0;
  *(_DWORD*)(*(_QWORD*)(a1 + 5792) + 57604LL) = 0;
  return result;
}

__int64 MixBuffer_17d940(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                         __int64 a6)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;

  v6 = a1 + 5560;
  v7 = 56LL * *(int*)(a1 + 5728);
  v8 = *(_DWORD*)(a1 + 5560 + v7 + 48);
  if ((v8 & 0x80000000) != 0) {
    if (a3 * a2 >= 1) {
      v9 = 4LL * (unsigned int)(a3 * a2);
      v11 = a2;
      v12 = a3;
      v13 = a1 + 5568;
      memset(*(_QWORD*)(a1 + 5568 + 56LL * *(int*)(a1 + 5728)), 0, v9, a4, a5,
             a6);
      memset(*(_QWORD*)(v13 + 56LL * *(int*)(a1 + 5728) + 8), 0, v9, v14, v15,
             v16);
      memset(*(_QWORD*)(v13 + 56LL * *(int*)(a1 + 5728) + 16), 0, v9, v17, v18,
             v19);
      memset(*(_QWORD*)(v13 + 56LL * *(int*)(a1 + 5728) + 24), 0, v9, v20, v21,
             v22);
      a2 = v11;
      a3 = v12;
      v7 = 56LL * *(int*)(a1 + 5728);
    }
    v23 = (_DWORD*)(v6 + v7);
    v23[10] = a2;
    v23[11] = a3;
    v23[12] = 0;
  }
  else {
    (*(void (**)(_QWORD, const char*))(**(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary : WaveMixer can not start mixising !!\n");
  }
  return v8 >> 31;
}

__int64 MixBuffer_17da60(__int64 a1, __int64 a2, unsigned int a3,
                         unsigned int a4, unsigned int a5)
{
  unsigned int v5;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  __int64 result;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _DWORD* v34;
  _DWORD* v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _DWORD* v46;
  _DWORD* v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _DWORD* v58;
  _DWORD* v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _DWORD* v70;
  _DWORD* v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  __int64 v78;
  _QWORD v79[4];

  v5 = a4 * a3;
  if ((int)(a4 * a3) >= 1) {
    v11 = v5 & 7;
    if (v5 >= 8) {
      v12 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 4) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 8) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 12) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 16) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 20) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v12 + 24) = 0;
        v13 = *(_QWORD*)(a1 + 5736) + 4 * v12;
        v12 += 8;
        *(_DWORD*)(v13 + 28) = 0;
      } while ((v5 & 0x7FFFFFF8) != v12);
    }
    else {
      v12 = 0;
    }
    if ((v5 & 7) != 0) {
      v14 = 4 * v12;
      do {
        --v11;
        *(_DWORD*)(*(_QWORD*)(a1 + 5736) + v14) = 0;
        v14 += 4;
      } while (v11 != 0);
    }
    v15 = v5 & 7;
    if (v5 >= 8) {
      v16 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 4) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 8) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 12) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 16) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 20) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v16 + 24) = 0;
        v17 = *(_QWORD*)(a1 + 5744) + 4 * v16;
        v16 += 8;
        *(_DWORD*)(v17 + 28) = 0;
      } while ((v5 & 0x7FFFFFF8) != v16);
    }
    else {
      v16 = 0;
    }
    if ((v5 & 7) != 0) {
      v18 = 4 * v16;
      do {
        --v15;
        *(_DWORD*)(*(_QWORD*)(a1 + 5744) + v18) = 0;
        v18 += 4;
      } while (v15 != 0);
    }
    v19 = v5 & 7;
    if (v5 >= 8) {
      v20 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 4) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 8) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 12) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 16) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 20) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v20 + 24) = 0;
        v21 = *(_QWORD*)(a1 + 5752) + 4 * v20;
        v20 += 8;
        *(_DWORD*)(v21 + 28) = 0;
      } while ((v5 & 0x7FFFFFF8) != v20);
    }
    else {
      v20 = 0;
    }
    if ((v5 & 7) != 0) {
      v22 = 4 * v20;
      do {
        --v19;
        *(_DWORD*)(*(_QWORD*)(a1 + 5752) + v22) = 0;
        v22 += 4;
      } while (v19 != 0);
    }
    v23 = v5 & 7;
    if (v5 >= 8) {
      v24 = 0;
      do {
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 4) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 8) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 12) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 16) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 20) = 0;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v24 + 24) = 0;
        v25 = *(_QWORD*)(a1 + 5760) + 4 * v24;
        v24 += 8;
        *(_DWORD*)(v25 + 28) = 0;
      } while ((v5 & 0x7FFFFFF8) != v24);
    }
    else {
      v24 = 0;
    }
    if ((v5 & 7) != 0) {
      v26 = 4 * v24;
      do {
        --v23;
        *(_DWORD*)(*(_QWORD*)(a1 + 5760) + v26) = 0;
        v26 += 4;
      } while (v23 != 0);
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 1152LL))(a2);
  if ((result & 1) != 0) {
    v28 = *(_QWORD*)(a1 + 5744);
    v79[0] = *(_QWORD*)(a1 + 5736);
    v79[1] = v28;
    v29 = *(_QWORD*)(a1 + 5760);
    v79[2] = *(_QWORD*)(a1 + 5752);
    v79[3] = v29;
    result = (*(__int64 (**)(__int64, _QWORD*, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)a2 + 1168LL))(a2, v79, a3, a4, a5);
    if ((int)v5 >= 1) {
      v30 = a1 + 5560;
      v31 = v5 & 7;
      v32 = *(_QWORD*)(a1 + 5560 + 56LL * *(int*)(a1 + 5728) + 8);
      if (v5 >= 8) {
        v34 = (_DWORD*)(v32 + 16);
        v33 = 0;
        do {
          v35 = (_DWORD*)(v32 + 4 * v33);
          *(v34 - 4) += *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33);
          v36 = v35[2];
          v37 = v35[3];
          v35[1] += *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 4);
          v35[2] = v36 + *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 8);
          v35[3] = v37 + *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 12);
          v38 = v34[1];
          *v34 += *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 16);
          v39 = v38 + *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 20);
          LODWORD(v35) = v34[2];
          v40 = v34[3];
          v34[1] = v39;
          v34[2] =
              (_DWORD)v35 + *(_DWORD*)(*(_QWORD*)(a1 + 5736) + 4 * v33 + 24);
          v41 = *(_QWORD*)(a1 + 5736) + 4 * v33;
          v33 += 8;
          v34[3] = v40 + *(_DWORD*)(v41 + 28);
          v34 += 8;
        } while ((v5 & 0x7FFFFFF8) != v33);
      }
      else {
        v33 = 0;
      }
      if ((v5 & 7) != 0) {
        v42 = 4 * v33;
        do {
          --v31;
          *(_DWORD*)(v32 + v42) += *(_DWORD*)(*(_QWORD*)(a1 + 5736) + v42);
          v42 += 4;
        } while (v31 != 0);
      }
      v43 = v5 & 7;
      v44 = *(_QWORD*)(v30 + 56LL * *(int*)(a1 + 5728) + 16);
      if (v5 >= 8) {
        v46 = (_DWORD*)(v44 + 16);
        v45 = 0;
        do {
          v47 = (_DWORD*)(v44 + 4 * v45);
          *(v46 - 4) += *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45);
          v48 = v47[2];
          v49 = v47[3];
          v47[1] += *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 4);
          v47[2] = v48 + *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 8);
          v47[3] = v49 + *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 12);
          v50 = v46[1];
          *v46 += *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 16);
          v51 = v50 + *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 20);
          LODWORD(v47) = v46[2];
          v52 = v46[3];
          v46[1] = v51;
          v46[2] =
              (_DWORD)v47 + *(_DWORD*)(*(_QWORD*)(a1 + 5744) + 4 * v45 + 24);
          v53 = *(_QWORD*)(a1 + 5744) + 4 * v45;
          v45 += 8;
          v46[3] = v52 + *(_DWORD*)(v53 + 28);
          v46 += 8;
        } while ((v5 & 0x7FFFFFF8) != v45);
      }
      else {
        v45 = 0;
      }
      if ((v5 & 7) != 0) {
        v54 = 4 * v45;
        do {
          --v43;
          *(_DWORD*)(v44 + v54) += *(_DWORD*)(*(_QWORD*)(a1 + 5744) + v54);
          v54 += 4;
        } while (v43 != 0);
      }
      v55 = v5 & 7;
      v56 = *(_QWORD*)(v30 + 56LL * *(int*)(a1 + 5728) + 24);
      if (v5 >= 8) {
        v58 = (_DWORD*)(v56 + 16);
        v57 = 0;
        do {
          v59 = (_DWORD*)(v56 + 4 * v57);
          *(v58 - 4) += *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57);
          v60 = v59[2];
          v61 = v59[3];
          v59[1] += *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 4);
          v59[2] = v60 + *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 8);
          v59[3] = v61 + *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 12);
          v62 = v58[1];
          *v58 += *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 16);
          v63 = v62 + *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 20);
          LODWORD(v59) = v58[2];
          v64 = v58[3];
          v58[1] = v63;
          v58[2] =
              (_DWORD)v59 + *(_DWORD*)(*(_QWORD*)(a1 + 5752) + 4 * v57 + 24);
          v65 = *(_QWORD*)(a1 + 5752) + 4 * v57;
          v57 += 8;
          v58[3] = v64 + *(_DWORD*)(v65 + 28);
          v58 += 8;
        } while ((v5 & 0x7FFFFFF8) != v57);
      }
      else {
        v57 = 0;
      }
      if ((v5 & 7) != 0) {
        v66 = 4 * v57;
        do {
          --v55;
          *(_DWORD*)(v56 + v66) += *(_DWORD*)(*(_QWORD*)(a1 + 5752) + v66);
          v66 += 4;
        } while (v55 != 0);
      }
      v67 = v5 & 7;
      v68 = *(_QWORD*)(v30 + 56LL * *(int*)(a1 + 5728) + 32);
      if (v5 >= 8) {
        v70 = (_DWORD*)(v68 + 16);
        v69 = 0;
        do {
          v71 = (_DWORD*)(v68 + 4 * v69);
          *(v70 - 4) += *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69);
          v72 = v71[2];
          v73 = v71[3];
          v71[1] += *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 4);
          v71[2] = v72 + *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 8);
          v71[3] = v73 + *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 12);
          v74 = v70[1];
          *v70 += *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 16);
          v75 = v74 + *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 20);
          LODWORD(v71) = v70[2];
          v76 = v70[3];
          v70[1] = v75;
          v70[2] =
              (_DWORD)v71 + *(_DWORD*)(*(_QWORD*)(a1 + 5760) + 4 * v69 + 24);
          v77 = *(_QWORD*)(a1 + 5760) + 4 * v69;
          v69 += 8;
          v70[3] = v76 + *(_DWORD*)(v77 + 28);
          v70 += 8;
        } while ((v5 & 0x7FFFFFF8) != v69);
      }
      else {
        v69 = 0;
      }
      if ((v5 & 7) != 0) {
        v78 = 4 * v69;
        do {
          --v67;
          *(_DWORD*)(v68 + v78) += *(_DWORD*)(*(_QWORD*)(a1 + 5760) + v78);
          v78 += 4;
        } while (v67 != 0);
      }
    }
  }
  return result;
}

__int64 MixBuffer_17e320(__int64 result, int a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v55;

  v2 = *(_DWORD*)(result + 5732);
  v3 = result + 5560 + 56LL * v2;
  if ((*(_DWORD*)(v3 + 48) & 0x80000000) != 0) {
    return (*(__int64 (**)(_QWORD, const char*))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary : WaveMixer can not copy buffer !!\n");
  }
  v4 = *(_DWORD*)(result + 5732);
  if (a2 >= 1) {
    v5 = *(_QWORD*)(result + 5768);
    v6 = *(_DWORD*)(v3 + 40);
    LODWORD(v7) = 0;
    v8 = 0;
    v9 = result + 5568;
    v10 = *(_QWORD*)(result + 5568 + 56LL * v4);
    v11 = v6 * a2;
    v12 = *(_DWORD*)(v5 + 57604);
  LABEL_4:
    v7 = (int)v7;
    v13 = 1;
    if (v11 <= v8 + 1) {
      v14 = v8 + 1;
    }
    else {
      v14 = v11;
    }
    v15 = v14 - 1;
    while (1) {
      v16 = *(_DWORD*)(v10 + 4 * v7);
      if (v16 <= -32768) {
        v16 = -32768;
      }
      if (v16 >= 0x7FFF) {
        LOWORD(v16) = 0x7FFF;
      }
      *(_WORD*)(v5 + 2LL * v12) = v16;
      v17 = *(_DWORD*)(v5 + 57604);
      v12 = v17 <= 28798 ? v17 + 1 : 0;
      *(_DWORD*)(v5 + 57604) = v12;
      if (v15 == v8) {
        break;
      }
      ++v7;
      ++v8;
      if (v12 == *(_DWORD*)(v5 + 57600) || v13++ >= a2) {
        if (v8 < v11 && v12 != *(_DWORD*)(v5 + 57600)) {
          goto LABEL_4;
        }
        break;
      }
    }
    v19 = *(_QWORD*)(result + 5776);
    LODWORD(v20) = 0;
    v21 = 0;
    v22 = *(_DWORD*)(v19 + 57604);
    v23 = *(_QWORD*)(v9 + 56LL * *(int*)(result + 5732) + 8);
  LABEL_23:
    v20 = (int)v20;
    v24 = 1;
    if (v11 <= v21 + 1) {
      v25 = v21 + 1;
    }
    else {
      v25 = v11;
    }
    v26 = v25 - v21;
    while (1) {
      v27 = *(_DWORD*)(v23 + 4 * v20);
      if (v27 <= -32768) {
        v27 = -32768;
      }
      if (v27 >= 0x7FFF) {
        LOWORD(v27) = 0x7FFF;
      }
      *(_WORD*)(v19 + 2LL * v22) = v27;
      v28 = *(_DWORD*)(v19 + 57604);
      v22 = v28 <= 28798 ? v28 + 1 : 0;
      *(_DWORD*)(v19 + 57604) = v22;
      if (v26 == v24) {
        break;
      }
      ++v20;
      v29 = v24 + 1;
      if (v22 == *(_DWORD*)(v19 + 57600) || v24++ >= a2) {
        v21 = v21 + v29 - 1;
        if (v21 < v11 && v22 != *(_DWORD*)(v19 + 57600)) {
          goto LABEL_23;
        }
        break;
      }
    }
    v31 = *(_QWORD*)(result + 5784);
    LODWORD(v32) = 0;
    v33 = 0;
    v34 = *(_DWORD*)(v31 + 57604);
    v35 = *(_QWORD*)(v9 + 56LL * *(int*)(result + 5732) + 16);
  LABEL_42:
    v32 = (int)v32;
    v36 = 1;
    if (v11 <= v33 + 1) {
      v37 = v33 + 1;
    }
    else {
      v37 = v11;
    }
    v38 = v37 - v33;
    while (1) {
      v39 = *(_DWORD*)(v35 + 4 * v32);
      if (v39 <= -32768) {
        v39 = -32768;
      }
      if (v39 >= 0x7FFF) {
        LOWORD(v39) = 0x7FFF;
      }
      *(_WORD*)(v31 + 2LL * v34) = v39;
      v40 = *(_DWORD*)(v31 + 57604);
      v34 = v40 <= 28798 ? v40 + 1 : 0;
      *(_DWORD*)(v31 + 57604) = v34;
      if (v38 == v36) {
        break;
      }
      ++v32;
      v41 = v36 + 1;
      if (v34 == *(_DWORD*)(v31 + 57600) || v36++ >= a2) {
        v33 = v33 + v41 - 1;
        if (v33 < v11 && v34 != *(_DWORD*)(v31 + 57600)) {
          goto LABEL_42;
        }
        break;
      }
    }
    v43 = *(_QWORD*)(result + 5792);
    LODWORD(v44) = 0;
    v45 = 0;
    v46 = *(_DWORD*)(v43 + 57604);
    v47 = *(_QWORD*)(v9 + 56LL * *(int*)(result + 5732) + 24);
  LABEL_61:
    v44 = (int)v44;
    v48 = 1;
    if (v11 <= v45 + 1) {
      v49 = v45 + 1;
    }
    else {
      v49 = v11;
    }
    v50 = v49 - v45;
    while (1) {
      v51 = *(_DWORD*)(v47 + 4 * v44);
      if (v51 <= -32768) {
        v51 = -32768;
      }
      if (v51 >= 0x7FFF) {
        LOWORD(v51) = 0x7FFF;
      }
      *(_WORD*)(v43 + 2LL * v46) = v51;
      v52 = *(_DWORD*)(v43 + 57604);
      v46 = v52 <= 28798 ? v52 + 1 : 0;
      *(_DWORD*)(v43 + 57604) = v46;
      if (v50 == v48) {
        break;
      }
      ++v44;
      v53 = v48 + 1;
      if (v46 == *(_DWORD*)(v43 + 57600) || v48++ >= a2) {
        v45 = v45 + v53 - 1;
        if (v45 < v11 && v46 != *(_DWORD*)(v43 + 57600)) {
          goto LABEL_61;
        }
        break;
      }
    }
    v2 = *(_DWORD*)(result + 5732);
    v4 = v2;
  }
  *(_DWORD*)(result + 5560 + 56LL * v4 + 48) = -1;
  if (v2 <= 1) {
    v55 = v2 + 1;
  }
  else {
    v55 = 0;
  }
  *(_DWORD*)(result + 5732) = v55;
  return result;
}

bool MixBuffer_17e680(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  _BOOL4 v20;
  int v21;
  __int64 v22;
  unsigned int v23;

  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 216LL))(a2);
  if (v10 != 0) {
    v11 = a5 * a4;
    if (a5 < 1) {
      if (v10 <= 1) {
        v21 = 1;
      }
      else {
        v21 = v10;
      }
      if (v11 >= 1) {
        v13 = v21;
      }
      else {
        v13 = 1;
      }
      v20 = v11 < 1 && v10 > 1;
    }
    else {
      v12 = 0;
      v13 = 0;
      v14 = *(_QWORD*)(a1 + 8LL * a3 + 5768);
      v15 = *(_DWORD*)(v14 + 57600);
      do {
        v16 = a5 + v12;
        v17 = 2LL * v12;
        v18 = a5;
        while (v15 != *(_DWORD*)(v14 + 57604)) {
          ++v12;
          *(_WORD*)(*(_QWORD*)(a1 + 5800) + v17) = *(_WORD*)(v14 + 2LL * v15);
          v17 += 2;
          v19 = *(_DWORD*)(v14 + 57600);
          if (v19 <= 28798) {
            v15 = v19 + 1;
          }
          else {
            v15 = 0;
          }
          --v18;
          *(_DWORD*)(v14 + 57600) = v15;
          if (v18 == 0) {
            v12 = v16;
            break;
          }
        }
        v20 = (int)++v13 < v10;
      } while (v12 < v11 && (int)v13 < v10);
    }
    v22 = *(_QWORD*)(a1 + 5800);
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 136LL))(a2);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a2 + 200LL))(
        a2, v22, v13, v23);
    if (a3 == 0) {
      *(_QWORD*)(a1 + 5808) += v13;
    }
  }
  else {
    return false;
  }
  return v20;
}

__int64 MixBuffer_17e7e0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 216LL))(a2);
  if ((_DWORD)result != 0) {
    v9 = a4 * a3;
    if (a4 < 1) {
      if ((int)result <= 1) {
        v20 = 1;
      }
      else {
        v20 = result;
      }
      if (v9 < 1) {
        v11 = 1;
      }
      else {
        v11 = v20;
      }
    }
    else {
      v10 = 0;
      LODWORD(v11) = 0;
      v12 = a4;
      do {
        v13 = v10;
        if ((a4 & 7) != 0) {
          v14 = a4 & 7;
          v15 = v10;
          do {
            v13 = v15 + 1;
            --v14;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + 2 * v15++) = 0;
          } while (v14 != 0);
        }
        if ((unsigned int)a4 >= 8) {
          v16 = 2 * v13;
          v17 = v12 - v13;
          v18 = 0;
          do {
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 2) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 4) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 6) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 8) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 10) = 0;
            *(_WORD*)(*(_QWORD*)(a1 + 5800) + v16 + 2 * v18 + 12) = 0;
            v19 = *(_QWORD*)(a1 + 5800) + v16 + 2 * v18;
            v18 += 8;
            *(_WORD*)(v19 + 14) = 0;
          } while (v17 != (_DWORD)v18);
        }
        v10 += a4;
        v11 = (unsigned int)(v11 + 1);
        if (v10 >= v9) {
          break;
        }
        v12 += a4;
      } while ((int)v11 < (int)result);
    }
    return (*(__int64 (**)(__int64, _QWORD, __int64, _QWORD))(
        *(_QWORD*)a2 + 200LL))(a2, *(_QWORD*)(a1 + 5800), v11,
                               (unsigned int)a4);
  }
  return result;
}

void MixBuffer_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = a1[1];
  *a1 = GameData_2134c08[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    a1[1] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (a1[2] != 0) {
    v5 = *v3;
    a1[2] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (a1[3] != 0) {
    v6 = *v3;
    a1[3] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (a1[4] != 0) {
    v7 = *v3;
    a1[4] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  GameRoutine_651250(a1, 0x38u);
}

#pragma GCC visibility pop
