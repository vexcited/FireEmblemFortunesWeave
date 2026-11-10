#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_8b0ee0();
__int64 GameRoutine_8b11c0();
__int64 GameRoutine_8b14e0();
__int64 ItemSeq_8af940_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("ItemSeq_8af940");
__int64 MapInfo_825040(_QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 SendUnitItemMenu_8ae490(unsigned __int16*, __int64, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__int64** GameRoutine_8aef60(__int64, unsigned __int16*);
bool GameRoutine_8ae640(__int64*, __int64, char);
extern _UNKNOWN GameData_21f18e8;
extern __int64 (*GameData_1fa8d20[])();
extern __int64 (*GameData_1fa92c8[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21f17f0;
extern __int64 GameData_21f17f8;
extern __int64 GameData_21f1800;
extern __int64 GameData_21f1810;
extern __int64 GameData_21f1820;
extern __int64 GameData_21f1830;
extern __int64 GameData_21f1838;
extern __int64 GameData_21f1840;
extern __int64 GameData_21f1850;
extern __int64 GameData_21f1860;
extern __int64 GameData_21f1870;
extern __int64 GameData_21f1878;
extern __int64 GameData_21f1880;
extern __int64 GameData_21f1890;
extern __int64 GameData_21f18a0;
extern __int64 GameData_21f18b0;
extern __int64 GameData_21f18b8;
extern __int64 GameData_21f18c0;
extern __int64 GameData_21f18d0;
extern __int64 GameData_21f18e0;
extern __int64 GameData_21f18f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cff8[3];
extern char GameData_1a9f09e;
extern char GameData_21f17e8;
extern char GameData_21f1828;
extern char GameData_21f1868;
extern char GameData_21f18a8;
extern int GameData_21f1808;
extern int GameData_21f1818;
extern int GameData_21f1848;
extern int GameData_21f1858;
extern int GameData_21f1888;
extern int GameData_21f1898;
extern int GameData_21f18c8;
extern int GameData_21f18d8;
void __attribute__((noreturn)) GameRoutine_6f26d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_ItemSeq_GainBind(__int64 a1, __int64** a2, __int64 a3, __int64* a4,
                              __int64* a5);
__int64 ItemSeq_8af860(__int64 a1, unsigned __int16* a2, int a3, __int64 a4,
                       __int64 a5);
__int64 ItemSeq_8af940(__int64 a1, __int64* a2, __int64 a3, char** a4,
                       char** a5, char a6);
__int64 game_ItemSeq_GainBind_lambda0_Invoke_8b3b10(__int64 a1, __int64* a2);
__int64** game_ItemSeq_GainBind_lambda0_Invoke_8b3c90(__int64** result,
                                                      unsigned __int16* a2);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__int64** game_8aef60(__int64**, unsigned __int16*);
__int64 GameRoutine_6c6da0(__int64);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_UnitActor_TryReload(_QWORD*);
__int64 game_UnitItemList_RemoveDiscarded(unsigned __int16*);
__int64 game_Unit_DrawPersonLottery(__int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fa9348[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 game_ItemSeq_GainBind_8afdf0(__int64 a1, __int64 a2, __int64 a3);

__int64 game_ItemSeq_GainBind(__int64 a1, __int64** a2, __int64 a3, __int64* a4,
                              __int64* a5)
{
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64** v11;
  unsigned int v12;
  __int64 v13;
  __int64** v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD v24[6];

  if (a3 == 0) {
    return ItemSeq_8af940_alt1(a1, a2, a3, a4, a5, 0);
  }
  v8 = *a2;
  v9 = a2[1];
  if (*a2 == v9) {
    return ItemSeq_8af940_alt1(a1, a2, a3, a4, a5, 0);
  }
  v10 = a1;
  v11 = a2;
  v12 = 0;
  do {
    v13 = *v8++;
    v24[0] = v13;
    v12 += (unsigned __int8)(SendUnitItemMenu_8ae490((unsigned __int16*)v24, a3,
                                                     0) &
                             0x82) >>
           1;
  } while (v8 != v9);
  a2 = v11;
  a1 = v10;
  if (v12 < 2) {
    return ItemSeq_8af940_alt1(a1, a2, a3, a4, a5, 0);
  }
  v14 = v11;
  v15 = ProcList_9bd480(v10);
  v16 = *v11;
  v17 = v11[1];
  v18 = v15;
  if (*v14 != v17) {
    do {
      v19 = *v16++;
      v20 = *a4;
      v21 = *a5;
      v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v22[2] = a3;
      v22[3] = v20;
      v22[4] = v21;
      v24[4] = v22;
      *v22 = GameData_1fa92c8;
      v22[1] = v19;
      game_ProcList_Call_9bcfa0(v18, v24);
      (*(void (**)(_QWORD*))(*v22 + 40LL))(v22);
    } while (v16 != v17);
  }
  return v18;
}

__int64 ItemSeq_8af860(__int64 a1, unsigned __int16* a2, int a3, __int64 a4,
                       __int64 a5)
{
  int v5;
  int v9;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = a3 - 1;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  if (a3 >= 1) {
    v9 = *a2;
    if (*a2 != 0) {
      while (1) {
        if (v9 != 0) {
          GameRoutine_8aef60((__int64)&v14, a2);
        }
        if (v5 == 0) {
          break;
        }
        v9 = *a2;
        --v5;
      }
    }
  }
  result = ItemSeq_8af940_alt1(a1, &v14, 0, a4, a5, 0);
  if (v14 != 0) {
    v15 = v14;
    v12 = result;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
    return v12;
  }
  return result;
}

__int64 ItemSeq_8af940(__int64 a1, __int64* a2, __int64 a3, char** a4,
                       char** a5, char a6)
{
  unsigned __int16* v6;
  unsigned __int16* v7;
  int v8;
  __int64* v10;
  char** v11;
  char** v12;
  char v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  char* v20;
  signed __int64 v21;
  _QWORD* v22;
  __int64 v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  float v37;
  __int64 v38;
  _BYTE* v39;
  char v40;
  __int64 v41;
  char v42;
  char** v43;
  char** v44;
  __int64* v45;
  int v46;
  int v47;
  __int64 v48;

  v7 = (unsigned __int16*)*a2;
  v6 = (unsigned __int16*)a2[1];
  if (v6 == (unsigned __int16*)*a2) {
    return 0;
  }
  while (1) {
    v8 = *v7;
    v7 += 4;
    if (v8 != 0) {
      break;
    }
    if (v7 == v6) {
      return 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f18e8,
                            memory_order_acquire) &
       1) == 0) {
    v41 = a1;
    v42 = a6;
    v43 = a5;
    v44 = a4;
    v45 = a2;
    v46 = __cxa_guard_acquire(&GameData_21f18e8);
    a2 = v45;
    a4 = v44;
    a5 = v43;
    a6 = v42;
    v47 = v46;
    a1 = v41;
    if (v47 != 0) {
      GameData_21f17e8 = 13;
      GameData_21f17f0 = 0;
      GameData_21f17f8 = (__int64)GameRoutine_8b0ee0;
      GameData_21f1828 = 13;
      GameData_21f1868 = 13;
      GameData_21f1800 = 0;
      GameData_21f1808 = 0;
      GameData_21f1810 = 0;
      GameData_21f1818 = 0;
      GameData_21f1820 = 0;
      GameData_21f1840 = 0;
      GameData_21f1848 = 0;
      GameData_21f1850 = 0;
      GameData_21f1858 = 0;
      GameData_21f1830 = 0;
      GameData_21f1838 = (__int64)GameRoutine_8b11c0;
      GameData_21f1860 = 0;
      GameData_21f1870 = 0;
      GameData_21f1878 = (__int64)GameRoutine_8b14e0;
      GameData_21f1880 = 0;
      GameData_21f1888 = 0;
      GameData_21f1890 = 0;
      GameData_21f1898 = 0;
      GameData_21f18a0 = 0;
      GameData_21f18a8 = 0;
      GameData_21f18d0 = 0;
      GameData_21f18d8 = 0;
      GameData_21f18e0 = 0;
      GameData_21f18c8 = 0;
      GameData_21f18b8 = 0;
      GameData_21f18c0 = 0;
      GameData_21f18b0 = 0;
      __cxa_guard_release(&GameData_21f18e8);
      a2 = v45;
      a4 = v44;
      a5 = v43;
      a6 = v42;
      a1 = v41;
    }
  }
  if (a1 == 0) {
    GameRoutine_8ae640(a2, a3, a6 & 1);
    return 0;
  }
  v48 = a1;
  v10 = a2;
  v11 = a4;
  v12 = a5;
  v13 = a6;
  v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       264, 16, 0);
  v16 = GameData_212c608[0];
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 96) = 0;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_QWORD*)(v15 + 128) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = "NULL";
  *(_QWORD*)(v15 + 32) = 0;
  v17 = (_QWORD*)(v15 + 32);
  *(_QWORD*)(v15 + 138) = 0;
  *(_QWORD*)(v15 + 144) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)v15 = v16 + 16;
  *(_QWORD*)(v15 + 8) = 0;
  v18 = game_ProcInst_Register(v15);
  v19 = (char*)*v10;
  v20 = (char*)v10[1];
  *(_QWORD*)(v15 + 152) = 0;
  *(_QWORD*)(v15 + 160) = 0;
  v21 = v20 - v19;
  GameData_21f18f0 = v15;
  *(_QWORD*)v15 = GameData_1fa8d20;
  *(_QWORD*)(v15 + 168) = 0;
  if (v20 != v19) {
    if (v21 < 0) {
      GameRoutine_6f26d0(v18);
    }
    v22 = (_QWORD*)fw_memory_HeapManager_Allocate(*v14, v20 - v19, 16, 0);
    *(_QWORD*)(v15 + 152) = v22;
    *(_QWORD*)(v15 + 160) = v22;
    *(_QWORD*)(v15 + 168) = (char*)v22 + v21;
    do {
      v23 = *(_QWORD*)v19;
      v19 += 8;
      *v22++ = v23;
    } while (v19 != v20);
    *(_QWORD*)(v15 + 160) = v22;
  }
  v24 = *v11;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = a3;
  if (v24 != nullptr) {
    v25 = v24;
  }
  else {
    v25 = &GameData_1a9f09e;
  }
  v26 = strlen(v25);
  if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_53:
    String_60a1d0(v26);
  }
  v27 = v26;
  if (v26 >= 0x17) {
    if ((v26 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v26 | 7) + 1;
    }
    v28 = fw_memory_HeapManager_Allocate(*v14, v30, 16, 0);
    *(_QWORD*)(v15 + 216) = v27;
    *(_QWORD*)(v15 + 224) = v28;
    *(_QWORD*)(v15 + 208) = v30 | 1;
    goto LABEL_26;
  }
  v28 = v15 + 209;
  *(_BYTE*)(v15 + 208) = 2 * v26;
  if (v26 != 0) {
  LABEL_26:
    memmove(v28, v25, v27);
  }
  *(_BYTE*)(v28 + v27) = 0;
  if (*v12 != nullptr) {
    v31 = *v12;
  }
  else {
    v31 = &GameData_1a9f09e;
  }
  v26 = strlen(v31);
  if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_53;
  }
  v32 = v26;
  if (v26 >= 0x17) {
    if ((v26 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v26 | 7) + 1;
    }
    v33 = fw_memory_HeapManager_Allocate(*v14, v34, 16, 0);
    *(_QWORD*)(v15 + 240) = v32;
    *(_QWORD*)(v15 + 248) = v33;
    *(_QWORD*)(v15 + 232) = v34 | 1;
    goto LABEL_38;
  }
  v33 = v15 + 233;
  *(_BYTE*)(v15 + 232) = 2 * v26;
  if (v26 != 0) {
  LABEL_38:
    v26 = memmove(v33, v31, v32);
  }
  *(_BYTE*)(v33 + v32) = 0;
  *(_BYTE*)(v15 + 256) = v13 & 1;
  GameRoutine_8679c0(v26);
  v35 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v36 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v36 & 0x10) == 0) {
      v37 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v36 & 0xFFFFFFE2 | 1;
      if (v37 > 0.0) {
        *(_DWORD*)(v35 + 224) = 0;
      }
    }
  }
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825040(*GameData_212cff8[0], 14);
  }
  v38 = *(_QWORD*)(v48 + 40);
  if (v38 != 0) {
    *(_QWORD*)(v38 + 48) = v15;
    *(_QWORD*)(v15 + 56) = *(_QWORD*)(v48 + 40);
  }
  *(_QWORD*)(v48 + 40) = v15;
  *(_QWORD*)(v15 + 24) = "ProcGainItemSeq";
  *(_QWORD*)(v15 + 32) = v48;
  *(_DWORD*)(v15 + 140) = game_HashString32("ProcGainItemSeq");
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 24;
  *(_QWORD*)(v15 + 80) = 1;
  *(_QWORD*)(v15 + 8) = &GameData_21f17e8;
  *(_QWORD*)(v15 + 16) = &GameData_21f17e8;
  (*(void (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 136LL))(v15) & 1) != 0 &&
      (*(_WORD*)(v15 + 136) & 0x100) == 0) {
    *(_WORD*)(v15 + 136) |= 0x100u;
  }
  v39 = (_BYTE*)*v17;
  v40 = *(_BYTE*)(*v17 + 138LL);
  if (v40 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v39 + 64LL))(*v17);
    v40 = v39[138];
  }
  v39[138] = v40 + 1;
  *(_WORD*)(v15 + 136) |= 2u;
  return v15;
}

