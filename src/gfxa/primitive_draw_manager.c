#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1996700(void);
__int64 GameRoutine_1999040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19994c0(_QWORD);
__int64 GameRoutine_1999780(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_beefc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64 (*GameData_211d848[])();
extern __int64 (*GameData_211d8c8[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_1995160(void);
void __attribute__((noreturn)) GameRoutine_19953a0(void);
void __attribute__((noreturn)) GameRoutine_19953c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1995730(void);
void __attribute__((noreturn)) GameRoutine_1997cf0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
__int64* PrimitiveDrawManager_19928f0(__int64* result, __int128* a2, float a3,
                                      float a4, float a5, float a6);
__int64 gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(__int64 result,
                                                       __int64 a2, __int64 a3);
__int64 PrimitiveDrawManager_19932a0_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4,
    int a5) __asm__("PrimitiveDrawManager_19932a0");
_QWORD* PrimitiveDrawManager_19935e0(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned int a4);
__int64 PrimitiveDrawManager_1994180(__int64 result);
__int64 PrimitiveDrawManager_1995020(__int64 result, _DWORD* a2);
__int64 PrimitiveDrawManager_1995180_alt1(
    __int64 result, __int64 a2,
    __int64 a3) __asm__("PrimitiveDrawManager_1995180");
__int64 PrimitiveDrawManager_19953e0(__int64 a1, __int64 a2);
__int64 gfxa_PrimitiveDrawManager_Impl_initializeGfxObjects_closure_Invoke(
    __int64 result, __int64 a2);
__int64 PrimitiveDrawManager_1996450_alt1(
    _QWORD* a1, __int64 a2,
    unsigned int a3) __asm__("PrimitiveDrawManager_1996450");
_QWORD* PrimitiveDrawManager_1997990(__int64* a1, _QWORD* a2, _QWORD* a3);
__int64 PrimitiveDrawManager_1997bc0(__int64* a1, __int64 a2);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64
gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx_closure_Invoke(__int64 a1,
                                                              __int64 a2);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 PrimitiveDrawManager_1996fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c060;
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 PrimitiveDrawManager_1996700_alt1(
    __int64 result, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("PrimitiveDrawManager_1996700");
__int64 PrimitiveDrawManager_19994c0(__int64 a1, _BYTE* a2,
                                     unsigned __int64 a3);
__int64 PrimitiveDrawManager_1999ce0(float32x4_t* a1, float32x4_t* a2);
__int64 GameRoutine_634d80(_QWORD);
__int64 PrimitiveDrawManager_19931a0(__int64 result, __int64 a2, __int64 a3);
__int64 GameRoutine_5ddd0(_QWORD, _QWORD);
__int64 GameRoutine_5de20(_QWORD, _QWORD);
__int64 GameRoutine_5fb900(_QWORD);
__int64 strlen(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN** GameData_212e478[14];
extern _UNKNOWN** GameData_212e480[13];
extern _UNKNOWN** GameData_212e488[12];
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4b8[6];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
extern _UNKNOWN** GameData_212e770[3];
extern _UNKNOWN** GameData_212e868[7];
extern _UNKNOWN** GameData_212e878[5];
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e890[2];
extern _UNKNOWN** GameData_212e898;
extern _UNKNOWN** GameData_212e8f0[3];
extern _UNKNOWN** GameData_212e8f8[2];
extern _UNKNOWN** GameData_2132548[4];
extern _UNKNOWN** GameData_2132558[2];
extern _UNKNOWN** GameData_2132560;
extern __int64 (*GameData_2178078)(__int64, __int64);
extern __int64 (*GameData_2178090)(__int64, __int64, long double);
extern unsigned int GameData_1c22e94[7];
__int64 gfxa_PrimitiveDrawManager_Impl_draw2D_closure_Invoke(
    __int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4, __int64 a5, int** a6);
_QWORD* GameHr_1999040(__int64*, __int64*, _QWORD*);
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 GameRoutine_5ddd0_alt1(__int64) __asm__("GameRoutine_5ddd0");
__int64 GameRoutine_5de20_alt1(__int64) __asm__("GameRoutine_5de20");
__int64 GameRoutine_5fb900_alt1(__int64) __asm__("GameRoutine_5fb900");
__int64 GameRoutine_beefc0_alt1(char**, __int64, __int64, __int64, unsigned int,
                                unsigned int,
                                __int64) __asm__("GameRoutine_beefc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int* PrimitiveDrawManager_1996fc0_alt1(
    int* result, int*, __int64, unsigned __int64, int*,
    signed __int64) __asm__("PrimitiveDrawManager_1996fc0");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_19953a0_alt1() __asm__("GameRoutine_19953a0");
void __attribute__((noreturn))
GameRoutine_19953c0_alt1() __asm__("GameRoutine_19953c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* PrimitiveDrawManager_19932a0(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, __int64 a4, int a5);
void PrimitiveDrawManager_1995180(__int64 a1, __int64 a2, __int64 a3);
void PrimitiveDrawManager_1996450(__int64 a1, __int64 a2, unsigned int a3);
void PrimitiveDrawManager_1996700(__int64 a1);

__int64* PrimitiveDrawManager_19928f0(__int64* result, __int128* a2, float a3,
                                      float a4, float a5, float a6)
{
  __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int128 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  float v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;

  v6 = *result;
  v7 = *a2;
  *(float*)&v8 = a3 + (float)(a5 * 0.0);
  v9 = *(_QWORD*)(*result + 18736);
  v10 = *(_DWORD*)(*result + 19200);
  v11 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v10 + 1;
  if (v10 <= 262142) {
    *(float*)&v12 = a3 + (float)(a5 * 0.0);
    *((float*)&v12 + 1) = a4 + (float)(a6 * 0.0);
    v13 = *(_QWORD*)(v6 + 19136) + 40LL * (v10 + 1);
    *(_QWORD*)(v13 + 8) = 0;
    *(_QWORD*)(v13 + 16) = 0;
    *(_OWORD*)(v13 + 24) = v7;
    *(_QWORD*)v13 = v12;
    v14 = v9 + 1440LL * v11 + 4LL * *(int*)(v9 + 1440LL * v11 + 256);
    ++*(_DWORD*)(v14 + 260);
  }
  v15 = *result;
  *(float*)&v16 = a3 + a5;
  v17 = *a2;
  v18 = *(_QWORD*)(*result + 18736);
  v19 = *(_DWORD*)(*result + 19200);
  v20 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v19 + 1;
  if (v19 <= 262142) {
    LODWORD(v21) = v16;
    *((float*)&v21 + 1) = a4 + (float)(a6 * 0.0);
    v22 = *(_QWORD*)(v15 + 19136) + 40LL * (v19 + 1);
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 16) = 0;
    *(_OWORD*)(v22 + 24) = v17;
    *(_QWORD*)v22 = v21;
    v23 = v18 + 1440LL * v20 + 4LL * *(int*)(v18 + 1440LL * v20 + 256);
    ++*(_DWORD*)(v23 + 260);
  }
  v24 = *result;
  v25 = *a2;
  v26 = a4 + a6;
  v27 = *(_QWORD*)(*result + 18736);
  v28 = *(_DWORD*)(*result + 19200);
  v29 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v28 + 1;
  if (v28 <= 262142) {
    *((float*)&v16 + 1) = v26;
    v30 = *(_QWORD*)(v24 + 19136) + 40LL * (v28 + 1);
    *(_QWORD*)v30 = v16;
    *(_QWORD*)(v30 + 8) = 0;
    *(_QWORD*)(v30 + 16) = 0;
    *(_OWORD*)(v30 + 24) = v25;
    v31 = v27 + 1440LL * v29 + 4LL * *(int*)(v27 + 1440LL * v29 + 256);
    ++*(_DWORD*)(v31 + 260);
  }
  v32 = *result;
  v33 = *a2;
  v34 = *(_QWORD*)(*result + 18736);
  v35 = *(_DWORD*)(*result + 19200);
  v36 = *(_DWORD*)(*result + 17280);
  *(_DWORD*)(*result + 19200) = v35 + 1;
  if (v35 <= 262142) {
    *((float*)&v8 + 1) = v26;
    v37 = *(_QWORD*)(v32 + 19136) + 40LL * (v35 + 1);
    *(_QWORD*)v37 = v8;
    *(_QWORD*)(v37 + 8) = 0;
    *(_QWORD*)(v37 + 16) = 0;
    *(_OWORD*)(v37 + 24) = v33;
    v38 = v34 + 1440LL * v36 + 4LL * *(int*)(v34 + 1440LL * v36 + 256);
    ++*(_DWORD*)(v38 + 260);
  }
  return result;
}

__int64 gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(__int64 result,
                                                       __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned int v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  unsigned __int64 v45;
  char* v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  __int64 v56;
  _BYTE* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  bool v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  char* v77;
  __int64* v78;

  v3 = result + 245760;
  v69 = result;
  v6 = *(_QWORD*)(result + 248632);
  v7 = *(_QWORD*)(result + 248640);
  v8 = v6;
  if (v6 != v7) {
    v8 = *(_QWORD*)(result + 248632);
    while (1) {
      v9 = *(unsigned __int8*)(v8 + 32);
      v10 = *(_QWORD*)(v8 + 40);
      if ((v9 & 1) == 0) {
        v10 = v9 >> 1;
      }
      if (a3 == v10) {
        v11 = (v9 & 1) != 0 ? *(_QWORD*)(v8 + 48) : v8 + 33;
        result = memcmp(a2, v11, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v8 += 88;
      if (v8 == v7) {
        goto LABEL_13;
      }
    }
  }
  if (v8 != v7) {
    ++*(_DWORD*)(v8 + 80);
    return result;
  }
LABEL_13:
  if (v6 == v7) {
    return result;
  }
  v12 = 0;
  while (1) {
    v16 = v6 + 88 * v12;
    v17 = *(_BYTE*)(v16 + 32);
    result = v16 + 32;
    v18 = v17 >> 1;
    if ((v17 & 1) != 0) {
      v19 = *(_QWORD*)(result + 8);
    }
    else {
      v19 = v18;
    }
    if (v19 != 0) {
      goto LABEL_20;
    }
    GameRoutine_60a060(result, a2, a3);
    v20 = *(_QWORD*)(v3 + 2872) + 88 * v12;
    v21 = *(unsigned __int8*)(v20 + 32);
    v22 = v20 + 33;
    v25 = v20 + 40;
    v23 = *(_QWORD*)(v20 + 40);
    v24 = *(_QWORD*)(v25 + 8);
    v26 = (v21 & 1) == 0;
    v27 = v21 >> 1;
    if (v26) {
      v28 = v27;
    }
    else {
      v28 = v23;
    }
    if (v26) {
      v29 = v22;
    }
    else {
      v29 = v24;
    }
    result = (*(__int64 (**)(_QWORD, __int64, unsigned __int64, __int64))(
        **(_QWORD**)(*(_QWORD*)(v69 + 8) + 13432LL) + 96LL))(
        *(_QWORD*)(*(_QWORD*)(v69 + 8) + 13432LL), v29, v28, 255);
    v30 = *(_QWORD*)(v3 + 2872) + 88 * v12;
    v33 = *(unsigned __int8*)(v30 + 32);
    v31 = v30 + 32;
    v32 = v33;
    if ((result & 1) == 0) {
      if ((v32 & 1) != 0) {
        *(_QWORD*)(v31 + 8) = 0;
        v57 = *(_BYTE**)(v31 + 16);
      }
      else {
        *(_BYTE*)v31 = 0;
        v57 = (_BYTE*)(v31 + 1);
      }
      *v57 = 0;
      return result;
    }
    v34 = *(_QWORD*)(v31 + 8);
    if ((v32 & 1) != 0) {
      v35 = *(_QWORD*)(v31 + 16);
    }
    else {
      v35 = v31 + 1;
    }
    v36 = v32 >> 1;
    if ((v32 & 1) != 0) {
      v36 = v34;
    }
    v37 = v36;
    do {
      if (v37 == 0) {
        v39 = 0;
        goto LABEL_43;
      }
      v38 = *(unsigned __int8*)(v35 - 1 + v37--);
    } while (v38 != 47);
    v39 = v37 + 1;
    if (v37 + 1 > v36) {
      String_60a230(result);
    }
  LABEL_43:
    v40 = v36 - v39;
    if (v36 - v39 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_122:
      String_60a1d0(result);
    }
    if (v40 >= 0x17) {
      v42 = (v40 | 7) == 0x17 ? 26LL : (v40 | 7) + 1;
      v41 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v42,
                                                  16, 0);
      v76 = v40;
      v77 = v41;
      v75 = v42 | 1;
    }
    else {
      v41 = (char*)&v75 + 1;
      LOBYTE(v75) = 2 * v40;
      if (v36 == v39) {
        goto LABEL_52;
      }
    }
    result = memmove(v41, v35 + v39, v40);
  LABEL_52:
    v41[v40] = 0;
    v43 = (unsigned __int64)(unsigned __int8)v75 >> 1;
    if ((v75 & 1) != 0) {
      v44 = v77;
    }
    else {
      v44 = (char*)&v75 + 1;
    }
    if ((v75 & 1) != 0) {
      v43 = v76;
    }
    v45 = v43;
    while (v45 != 0) {
      v46 = &v44[v45--];
      if (*(v46 - 1) == 46) {
        goto LABEL_62;
      }
    }
    v45 = -1;
  LABEL_62:
    if (v43 >= v45) {
      v47 = v45;
    }
    else {
      v47 = v43;
    }
    if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_122;
    }
    if (v47 >= 0x17) {
      v49 = (v47 | 7) == 0x17 ? 26LL : (v47 | 7) + 1;
      v48 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v49,
                                                  16, 0);
      v73 = v47;
      v74 = v48;
      v72 = v49 | 1;
    }
    else {
      v48 = (char*)&v72 + 1;
      LOBYTE(v72) = 2 * v47;
      if (v47 == 0) {
        goto LABEL_74;
      }
    }
    memmove(v48, v44, v47);
  LABEL_74:
    v50 = v75;
    v48[v47] = 0;
    if ((v50 & 1) != 0 && v77 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v51);
    }
    v75 = v72;
    v76 = v73;
    v77 = v74;
    result = *(_QWORD*)(v3 + 2872) + 88 * v12 + 56;
    if ((__int64*)result == &v75) {
      goto LABEL_91;
    }
    if ((*(_BYTE*)result & 1) != 0) {
      if ((v75 & 1) != 0) {
        v54 = v77;
      }
      else {
        v54 = (char*)&v75 + 1;
      }
      if ((v75 & 1) != 0) {
        v55 = v76;
      }
      else {
        v55 = (unsigned __int64)(unsigned __int8)v75 >> 1;
      }
      result = SpineModel_64dde0(result, v54, v55);
    LABEL_91:
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
      goto LABEL_92;
    }
    if ((v75 & 1) != 0) {
      result = GameRoutine_64df20(result, v77, v76);
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
    }
    else {
      v52 = v75;
      v53 = v77;
      *(_QWORD*)(*(_QWORD*)(v3 + 2872) + 88 * v12 + 64) = v76;
      *(_QWORD*)(result + 16) = v53;
      *(_QWORD*)result = v52;
      if ((v75 & 1) == 0) {
        goto LABEL_15;
      }
    }
  LABEL_92:
    if (v77 != nullptr) {
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
    }
  LABEL_15:
    v6 = *(_QWORD*)(v3 + 2872);
    v13 = v6 + 88 * v12;
    v14 = *(unsigned __int8*)(v13 + 32);
    v15 = (v14 & 1) != 0 ? *(_QWORD*)(v13 + 40) : v14 >> 1;
    if (v15 != 0) {
      break;
    }
    v7 = *(_QWORD*)(v3 + 2880);
  LABEL_20:
    if (++v12 >= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((v7 - v6) >> 3))) {
      return result;
    }
  }
  v58 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v58[2] = 0;
  v58[8] = 0;
  *v58 = GameData_1fbf780;
  v58[1] = 0;
  v59 = *(_QWORD*)(v13 + 16);
  *(_QWORD*)(v13 + 8) = v58 + 4;
  *(_QWORD*)(v13 + 16) = v58;
  if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak(v59);
  }
  v60 = *(_QWORD*)(v13 + 8);
  v75 = (__int64)GameData_211d8c8;
  v76 = v6 + 88 * v12;
  v78 = &v75;
  GameRoutine_a934d0(&v75, v60);
  if (v78 == &v75) {
    v61 = 32;
  LABEL_109:
    (*(void (**)(void*))(*v78 + v61))(v78);
  }
  else if (v78 != nullptr) {
    v61 = 40;
    goto LABEL_109;
  }
  v62 = *(_QWORD*)(*(_QWORD*)(v69 + 8) + 13432LL);
  v63 = *(unsigned __int8*)(v13 + 32);
  v64 = (v63 & 1) == 0;
  v65 = v63 >> 1;
  if (v64) {
    v66 = v65;
  }
  else {
    v66 = *(_QWORD*)(v13 + 40);
  }
  if (v64) {
    v67 = v13 + 33;
  }
  else {
    v67 = *(_QWORD*)(v13 + 48);
  }
  v70 = *(_QWORD*)(v13 + 8);
  v68 = *(_QWORD*)(v13 + 16);
  v71 = v68;
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)v13 =
      (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64*))(
          *(_QWORD*)v62 + 40LL))(v62, v67, v66, &v70);
  result = v71;
  if (v71 != 0) {
    result = std___1___shared_weak_count___release_weak(v71);
  }
  ++*(_DWORD*)(v13 + 80);
  return result;
}

