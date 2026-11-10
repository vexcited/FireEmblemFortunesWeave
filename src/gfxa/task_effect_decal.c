#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc4f00(__int64, unsigned int, unsigned int);
__int64 Config_bc52e0(_QWORD*, int, unsigned int, int);
__int64 Manager_bc5490(__int64, __int64, int32x4_t*, __int128*, float, float);
__int64 nn_vfx_5d3080(__int64 result, int, __int64, int, unsigned int, char,
                      char, __int64);
bool Resource_5c92d0(__int64, __int64, unsigned int, _QWORD*, __int64);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e840[12];
extern _UNKNOWN** GameData_212e850[10];
extern _UNKNOWN** GameData_212e858[9];
extern _UNKNOWN** GameData_212e860[8];
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e890[2];
extern _UNKNOWN** GameData_212e898;
extern __int64 eft_g_effectSystem;
void GameRoutine_5b28f0();
bool TaskEffectDecal_b617c0(__int64* a1);
__int64 TaskEffectDecal_b620c0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a828e0;
extern __int128 GameData_1a829e0;
extern __int128 GameData_1a82a50;
extern __int128 GameData_1a82c60;
extern __int128 GameData_1a82c90;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a82ff0;
extern __int128 GameData_1a83000;
extern __int128 GameData_1a83370;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83530;
extern __int128 GameData_1a83620;
__int64 TaskEffectDecal_b61ab0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4);

bool TaskEffectDecal_b617c0(__int64* a1)
{
  __int64 v1;
  unsigned __int8* v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _UNKNOWN** v16;
  _UNKNOWN** v17;
  _UNKNOWN** v18;
  __int64 v19;
  __int64 v20;
  _UNKNOWN** v21;
  _UNKNOWN** v22;
  _UNKNOWN** v23;
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
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;

  v1 = a1[3];
  v3 = *(unsigned __int8**)(a1[1] + 160);
  v4 = *(_QWORD*)(*a1 + 208);
  v5 = v3[2201];
  v6 = v3[2203];
  v7 = v3[2202];
  v8 = v5 == 0;
  v9 = 8;
  if (v8) {
    v9 = 0;
  }
  v10 = v9 | v7;
  v11 = 16;
  if (v6 == 0) {
    v11 = 0;
  }
  (*(void (**)(__int64, __int64))GameData_212e840[0])(v4, v1 + 8 * (v10 | v11) +
                                                              192);
  v12 = a1[3];
  if (*(int*)(v12 + 8) >= 1) {
    v13 = *a1;
    if ((*(_BYTE*)(*(_QWORD*)(a1[1] + 160) + 2344LL) & 1) != 0) {
      v19 = v12 + 16;
      v20 = 0;
      v21 = GameData_212e850[0];
      v22 = GameData_212e860[0];
      v23 = GameData_212e858[0];
      do {
        ((void (*)(_QWORD, __int64))*v21)(*(_QWORD*)(v13 + 208), v19);
        ((void (*)(_QWORD, __int64))*v22)(*(_QWORD*)(v13 + 208), v12 + 80);
        ((void (*)(_QWORD, __int64))*v23)(*(_QWORD*)(v13 + 208), v12 + 84);
        ++v20;
        v19 += 8;
      } while (v20 < *(int*)(v12 + 8));
    }
    else {
      v14 = v12 + 96;
      v15 = 0;
      v16 = GameData_212e850[0];
      v17 = GameData_212e860[0];
      v18 = GameData_212e858[0];
      do {
        ((void (*)(_QWORD, __int64))*v16)(*(_QWORD*)(v13 + 208), v14);
        ((void (*)(_QWORD, __int64))*v17)(*(_QWORD*)(v13 + 208), v12 + 160);
        ((void (*)(_QWORD, __int64))*v18)(*(_QWORD*)(v13 + 208), v12 + 164);
        ++v15;
        v14 += 8;
      } while (v15 < *(int*)(v12 + 8));
    }
  }
  v24 = a1[3];
  v38_.v39 = 0;
  v25 = *a1;
  v26 = v24 + 16LL * *(int*)(v24 + 720);
  v27 = *(_QWORD*)(v26 + 736);
  v38_.v38 = *(_QWORD*)(v26 + 728);
  v28 = ((__int64 (*)(__int64*))GameRoutine_5b28f0)(a1);
  Resource_5c92d0(v28, v25, 0, &v38_.v38, v27);
  v29 = *(int*)(v24 + 776);
  v38_.v39 = 0;
  v30 = v24 + 16 * v29;
  v31 = *(_QWORD*)(v30 + 792);
  v38_.v38 = *(_QWORD*)(v30 + 784);
  v32 = ((__int64 (*)(__int64*))GameRoutine_5b28f0)(a1);
  Resource_5c92d0(v32, v25, 1u, &v38_.v38, v31);
  v33 = *(_QWORD*)(v24 + 816);
  v38_.v39 = 0;
  v34 = v33 + 16LL * *(int*)(v33 + 16);
  v35 = *(_QWORD*)(v34 + 32);
  v38_.v38 = *(_QWORD*)(v34 + 24);
  v36 = ((__int64 (*)(__int64*))GameRoutine_5b28f0)(a1);
  return Resource_5c92d0(v36, v25, 2u, &v38_.v38, v35);
}

