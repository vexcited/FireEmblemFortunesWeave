#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d4820(_QWORD*, __int64, _QWORD*);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1);
__int64 GameRoutine_18a73c0(void);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
__n128 EquipInfoItem_BarrierItem_Unknown70_alt1(__int64 a1, _QWORD* a2) __asm__(
    "EquipInfoItem_BarrierItem_Unknown70");
__int64
GameRoutine_18a73c0_alt1(__int64,
                         unsigned __int16*) __asm__("GameRoutine_18a73c0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 EquipInfoItem_BarrierItem_Unknown70(__int64 a1, __int64* a2);
__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a28[2];
extern __int64* GameData_2131a58[13];
extern __int64 fw_memory_g_heap_manager_ptr;
void Element_1886580(__int64, char);
__int64* EquipInfoItem_BarrierItem_Unknown17(_QWORD* a1);

__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1)
{
  int v1;
  _QWORD v4[2];
  _QWORD v5[2];

  v1 = *(_DWORD*)(a1 + 40);
  v5[0] = "L_MenuItem_Item";
  v5[1] = 15;
  v4[0] = game_util_Format("BarrierItem%02d", v1);
  v4[1] = strlen(v4[0]);
  return GameRoutine_16d4820((_QWORD*)a1, (__int64)v5, v4);
}

__int64* EquipInfoItem_BarrierItem_Unknown17(_QWORD* a1)
{
  __int64* result;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  struct {
    __int64* v24;
    __int64* v25;
    __int64 v26;
  } v24_;
  __int64 var4;

  EquipInfoItem_Unknown17(a1);
  result = (__int64*)a1[14];
  v24_.v24 = nullptr;
  v24_.v25 = nullptr;
  if (result != nullptr &&
      (result =
           (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result),
       v24_.v25 = result, result != nullptr) &&
      (v3 = result, result = (__int64*)a1[13], v24_.v24 = result,
       result != nullptr) &&
      (v4 = v3, (result = (__int64*)__dynamic_cast(result, GameData_2131a58[0],
                                                   GameData_2131a28[0], 0)) !=
                    nullptr)) {
    v5 = &v24_.v24;
    v22_.v22 = result;
    v22_.v23 = (__int64)v4;
  }
  else {
    v5 = &v22_.v22;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = (__int64)v24_.v25;
  if (v24_.v25 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = (__int64)v22_.v22;
  if (v22_.v22 != nullptr) {
    v8 = a1[16];
    if (v8 != 0 && *(_QWORD*)v8 != 0) {
      v9 = *(unsigned __int16*)(v8 + 16);
      v10 = a1[12];
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v9) +
                    73LL) == 17) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v11 = game_map_MapRandom_instance__ptr[0];
        v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v14 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v11 + 1) = v12;
        v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v13;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v15;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v16 = (16 * ((_WORD)v15 -
                     1000 * (unsigned __int16)((v15 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
      }
      else {
        v16 = 1;
      }
      *(_QWORD*)(v7 + 1072) = v10;
      *(_WORD*)(v7 + 1080) = v9;
      *(_WORD*)(v7 + 1082) = 0;
      *(_DWORD*)(v7 + 1084) = v16;
      LayoutAccessor_1562cf0(v7 + 88, (unsigned int*)"Info");
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
      Element_1886580(v7, 1);
      (*(void (**)(__int64))(*(_QWORD*)v7 + 384LL))(v7);
      v24_.v26 = 0;
      v24_.v24 = GameData_212d890[0] + 2;
      LODWORD(v24_.v25) = 20;
      result = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                      PSEUDO_X8, __int64, __int64**))(
                                      *(_QWORD*)(v7 + 72) + 16LL))(
                                      (void*)&var4, v7 + 72, &v24_.v24));
    }
    v17 = *(_QWORD*)(v7 + 1048);
    v18 = a1 + 11;
    v19 = v7 + 1040;
    if (v17 == v7 + 1040) {
      goto LABEL_20;
    }
    while (*(_QWORD**)(v17 + 16) != v18) {
      v17 = *(_QWORD*)(v17 + 8);
      if (v17 == v19) {
        goto LABEL_20;
      }
    }
    if (v17 == v19) {
    LABEL_20:
      result = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      result[1] = v19;
      result[2] = (__int64)v18;
      v20 = *(_QWORD*)(v7 + 1040);
      *result = v20;
      *(_QWORD*)(v20 + 8) = result;
      *(_QWORD*)(v7 + 1040) = result;
      ++*(_QWORD*)(v7 + 1056);
    }
  }
  v21 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    return (__int64*)std___1___shared_weak_count___release_weak_alt1(v21);
  }
  return result;
}

__int64 EquipInfoItem_BarrierItem_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        v6 = *(_QWORD*)(a1 + 128);
        v14 = 0;
        if (v6 != 0) {
          v7 = *(unsigned __int16*)(v6 + 16);
          HIDWORD(v14) = 1;
          LOWORD(v14) = v7;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v7) +
                        73LL) == 17) {
            v8 = result;
            nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
            v9 = game_map_MapRandom_instance__ptr[0];
            v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v9 + 1) = v10;
            v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
            nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
            result = v8;
            HIDWORD(v14) =
                (16 * ((_WORD)v13 -
                       1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1;
          }
        }
        result = GameRoutine_18a73c0_alt1(result, (unsigned __int16*)&v14);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