__int64 PrimitiveDrawManager_19931a0(__int64 result, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64* v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  int v10;
  bool v11;
  __int64 v12;
  _BYTE* v13;

  v3 = *(__int64**)(*(_QWORD*)result + 248632LL);
  v4 = *(__int64**)(*(_QWORD*)result + 248640LL);
  if (v3 != v4) {
    while (1) {
      v7 = *((unsigned __int8*)v3 + 32);
      v8 = v3[5];
      if ((v7 & 1) == 0) {
        v8 = v7 >> 1;
      }
      if (a3 == v8) {
        v9 = (v7 & 1) != 0 ? (__int64*)v3[6] : (__int64*)((char*)v3 + 33);
        result = memcmp(a2, v9, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v3 += 11;
      if (v3 == v4) {
        return result;
      }
    }
  }
  if (v3 != v4) {
    v10 = *((_DWORD*)v3 + 20);
    v11 = __OFSUB__(v10--, 1);
    *((_DWORD*)v3 + 20) = v10;
    if ((v10 < 0) ^ v11 | (v10 == 0)) {
      v12 = *v3;
      v3[3] = 0;
      if (v12 != 0) {
        result = GameRoutine_634d80(*(_QWORD*)(v12 + 8));
        *v3 = 0;
      }
      if ((v3[4] & 1) != 0) {
        v13 = (_BYTE*)v3[6];
        v3[5] = 0;
      }
      else {
        v13 = (char*)v3 + 33;
        *((_BYTE*)v3 + 32) = 0;
      }
      *v13 = 0;
      *((_DWORD*)v3 + 20) = 0;
    }
  }
  return result;
}

_QWORD* PrimitiveDrawManager_19932a0(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  char v21;
  unsigned int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* result;
  _QWORD* v27;
  char v28;
  unsigned int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33[2];
  struct {
    __int64 v34;
    int v35;
  } v34_;

  v5 = a1 + 245760;
  v33[0] = a2;
  v33[1] = a3;
  v8 = *(_QWORD**)(a1 + 248736);
  v9 = *(_QWORD**)(a1 + 248744);
  if (v8 == v9) {
    goto LABEL_35;
  }
  v10 = v8 + 2;
  v13 = 0;
  do {
    v15 = v10 - 2;
    v14 = *((unsigned __int8*)v10 - 16);
    v16 = *(v10 - 1);
    if ((v14 & 1) == 0) {
      v16 = v14 >> 1;
    }
    if (a3 == v16) {
      v17 = (v14 & 1) != 0 ? *v10 : (__int64)v10 - 15;
      if (memcmp_alt1(a2, v17, a3) == 0) {
        ++v13;
      }
    }
    v10 += 5;
  } while (v15 + 5 != v9);
  if (v13 != 0) {
    v18 = v9 - 5;
    v19 = v9;
    v20 = v9;
    while (1) {
      v22 = *((unsigned __int8*)v20 - 40);
      v20 -= 5;
      v21 = v22;
      v23 = v20[1];
      v24 = (unsigned __int64)v22 >> 1;
      if ((v22 & 1) == 0) {
        v23 = v24;
      }
      if (a3 == v23) {
        v25 = (v21 & 1) != 0 ? *(v19 - 3) : (__int64)v19 - 39;
        result = (_QWORD*)memcmp_alt1(a2, v25, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v18 -= 5;
      v19 = v20;
      if (v20 == v8) {
        goto LABEL_35;
      }
    }
  }
  else {
    v18 = v9 - 5;
    v19 = v9;
    v27 = v9;
    while (1) {
      v29 = *((unsigned __int8*)v27 - 40);
      v27 -= 5;
      v28 = v29;
      v30 = v27[1];
      v31 = (unsigned __int64)v29 >> 1;
      if ((v29 & 1) == 0) {
        v30 = v31;
      }
      if (a3 == v30) {
        v32 = (v28 & 1) != 0 ? *(v19 - 3) : (__int64)v19 - 39;
        result = (_QWORD*)memcmp_alt1(a2, v32, a3);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v18 -= 5;
      v19 = v27;
      if (v27 == v8) {
        goto LABEL_35;
      }
    }
  }
  if (v19 == v8 || v9 == v18) {
  LABEL_35:
    v34_.v34 = 0;
    v34_.v35 = -1;
    result = GameHr_1999040((__int64*)(v5 + 2976), v33, &v34_.v34);
    v18 = result;
  }
  v18[3] = a4;
  *((_DWORD*)v18 + 8) = a5;
  return result;
}

_QWORD* PrimitiveDrawManager_19935e0(_QWORD* a1, __int64 a2, __int64 a3,
                                     unsigned int a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
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

  if (a4 <= 0x1F) {
    v5 = a1[2171];
    v6 = a1[2172];
    if (v5 != v6) {
      while (*(_DWORD*)v5 != a4) {
        v5 += 40;
        if (v5 == v6) {
          goto LABEL_9;
        }
      }
    }
    if (v5 == v6) {
    LABEL_9:
      if (a3 != 0) {
        v8 = GameRoutine_19994c0(a1);
        v9 = a1[2172];
        v10 = a1[2173];
        v11 = v8;
        if (v9 >= v10) {
          v12 = a1[2171];
          v13 = v9 - v12;
          v14 = 1 - 0x3333333333333333LL * ((__int64)(v9 - v12) >> 3);
          if (v14 > 0x666666666666666LL) {
            GameRoutine_1995730();
          }
          v15 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v10 - v12) >> 3);
          if (2 * v15 > v14) {
            v14 = 2 * v15;
          }
          if (v15 >= 0x333333333333333LL) {
            v16 = 0x666666666666666LL;
          }
          else {
            v16 = v14;
          }
          if (v16 > 0x666666666666666LL) {
            GameRoutine_60a210(v8);
          }
          v17 = 5 * v16;
          v18 = fw_memory_g_heap_manager_ptr;
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v16, 16, 0);
          v20 = v19 + v13;
          v21 = v19;
          *(_DWORD*)v20 = a4;
          v22 = v19 + 8 * v17;
          *(_QWORD*)(v20 + 32) = v11;
          v23 = v19 + v13 + 40;
          *(_QWORD*)(v20 + 8) = 0;
          if (v12 != v9) {
            v24 = v12;
            v25 = v19;
            do {
              *(_DWORD*)v25 = *(_DWORD*)v24;
              v26 = *(_QWORD*)(v24 + 8);
              v27 = *(_QWORD*)(v24 + 24);
              *(_QWORD*)(v25 + 16) = *(_QWORD*)(v24 + 16);
              *(_QWORD*)(v25 + 24) = v27;
              *(_QWORD*)(v25 + 8) = v26;
              *(_QWORD*)(v24 + 16) = 0;
              *(_QWORD*)(v24 + 24) = 0;
              *(_QWORD*)(v24 + 8) = 0;
              v28 = *(_QWORD*)(v24 + 32);
              v24 += 40;
              *(_QWORD*)(v25 + 32) = v28;
              v25 += 40;
            } while (v24 != v9);
            do {
              if ((*(_BYTE*)(v12 + 8) & 1) != 0 && *(_QWORD*)(v12 + 24) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                  v29 = 128;
                }
                else {
                  v29 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v29);
              }
              v12 += 40;
            } while (v12 != v9);
            v12 = a1[2171];
          }
          a1[2171] = v21;
          a1[2172] = v23;
          a1[2173] = v22;
          if (v12 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v30);
          }
          a1[2172] = v23;
        }
        else {
          *(_DWORD*)v9 = a4;
          *(_QWORD*)(v9 + 8) = 0;
          *(_QWORD*)(v9 + 32) = v8;
          a1[2172] = v9 + 40;
        }
      }
    }
    else if (a3 != 0) {
      *(_QWORD*)(v5 + 32) = GameRoutine_19994c0(a1);
    }
    else {
      *(_QWORD*)(v5 + 32) = -1;
    }
  }
  return a1;
}

