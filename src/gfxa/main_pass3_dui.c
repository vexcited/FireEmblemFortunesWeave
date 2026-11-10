#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_b48e70(_QWORD, _QWORD);
__int64 GameRoutine_b48f90(_QWORD, _QWORD);
__int64 GameRoutine_b4a3f0(_QWORD, _QWORD);
__int64 GameRoutine_b4a510(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gfxa_Task3DUI_Impl_draw(__int64, _QWORD*, _QWORD*, _QWORD*,
                                unsigned int*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fc8480[])();
extern __int64 (*GameData_1fc8510[])();
extern __int64 (*GameData_1fc85a0[])();
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_211d798[4];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 gfxa_MainPass3DUI_SetupPrimitivePass(__int64 a1, __int64* a2,
                                             __int64 a3, unsigned int a4);
__int64 gfxa_MainPass3DUI_Setup3DUIPass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       __int64 a3);
__int64 gfxa_MainPass3DUI_Setup3DUIPass_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3);

__int64 gfxa_MainPass3DUI_SetupPrimitivePass(__int64 a1, __int64* a2,
                                             __int64 a3, unsigned int a4)
{
  int v4;
  __int64 v6;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;

  v34 = a3;
  v4 = *((_DWORD*)a2 + 24);
  v6 = a4;
  v7 = GameData_211d798[a4];
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  v10 = strlen(v7);
  v35[2] = v7;
  v37[0] = GameData_1fc8480;
  v37[1] = &v34;
  v38 = v37;
  v35[0] = GameData_1fc8510;
  v35[1] = v6;
  v36 = v35;
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v10);
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(*v8, v13, 16, 0);
    *(_QWORD*)(v9 + 16) = v11;
    *(_QWORD*)(v9 + 24) = v12;
    *(_QWORD*)(v9 + 8) = v13 | 1;
    goto LABEL_9;
  }
  v12 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * v10;
  if (v10 != 0) {
  LABEL_9:
    memmove(v12, v7, v11);
  }
  v14 = v38;
  *(_BYTE*)(v12 + v11) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_DWORD*)(v9 + 80) = v4;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fc85a0;
  if (v14 == nullptr) {
    *(_QWORD*)(v9 + 160) = 0;
    v15 = v36;
    if (v36 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if (v14 == v37) {
    *(_QWORD*)(v9 + 160) = v9 + 128;
    (*(void (**)(_QWORD*))(*v14 + 24LL))(v14);
    v15 = v36;
    if (v36 != nullptr) {
      goto LABEL_15;
    }
  LABEL_18:
    *(_QWORD*)(v9 + 208) = 0;
    goto LABEL_25;
  }
  *(_QWORD*)(v9 + 160) = (*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
  v15 = v36;
  if (v36 == nullptr) {
    goto LABEL_18;
  }
LABEL_15:
  if (v15 == v35) {
    *(_QWORD*)(v9 + 208) = v9 + 176;
    (*(void (**)(_QWORD*))(*v15 + 24LL))(v15);
  }
  else {
    *(_QWORD*)(v9 + 208) = (*(__int64 (**)(_QWORD*))(*v15 + 16LL))(v15);
  }
  if (v36 == v35) {
    v16 = 32;
  }
  else {
    if (v36 == nullptr) {
      goto LABEL_25;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v36 + v16))((__int64)v36);
LABEL_25:
  v17 = (__int64)v38;
  if (v38 == v37) {
    v18 = 32;
  }
  else {
    if (v38 == nullptr) {
      goto LABEL_30;
    }
    v18 = 40;
  }
  v17 = (*(__int64 (**)(__int64))(*v38 + v18))((__int64)v38);
LABEL_30:
  v20 = (__int64*)a2[1];
  v19 = a2[2];
  if ((unsigned __int64)v20 >= v19) {
    v22 = *a2;
    v23 = (__int64)v20 - *a2;
    v24 = (v23 >> 3) + 1;
    if (v24 >> 61 != 0) {
      GameRoutine_b32f30(v17);
    }
    v25 = v19 - v22;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        GameRoutine_60a210(v17);
      }
      v27 = fw_memory_HeapManager_Allocate(*v8, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = v27 + v23 - 8 * (v23 >> 3);
    *(_QWORD*)(v27 + v23) = v9;
    v21 = v27 + v23 + 8;
    memcpy(v29, v22, v23);
    *a2 = v29;
    a2[1] = v21;
    a2[2] = v28;
    if (v22 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v31, v30);
    }
  }
  else {
    *v20 = v9;
    v21 = (__int64)(v20 + 1);
  }
  a2[1] = v21;
  v32 = *(_QWORD*)(v21 - 8);
  v37[0] = a2;
  v37[1] = v32;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v32 + 16LL))(v32, v37);
}

__int64 gfxa_MainPass3DUI_Setup3DUIPass_lambda0_Invoke(__int64 a1, __int64 a2,
                                                       __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = v6[65];
  v8 = v6[66];
  v9 = *v6;
  v10 = v6[1];
  v11 = v6[9];
  v12 = v6[15];
  v13 = v6[7];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b4a3f0(a3, v7);
  v4[2] = GameRoutine_b4a3f0(a3, v8);
  v4[3] = GameRoutine_b48f90(a3, v12);
  v14 = *(_QWORD**)(a2 + 8);
  *v14 = GameRoutine_b48e70(a3, v9);
  v14[3] = GameRoutine_b4a510(a3, v10);
  v14[1] = GameRoutine_b48e70(a3, v13);
  result = GameRoutine_b48e70(a3, v11);
  v14[2] = result;
  return result;
}

__int64 gfxa_MainPass3DUI_Setup3DUIPass_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       _QWORD* a3)
{
  _QWORD* v3;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  bool v16;
  int v17;
  __int64 v18;
  float* v19;
  float v20;
  float v21;
  __int64 v23;
  float v24;
  __int64 v25;

  v3 = *(_QWORD**)(a1 + 8);
  v6 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v7 = *v6;
  v8 = HIDWORD(*v6);
  v23 = *v6;
  v9 = nn_os_ConvertToTimeSpan(*(_QWORD*)(as_g_base_frame_counter + 128));
  v11 = *(_QWORD**)a2;
  v10 = *(_QWORD**)(a2 + 8);
  v12 = (float)(v9 / 1000000);
  v13 = v3[1];
  v14 = v3[3];
  v15 = v12 / 1000.0;
  v25 = v13;
  LODWORD(v13) = *(_DWORD*)(v14 + 40);
  v16 = (int)v13 < -1;
  v17 = ((_BYTE)v13 + 1) & 1;
  if (v16) {
    v17 = -v17;
  }
  *(_DWORD*)(v14 + 40) = v17;
  v24 = v12 / 1000.0;
  v18 = *(_QWORD*)(v14 + 8LL * v17 + 24);
  v19 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
  v19[2] = v15;
  v20 = 1.0 / (float)(int)v7;
  v21 = 1.0 / (float)(int)v8;
  if ((_DWORD)v7 == 0) {
    v20 = 0.0;
  }
  if (v8 == 0) {
    v21 = 0.0;
  }
  *v19 = v20;
  v19[1] = v21;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18);
  return gfxa_Task3DUI_Impl_draw(v14, v11, v10, a3, (unsigned int*)&v23);
}

#pragma GCC visibility pop
