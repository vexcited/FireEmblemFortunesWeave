#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_816d70();
__int64 GameRoutine_816f20();
__int64 GameRoutine_817060();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
extern _UNKNOWN GameData_21ec950;
extern __int64 (*game_map_anonymous_EntityObject_ProcState_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21ec7d8;
extern __int64 GameData_21ec7e0;
extern __int64 GameData_21ec7e8;
extern __int64 GameData_21ec7f8;
extern __int64 GameData_21ec808;
extern __int64 GameData_21ec818;
extern __int64 GameData_21ec820;
extern __int64 GameData_21ec828;
extern __int64 GameData_21ec838;
extern __int64 GameData_21ec848;
extern __int64 GameData_21ec858;
extern __int64 GameData_21ec860;
extern __int64 GameData_21ec868;
extern __int64 GameData_21ec878;
extern __int64 GameData_21ec888;
extern __int64 GameData_21ec898;
extern __int64 GameData_21ec8a0;
extern __int64 GameData_21ec8a8;
extern __int64 GameData_21ec8b8;
extern __int64 GameData_21ec8c8;
extern __int64 GameData_21ec8d8;
extern __int64 GameData_21ec8e0;
extern __int64 GameData_21ec8e8;
extern __int64 GameData_21ec8f8;
extern __int64 GameData_21ec908;
extern __int64 GameData_21ec918;
extern __int64 GameData_21ec920;
extern __int64 GameData_21ec928;
extern __int64 GameData_21ec938;
extern __int64 GameData_21ec948;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_21ec7d0;
extern char GameData_21ec810;
extern char GameData_21ec850;
extern char GameData_21ec890;
extern char GameData_21ec8d0;
extern char GameData_21ec910;
extern int GameData_21ec7f0;
extern int GameData_21ec800;
extern int GameData_21ec830;
extern int GameData_21ec840;
extern int GameData_21ec870;
extern int GameData_21ec880;
extern int GameData_21ec8b0;
extern int GameData_21ec8c0;
extern int GameData_21ec8f0;
extern int GameData_21ec900;
extern int GameData_21ec930;
extern int GameData_21ec940;
__int64 EntityObject_Unknown24(__int64 a1, __int64 a2);
_QWORD* GameRoutine_7c41f0(__int64, int, int);
__int64 GameRoutine_74df60(_QWORD, _QWORD);
__int64 GameRoutine_816820(_QWORD, _QWORD);
__int64 GameRoutine_f09600(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1f9a470[])();
extern __int64 (*GameData_1f9dd30[])();
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21cd120;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 EntityObject_817060(__int64 a1);
__int64 EntityObject_8164a0(__int64 a1, unsigned __int8 a2, char a3);
_DWORD* EntityObject_816a10(__int64 a1, int* a2, int* a3);
__int64 EntityObject_816c80(__int64 result, __int64* a2);
__int64 EntityObject_816f20(__int64 a1);
__int64 EntityObject_817060(__int64 a1);
__int64 game_map_anonymous_EntityObject_Immediate_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* MapAnimModule_c08ee0(__int64, __int64, __int64, int);
_QWORD* game_map__8178c0(_QWORD*);
__attribute__((swiftcall)) void MapObjectModule_a7d410(PSEUDO_X8,
                                                       __int64 result);
__int64* GameRoutine_c0b080(_QWORD*, _QWORD*);
__int64* GameRoutine_c0b220(_QWORD*, _QWORD*);
__int64 GameRoutine_8162a0(__int64, __int64);
__int64 GameRoutine_989ea0(__int64 result, int, __int64);
__int64 MapAnimModule_c08540(__int64, __int64, __int64, unsigned int, float);
__int64 MapAnimModule_c09040(__int64, __int64, __int64);
__int64 MapAnimModule_c09200(__int64 result, int, float);
__int64 MapAnimModule_c09420(__int64 result, int, long double);
__int64 MapAnimModule_c096a0(__int64 result, int);
__int64 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212d498;
extern __int64 (*GameData_1f9de40[])();
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern int* GameData_212d490;
void EntityObject_Unknown25(__int64* a1, int a2);
_QWORD* EntityObject_816820(_QWORD* result, __int64 a2);
__int64 EntityObject_816d70(__int64 a1);
__int64* EntityObject_817440(__int64 a1);
__int64* EntityObject_817560(__int64 a1);
void EntityObject_ProcState_Unknown2(__int64 a1);
__int64 GameRoutine_f09600_alt1(__int64) __asm__("GameRoutine_f09600");
int* GameRoutine_74df60_alt1(int* result,
                             __int64) __asm__("GameRoutine_74df60");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 EntityObject_Unknown24(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v9)();
  _BYTE* v10;
  char v11;

  if (a2 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec950,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21ec950) != 0) {
      GameData_21ec7f0 = 0;
      GameData_21ec7f8 = 0;
      GameData_21ec7d8 = 0;
      GameData_21ec800 = 0;
      GameData_21ec7d0 = 13;
      GameData_21ec7e0 = (__int64)GameRoutine_816d70;
      GameData_21ec7e8 = 0;
      GameData_21ec850 = 13;
      GameData_21ec8d0 = 13;
      GameData_21ec808 = 0;
      GameData_21ec818 = 0;
      GameData_21ec820 = 16;
      GameData_21ec828 = 1;
      GameData_21ec830 = 0;
      GameData_21ec810 = 14;
      GameData_21ec838 = 0;
      GameData_21ec840 = 0;
      GameData_21ec848 = 0;
      GameData_21ec858 = 0;
      GameData_21ec860 = (__int64)GameRoutine_816f20;
      GameData_21ec868 = 0;
      GameData_21ec870 = 0;
      GameData_21ec878 = 0;
      GameData_21ec880 = 0;
      GameData_21ec888 = 0;
      GameData_21ec890 = 14;
      GameData_21ec898 = 0;
      GameData_21ec8a0 = 16;
      GameData_21ec8a8 = 1;
      GameData_21ec8b0 = 0;
      GameData_21ec8b8 = 0;
      GameData_21ec8c0 = 0;
      GameData_21ec8c8 = 0;
      GameData_21ec8d8 = 0;
      GameData_21ec8e0 = (__int64)GameRoutine_817060;
      GameData_21ec8e8 = 0;
      GameData_21ec8f0 = 0;
      GameData_21ec8f8 = 0;
      GameData_21ec900 = 0;
      GameData_21ec908 = 0;
      GameData_21ec910 = 0;
      GameData_21ec938 = 0;
      GameData_21ec940 = 0;
      GameData_21ec948 = 0;
      GameData_21ec930 = 0;
      GameData_21ec920 = 0;
      GameData_21ec928 = 0;
      GameData_21ec918 = 0;
      __cxa_guard_release(&GameData_21ec950);
    }
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        160, 16, 0);
    v5 = GameData_212c608[0];
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_QWORD*)(v4 + 128) = 0;
    *(_WORD*)(v4 + 136) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = "NULL";
    *(_QWORD*)(v4 + 32) = 0;
    v6 = (_QWORD*)(v4 + 32);
    *(_QWORD*)(v4 + 138) = 0;
    *(_QWORD*)(v4 + 144) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)v4 = v5 + 16;
    *(_QWORD*)(v4 + 8) = 0;
    game_ProcInst_Register(v4, v7);
    v8 = *(_QWORD*)(a2 + 40);
    v9 = game_map_anonymous_EntityObject_ProcState_vtable;
    *(_QWORD*)(v4 + 152) = a1;
    *(_QWORD*)v4 = game_map_anonymous_EntityObject_ProcState_vtable;
    if (v8 != 0) {
      *(_QWORD*)(v8 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a2 + 40);
      v9 = *(__int64 (***)())v4;
    }
    *(_QWORD*)(a2 + 40) = v4;
    *(_QWORD*)(v4 + 8) = &GameData_21ec7d0;
    *(_QWORD*)(v4 + 16) = &GameData_21ec7d0;
    *(_QWORD*)(v4 + 24) = "ProcState";
    *(_QWORD*)(v4 + 32) = a2;
    *(_DWORD*)(v4 + 140) = 1374187680;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    ((void (*)(__int64))v9[4])(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v10 = (_BYTE*)*v6;
    v11 = *(_BYTE*)(*v6 + 138LL);
    if (v11 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*v6);
      v11 = v10[138];
    }
    v10[138] = v11 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    return 0;
  }
  return v4;
}