__int64 PrimitiveDrawManager_1994180(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
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

  v1 = *(_QWORD*)(result + 19112);
  v2 = result + 0x4000;
  v3 = (_QWORD*)result;
  v4 = *(_DWORD*)(v1 - 4);
  *(_QWORD*)(result + 19112) = v1 - 4;
  v5 = *(_QWORD*)(result + 18736);
  *(_DWORD*)(result + 17280) = v4;
  v6 = v5 + 1440LL * v4;
  *(_QWORD*)(result + 17296) = *(_QWORD*)v6;
  v7 = *(_QWORD*)(v6 + 8);
  v8 = *(_QWORD*)(v6 + 16);
  v9 = *(_QWORD*)(v6 + 24);
  *(_QWORD*)(result + 17328) = *(_QWORD*)(v6 + 32);
  *(_QWORD*)(result + 17312) = v8;
  *(_QWORD*)(result + 17320) = v9;
  *(_QWORD*)(result + 17304) = v7;
  v10 = *(_QWORD*)(v6 + 56);
  LODWORD(v8) = *(_DWORD*)(v6 + 64);
  v11 = *(_QWORD*)(v6 + 40);
  *(_QWORD*)(result + 17344) = *(_QWORD*)(v6 + 48);
  *(_DWORD*)(result + 17360) = v8;
  *(_QWORD*)(result + 17352) = v10;
  *(_QWORD*)(result + 17336) = v11;
  if (result + 17296 == v6) {
    v23 = *(_QWORD*)(v6 + 216);
    *(_QWORD*)(result + 17496) = *(_QWORD*)(v6 + 200);
    *(_QWORD*)(result + 17512) = v23;
    v24 = *(_QWORD*)(v6 + 184);
    *(_QWORD*)(result + 17464) = *(_QWORD*)(v6 + 168);
    *(_QWORD*)(result + 17480) = v24;
    v25 = *(_QWORD*)(v6 + 152);
    *(_QWORD*)(result + 17432) = *(_QWORD*)(v6 + 136);
    *(_QWORD*)(result + 17448) = v25;
    v26 = *(_QWORD*)(v6 + 120);
    *(_QWORD*)(result + 17400) = *(_QWORD*)(v6 + 104);
    *(_QWORD*)(result + 17416) = v26;
    v27 = *(_QWORD*)(v6 + 96);
    *(_QWORD*)(result + 17408) = *(_QWORD*)(v6 + 112);
    *(_QWORD*)(result + 17392) = v27;
    v28 = *(_QWORD*)(v6 + 128);
    *(_QWORD*)(result + 17440) = *(_QWORD*)(v6 + 144);
    *(_QWORD*)(result + 17424) = v28;
    v29 = *(_QWORD*)(v6 + 160);
    *(_QWORD*)(result + 17472) = *(_QWORD*)(v6 + 176);
    *(_QWORD*)(result + 17456) = v29;
    v30 = *(_QWORD*)(v6 + 192);
    *(_QWORD*)(result + 17504) = *(_QWORD*)(v6 + 208);
    *(_QWORD*)(result + 17488) = v30;
  }
  else {
    GameRoutine_1999780(result + 17368);
    v12 = *(_QWORD*)(v6 + 216);
    v13 = *(_BYTE*)(v2 + 1136);
    result = v2 + 1136;
    v3[2187] = *(_QWORD*)(v6 + 200);
    v3[2189] = v12;
    v14 = *(_QWORD*)(v6 + 184);
    v3[2183] = *(_QWORD*)(v6 + 168);
    v3[2185] = v14;
    v15 = *(_QWORD*)(v6 + 152);
    v3[2179] = *(_QWORD*)(v6 + 136);
    v3[2181] = v15;
    v16 = *(_QWORD*)(v6 + 120);
    v3[2175] = *(_QWORD*)(v6 + 104);
    v3[2177] = v16;
    v17 = *(_QWORD*)(v6 + 96);
    v3[2176] = *(_QWORD*)(v6 + 112);
    v3[2174] = v17;
    v18 = *(_QWORD*)(v6 + 128);
    v3[2180] = *(_QWORD*)(v6 + 144);
    v3[2178] = v18;
    v19 = *(_QWORD*)(v6 + 160);
    v3[2184] = *(_QWORD*)(v6 + 176);
    v3[2182] = v19;
    v20 = *(_QWORD*)(v6 + 192);
    v3[2188] = *(_QWORD*)(v6 + 208);
    v3[2186] = v20;
    v21 = *(unsigned __int8*)(v6 + 224);
    if ((v13 & 1) != 0) {
      v31 = (v21 & 1) == 0;
      v32 = v21 >> 1;
      if (v31) {
        v33 = v6 + 225;
      }
      else {
        v33 = *(_QWORD*)(v6 + 240);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *(_QWORD*)(v6 + 232);
      }
      result = SpineModel_64dde0(result, v33, v34);
    }
    else if ((v21 & 1) != 0) {
      result = GameRoutine_64df20(result, *(_QWORD*)(v6 + 240),
                                  *(_QWORD*)(v6 + 232));
    }
    else {
      *(_QWORD*)(v2 + 1144) = *(_QWORD*)(v6 + 232);
      v22 = *(_QWORD*)(v6 + 224);
      *(_QWORD*)(v2 + 1152) = *(_QWORD*)(v6 + 240);
      *(_QWORD*)result = v22;
    }
  }
  v35 = v3[2342] + 1440LL * *(int*)(v2 + 896);
  v36 = *(_QWORD*)(v35 + 1320);
  v3[2325] = *(_QWORD*)(v35 + 1304);
  v3[2327] = v36;
  v37 = *(_QWORD*)(v35 + 1296);
  v3[2326] = *(_QWORD*)(v35 + 1312);
  v3[2324] = v37;
  v38 = *(_QWORD*)(v35 + 1336);
  v39 = *(_QWORD*)(v35 + 1352);
  v40 = *(_QWORD*)(v35 + 1328);
  v3[2330] = *(_QWORD*)(v35 + 1344);
  v3[2328] = v40;
  v3[2331] = v39;
  v3[2329] = v38;
  v41 = *(_QWORD*)(v35 + 1416);
  v3[2337] = *(_QWORD*)(v35 + 1400);
  v3[2339] = v41;
  v42 = *(_QWORD*)(v35 + 1384);
  v3[2333] = *(_QWORD*)(v35 + 1368);
  v3[2335] = v42;
  v43 = *(_QWORD*)(v35 + 1376);
  v3[2332] = *(_QWORD*)(v35 + 1360);
  v3[2334] = v43;
  v44 = *(_QWORD*)(v35 + 1408);
  v3[2336] = *(_QWORD*)(v35 + 1392);
  v3[2338] = v44;
  *(_BYTE*)(v2 + 2196) = *(_BYTE*)(v35 + 1284);
  *(_DWORD*)(v35 + 4LL * *(int*)(v35 + 256) + 772) = *(_DWORD*)(v2 + 2816) + 1;
  return result;
}

