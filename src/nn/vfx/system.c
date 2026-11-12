#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BufferAllocator_5b57b0(__int64);
__int64 BufferAllocator_Unknown2(__int64, __int64);
__int64 GameRoutine_5b9980(void);
__int64 GameRoutine_5c01b0(_QWORD);
__int64 GameRoutine_5c0260(_QWORD);
__int64 GameRoutine_5c0270(_QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c03e0();
__int64 GameRoutine_5c5590();
__int64 GameRoutine_5ca6f0(__int64);
__int64 GameRoutine_5cde10(__int64);
__int64 GameRoutine_5dbab0(_QWORD);
__int64 GameRoutine_5de4f0(_QWORD, _QWORD);
__int64 GameRoutine_5debc0(_QWORD, _QWORD);
__int64 GameRoutine_5deed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5dfc90(_QWORD);
__int64 GameRoutine_5fca00(_QWORD);
__int64 GameRoutine_5fe300(_QWORD);
__int64 Resource_5c6100(__int64, __int64);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*nn_vfx_detail_BufferAllocator_vtable[])();
extern __int64* GameData_21364f8[3];
extern __int64* GameData_2136500[2];
__int64 System_Destructor(__int64 a1);
_QWORD* GameRoutine_5def40(_QWORD* result);
_QWORD* GameRoutine_5fc9e0(_QWORD* result);
__int64 GameHr_5b47e0(__int64, __int64*);
__int64 GameHr_5de7c0(__int64, __int64);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5df920(__int64, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_5b9920(__int64, __int64);
__int64 GameRoutine_5c01b0_alt1(__int64 result) __asm__("GameRoutine_5c01b0");
__int64 GameRoutine_5c0250();
__int64 GameRoutine_5c0260_alt1(__int64 result) __asm__("GameRoutine_5c0260");
__int64 GameRoutine_5c04e0(_QWORD);
__int64 GameRoutine_5c04f0(const char*, ...);
__int64 GameRoutine_5c52f0(__int64 result);
__int64 GameRoutine_5c5380();
__int64 GameRoutine_5ca630(__int64, __int64, unsigned int, unsigned int);
__int64 GameRoutine_5cdd50(__int64, __int64, unsigned int, unsigned int);
__int64 GameRoutine_5dba10(__int64, __int64, unsigned int);
__int64 GameRoutine_5ddca0(_QWORD*);
__int64 GameRoutine_5de3b0(__int64, __int64*, __int64, int);
__int64 GameRoutine_5de4d0(__int64 result);
__int64 GameRoutine_5dfd00();
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fc190(__int64 result);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_5fe2d0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2e0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2f0(__int64);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 game_5c0350(int);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_lmem_AllocateFromFrameHeap(__int64, unsigned __int64, int);
__int64 nn_lmem_CreateFrameHeap_1a0cf40(void);
__int64 nn_lmem_DestroyFrameHeap(__int64);
extern __int64 (*GameData_212e988)();
extern __int64 (*GameData_212e9f0)();
__int64 System_Unknown2(__int64 a1, __int64 a2, __int64* a3, __int64 a4);

__int64 System_Unknown2(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 FrameHeapEPvmi;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  int v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  int v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 (*v74)();
  __int64 (*v75)();
  __int64 v76;
  unsigned int v77;
  unsigned int v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v97;
  int v98;
  unsigned __int64 v99;
  __int64 v100[6];
  struct {
    _QWORD v101[2];
    __int64 v102;
    __int64 v103;
  } v101_;

  *(_QWORD*)(a1 + 56) = *(_QWORD*)(a4 + 8);
  v7 = *(_DWORD*)(a4 + 48);
  *(_DWORD*)(a1 + 100) = v7 + 32;
  *(_DWORD*)(a1 + 104) = v7;
  *(_DWORD*)(a1 + 108) = *(_DWORD*)(a4 + 36);
  *(_DWORD*)(a1 + 112) = *(_DWORD*)(a4 + 32);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)(a4 + 72);
  *(_DWORD*)(a1 + 140) = *(_DWORD*)(a4 + 40);
  v8 = *(_DWORD*)(a4 + 44);
  *(_QWORD*)(a1 + 72) = a2;
  *(_DWORD*)(a1 + 144) = v8;
  *(_BYTE*)(a1 + 54) = *(_BYTE*)(a4 + 76);
  GameRoutine_5c01b0_alt1(a1 + 64);
  GameRoutine_5c0260_alt1((__int64)a3);
  v100[0] = *(_QWORD*)(a1 + 56);
  v100[1] = 0x4C00000012LL;
  v9 = *a3;
  v100[3] = 112LL * *(int*)(a4 + 32) + 32;
  v10 = (*(__int64 (**)(__int64*))(v9 + 16))(a3);
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 5808) = v10;
  v100[2] = v10;
  v101_.v102 = 0;
  v101_.v103 = 0;
  v101_.v101[0] = 0;
  v101_.v101[1] = 0;
  GameRoutine_5fc190((__int64)v101_.v101);
  LODWORD(v101_.v101[0]) = 18;
  GameRoutine_5fe2d0(v11, v101_.v101);
  v12 = *(_QWORD*)(a1 + 56);
  v13 = *(_QWORD*)(a4 + 80);
  v101_.v102 = 0;
  v101_.v103 = 0;
  v101_.v101[0] = 0;
  v101_.v101[1] = 0;
  GameRoutine_5fc190((__int64)v101_.v101);
  LODWORD(v101_.v101[0]) = 18;
  v14 = GameRoutine_5fe2e0(v12, v101_.v101);
  v15 = *a3;
  v100[5] = (v13 + v14 - 1) & -v14;
  v16 = (*(__int64 (**)(__int64*))(v15 + 16))(a3);
  *(_QWORD*)(a1 + 5816) = v16;
  v100[4] = v16;
  GameHr_5b47e0(a1 + 5320, v100);
  v17 = *(_QWORD*)(a1 + 56);
  if (*(_BYTE*)(a1 + 54) != 0) {
    v18 = 3;
  }
  else {
    v18 = 2;
  }
  *(_DWORD*)(a1 + 96) = v18;
  GameHr_5de7c0(v17, a1 + 64);
  v19 = GameRoutine_5c0250();
  game_5c0350(2 * *(_DWORD*)(a1 + 112));
  *(_QWORD*)(a1 + 4632) = GameRoutine_5c0250() - v19;
  GameRoutine_5c04e0(*(unsigned __int8*)(a4 + 68));
  v20 = *(int*)(a1 + 112);
  *(_WORD*)(a1 + 50) = 257;
  *(_BYTE*)(a1 + 52) = 1;
  v21 = *(_BYTE*)(a4 + 79);
  *(_QWORD*)(a1 + 116) = 0;
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 4704) = 0;
  *(_QWORD*)(a1 + 4712) = 0;
  *(_QWORD*)(a1 + 4720) = 0;
  *(_QWORD*)(a1 + 4728) = 0;
  *(_QWORD*)(a1 + 4736) = 0;
  *(_QWORD*)(a1 + 4744) = 0;
  *(_DWORD*)(a1 + 4752) = 0;
  *(_QWORD*)(a1 + 4760) = 0;
  *(_QWORD*)(a1 + 4768) = 0;
  *(_DWORD*)(a1 + 124) = 0;
  *(_DWORD*)(a1 + 128) = v20;
  *(_BYTE*)(a1 + 53) = v21;
  v22 = *(int*)(a4 + 64);
  *(_BYTE*)(a1 + 5888) = 0;
  *(_DWORD*)(a1 + 4792) = v22;
  memset(a1 + 176, 0, 0x80Cu);
  v23 = *(int*)(a1 + 108);
  v24 = *(int*)(a1 + 100);
  v25 = *(int*)(a1 + 8);
  v26 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 4680) = 96;
  *(_QWORD*)(a1 + 4472) = 0;
  v27 = (8 * v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4480) = 0;
  *(_QWORD*)(a1 + 4584) = 0;
  *(_QWORD*)(a1 + 4592) = 0;
  *(_QWORD*)(a1 + 4664) = 2112 * v20;
  *(_QWORD*)(a1 + 4600) = 0;
  *(_QWORD*)(a1 + 4608) = 0;
  v28 = ((8 * v22 + 15) & 0xFFFFFFFFFFFFFFF0LL) * v25;
  v29 = (int)v23 * (__int64)(int)v25;
  *(_QWORD*)(a1 + 4808) = 0;
  *(_QWORD*)(a1 + 4816) = 0;
  *(_QWORD*)(a1 + 4824) = 0;
  *(_QWORD*)(a1 + 4832) = 0;
  v30 = (8 * v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4648) = 624LL * (int)v23;
  *(_QWORD*)(a1 + 4840) = 0;
  *(_QWORD*)(a1 + 4640) = v30;
  *(_QWORD*)(a1 + 4696) = 16 * v29;
  v31 = (8 * v23 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(a1 + 4848) = 0;
  *(_QWORD*)(a1 + 4856) = 0;
  *(_QWORD*)(a1 + 4864) = 0;
  *(_QWORD*)(a1 + 4872) = 0;
  *(_QWORD*)(a1 + 24) = 2544LL * (int)v25;
  *(_QWORD*)(a1 + 4880) = 0;
  *(_QWORD*)(a1 + 4656) = v31;
  *(_QWORD*)(a1 + 4672) = v27;
  *(_QWORD*)(a1 + 4800) = v28;
  *(_QWORD*)(a1 + 40) = v25 << 6;
  v32 = ((2112 * v20 + v27 + 624LL * (int)v23 + v30 + v31 + v28 + 16 * v29 +
          2544LL * (int)v25 + (v25 << 6) + 111) &
         0xFFFFFFFFFFFFFFF0LL) +
        256;
  v33 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
      *(_QWORD*)v26 + 16LL))(v26, v32, 256);
  v34 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 4616) = v33;
  *(_QWORD*)(a1 + 80) = v34 + v32;
  ++*(_DWORD*)(a1 + 88);
  FrameHeapEPvmi = nn_lmem_CreateFrameHeap_1a0cf40();
  v36 = 8LL * *(int*)(a1 + 100);
  *(_QWORD*)(a1 + 4640) = v36;
  v37 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v36, 16);
  v38 = *(_QWORD*)(a1 + 4640);
  *(_QWORD*)(a1 + 152) = v37;
  memset(v37, 0, v38);
  v39 =
      nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 4648), 16);
  v40 = *(_QWORD*)(a1 + 4648);
  *(_QWORD*)(a1 + 160) = v39;
  memset(v39, 0, v40);
  v41 = *(int*)(a1 + 108);
  if ((int)v41 >= 1) {
    v42 = 0;
    v43 = 0;
    do {
      ++v43;
      *(_QWORD*)(*(_QWORD*)(a1 + 160) + v42 + 32) = a1;
      v44 = *(_QWORD*)(a1 + 160) + v42;
      v42 += 624;
      *(_BYTE*)(v44 + 12) = 0;
      v41 = *(int*)(a1 + 108);
    } while (v43 < v41);
  }
  v45 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, 8 * v41, 16);
  v46 = *(_DWORD*)(a1 + 96);
  v47 = *(_QWORD*)(a1 + 4664);
  *(_QWORD*)(a1 + 2224) = v45;
  if (v46 == 3) {
    v48 = 3;
  }
  else {
    v48 = 2;
  }
  v49 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v47, 16);
  v50 = *(_QWORD*)(a1 + 4664);
  *(_QWORD*)(a1 + 168) = v49;
  memset(v49, 0, v50);
  v51 = *(_QWORD*)(a1 + 168);
  v52 = *(__int64**)(a1 + 56);
  v101_.v101[0] = 0;
  v101_.v101[1] = 0;
  GameRoutine_5fc180(v101_.v101);
  HIDWORD(v101_.v101[0]) = 16;
  v53 = GameHr_5fc7e0(v52, (__int64)v101_.v101);
  v54 = ((v53 + 191) & -v53) * *(_DWORD*)(a1 + 112) * v48;
  if ((GameHr_5ded80(a1 + 4888, *(__int64**)(a1 + 56), a1 + 64, 16, v54) & 1) !=
      0) {
    RectDrawer_5fcbc0(a1 + 4888, (__int64*)(a1 + 5288));
  }
  *(_QWORD*)(a1 + 4688) = v54;
  *(_QWORD*)(a1 + 5304) = 0;
  v55 = GameRoutine_5fcb50(a1 + 4888);
  v56 = *(_DWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 5312) = v55;
  if (v56 >= 1) {
    v57 = v51 + 1728;
    v58 = 0;
    v59 = GameData_2136500[0] + 2;
    do {
      GameRoutine_5c52f0(v57 - 1560);
      GameRoutine_5def40((_QWORD*)(v57 + 232));
      *(_QWORD*)v57 = 0;
      *(_QWORD*)(v57 + 8) = 0;
      *(_QWORD*)(v57 + 360) = v59;
      *(_QWORD*)(v57 + 368) = 0;
      v60 = 0;
      *(_DWORD*)(v57 + 376) = 0;
      *(_QWORD*)(v57 + 16) = 0;
      *(_QWORD*)(v57 + 24) = a1 + 4888;
      *(_QWORD*)(v57 + 64) = a1 + 5320;
      v61 = *(_QWORD*)(a1 + 5304);
      v62 = ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v61;
      if (v62 <= *(_QWORD*)(a1 + 4960)) {
        v63 = *(_QWORD*)(a1 + 5312);
        *(_QWORD*)(a1 + 5304) = v62;
        v60 = v63 + v61;
      }
      *(_QWORD*)v57 = v60;
      v64 = *(_QWORD*)(a1 + 5304);
      v65 = ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v64;
      if (v65 <= *(_QWORD*)(a1 + 4960)) {
        v66 = *(_QWORD*)(a1 + 5312);
        *(_QWORD*)(a1 + 5304) = v65;
        *(_QWORD*)(v57 + 8) = v66 + v64;
        if (*(_BYTE*)(a1 + 54) == 1) {
        LABEL_22:
          v67 = *(_QWORD*)(a1 + 5304);
          v68 = 0;
          v69 =
              ((*(_QWORD*)(a1 + 5280) + 191LL) & -*(_QWORD*)(a1 + 5280)) + v67;
          if (v69 <= *(_QWORD*)(a1 + 4960)) {
            v70 = *(_QWORD*)(a1 + 5312);
            *(_QWORD*)(a1 + 5304) = v69;
            v68 = v70 + v67;
          }
          *(_QWORD*)(v57 + 16) = v68;
        }
      }
      else {
        *(_QWORD*)(v57 + 8) = 0;
        if (*(_BYTE*)(a1 + 54) == 1) {
          goto LABEL_22;
        }
      }
      ++v58;
      v57 += 2112;
    } while (v58 < (signed __int32)*(_DWORD*)(a1 + 112));
  }
  GameRoutine_5fcb80(a1 + 4888);
  GameRoutine_5fcb70(a1 + 4888);
  v71 =
      nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 4680), 16);
  GameRoutine_5b9920(v71, a1);
  *(_QWORD*)(a1 + 2240) = v71;
  LODWORD(v71) = GameRoutine_5c0250();
  GameRoutine_5c5380();
  v72 = GameRoutine_5c0250() - (unsigned int)v71;
  v73 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 4624) = v72;
  GameHr_5df920(v73, a1 + 64);
  *(_BYTE*)(a1 + 2264) = 0;
  *(_QWORD*)(a1 + 2256) = 0;
  v74 = GameData_212e988;
  *(_QWORD*)(a1 + 2272) = GameData_212e988;
  v75 = GameData_212e9f0;
  v76 = *(_QWORD*)(a1 + 80);
  v77 = *(_DWORD*)(a1 + 96);
  v78 = *(_DWORD*)(a1 + 140);
  *(_QWORD*)(a1 + 2360) = v74;
  *(_QWORD*)(a1 + 2448) = v74;
  *(_QWORD*)(a1 + 2536) = v74;
  *(_QWORD*)(a1 + 2624) = v74;
  *(_QWORD*)(a1 + 2712) = v74;
  *(_QWORD*)(a1 + 2800) = v74;
  *(_QWORD*)(a1 + 2888) = v74;
  *(_QWORD*)(a1 + 2976) = v74;
  *(_QWORD*)(a1 + 3064) = v74;
  *(_QWORD*)(a1 + 3152) = v74;
  *(_QWORD*)(a1 + 3240) = v74;
  *(_QWORD*)(a1 + 3328) = v74;
  *(_QWORD*)(a1 + 3416) = v74;
  *(_QWORD*)(a1 + 3504) = v74;
  *(_QWORD*)(a1 + 3592) = v74;
  *(_QWORD*)(a1 + 3680) = v74;
  *(_QWORD*)(a1 + 2248) = 0;
  *(_QWORD*)(a1 + 2352) = v75;
  *(_QWORD*)(a1 + 2440) = v75;
  *(_QWORD*)(a1 + 2528) = v75;
  *(_QWORD*)(a1 + 2616) = v75;
  *(_QWORD*)(a1 + 2704) = v75;
  *(_QWORD*)(a1 + 2792) = v75;
  *(_QWORD*)(a1 + 2880) = v75;
  *(_QWORD*)(a1 + 2968) = v75;
  *(_QWORD*)(a1 + 3056) = v75;
  *(_QWORD*)(a1 + 3144) = v75;
  *(_QWORD*)(a1 + 3232) = v75;
  *(_QWORD*)(a1 + 3320) = v75;
  *(_QWORD*)(a1 + 3408) = v75;
  *(_QWORD*)(a1 + 3496) = v75;
  *(_QWORD*)(a1 + 3584) = v75;
  v98 = v76;
  *(_QWORD*)(a1 + 3672) = v75;
  *(_QWORD*)(a1 + 3760) = v75;
  GameRoutine_5ca630(a1 + 64, a1, v77, v78);
  GameRoutine_5dba10(a1 + 64, a1, *(_DWORD*)(a1 + 96));
  GameRoutine_5cdd50(a1 + 64, a1, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 144));
  v97 = *(_QWORD*)(a1 + 80);
  GameRoutine_5ddca0((_QWORD*)a1);
  v79 = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, *(_QWORD*)(a1 + 24), 16);
  v80 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 16) = v79;
  *(_QWORD*)(a1 + 32) = nn_lmem_AllocateFromFrameHeap(FrameHeapEPvmi, v80, 16);
  v81 = *(_QWORD*)(a4 + 56);
  if (*(int*)(a1 + 8) >= 1) {
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v99 = 16LL * *(int*)(a1 + 108);
    v85 = 8LL * *(int*)(a1 + 4792);
    do {
      v86 = FrameHeapEPvmi;
      v87 = v81;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v82) = -1;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v82 + 4) = 0;
      v88 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v82);
      v88[31] = 0;
      v88[32] = 0;
      v88[29] = 0;
      v88[30] = 0;
      v88[27] = 0;
      v88[28] = 0;
      v88[25] = 0;
      v88[26] = 0;
      v88[23] = 0;
      v88[24] = 0;
      v88[21] = 0;
      v88[22] = 0;
      v88[19] = 0;
      v88[20] = 0;
      v88[17] = 0;
      v88[18] = 0;
      v88[15] = 0;
      v88[16] = 0;
      v88[13] = 0;
      v88[14] = 0;
      v88[11] = 0;
      v88[12] = 0;
      v88[9] = 0;
      v88[10] = 0;
      v88[7] = 0;
      v88[8] = 0;
      v88[5] = 0;
      v88[6] = 0;
      v88[3] = 0;
      v88[4] = 0;
      v88[1] = 0;
      v88[2] = 0;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v82 + 264) = 0;
      v89 = *(_QWORD*)(a1 + 16) + v82;
      GameRoutine_5fc9e0((_QWORD*)(v89 + 328));
      *(_BYTE*)(v89 + 408) = 0;
      GameRoutine_5fe2f0(v89 + 416);
      *(_QWORD*)(v89 + 752) = 0;
      *(_QWORD*)(v89 + 744) = 0;
      *(_QWORD*)(v89 + 736) = 0;
      *(_QWORD*)(v89 + 728) = 0;
      GameRoutine_5fc9e0((_QWORD*)(v89 + 760));
      *(_BYTE*)(v89 + 840) = 0;
      GameRoutine_5fe2f0(v89 + 848);
      *(_QWORD*)(v89 + 1184) = 0;
      *(_QWORD*)(v89 + 1176) = 0;
      *(_QWORD*)(v89 + 1168) = 0;
      *(_QWORD*)(v89 + 1160) = 0;
      GameRoutine_5fc9e0((_QWORD*)(v89 + 1192));
      *(_BYTE*)(v89 + 1272) = 0;
      GameRoutine_5fe2f0(v89 + 1280);
      v90 = v89 + 272;
      *(_QWORD*)(v89 + 1616) = 0;
      *(_QWORD*)(v89 + 1608) = 0;
      *(_QWORD*)(v89 + 1600) = 0;
      *(_QWORD*)(v89 + 1592) = 0;
      v81 = v87;
      FrameHeapEPvmi = v86;
      GameRoutine_5de4d0(v90);
      GameRoutine_5de3b0(*(_QWORD*)(a1 + 16) + v82 + 272, *(__int64**)(a1 + 56),
                         v81, *(_DWORD*)(a1 + 96));
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v82 + 1960) = -1;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v82 + 1968) = -1;
      v91 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v82);
      v91[247] = 0;
      v91[248] = 0;
      v91[249] = 0;
      v91[250] = 0;
      v91[251] = 0;
      v91[252] = 0;
      v91[253] = 0;
      v91[254] = 0;
      v91[255] = 0;
      v91[256] = 0;
      v91[257] = 0;
      v91[258] = 0;
      v91[259] = 0;
      v91[260] = 0;
      v91[261] = 0;
      v91[262] = 0;
      v91[263] = 0;
      v91[264] = 0;
      v91[265] = 0;
      v91[266] = 0;
      v91[267] = 0;
      v91[268] = 0;
      v91[269] = 0;
      v91[270] = 0;
      v91[271] = 0;
      v91[272] = 0;
      v91[273] = 0;
      v91[274] = 0;
      v91[275] = 0;
      v91[276] = 0;
      v91[277] = 0;
      v91[278] = 0;
      v92 = (_QWORD*)(*(_QWORD*)(a1 + 16) + v82);
      v92[310] = 0;
      v92[309] = 0;
      v92[308] = 0;
      v92[307] = 0;
      v92[306] = 0;
      v92[305] = 0;
      v92[304] = 0;
      v92[303] = 0;
      v92[302] = 0;
      v92[301] = 0;
      v92[300] = 0;
      v92[299] = 0;
      v92[298] = 0;
      v92[297] = 0;
      v92[296] = 0;
      v92[295] = 0;
      v92[294] = 0;
      v92[293] = 0;
      v92[292] = 0;
      v92[291] = 0;
      v92[290] = 0;
      v92[289] = 0;
      v92[288] = 0;
      v92[287] = 0;
      v92[286] = 0;
      v92[285] = 0;
      v92[284] = 0;
      v92[283] = 0;
      v92[282] = 0;
      v92[281] = 0;
      v92[280] = 0;
      v92[279] = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v82 + 2488) = 0;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v82 + 2496) = 6;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + v82 + 2512) = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v82 + 2504) =
          nn_lmem_AllocateFromFrameHeap(v86, v99, 16);
      *(_QWORD*)(*(_QWORD*)(a1 + 16) + v82 + 2520) =
          nn_lmem_AllocateFromFrameHeap(v86, v85, 16);
      *(_DWORD*)(*(_QWORD*)(a1 + 32) + v83) = v84++;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 8) =
          *(_QWORD*)(a1 + 16) + v82 + 1624;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 16) = 0xFFFFFFFFLL;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 48) =
          *(_QWORD*)(a1 + 16) + v82 + 272;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 40) =
          *(_QWORD*)(a1 + 16) + v82 + 1944;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 24) = -1;
      *(_QWORD*)(*(_QWORD*)(a1 + 32) + v83 + 32) = -1;
      v93 = *(_QWORD*)(a1 + 16) + v82;
      v94 = *(_QWORD*)(a1 + 32) + v83;
      v83 += 64;
      v82 += 2536;
      *(_QWORD*)(v94 + 56) = *(_QWORD*)(v93 + 2520);
    } while (v84 < *(int*)(a1 + 8));
  }
  nn_lmem_DestroyFrameHeap(FrameHeapEPvmi);
  *(_QWORD*)(a1 + 4576) = 0;
  *(_QWORD*)(a1 + 4568) = 0;
  *(_QWORD*)(a1 + 4560) = 0;
  *(_QWORD*)(a1 + 4552) = 0;
  *(_QWORD*)(a1 + 4544) = 0;
  *(_QWORD*)(a1 + 4536) = 0;
  *(_QWORD*)(a1 + 4528) = 0;
  *(_QWORD*)(a1 + 4520) = 0;
  *(_QWORD*)(a1 + 4512) = 0;
  *(_QWORD*)(a1 + 4504) = 0;
  *(_QWORD*)(a1 + 4496) = 0;
  *(_QWORD*)(a1 + 4488) = 0;
  GameRoutine_5c04f0("\n");
  GameRoutine_5c04f0("System Static     WorkSize : %d \n", *(_QWORD*)(a1 + 80));
  GameRoutine_5c04f0("System Static     AlcCount : %d \n", *(_DWORD*)(a1 + 88));
  GameRoutine_5c04f0("  DelayFree       WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4632));
  GameRoutine_5c04f0("  Random          WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4624));
  GameRoutine_5c04f0("  Resource        WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4640));
  GameRoutine_5c04f0("  EmitterSet      WorkSize : %d ( EmitterSetNum:%d )\n",
                     *(_QWORD*)(a1 + 4648), *(_DWORD*)(a1 + 108));
  GameRoutine_5c04f0("  Emitter         WorkSize : %d ( EmitterNum:%d )\n",
                     *(_QWORD*)(a1 + 4664), *(_DWORD*)(a1 + 112));
  GameRoutine_5c04f0("  EmitterCalc     WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4680));
  GameRoutine_5c04f0("  EmitterConstBuf WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4688));
  GameRoutine_5c04f0("  EmitterSetSort  WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4696));
  GameRoutine_5c04f0("  ParticleSort    WorkSize : %d \n",
                     *(_QWORD*)(a1 + 4800));
  v95 = GameRoutine_5dfd00();
  GameRoutine_5c04f0("  NoiseTexture    WorkSize : %d \n", v95);
  GameRoutine_5c04f0("  TempBuffer      WorkSize : %d \n", v81);
  GameRoutine_5c04f0("-------------------------------\n");
  GameRoutine_5c04f0("Stripe            WorkSize : %d \n", v97 - v98);
  return GameRoutine_5c04f0("-------------------------------\n");
}

__int64 System_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = GameData_21364f8[0] + 2;
  if (*(int*)(a1 + 108) >= 1) {
    v2 = 0;
    v3 = 0;
    do {
      BufferAllocator_5b57b0(*(_QWORD*)(a1 + 160) + v2);
      ++v3;
      v2 += 624;
    } while (v3 < *(int*)(a1 + 108));
  }
  v4 = *(_DWORD*)(a1 + 100);
  if (v4 >= 1) {
    for (i = 0; i < v4; ++i) {
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * i);
      if (v6 != 0) {
        Resource_5c6100(v6, 0);
        GameRoutine_5c02c0(
            "vfx system deleted the registered binary. resource id : %d.", i);
        v4 = *(_DWORD*)(a1 + 100);
      }
    }
  }
  v7 = BufferAllocator_Unknown2(a1 + 5320, *(_QWORD*)(a1 + 56));
  v8 = GameRoutine_5c0270(v7);
  v9 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 24LL))(
      v8, *(_QWORD*)(a1 + 5808));
  v10 = GameRoutine_5c0270(v9);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v10 + 24LL))(v10,
                                                        *(_QWORD*)(a1 + 5816));
  GameRoutine_5deed0(a1 + 4888, *(_QWORD*)(a1 + 56), a1 + 64);
  if (*(int*)(a1 + 112) >= 1) {
    v11 = 2088;
    v12 = 0;
    v13 = GameData_2136500[0] + 2;
    do {
      ++v12;
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + v11) = v13;
      v11 += 2112;
    } while (v12 < *(int*)(a1 + 112));
  }
  if (*(_QWORD*)(a1 + 2240) != 0) {
    GameRoutine_5b9980();
  }
  if (*(int*)(a1 + 8) >= 1) {
    v14 = 272;
    v15 = 0;
    do {
      GameRoutine_5de4f0(*(_QWORD*)(a1 + 16) + v14, *(_QWORD*)(a1 + 56));
      ++v15;
      v14 += 2536;
    } while (v15 < *(int*)(a1 + 8));
  }
  v16 = *(_QWORD*)(a1 + 72);
  v17 = *(_QWORD*)(a1 + 4616);
  --*(_DWORD*)(a1 + 88);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
  GameRoutine_5dfc90(*(_QWORD*)(a1 + 56));
  GameRoutine_5c5590();
  GameRoutine_5c03e0();
  GameRoutine_5debc0(*(_QWORD*)(a1 + 56), a1 + 64);
  GameRoutine_5c01b0(0);
  GameRoutine_5c0260(0);
  GameRoutine_5ca6f0(a1 + 64);
  GameRoutine_5cde10(a1 + 64);
  GameRoutine_5dbab0(a1 + 64);
  nn_os_FinalizeMutex(a1 + 5856);
  nn_os_FinalizeMutex(a1 + 5824);
  *(_QWORD*)(a1 + 5320) = nn_vfx_detail_BufferAllocator_vtable;
  GameRoutine_5fe300(a1 + 5400);
  GameRoutine_5fca00(a1 + 5328);
  GameRoutine_5fe300(a1 + 4976);
  return GameRoutine_5fca00(a1 + 4888);
}

#pragma GCC visibility pop
