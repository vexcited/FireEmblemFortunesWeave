#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20433d8[])();
_QWORD* game_facility_SceneCameraSyncStickController_SetImpl_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_a7fda0(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212e460[2];
extern __int64 GameData_212e438;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void
game_facility_SceneCameraSyncStickController_SetImpl_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1);

_QWORD* game_facility_SceneCameraSyncStickController_SetImpl_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_20433d8;
  v2 = result[5];
  a2[3] = result[3];
  a2[5] = v2;
  v3 = result[2];
  a2[4] = result[4];
  a2[2] = v3;
  return result;
}

__attribute__((swiftcall)) void

game_facility_SceneCameraSyncStickController_SetImpl_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;

  v3 = *(_QWORD*)(a1 + 16);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v6 = (__int64*)GameData_212c2a0;
  v7 = (__int64*)GameData_212c2b0;
  v8 = GameData_212e460[0];
  *(_QWORD*)(v5 + 112) = 1065353216;
  *(_QWORD*)(v5 + 120) = 0x100000000LL;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 144) = 0x4110000041800000LL;
  *(_DWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v5 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v5 + 168) = 1092616192;
  v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
  v10 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6);
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6);
  v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
  *(_QWORD*)v5 = v8 + 2;
  *(_QWORD*)(v5 + 8) = 0;
  v15 = *v6;
  v16 = v6[1];
  *(_QWORD*)(v5 + 224) = v9;
  *(_QWORD*)(v5 + 232) = v10;
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8);
  *(_QWORD*)(v5 + 240) = v11;
  *(_QWORD*)(v5 + 248) = v12;
  v19 = *v7;
  *(_QWORD*)(v5 + 192) = v15;
  *(_QWORD*)(v5 + 200) = v16;
  v21 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
  *(_QWORD*)(v5 + 208) = v18;
  *(_QWORD*)(v5 + 216) = v17;
  v23 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 8);
  *(_QWORD*)(v5 + 320) = v19;
  *(_QWORD*)(v5 + 328) = v23;
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v24 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  *(_QWORD*)(v5 + 272) = v22;
  *(_QWORD*)(v5 + 280) = v24;
  v26 = v7[1];
  *(_QWORD*)(v5 + 256) = *v7;
  *(_QWORD*)(v5 + 264) = v26;
  v27 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7);
  *(_QWORD*)(v5 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  *(_QWORD*)(v5 + 312) = v20;
  v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v30 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7);
  *(_QWORD*)(v5 + 352) = v14;
  *(_QWORD*)(v5 + 360) = v27;
  *(_QWORD*)(v5 + 288) = v28;
  *(_QWORD*)(v5 + 296) = v13;
  *(_QWORD*)(v5 + 336) = v25;
  *(_QWORD*)(v5 + 344) = v29;
  *(_QWORD*)(v5 + 368) = v21;
  *(_QWORD*)(v5 + 376) = v30;
  *(_OWORD*)(v5 + 48) = GameData_1a83090;
  *(_OWORD*)(v5 + 64) = (__typeof__(*(_OWORD*)(v5 + 64))){0};
  *(_BYTE*)(v5 + 164) = 1;
  *(_OWORD*)(v5 + 80) = GameData_1a83610;
  *(_OWORD*)(v5 + 96) = (__typeof__(*(_OWORD*)(v5 + 96))){0};
  v31 = GameData_212e438;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v5 + 165) = 1;
  *(_QWORD*)(v5 + 424) = 1023;
  *(_QWORD*)(v5 + 392) = 1023;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 32) = v31 + 16;
  v32 = *(_QWORD*)(v3 + 8);
  *a2 = v5 + 32;
  a2[1] = v5;
  wld_a7fda0(v5 + 32, v32);
  v33 = *(_OWORD*)(a1 + 32);
  *(_DWORD*)(v5 + 40) = 0;
  *(_OWORD*)(v5 + 64) = v33;
  {
    GameRoutine_b3aee0(v5 + 32);
    return;
  }
}

#pragma GCC visibility pop