__int64 PrimitiveDrawManager_1995020(__int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  int* v13;
  int* v14;
  _DWORD* v15;
  _DWORD* v16;
  int v17;
  __int64 v18;

  v3 = *(_DWORD**)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v5 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64)v3 - *(_QWORD*)result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_19953a0();
    }
    v9 = v2 - *(_QWORD*)result;
    v10 = v9 >> 1;
    if (v9 >> 1 <= v8) {
      v10 = (v7 >> 2) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 62 != 0) {
      GameRoutine_60a210(result);
    }
    result = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(result + 24) + 16LL))(*(_QWORD*)(result + 24), 4 * v11, 4);
    v12 = (_DWORD*)(result + v7);
    *v12 = *a2;
    v6 = result + v7 + 4;
    v13 = *(int**)v5;
    v14 = *(int**)(v5 + 8);
    v15 = (_DWORD*)((char*)v12 + *(_QWORD*)v5 - (_QWORD)v14);
    if (*(int**)v5 != v14) {
      v16 = v15;
      do {
        v17 = *v13++;
        *v16++ = v17;
      } while (v13 != v14);
      v13 = *(int**)v5;
    }
    *(_QWORD*)v5 = v15;
    *(_QWORD*)(v5 + 8) = v6;
    v18 = *(_QWORD*)(v5 + 16);
    *(_QWORD*)(v5 + 16) = result + 4 * v11;
    if (v13 != nullptr) {
      result = (*(__int64 (**)(_QWORD, int*, __int64, __int64))(
          **(_QWORD**)(v5 + 24) + 24LL))(*(_QWORD*)(v5 + 24), v13,
                                         v18 - (_QWORD)v13, 4);
    }
  }
  else {
    *v3 = *a2;
    v6 = (__int64)(v3 + 1);
  }
  *(_QWORD*)(v5 + 8) = v6;
  return result;
}

void PrimitiveDrawManager_1995180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
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

  if (a1 != a2) {
    v5 = a1;
    v6 = a1;
    do {
      v7 = *(_QWORD*)(v6 + 56);
      v8 = *(_DWORD*)(v6 + 64);
      *(_QWORD*)(a3 + 40) = *(_QWORD*)(v6 + 40);
      *(_QWORD*)(a3 + 56) = v7;
      v9 = *(_QWORD*)(v6 + 24);
      *(_QWORD*)(a3 + 8) = *(_QWORD*)(v6 + 8);
      *(_QWORD*)(a3 + 24) = v9;
      *(_QWORD*)a3 = *(_QWORD*)v6;
      v10 = *(_QWORD*)(v6 + 16);
      *(_QWORD*)(a3 + 32) = *(_QWORD*)(v6 + 32);
      *(_QWORD*)(a3 + 16) = v10;
      v11 = *(_QWORD*)(v6 + 48);
      *(_DWORD*)(a3 + 64) = v8;
      *(_QWORD*)(a3 + 72) = 0;
      *(_QWORD*)(a3 + 80) = 0;
      *(_QWORD*)(a3 + 88) = 0;
      *(_QWORD*)(a3 + 48) = v11;
      *(_QWORD*)(a3 + 72) = *(_QWORD*)(v6 + 72);
      *(_QWORD*)(a3 + 80) = *(_QWORD*)(v6 + 80);
      *(_QWORD*)(a3 + 88) = *(_QWORD*)(v6 + 88);
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      v13 = *(_QWORD*)(v6 + 96);
      v12 = *(_QWORD*)(v6 + 104);
      v14 = *(_QWORD*)(v6 + 120);
      *(_QWORD*)(a3 + 112) = *(_QWORD*)(v6 + 112);
      *(_QWORD*)(a3 + 120) = v14;
      *(_QWORD*)(a3 + 96) = v13;
      *(_QWORD*)(a3 + 104) = v12;
      v15 = *(_QWORD*)(v6 + 152);
      v17 = *(_QWORD*)(v6 + 128);
      v16 = *(_QWORD*)(v6 + 136);
      *(_QWORD*)(a3 + 144) = *(_QWORD*)(v6 + 144);
      *(_QWORD*)(a3 + 152) = v15;
      *(_QWORD*)(a3 + 128) = v17;
      *(_QWORD*)(a3 + 136) = v16;
      v18 = *(_QWORD*)(v6 + 184);
      v20 = *(_QWORD*)(v6 + 160);
      v19 = *(_QWORD*)(v6 + 168);
      *(_QWORD*)(a3 + 176) = *(_QWORD*)(v6 + 176);
      *(_QWORD*)(a3 + 184) = v18;
      *(_QWORD*)(a3 + 160) = v20;
      *(_QWORD*)(a3 + 168) = v19;
      v21 = *(_QWORD*)(v6 + 216);
      v23 = *(_QWORD*)(v6 + 192);
      v22 = *(_QWORD*)(v6 + 200);
      *(_QWORD*)(a3 + 208) = *(_QWORD*)(v6 + 208);
      *(_QWORD*)(a3 + 216) = v21;
      *(_QWORD*)(a3 + 192) = v23;
      *(_QWORD*)(a3 + 200) = v22;
      *(_QWORD*)(a3 + 232) = *(_QWORD*)(v6 + 232);
      v24 = *(_QWORD*)(v6 + 224);
      *(_QWORD*)(a3 + 240) = *(_QWORD*)(v6 + 240);
      *(_QWORD*)(a3 + 224) = v24;
      *(_QWORD*)(v6 + 224) = 0;
      *(_QWORD*)(v6 + 232) = 0;
      *(_QWORD*)(v6 + 240) = 0;
      memcpy_alt1(a3 + 256, v6 + 256, 0x49Bu);
      v6 += 1440;
      a3 += 1440;
    } while (v6 != a2);
    v25 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(v5 + 224) & 1) != 0) {
        v29 = *(_QWORD*)(v5 + 240);
        if (v29 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
            v30 = 128;
          }
          else {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v30, v29);
        }
      }
      v27 = *(_QWORD*)(v5 + 72);
      if (v27 != 0) {
        v31 = *(_QWORD*)(v5 + 80);
        if (v27 == v31) {
          goto LABEL_6;
        }
        do {
          if ((*(_BYTE*)(v31 - 32) & 1) != 0) {
            v32 = *(_QWORD*)(v31 - 16);
            if (v32 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                v33 = 128;
              }
              else {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v33, v32);
            }
          }
          v31 -= 40;
        } while (v31 != v27);
        v26 = *(_QWORD*)(v5 + 72);
        *(_QWORD*)(v5 + 80) = v27;
        v27 = v26;
        if (v26 != 0) {
        LABEL_6:
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v25 + v28, v27);
        }
      }
      v5 += 1440;
    } while (v5 != a2);
  }
}

__int64 PrimitiveDrawManager_19953e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
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
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
  v3 = 0x4FA4FA4FA4FA4FA5LL * (v2 >> 5) + 1;
  if (v3 > 0x2D82D82D82D82DLL) {
    GameRoutine_1995160();
  }
  if (0x9F49F49F49F49F4ALL *
          ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 5) >
      v3) {
    v3 = 0x9F49F49F49F49F4ALL *
         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 5);
  }
  if ((unsigned __int64)(0x4FA4FA4FA4FA4FA5LL *
                         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >>
                          5)) >= 0x16C16C16C16C16LL) {
    v6 = 0x2D82D82D82D82DLL;
  }
  else {
    v6 = v3;
  }
  if (v6 != 0) {
    if (v6 > 0x2D82D82D82D82DLL) {
      GameRoutine_60a210(a1);
    }
    v7 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(a1 + 24) + 16LL))(*(_QWORD*)(a1 + 24), 1440 * v6, 16);
  }
  else {
    v7 = 0;
  }
  v8 = *(_QWORD*)(a2 + 56);
  v9 = v7 + v2;
  v10 = *(_DWORD*)(a2 + 64);
  *(_QWORD*)(v9 + 40) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v9 + 56) = v8;
  v11 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(v9 + 8) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(v9 + 24) = v11;
  *(_QWORD*)v9 = *(_QWORD*)a2;
  v12 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v9 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v9 + 16) = v12;
  v13 = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v9 + 64) = v10;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 48) = v13;
  *(_QWORD*)(v9 + 72) = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(v9 + 80) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v9 + 88) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(a2 + 80) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 72) = 0;
  v15 = *(_QWORD*)(a2 + 96);
  v14 = *(_QWORD*)(a2 + 104);
  v16 = *(_QWORD*)(a2 + 120);
  *(_QWORD*)(v9 + 112) = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(v9 + 120) = v16;
  *(_QWORD*)(v9 + 96) = v15;
  *(_QWORD*)(v9 + 104) = v14;
  v17 = *(_QWORD*)(a2 + 152);
  v19 = *(_QWORD*)(a2 + 128);
  v18 = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(v9 + 144) = *(_QWORD*)(a2 + 144);
  *(_QWORD*)(v9 + 152) = v17;
  *(_QWORD*)(v9 + 128) = v19;
  *(_QWORD*)(v9 + 136) = v18;
  v20 = *(_QWORD*)(a2 + 184);
  v22 = *(_QWORD*)(a2 + 160);
  v21 = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v9 + 176) = *(_QWORD*)(a2 + 176);
  *(_QWORD*)(v9 + 184) = v20;
  *(_QWORD*)(v9 + 160) = v22;
  *(_QWORD*)(v9 + 168) = v21;
  v23 = *(_QWORD*)(a2 + 216);
  v25 = *(_QWORD*)(a2 + 192);
  v24 = *(_QWORD*)(a2 + 200);
  *(_QWORD*)(v9 + 208) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v9 + 216) = v23;
  *(_QWORD*)(v9 + 192) = v25;
  *(_QWORD*)(v9 + 200) = v24;
  *(_QWORD*)(v9 + 232) = *(_QWORD*)(a2 + 232);
  v26 = *(_QWORD*)(a2 + 224);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(a2 + 240);
  *(_QWORD*)(v9 + 224) = v26;
  *(_QWORD*)(a2 + 224) = 0;
  *(_QWORD*)(a2 + 232) = 0;
  *(_QWORD*)(a2 + 240) = 0;
  v27 = v7 + 1440 * v6;
  memcpy(v9 + 256, a2 + 256, 1179);
  v28 = *(_QWORD*)(a1 + 8);
  v29 = v9 + *(_QWORD*)a1 - v28;
  PrimitiveDrawManager_1995180_alt1(*(_QWORD*)a1, v28, v29);
  v30 = *(_QWORD*)a1;
  v31 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = v29;
  *(_QWORD*)(a1 + 8) = v9 + 1440;
  *(_QWORD*)(a1 + 16) = v27;
  if (v30 != 0) {
    (*(void (**)(_QWORD, __int64, __int64, __int64))(
        **(_QWORD**)(a1 + 24) + 24LL))(*(_QWORD*)(a1 + 24), v30, v31 - v30, 16);
  }
  return v9 + 1440;
}