__int64 game_ItemSeq_GainBind_8afdf0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 result;
  int v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    __int64* v21;
    __int64* v22;
    __int64 v23;
  } v21_;

  if (a2 == 0) {
    return 0;
  }
  v21_.v22 = nullptr;
  v21_.v23 = 0;
  v21_.v21 = nullptr;
  LODWORD(v19_.v19[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x24CLL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)v19_.v19) & 1) == 0) {
    v19_.v20 = v19_.v19;
    v19_.v19[0] = GameData_1fa9348;
    v19_.v19[1] = &v21_.v21;
    game_UnitItemList_EachItem((_WORD*)(a2 + 828), (__int64)v19_.v19);
    if (v19_.v20 == v19_.v19) {
      v6 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_9;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v6))((__int64)v19_.v20);
  LABEL_9:
    if ((game_UnitItemList_RemoveDiscarded((unsigned __int16*)(a2 + 828)) &
         1) != 0) {
      v8 = *(_DWORD*)(a2 + 416);
      if ((v8 & 0x10000000) == 0) {
        *(_DWORD*)(a2 + 416) = v8 | 0x10000000;
        game_6c51e0(a2);
        GameRoutine_6c6da0(a2);
        game_6c6ec0(a2);
        *(_DWORD*)(a2 + 416) &= ~0x10000000u;
      }
      game_UnitActor_TryReload((_QWORD*)a2);
    }
  }
  if (a3 != 0 && (v9 = *(_QWORD*)(a3 + 440)) != 0) {
    v10 = *(_BYTE*)(v9 + 16);
  }
  else {
    v10 = 9;
  }
  if (((1 << v10) & 0xF1) != 0) {
    v11 = game_Unit_DrawPersonLottery(a2);
    if (v11 != 0) {
      v19_.v19[0] = 0x100000000LL;
      LOWORD(v19_.v19[0]) = *(_WORD*)(v11 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * LOWORD(v19_.v19[0])) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v12 = game_map_MapRandom_instance__ptr[0];
        v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v15 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v12 + 1) = v13;
        v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v19_.v19[0]) =
            (16 * ((_WORD)v16 -
                   1000 * (unsigned __int16)((v16 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      game_8aef60(&v21_.v21, (unsigned __int16*)v19_.v19);
    }
  }
  result = game_ItemSeq_GainBind(a1, &v21_.v21, a3, game_vstring_kEmpty_ptr[0],
                                 game_vstring_kEmpty_ptr[0]);
  if (v21_.v21 != nullptr) {
    v21_.v22 = v21_.v21;
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v21_.v21);
    return v17;
  }
  return result;
}

__int64 game_ItemSeq_GainBind_lambda0_Invoke_8b3b10(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  GameRoutine_8aef60((__int64)&v6, (unsigned __int16*)(a1 + 8));
  result = ItemSeq_8af940(v2, &v6, *(_QWORD*)(a1 + 16), (char**)(a1 + 24),
                          (char**)(a1 + 32), 0);
  if (v6 != 0) {
    v7 = v6;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return result;
}

__int64** game_ItemSeq_GainBind_lambda0_Invoke_8b3c90(__int64** result,
                                                      unsigned __int16* a2)
{
  if ((*((_BYTE*)a2 + 3) & 2) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 337LL) &
       2) != 0) {
    return GameRoutine_8aef60((__int64)result[1], a2);
  }
  return result;
}

#pragma GCC visibility pop
