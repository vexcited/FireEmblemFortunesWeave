#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 WindLoader_c72960(int8x16_t*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_map_ObjectEffectLoader_LoadAsync(__int64, __int64,
                                             unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
void GameHr_198e2c0(__int64*);
void GameHr_198f8e0(_QWORD*);
void GameHr_c15450(_QWORD*, __int64, unsigned __int64);
void GameHr_c27c00(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_637ae0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void wld_c267a0(__int64, __int64, unsigned __int8*, char, char, __int64,
                unsigned __int64);
void wld_map_WindLoader_create(int8x16_t*, __int64, __int64, char*, __int64*);
float wld_a8c1b0(float32x4_t* a1, float32x4_t* a2);
__int64 wld_c10300(__int64 a1, unsigned __int8* a2, __int64* a3, _QWORD* a4,
                   int a5);

float wld_a8c1b0(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  float32x4_t v3;
  int8x16_t v4;

  {
    v2 = *a2;
    __asm__ volatile("" ::"w"(v2));
  }
  v3 = vsubq_f32(a1[19], *a2);
  v4 = vmulq_f32(v3, v3);
  LANES128(v4).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
          .n64_u64[0];
  if (__builtin_islessgreater(
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
              .n64_f32[0],
          0x0.0p+0f)) {
    LANES128(a1[19]).n128_u32[0] = LANES128(v2).n128_u32[0];
    LANES128(a1[19]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
    {
      v2 = a1[19];
      __asm__ volatile("" ::"w"(v2));
    }
    LANES128(v2).n128_u32[2] = LANES128(*(a2)).n128_u32[2];
    LANES128(a1[18]).n128_u32[2] |= 1u;
    LANES128(v2).n128_u64[1] = LANES128(v2).n128_u32[2];
    a1[19] = v2;
  }
  return LANES128(v2).n128_f32[0];
}

__int64 wld_c10300(__int64 a1, unsigned __int8* a2, __int64* a3, _QWORD* a4,
                   int a5)
{
  unsigned __int64 v5;
  char v6;
  __int64* v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  int v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  _BOOL4 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  _BYTE* v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int8* v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  const char* v58;
  __int64 v59;
  __int64* v60;
  unsigned __int8* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  bool v94;
  signed __int64 v95;
  signed __int64 v96;
  const char* v97;
  const char* v98;
  unsigned __int64 v99;
  __int64 v100;
  const char* v101;
  unsigned __int64 v102;
  signed __int64 v103;
  char* v104;
  char* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  char v110;
  __int64 v111;
  __int64 v112;
  int8x16_t* v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  bool v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  bool v123;
  __int64* v124;
  char* v125;
  __int64* v126;
  int8x16_t* v127;
  __int64 v128;
  unsigned __int8* v129;
  __int64 result;
  __int64 v131;
  __int64 v132;
  int v133;
  unsigned __int8* v134;
  struct {
    __int64 v135;
    unsigned __int64 v136;
    char* v137;
    char gap40_[8];
    __int64* v138;
  } v135_;

  {
    v5 = *a2;
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = a5;
  v134 = a2 + 1;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = (v5 & 1) == 0;
  v13 = v5 >> 1;
  if (v12) {
    v14 = (__int64)(a2 + 1);
  }
  else {
    v14 = *((_QWORD*)a2 + 2);
    __asm__ volatile("" ::"r"(v14));
  }
  if (!v12) {
    v13 = *((_QWORD*)a2 + 1);
    __asm__ volatile("" ::"r"(v13));
  }
  if (v13 != 0) {
    v15 = (unsigned __int8*)(v14 + v13);
    v16 = v13 + v14;
    v17 = (unsigned __int8*)v14;
    v18 = (unsigned __int8*)(v14 + v13);
    do {
      v19 = v16 - (_QWORD)v17;
      v20 = (v16 - (_QWORD)v17) & 3;
      if (v20 != 0) {
        v21 = v17;
        while (1) {
          {
            v22 = *v21++;
            __asm__ volatile("" ::"r"(v22));
          }
          if (v22 == 47) {
            break;
          }
          --v20;
          v17 = v21;
          if (v20 == 0) {
            goto LABEL_14;
          }
        }
        v23 = v17 + 1;
      LABEL_26:
        v26 = v23 == v15;
      LABEL_27:
        v25 = v26;
        goto LABEL_30;
      }
      v21 = v17;
    LABEL_14:
      if (v19 - 1 < 3) {
        break;
      }
      v23 = v21 + 2;
      while (1) {
        if (*(v23 - 2) == 47) {
          v17 = v23 - 2;
          --v23;
          goto LABEL_26;
        }
        if (*(v23 - 1) == 47) {
          v26 = v23 == v15;
          v17 = v23 - 1;
          goto LABEL_27;
        }
        if (*v23 == 47) {
          v17 = v23++;
          goto LABEL_26;
        }
        v24 = v23 + 2;
        v25 = v23 + 2 == v15;
        if (v23[1] == 47) {
          break;
        }
        v23 += 4;
        if (v24 == v15) {
          goto LABEL_33;
        }
      }
      v17 = v23 + 1;
      v23 += 2;
    LABEL_30:
      v18 = v17;
      v17 = v23;
    } while (!v25);
  LABEL_33:
    if (v18 != v15) {
      {
        v27 = (unsigned __int64)&v18[-v14];
        __asm__ volatile("" ::"r"(v27));
      }
      if (&v18[-v14] != (unsigned __int8*)-1LL) {
        if (v13 >= v27) {
          v28 = (unsigned __int64)&v18[-v14];
          __asm__ volatile("" ::"r"(v28));
        }
        else {
          v28 = v13;
        }
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_224;
        }
        v133 = a5;
        if (v28 >= 0x17) {
          v38 = fw_memory_g_heap_manager_ptr;
          v39 = (v28 | 7) == 0x17 ? 26LL : (v28 | 7) + 1;
          v40 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v39, 16, 0);
          v41 = v39 | 1;
          v29 = (char*)v40;
          v135_.v136 = v28;
          v135_.v137 = (char*)v40;
          v11 = (__int64*)v38;
          v135_.v135 = v41;
        }
        else {
          LOBYTE(v135_.v135) = 2 * v28;
          v29 = (char*)&v135_.v135 + 1;
          if (v18 == (unsigned __int8*)v14) {
            goto LABEL_61;
          }
        }
        memmove((__int64)v29, v14, v28);
      LABEL_61:
        v29[v28] = 0;
        if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
          {
            v42 = *(_QWORD*)(a1 + 56);
            __asm__ volatile("" ::"r"(v42));
          }
          if (v42 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*v11 + 200) == 0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(*v11 + v43, v42);
          }
        }
        v44 = v135_.v136;
        *(_QWORD*)(a1 + 40) = v135_.v135;
        *(_QWORD*)(a1 + 48) = v44;
        *(_QWORD*)(a1 + 56) = v135_.v137;
        {
          v45 = *a2;
          __asm__ volatile("" ::"r"(v45));
        }
        {
          v46 = *((_QWORD*)a2 + 1);
          __asm__ volatile("" ::"r"(v46));
        }
        if ((v45 & 1) == 0) {
          v46 = v45 >> 1;
        }
        if (v27 >= v46) {
          fs_60a230();
        }
        v47 = v11;
        v48 = v27 + 1;
        v49 = v46 - (v27 + 1);
        {
          v50 = (v45 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : v134;
          __asm__ volatile("" ::"r"(v50));
        }
        if (v49 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_224:
          String_60a1d0();
        }
        if (v49 >= 0x17) {
          if ((v49 | 7) == 0x17) {
            v52 = 26;
          }
          else {
            v52 = (v49 | 7) + 1;
          }
          v51 = (char*)fw_memory_HeapManager_Allocate(*v47, v52, 16, 0);
          v135_.v136 = v49;
          v135_.v137 = v51;
          v135_.v135 = v52 | 1;
        }
        else {
          LOBYTE(v135_.v135) = 2 * v49;
          v51 = (char*)&v135_.v135 + 1;
          if (v46 == v48) {
            goto LABEL_81;
          }
        }
        memmove((__int64)v51, (__int64)&v50[v48], v49);
      LABEL_81:
        v51[v49] = 0;
        v11 = v47;
        if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
          {
            v53 = *(_QWORD*)(a1 + 80);
            __asm__ volatile("" ::"r"(v53));
          }
          if (v53 != 0) {
            v54 = 128;
            if (*(_QWORD*)(*v47 + 200) == 0) {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free(*v47 + v54, v53);
          }
        }
        v55 = v135_.v136;
        v6 = v133;
        *(_QWORD*)(a1 + 64) = v135_.v135;
        *(_QWORD*)(a1 + 72) = v55;
        *(_QWORD*)(a1 + 80) = v135_.v137;
      LABEL_88:
        {
          v56 = a2[224];
          __asm__ volatile("" ::"r"(v56));
        }
        {
          v57 = *((_QWORD*)a2 + 29);
          __asm__ volatile("" ::"r"(v57));
        }
        if ((v56 & 1) == 0) {
          v57 = v56 >> 1;
        }
        if (v57 != 0) {
          if ((v56 & 1) != 0) {
            v58 = *((const char**)a2 + 30);
            __asm__ volatile("" ::"r"(v58));
          }
          else {
            v58 = (const char*)(a2 + 225);
          }
          v59 = strlen(v58);
        }
        else {
          v58 = "@all";
          v59 = 4;
        }
        GameRoutine_60a060((char*)(a1 + 192), (__int64)v58, v59);
        v60 = (__int64*)(a1 + 88);
        *(_DWORD*)(a1 + 248) = *((_DWORD*)a2 + 12);
        v61 = a2 + 24;
        if ((unsigned __int8*)(a1 + 88) == a2 + 24) {
        LABEL_108:
          {
            v66 = *a3;
            __asm__ volatile("" ::"r"(v66));
          }
          {
            v65 = a3[1];
            __asm__ volatile("" ::"r"(v65));
          }
          if (v65 == 0) {
            goto LABEL_110;
          }
          goto LABEL_109;
        }
        {
          v62 = *v61;
          __asm__ volatile("" ::"r"(v62));
        }
        if ((*(_BYTE*)v60 & 1) != 0) {
          if ((v62 & 1) != 0) {
            v67 = *((_QWORD*)a2 + 5);
            __asm__ volatile("" ::"r"(v67));
          }
          else {
            v67 = (__int64)(a2 + 25);
          }
          if ((v62 & 1) != 0) {
            v68 = *((_QWORD*)a2 + 4);
            __asm__ volatile("" ::"r"(v68));
          }
          else {
            v68 = v62 >> 1;
          }
          SpineModel_64dde0(v60, v67, v68);
          goto LABEL_108;
        }
        if ((v62 & 1) == 0) {
          {
            v63 = *(_QWORD*)v61;
            __asm__ volatile("" ::"r"(v63));
          }
          {
            v64 = *((_QWORD*)a2 + 5);
            __asm__ volatile("" ::"r"(v64));
          }
          *(_QWORD*)(a1 + 96) = *((_QWORD*)a2 + 4);
          *(_QWORD*)(a1 + 104) = v64;
          *v60 = v63;
          {
            v66 = *a3;
            __asm__ volatile("" ::"r"(v66));
          }
          {
            v65 = a3[1];
            __asm__ volatile("" ::"r"(v65));
          }
          if (v65 == 0) {
            goto LABEL_110;
          }
        LABEL_109:
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                    memory_order_relaxed);
          goto LABEL_110;
        }
        GameRoutine_64df20(v60, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
        {
          v66 = *a3;
          __asm__ volatile("" ::"r"(v66));
        }
        {
          v65 = a3[1];
          __asm__ volatile("" ::"r"(v65));
        }
        if (v65 != 0) {
          goto LABEL_109;
        }
      LABEL_110:
        {
          v69 = *(_QWORD*)(a1 + 32);
          __asm__ volatile("" ::"r"(v69));
        }
        *(_QWORD*)(a1 + 24) = v66;
        *(_QWORD*)(a1 + 32) = v65;
        if (v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
          std___1___shared_weak_count___release_weak(v69);
        }
        {
          v70 = *v11;
          __asm__ volatile("" ::"r"(v70));
        }
        *(_QWORD*)(a1 + 160) = *a4;
        v71 = fw_memory_HeapManager_Allocate(v70, 72, 16, 0);
        {
          v72 = *(_QWORD*)(a1 + 272);
          __asm__ volatile("" ::"r"(v72));
        }
        *(_BYTE*)v71 = 0;
        *(_BYTE*)(v71 + 64) = 0;
        *(_QWORD*)(v71 + 8) = 0;
        *(_QWORD*)(v71 + 16) = 0;
        *(_BYTE*)(v71 + 24) = 0;
        *(_QWORD*)(a1 + 272) = v71;
        if (v72 != 0) {
          if (*(_BYTE*)(v72 + 64) == 1) {
            GameHr_198f8e0((_QWORD*)(v72 + 24));
            if (*(_BYTE*)(v72 + 64) == 1) {
              GameHr_198e2c0((__int64*)(v72 + 24));
            }
          }
          {
            v73 = *(_QWORD*)(v72 + 16);
            __asm__ volatile("" ::"r"(v73));
          }
          if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
            std___1___shared_weak_count___release_weak(v73);
          }
          v74 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v74, v72);
          {
            v71 = *(_QWORD*)(a1 + 272);
            __asm__ volatile("" ::"r"(v71));
          }
        }
        v75 = wld_map_ObjectEffectLoader_LoadAsync(
            v71, (__int64)"Effect/Layout/Object/Object_Effect.elf", 0x26u);
        if (v75 != 0) {
          {
            v77 = *(__int64**)(a1 + 336);
            __asm__ volatile("" ::"r"(v77));
          }
          {
            v76 = *(_QWORD*)(a1 + 344);
            __asm__ volatile("" ::"r"(v76));
          }
          if ((unsigned __int64)v77 >= v76) {
            {
              v79 = *(_QWORD*)(a1 + 328);
              __asm__ volatile("" ::"r"(v79));
            }
            v80 = (unsigned __int64)v77 - v79;
            v81 = ((__int64)v77 - v79) >> 3;
            v82 = v81 + 1;
            if ((unsigned __int64)(v81 + 1) >> 61 != 0) {
              GameRoutine_637ae0();
            }
            v83 = v76 - v79;
            if (v83 >> 2 > v82) {
              v82 = v83 >> 2;
            }
            if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFF8LL) {
              v84 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v84 = v82;
            }
            if (v84 != 0) {
              if (v84 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v85 = v75;
              v86 = fw_memory_HeapManager_Allocate(*v11, 8 * v84, 16, 0);
              v75 = v85;
            }
            else {
              v86 = 0;
            }
            v87 = v86 + 8 * v84;
            v88 = v86 + v80 - 8 * v81;
            *(_QWORD*)(v86 + v80) = v75;
            v78 = v86 + v80 + 8;
            memcpy(v88, v79, v80);
            *(_QWORD*)(a1 + 328) = v88;
            *(_QWORD*)(a1 + 336) = v78;
            *(_QWORD*)(a1 + 344) = v87;
            if (v79 != 0) {
              v89 = 128;
              if (*(_QWORD*)(*v11 + 200) == 0) {
                v89 = 56;
              }
              nn_mem_StandardAllocator_Free(*v11 + v89, v79);
            }
          }
          else {
            *v77 = v75;
            v78 = (__int64)(v77 + 1);
          }
          *(_QWORD*)(a1 + 336) = v78;
        }
        v90 = fw_memory_HeapManager_Allocate(*v11, 432, 16, 0);
        wld_c267a0(v90, a1, a2, v6 & 1, 0, (__int64)&GameData_1a9f09e, 0);
        {
          v91 = *(_QWORD*)(a1 + 264);
          __asm__ volatile("" ::"r"(v91));
        }
        *(_QWORD*)(a1 + 264) = v90;
        if (v91 != 0) {
          GameHr_c27c00(v91);
          v92 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v92 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v92, v91);
        }
        {
          v93 = *(unsigned __int8*)(a1 + 40);
          __asm__ volatile("" ::"r"(v93));
        }
        v94 = (v93 & 1) == 0;
        v95 = v93 >> 1;
        if (v94) {
          v96 = v95;
        }
        else {
          v96 = *(_QWORD*)(a1 + 48);
          __asm__ volatile("" ::"r"(v96));
        }
        if (v94) {
          v97 = (const char*)(a1 + 41);
        }
        else {
          v97 = *(const char**)(a1 + 56);
          __asm__ volatile("" ::"r"(v97));
        }
        *(_QWORD*)(a1 + 360) = *(_QWORD*)(a1 + 352);
        if (v96 < 1) {
          goto LABEL_166;
        }
        {
          v98 = &v97[v96];
          __asm__ volatile("" ::"r"(v98));
        }
        v99 = v96;
        v100 = (__int64)v97;
        while (1) {
          v101 = (const char*)memchr(v100, 47, v99);
          if (v101 == nullptr) {
            goto LABEL_166;
          }
          if (*v101 == 47) {
            break;
          }
          v100 = (__int64)(v101 + 1);
          {
            v99 = (unsigned __int64)&v98[-v100];
            __asm__ volatile("" ::"r"(v99));
          }
          if ((__int64)&v98[-v100] < 1) {
            goto LABEL_166;
          }
        }
        if (v101 == v98 || (v102 = v101 - v97, v101 - v97 == -1) ||
            (v103 = v96 - (v102 + 1), v96 <= v102 + 1)) {
        LABEL_166:
          v102 = 0;
          LOBYTE(v135_.v135) = 0;
          v104 = (char*)&v135_.v135 + 1;
          goto LABEL_167;
        }
        if (v102 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_224;
        }
        if (v102 >= 0x17) {
          if ((v102 | 7) == 0x17) {
            v132 = 26;
          }
          else {
            v132 = (v102 | 7) + 1;
          }
          v104 = (char*)fw_memory_HeapManager_Allocate(*v11, v132, 16, 0);
          v135_.v136 = v102;
          v135_.v137 = v104;
          v135_.v135 = v132 | 1;
          goto LABEL_222;
        }
        LOBYTE(v135_.v135) = 2 * v102;
        v104 = (char*)&v135_.v135 + 1;
        if (v102 != 0) {
        LABEL_222:
          memmove((__int64)v104, (__int64)v97, v102);
        }
        v97 += v102 + 1;
        v96 = v103;
      LABEL_167:
        v104[v102] = 0;
        GameRoutine_1a09ce0((__int64)&v135_.v135, "/Data/Model/", 0xCu);
        GameRoutine_1a09ce0((__int64)&v135_.v135, v97, v96);
        GameRoutine_1a09ce0((__int64)&v135_.v135, ".elf", 4u);
        if ((v135_.v135 & 1) != 0) {
          v105 = v135_.v137;
        }
        else {
          v105 = (char*)&v135_.v135 + 1;
        }
        if ((v135_.v135 & 1) != 0) {
          v106 = v135_.v136;
        }
        else {
          v106 = (unsigned __int64)(unsigned __int8)v135_.v135 >> 1;
        }
        GameHr_c15450((_QWORD*)a1, (__int64)v105, v106);
        if ((v135_.v135 & 1) != 0 && v135_.v137 != nullptr) {
          v107 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v107 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v107, (__int64)v135_.v137);
        }
        GameHr_c15450((_QWORD*)a1, (__int64)"Map/Data/Model/Com/Obj.elf",
                      0x1Au);
        GameHr_c15450((_QWORD*)a1, (__int64)"Map/Data/Model/Com/Chara.elf",
                      0x1Cu);
        if ((v6 & 1) != 0) {
          {
            v108 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
            __asm__ volatile("" ::"r"(v108));
          }
          if (v108 != 0) {
            {
              v109 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
              __asm__ volatile("" ::"r"(v109));
            }
            v110 = 1;
            {
              v111 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
              __asm__ volatile("" ::"r"(v111));
            }
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v108 + 16), 1u,
                                      memory_order_relaxed);
            v112 = std___1___shared_weak_count_lock(v111);
            std___1___shared_weak_count___release_weak(v108);
            v113 = (int8x16_t*)fw_memory_HeapManager_Allocate(*v11, 192, 16, 0);
            if (v112 != 0) {
              v110 = 0;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v112 + 16),
                                        1u, memory_order_relaxed);
            }
            else {
              v109 = 0;
            }
          }
          else {
            v113 = (int8x16_t*)fw_memory_HeapManager_Allocate(*v11, 192, 16, 0);
            v112 = 0;
            v109 = 0;
            v110 = 1;
          }
          {
            v114 = *a2;
            __asm__ volatile("" ::"r"(v114));
          }
          {
            v116 = *((_QWORD*)a2 + 1);
            __asm__ volatile("" ::"r"(v116));
          }
          {
            v115 = *((_QWORD*)a2 + 2);
            __asm__ volatile("" ::"r"(v115));
          }
          v117 = (v114 & 1) == 0;
          v118 = (__int64)v134;
          v119 = v114 >> 1;
          LANES128(*(v113)).n128_u64[0] = v109;
          LANES128(*(v113)).n128_u64[1] = v112;
          if (v117) {
            v120 = v119;
          }
          else {
            v120 = v116;
          }
          {
            v121 = *(unsigned __int8*)(a1 + 88);
            __asm__ volatile("" ::"r"(v121));
          }
          if (v117) {
            v122 = v118;
          }
          else {
            v122 = v115;
          }
          v123 = (v121 & 1) == 0;
          v124 = (__int64*)(v121 >> 1);
          if (v123) {
            v125 = (char*)(a1 + 89);
          }
          else {
            v125 = *(char**)(a1 + 104);
            __asm__ volatile("" ::"r"(v125));
          }
          if (v123) {
            v126 = v124;
          }
          else {
            v126 = *(__int64**)(a1 + 96);
            __asm__ volatile("" ::"r"(v126));
          }
          if ((v110 & 1) == 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v112 + 16), 1u,
                                      memory_order_relaxed);
          }
          LANES128(v113[1]).n128_u32[0] = 0;
          LANES128(v113[3]).n128_u8[0] = 0;
          LANES128(v113[4]).n128_u8[0] = 0;
          LANES128(v113[5]).n128_u8[0] = 0;
          LANES128(v113[5]).n128_u8[4] = 0;
          LANES128(v113[6]).n128_u8[0] = 0;
          LANES128(v113[9]).n128_u8[0] = 0;
          LANES128(v113[10]).n128_u8[0] = 0;
          LANES128(v113[10]).n128_u64[1] = 0;
          LANES128(v113[11]).n128_u64[0] = 0;
          LANES128(v113[11]).n128_u64[1] = 0;
          LANES128(v113[2]).n128_u32[0] = 1;
          wld_map_WindLoader_create(v113, v122, v120, v125, v126);
          if ((v110 & 1) == 0) {
            std___1___shared_weak_count___release_weak(v112);
          }
          {
            v127 = *(int8x16_t**)(a1 + 296);
            __asm__ volatile("" ::"r"(v127));
          }
          *(_QWORD*)(a1 + 296) = v113;
          if (v127 != nullptr) {
            WindLoader_c72960(v127);
            v128 = 128;
            if (*(_QWORD*)(*v11 + 200) == 0) {
              v128 = 56;
            }
            nn_mem_StandardAllocator_Free(*v11 + v128, (__int64)v127);
          }
          if ((v110 & 1) == 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
            std___1___shared_weak_count___release_weak(v112);
            {
              v129 = *((unsigned __int8**)a2 + 12);
              __asm__ volatile("" ::"r"(v129));
            }
            if (v129 != nullptr) {
              goto LABEL_207;
            }
            goto LABEL_211;
          }
        }
        {
          v129 = *((unsigned __int8**)a2 + 12);
          __asm__ volatile("" ::"r"(v129));
        }
        if (v129 == nullptr) {
        LABEL_211:
          v135_.v138 = nullptr;
          goto LABEL_212;
        }
      LABEL_207:
        if (v129 == a2 + 64) {
          v135_.v138 = &v135_.v135;
          (*(void (**)(unsigned __int8*, __int64*))(*(_QWORD*)v129 + 24LL))(
              v129, &v135_.v135);
        }
        else {
          v135_.v138 = (__int64*)(*(__int64 (**)(unsigned __int8*))(
              *(_QWORD*)v129 + 16LL))(v129);
        }
      LABEL_212:
        GameRoutine_c18930(&v135_.v135, (_QWORD*)(a1 + 112));
        result = (__int64)v135_.v138;
        if (v135_.v138 == &v135_.v135) {
          v131 = 32;
        LABEL_216:
          result = (*(__int64 (**)(__int64))(*v135_.v138 + v131))(
              (__int64)v135_.v138);
        }
        else if (v135_.v138 != nullptr) {
          v131 = 40;
          goto LABEL_216;
        }
        *(_DWORD*)(a1 + 240) = 1;
        return result;
      }
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    {
      v30 = *(_BYTE**)(a1 + 56);
      __asm__ volatile("" ::"r"(v30));
    }
    *(_QWORD*)(a1 + 48) = 0;
  }
  else {
    v30 = (_BYTE*)(a1 + 41);
    *(_BYTE*)(a1 + 40) = 0;
  }
  v31 = (__int64*)(a1 + 64);
  *v30 = 0;
  if ((unsigned __int8*)(a1 + 64) != a2) {
    {
      v32 = *a2;
      __asm__ volatile("" ::"r"(v32));
    }
    if ((*(_BYTE*)v31 & 1) != 0) {
      v34 = (v32 & 1) == 0;
      v35 = v32 >> 1;
      if (v34) {
        v36 = (__int64)v134;
      }
      else {
        v36 = *((_QWORD*)a2 + 2);
        __asm__ volatile("" ::"r"(v36));
      }
      if (v34) {
        v37 = v35;
      }
      else {
        v37 = *((_QWORD*)a2 + 1);
        __asm__ volatile("" ::"r"(v37));
      }
      SpineModel_64dde0(v31, v36, v37);
    }
    else if ((v32 & 1) != 0) {
      GameRoutine_64df20(v31, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      *(_QWORD*)(a1 + 72) = *((_QWORD*)a2 + 1);
      {
        v33 = *(_QWORD*)a2;
        __asm__ volatile("" ::"r"(v33));
      }
      *(_QWORD*)(a1 + 80) = *((_QWORD*)a2 + 2);
      *v31 = v33;
    }
  }
  goto LABEL_88;
}

#pragma GCC visibility pop