__int64 gfxa_PrimitiveDrawManager_Impl_initializeGfxObjects_closure_Invoke(
    __int64 result, __int64 a2)
{
  int v2;
  __int16 v3;
  unsigned int v4;
  unsigned int v5;

  v2 = *(_DWORD*)(result + 8);
  if (v2 != 0) {
    if (v2 != 1) {
      goto LABEL_6;
    }
    v3 = 21;
  }
  else {
    v3 = 42;
  }
  *(_WORD*)(a2 + 6) = v3;
LABEL_6:
  v4 = *(_DWORD*)(result + 12);
  if (v4 <= 2) {
    v5 = 0x10200u >> (8 * v4);
    *(_BYTE*)a2 = v5;
    *(_BYTE*)(a2 + 1) = v5;
    *(_BYTE*)(a2 + 2) = v5;
  }
  return result;
}

void PrimitiveDrawManager_1996450(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3;
  _QWORD* v5;
  int* v6;
  int* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _DWORD* v12;
  int* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  char** v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int* v34;
  _QWORD* v35;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;
  struct {
    _QWORD v40[4];
    _QWORD* v41;
  } v40_;

  v5 = (_QWORD*)a1;
  PrimitiveDrawManager_1996700(a1);
  v6 = (int*)v5[2346];
  v7 = (int*)v5[2347];
  if (v6 != v7) {
    v8 = v5 + 30720;
    v9 = a3;
    v34 = (int*)v5[2347];
    v35 = v5;
    v33 = a3;
    v32 = a3;
    do {
      v11 = *v6;
      v3 = v3 & 0xFFFFFFFF00000000LL | v9;
      v12 = (_DWORD*)(v5[2342] + 1440LL * *v6);
      if (v12[356] == 0 || v12[27] != a3) {
        goto LABEL_5;
      }
      v13 = (int*)v8[364];
      v14 = v8[365];
      if ((unsigned __int64)v13 >= v14) {
        v16 = v8[363];
        v17 = v8;
        v18 = (char*)v13 - v16;
        v19 = ((__int64)v13 - v16) >> 2;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 62 != 0) {
          GameRoutine_19953c0_alt1();
        }
        v21 = v14 - v16;
        if (v21 >> 1 > v20) {
          v20 = v21 >> 1;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL) {
          v22 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 62 != 0) {
            GameRoutine_60a210_alt1();
          }
          v23 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 4 * v22;
        v25 = (unsigned __int64)v13 - v16;
        v26 = (__int64)&v18[v23 + -4 * v19];
        *(_DWORD*)&v18[v23] = v11;
        v15 = (__int64)&v18[v23 + 4];
        memcpy_alt1(v26, v16, v25);
        v17[363] = v26;
        v8 = v17;
        v17[364] = v15;
        v17[365] = v24;
        if (v16 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v16);
        }
        a3 = v33;
        v7 = v34;
        v5 = v35;
        v9 = v32;
      }
      else {
        *v13 = v11;
        v15 = (__int64)(v13 + 1);
      }
      v8[364] = v15;
      v28 = v12[8];
      v36_.v36[0] = GameData_211d848;
      v36_.v36[1] = v5;
      v36_.v36[2] = v3;
      v36_.v37 = v36_.v36;
      v40_.v41 = v40_.v40;
      v38_.v39 = v38_.v38;
      v29 = *(char***)(*game_g_frame_clock_ptr[0] + 16664);
      v40_.v40[0] = GameData_2109ae8;
      v38_.v38[0] = GameData_2109b78;
      GameRoutine_beefc0_alt1(v29, (__int64)v36_.v36, (__int64)v40_.v40,
                              (__int64)v38_.v38, 0, v28, v15 - 4);
      if (v38_.v39 == v38_.v38) {
        v30 = 32;
      }
      else {
        if (v38_.v39 == nullptr) {
          goto LABEL_30;
        }
        v30 = 40;
      }
      (*(void (**)(__int64))(*v38_.v39 + v30))((__int64)v38_.v39);
    LABEL_30:
      if (v40_.v41 == v40_.v40) {
        v31 = 32;
      }
      else {
        if (v40_.v41 == nullptr) {
          goto LABEL_35;
        }
        v31 = 40;
      }
      (*(void (**)(__int64))(*v40_.v41 + v31))((__int64)v40_.v41);
    LABEL_35:
      if (v36_.v37 == v36_.v36) {
        v10 = 32;
      }
      else {
        if (v36_.v37 == nullptr) {
          goto LABEL_5;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v36_.v37 + v10))((__int64)v36_.v37);
    LABEL_5:
      ++v6;
    } while (v6 != v7);
  }
}

void PrimitiveDrawManager_1996700(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  char* v21;
  _DWORD* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  bool v37;
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
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int* v55;
  int* v56;
  unsigned __int64 v57;
  __int64 v58;
  int* v59;
  signed __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  v1 = *(_QWORD*)(a1 + 18736);
  v2 = *(_QWORD*)(a1 + 18744);
  if (v1 == v2) {
    return;
  }
  v4 = a1 + 0x4000;
  v5 = *(_QWORD*)(a1 + 18736);
  while ((*(_BYTE*)(v5 + 1434) & 1) != 0) {
    v5 += 1440;
    if (v5 == v2) {
      return;
    }
  }
  v6 = v2 - v1;
  v7 = *(_QWORD*)(a1 + 18776);
  v8 = *(_QWORD*)(a1 + 18768);
  v9 = 0x4FA4FA4FA4FA4FA5LL * (v6 >> 5);
  v10 = v7 - v8;
  v11 = (v7 - v8) >> 2;
  v12 = v9 - v11;
  if (v9 <= v11) {
    if (v9 < v11) {
      *(_QWORD*)(a1 + 18776) = v8 + 4 * v9;
    }
    if ((int)v9 < 1) {
      goto LABEL_57;
    }
    goto LABEL_24;
  }
  v13 = *(_QWORD*)(a1 + 18784);
  if (v12 <= (v13 - v7) >> 2) {
    memset_alt1(*(_QWORD*)(a1 + 18776), 0, 4 * v12);
    *(_QWORD*)(a1 + 18776) = v7 + 4 * v12;
  }
  else {
    if (v9 >> 62 != 0) {
      GameRoutine_19953a0_alt1();
    }
    v14 = v13 - v8;
    if (v14 >> 1 > v9) {
      v9 = v14 >> 1;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFFCLL) {
      v15 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v9;
    }
    if (v15 >> 62 != 0) {
      GameRoutine_60a210_alt1();
    }
    v16 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)(a1 + 18792) + 16LL))(*(_QWORD*)(a1 + 18792), 4 * v15, 4);
    v17 = v16 + v10;
    v18 = v16 + 4 * v15;
    memset_alt1(v17, 0, 4 * v12);
    v19 = *(char**)(a1 + 18776);
    v20 = *(char**)(a1 + 18768);
    v21 = (char*)(v17 + v20 - v19);
    if (v20 != v19) {
      v22 = (_DWORD*)(v17 + v20 - v19);
      do {
        v23 = *(_DWORD*)v20;
        v20 += 4;
        *v22++ = v23;
      } while (v20 != v19);
      v20 = *(char**)(a1 + 18768);
    }
    *(_QWORD*)(a1 + 18776) = v17 + 4 * v12;
    v24 = *(_QWORD*)(a1 + 18784);
    *(_QWORD*)(a1 + 18768) = v21;
    *(_QWORD*)(a1 + 18784) = v18;
    if (v20 != nullptr) {
      (*(void (**)(_QWORD, char*, __int64, __int64))(
          **(_QWORD**)(a1 + 18792) + 24LL))(*(_QWORD*)(a1 + 18792), v20,
                                            v24 - (_QWORD)v20, 4);
    }
  }
  if ((int)(-1527099483 *
            ((__int64)(*(_QWORD*)(a1 + 18744) - *(_QWORD*)(a1 + 18736)) >>
             5)) >= 1) {
  LABEL_24:
    v25 = 0;
    v26 = 0;
    v27 = 0;
    while (1) {
      *(_DWORD*)(*(_QWORD*)(a1 + 18768) + 4 * v25) = v25;
      v30 = *(_QWORD*)(a1 + 18736);
      v31 = v30 + 1440 * v25;
      if ((*(_BYTE*)(v31 + 1434) & 1) == 0) {
        v32 = *(_DWORD*)(v31 + 256);
        *(_DWORD*)(v31 + 1428) = v27;
        if ((v32 & 0x80000000) == 0) {
          v33 = v31 + 260;
          v34 = v31 + 772;
          v35 = 0;
          v28 = 0;
          while (1) {
            v38 = *(_DWORD*)(v33 + 4 * v35);
            v39 = *(_DWORD*)(v31 + 12);
            if (v39 == 1) {
              v44 = v38 + 3;
              if (v38 >= 0) {
                v44 = *(_DWORD*)(v33 + 4 * v35);
              }
              if (v38 < 4) {
                goto LABEL_33;
              }
              v45 = *(_DWORD*)(v31 + 1424);
              v46 = v44 >> 2;
              if ((v38 & 0x7FFFFFFC) == 4) {
                v47 = 0;
                if ((v46 & 1) == 0) {
                  goto LABEL_33;
                }
              }
              else {
                v51 = v46 & 0x1FFFFFFE;
                v52 = 7;
                do {
                  v51 -= 2;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) + 4LL * (v45 + v27)) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 7;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 4) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 6;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 8) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 5;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 12) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 7;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 16) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 5;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 20) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 4;
                  v53 = *(_DWORD*)(v31 + 1424);
                  *(_DWORD*)(v31 + 1424) = v53 + 6;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) + 4LL * (v53 + v27 + 6)) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 3;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 4) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 2;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 8) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 1;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 12) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 3;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 16) =
                      v52 + *(_DWORD*)(v34 + 4 * v35) - 1;
                  v54 = v52 + *(_DWORD*)(v34 + 4 * v35);
                  v52 += 8;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                             4LL * (*(_DWORD*)(v31 + 1424) + v27) + 20) = v54;
                  v45 = *(_DWORD*)(v31 + 1424) + 6;
                  *(_DWORD*)(v31 + 1424) = v45;
                } while (v51 != 0);
                v47 = v52 - 7;
                if ((v46 & 1) == 0) {
                  goto LABEL_33;
                }
              }
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) + 4LL * (v45 + v27)) =
                  *(_DWORD*)(v34 + 4 * v35) + v47;
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                         4LL * (*(_DWORD*)(v31 + 1424) + v27) + 4) =
                  *(_DWORD*)(v34 + 4 * v35) + v47 + 1;
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                         4LL * (*(_DWORD*)(v31 + 1424) + v27) + 8) =
                  *(_DWORD*)(v34 + 4 * v35) + (v47 | 2);
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                         4LL * (*(_DWORD*)(v31 + 1424) + v27) + 12) =
                  *(_DWORD*)(v34 + 4 * v35) + v47;
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                         4LL * (*(_DWORD*)(v31 + 1424) + v27) + 16) =
                  *(_DWORD*)(v34 + 4 * v35) + (v47 | 2);
              *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                         4LL * (*(_DWORD*)(v31 + 1424) + v27) + 20) =
                  *(_DWORD*)(v34 + 4 * v35) + v47 + 3;
              v36 = 6;
            }
            else {
              if (v39 == 2) {
                if (v38 >= 5) {
                  v40 = *(_DWORD*)(v31 + 1424);
                  v41 = 0;
                  v42 = v38 / 5;
                  do {
                    --v42;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) + 4LL * (v40 + v27)) =
                        v41 + *(_DWORD*)(v34 + 4 * v35);
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 4) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 4;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 8) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 1;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 12) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 1;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 16) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 4;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 20) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 2;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 24) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 2;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 28) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 4;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 32) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 3;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 36) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 3;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 40) =
                        v41 + *(_DWORD*)(v34 + 4 * v35) + 4;
                    v43 = v41 + *(_DWORD*)(v34 + 4 * v35);
                    v41 += 5;
                    *(_DWORD*)(*(_QWORD*)(a1 + 19168) +
                               4LL * (*(_DWORD*)(v31 + 1424) + v27) + 44) = v43;
                    v40 = *(_DWORD*)(v31 + 1424) + 12;
                    *(_DWORD*)(v31 + 1424) = v40;
                  } while (v42 != 0);
                }
                goto LABEL_33;
              }
              if (v38 < 1) {
                v36 = *(_DWORD*)(v33 + 4 * v35);
              }
              else {
                v48 = 0;
                do {
                  v49 = v27 + v48 + *(_DWORD*)(v31 + 1424);
                  v50 = v48 + *(_DWORD*)(v34 + 4 * v35);
                  ++v48;
                  *(_DWORD*)(*(_QWORD*)(a1 + 19168) + 4LL * v49) = v50;
                  v36 = *(_DWORD*)(v33 + 4 * v35);
                } while (v48 < v36);
              }
            }
            *(_DWORD*)(v31 + 1424) += v36;
          LABEL_33:
            v28 += v38;
            v37 = v35++ < *(int*)(v31 + 256);
            if (!v37) {
              goto LABEL_26;
            }
          }
        }
        v28 = 0;
      LABEL_26:
        v26 += v28;
        v29 = *(_DWORD*)(v31 + 1424);
        *(_BYTE*)(v31 + 1434) = 1;
        v27 += v29;
        v30 = *(_QWORD*)(a1 + 18736);
      }
      if (++v25 >=
          (int)(-1527099483 *
                ((unsigned __int64)(*(_QWORD*)(a1 + 18744) - v30) >> 5))) {
        goto LABEL_58;
      }
    }
  }
