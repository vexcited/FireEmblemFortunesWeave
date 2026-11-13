#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1993840(__int64);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
__int64 GameHr_6c3470(__int64, __int64);
__int64 Impl_13261c0(__int64);
__int64 PrimitiveDrawManager_1994180(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__n64 game_gmap_1540e50(__int64**, __int128*, __int64*, __int128*, float, float,
                        float);
char* Impl_13280a0(__int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int64 (*game_gmap_TroopUnit_vtable[])();
extern __int64* GameData_212d718;
extern __int64* GameData_2130e00;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1658;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float Camera_1315570(__int64);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_996680();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
char* game_gmap_9964e0(char** a1, __int64 a2);
void game_gmap_1541940(_QWORD** a1, __int64 a2, float32x4_t* a3, __int128* a4);

char* game_gmap_9964e0(char** a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  char* v13;
  char* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;

  v2 = a1[1] - *a1;
  v3 = 0x3AEF6CA970586723LL * (v2 >> 4) + 1;
  if (v3 > 0x1D77B654B82C33LL) {
    GameRoutine_996680();
  }
  if (0x75DED952E0B0CE46LL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0x75DED952E0B0CE46LL * ((a1[2] - *a1) >> 4);
  }
  if ((unsigned __int64)(0x3AEF6CA970586723LL * ((a1[2] - *a1) >> 4)) >=
      0xEBBDB2A5C1619LL) {
    v5 = 0x1D77B654B82C33LL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0x1D77B654B82C33LL) {
    GameRoutine_60a210();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = 2224 * v5;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      2224 * v5, 16, 0);
  v10 = (_QWORD*)(v9 + v2);
  v11 = v9 + v8;
  GameHr_6c3470((__int64)v10, a2);
  v12 = *a1;
  v13 = a1[1];
  v14 = (char*)(v10 + 278);
  *v10 = game_gmap_TroopUnit_vtable;
  v15 = (_QWORD*)((char*)v10 + ((char*)v12 - (char*)v13));
  if (v12 != v13) {
    v16 = (__int64)v12;
    v17 = v15;
    do {
      GameHr_6c3470((__int64)v17, v16);
      *v17 = game_gmap_TroopUnit_vtable;
      v16 += 2224;
      v17 += 278;
    } while ((char*)v16 != v13);
    do {
      (**(void (***)(char*))v12)(v12);
      v12 += 2224;
    } while (v12 != v13);
    v12 = *a1;
  }
  *a1 = (char*)v15;
  a1[1] = v14;
  a1[2] = (char*)v11;
  if (v12 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v18, (__int64)v12);
  }
  return v14;
}

void game_gmap_1541940(_QWORD** a1, __int64 a2, float32x4_t* a3, __int128* a4)
{
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char v13;
  unsigned __int64 v14;
  _QWORD** v15;
  char* v16;
  unsigned __int64 v17;
  float32x4_t** v18;
  __int64* v19;
  float* v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  bool v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float32x4_t v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  float32x4_t v48;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    char* v51;
  } v49_;

  v8 = Impl_13280a0(a2);
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v12, 16, 0);
    v49_.v50 = v10;
    v49_.v51 = v11;
    v49_.v49 = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v49_.v49) = 2 * v9;
  v11 = (char*)&v49_.v49 + 1;
  if (v9 != 0) {
  LABEL_9:
    memmove((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  v13 = v49_.v49 & 1;
  v14 = (unsigned __int8)v49_.v49 >> 1;
  if ((v49_.v49 & 1) != 0) {
    v14 = v49_.v50;
  }
  if (v14 != 0) {
    GameRoutine_1993840(*(_QWORD*)**a1);
    v15 = (_QWORD**)**a1;
    if ((v49_.v49 & 1) != 0) {
      v16 = v49_.v51;
    }
    else {
      v16 = (char*)&v49_.v49 + 1;
    }
    v17 = strlen(v16);
    v18 =
        (float32x4_t**)PrimitiveDrawManager_19935e0(*v15, (__int64)v16, v17, 0);
    GameRoutine_1994460(*v18);
    v19 = GameData_2130e00;
    if (*(_BYTE*)(a2 + 115) == 1) {
      v20 = (float*)(*GameData_2130e00 + 660);
    }
    else {
      v21 = *(_QWORD*)(GameData_21c96e8 + 8);
      v22 = *(_QWORD**)(v21 + 8);
      v23 = *(_QWORD**)(v21 + 16);
      while (1) {
        if (v22 == v23) {
          v26 = *GameData_2130e00;
          goto LABEL_27;
        }
        v24 = (_QWORD*)*v22;
        if (*(_QWORD*)*v22 == a2) {
          v25 = v24[12];
          if (v25 != 0 && (unsigned int)*(unsigned __int8*)(v25 + 32) - 3 < 2) {
            break;
          }
        }
        ++v22;
      }
      v26 = *GameData_2130e00;
      if ((v24[68] & 8) != 0) {
        v20 = (float*)(v26 + 664);
        goto LABEL_28;
      }
    LABEL_27:
      v20 = (float*)(v26 + 4LL * (unsigned __int8)Impl_13261c0(a2) + 80);
    }
  LABEL_28:
    v27 = GameData_212d718;
    v28 = (float)(*v20 * 0x1.ddddde0000000p-5f) * 0x1.0000000000000p-1f;
    v29 = Camera_1315570(*(_QWORD*)(*GameData_212d718 + 16));
    v30 = (float)(PSEUDO_UNFUSED(v29 * 0x1.1df46a0000000p-6f)) +
          (float)(roundf((float)(v29 * 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v30 < -0x1.921fb60000000p+0f) {
      v31 = -0x1.0000000000000p+0f;
    }
    else {
      v31 = 0x1.0000000000000p+0f;
    }
    v32 = -0x1.921fb60000000p+1f - v30;
    if (v30 >= -0x1.921fb60000000p+0f) {
      v32 = v30;
    }
    v33 = 0x1.921fb60000000p+1f - v30;
    v34 = v30 <= 0x1.921fb60000000p+0f;
    if (v30 > 0x1.921fb60000000p+0f) {
      v35 = -0x1.0000000000000p+0f;
    }
    else {
      v35 = v31;
    }
    if (v34) {
      v36 = v32;
    }
    else {
      v36 = v33;
    }
    v37 = v36 * v36;
    v38 =
        v35 *
        (float)((float)((float)-(
                            float)(*(float*)((char*)((__int128*)0x10LL) +
                                             (_QWORD)GameData_212c188) -
                                   (float)((float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                                 GameData_212c188 +
                                                             4) +
                                                   (float)((float)-(
                                                               float)(*(float*)((char*)((
                                                                                    _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                    GameData_212c188) -
                                                                      (float)((float)(*((float*)
                                                                                            GameData_212c188 +
                                                                                        1) -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c188 *
                                                                                              v37)) *
                                                                              v37)) *
                                                           v37)) *
                                           v37)) *
                        v37) +
                0x1.0000000000000p+0f);
    v39 = Camera_1315570(*(_QWORD*)(*v27 + 16));
    v40 = (float)(PSEUDO_UNFUSED(v39 * 0x1.1df46a0000000p-6f)) +
          (float)(roundf((float)(v39 * 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v40 <= 0x1.921fb60000000p+0f) {
      if (v40 >= -0x1.921fb60000000p+0f) {
      LABEL_44:
        v42 = *(_QWORD*)(*v27 + 16);
        LANES128(v43).n128_u32[1] = 0;
        LANES128(v43).n128_u32[3] = 0;
        v44 =
            v40 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v40 *
                                                                                                          v40))) *
                                                                                  (float)(v40 *
                                                                                          v40))) *
                                                               (float)(v40 *
                                                                       v40))) *
                                               (float)(v40 * v40))) *
                            (float)(v40 * v40)) +
                    0x1.0000000000000p+0f);
        LANES128(v43).n128_f32[0] = v28 * (float)(v38 + v44);
        LANES128(v43).n128_f32[2] = v28 * (float)(v38 - v44);
        v48 = vaddq_f32(*a3, v43);
        v45 = Camera_1315570(v42);
        v46 = (float)(15 - (unsigned __int8)Impl_13261c0(a2));
        if (*(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL) == a2) {
          v46 = 0x1.0000000000000p+4f;
        }
        game_gmap_1540e50(
            a1, (__int128*)&v48, (__int64*)a1 + 5, a4, v45,
            (float)((float)(PSEUDO_UNFUSED(*(float*)(*v19 + 668) *
                                           (float)(*(int*)(*v19 + 576) + 1))) +
                    (float)(*(float*)(*v19 + 668) * v46)) +
                (float)(*(float*)(*v19 + 668) * 0x1.99999a0000000p-4f),
            v28);
        PrimitiveDrawManager_1994180(*(_QWORD*)**a1);
        v13 = v49_.v49 & 1;
        goto LABEL_47;
      }
      v41 = -0x1.921fb60000000p+1f;
    }
    else {
      v41 = 0x1.921fb60000000p+1f;
    }
    v40 = v41 - v40;
    goto LABEL_44;
  }
LABEL_47:
  if (v13 != 0 && v49_.v51 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  (__int64)v49_.v51);
  }
}

#pragma GCC visibility pop
