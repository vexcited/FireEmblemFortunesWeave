#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12f93a0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9d78;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EntrustEquipFile_Unknown4(__int64 result);
__int64 EntrustEquipFile_12f4aa0(__int64 result);
__int64 EntrustEquipFile_Unknown5(__int64 result);
__int64 EntrustEquipFile_Unknown6(__int64 result);

__int64 EntrustEquipFile_Unknown4(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = (_QWORD*)result;
  if (*(_QWORD*)(result + 288) != 0) {
    v2 = *(_QWORD**)(result + 280);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[34];
    v1[35] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[33] + 8 * v8) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[33] + 8 * v8 + 48) = 0;
          v10 = v1[33] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v1[33] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[36] = 0;
  }
  v12 = *(_QWORD*)(GameData_21c9d78 + 64);
  v13 = *(_QWORD*)(GameData_21c9d78 + 72);
  while (v12 != v13) {
    v14 = *(__int64**)(*(_QWORD*)v12 + 24LL);
    v15 = *v14;
    v16 = v14[1];
    if (*v14 != v16) {
      do {
        result = GameRoutine_12f93a0(v1 + 33, v15, v15);
        v15 += 16;
      } while (v15 != v16);
    }
    v12 += 8;
  }
  return result;
}

__int64 EntrustEquipFile_12f4aa0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = (_QWORD*)result;
  if (*(_QWORD*)(result + 280) != 0) {
    v2 = *(_QWORD**)(result + 272);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[33];
    v1[34] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[32] + 8 * v8) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[32] + 8 * v8 + 48) = 0;
          v10 = v1[32] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v1[32] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[35] = 0;
  }
  v12 = *(_QWORD*)(GameData_21c9d78 + 64);
  v13 = *(_QWORD*)(GameData_21c9d78 + 72);
  while (v12 != v13) {
    v14 = *(__int64**)(*(_QWORD*)v12 + 24LL);
    v15 = *v14;
    v16 = v14[1];
    if (*v14 != v16) {
      do {
        result = GameRoutine_12f93a0(v1 + 32, v15, v15);
        v15 += 16;
      } while (v15 != v16);
    }
    v12 += 8;
  }
  return result;
}

__int64 EntrustEquipFile_Unknown5(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_QWORD*)(result + 288) != 0) {
    v1 = *(_QWORD**)(result + 280);
    v2 = (_QWORD*)result;
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v1 = v4;
      } while (v4 != nullptr);
    }
    v6 = v2[34];
    v2[35] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v2[33] + 8 * v8) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v2[33] + 8 * v8 + 48) = 0;
          v10 = v2[33] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v2[33] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v2[36] = 0;
  }
  return result;
}

__int64 EntrustEquipFile_Unknown6(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_QWORD*)(result + 280) != 0) {
    v1 = *(_QWORD**)(result + 272);
    v2 = (_QWORD*)result;
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v1 = v4;
      } while (v4 != nullptr);
    }
    v6 = v2[33];
    v2[34] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v2[32] + 8 * v8) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v2[32] + 8 * v8 + 48) = 0;
          v10 = v2[32] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v2[32] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v2[35] = 0;
  }
  return result;
}

#pragma GCC visibility pop