void EntityObject_Unknown25(__int64* a1, int a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 (**v10)();
    int v11;
    char gap12_[20];
    __int64 (***v12)();
  } v10_;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v5 = 2)
           : (v5 = 3),
       (v5 & v4) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_13;
    }
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_13:
      GameRoutine_989ea0(a1[7], a2, a1[8]);
      v8 = a1[8];
      v10_.v11 = a2;
      v10_.v10 = GameData_1f9de40;
      v10_.v12 = &v10_.v10;
      GameRoutine_8162a0(v8, (__int64)&v10_.v10);
      GameRoutine_8162a0(a1[9], (__int64)&v10_.v10);
      if (v10_.v12 == &v10_.v10) {
        v9 = 4;
      }
      else {
        if (v10_.v12 == nullptr) {
          return;
        }
        v9 = 5;
      }
      ((__int64 (*)(__int64))(*v10_.v12)[v9])((__int64)v10_.v12);
    }
  }
}

double EntityObject_816290() { return 0.0; }

__int64 EntityObject_8164a0(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result;
  char v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int16 v26;
  bool v27;
  int v28;
  int v29;
  struct {
    __int64 (**v30)();
    __int64 v31;
    int* v32;
    char gap24_[8];
    __int64 (***v33)();
  } v30_;
  int v34;
  int v35;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((result & 1) == 0 || *(_BYTE*)(a1 + 92 + a2) == (a3 & 1)) {
    return result;
  }
  *(_BYTE*)(a1 + 92 + a2) = a3 & 1;
  v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 56LL))(a1, 0);
  v8 = 0;
  if ((v7 & 1) != 0) {
    v8 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
  }
  v9 = *(_QWORD*)(a1 + 64);
  if (v9 != 0 && *(_BYTE*)(v9 + 288) != (v8 & 1)) {
    *(_BYTE*)(v9 + 288) = v8 & 1;
  }
  v10 = *(_QWORD*)(a1 + 72);
  if (v10 != 0 && *(_BYTE*)(v10 + 288) != (v8 & 1)) {
    *(_BYTE*)(v10 + 288) = v8 & 1;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 56LL))(a1, 0);
  if ((result & 1) != 0 && ((result = (*(__int64 (**)(__int64, __int64))(
                                 *(_QWORD*)a1 + 56LL))(a1, 1)) &
                            1) != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 2);
    v11 = result;
    v12 = *(_QWORD*)(a1 + 64);
    if (v12 == 0) {
      goto LABEL_24;
    }
  }
  else {
    v11 = 0;
    v12 = *(_QWORD*)(a1 + 64);
    if (v12 == 0) {
      goto LABEL_24;
    }
  }
  result = (__int64)EntityObject_816820(&v30_.v30, v12);
  v13 = v30_.v31;
  if (v30_.v31 != 0) {
    v14 = std___1___shared_weak_count_lock(v30_.v31);
    if (v14 == 0) {
      v17 = v13;
      goto LABEL_23;
    }
    v15 = v30_.v30;
    v16 = v14;
    result = std___1___shared_weak_count___release_weak(v13);
    if (v15 != nullptr) {
      *((_BYTE*)v15 + 184) = v11 & 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      v17 = v16;
    LABEL_23:
      result = std___1___shared_weak_count___release_weak(v17);
    }
  }
