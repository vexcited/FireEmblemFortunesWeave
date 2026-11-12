#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1059680(_QWORD);
__int64 GameRoutine_1059960(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_20053e8[])();
extern __int64 (*GameData_2005768[])();
extern __int64 (*GameData_2005798[])();
extern __int64 (*GameData_20057e8[])();
extern __int64 (*game_AnimSetFileEv_vtable[])();
extern __int64 GameData_21c9c30;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235700;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* game_hub_g_motions;
extern int GameData_22355d0;
__int64
AnimSetFileEv_Destructor_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                              __int64 a5,
                              __int64 a6) __asm__("AnimSetFileEv_Destructor");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_1059680_alt1(_QWORD*) __asm__("GameRoutine_1059680");
void GameRoutine_1059960_alt1(_QWORD*) __asm__("GameRoutine_1059960");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AnimSetFileEv_Destructor(_QWORD* a1);

void AnimSetFileEv_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE v14[25600];

  *a1 = game_AnimSetFileEv_vtable;
  a1[1] = GameData_20053e8;
  v2 = a1 + 1;
  memset_alt1((__int64)v14, 0, 0x6400u);
  v3 = 0;
  do {
    v4 = &v14[v3];
    v3 += 320;
    *(_QWORD*)v4 = "--";
    *((_QWORD*)v4 + 1) = 0;
    v4[16] = 0;
    *(_QWORD*)(v4 + 20) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 28) = 0x42C800003E99999ALL;
    *((_QWORD*)v4 + 5) = "--";
    *((_QWORD*)v4 + 6) = 0;
    v4[56] = 0;
    *(_QWORD*)(v4 + 60) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 68) = 0x42C800003E99999ALL;
    *((_QWORD*)v4 + 10) = "--";
    *((_QWORD*)v4 + 11) = 0;
    v4[96] = 0;
    *(_QWORD*)(v4 + 100) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 108) = 0x42C800003E99999ALL;
    v4[136] = 0;
    *((_QWORD*)v4 + 15) = "--";
    *((_QWORD*)v4 + 16) = 0;
    *(_QWORD*)(v4 + 140) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 148) = 0x42C800003E99999ALL;
    *((_QWORD*)v4 + 20) = "--";
    *((_QWORD*)v4 + 21) = 0;
    v4[176] = 0;
    *(_QWORD*)(v4 + 180) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 188) = 0x42C800003E99999ALL;
    *((_QWORD*)v4 + 25) = "--";
    *((_QWORD*)v4 + 26) = 0;
    *(_QWORD*)(v4 + 260) = 0x3F3333333F800000LL;
    v4[216] = 0;
    *(_QWORD*)(v4 + 220) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 228) = 0x42C800003E99999ALL;
    *((_QWORD*)v4 + 30) = "--";
    *((_QWORD*)v4 + 31) = 0;
    v4[256] = 0;
    v4[296] = 0;
    *((_QWORD*)v4 + 35) = "--";
    *((_QWORD*)v4 + 36) = 0;
    *(_QWORD*)(v4 + 268) = 0x42C800003E99999ALL;
    *(_QWORD*)(v4 + 300) = 0x3F3333333F800000LL;
    *(_QWORD*)(v4 + 308) = 0x42C800003E99999ALL;
  } while (v3 != 25600);
  memcpy_alt1((__int64)&game_hub_g_motions, (__int64)v14, 0x6400u);
  if (GameData_2235708 != 0) {
    v5 = (_QWORD*)GameData_2235700;
    if (GameData_2235700 != 0) {
      v6 = fw_memory_g_heap_manager_ptr;
      do {
        v7 = (_QWORD*)*v5;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v8, (__int64)v5);
        v5 = v7;
      } while (v7 != nullptr);
    }
    GameData_2235700 = 0;
    if (GameData_22356f8 != 0) {
      v9 = GameData_22356f8 & 7;
      if ((unsigned __int64)GameData_22356f8 >= 8) {
        v11 = GameData_22356f8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(GameData_22356f0 + 8 * v10) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 8) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 16) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 24) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 32) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 40) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v10 + 48) = 0;
          v12 = GameData_22356f0 + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(GameData_22356f0 + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    GameData_2235708 = 0;
  }
  GameRoutine_1059960_alt1((_QWORD*)(GameData_21c9c30 + 8));
  *a1 = GameData_2005768;
  a1[1] = GameData_2005798;
  GameRoutine_1059960_alt1(v2);
  GameRoutine_1059680_alt1(v2);
  *a1 = GameData_20057e8;
  if ((_QWORD*)GameData_21c9c30 == a1) {
    GameData_21c9c30 = 0;
    GameData_22355d0 = 0;
  }
}

#pragma GCC visibility pop