LABEL_57:
  v27 = 0;
  v26 = 0;
LABEL_58:
  v55 = *(int**)(a1 + 18768);
  v56 = *(int**)(a1 + 18776);
  v75 = a1;
  if (v56 - v55 < 129) {
    v60 = 0;
  LABEL_64:
    PrimitiveDrawManager_1996fc0_alt1(v55, v56, (__int64)&v75, v56 - v55,
                                      nullptr, v60);
    if (v26 <= 0) {
      goto LABEL_68;
    }
  }
  else {
    v57 = v56 - v55;
    v58 = GameData_212c060;
    while (1) {
      v59 = (int*)GameRoutine_1a09d20_alt1(4 * v57, v58);
      if (v59 != nullptr) {
        break;
      }
      v60 = v57 >> 1;
      v37 = v57 > 1;
      v57 >>= 1;
      if (!v37) {
        goto LABEL_64;
      }
    }
    v73 = (__int64)v59;
    PrimitiveDrawManager_1996fc0_alt1(v55, v56, (__int64)&v75, v56 - v55, v59,
                                      v57);
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v73);
    if (v26 <= 0) {
      goto LABEL_68;
    }
  }
  v61 = a1 + 19208;
  v62 = *(_DWORD*)(v4 + 2840);
  v37 = v62 < -1;
  v63 = ((_BYTE)v62 + 1) & 1;
  if (v37) {
    v63 = -v63;
  }
  v64 = *(_QWORD*)(v61 + 8LL * v63);
  *(_DWORD*)(v4 + 2840) = v63;
  v65 = (*(__int64 (**)(__int64))(*(_QWORD*)v64 + 56LL))(v64);
  memcpy_alt1(v65, *(_QWORD*)(a1 + 19136), 40LL * (unsigned int)v26);
  v66 = *(_QWORD*)(v61 + 8LL * *(int*)(v4 + 2840));
  (*(void (**)(__int64))(*(_QWORD*)v66 + 64LL))(v66);
LABEL_68:
  if (v27 >= 1) {
    v67 = a1 + 19232;
    v68 = *(_DWORD*)(v4 + 2864);
    v37 = v68 < -1;
    v69 = ((_BYTE)v68 + 1) & 1;
    if (v37) {
      v69 = -v69;
    }
    v70 = *(_QWORD*)(v67 + 8LL * v69);
    *(_DWORD*)(v4 + 2864) = v69;
    v71 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 56LL))(v70);
    memcpy_alt1(v71, *(_QWORD*)(a1 + 19168), 4LL * (unsigned int)v27);
    v72 = *(_QWORD*)(v67 + 8LL * *(int*)(v4 + 2864));
    (*(void (**)(__int64))(*(_QWORD*)v72 + 64LL))(v72);
  }
}

_QWORD* PrimitiveDrawManager_1997990(__int64* a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  __int64* v4;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v3 = *a1;
  v4 = (__int64*)a1[1];
  v7 = a1;
  if ((__int64*)*a1 == v4 && 0xCCCCCCCCCCCCCCCDLL * ((a1[2] - v3) >> 3) <= 6) {
    v8 = fw_memory_g_heap_manager_ptr;
    a1 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
    *v7 = (__int64)a1;
    v7[1] = (__int64)a1;
    v7[2] = (__int64)(a1 + 35);
    if (v3 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v9 = 56;
      }
      a1 = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v9);
      v4 = (__int64*)v7[1];
    }
    else {
      v4 = a1;
    }
  }
  v10 = v7[2];
  if ((unsigned __int64)v4 >= v10) {
    v13 = *v7;
    v14 = (__int64)v4 - *v7;
    v15 = 1 - 0x3333333333333333LL * (v14 >> 3);
    if (v15 > 0x666666666666666LL) {
      GameRoutine_1997cf0(a1);
    }
    v16 = fw_memory_g_heap_manager_ptr;
    v17 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v10 - v13) >> 3);
    if (2 * v17 > v15) {
      v15 = 2 * v17;
    }
    if (v17 >= 0x333333333333333LL) {
      v18 = 0x666666666666666LL;
    }
    else {
      v18 = v15;
    }
    if (v18 != 0) {
      if (v18 > 0x666666666666666LL) {
        GameRoutine_60a210(a1);
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v18, 16, 0);
    }
    else {
      v19 = 0;
    }
    v22 = (_QWORD*)(v19 + v14);
    v23 = v19 + 40 * v18;
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(v19 + v14, a2[2], a2[1]);
      v13 = *v7;
      v14 = v7[1] - *v7;
    }
    else {
      v24 = a2[1];
      *v22 = *a2;
      v22[1] = v24;
      v22[2] = a2[2];
    }
    v25 = a3[1];
    v21 = v22 + 5;
    v22[3] = *a3;
    v22[4] = v25;
    memcpy((char*)v22 - v14, v13, v14);
    *v7 = (__int64)v22 - v14;
    v7[1] = (__int64)(v22 + 5);
    v7[2] = v23;
    if (v13 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v26);
    }
  }
  else {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(v4, a2[2], a2[1]);
    }
    else {
      v11 = *a2;
      v12 = a2[2];
      v4[1] = a2[1];
      v4[2] = v12;
      *v4 = v11;
    }
    v20 = a3[1];
    v21 = v4 + 5;
    v4[3] = *a3;
    v4[4] = v20;
  }
  v7[1] = (__int64)v21;
  return v21 - 5;
}

__int64 PrimitiveDrawManager_1997bc0(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = *a1;
  v2 = a1[1];
  v4 = v2;
  if (v2 != *a1) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = *(_QWORD*)(a2 + 8);
    }
    else {
      v6 = *(_BYTE*)a2 >> 1;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v13 = *(_QWORD*)(a2 + 16);
      v4 = a1[1];
      v14 = v4;
      while (1) {
        v16 = *(unsigned __int8*)(v14 - 40);
        v14 -= 40;
        v15 = v16;
        v17 = *(_QWORD*)(v14 + 8);
        v18 = (unsigned __int64)v16 >> 1;
        if ((v16 & 1) == 0) {
          v17 = v18;
        }
        if (v17 == v6) {
          v19 = (v15 & 1) != 0 ? *(_QWORD*)(v4 - 24) : v4 - 39;
          if ((unsigned int)memcmp(v19, v13, v6) == 0) {
            break;
          }
        }
        v4 = v14;
        if (v14 == v3) {
          return v2;
        }
      }
    }
    else {
      v4 = a1[1];
      v7 = v4;
      while (1) {
        v9 = *(unsigned __int8*)(v7 - 40);
        v7 -= 40;
        v8 = v9;
        v10 = *(_QWORD*)(v7 + 8);
        v11 = (unsigned __int64)v9 >> 1;
        if ((v9 & 1) == 0) {
          v10 = v11;
        }
        if (v10 == v6) {
          v12 = (v8 & 1) != 0 ? *(_QWORD*)(v4 - 24) : v4 - 39;
          if ((unsigned int)memcmp(v12, a2 + 1, v6) == 0) {
            break;
          }
        }
        v4 = v7;
        if (v7 == v3) {
          return v2;
        }
      }
    }
  }
  if (v4 != v3) {
    return v4 - 40;
  }
  return v2;
}

