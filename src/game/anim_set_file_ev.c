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
__int64 AnimSetFileEv_Destructor(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6);
__int64 AnimSetFileEv_Destructor(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6)
{
  _QWORD* v7;
  __int64 v8;
  _BYTE* v9;
  long double v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  _BYTE v21[25600];

  *a1 = game_AnimSetFileEv_vtable;
  a1[1] = GameData_20053e8;
  v7 = a1 + 1;
  memset(v21, 0, 25600, a4, a5, a6);
  v8 = 0;
  do {
    v9 = &v21[v8];
    v8 += 320;
    *(_QWORD*)v9 = "--";
    *((_QWORD*)v9 + 1) = 0;
    v9[16] = 0;
    *(_QWORD*)(v9 + 20) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 28) = 0x42C800003E99999ALL;
    *((_QWORD*)v9 + 5) = "--";
    *((_QWORD*)v9 + 6) = 0;
    v9[56] = 0;
    *(_QWORD*)(v9 + 60) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 68) = 0x42C800003E99999ALL;
    *((_QWORD*)v9 + 10) = "--";
    *((_QWORD*)v9 + 11) = 0;
    v9[96] = 0;
    *(_QWORD*)(v9 + 100) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 108) = 0x42C800003E99999ALL;
    v9[136] = 0;
    *((_QWORD*)v9 + 15) = "--";
    *((_QWORD*)v9 + 16) = 0;
    *(_QWORD*)(v9 + 140) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 148) = 0x42C800003E99999ALL;
    *((_QWORD*)v9 + 20) = "--";
    *((_QWORD*)v9 + 21) = 0;
    v9[176] = 0;
    *(_QWORD*)(v9 + 180) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 188) = 0x42C800003E99999ALL;
    *((_QWORD*)v9 + 25) = "--";
    *((_QWORD*)v9 + 26) = 0;
    *(_QWORD*)(v9 + 260) = 0x3F3333333F800000LL;
    v9[216] = 0;
    *(_QWORD*)(v9 + 220) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 228) = 0x42C800003E99999ALL;
    *((_QWORD*)v9 + 30) = "--";
    *((_QWORD*)v9 + 31) = 0;
    v9[256] = 0;
    v9[296] = 0;
    *((_QWORD*)v9 + 35) = "--";
    *((_QWORD*)v9 + 36) = 0;
    *(_QWORD*)(v9 + 268) = 0x42C800003E99999ALL;
    *(_QWORD*)(v9 + 300) = 0x3F3333333F800000LL;
    *(_QWORD*)(v9 + 308) = 0x42C800003E99999ALL;
  } while (v8 != 25600);
  memcpy(&game_hub_g_motions, v21, 25600);
  if (GameData_2235708 != 0) {
    v11 = (_QWORD*)GameData_2235700;
    if (GameData_2235700 != 0) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v11;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v10);
        v11 = v13;
      } while (v13 != nullptr);
    }
    GameData_2235700 = 0;
    if (GameData_22356f8 != 0) {
      v15 = GameData_22356f8 & 7;
      if ((unsigned __int64)GameData_22356f8 >= 8) {
        v17 = GameData_22356f8 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_22356f0 + 8 * v16) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_22356f0 + 8 * v16 + 48) = 0;
          v18 = GameData_22356f0 + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(GameData_22356f0 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_2235708 = 0;
  }
  GameRoutine_1059960(GameData_21c9c30 + 8);
  *a1 = GameData_2005768;
  a1[1] = GameData_2005798;
  GameRoutine_1059960(v7);
  result = GameRoutine_1059680(v7);
  *a1 = GameData_20057e8;
  if ((_QWORD*)GameData_21c9c30 == a1) {
    GameData_21c9c30 = 0;
    GameData_22355d0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