LABEL_24:
  v18 = GameData_21ca2e8;
  if (GameData_21ca2e8 == 0) {
    return result;
  }
  v19 = *(_DWORD*)(GameData_21ca2e8 + 61624);
  *(_DWORD*)(GameData_21ca2e8 + 61624) = v19 + 1;
  if (v19 == 0) {
    (**(void (***)(__int64))(v18 + 61616))(v18 + 61616);
  }
  result = (__int64)&v30_.v30;
  v30_.v30 = GameData_1f9dd30;
  v30_.v31 = v18;
  v20 = *(__int16*)(a1 + 106);
  v30_.v33 = &v30_.v30;
  if (v20 < 0) {
    goto LABEL_31;
  }
  v21 = *(__int16*)(a1 + 108);
  if (v21 < 0 || (v22 = *(__int16*)(a1 + 112), v21 > v22)) {
    result = (__int64)&v30_.v30;
  LABEL_31:
    v23 = 32;
  LABEL_32:
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v23))(result,
                                                                         v12);
    goto LABEL_33;
  }
  v26 = *(_WORD*)(a1 + 110);
  do {
    v28 = *(__int16*)(a1 + 106);
    if (v28 <= v26) {
      do {
        v34 = v21;
        v35 = v28;
        if (v30_.v33 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        ((void (*)(__int64 (***)(void), int*, int*))(*v30_.v33)[6])(v30_.v33,
                                                                    &v35, &v34);
        v27 = v28++ < *(__int16*)(a1 + 110);
      } while (v27);
      v26 = *(_WORD*)(a1 + 110);
      LOWORD(v22) = *(_WORD*)(a1 + 112);
    }
    v27 = v21++ < (__int16)v22;
  } while (v27);
  result = (__int64)v30_.v33;
  if (v30_.v33 == &v30_.v30) {
    goto LABEL_31;
  }
  if (v30_.v33 != nullptr) {
    v23 = 40;
    goto LABEL_32;
  }
LABEL_33:
  v24 = *(_DWORD*)(v18 + 61624) - 1;
  *(_DWORD*)(v18 + 61624) = v24;
  if (v24 != 0) {
    return result;
  }
  (*(void (**)(__int64))(*(_QWORD*)(v18 + 61616) + 8LL))(v18 + 61616);
  LOBYTE(v35) = 0;
  v30_.v30 = GameData_1f9a470;
  v30_.v31 = v18;
  v30_.v33 = &v30_.v30;
  v30_.v32 = &v35;
  GameRoutine_74df60_alt1((int*)(v18 + 61472), (__int64)&v30_.v30);
  result = (__int64)v30_.v33;
  if (v30_.v33 == &v30_.v30) {
    v25 = 4;
  }
  else {
    if (v30_.v33 == nullptr) {
      goto LABEL_49;
    }
    v25 = 5;
  }
  result = ((__int64 (*)(__int64))(*v30_.v33)[v25])((__int64)v30_.v33);
LABEL_49:
  *(_QWORD*)(v18 + 61472) = 0x3E8000003E8LL;
  *(_QWORD*)(v18 + 61480) = -1;
  v29 = (unsigned __int8)v35;
  *(_QWORD*)(v18 + 61488) = 0;
  *(_QWORD*)(v18 + 61496) = 0;
  *(_QWORD*)(v18 + 61504) = 0;
  *(_QWORD*)(v18 + 61512) = 0;
  *(_QWORD*)(v18 + 61520) = 0;
  *(_QWORD*)(v18 + 61528) = 0;
  *(_QWORD*)(v18 + 61536) = 0;
  *(_QWORD*)(v18 + 61544) = 0;
  *(_QWORD*)(v18 + 61552) = 0;
  *(_QWORD*)(v18 + 61560) = 0;
  *(_QWORD*)(v18 + 61568) = 0;
  *(_QWORD*)(v18 + 61576) = 0;
  *(_QWORD*)(v18 + 61584) = 0;
  *(_QWORD*)(v18 + 61592) = 0;
  *(_QWORD*)(v18 + 61600) = 0;
  *(_QWORD*)(v18 + 61608) = 0;
  if (v29 == 1) {
    result = GameData_21cd120;
    if (GameData_21cd120 != 0) {
      return GameRoutine_f09600_alt1(GameData_21cd120);
    }
  }
  return result;
}

