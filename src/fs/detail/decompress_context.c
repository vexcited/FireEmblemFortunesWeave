#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17d59a0(_QWORD*);
__int64 GameRoutine_17d57c0(__int64, __int64**);
__int64 fw_compression_GetFrameContentSize(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* GameRoutine_17d5f20(__int64* result, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64* DecompressContext_17d62a0(__int64 a1, __int64** a2);
__int64 CreateDecoder(void);
__int64 DecompressBuffer(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 DecompressStream(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a340(_QWORD, _QWORD);
__int64 ResetStream(_QWORD);
extern __int64 (*GameData_20d9a50[])();
extern __int64 (*GameData_20d9ad0[])();
extern __int64 (*GameData_20d9b60[])();
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
_QWORD* fs_detail_DecompressContext__decompressMulti(_QWORD* a1);
__int64* fs_detail_DecompressContext__decompress(__int64* result, char a2);

_QWORD* fs_detail_DecompressContext__decompressMulti(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  char v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  int8x16_t* v21;
  unsigned __int64 v22;
  int8x16_t* v23;
  __int64 v24;
  const char* v25;
  const char* v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  unsigned __int64 v42;
  unsigned __int8 v43;
  int8x16_t* v44;
  int8x16_t* v45;
  unsigned __int64 i;
  unsigned __int8 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD v56[4];
  _QWORD* v57;
  int8x16x4_t v58;
  int8x16x4_t v59;
  int8x16x4_t v60;
  int8x16x4_t v61;
  int8x16x4_t v62;
  int8x16x4_t v63;
  int8x16x4_t v64;
  int8x16x4_t v65;
  int8x16x4_t v66;
  int8x16x4_t v67;
  int8x16x4_t v68;
  int8x16x4_t v69;
  int8x16x4_t v70;
  int8x16x4_t v71;
  int8x16x4_t v72;
  int8x16x4_t v73;
  int8x16x4_t v74;
  int8x16x4_t v75;
  int8x16x4_t v76;
  int8x16x4_t v77;

  v1 = (_QWORD*)a1[14];
  v2 = a1[12];
  v4 = v1[71];
  v5 = (*(__int64 (**)(_QWORD*))(*v1 + 56LL))(v1);
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v4 + 16LL))(v4, v2,
                                                                         v5);
  v7 = a1[14];
  v8 = *(_QWORD*)(v7 + 592);
  *(_QWORD*)(v7 + 592) = v6;
  if (v8 != 0) {
    v9 = *(_QWORD*)(v7 + 640);
    v56[0] = v8;
    if (v9 == 0) {
    LABEL_50:
      GameRoutine_60a310_alt1(v9);
    }
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v56);
  }
  v56[0] = GameData_20d9b60;
  v56[1] = v1;
  v57 = v56;
  GameRoutine_60a340(v56, v7 + 608);
  result = v57;
  if (v57 == v56) {
    v11 = 32;
  }
  else {
    if (v57 == nullptr) {
      goto LABEL_9;
    }
    v11 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*v57 + v11))((__int64)v57);
LABEL_9:
  v12 = (_QWORD*)*a1;
  v13 = (_QWORD*)a1[1];
  if ((_QWORD*)*a1 != v13) {
    v14 = 0;
    while (1) {
      v15 = (_QWORD*)a1[14];
      v16 = a1[12];
      if ((v14 & 1) != 0) {
        break;
      }
      result = (_QWORD*)DecompressBuffer(v15[74], a1[12], *v12, v12[8]);
    LABEL_12:
      v12 += 10;
      v14 = 1;
      if (v12 == v13) {
        goto LABEL_38;
      }
    }
    v17 = v15[71];
    v18 = (*(__int64 (**)(_QWORD*))(*v15 + 56LL))(v15);
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v17 + 16LL))(
        v17, v16, v18);
    result = (_QWORD*)DecompressBuffer(v19, a1[12], *v12, v12[8]);
    v20 = a1[12];
    v21 = *(int8x16_t**)(a1[14] + 592LL);
    v22 = v20 - 65;
    if (v20 < 0x41) {
      v23 = (int8x16_t*)v19;
    }
    else {
      if ((~(_WORD)v22 & 0x1C0) != 0) {
        v24 = ((unsigned __int8)((unsigned int)v22 >> 6) + 1) & 7;
        v23 = (int8x16_t*)v19;
        v20 -= v24 << 6;
        do {
          v58 = vld4q_s8((const char*)v23);
          v23 += 4;
          --v24;
          v67 = vld4q_s8((const char*)v21);
          v76.val[0] = vorrq_s8(v67.val[0], v58.val[0]);
          v76.val[1] = vorrq_s8(v67.val[1], v58.val[1]);
          v76.val[2] = vorrq_s8(v67.val[2], v58.val[2]);
          v76.val[3] = vorrq_s8(v67.val[3], v58.val[3]);
          vst4q_s8((char*)v21, v76);
          v21 += 4;
        } while (v24 != 0);
      }
      else {
        v23 = (int8x16_t*)v19;
      }
      if (v22 >= 0x1C0) {
        do {
          v59 = vld4q_s8((const char*)v23);
          v20 -= 512LL;
          v68 = vld4q_s8((const char*)v21);
          v77.val[0] = vorrq_s8(v68.val[0], v59.val[0]);
          v77.val[1] = vorrq_s8(v68.val[1], v59.val[1]);
          v77.val[2] = vorrq_s8(v68.val[2], v59.val[2]);
          v77.val[3] = vorrq_s8(v68.val[3], v59.val[3]);
          vst4q_s8((char*)v21, v77);
          v60 = vld4q_s8((const char*)&v23[4]);
          v69 = vld4q_s8((const char*)&v21[4]);
          v77.val[0] = vorrq_s8(v69.val[0], v60.val[0]);
          v77.val[1] = vorrq_s8(v69.val[1], v60.val[1]);
          v77.val[2] = vorrq_s8(v69.val[2], v60.val[2]);
          v77.val[3] = vorrq_s8(v69.val[3], v60.val[3]);
          vst4q_s8((char*)&v21[4], v77);
          v61 = vld4q_s8((const char*)&v23[8]);
          v70 = vld4q_s8((const char*)&v21[8]);
          v77.val[0] = vorrq_s8(v70.val[0], v61.val[0]);
          v77.val[1] = vorrq_s8(v70.val[1], v61.val[1]);
          v77.val[2] = vorrq_s8(v70.val[2], v61.val[2]);
          v77.val[3] = vorrq_s8(v70.val[3], v61.val[3]);
          vst4q_s8((char*)&v21[8], v77);
          v62 = vld4q_s8((const char*)&v23[12]);
          v71 = vld4q_s8((const char*)&v21[12]);
          v77.val[0] = vorrq_s8(v71.val[0], v62.val[0]);
          v77.val[1] = vorrq_s8(v71.val[1], v62.val[1]);
          v77.val[2] = vorrq_s8(v71.val[2], v62.val[2]);
          v77.val[3] = vorrq_s8(v71.val[3], v62.val[3]);
          vst4q_s8((char*)&v21[12], v77);
          v63 = vld4q_s8((const char*)&v21[16]);
          v72 = vld4q_s8((const char*)&v23[16]);
          v77.val[0] = vorrq_s8(v63.val[0], v72.val[0]);
          v77.val[1] = vorrq_s8(v63.val[1], v72.val[1]);
          v77.val[2] = vorrq_s8(v63.val[2], v72.val[2]);
          v77.val[3] = vorrq_s8(v63.val[3], v72.val[3]);
          vst4q_s8((char*)&v21[16], v77);
          v25 = (const char*)&v23[28];
          v64 = vld4q_s8((const char*)&v23[20]);
          v73 = vld4q_s8((const char*)&v21[20]);
          v77.val[0] = vorrq_s8(v73.val[0], v64.val[0]);
          v77.val[1] = vorrq_s8(v73.val[1], v64.val[1]);
          v77.val[2] = vorrq_s8(v73.val[2], v64.val[2]);
          v77.val[3] = vorrq_s8(v73.val[3], v64.val[3]);
          vst4q_s8((char*)&v21[20], v77);
          v26 = (const char*)&v23[24];
          v23 += 32;
          v65 = vld4q_s8(v26);
          v74 = vld4q_s8((const char*)&v21[24]);
          v77.val[0] = vorrq_s8(v74.val[0], v65.val[0]);
          v77.val[1] = vorrq_s8(v74.val[1], v65.val[1]);
          v77.val[2] = vorrq_s8(v74.val[2], v65.val[2]);
          v77.val[3] = vorrq_s8(v74.val[3], v65.val[3]);
          vst4q_s8((char*)&v21[24], v77);
          v27 = (char*)&v21[28];
          v21 += 32;
          v66 = vld4q_s8(v25);
          v75 = vld4q_s8(v27);
          v77.val[0] = vorrq_s8(v75.val[0], v66.val[0]);
          v77.val[1] = vorrq_s8(v75.val[1], v66.val[1]);
          v77.val[2] = vorrq_s8(v75.val[2], v66.val[2]);
          v77.val[3] = vorrq_s8(v75.val[3], v66.val[3]);
          vst4q_s8(v27, v77);
        } while (v20 > 0x40);
      }
    }
    v28 = v20 - 17;
    if (v20 < 0x11) {
      if (v20 == 0) {
      LABEL_36:
        if (v19 != 0) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, _QWORD, __int64))(
              *(_QWORD*)v1[71] + 24LL))(v1[71], v19, 0, 16);
        }
        goto LABEL_12;
      }
    }
    else {
      if ((~(_BYTE)v28 & 0x70) != 0) {
        v29 = ((unsigned __int8)((unsigned int)v28 >> 4) + 1) & 7;
        v20 -= 16 * v29;
        do {
          v30 = *v23++;
          --v29;
          *v21 = vorrq_s8(*v21, v30);
          ++v21;
        } while (v29 != 0);
      }
      if (v28 >= 0x70) {
        do {
          v31 = v21[1];
          v20 -= 128LL;
          *v21 = vorrq_s8(*v21, *v23);
          v32 = vorrq_s8(v31, v23[1]);
          v33 = v21[2];
          v34 = v21[3];
          v21[1] = v32;
          v21[2] = vorrq_s8(v33, v23[2]);
          v35 = vorrq_s8(v34, v23[3]);
          v36 = v21[4];
          v37 = v21[5];
          v21[3] = v35;
          v21[4] = vorrq_s8(v36, v23[4]);
          v38 = vorrq_s8(v37, v23[5]);
          v39 = v21[6];
          v40 = v21[7];
          v21[5] = v38;
          v21[6] = vorrq_s8(v39, v23[6]);
          v41 = v23[7];
          v23 += 8;
          v21[7] = vorrq_s8(v40, v41);
          v21 += 8;
        } while (v20 > 0x10);
      }
    }
    if (v20 - 1 >= 7) {
      v42 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      do {
        v43 = LANES128(*(v21)).n128_u8[7];
        v42 -= 8LL;
        LANES128(*(v21)).n128_u8[0] |= LANES128(*(v23)).n128_u8[0];
        LANES128(*(v21)).n128_u8[1] |= LANES128(*(v23)).n128_u8[1];
        LANES128(*(v21)).n128_u8[2] |= LANES128(*(v23)).n128_u8[2];
        LANES128(*(v21)).n128_u8[3] |= LANES128(*(v23)).n128_u8[3];
        LANES128(*(v21)).n128_u8[4] |= LANES128(*(v23)).n128_u8[4];
        LANES128(*(v21)).n128_u8[5] |= LANES128(*(v23)).n128_u8[5];
        LANES128(*(v21)).n128_u8[6] |= LANES128(*(v23)).n128_u8[6];
        v44 = (int8x16_t*)&LANES128(*(v23)).n128_i8[8];
        v45 = (int8x16_t*)&LANES128(*(v21)).n128_i8[8];
        LANES128(*(v21)).n128_u8[7] = v43 | LANES128(*(v23)).n128_u8[7];
        v21 = (int8x16_t*)((char*)v21 + 8);
        v23 = (int8x16_t*)((char*)v23 + 8);
      } while (v42 != 0);
      v21 = v45;
      v23 = v44;
    }
    for (i = v20 & 7; i != 0; v21 = (int8x16_t*)((char*)v21 + 1)) {
      v47 = LANES128(*(v23)).n128_u8[0];
      v23 = (int8x16_t*)((char*)v23 + 1);
      --i;
      LANES128(*(v21)).n128_u8[0] |= v47;
    }
    goto LABEL_36;
  }
