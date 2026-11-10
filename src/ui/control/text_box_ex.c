#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Format_7a7fc0(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7a7e90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a4da40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
__int64 TextBoxEx_188ab20(__int64 result, __int64 a2);
__int64 TextBoxEx_188ac20(__int64 result, __int64 a2, unsigned __int16* a3);
__int64 TextBoxEx_188aec0(__int64 result);

__int64 TextBoxEx_188ab20(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  _QWORD v9[5];
  int v10;
  int v11;
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
  int v23;
  int v24;

  if (a2 != 0) {
    v2 = result;
    if (*(_QWORD*)(result + 80) != 0) {
      v4 = msg_MessageManager_instance__ptr[0];
      v5 = Registration_a4da40(*msg_MessageManager_instance__ptr[0]);
      v6 = *(_QWORD*)(v2 + 80);
      if ((v5 & 1) != 0) {
        v7 = *v4;
        v12 = -1;
        v13 = -1;
        v14 = -1;
        v15 = -1;
        v16 = -1;
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v9[0] = GameData_212e348 + 2;
        v9[1] = 0xFFFF0001FFFF0000LL;
        v9[2] = 0xFFFF0004FFFF0002LL;
        v9[3] = 0xFFFF0006FFFF0005LL;
        v9[4] = 0xFFFF0008FFFF0007LL;
        v11 = -1;
        v23 = 9;
        v24 = 0;
        v10 = 3;
        v8 = (char*)GameRoutine_a4dbe0(v7, a2, 0, v9);
      }
      else {
        v8 = &GameData_1a9f09e;
      }
      return GameRoutine_156c5d0(v6, v8, 0);
    }
  }
  return result;
}

__int64 TextBoxEx_188ac20(__int64 result, __int64 a2, unsigned __int16* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  int v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;

  v3 = *a3;
  v5 = result;
  v26 = 0;
  v27 = 0;
  v25 = nullptr;
  if (v3 != 0) {
    v6 = 8 * v3;
    v8 = 0;
    do {
      v9 = *(_QWORD*)(*((_QWORD*)a3 + 1) + v8);
      v24 = 0;
      v23 = v9;
      result = GameRoutine_7a7e90(&v25, &v23);
      v8 += 8;
    } while (v6 != v8);
    v10 = v25;
    if ((__int64*)v26 != v25) {
      v11 = 1;
      v12 = 0;
      v13 = msg_MessageManager_instance__ptr[0];
      do {
        v14 = Format_7a7fc0(&v10[v11 - 1]);
        v15 = *v13;
        if (v14 != 0) {
          v16 = v12;
          if (v12 > 7) {
            v16 = 0;
          }
          result = GameRoutine_60a020(v15 + 24LL * v16 + 14704, v14);
        }
        else {
          result = Manager_a51e10(v15 + 14704, (unsigned int)v12,
                                  LODWORD(v25[v11]), 0);
        }
        v10 = v25;
        ++v12;
        v11 += 2;
      } while (v12 < (__int64)(v26 - (_QWORD)v25) >> 4);
    }
    if (v10 != nullptr) {
      v26 = (unsigned __int64)v10;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  if (a2 != 0 && *(_QWORD*)(v5 + 80) != 0) {
    v18 = msg_MessageManager_instance__ptr[0];
    v19 = Registration_a4da40(*msg_MessageManager_instance__ptr[0]);
    v20 = *(_QWORD*)(v5 + 80);
    if ((v19 & 1) != 0) {
      v21 = *v18;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v25 = GameData_212e348 + 2;
      v26 = 0xFFFF0001FFFF0000LL;
      v27 = 0xFFFF0004FFFF0002LL;
      v28 = 0xFFFF0006FFFF0005LL;
      v29 = 0xFFFF0008FFFF0007LL;
      v31 = -1;
      v43 = 9;
      v44 = 0;
      v30 = 3;
      v22 = (char*)GameRoutine_a4dbe0(v21, a2, 0, &v25);
    }
    else {
      v22 = &GameData_1a9f09e;
    }
    return GameRoutine_156c5d0(v20, v22, 0);
  }
  return result;
}

__int64 TextBoxEx_188aec0(__int64 result)
{
  __int64 v1;

  *(_QWORD*)result = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(result + 48) & 1) != 0 && *(_QWORD*)(result + 64) != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

#pragma GCC visibility pop