_QWORD* EntityObject_816820(_QWORD* result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _OWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int128 v13;

  if (a2 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d498,
                                    memory_order_acquire);
    v3 = GameData_212d490;
    if ((explicit & 1) == 0) {
      v11 = a2;
      v12 = result;
      v10 = __cxa_guard_acquire(GameData_212d498);
      a2 = v11;
      result = v12;
      if (v10 != 0) {
        *v3 = wld_Crc32(0, "MapObjectModule", 0xFu);
        __cxa_guard_release(GameData_212d498);
        a2 = v11;
        result = v12;
      }
    }
    v4 = *(_QWORD*)(a2 + 512);
    v5 = v4;
    while (v5 != *(_QWORD*)(a2 + 504)) {
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
      if (v6 == *v3) {
        if (*(_QWORD*)(a2 + 512) == v4) {
          break;
        }
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 == 0) {
          break;
        }
        v8 = result;
        result = (_QWORD*)X8CALL_X0(__int64,
                                    MapObjectModule_a7d410((void*)(&v13), v7));
        v9 = *((_QWORD*)&v13 + 1);
        *v8 = v13;
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            return (_QWORD*)std___1___shared_weak_count___release_weak_alt1();
          }
        }
        return result;
      }
    }
  }
  *result = 0;
  result[1] = 0;
  return result;
}