LABEL_38:
  v48 = a1[12];
  v49 = a1[14];
  a1[25] = 0;
  a1[26] = 0;
  *(_QWORD*)(v49 + 576) = v48;
  v50 = (_QWORD*)*a1;
  v51 = (_QWORD*)a1[1];
  if ((_QWORD*)*a1 != v51) {
    v52 = (_QWORD*)a1[1];
    do {
      v55 = *(v52 - 10);
      v52 -= 10;
      v54 = v55;
      *v52 = 0;
      if (v55 != 0) {
        v56[0] = v54;
        v9 = *(v51 - 4);
        if (v9 == 0) {
          goto LABEL_50;
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v56);
      }
      result = (_QWORD*)*(v51 - 4);
      if (v51 - 8 == result) {
        v53 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_42;
        }
        v53 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v53))((__int64)result);
    LABEL_42:
      v51 = v52;
    } while (v52 != v50);
  }
  a1[1] = v50;
  return result;
}

__int64* fs_detail_DecompressContext__decompress(__int64* result, char a2)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (**v16)();
  __int64 (***v17)();
  __int64 (***v18)();
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 (**v31)();
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 (**v36)();
  __int64 (**v37)();
  __int64 (**v38)();
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 (***v41)();
  _QWORD v42[4];

  v2 = result;
  if (result[16] == 0) {
    v3 = (_QWORD*)result[14];
    v4 = result[12];
    v6 = v3[71];
    v7 = (*(__int64 (**)(_QWORD*))(*v3 + 56LL))(v3);
    v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 16LL))(
        v6, v4, v7);
    v9 = v2[14];
    v10 = *(__int64 (***)())(v9 + 592);
    *(_QWORD*)(v9 + 592) = v8;
    if (v10 != nullptr) {
      v11 = *(_QWORD*)(v9 + 640);
      v38 = v10;
      if (v11 == 0) {
        goto LABEL_57;
      }
      (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v11 + 48LL))(v11, &v38);
    }
    v38 = GameData_20d9a50;
    v39 = v3;
    v41 = &v38;
    GameRoutine_60a340(&v38, v9 + 608);
    if (v41 == &v38) {
      v12 = 4;
    }
    else {
      if (v41 == nullptr) {
        goto LABEL_12;
      }
      v12 = 5;
    }
    (*v41)[v12]();
  LABEL_12:
    v13 = v2[12];
    v14 = *(_QWORD*)(v2[14] + 592);
    v2[26] = 0;
    v2[24] = v14;
    v2[25] = v13;
    v15 = CreateDecoder();
    v16 = (__int64 (**)())v2[16];
    v2[16] = v15;
    if (v16 != nullptr) {
      v11 = v2[22];
      v38 = v16;
      if (v11 == 0) {
        goto LABEL_57;
      }
      (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v11 + 48LL))(v11, &v38);
    }
    v17 = (__int64 (***)())(v2 + 18);
    v18 = &v38;
    v38 = GameData_20d9ad0;
    v41 = &v38;
    if (v2 + 18 == (__int64*)&v38) {
      goto LABEL_22;
    }
    v18 = (__int64 (***)())v2[22];
    if (v18 == v17) {
      v42[0] = GameData_20d9ad0;
      v41 = nullptr;
      ((void (*)(__int64 (***)(), __int64 (***)()))(*v18)[3])(v18, &v38);
      (*(void (**)(__int64))(*(_QWORD*)v2[22] + 32LL))(v2[22]);
      v19 = v42[0];
      v2[22] = 0;
      v41 = &v38;
      (*(void (**)(_QWORD*, __int64*))((char*)((__int128*)0x10LL) + v19 + 8))(
          v42, v2 + 18);
      (*(void (**)(_QWORD*))(v42[0] + 32LL))(v42);
      v18 = v41;
    }
    else {
      *v17 = GameData_20d9ad0;
      v41 = v18;
    }
    v2[22] = (__int64)v17;
    if (v18 == &v38) {
    LABEL_22:
      v20 = 4;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_24;
      }
      v20 = 5;
    }
    ((void (*)(__int64 (***)()))(*v18)[v20])(v18);
  LABEL_24:
    result = (__int64*)ResetStream(v2[16]);
    if ((a2 & 1) == 0) {
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  if ((a2 & 1) != 0) {
  LABEL_25:
    v21 = v2[13];
    if (v21 != 0) {
      v22 = v2[27];
      v23 = (__int64*)*v2;
      v24 = (__int64*)v2[1];
      v25 = v22 + v21;
      if ((__int64*)*v2 == v24) {
        v26 = 0;
      }
      else {
        v26 = v23[8];
      }
      if (v26 < v25) {
        v25 = v26;
      }
      goto LABEL_34;
    }
  }
LABEL_28:
  v23 = (__int64*)*v2;
  v24 = (__int64*)v2[1];
  if ((__int64*)*v2 == v24) {
    v27 = v2 + 27;
    v22 = v2[27];
    v25 = 0;
    v28 = 0;
    v29 = -v22;
    goto LABEL_37;
  }
  v25 = v23[8];
  v22 = v2[27];
LABEL_34:
  v27 = v2 + 27;
  v29 = v25 - v22;
  if (v23 == v24) {
    v28 = 0;
  }
  else {
    v28 = *v23;
  }
LABEL_37:
  v30 = nullptr;
  v40 = 0;
  v38 = (__int64 (**)())(v28 + v22);
  v39 = (_QWORD*)v29;
  if (v25 != v22) {
    do {
      result = (__int64*)DecompressStream(v2[16], v2 + 24, &v38);
      v30 = v39;
    } while (v40 < (unsigned __int64)v39);
    v22 = *v27;
  }
  v2[27] = (__int64)v30 + v22;
  if (v2[26] < (unsigned __int64)v2[25]) {
    return result;
  }
  v31 = (__int64 (**)())v2[16];
  v2[16] = 0;
  if (v31 != nullptr) {
    v11 = v2[22];
    v38 = v31;
    if (v11 != 0) {
      result = (__int64*)(*(__int64 (**)(__int64, __int64 (***)()))(
          *(_QWORD*)v11 + 48LL))(v11, &v38);
      goto LABEL_44;
    }
  LABEL_57:
    GameRoutine_60a310_alt1(v11);
  }
LABEL_44:
  *(_QWORD*)(v2[14] + 576) = v2[12];
  v32 = (__int64*)*v2;
  v33 = (__int64*)v2[1];
  if ((__int64*)*v2 != v33) {
    v34 = (__int64*)v2[1];
    do {
      v37 = (__int64 (**)()) * (v34 - 10);
      v34 -= 10;
      v36 = v37;
      *v34 = 0;
      if (v37 != nullptr) {
        v38 = v36;
        v11 = *(v33 - 4);
        if (v11 == 0) {
          goto LABEL_57;
        }
        (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v11 + 48LL))(v11,
                                                                       &v38);
      }
      result = (__int64*)*(v33 - 4);
      if (v33 - 8 == result) {
        v35 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_48;
        }
        v35 = 40;
      }
      result = (__int64*)(*(__int64 (**)(__int64*))(*result + v35))(result);
    LABEL_48:
      v33 = v34;
    } while (v34 != v32);
  }
  v2[1] = (__int64)v32;
  return result;
}

