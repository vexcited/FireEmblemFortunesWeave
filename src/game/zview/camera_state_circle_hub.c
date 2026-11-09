#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212edb0[9];
struct PseudoSret GameRoutine_d31ee0(_QWORD);
_QWORD* CameraStateCircleHub_Unknown2(__int64 a1);

_QWORD* CameraStateCircleHub_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  atomic_ullong* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  int v18;
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
  int v32;

  v2 = (__int64*)GameData_212dc38[0];
  GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v3 = *(_QWORD*)(a1 + 912);
  v4 = *(_OWORD*)(*(_QWORD*)(v3 + 8) + 112LL);
  *(_QWORD*)(v3 + 16) = v4;
  v5 = *(_OWORD*)(v3 + 16);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v3 + 16) = v5;
  LODWORD(v5) = *(_DWORD*)(a1 + 164);
  LODWORD(v4) = *(_DWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 516) = 0x42440000C1200000LL;
  *(_DWORD*)(a1 + 524) = 1065353216;
  *(_DWORD*)(a1 + 836) = v4;
  *(_DWORD*)(a1 + 832) = v5;
  v6 = *(float*)(a1 + 628);
  v7 = 3.5f;
  v8 = *(_QWORD*)GameData_212d310;
  v9 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 48LL);
  if ((v9 & 2) == 0) {
    v7 = *(float*)(a1 + 628);
  }
  if ((v9 & 4) != 0) {
    v7 = 2.0f;
  }
  if (v7 >= v6) {
    v6 = v7;
  }
  *(float*)(a1 + 628) = v6;
  v10 = *(_DWORD*)(v8 + 48);
  if ((v10 & 0x20) != 0) {
    *(_BYTE*)(a1 + 632) = 1;
    v10 = *(_DWORD*)(v8 + 48);
  }
  if ((v10 & 0x10) != 0) {
    *(_DWORD*)(a1 + 536) = 1065353216;
  }
  v11 = *v2;
  *(_DWORD*)(a1 + 1108) = *(_DWORD*)(a1 + 500);
  *(_DWORD*)(a1 + 1112) = *(_DWORD*)(a1 + 512);
  v12 = *(_QWORD*)(v11 + 1128);
  if (v12 != 0) {
    *(_QWORD*)(v11 + 1128) = 0;
  }
  else {
    v12 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  result[1] = 0;
  v14 = (atomic_ullong*)(result + 1);
  result[2] = 0;
  v15 = result;
  v16 = GameData_212edb0[0];
  *((_BYTE*)result + 48) = 0;
  *((_BYTE*)result + 64) = 0;
  result[10] = 0;
  result[11] = 0;
  result[4] = v12;
  *result = v16 + 2;
  *((_BYTE*)result + 96) = 1;
  *(_QWORD*)(a1 + 1116) = 0x3F8000003ECCCCCDLL;
  v17 = GameData_212c6a0[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 720LL) != 0) {
    v18 = *(unsigned __int8*)(*(_QWORD*)GameData_212c6a0[0] + 720LL);
  }
  else {
    v18 = 3;
  }
  if (*(_DWORD*)(a1 + 992) != v18) {
    *(_DWORD*)(a1 + 992) = v18;
    *(_QWORD*)(a1 + 1100) = 0;
    *(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1);
    v19 = v31;
    *(_QWORD*)(a1 + 1028) = v30;
    *(_QWORD*)(a1 + 1036) = v19;
    v20 = v27;
    *(_DWORD*)(a1 + 1044) = v32;
    *(_QWORD*)(a1 + 996) = v26;
    *(_QWORD*)(a1 + 1004) = v20;
    v21 = v29;
    *(_QWORD*)(a1 + 1012) = v28;
    *(_QWORD*)(a1 + 1020) = v21;
    result =
        (*(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1), (void*)(&v26));
    v22 = v31;
    v23 = v28;
    *(_QWORD*)(a1 + 1072) = v29;
    v24 = v30;
    *(_QWORD*)(a1 + 1088) = v22;
    v25 = v27;
    *(_QWORD*)(a1 + 1064) = v23;
    *(_QWORD*)(a1 + 1080) = v24;
    LODWORD(v24) = v32;
    *(_QWORD*)(a1 + 1056) = v25;
    *(_DWORD*)(a1 + 1096) = v24;
    *(_QWORD*)(a1 + 1048) = v26;
    *(_BYTE*)(*(_QWORD*)v17 + 720LL) = v18;
  }
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v15);
  }
  return result;
}

#pragma GCC visibility pop