_DWORD* EntityObject_816a10(__int64 a1, int* a2, int* a3)
{
  _DWORD* result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  _DWORD* v10;

  result = *(_DWORD**)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  if ((int)result[15406] < 1) {
    return GameRoutine_7c41f0((__int64)result, v4, v5);
  }
  v6 = result[15368];
  v7 = result[15369];
  if (v4 < v6) {
    v6 = v4;
  }
  if (v5 < v7) {
    v7 = v5;
  }
  result[15368] = v6;
  result[15369] = v7;
  v8 = result[15370];
  v9 = result[15371];
  if (v8 <= v4) {
    v8 = v4;
  }
  if (v9 <= v5) {
    v9 = v5;
  }
  result[15370] = v8;
  result[15371] = v9;
  v10 = &result[(v4 + 32 * v5) >> 5];
  v10[15372] |= 1 << v4;
  return result;
}

__int64 EntityObject_816c80(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 8);
  if (*(_BYTE*)(result + 8) == 1) {
    if ((*(_BYTE*)(v3 + 289) & *(_BYTE*)(v3 + 288) & 1) != 0) {
      while ((*(_BYTE*)(v3 + 300) & 0xFD) != 1) {
        v3 = *(_QWORD*)(v3 + 736);
        if (v3 == 0) {
          v4 = 1;
          goto LABEL_16;
        }
        if (*(_BYTE*)(v3 + 289) != 1 || *(_BYTE*)(v3 + 288) != 1) {
          return result;
        }
      }
    }
  }
  else if ((*(_BYTE*)(v3 + 289) & *(_BYTE*)(v3 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v3 + 300) & 0xFD) != 1) {
      v3 = *(_QWORD*)(v3 + 736);
      if (v3 == 0) {
        v4 = 2;
      LABEL_16:
        *(_DWORD*)(v2 + 84) = v4;
        *(_BYTE*)(v2 + 72) = 1;
        *(_QWORD*)(v2 + 76) = 0x41F0000041F00000LL;
        return result;
      }
      if (*(_BYTE*)(v3 + 289) != 1 || *(_BYTE*)(v3 + 288) != 1) {
        return result;
      }
    }
  }
  return result;
}

__int64 EntityObject_816d70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  __int64 result;
  struct {
    __int64 (**v11)();
    int v12;
    char gap12_[20];
    __int64 (***v13)();
  } v11_;

  v1 = *(_QWORD*)(a1 + 152);
  GameRoutine_989ea0(*(_QWORD*)(v1 + 56), *(_DWORD*)(v1 + 96),
                     *(_QWORD*)(v1 + 64));
  v2 = *(_DWORD*)(v1 + 96);
  v3 = *(_QWORD*)(v1 + 64);
  v11_.v11 = GameData_1f9de40;
  v11_.v13 = &v11_.v11;
  v11_.v12 = v2;
  GameRoutine_8162a0(v3, (__int64)&v11_.v11);
  GameRoutine_8162a0(*(_QWORD*)(v1 + 72), (__int64)&v11_.v11);
  if (v11_.v13 == &v11_.v11) {
    v4 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_6;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v11_.v13)[v4])((__int64)v11_.v13);
LABEL_6:
  (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v1 + 160LL))(v1, 0, 1);
  v5 = *(_QWORD*)(v1 + 80);
  if (v5 != 0) {
    (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v5 + 160LL))(v5, 0, 1);
  }
  v6 = 0x0.0p+0f;
  if (*(_DWORD*)(v1 + 96) == 2) {
    v7 = 0x0.0p+0f;
  }
  else {
    v7 = 0x1.0000000000000p+0f;
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
  if (v8 != 0 && *(_BYTE*)(v8 + 144) == 0) {
    v6 = 0x1.0000000000000p-3f;
  }
  v9 = *(unsigned __int8*)(v1 + 144);
  *(float*)&v11_.v11 = v7;
  if (v9 == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(v1 + 120) +
                                                     24LL))(v1 + 120, v7, v7);
    *(_DWORD*)(v1 + 128) = 0;
  LABEL_19:
    *(_DWORD*)(v1 + 132) = 0;
    *(_WORD*)(v1 + 144) = 256;
    return result;
  }
  if (v6 < *(float*)(v1 + 128) ||
      ((result = (*(__int64 (**)(__int64, __int64 (***)(void), __int64))(
            *(_QWORD*)(v1 + 120) + 8LL))(v1 + 120, &v11_.v11, v1 + 152)) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v1 + 120) + 16LL))(v1 + 120);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 120) + 24LL))(v1 + 120);
    *(float*)(v1 + 128) = v6;
    goto LABEL_19;
  }
  return result;
}