__int64 TaskEffectDecal_b61ab0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  bool v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int128 v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  __int64 v18;
  __int64 v19;
  int32x4_t* v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  __int64 v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  __int128 v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  __int64 result;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 (**v55)(__int64);
  __int64 v56;
  __int64 v57;

  v4 = a1[180];
  v9 = v4 < -1;
  v10 = ((_BYTE)v4 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  a1[180] = v10;
  v11 = *(_QWORD*)&a1[2 * v10 + 176];
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  if ((unsigned int)(v13 - 3) > 3) {
    v18 = 128;
    v19 = 112;
    v20 = (int32x4_t*)GameData_212c2a0;
    v21 = *((int32x4_t*)GameData_212c2a0 + 1);
    v22 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    v23 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
    v24 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v22);
    v25 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v22);
    v26 = vzip1q_s32(v21, v23);
    *(int32x4_t*)v12 = vzip1q_s32(v24, v26);
    *(int32x4_t*)(v12 + 16) = vzip2q_s32(v24, v26);
    *(int32x4_t*)(v12 + 32) = vzip1q_s32(v25, vzip2q_s32(v21, v23));
    v27 = v20[1];
    v28 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v20);
    v29 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v20 + 16);
    v30 = vzip1q_s32(*v20, v28);
    v31 = vzip2q_s32(*v20, v28);
    v32 = vzip1q_s32(v27, v29);
    v33 = vzip1q_s32(v31, vzip2q_s32(v27, v29));
    *(int32x4_t*)(v12 + 48) = vzip1q_s32(v30, v32);
    *(int32x4_t*)(v12 + 64) = vzip2q_s32(v30, v32);
    v34 = *(int32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v20);
    v35 = 144;
    v36 = vzip1q_s32(v27, v34);
    v37 = vzip2q_s32(v27, v34);
    v38 = vzip2q_s32(v30, v36);
    v39 = vzip1q_s32(v31, v37);
    v40 = (__typeof__(v40)){0};
    *(int32x4_t*)(v12 + 80) = v33;
    *(int32x4_t*)(v12 + 96) = vzip1q_s32(v30, v36);
  }
  else {
    if ((unsigned int)(v13 - 5) > 1) {
      *(_OWORD*)v12 = GameData_1a83620;
      *(_OWORD*)(v12 + 16) = GameData_1a834b0;
      *(_OWORD*)(v12 + 32) = GameData_1a82d20;
      v41 = *((int32x4_t*)GameData_212c2a0 + 1);
      v42 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      v43 =
          *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
      v44 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v42);
      v45 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v42);
      v46 = vzip1q_s32(v41, v43);
      v47 = vzip2q_s32(v41, v43);
      v17 = vzip1q_s32(v44, v46);
      v16 = vzip2q_s32(v44, v46);
      v15 = vzip1q_s32(v45, v47);
      v14 = (__typeof__(v14)){0};
    }
    else {
      *(_QWORD*)&v14 = 0x3F8000003F800000LL;
      *((_QWORD*)&v14 + 1) = 0x3F8000003F800000LL;
      *(_OWORD*)v12 = GameData_1a82ff0;
      *(_OWORD*)(v12 + 16) = GameData_1a82c60;
      *(_OWORD*)(v12 + 32) = GameData_1a83530;
      v15 = COERCE_AS(int32x4_t, GameData_1a829e0);
      v16 = COERCE_AS(int32x4_t, GameData_1a83000);
      v17 = COERCE_AS(int32x4_t, GameData_1a82a50);
    }
    *(int32x4_t*)(v12 + 48) = v17;
    *(int32x4_t*)(v12 + 64) = v16;
    v18 = 112;
    v19 = 96;
    v40 = GameData_1a828e0;
    v38 = COERCE_AS(int32x4_t, GameData_1a82c90);
    *(int32x4_t*)(v12 + 80) = v15;
    v39 = COERCE_AS(int32x4_t, GameData_1a83370);
    v35 = 128;
    *(_OWORD*)(v12 + 144) = v14;
  }
  *(int32x4_t*)(v12 + v19) = v38;
  *(int32x4_t*)(v12 + v18) = v39;
  *(_OWORD*)(v12 + v35) = v40;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  if (*(_DWORD*)(a4 + 16) == 8) {
    v49 = a1[194];
    v50 = *(_QWORD*)a1;
    v9 = v49 < -1;
    v51 = ((_BYTE)v49 + 1) & 1;
    if (v9) {
      v51 = -v51;
    }
    a1[194] = v51;
    v52 = *(_QWORD*)&a1[2 * v51 + 190];
    v53 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v52 + 56LL))(v52);
    v54 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 64) + 16LL))(
        *(_QWORD*)(a3 + 64));
    (*(void (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54);
    v55 = (__int64 (**)(__int64))GameData_212e4d8[0];
    *v53 = (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v50 + 256) +
                                                         8LL);
    v56 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 72) + 16LL))(
        *(_QWORD*)(a3 + 72));
    (*(void (**)(__int64))(*(_QWORD*)v56 + 40LL))(v56);
    v53[1] = (*v55)(*(_QWORD*)(v50 + 256) + 8LL);
    v57 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16LL))(
        *(_QWORD*)(a2 + 8));
    (*(void (**)(__int64))(*(_QWORD*)v57 + 40LL))(v57);
    v53[2] = (*v55)(*(_QWORD*)(v50 + 256) + 8LL);
    return (*(__int64 (**)(__int64))(*(_QWORD*)v52 + 64LL))(v52);
  }
  return result;
}