__int64* DecompressContext_17d62a0(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* result;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  _QWORD v37[2];
  __int16 v38;

  v2 = *a2;
  v3 = a2[1];
  v24 = nullptr;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v35 = nullptr;
  v36 = 0;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  if (v2 == v3) {
    v6 = 0;
    v7 = 0;
  }
  else {
    v6 = *v2;
    v7 = v2[8];
  }
  v38 = 0;
  v37[0] = 0;
  v37[1] = 0;
  if (v7 >= 0x12) {
    v8 = 18;
  }
  else {
    v8 = v7;
  }
  memcpy(v37, v6, v8);
  v9 = fw_compression_GetFrameContentSize(v37, 18);
  v32 = a1;
  GameRoutine_17d57c0((__int64)&v24, a2);
  v30 = v9;
  v31 = 0;
  if (0xCCCCCCCCCCCCCCCDLL * ((v25 - v24) >> 4) < 2) {
    GameRoutine_17d5f20((__int64*)&v24, 0);
  }
  else {
    GameRoutine_17d59a0(&v24);
  }
  v11 = v33;
  v33 = 0;
  if (v11 != 0) {
    v12 = v35;
    v37[0] = v11;
    if (v35 == nullptr) {
      goto LABEL_43;
    }
    (*(void (**)(__int64*, _QWORD*))(*v35 + 48))(v35, v37);
  }
  if (v35 == &v34) {
    v13 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_18;
    }
    v13 = 40;
  }
  (*(void (**)(void))(*v35 + v13))();