__int64 EntityObject_816f20(__int64 a1)
{
  __int64 v1;
  int v2;
  float v3;
  __int64 v4;
  float v5;
  int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  float v10;

  v1 = *(_QWORD*)(a1 + 152);
  v2 = *(_DWORD*)(v1 + 96);
  if (v2 == 2) {
    v3 = 0.0;
  }
  else if (v2 == 1) {
    if (*(_QWORD*)(v1 + 80) != 0) {
      v3 = 0.0;
    }
    else {
      v3 = 1.0;
    }
  }
  else {
    v3 = 1.0;
  }
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v1 + 144LL))(*(_QWORD*)(a1 + 152));
  if (v4 != 0 && *(_BYTE*)(v4 + 144) == 0) {
    v5 = 0.125;
  }
  else {
    v5 = 0.0;
  }
  v6 = *(unsigned __int8*)(v1 + 144);
  v10 = v3;
  if (v6 == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(v1 + 120) +
                                                     24LL))(v1 + 120, v3, v3);
    *(_DWORD*)(v1 + 128) = 0;
  }
  else {
    if (v5 >= *(float*)(v1 + 128)) {
      result = (*(__int64 (**)(__int64, float*, __int64))(
          *(_QWORD*)(v1 + 120) + 8LL))(v1 + 120, &v10, v1 + 152);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 120) + 16LL))(v1 + 120);
      v8 = *(_QWORD*)(v1 + 120);
      v9 = v1 + 120;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 120) + 16LL))(v1 + 120);
      v8 = *(_QWORD*)(v1 + 120);
      v9 = v1 + 120;
    }
    result = (*(__int64 (**)(__int64))(v8 + 24))(v9);
    *(float*)(v1 + 128) = v5;
  }
  *(_DWORD*)(v1 + 132) = 0;
  *(_WORD*)(v1 + 144) = 256;
  return result;
}

__int64 EntityObject_817060(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 152) + 208LL))(
      *(_QWORD*)(a1 + 152));
}

__int64* EntityObject_817440(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* result;
  long double v4;
  _QWORD v5[2];

  if (((unsigned __int8)MapAnimModule_c08ee0(a1, (__int64)"Done", 4, 0) & 1) !=
          0 ||
      (MapAnimModule_c09040(a1, (__int64)"Done", 4) & 1) != 0) {
    goto LABEL_11;
  }
  v5[0] = "Done";
  v5[1] = 4;
  v2 = GameRoutine_c0b080((_QWORD*)(a1 + 64), v5);
  if (v2 != nullptr && (v2[8] != 0 || v2[9] != 0 || v2[10] != 0 ||
                        v2[11] != 0 || v2[12] != 0) ||
      (v5[0] = "Done", v5[1] = 4,
       (result = GameRoutine_c0b220((_QWORD*)(a1 + 104), v5)) != nullptr)) {
    MapAnimModule_c08540(a1, (__int64)"Done", 4, 0, 0x0.0p+0f);
    *(_QWORD*)&v4 = 0;
    MapAnimModule_c09420(a1, 0, v4);
    MapAnimModule_c09200(a1, 0, 0x0.0p+0f);
  LABEL_11:
    MapAnimModule_c09200(a1, 0, 0x1.0000000000000p+0f);
    return (__int64*)MapAnimModule_c096a0(a1, 0);
  }
  return result;
}

