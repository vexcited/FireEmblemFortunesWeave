#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 (*ui_control_AsyncLoadImage_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AsyncLoadImage_8b7610(__int64 a1);
__int64 AsyncLoadImage_8b7620(__int64 a1);
__int64 AsyncLoadImage_17e5490(__int64 a1);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 AsyncLoadImage_17e51e0();
__int64 AsyncLoadImage_17e5360();
__int64 GameRoutine_17e5340();
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 Pane_58f8a0(__int64);
__int64 fs_Manager_createFileAsync_fs_BntxFile(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_226b108;
extern __int64 (*ui_control_AsyncLoadImage_ProcAsyncLoadWait_vtable[])();
extern __int64* GameData_212c628;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_22416e0;
extern __int64 GameData_226b010;
extern __int64 GameData_226b018;
extern __int64 GameData_226b020;
extern __int64 GameData_226b030;
extern __int64 GameData_226b040;
extern __int64 GameData_226b050;
extern __int64 GameData_226b058;
extern __int64 GameData_226b060;
extern __int64 GameData_226b070;
extern __int64 GameData_226b080;
extern __int64 GameData_226b090;
extern __int64 GameData_226b098;
extern __int64 GameData_226b0a0;
extern __int64 GameData_226b0b0;
extern __int64 GameData_226b0c0;
extern __int64 GameData_226b0d0;
extern __int64 GameData_226b0d8;
extern __int64 GameData_226b0e0;
extern __int64 GameData_226b0f0;
extern __int64 GameData_226b100;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_226b008;
extern char GameData_226b048;
extern char GameData_226b088;
extern char GameData_226b0c8;
extern int GameData_226b028;
extern int GameData_226b038;
extern int GameData_226b068;
extern int GameData_226b078;
extern int GameData_226b0a8;
extern int GameData_226b0b8;
extern int GameData_226b0e8;
extern int GameData_226b0f8;
int __cxa_guard_acquire(__int64);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen(const char*);
void __cxa_guard_release(__int64);
__int64 AsyncLoadImage_17e4db0(__int64 result, const char* a2, char a3);

__int64 AsyncLoadImage_8b7610(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadImage_8b7620(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 40LL))(a1, 0);
}