__int64 gfxa_PrimitiveDrawManager_Impl_draw2D_closure_Invoke(
    __int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4, __int64 a5, int** a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int* v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  void (**v28)(__int64, __int64, __int64, __int64, __int64);
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  long double v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
  unsigned int* v39;
  int* v40;
  int* v41;
  _UNKNOWN** v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  const char* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  int32x4_t* v72;
  int32x4_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v97;
  __int64 v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _BOOL8 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int8* v107;
  int v108;
  __int64 v109;
  _QWORD* v110;
  __int64 v111;
  int* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v99 = COERCE_AS(__typeof__(v99),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD*)(result + 8);
  v8 = result;
  v9 = *a6;
  v10 = *a2;
  v11 = *(_QWORD*)(v6 + 8);
  if (*a4 != *a3) {
    v12 = *(_QWORD*)(v6 + 248720);
    if (v12 != 0) {
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(v12, a2),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v11 = *(_QWORD*)(v6 + 8);
      v13 = *a2;
    }
    else {
      v13 = *a2;
    }
    v14 = *(_QWORD*)(v11 + 16672);
    v15 = v10;
    v16 = *(unsigned __int8*)(v11 + 16700);
    v17 = (unsigned int*)(v11 + 13304);
    v18 = (unsigned int*)(v14 + 24);
    if (v16 != 0) {
      v17 = v18;
    }
    v20 = *v17;
    v19 = v17[1];
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 72LL))(v13, 0, 0, *v17, v19),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v20, v19),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e890[0])(v15 + 8, v6 + 24),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_2132548[0])(v15 + 8, v6 + 48),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))GameData_212e8f0[0])(v15 + 8, 3,
                                                                 v6 + 76),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))GameData_212e8f8[0])(v15 + 8, 1,
                                                                 v6 + 88),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = GameRoutine_5ddd0_alt1(
        *(_QWORD*)(v6 + 8LL * *(int*)(v6 + 19224) + 19208)),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v99 = COERCE_AS(__typeof__(v99),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = (*(__int64 (**)(_QWORD, _QWORD, __int64, __int64))(
        *(_QWORD*)*a2 + 176LL))(*a2, 0, v21, v22),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v99 = COERCE_AS(__typeof__(v99),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = v15;
  }
  v23 = *v9;
  v24 = *(_QWORD*)(v6 + 18736) + 1440LL * *v9;
  if ((*(_BYTE*)(v24 + 1432) & 1) == 0 && (*(_BYTE*)(v24 + 1433) & 1) == 0 &&
      *(_DWORD*)(v24 + 108) == *(_DWORD*)(v8 + 16)) {
    v108 = v23;
    v109 = v6 + 19224;
    v25 = *(_DWORD*)v24;
    (*(void (**)(__int64))GameData_212e490[0])(v6 + 16),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v25 == 1) {
      v26 = v6 + 16;
      v27 = 2;
      v28 = (void (**)(__int64, __int64, __int64, __int64,
                       __int64))GameData_212e4b8[0],
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v29 = 2;
    }
    else {
      if (v25 != 0) {
        goto LABEL_16;
      }
      v26 = v6 + 16;
      v27 = 6;
      v28 = (void (**)(__int64, __int64, __int64, __int64,
                       __int64))GameData_212e4b8[0],
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v29 = 6;
    }
    (*v28)(v26, 5, v27, 1, v29);
  LABEL_16:
    (*(void (**)(__int64, __int64))GameData_212e888[0])(v10 + 8, v6 + 16),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e4a8[0])(
        v6 + 40, 0, *(unsigned __int8*)(v24 + 99)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ((void (*)(__int64, __int64))*GameData_212e898)(v10 + 8, v6 + 40),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_212e478[0])(
        v6 + 32, *(unsigned __int8*)(v24 + 97)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_212e480[0])(
        v6 + 32, *(unsigned __int8*)(v24 + 98)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_BYTE*)(v24 + 97) == 1) {
      v30 = *(unsigned int*)(v24 + 4);
      if ((unsigned int)v30 > 6) {
        v31 = 8;
      }
      else {
        v31 = GameData_1c22e94[v30];
      }
      (*(void (**)(__int64, __int64))GameData_212e488[0])(v6 + 32, v31),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64, __int64))GameData_212e770[0])(v10 + 8, v6 + 32),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = *(_DWORD*)(v24 + 16);
    if (v32 - 1 >= 3) {
      v33 = 0;
    }
    else {
      v33 = v32;
    }
    GameData_2178078(v6 + 72, v33);
    v34 = COERCE_LONG_DOUBLE(
        vmulq_f32(*(float32x4_t*)(v24 + 144), *(float32x4_t*)GameData_212c548));
    *(float32x2_t*)&v34 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v34,
                                                    *(int8x16_t*)&v34, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v34);
    *(float32x2_t*)&v34 = vpadd_f32(*(float32x2_t*)&v34, *(float32x2_t*)&v34);
    if (*(float*)&v34 == 0x0.0p+0f) {
      v35 = 0;
    }
    else {
      v35 = 7;
    }
    GameData_2178090(v6 + 72, v35, v34);
    v36 = 1;
    if (*(_DWORD*)(v24 + 12) != 3) {
      if (*(_DWORD*)(v24 + 28) == 1) {
        v36 = 1;
      }
      else {
        v36 = 2;
      }
    }
    (*(void (**)(__int64, __int64))GameData_212e878[0])(v6 + 72, v36),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))GameData_212e868[0])(v10 + 8, v6 + 72),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, float))GameData_2132558[0])(v10 + 8,
                                                      *(float*)(v24 + 64)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    ((void (*)(__int64, long double, float, float))*GameData_2132560)(
        v10 + 8, *(long double*)(v24 + 144),
        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v24 + 144))),
        COERCE_FLOAT(*(_QWORD*)(v24 + 152))),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v37 = *(_QWORD*)(v6 + 8);
    v38 = *(unsigned int**)(v37 + 16616);
    v39 = *(unsigned int**)(v37 + 16632);
    if (v38 != nullptr) {
      v39 = v38;
    }
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, *v39, v39[1]),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v110 = a2;
    v107 = (unsigned __int8*)(v6 + 248656);
    (*(void (**)(void*))(*(_QWORD*)*a2 + 88LL))((void*)*a2),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = *(int**)(v24 + 72);
    v40 = *(int**)(v24 + 80);
    if (v41 != v40) {
      v42 = GameData_212e4d8[0];
      v43 = v6 + 16632;
      v114 = v24;
      v115 = v6;
      v112 = *(int**)(v24 + 80);
      v113 = v10;
      v111 = v6 + 16632;
      do {
        v44 = *((_QWORD*)v41 + 4);
        if (v44 != -1) {
          v45 = ((__int64 (*)(__int64, __int64, _QWORD))*v42)(
              *(_QWORD*)(*(_QWORD*)(v6 + 8) + 256LL) + 8LL, v44,
              *(unsigned int*)(v43 + ((__int64)(3 * *(_DWORD*)(v24 + 24) +
                                                *(_DWORD*)(v24 + 20))
                                      << 7))),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v46 = *((_BYTE*)v41 + 8);
          v47 = *v41;
          v48 = v45;
          if ((v46 & 1) != 0) {
            v49 = *((_QWORD*)v41 + 2);
          }
          else {
            v49 = v46 >> 1;
          }
          if (v49 != 0) {
            v50 = *(_QWORD*)(v24 + 208);
            if (v50 != 0) {
              v51 = *(int**)(v50 + 240);
              v53 = v50 + 264;
              v52 = *(_QWORD*)(v50 + 264);
              v117 = v45;
              v54 = *v51;
              v55 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v53 + 8) - v52) >> 3) <=
                        v54 ||
                    (__int64)v54 <= -1;
              if (v55) {
                v54 = 0;
              }
              v56 = *(_QWORD*)(v52 + 24 * v54);
              v57 = *(_QWORD*)(v56 + 120);
              v58 = *(unsigned __int8*)(v57 + 237);
              if (*(_BYTE*)(v57 + 237) != 0) {
                v59 = *(_QWORD*)(v57 + 64);
                v60 = *(_QWORD**)(v56 + 136);
                v61 = 8;
                if ((v41[2] & 1) != 0) {
                  v62 = *((_QWORD*)v41 + 2);
                }
                else {
                  v62 = v46 >> 1;
                }
                v63 = (_QWORD*)(v59 + 32);
                v116 = v60;
                while (1) {
                  v64 = v59 != 0 ? (const char*)(*v63 + 2LL) : nullptr;
                  v65 = strlen_alt1(v64),
                  v22 = COERCE_AS(
                      __typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v99 = COERCE_AS(
                      __typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v65 == v62) {
                    v66 = v65;
                    if (v65 == -1) {
                      String_60a230_alt1(),
                          v22 = COERCE_AS(
                              __typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v99 = COERCE_AS(
                              __typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v67 =
                        (v46 & 1) != 0 ? *((_QWORD*)v41 + 3) : (__int64)v41 + 9;
                    if (memcmp_alt1(v67, (__int64)v64, v66) == 0) {
                      break;
                    }
                  }
                  v61 += 24;
                  --v58;
                  v63 += 2;
                  if (v58 == 0) {
                    goto LABEL_64;
                  }
                }
                v47 = *(_DWORD*)(*v116 + v61);
              LABEL_64:
                v24 = v114;
                v6 = v115;
                v40 = v112;
                v10 = v113;
                v43 = v111;
                v42 = GameData_212e4d8[0];
              }
              v48 = v117;
            }
          }
          if ((v47 & 0x80000000) == 0) {
            ((void (*)(__int64, __int64, _QWORD, __int64))*GameData_212e4e0)(
                v10 + 8, 1, 0, v48),
                v22 =
                    COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v99 =
                    COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v41 += 10;
      } while (v41 != v40);
    }
    v68 = v6 + 56LL * v108;
    v69 = *(_DWORD*)(v68 + 133960);
    v55 = v69 < -1;
    v70 = ((_BYTE)v69 + 1) & 1;
    if (v55) {
      v70 = -v70;
    }
    v71 = *(_QWORD*)(v68 + 133944 + 8LL * v70);
    *(_DWORD*)(v68 + 133960) = v70;
    v72 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v71 + 56LL))(v71),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v99 = COERCE_AS(__typeof__(v99),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v73 = *(int32x4_t*)(v24 + 1296);
    v74 = *(int32x4_t*)(v24 + 1312);
    v75 = *(int32x4_t*)(v24 + 1328);
    v76 = vzip1q_s32(v73, v75);
    v77 = *(int32x4_t*)(v24 + 1344);
    v78 = vzip2q_s32(v73, v75);
    v79 = vzip1q_s32(v74, v77);
    *v72 = vzip1q_s32(v76, v79);
    v72[1] = vzip2q_s32(v76, v79);
    v72[2] = vzip1q_s32(v78, vzip2q_s32(v74, v77));
    v80 = v68 + 133944 + 16LL * *(int*)(v68 + 133960);
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*v110 + 224LL))(*v110, 3, 7, *(_QWORD*)(v80 + 24),
                                  *(_QWORD*)(v80 + 32)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)v71 + 64LL))(v71),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v81 = v68 + 19256;
    v82 = *(_DWORD*)(v81 + 16);
    v55 = v82 < -1;
    v83 = ((_BYTE)v82 + 1) & 1;
    if (v55) {
      v83 = -v83;
    }
    v84 = *(_QWORD*)(v81 + 8LL * v83);
    *(_DWORD*)(v81 + 16) = v83;
    v85 = (*(__int64 (**)(__int64))(*(_QWORD*)v84 + 56LL))(v84),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v99 = COERCE_AS(__typeof__(v99),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_OWORD*)v85 = *(_OWORD*)(v24 + 48);
    *(_DWORD*)(v85 + 16) = *(_DWORD*)(v24 + 104);
    v86 = v81 + 16LL * *(int*)(v81 + 16);
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*v110 + 224LL))(*v110, 3, 8, *(_QWORD*)(v86 + 24),
                                  *(_QWORD*)(v86 + 32)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)v84 + 64LL))(v84),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v87 = *(_QWORD*)(v24 + 208);
    if (v87 != 0) {
      v88 = *(_QWORD*)(v87 + 8);
      v89 = v109;
      if (v88 != 0 && *(_QWORD*)(v88 + 152) != *(_QWORD*)(v88 + 144)) {
        v90 = v87 + 16LL * *(int*)(v87 + 144);
        (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
            *(_QWORD*)*v110 + 224LL))(*v110, 3, 5, *(_QWORD*)(v90 + 152),
                                      *(_QWORD*)(v90 + 160)),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v99 = COERCE_AS(__typeof__(v99),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v87 = *(_QWORD*)(v24 + 208);
      }
      v91 = *(int**)(v87 + 240);
      v93 = v87 + 264;
      v92 = *(_QWORD*)(v87 + 264);
      v94 = *v110;
      v95 = *v91;
      if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v93 + 8) - v92) >> 3) <= v95 ||
          (__int64)v95 <= -1) {
        v95 = 0;
      }
      v97 = GameRoutine_5fb900_alt1(
          *(_QWORD*)(*(_QWORD*)(v92 + 24 * v95) + 136LL)),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v94 + 200LL))(
          v94, 3, v97 + 16),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_83:
      v98 = GameRoutine_5de20_alt1(
          *(_QWORD*)(v6 + 8LL * *(int*)(v89 + 24) + 19232)),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v110 + 192LL))(
          *v110, v98, v99),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(void*))(*(_QWORD*)*v110 + 264LL))((void*)*v110),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v99 = COERCE_AS(__typeof__(v99),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*v110 + 296LL))(*v110, *(unsigned int*)(v24 + 1424),
                                    *(unsigned int*)(v24 + 1428)),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v99 = COERCE_AS(__typeof__(v99),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_BYTE*)(v24 + 1433) = 1;
      return result;
    }
    v89 = v109;
    if ((*(_BYTE*)(v24 + 1284) & 1) != 0) {
      v100 = *(_QWORD*)(v6 + 16496);
      v101 = *(_QWORD*)(v6 + 16504);
      if (v101 == 0) {
        goto LABEL_93;
      }
    }
    else {
      v102 = *(_QWORD*)(v24 + 72);
      v103 = v102 != *(_QWORD*)(v24 + 80) && *(_QWORD*)(v102 + 32) != -1;
      v104 =
          v6 +
          (((unsigned __int64)*(unsigned __int8*)(v24 + 101) << 13) |
           (16 * (v103 | (2LL * *(unsigned __int8*)(v24 + 96)) | (4LL * *v107) |
                  (8LL * *(unsigned __int8*)(v24 + 99)) ^ 8)) |
           0x100);
      v100 = *(_QWORD*)(v104 + 96);
      v101 = *(_QWORD*)(v104 + 104);
      if (v101 == 0) {
      LABEL_93:
        v105 = *v110;
        v106 = GameRoutine_5fb900_alt1(*(_QWORD*)(v100 + 136)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v99 = COERCE_AS(__typeof__(v99),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v105 + 200LL))(
            v105, 3, v106 + 16),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v99 = COERCE_AS(__typeof__(v99),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt2(v101),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_83;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_93;
  }
  return result;
}

__int64

gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx_closure_Invoke(__int64 a1,
                                                              __int64 a2)
{
  __int64 result;

  result = GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)a2 + 592LL));
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) = result;
  return result;
}