__int64* EntityObject_817560(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64* result;
  long double v4;
  long double v5;
  _QWORD v6[2];

  if (((unsigned __int8)MapAnimModule_c08ee0(a1, (__int64)"Done", 4, 0) & 1) !=
          0 ||
      (MapAnimModule_c09040(a1, (__int64)"Done", 4) & 1) != 0) {
    goto LABEL_11;
  }
  v6[0] = "Done";
  v6[1] = 4;
  v2 = GameRoutine_c0b080((_QWORD*)(a1 + 64), v6);
  if (v2 != nullptr && (v2[8] != 0 || v2[9] != 0 || v2[10] != 0 ||
                        v2[11] != 0 || v2[12] != 0) ||
      (v6[0] = "Done", v6[1] = 4,
       (result = GameRoutine_c0b220((_QWORD*)(a1 + 104), v6)) != nullptr)) {
    MapAnimModule_c08540(a1, (__int64)"Done", 4, 0, 0x0.0p+0f);
    *(_QWORD*)&v4 = 0;
    MapAnimModule_c09420(a1, 0, v4);
    MapAnimModule_c09200(a1, 0, 0x0.0p+0f);
  LABEL_11:
    MapAnimModule_c09200(a1, 0, -0x1.0000000000000p+0f);
    *(_QWORD*)&v5 = 0;
    return (__int64*)MapAnimModule_c09420(a1, 0, v5);
  }
  return result;
}

void EntityObject_ProcState_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  float v6;
  _QWORD* v7;
  __int64 v8;
  float v9;
  float v10;
  char v11;
  float v12;
  float v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  int v17;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      v8 = *(_QWORD*)(a1 + 152);
      v9 = *(float*)(v8 + 128);
      v13 = *(float*)(v8 + 132);
      v11 = *(_BYTE*)(v8 + 145);
      *(_BYTE*)(v8 + 145) = 0;
      if (v13 < v9) {
        goto LABEL_14;
      }
      goto LABEL_25;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_15;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) != 0x1.0000000000000p+0f) {
  LABEL_15:
    v7 = (_QWORD*)(a1 + 152);
    v8 = *(_QWORD*)(a1 + 152);
    v9 = *(float*)(v8 + 128);
    v10 = *(float*)(v8 + 132);
    v11 = *(_BYTE*)(v8 + 145);
    *(_BYTE*)(v8 + 145) = 0;
  LABEL_16:
    if (v10 >= v9) {
      if ((v11 & 1) == 0) {
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7) & 1) != 0) {
          return;
        }
        goto LABEL_27;
      }
    }
    else {
      v12 = v10 + (**(float (***)(__int64))(v8 + 120))(v8 + 120);
      if (*(float*)(v8 + 128) < v12) {
        v12 = *(float*)(v8 + 128);
      }
      *(float*)(v8 + 132) = v12;
    }
    game_map__8178c0((_QWORD*)v8);
    return;
  }
  LODWORD(v6) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                                v4 + 160, *((float*)&v5 + 3)))
                    .n128_u32[3];
  v7 = (_QWORD*)(a1 + 152);
  v8 = *(_QWORD*)(a1 + 152);
  v9 = *(float*)(v8 + 128);
  v10 = *(float*)(v8 + 132);
  v11 = *(_BYTE*)(v8 + 145);
  *(_BYTE*)(v8 + 145) = 0;
  if (v6 != 0x1.0000000000000p+0f) {
    goto LABEL_16;
  }
  if (v10 < v9) {
  LABEL_14:
    *(float*)(v8 + 132) = v9;
  LABEL_26:
    game_map__8178c0((_QWORD*)v8);
    goto LABEL_27;
  }
LABEL_25:
  if ((v11 & 1) != 0) {
    goto LABEL_26;
  }