__int64 TaskEffectDecal_b620c0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64 v9;
  unsigned int v10;
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
  long double v26;
  int v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  long double v38;
  __int64 v39;
  float v40;
  float v41;
  __int64 result;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned int i;
  long double v49;
  struct {
    long double v50;
    __int128 v51;
    __int128 v52;
    __int128 v53;
  } v50_;
  _QWORD v54[8];
  _QWORD v55[10];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v9 = *a4;
  v10 = *((_DWORD*)a5 + 4);
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v14 = v13;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[1] = v16;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 32LL))(v17),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[3] = v18;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[4] = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[5] = v20;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[6] = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[7] = v22;
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[8] = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v55[9] = v24;
  (*(void (**)(_QWORD, __int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)*a4 + 128LL))(*a4, 5, v55, v12, v14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64, __int64))GameData_212e888[0])(v9 + 8, a1 + 168),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64, __int64))GameData_212e890[0])(v9 + 8, a1 + 176),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  ((void (*)(__int64, __int64))*GameData_212e898)(v9 + 8, a1 + 180),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v25 = eft_g_effectSystem;
  v26 = ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 16LL))(*a5),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v27 = *((unsigned __int8*)a5 + 160);
  *(long double*)v54 = v26;
  *(_OWORD*)&v54[2] = v28;
  *(_OWORD*)&v54[4] = v29;
  *(_OWORD*)&v54[6] = v30;
  if (v27 == 1) {
    v31 = a5[17];
    *(_QWORD*)&v50_.v52 = a5[16];
    *((_QWORD*)&v50_.v52 + 1) = v31;
    v32 = a5[19];
    *(_QWORD*)&v50_.v53 = a5[18];
    *((_QWORD*)&v50_.v53 + 1) = v32;
    v33 = a5[13];
    *(_QWORD*)&v50_.v50 = a5[12];
    *((_QWORD*)&v50_.v50 + 1) = v33;
    v34 = a5[15];
    *(_QWORD*)&v50_.v51 = a5[14];
    *((_QWORD*)&v50_.v51 + 1) = v34;
  }
  else {
    v50_.v50 =
        ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 24LL))(*a5),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v50_.v51 = v35;
    v50_.v52 = v36;
    v50_.v53 = v37;
  }
  v38 = ((long double (*)(_QWORD)) * (_QWORD*)(*(_QWORD*)*a5 + 40LL))(*a5),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v39 = *a5;
  v49 = v38;
  v40 = (*(float (**)(__int64))(*(_QWORD*)v39 + 56LL))(v39),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v41 = (*(float (**)(_QWORD))(*(_QWORD*)*a5 + 64LL))(*a5),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  result = Manager_bc5490(v25, (__int64)v54, (int32x4_t*)&v50_.v50,
                          (__int128*)&v49, v40, v41),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v43 = eft_g_effectSystem;
  if ((*(_BYTE*)(eft_g_effectSystem + 313) & 1) == 0) {
    v44 = *((_DWORD*)a5 + 5);
    v45 = a4[2];
    Config_bc52e0((_QWORD*)eft_g_effectSystem, v10, v44, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
    for (i = 0; i != 31; ++i) {
      result = Config_bc4f00(v43, i, v44),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if ((result & 1) != 0) {
        result = nn_vfx_5d3080(*(_QWORD*)(v43 + 96), 0, v45, i, v10, 0, 1, a1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