__int64 AsyncLoadImage_17e4db0(__int64 result, const char* a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  float v25;
  struct {
    _QWORD v26[3];
    __int64 v27;
    __int64 v28;
    int v29;
  } v26_;

  if (*(_QWORD*)(result + 184) != 0) {
    v5 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 152LL))(result);
    v6 = *(_QWORD*)(v5 + 208);
    if (v6 != 0) {
      GameRoutine_634d80_alt1(*(_QWORD*)(v6 + 8), v6);
      *(_QWORD*)(v5 + 208) = 0;
    }
    result = *(_QWORD*)(v5 + 200);
    if (result != 0) {
      if ((*(_WORD*)(result + 136) & 1) == 0) {
        result = (__int64)ProcInst_657a50_alt1(result, 1);
      }
      *(_QWORD*)(v5 + 200) = 0;
    }
    if (a2 != nullptr) {
      v7 = snd_g_fileIndex_ptr[0];
      v8 = *snd_g_fileIndex_ptr[0];
      v9 = strlen(a2);
      result = fs_6360e0(v8, (__int64)a2, v9, 0, 0);
      if ((result & 1) != 0) {
        v10 = *v7;
        *(_BYTE*)(v5 + 240) = 1;
        v26_.v26[0] = a2;
        v26_.v26[1] = strlen(a2);
        v26_.v26[2] = 0;
        v26_.v27 = 0;
        v26_.v29 = 0;
        v26_.v28 = GameData_22416e0;
        v11 = fs_Manager_createFileAsync_fs_BntxFile(v10, (__int64)v26_.v26);
        if (v26_.v27 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v26_.v27);
        }
        *(_QWORD*)(v5 + 208) = v11;
        nn_os_AcquireReadLock(v11 + 696);
        v12 = *(_DWORD*)(v11 + 656);
        nn_os_ReleaseReadLock(v11 + 696);
        if ((v12 & 8) != 0) {
          v17 = *(__int64**)(GameRoutine_5fc1f0(
                                 *(_QWORD*)(*(_QWORD*)(v5 + 208) + 592LL)) +
                             40);
          v18 = *(_QWORD*)(v5 + 184);
          v19 = *v17;
          *(_QWORD*)(v5 + 224) = *(_QWORD*)(v19 + 144);
          *(_DWORD*)(v5 + 192) =
              *(unsigned __int16*)(v19 + 36) | (*(_DWORD*)(v19 + 40) << 16);
          v20 = Pane_58f8a0(v18);
          if (v20 != 0) {
            *(_QWORD*)(*(_QWORD*)(v20 + 24) + 8LL) = v5 + 216;
          }
          (*(void (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
          v21 = *(_QWORD*)(v5 + 200);
          *(_BYTE*)(v5 + 240) = 0;
          if (v21 != 0 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 168LL))(v5) & 1) == 0) {
            if ((v22 = *(_QWORD*)(v5 + 200),
                 game_ProcGameSkipView_instance_ == 0) ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v23 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v24 = 2)
                     : (v24 = 3),
                 (v24 & v23) != 0)) {
              v25 = *(float*)(v22 + 144);
              if (v25 < 0x1.0000000000000p+0f) {
                v25 = 0x1.0000000000000p+0f;
              }
              *(_WORD*)(v22 + 136) = *(_WORD*)(v22 + 136) & 0xFF97 | 0x20;
              *(float*)(v22 + 144) = v25;
            }
          }
          return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5);
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b108,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_226b108) != 0) {
            GameData_226b008 = 15;
            GameData_226b020 = 0;
            GameData_226b028 = 0;
            GameData_226b030 = 0;
            GameData_226b038 = 0;
            GameData_226b040 = 0;
            GameData_226b050 = 0;
            GameData_226b058 = (__int64)GameRoutine_17e5340;
            GameData_226b060 = 0;
            GameData_226b068 = 0;
            GameData_226b070 = 0;
            GameData_226b078 = 0;
            GameData_226b080 = 0;
            GameData_226b0a0 = 0;
            GameData_226b0a8 = 0;
            GameData_226b0b0 = 0;
            GameData_226b010 = 0;
            GameData_226b018 = (__int64)AsyncLoadImage_17e51e0;
            GameData_226b0b8 = 0;
            GameData_226b0c0 = 0;
            GameData_226b0c8 = 0;
            GameData_226b0f0 = 0;
            GameData_226b0f8 = 0;
            GameData_226b100 = 0;
            GameData_226b0e8 = 0;
            GameData_226b0d8 = 0;
            GameData_226b0e0 = 0;
            GameData_226b0d0 = 0;
            GameData_226b048 = 13;
            GameData_226b088 = 13;
            GameData_226b090 = 0;
            GameData_226b098 = (__int64)AsyncLoadImage_17e5360;
            __cxa_guard_release((__int64)&GameData_226b108);
          }
          v13 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 168, 16, 0);
          v14 = GameData_212c608[0];
          *(_QWORD*)(v13 + 96) = 0;
          *(_QWORD*)(v13 + 104) = 0;
          *(_QWORD*)(v13 + 112) = 0;
          *(_QWORD*)(v13 + 120) = 0;
          *(_QWORD*)(v13 + 128) = 0;
          *(_WORD*)(v13 + 136) = 0;
          *(_QWORD*)(v13 + 16) = 0;
          *(_QWORD*)(v13 + 24) = "NULL";
          *(_QWORD*)(v13 + 138) = 0;
          *(_QWORD*)(v13 + 144) = 0;
          *(_QWORD*)(v13 + 32) = 0;
          *(_QWORD*)(v13 + 40) = 0;
          *(_QWORD*)(v13 + 48) = 0;
          *(_QWORD*)(v13 + 56) = 0;
          *(_QWORD*)(v13 + 64) = 0;
          *(_QWORD*)(v13 + 72) = 0;
          *(_QWORD*)(v13 + 80) = 0;
          *(_QWORD*)(v13 + 88) = 0;
          *(_QWORD*)v13 = v14 + 16;
          *(_QWORD*)(v13 + 8) = 0;
          result = game_ProcInst_Register(v13);
          *(_QWORD*)(v13 + 152) = v5;
          *(_BYTE*)(v13 + 160) = a3 & 1;
          *(_QWORD*)v13 = ui_control_AsyncLoadImage_ProcAsyncLoadWait_vtable;
          v15 =
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628);
          if (v15 != 0) {
            v16 = *(_QWORD*)(v15 + 40);
            if (v16 != 0) {
              *(_QWORD*)(v16 + 48) = v13;
              *(_QWORD*)(v13 + 56) = *(_QWORD*)(v15 + 40);
            }
            *(_QWORD*)(v15 + 40) = v13;
            *(_QWORD*)(v13 + 24) = "ProcAsyncLoadWait";
            *(_QWORD*)(v13 + 32) = v15;
            *(_DWORD*)(v13 + 140) =
                (unsigned int)game_HashString32("ProcAsyncLoadWait");
            *(_QWORD*)(v13 + 64) = 0;
            *(_QWORD*)(v13 + 72) = 24;
            *(_QWORD*)(v13 + 80) = 1;
            *(_QWORD*)(v13 + 8) = &GameData_226b008;
            *(_QWORD*)(v13 + 16) = &GameData_226b008;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13);
            if ((result & 1) != 0 && (*(_WORD*)(v13 + 136) & 0x100) == 0) {
              *(_WORD*)(v13 + 136) |= 0x100u;
            }
          }
          else if ((*(_WORD*)(v13 + 136) & 1) == 0) {
            result = (__int64)ProcInst_657a50_alt1(v13, 1);
          }
          *(_QWORD*)(v5 + 200) = v13;
        }
      }
    }
  }
  return result;
}

__int64 AsyncLoadImage_17e5490(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = ui_control_AsyncLoadImage_vtable;
  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1);
  }
  v3 = *(_QWORD*)(a1 + 208);
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8));
    *(_QWORD*)(a1 + 208) = 0;
  }
  LayoutAccessor_155e140(a1 + 80);
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 64);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
