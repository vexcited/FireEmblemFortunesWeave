#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1397b10(_QWORD);
__int64 GameRoutine_13987f0(_QWORD);
__int64 GameRoutine_13995b0(_QWORD);
__int64 GameRoutine_13b0580(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13b35a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13b65c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2131100;
extern _DWORD* GameData_2131118;
extern _DWORD* GameData_2131130;
extern _UNKNOWN GameData_1aad9f1;
extern _UNKNOWN GameData_1ab9712;
extern _UNKNOWN GameData_1adf8d9;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131000[9];
extern __int64* GameData_2131008[8];
extern __int64* GameData_2131010[7];
extern __int64* GameData_21310f0[2];
extern __int64* GameData_21310f8;
extern __int64* GameData_2131108[2];
extern __int64* GameData_2131110;
extern __int64* GameData_2131120[2];
extern __int64* GameData_2131128;
__int64 CameraGroup_Unknown4();

__int64 CameraGroup_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v0 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      264, 16, 0);
  v2 = (_QWORD*)v1;
  v3 = GameData_21310f8;
  if (*GameData_21310f8 == 0) {
    *GameData_21310f8 = v1;
    *GameData_2131100 = 1;
  }
  *(_QWORD*)(v1 + 104) = 0;
  *(_QWORD*)(v1 + 112) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  *(_QWORD*)(v1 + 96) = 0;
  *(_QWORD*)(v1 + 72) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 24) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  *(_DWORD*)(v1 + 120) = 1065353216;
  *(_QWORD*)(v1 + 128) = 0;
  *(_QWORD*)(v1 + 136) = 0;
  *(_QWORD*)(v1 + 144) = 0;
  *(_QWORD*)(v1 + 152) = 0;
  *(_DWORD*)(v1 + 160) = 1065353216;
  *(_QWORD*)(v1 + 168) = 0;
  *(_QWORD*)(v1 + 176) = 0;
  *(_QWORD*)(v1 + 184) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  *(_DWORD*)(v1 + 200) = 1065353216;
  *(_QWORD*)(v1 + 208) = 0;
  *(_QWORD*)(v1 + 216) = 0;
  *(_QWORD*)(v1 + 224) = 0;
  *(_QWORD*)(v1 + 232) = 0;
  *(_QWORD*)(v1 + 240) = 0;
  *(_QWORD*)(v1 + 248) = 0;
  *(_BYTE*)(v1 + 256) = 0;
  v4 = GameData_21310f0[0] + 2;
  *(_QWORD*)(v1 + 8) = GameData_21310f0[0] + 8;
  *(_QWORD*)v1 = v4;
  GameRoutine_13b0580(v1 + 8, "GameData/FacilityScene.bin", &GameData_1adf8d9,
                      1);
  v5 = GameData_2131000[0];
  *v3 = (__int64)v2;
  *v2 = v5 + 2;
  v2[1] = v5 + 8;
  GameRoutine_1397b10(v2);
  if (*v3 != 0) {
    v6 = *v3 + 8;
  }
  else {
    v6 = 0;
  }
  v7 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v8 = (_QWORD*)v7;
  v9 = GameData_2131110;
  if (*GameData_2131110 == 0) {
    *GameData_2131110 = v7;
    *GameData_2131118 = 1;
  }
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 120) = 1065353216;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_DWORD*)(v7 + 160) = 1065353216;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_DWORD*)(v7 + 200) = 1065353216;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_BYTE*)(v7 + 256) = 0;
  v10 = GameData_2131108[0] + 2;
  *(_QWORD*)(v7 + 8) = GameData_2131108[0] + 8;
  *(_QWORD*)v7 = v10;
  GameRoutine_13b35a0(v7 + 8, "GameData/FacilityScene.bin", &GameData_1ab9712,
                      1);
  v11 = GameData_2131008[0];
  *v9 = (__int64)v8;
  *v8 = v11 + 2;
  v8[1] = v11 + 8;
  GameRoutine_13987f0(v8);
  if (*v9 != 0) {
    v12 = *v9 + 8;
  }
  else {
    v12 = 0;
  }
  v13 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 16, 16, 0);
  *v13 = v6;
  v13[1] = v12;
  v14 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v15 = (_QWORD*)v14;
  v16 = GameData_2131128;
  if (*GameData_2131128 == 0) {
    *GameData_2131128 = v14;
    *GameData_2131130 = 1;
  }
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 120) = 1065353216;
  *(_QWORD*)(v14 + 128) = 0;
  *(_QWORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 152) = 0;
  *(_DWORD*)(v14 + 160) = 1065353216;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_DWORD*)(v14 + 200) = 1065353216;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_BYTE*)(v14 + 256) = 0;
  v17 = GameData_2131120[0] + 2;
  *(_QWORD*)(v14 + 8) = GameData_2131120[0] + 8;
  *(_QWORD*)v14 = v17;
  GameRoutine_13b65c0(v14 + 8, "GameData/FacilityScene.bin", &GameData_1aad9f1,
                      1);
  v18 = GameData_2131010[0];
  *v16 = (__int64)v15;
  *v15 = v18 + 2;
  v15[1] = v18 + 8;
  GameRoutine_13995b0(v15);
  if (*v16 != 0) {
    v19 = *v16 + 8;
  }
  else {
    v19 = 0;
  }
  v20 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 32, 16, 0);
  v21 = v13[1];
  v22 = v20;
  *v20 = *v13;
  v23 = *v0;
  v20[1] = v21;
  v20[2] = v19;
  if (*(_QWORD*)(v23 + 200) != 0) {
    v24 = 128;
  }
  else {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free(v23 + v24);
  (*(void (**)(__int64))(*(_QWORD*)*v22 + 16LL))(*v22);
  (*(void (**)(__int64))(*(_QWORD*)v22[1] + 16LL))(v22[1]);
  (*(void (**)(__int64))(*(_QWORD*)v22[2] + 16LL))(v22[2]);
  if (*(_QWORD*)(*v0 + 200LL) != 0) {
    v25 = 128;
  }
  else {
    v25 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v0 + v25);
}

#pragma GCC visibility pop