LABEL_27:
  v14 = *(unsigned __int8**)(a1 + 16);
  if (v14 != nullptr) {
    v15 = *v14;
    v16 = v15 > 0x10;
    v17 = (1 << v15) & 0x1CE00;
    if (!v16 && v17 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(a1 + 136) |= 8u;
}

__int64 game_map_anonymous_EntityObject_Immediate_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 k;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 j;
  __int64 v29;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*(_BYTE*)(v2 + 95) == 1) {
    v9 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v9 + 289) == 1 && (*(_BYTE*)(v9 + 288) & 1) != 0) {
      while ((*(_BYTE*)(v9 + 300) & 0xFD) != 1) {
        v9 = *(_QWORD*)(v9 + 736);
        if (v9 == 0) {
          if (*(_DWORD*)(result + 84) != 0) {
            *(_BYTE*)(result + 72) = 0;
            *(_DWORD*)(result + 84) = 0;
            *(_QWORD*)(result + 76) = 0;
          }
          v10 = *(_QWORD*)(result + 24);
          for (i = *(_QWORD*)(result + 32); v10 != i; v10 += 128) {
            v12 = *(__int64**)(v10 + 8);
            v13 = *v12;
            if (*v12 != 0 && *(_DWORD*)(v13 + 16) == *((_DWORD*)v12 + 2)) {
              *(_BYTE*)(v13 + 33) = 1;
              v14 = *(__int64**)(v10 + 8);
              v15 = *v14;
              if (*v14 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)v14 + 2)) {
                v16 = *(_DWORD*)(v15 + 36);
                if (v16 >= 1) {
                  if ((unsigned int)v16 >= 8) {
                    v18 = (_QWORD*)(v15 + 48);
                    v19 = 0;
                    do {
                      v20 = v19;
                      if (v19 < *(int*)(v15 + 36)) {
                        v21 = *(v18 - 1);
                        if (v21 != 0) {
                          *(_DWORD*)(v21 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 1 < *(int*)(v15 + 36) && *v18 != 0) {
                        *(_DWORD*)(*v18 + 220LL) = 1065353216;
                      }
                      if (v20 + 2 < *(int*)(v15 + 36)) {
                        v22 = v18[1];
                        if (v22 != 0) {
                          *(_DWORD*)(v22 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 3 < *(int*)(v15 + 36)) {
                        v23 = v18[2];
                        if (v23 != 0) {
                          *(_DWORD*)(v23 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 4 < *(int*)(v15 + 36)) {
                        v24 = v18[3];
                        if (v24 != 0) {
                          *(_DWORD*)(v24 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 5 < *(int*)(v15 + 36)) {
                        v25 = v18[4];
                        if (v25 != 0) {
                          *(_DWORD*)(v25 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 6 < *(int*)(v15 + 36)) {
                        v26 = v18[5];
                        if (v26 != 0) {
                          *(_DWORD*)(v26 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 7 < *(int*)(v15 + 36)) {
                        v27 = v18[6];
                        if (v27 != 0) {
                          *(_DWORD*)(v27 + 220) = 1065353216;
                        }
                      }
                      v18 += 8;
                      v19 = v20 + 8;
                    } while (v20 + 8 != (v16 & 0x7FFFFFF8));
                    v17 = v20 + 8;
                  }
                  else {
                    v17 = 0;
                  }
                  for (j = v16 & 7; j != 0; --j) {
                    if (v17 < *(int*)(v15 + 36)) {
                      v29 = *(_QWORD*)(v15 + 40 + 8 * v17);
                      if (v29 != 0) {
                        *(_DWORD*)(v29 + 220) = 1065353216;
                      }
                    }
                    ++v17;
                  }
                }
              }
            }
            else {
              *(_BYTE*)(v10 + 36) = 1;
            }
          }
          return result;
        }
        if (*(_BYTE*)(v9 + 289) != 1 || *(_BYTE*)(v9 + 288) != 1) {
          return result;
        }
      }
    }
  }
  else {
    v4 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v4 + 289) == 1 && (*(_BYTE*)(v4 + 288) & 1) != 0) {
      while ((*(_BYTE*)(v4 + 300) & 0xFD) != 1) {
        v4 = *(_QWORD*)(v4 + 736);
        if (v4 == 0) {
          if (*(_DWORD*)(result + 84) != 0) {
            *(_BYTE*)(result + 72) = 0;
            *(_DWORD*)(result + 84) = 0;
            *(_QWORD*)(result + 76) = 0;
          }
          v5 = *(_QWORD*)(result + 24);
          for (k = *(_QWORD*)(result + 32); v5 != k; v5 += 128) {
            v7 = *(__int64**)(v5 + 8);
            v8 = *v7;
            if (*v7 != 0 && *(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
              *(_BYTE*)(v8 + 33) = 0;
            }
            else {
              *(_BYTE*)(v5 + 36) = 1;
            }
          }
          return result;
        }
        if (*(_BYTE*)(v4 + 289) != 1 || *(_BYTE*)(v4 + 288) != 1) {
          return result;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