LABEL_18:
  v14 = v27;
  v27 = 0;
  if (v14 == 0) {
    goto LABEL_21;
  }
  v12 = v29;
  v37[0] = v14;
  if (v29 == nullptr) {
  LABEL_43:
    GameRoutine_60a310(v12, v10);
  }
  (*(void (**)(__int64*, _QWORD*))(*v29 + 48))(v29, v37);
LABEL_21:
  result = v29;
  if (v29 == &v28) {
    v16 = 32;
    goto LABEL_25;
  }
  if (v29 != nullptr) {
    v16 = 40;
  LABEL_25:
    result = (__int64*)(*(__int64 (**)(void))(*v29 + v16))();
  }
  v17 = (__int64)v24;
  if (v24 == nullptr) {
    return result;
  }
  v18 = v25;
  if (v24 == v25) {
    goto LABEL_39;
  }
  v19 = v25;
  do {
    v22 = *((_QWORD*)v19 - 10);
    v19 -= 80;
    v21 = v22;
    *(_QWORD*)v19 = 0;
    if (v22 != 0) {
      v37[0] = v21;
      v12 = *((__int64**)v18 - 4);
      if (v12 == nullptr) {
        goto LABEL_43;
      }
      (*(void (**)(__int64*, _QWORD*))(*v12 + 48))(v12, v37);
    }
    result = *((__int64**)v18 - 4);
    if (v18 - 64 == (char*)result) {
      v20 = 32;
    LABEL_30:
      result = (__int64*)(*(__int64 (**)(void))(*result + v20))();
      goto LABEL_31;
    }
    if (result != nullptr) {
      v20 = 40;
      goto LABEL_30;
    }
  LABEL_31:
    v18 = v19;
  } while (v19 != (char*)v17);
  v25 = (char*)v17;
  v17 = (__int64)v24;
  if (v24 != nullptr) {
  LABEL_39:
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v17);
  }
  return result;
}

#pragma GCC visibility pop