__int64 PrimitiveDrawManager_19994c0(__int64 a1, _BYTE* a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  unsigned __int64 v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  _BYTE* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int16* v27;
  unsigned __int64 v28;
  __int64 v29;

  v3 = a3;
  v4 = a2;
  if (a3 == 0) {
    goto LABEL_6;
  }
  v5 = &a2[a3];
  v6 = a3 & 3;
  v7 = a2;
  if ((a3 & 3) != 0) {
    while (*v7 != 47) {
      ++v7;
      if (--v6 == 0) {
        goto LABEL_5;
      }
    }
    goto LABEL_17;
  }
LABEL_5:
  if (a3 < 4) {
  LABEL_6:
    v8 = nullptr;
    v9 = nullptr;
    goto LABEL_22;
  }
  v7 += 3;
  while (1) {
    if (*(v7 - 3) == 47) {
      v7 -= 3;
      goto LABEL_17;
    }
    if (*(v7 - 2) == 47) {
      v7 -= 2;
      goto LABEL_17;
    }
    if (*(v7 - 1) == 47) {
      break;
    }
    if (*v7 == 47) {
      goto LABEL_17;
    }
    v10 = v7 + 1;
    v7 += 4;
    if (v10 == v5) {
      goto LABEL_6;
    }
  }
  --v7;
LABEL_17:
  v8 = nullptr;
  if (v7 == v5) {
    v9 = nullptr;
  }
  else {
    v11 = (_BYTE*)(v7 - a2);
    v9 = nullptr;
    if (v7 - a2 != -1) {
      if ((unsigned __int64)v11 >= a3) {
        String_60a250("string_view::substr");
      }
      v9 = a2;
      v8 = (_BYTE*)(v7 - a2);
      v4 = v7 + 1;
      v3 = a3 - (_QWORD)(v11 + 1);
    }
  }
LABEL_22:
  v12 = *(__int64**)(a1 + 248632);
  v13 = *(__int64**)(a1 + 248640);
  if (v12 == v13) {
    return -1;
  }
  while (1) {
    if (v8 == nullptr) {
      goto LABEL_52;
    }
    v14 = *((unsigned __int8*)v12 + 56);
    v15 = (_BYTE*)v12[8];
    if ((v14 & 1) == 0) {
      v15 = (_BYTE*)(v14 >> 1);
    }
    if (v8 == v15) {
      v16 = (v14 & 1) != 0 ? (__int64*)v12[9] : (__int64*)((char*)v12 + 57);
      if ((unsigned int)memcmp(v9, v16, v8) == 0) {
      LABEL_52:
        v17 = *v12;
        if (*v12 != 0) {
          nn_os_AcquireReadLock(v17 + 696);
          nn_os_ReleaseReadLock(v17 + 696);
        }
        v18 = v12[3];
        if (v18 != 0) {
          v19 = *(_QWORD*)(v18 + 56);
          v20 = *(unsigned __int16*)(v19 + 12);
          v21 = v19 + 8;
          v22 = v19 + 8 + 16 * v20;
          v23 = *(_DWORD*)v22;
          if (*(_DWORD*)(v19 + 8) < *(_DWORD*)v22) {
            do {
              v26 = (__int64)v23 >> 3;
              if (v3 > v26) {
                v24 = ((unsigned __int8)v4[v3 + ~v26] >> (v23 & 7)) & 1;
              }
              else {
                v24 = 0;
              }
              v20 = *(unsigned __int16*)(v19 + 12 + 16 * v20 + 2 * v24);
              v25 = v23 < *(_DWORD*)(v21 + 16 * v20);
              v23 = *(_DWORD*)(v21 + 16 * v20);
            } while (v25);
            v22 = v21 + 16 * v20;
          }
          v27 = *(unsigned __int16**)(v22 + 8);
          if (v3 == *v27 && (unsigned int)memcmp(v27 + 1, v4, v3) == 0) {
            v28 = v22 - v19 - 24;
            if ((~v28 & 0xFFFFFFFF0LL) != 0) {
              v29 = *(_QWORD*)(*(_QWORD*)(v18 + 40) + 8LL * (int)(v28 >> 4));
              if (v29 != 0) {
                return *(_QWORD*)(v29 + 144);
              }
            }
          }
        }
      }
    }
    v12 += 11;
    if (v12 == v13) {
      return -1;
    }
  }
}

__int64 PrimitiveDrawManager_1999ce0(float32x4_t* a1, float32x4_t* a2)
{
  unsigned __int8 v2;
  int16x4_t v3;

  if (LANES128(*(a1)).n128_u32[0] != LANES128(*(a2)).n128_u32[0] ||
      LANES128(*(a1)).n128_f32[1] != LANES128(*(a2)).n128_f32[1] ||
      LANES128(*(a1)).n128_u8[8] != LANES128(*(a2)).n128_u8[8]) {
    return 0;
  }
  v2 = 0;
  if (LANES128(*(a1)).n128_f32[3] == LANES128(*(a2)).n128_f32[3]) {
    LANES64(v3).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(a1[1], a2[1]))).n64_u64[0];
    if ((LANES64(v3).n64_u8[0] & 1) != 0 && (LANES64(v3).n64_u8[2] & 1) != 0 &&
        (LANES64(v3).n64_u8[4] & 1) != 0) {
      v2 = LANES64(v3).n64_u8[6];
    }
  }
  return v2 & 1;
}

#pragma GCC visibility pop
