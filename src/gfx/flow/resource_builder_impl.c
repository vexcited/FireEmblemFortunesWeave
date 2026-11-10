#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, _QWORD);
_QWORD* GameRoutine_b36540(_QWORD* result, __int64);
__int64 Config_bc4f00(_QWORD, _QWORD, _QWORD);
__int64 Config_bc7c20(_QWORD);
__int64 GameRoutine_19932a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1995760(_QWORD, _QWORD);
__int64 GameRoutine_1996450(_QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5b6250(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_5d3770(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_615760(_QWORD, _QWORD);
__int64 GameRoutine_a738c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73d40(_QWORD, _QWORD);
__int64 GameRoutine_a73e50(__int64 result, _QWORD*);
__int64 GameRoutine_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_ad6000(_QWORD, _QWORD);
__int64 GameRoutine_b48e70(_QWORD, _QWORD);
__int64 GameRoutine_b4a510(_QWORD, _QWORD);
__int64 GameRoutine_b54ca0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b55630(__int64*, __int64, _BYTE*);
__int64 GameRoutine_b56bf0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5ff30();
__int64 GameRoutine_b60de0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b60f30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b617c0();
__int64 GameRoutine_b628e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b62a30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b62b80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_beefc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SyncResource_b33240(__int64*, __int64*);
__int64 SyncResource_b33520(__int64*, __int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_LockPolygonState(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_UnlockPolygonState(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1b611e0;
extern _UNKNOWN GameData_1b61330;
extern _UNKNOWN GameData_22030f0;
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN** GameData_212e470[15];
extern _UNKNOWN** GameData_212e478[14];
extern _UNKNOWN** GameData_212e480[13];
extern _UNKNOWN** GameData_212e488[12];
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e498[10];
extern _UNKNOWN** GameData_212e4a0[9];
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4b8[6];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e770[3];
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e798[33];
extern _UNKNOWN** GameData_212e7a0[32];
extern _UNKNOWN** GameData_212e7b0[30];
extern _UNKNOWN** GameData_212e7b8[29];
extern _UNKNOWN** GameData_212e7c0[28];
extern _UNKNOWN** GameData_212e7c8[27];
extern _UNKNOWN** GameData_212e7d0[26];
extern _UNKNOWN** GameData_212e7d8[25];
extern _UNKNOWN** GameData_212e7e0[24];
extern _UNKNOWN** GameData_212e7e8[23];
extern _UNKNOWN** GameData_212e7f0[22];
extern _UNKNOWN** GameData_212e7f8[21];
extern _UNKNOWN** GameData_212e800[20];
extern _UNKNOWN** GameData_212e808[19];
extern _UNKNOWN** GameData_212e810[18];
extern _UNKNOWN** GameData_212e818[17];
extern _UNKNOWN** GameData_212e820[16];
extern _UNKNOWN** GameData_212e848[11];
extern _UNKNOWN** GameData_212e850[10];
extern _UNKNOWN** GameData_212e858[9];
extern _UNKNOWN** GameData_212e860[8];
extern _UNKNOWN** GameData_212e870[6];
extern _UNKNOWN** GameData_212e880[4];
extern _UNKNOWN** GameData_212e8a8;
extern _UNKNOWN** GameData_21321c8[2];
extern _UNKNOWN** GameData_21321d0;
extern __int128 GameData_1a83660;
extern __int64 (*GameData_1fc55d8[])();
extern __int64 (*GameData_1fc5890[])();
extern __int64 (*GameData_1fc5ba0[])();
extern __int64 (*GameData_1fc5c20[])();
extern __int64 (*GameData_1fc5e40[])();
extern __int64 (*GameData_1fc6240[])();
extern __int64 (*GameData_1fc66c0[])();
extern __int64 (*GameData_1fc6750[])();
extern __int64 (*GameData_1fc67d0[])();
extern __int64 (*GameData_1fc6a50[])();
extern __int64 (*GameData_1fc6bd0[])();
extern __int64 (*GameData_1fc6e90[])();
extern __int64 (*GameData_1fc6f10[])();
extern __int64 (*GameData_1fc6f90[])();
extern __int64 (*GameData_1fc7110[])();
extern __int64 (*GameData_1fc7190[])();
extern __int64 (*GameData_1fc7210[])();
extern __int64 (*GameData_1fc7310[])();
extern __int64 (*GameData_1fc7690[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64 (*GameData_212e730)();
extern __int64 (*GameData_2178500)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
extern __int64 (*gfx_flow_ResourceBase_Destroy_ResourceBase_b32fd0_ptr[])();
extern __int64 GameData_2203088;
extern __int64 GameData_22030a0;
extern __int64 GameData_22030a8;
extern __int64 GameData_22030b8;
extern __int64 GameData_22030c0;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21675c0;
extern int GameData_21675c4;
extern int GameData_21675c8;
extern int GameData_21fdeb8;
extern int GameData_21fdec4;
extern int GameData_21fded0;
extern int GameData_21fdedc;
extern int GameData_21fdee0;
extern int GameData_21fdee8;
extern int GameData_21fdefc;
extern int GameData_21fdf04;
extern int GameData_21fdf08;
extern int GameData_21fdf0c;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
extern unsigned int GameData_1b63ca8[6];
float powf(float, float);
float sinf(float);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f50(void);
void __attribute__((noreturn)) GameRoutine_b32fb0(_QWORD);
void __attribute__((noreturn)) GameRoutine_b790d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b49250(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4,
                               __int64 a5);
void ResourceBuilder_b494a0(__int64 a1, _WORD* a2);
__int64 ResourceBuilder_b49a80(_QWORD* a1);
__int64 ResourceBuilder_b49bb0(unsigned int* a1, _QWORD* a2, _QWORD* a3,
                               _QWORD* a4, __int64 a5);
__int64 ResourceBuilder_b49f50(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                               __int64* a4);
__int64 ResourceBuilder_b4a1c0(__int64 a1);
__int64 ResourceBuilder_b4a240(__int64 result);
void ResourceBuilder_b4a3a0(__int64 a1, _WORD* a2);
__int64 ResourceBuilder_b4a630(__int64 a1, __int64 a2);
bool ResourceBuilder_b4ae00(__int64 a1, __int64 a2);
bool ResourceBuilder_b4af30(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b4bb60(__int64 a1, unsigned __int8* a2, __int64* a3);
__int64 ResourceBuilder_b4c220(__int64* a1);
__int64 ResourceBuilder_b4c3d0(__int64 result);
__int64 ResourceBuilder_b4d4e0(__int64 result, _QWORD* a2, _QWORD* a3,
                               _QWORD* a4, __int64 a5);
void ResourceBuilder_b4d7e0(__int64 a1, __int64 a2);
unsigned __int64 ResourceBuilder_b4dd70(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5);
__int64 ResourceBuilder_b4dee0(_DWORD* a1, __int64 a2);
void ResourceBuilder_b4e130(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b4f9e0(_QWORD* a1);
bool ResourceBuilder_b50600(__int64 a1, __int64 a2);
bool ResourceBuilder_b50740(__int64 a1, __int64 a2);
bool ResourceBuilder_b508e0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b51360(_QWORD* a1);
__int64 ResourceBuilder_b51420(__int64 result);
__int64 ResourceBuilder_b51760(_DWORD* a1, __int64 a2, __int64* a3);
__int64 ResourceBuilder_b52130(int* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5);
bool ResourceBuilder_b525c0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b528e0(__int64* a1, unsigned __int8* a2, __int64 a3);
__int64 ResourceBuilder_b53170(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                               __int64* a4);
__int64 ResourceBuilder_b533e0(__int64 a1);
__int64 ResourceBuilder_b53460(__int64 result);
bool ResourceBuilder_b536a0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b538b0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                               __int64 a5);
void ResourceBuilder_b53be0(__int64 a1, _WORD* a2);
bool ResourceBuilder_b53ce0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b540f0(__int64 result);
__int64 ResourceBuilder_b54250(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b561b0(_QWORD* a1);
__int64 ResourceBuilder_b56300(__int64 result);
__int64 ResourceBuilder_b564c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5);
__int64 ResourceBuilder_b56a20(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);
bool ResourceBuilder_b574c0(__int64 a1, __int64 a2);
bool ResourceBuilder_b575f0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b57de0(_QWORD* a1);
void ResourceBuilder_b592a0(__int64 a1, _WORD* a2);
void ResourceBuilder_b59390(__int64 a1, __int64 a2);
void ResourceBuilder_b59480(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b594d0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int* a4);
bool ResourceBuilder_b597a0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b59ce0(_QWORD* a1);
__int64 ResourceBuilder_b5a4b0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b5a9c0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                               int* a5);
__int64 ResourceBuilder_b5b3c0(_QWORD* a1);
__int64 ResourceBuilder_b5c4b0(_QWORD* a1);
__int64 ResourceBuilder_b5d4d0(_QWORD* a1);
__int64 ResourceBuilder_b5ed80(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4,
                               int a5);
bool ResourceBuilder_b5f0c0(__int64 a1);
__int64 ResourceBuilder_b5f0f0(__int64 result, __int64 a2, int a3);
void ResourceBuilder_b5f9c0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b5fa20(__int64 result, _QWORD* a2, __int64* a3, int a4);
__int64 ResourceBuilder_b5fb80(__int64 a1, __int64 a2);
bool ResourceBuilder_b60880(__int64 a1);
__int64 ResourceBuilder_b60990(__int64 result, __int64* a2, int* a3);
__int64 ResourceBuilder_b60c20(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b60c80(_QWORD* a1, __int64 a2, int* a3);
__int64 ResourceBuilder_b61080(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b619f0(_QWORD* a1);
__int64 ResourceBuilder_b61dc0(__int64 a1, __int64 a2, _QWORD** a3,
                               __int64* a4);
__int64 ResourceBuilder_b627b0(__int64* a1, __int64 a2, __int64 a3);
__int64 ResourceBuilder_b63990(_QWORD* a1);
__int64 ResourceBuilder_b63d20(__int64 result);
__int64 ResourceBuilder_b64090(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5);
__int64 ResourceBuilder_b642d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5);
void ResourceBuilder_b650d0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b65600(_QWORD* a1);
void ResourceBuilder_b66290(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b66660(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b667c0(_DWORD* a1, _QWORD** a2, __int64 a3, _QWORD* a4,
                               __int64 a5);
void ResourceBuilder_b670f0(__int64 a1, __int64 a2);
bool ResourceBuilder_b67200(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b67660(_QWORD* a1);
_QWORD* ResourceBuilder_b677a0(_QWORD* result, _QWORD* a2, __int64 a3,
                               _QWORD* a4, __int64 a5);
__int64 ResourceBuilder_b67f80(_QWORD* a1);
__int64 ResourceBuilder_b67ff0(__int64 a1);
bool ResourceBuilder_b68420(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b68ae0(_QWORD* a1);
__int64 ResourceBuilder_b69960(_QWORD* a1);
void ResourceBuilder_b6a2b0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6adf0(_QWORD* a1);
__int64 ResourceBuilder_b6b430(_QWORD* a1);
__int64 ResourceBuilder_b6c430(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               int* a5);
_QWORD* ResourceBuilder_b6cce0(__int64 a1);
__int64 ResourceBuilder_b6cd40(__int64 a1, _QWORD* a2);
bool ResourceBuilder_b6cd80(__int64 a1, __int64 a2);
_QWORD* ResourceBuilder_b6ce00(__int64 a1);
__int64 ResourceBuilder_b6ce60(__int64 a1, _QWORD* a2);
bool ResourceBuilder_b6cea0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6cef0(__int64* a1, __int64 a2);
void ResourceBuilder_b6d700(__int64 a1, __int64 a2);
bool ResourceBuilder_b6d810(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6daf0(_QWORD* a1);
__int64 ResourceBuilder_b6e230(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6e370(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6e4e0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               unsigned int* a5);
bool ResourceBuilder_b6ed40(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6f2d0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int* a4);
bool ResourceBuilder_b6f5e0(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b6f8b0(_QWORD* a1);
__int64 ResourceBuilder_b702d0(_QWORD* a1);
__int64 ResourceBuilder_b703a0(__int64* a1, _QWORD* a2);
__int64 ResourceBuilder_b70b00(_QWORD* a1);
__int64 ResourceBuilder_b71010(__int64 result, _QWORD* a2, _QWORD* a3,
                               __int64 a4);
__int64 ResourceBuilder_b71760(__int64 a1, _QWORD* a2);
__int64 ResourceBuilder_b71ec0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
bool ResourceBuilder_b72270(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b73120(_QWORD* a1);
void ResourceBuilder_b74270(__int64 a1, __int64 a2);
void ResourceBuilder_b74360(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b75a00(_QWORD* a1);
__int64 ResourceBuilder_b76e40(__int64 a1, _QWORD* a2, _QWORD* a3,
                               unsigned int a4);
bool ResourceBuilder_b77210(__int64 a1, __int64 a2);
__int64 ResourceBuilder_b77b60(_QWORD* a1);
__int64 ResourceBuilder_b782c0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5);
__int64 ResourceBuilder_b78b40(__int64 result);
__int64 ResourceBuilder_b78dc0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 ResourceBuilder_b49250(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4,
                               __int64 a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 96LL))(
      *a4, *(_QWORD*)a5, *(_QWORD*)(a5 + 8));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 16), *(unsigned int*)(a5 + 20));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 16), *(unsigned int*)(a5 + 20));
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v9 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v9, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v9, (unsigned int)GameData_21fdf04);
  gxc_NvnStateCache_BindPolygonState(v9, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v9, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v10 = *a4;
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v10 + 248LL))(v10, 3, 0, v12, v13, *(unsigned int*)(a1 + 128));
  v14 = a1 + 16LL * *(int*)(a1 + 168);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v14 + 176),
                              *(_QWORD*)(v14 + 184));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 136) + 144LL));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

void ResourceBuilder_b494a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

__int64 ResourceBuilder_b49a80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  v2 = a1[26];
  a1[26] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[25];
  a1[25] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[24];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[22];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[20];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[18];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b49bb0(unsigned int* a1, _QWORD* a2, _QWORD* a3,
                               _QWORD* a4, __int64 a5)
{
  float v5;
  unsigned int v11;
  float v12;
  bool v13;
  int v14;
  bool v15;
  float v16;
  float v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned int* v41;
  _BYTE* v42;
  _BYTE* v43;
  __int64 v44;
  _QWORD v46[2];

  v5 = 1.0;
  v11 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v12 = *(float*)&GameData_21675c4 / *(float*)&GameData_21675c0;
  v13 = v11 > 6;
  v14 = (1 << v11) & 0x54;
  v15 = v13 || v14 == 0;
  if (v15) {
    v16 = 1.0;
    v17 = 1.0 / v12;
  }
  else {
    v16 = *(float*)&GameData_21675c4 / *(float*)&GameData_21675c0;
    v17 = 1.0;
    v12 = *(float*)&GameData_21675c8 / *(float*)&GameData_21675c0;
  }
  v18 = a1[54];
  v13 = v18 < -1;
  v19 = ((_BYTE)v18 + 1) & 1;
  if (v13) {
    v19 = -v19;
  }
  a1[54] = v19;
  v20 = *(_QWORD*)&a1[2 * v19 + 50];
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 56LL))(v20);
  *(float*)(v21 + 32) = v12;
  *(float*)(v21 + 36) = v17;
  *(_OWORD*)v21 = GameData_1a83660;
  v22 = *(_BYTE**)(a5 + 24);
  if (v22 != nullptr) {
    v23 = 1.0;
    v24 = 1.0;
    v25 = 120;
    if (v22[90] != 0) {
      v25 = 89;
    }
    if ((v22[v25] & 1) != 0) {
      v26 = 200;
      if (v22[168] != 0) {
        v26 = 164;
      }
      v27 = *(float*)&v22[v26];
      v28 = 280;
      v5 = fmaxf(v27, 1.0);
      if (v22[248] != 0) {
        v28 = 244;
      }
      v23 = *(float*)&v22[v28];
      v24 = 1.0 / v5;
    }
  }
  else {
    v23 = 1.0;
    v24 = 1.0;
  }
  *(float*)(v21 + 40) = v5;
  *(float*)(v21 + 44) = v24;
  *(float*)(v21 + 56) = v23;
  *(float*)(v21 + 48) = v16;
  *(float*)(v21 + 52) = 1.0 / v16;
  v29 = (float)*(int*)(a5 + 16);
  v30 = (float)*(int*)(a5 + 20);
  *(float*)(v21 + 16) = v29;
  *(float*)(v21 + 20) = v30;
  *(float*)(v21 + 24) = 1.0 / v29;
  *(float*)(v21 + 28) = 1.0 / v30;
  (*(void (**)(__int64))(*(_QWORD*)v20 + 64LL))(v20);
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
  v31 = *(_QWORD*)a5;
  if (*(_QWORD*)a5 != 0) {
    v32 = *(_QWORD*)(a5 + 8);
  }
  else {
    v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
    v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33);
    v32 = v34;
  }
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v31, v32);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 16), *(unsigned int*)(a5 + 20));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 16), *(unsigned int*)(a5 + 20));
  v35 = *a4;
  v46[0] = 0;
  v46[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v35 + 144LL))(v35, 0, v46);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v36 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v36, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v36, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v36, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v36, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v37 = *a4;
  v38 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 40LL))(v38);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v37 + 248LL))(v37, 3, 0, v39, v40, a1[32]);
  v41 = &a1[4 * a1[54]];
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *((_QWORD*)v41 + 28),
                              *((_QWORD*)v41 + 29));
  v42 = *(_BYTE**)(a5 + 24);
  if (v42[90] != 0) {
    v43 = v42 + 89;
  }
  else {
    v43 = v42 + 120;
  }
  v15 = (*v43 & 1) == 0;
  v44 = 4;
  if (!v15) {
    v44 = 12;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)&a1[v44 + 34] + 144LL));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

__int64 ResourceBuilder_b49f50(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                               __int64* a4)
{
  _QWORD* v8;
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
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v9, v10, v11);
  }
  v12 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (a3 | 7) + 1;
    }
    v13 = fw_memory_HeapManager_Allocate(*v8, v14, 16, 0);
    *(_QWORD*)(v12 + 16) = a3;
    *(_QWORD*)(v12 + 24) = v13;
    *(_QWORD*)(v12 + 8) = v14 | 1;
    goto LABEL_9;
  }
  v13 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    v9 = memmove(v13, a2, a3);
  }
  *(_BYTE*)(v13 + a3) = 0;
  *(_BYTE*)(v12 + 32) = 0;
  *(_QWORD*)v12 = gfx_flow_ResourceBase_Destroy_ResourceBase_b32fd0_ptr;
  v15 = *a4;
  v16 = a4[1];
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = v15;
  v17 = a4[2];
  v18 = a4[3];
  *(_QWORD*)(v12 + 56) = v16;
  *(_QWORD*)(v12 + 64) = v17;
  *(_QWORD*)(v12 + 72) = v18;
  v20 = (__int64*)a1[4];
  v19 = a1[5];
  if ((unsigned __int64)v20 >= v19) {
    v22 = a1[3];
    v23 = (char*)v20 - v22;
    v24 = ((__int64)v20 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      GameRoutine_b32fb0(v9);
    }
    v26 = v19 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v28 = fw_memory_HeapManager_Allocate(*v8, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (char*)v20 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v12;
    v21 = (__int64)&v23[v28 + 8];
    memcpy(v31, v22, v30);
    a1[3] = v31;
    a1[4] = v21;
    a1[5] = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v32, v22);
    }
  }
  else {
    *v20 = v12;
    v21 = (__int64)(v20 + 1);
  }
  a1[4] = v21;
  return *(_QWORD*)(v21 - 8);
}

__int64 ResourceBuilder_b4a1c0(__int64 a1)
{
  __int64 result;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22030f0) != 0) {
    GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
    __cxa_guard_release(&GameData_22030f0);
  }
  result = SyncResource_b33240(&GameData_2203088, (__int64*)(a1 + 48));
  *(_QWORD*)(a1 + 40) = result;
  return result;
}

__int64 ResourceBuilder_b4a240(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 40);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v3 = v1;
    result = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v3;
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = __cxa_guard_release(&GameData_22030f0);
      v1 = v3;
    }
  }
  v2 = GameData_22030a0;
  if (GameData_22030a0 != GameData_22030a8) {
    while (*(_QWORD*)(v2 + 8) != v1) {
      v2 += 48;
      if (v2 == GameData_22030a8) {
        return result;
      }
    }
  }
  if (v2 != GameData_22030a8) {
    *(_BYTE*)v2 = 0;
  }
  return result;
}

void ResourceBuilder_b4a3a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

__int64 ResourceBuilder_b4a630(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];

  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  v3 = (__int64*)(a1 + 24);
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = -1;
  GameRoutine_604020(a1 + 80);
  *(_QWORD*)(a1 + 200) = -1;
  *(_DWORD*)(a1 + 8) = GameRoutine_ad6000("3DUIAlwaysDraw", 14);
  *(_DWORD*)(a1 + 12) = GameRoutine_ad6000("3DUI", 4);
  (*(void (**)(__int64))GameData_212e470[0])(a1 + 16);
  (*(void (**)(__int64, __int64))GameData_212e488[0])(a1 + 16, 8);
  (*(void (**)(__int64, __int64))GameData_212e478[0])(a1 + 16, 1);
  (*(void (**)(__int64, __int64))GameData_212e480[0])(a1 + 16, 1);
  GameRoutine_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 12);
  memset(v9, 0, sizeof(v9));
  v7[0] = GameData_1fc55d8;
  v8 = v7;
  GameRoutine_5fc230(v9);
  if (v8 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v8 + 48LL))(v8, v9);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 80, *game_g_frame_clock_ptr[0] + 568, v9);
  *(_QWORD*)(a1 + 200) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 80);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

bool ResourceBuilder_b4ae00(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 12LL);
}

bool ResourceBuilder_b4af30(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
}

__int64 ResourceBuilder_b4bb60(__int64 a1, unsigned __int8* a2, __int64* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;

  v3 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v7 = (v3 & 1) == 0;
  v8 = *(_QWORD**)a1;
  v9 = v3 >> 1;
  if (v7) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v11 = v9;
  }
  else {
    v11 = v4;
  }
  v12 = ResourceBuilder_b49f50(v8, v10, v11, a3);
  v13 = *(_QWORD**)(a1 + 8);
  v14 = v12;
  v16 = (__int64*)v13[5];
  v15 = v13[6];
  if ((unsigned __int64)v16 >= v15) {
    v18 = v13[4];
    v19 = (char*)v16 - v18;
    v20 = ((__int64)v16 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v22 = v15 - v18;
    v23 = fw_memory_g_heap_manager_ptr;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(v12);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v16 - v18;
    v28 = (__int64)&v19[v25 + -8 * v20];
    *(_QWORD*)&v19[v25] = v14;
    v17 = (__int64)&v19[v25 + 8];
    memcpy(v28, v18, v27);
    v13[4] = v28;
    v13[5] = v17;
    v13[6] = v26;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v29, v18);
    }
  }
  else {
    *v16 = v12;
    v17 = (__int64)(v16 + 1);
  }
  v13[5] = v17;
  return v14;
}

__int64 ResourceBuilder_b4c220(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;

  v2 = a1[50];
  a1[50] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[49];
  a1[49] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[43];
  a1[43] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[42];
  a1[42] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[36];
  a1[36] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[35];
  a1[35] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[29];
  a1[29] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[28];
  a1[28] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[22];
  a1[22] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[21];
  a1[21] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[15];
  a1[15] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[14];
  a1[14] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[8];
  a1[8] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[7];
  a1[7] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[1];
  a1[1] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  result = *a1;
  *a1 = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 ResourceBuilder_b4c3d0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 104);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[11];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[9];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[7];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v2[5];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v2[3];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = v2[1];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = v2[1];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ResourceBuilder_b4d4e0(__int64 result, _QWORD* a2, _QWORD* a3,
                               _QWORD* a4, __int64 a5)
{
  __int64 v5;
  __int64 v7;
  unsigned int* v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;

  v5 = 128;
  if (*(_BYTE*)(*(_QWORD*)a5 + 96LL) != 0) {
    v5 = 92;
  }
  if (*(float*)(*(_QWORD*)a5 + v5) > 0.0) {
    v7 = result;
    v10 = (unsigned int*)(*(_QWORD*)result + 13304LL);
    if (*(_BYTE*)(*(_QWORD*)result + 16700LL) != 0) {
      v10 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)result + 16672LL) + 24LL);
    }
    v12 = *v10;
    v11 = v10[1];
    ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 18);
    gxc_NvnStateCache_Reset(a4[1]);
    gxc_NvnStateCache_SetCommandList(a4[1], *a4);
    v13 = a4[1];
    gxc_NvnStateCache_BindDepthStencilState(v13,
                                            (unsigned int)GameData_21fded0);
    gxc_NvnStateCache_BindBlendState(v13, (unsigned int)GameData_21fdee0);
    gxc_NvnStateCache_BindPolygonState(v13, (unsigned int)GameData_21fdf08);
    gxc_NvnStateCache_BindMultisampleState(v13, (unsigned int)GameData_21fdf14);
    gxc_NvnStateCache_ClearCommandList(a4[1]);
    v14 = v7 + 16LL * *(int*)(v7 + 264);
    (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *(_QWORD*)(v14 + 272),
                                *(_QWORD*)(v14 + 280));
    (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
    v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v16,
                                                                   v17);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, v12, v11);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, v12, v11);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(v7 + 232) + 144LL));
    gxc_NvnStateCache_SetCommandList(a4[1], *a4);
    gxc_NvnStateCache_BindBlendState(a4[1], (unsigned int)GameData_21fdee8);
    gxc_NvnStateCache_ClearCommandList(a4[1]);
    v18 = *a4;
    v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v18 + 248LL))(v18, 2, 0, v20, v21,
                                *(unsigned int*)(v7 + 128));
    return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
        *a4, 3, 0);
  }
  return result;
}

void ResourceBuilder_b4d7e0(__int64 a1, __int64 a2)
{
  *(_WORD*)(a2 + 6) = 42;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 4) = 2;
}

unsigned __int64 ResourceBuilder_b4dd70(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, __int64 a5)
{
  unsigned __int64 result;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;

  result = Config_bc7c20(*eft_g_effectSystem_ptr[0]);
  if (HIDWORD(result) == 0) {
    return result;
  }
  v10 = result;
  ResourceBuilder_b4dee0(a1, a5);
  v15[2] = a2;
  v15[3] = a3;
  v15[0] = GameData_1fc5890;
  v15[1] = a1;
  v16 = v15;
  v20 = v19;
  v18 = v17;
  v11 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16664);
  v19[0] = GameData_2109ae8;
  v17[0] = GameData_2109b78;
  ((void (*)(__int64, _QWORD*, _QWORD*, _QWORD*, __int64, _QWORD,
             _QWORD))GameRoutine_beefc0)(v11, v15, v19, v17, 5, v10, 0);
  if (v18 == v17) {
    v12 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_7;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v18 + v12))((__int64)v18);

LABEL_7:
  if (v20 == v19) {
    v13 = 32;
    goto LABEL_11;
  }
  if (v20 != nullptr) {
    v13 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v20 + v13))((__int64)v20);
  }
  result = (unsigned __int64)v16;
  if (v16 == v15) {
    v14 = 32;
  }
  else {
    if (v16 == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (*(__int64 (**)(__int64))(*v16 + v14))((__int64)v16);
}

__int64 ResourceBuilder_b4dee0(_DWORD* a1, __int64 a2)
{
  int v2;
  bool v4;
  int v5;
  int v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  _DWORD* v11;
  __int64 i;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 result;

  v2 = a1[66];
  v4 = v2 < -1;
  v5 = ((_BYTE)v2 + 1) & 1;
  if (v4) {
    v5 = -v5;
  }
  a1[66] = v5;
  v6 = *(_DWORD*)(a2 + 24);
  v7 = *(_QWORD*)&a1[2 * v5 + 62];
  v8 = (float)(*(float*)&GameData_21675c4 / *(float*)&GameData_21675c0) *
       *(float*)(a2 + 16);
  v9 = v8 * *(float*)(a2 + 20);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7);
  *(_DWORD*)(v10 + 16) = v6;
  *(float*)v10 = v8;
  *(float*)(v10 + 4) = v8 - v9;
  *(float*)(v10 + 8) = v9 + v9;
  *(float*)(v10 + 12) = 0.25 / (float)(v9 + 0.00001);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
  v11 = a1 + 76;
  for (i = 0; i != 4; ++i) {
    v13 = v11[4];
    v14 = 2 << i;
    v4 = v13 < -1;
    v15 = ((_BYTE)v13 + 1) & 1;
    if (v4) {
      v15 = -v15;
    }
    v11[4] = v15;
    v16 = *(_QWORD*)&v11[2 * v15];
    v17 = *(_DWORD*)(*(_QWORD*)a1 + 13312LL);
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
    *(_DWORD*)(v18 + 4) = 0;
    *(float*)v18 = 1.0 / (float)(v17 / v14);
    (*(void (**)(__int64))(*(_QWORD*)v16 + 64LL))(v16);
    v19 = v11[18];
    v4 = v19 < -1;
    v20 = ((_BYTE)v19 + 1) & 1;
    if (v4) {
      v20 = -v20;
    }
    v11[18] = v20;
    v21 = *(_QWORD*)&v11[2 * v20 + 14];
    v22 = *(_DWORD*)(*(_QWORD*)a1 + 13316LL);
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 56LL))(v21);
    *(_DWORD*)v23 = 0;
    *(float*)(v23 + 4) = 1.0 / (float)(v22 / v14);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 64LL))(v21);
    v11 += 28;
  }
  return result;
}

void ResourceBuilder_b4e130(__int64 a1, __int64 a2)
{
  *(_WORD*)(a2 + 6) = 42;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 4) = 2;
}

__int64 ResourceBuilder_b4f9e0(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = a1[13];
  a1[13] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = a1[12];
  a1[12] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = a1[7];
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[8] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = a1[4];
  if (v8 != 0) {
    v9 = *v5;
    a1[5] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = a1[1];
  if (v11 != 0) {
    v12 = *v5;
    a1[2] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    return nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  return result;
}

bool ResourceBuilder_b50600(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  _BOOL8 result;
  bool v9;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 32);
  v3 = *(_QWORD*)(v2 + 40);
  if (v4 == v3) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 + 4;
  do {
    v7 = *(_DWORD*)(v6 - 4);
    result = v7 == v5;
    v9 = v7 == v5 || v6 == v3;
    v6 += 4;
  } while (!v9);
  return result;
}

bool ResourceBuilder_b50740(__int64 a1, __int64 a2)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(char**)(v2 + 8);
  v4 = *(char**)(v2 + 16);
  if (v3 == v4) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 - v3 - 4;
  if ((~(_BYTE)v6 & 0xC) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
    do {
      v8 = *(_DWORD*)v3;
      v3 += 4;
      if (v8 == v5) {
        return (*(_DWORD*)(a2 + 16) & 4) == 0;
      }
    } while (--v7 != 0);
  }
  if (v6 < 0xC) {
    return false;
  }
  while (*(_DWORD*)v3 != v5 && *((_DWORD*)v3 + 1) != v5 &&
         *((_DWORD*)v3 + 2) != v5 && *((_DWORD*)v3 + 3) != v5) {
    v3 += 16;
    if (v3 == v4) {
      return false;
    }
  }
  return (*(_DWORD*)(a2 + 16) & 4) == 0;
}

bool ResourceBuilder_b508e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(char**)(v2 + 56);
  v4 = *(char**)(v2 + 64);
  if (v3 == v4) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 - v3 - 4;
  if ((~(_BYTE)v6 & 0xC) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
    do {
      v8 = *(_DWORD*)v3;
      v3 += 4;
      if (v8 == v5) {
        return (*(_DWORD*)(a2 + 16) & 4) == 0;
      }
    } while (--v7 != 0);
  }
  if (v6 < 0xC) {
    return false;
  }
  while (*(_DWORD*)v3 != v5 && *((_DWORD*)v3 + 1) != v5 &&
         *((_DWORD*)v3 + 2) != v5 && *((_DWORD*)v3 + 3) != v5) {
    v3 += 16;
    if (v3 == v4) {
      return false;
    }
  }
  return (*(_DWORD*)(a2 + 16) & 4) == 0;
}

__int64 ResourceBuilder_b51360(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 17, *v2 + 568);
  v3 = a1[73];
  a1[73] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[72];
  a1[72] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[66];
  a1[66] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[65];
  a1[65] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  ResourceBuilder_b51420(a1 + 33);
  GameRoutine_604050(a1 + 17);
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b51420(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD*)(result + 248);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[29];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[27];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[25];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v2[23];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v2[21];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v2[19];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v2[17];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = v2[15];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v2[13];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v2[11];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v2[9];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
  }
  v14 = v2[7];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = v2[5];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v2[3];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
    v17 = v2[1];
    if (v17 == 0) {
      return result;
    }
  }
  else {
    v17 = v2[1];
    if (v17 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak(v17);
  }
  return result;
}

__int64 ResourceBuilder_b51760(_DWORD* a1, __int64 a2, __int64* a3)
{
  int v3;
  bool v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v3 = a1[134];
  v6 = v3 < -1;
  v7 = ((_BYTE)v3 + 1) & 1;
  if (v6) {
    v7 = -v7;
  }
  a1[134] = v7;
  v8 = *a3;
  v9 = *(_QWORD*)&a1[2 * v7 + 130];
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
  v11 = (int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v11 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v12 = 1.0 / (float)((float)v11[1] * 0.5);
  *(float*)v10 = 1.0 / (float)((float)*v11 * 0.5);
  *(float*)(v10 + 4) = v12;
  if (v8 != 0) {
    v13 = 128;
    if (*(_BYTE*)(v8 + 96) != 0) {
      v13 = 92;
    }
    *(_DWORD*)(v10 + 8) = *(_DWORD*)(v8 + v13);
    v14 = 208;
    if (*(_BYTE*)(v8 + 176) != 0) {
      v14 = 172;
    }
    v15 = *(_DWORD*)(v8 + v14);
  }
  else {
    v15 = 0;
    *(_DWORD*)(v10 + 8) = 1112014848;
  }
  *(_DWORD*)(v10 + 20) = v15;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  v16 = a3[1];
  v17 = *(_QWORD*)&a1[2 * a1[148] + 144];
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
  v19 = *(_DWORD*)(v16 + 16);
  v20 = *(_QWORD*)(v16 + 8);
  *(_DWORD*)(v18 + 12) = 0;
  *(_QWORD*)v18 = v20;
  *(_DWORD*)(v18 + 8) = v19;
  v21 = *(_DWORD*)(v16 + 28);
  v22 = *(_DWORD*)(v16 + 56);
  *(_QWORD*)(v18 + 16) = *(_QWORD*)(v16 + 20);
  *(_DWORD*)(v18 + 24) = v21;
  *(_DWORD*)(v18 + 28) = v22;
  v23 = *(_DWORD*)(v16 + 40);
  v24 = *(_DWORD*)(v16 + 60);
  *(_QWORD*)(v18 + 32) = *(_QWORD*)(v16 + 32);
  *(_DWORD*)(v18 + 40) = v23;
  *(_DWORD*)(v18 + 44) = v24;
  v25 = *(_DWORD*)(v16 + 52);
  v26 = *(_DWORD*)(v16 + 64);
  *(_QWORD*)(v18 + 48) = *(_QWORD*)(v16 + 44);
  *(_DWORD*)(v18 + 56) = v25;
  *(_DWORD*)(v18 + 60) = v26;
  *(_DWORD*)(v18 + 64) = 1077936128;
  *(_DWORD*)(v18 + 68) = *(_DWORD*)(v16 + 4);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
}

__int64 ResourceBuilder_b52130(int* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               _QWORD* a5)
{
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
  unsigned int* v24;
  unsigned int v25;
  unsigned int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v44;
  _QWORD v46[4];
  _QWORD* v47;
  _QWORD v48[6];

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  v12 = v11;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  v16 = v15;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 32LL))(v17);
  v20 = v19;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v48[4] = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
  v48[5] = v22;
  v23 = *a4;
  v48[0] = v10;
  v48[1] = v12;
  v48[2] = v14;
  v48[3] = v16;
  (*(void (**)(__int64, __int64, _QWORD*, __int64, __int64))(
      *(_QWORD*)v23 + 128LL))(v23, 3, v48, v18, v20);
  v24 = (unsigned int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v24 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v26 = *v24;
  v25 = v24[1];
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *v24, v25);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v26, v25);
  if (*((_BYTE*)a5 + 8) != 1) {
    return 0;
  }
  v27 = a2;
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v30 = v29 + 16LL * *(int*)(v29 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v28 + 224LL))(v28, 3, 0, *(_QWORD*)(v30 + 24),
                              *(_QWORD*)(v30 + 32));
  v31 = *a4;
  v32 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v27[1] + 16LL))(v27[1]);
  v33 = v32 + 16LL * *(int*)(v32 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v31 + 224LL))(v31, 3, 1, *(_QWORD*)(v33 + 24),
                              *(_QWORD*)(v33 + 32));
  v34 = *a4;
  v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v27[2] + 16LL))(v27[2]);
  v36 = v35 + 16LL * *(int*)(v35 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v34 + 224LL))(v34, 3, 9, *(_QWORD*)(v36 + 24),
                              *(_QWORD*)(v36 + 32));
  v37 = &a1[4 * a1[6]];
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 12, *((_QWORD*)v37 + 4),
                              *((_QWORD*)v37 + 5));
  v38 = a5[2] + 16LL * *(int*)(a5[2] + 16LL);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *(_QWORD*)(v38 + 24),
                              *(_QWORD*)(v38 + 32));
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v39 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v39, (unsigned int)GameData_21fded0);
  gxc_NvnStateCache_BindBlendState(v39, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v39, (unsigned int)GameData_21fdf0c);
  gxc_NvnStateCache_BindMultisampleState(v39, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  gxc_NvnStateCache_LockPolygonState(a4[1]);
  v40 = *a5;
  if (*((_BYTE*)a5 + 9) != 1) {
    v46[0] = GameData_1fc5c20;
    v46[1] = a5;
    v47 = v46;
    v41 = GameRoutine_a738c0(v40, v46, 2);
    if (v47 == v46) {
      v44 = 32;
    }
    else {
      if (v47 == nullptr) {
      LABEL_17:
        GameRoutine_a73e50(*a5, a4);
        goto LABEL_18;
      }
      v44 = 40;
    }
    (*(void (**)(__int64))(*v47 + v44))((__int64)v47);
    goto LABEL_17;
  }
  v46[0] = GameData_1fc5ba0;
  v46[1] = a5;
  v47 = v46;
  v41 = GameRoutine_a738c0(v40, v46, 2);
  if (v47 == v46) {
    v42 = 32;
    goto LABEL_13;
  }
  if (v47 != nullptr) {
    v42 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v47 + v42))((__int64)v47);
  }
  GameRoutine_a73d40(*a5, a4);

LABEL_18:
  gxc_NvnStateCache_UnlockPolygonState(a4[1]);
  return v41;
}

bool ResourceBuilder_b525c0(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL) &&
         (*(_DWORD*)(a2 + 16) & 4) != 0;
}

__int64 ResourceBuilder_b528e0(__int64* a1, unsigned __int8* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;

  v3 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v7 = (v3 & 1) == 0;
  v8 = *a1;
  v9 = v3 >> 1;
  if (v7) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v11 = v9;
  }
  else {
    v11 = v4;
  }
  v12 = ResourceBuilder_b53170(v8, v10, v11, a3);
  v13 = (_QWORD*)a1[1];
  v14 = v12;
  v16 = (__int64*)v13[5];
  v15 = v13[6];
  if ((unsigned __int64)v16 >= v15) {
    v18 = v13[4];
    v19 = (char*)v16 - v18;
    v20 = ((__int64)v16 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v22 = v15 - v18;
    v23 = fw_memory_g_heap_manager_ptr;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(v12);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v16 - v18;
    v28 = (__int64)&v19[v25 + -8 * v20];
    *(_QWORD*)&v19[v25] = v14;
    v17 = (__int64)&v19[v25 + 8];
    memcpy(v28, v18, v27);
    v13[4] = v28;
    v13[5] = v17;
    v13[6] = v26;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v29, v18);
    }
  }
  else {
    *v16 = v12;
    v17 = (__int64)(v16 + 1);
  }
  v13[5] = v17;
  return v14;
}

__int64 ResourceBuilder_b53170(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                               __int64* a4)
{
  _QWORD* v8;
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
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v9, v10, v11);
  }
  v12 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (a3 | 7) + 1;
    }
    v13 = fw_memory_HeapManager_Allocate(*v8, v14, 16, 0);
    *(_QWORD*)(v12 + 16) = a3;
    *(_QWORD*)(v12 + 24) = v13;
    *(_QWORD*)(v12 + 8) = v14 | 1;
    goto LABEL_9;
  }
  v13 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    v9 = memmove(v13, a2, a3);
  }
  *(_BYTE*)(v13 + a3) = 0;
  *(_BYTE*)(v12 + 32) = 0;
  *(_QWORD*)v12 = gfx_flow_ResourceBase_Destroy_ResourceBase_b32fd0_ptr;
  v15 = *a4;
  v16 = a4[1];
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = v15;
  v17 = a4[2];
  v18 = a4[3];
  *(_QWORD*)(v12 + 56) = v16;
  *(_QWORD*)(v12 + 64) = v17;
  *(_QWORD*)(v12 + 72) = v18;
  v20 = (__int64*)a1[4];
  v19 = a1[5];
  if ((unsigned __int64)v20 >= v19) {
    v22 = a1[3];
    v23 = (char*)v20 - v22;
    v24 = ((__int64)v20 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      GameRoutine_b32fb0(v9);
    }
    v26 = v19 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v28 = fw_memory_HeapManager_Allocate(*v8, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (char*)v20 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v12;
    v21 = (__int64)&v23[v28 + 8];
    memcpy(v31, v22, v30);
    a1[3] = v31;
    a1[4] = v21;
    a1[5] = v29;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v32, v22);
    }
  }
  else {
    *v20 = v12;
    v21 = (__int64)(v20 + 1);
  }
  a1[4] = v21;
  return *(_QWORD*)(v21 - 8);
}

__int64 ResourceBuilder_b533e0(__int64 a1)
{
  __int64 result;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22030f0) != 0) {
    GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
    __cxa_guard_release(&GameData_22030f0);
  }
  result = SyncResource_b33520(&GameData_2203088, (__int64*)(a1 + 48));
  *(_QWORD*)(a1 + 40) = result;
  return result;
}

__int64 ResourceBuilder_b53460(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 40);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v3 = v1;
    result = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v3;
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = __cxa_guard_release(&GameData_22030f0);
      v1 = v3;
    }
  }
  v2 = GameData_22030b8;
  if (GameData_22030b8 != GameData_22030c0) {
    while (*(_QWORD*)(v2 + 8) != v1) {
      v2 += 48;
      if (v2 == GameData_22030c0) {
        return result;
      }
    }
  }
  if (v2 != GameData_22030c0) {
    *(_BYTE*)v2 = 0;
  }
  return result;
}

bool ResourceBuilder_b536a0(__int64 a1, __int64 a2)
{
  char** v2;
  char* v3;
  char* v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(char***)(a1 + 8);
  v3 = *v2;
  v4 = v2[1];
  if (v3 == v4) {
    return false;
  }
  v5 = *(_DWORD*)(a2 + 12);
  v6 = v4 - v3 - 4;
  if ((~(_BYTE)v6 & 0xC) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
    do {
      v8 = *(_DWORD*)v3;
      v3 += 4;
      if (v8 == v5) {
        return (*(_DWORD*)(a2 + 16) & 4) == 0;
      }
    } while (--v7 != 0);
  }
  if (v6 < 0xC) {
    return false;
  }
  while (*(_DWORD*)v3 != v5 && *((_DWORD*)v3 + 1) != v5 &&
         *((_DWORD*)v3 + 2) != v5 && *((_DWORD*)v3 + 3) != v5) {
    v3 += 16;
    if (v3 == v4) {
      return false;
    }
  }
  return (*(_DWORD*)(a2 + 16) & 4) == 0;
}

__int64 ResourceBuilder_b538b0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                               __int64 a5)
{
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
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
  __int64 v24;
  _QWORD v26[4];
  _QWORD* v27;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 13, *(_QWORD*)(a1 + 192),
                              *(_QWORD*)(a1 + 200), *(unsigned int*)(a1 + 128));
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v10 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v10, (unsigned int)GameData_21fdec4);
  gxc_NvnStateCache_BindBlendState(v10, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v10, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v10, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 168LL))(*a4, 1);
  v11 = *(_DWORD*)(a2 + 64);
  if (v11 < 1) {
    v24 = 0;
    goto LABEL_13;
  }
  v12 = 0;
  v13 = 0;
  do {
    if (((*(_QWORD*)(a5 + 8) >> v12) & 1) == 0) {
      v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8 * v12 + 24) + 16LL))(
          *(_QWORD*)(a2 + 8 * v12 + 24));
      v16 = v15 + 16LL * *(int*)(v15 + 16);
      (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 224LL))(*a4, 1, 0, *(_QWORD*)(v16 + 24),
                                  *(_QWORD*)(v16 + 32));
      v17 = *a4;
      v18 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8 * v12) + 16LL))(
          *(_QWORD*)(a3 + 8 * v12));
      v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v17 + 112LL))(v17, v19,
                                                                       v20);
      LODWORD(v17) = *(_DWORD*)(a2 + 4 * v12);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, (unsigned int)v17,
                                 (unsigned int)v17);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, (unsigned int)v17,
                                 (unsigned int)v17);
      v21 = *(_QWORD*)(a5 + 16 + 8 * v12);
      v22 = *(unsigned __int8*)(a5 + 60);
      v27 = v26;
      v26[0] = GameData_1fc5e40;
      v26[1] = a5;
      v23 = GameRoutine_a738c0(v21, v26, v22);
      if (v27 == v26) {
        v14 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_5;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v27 + v14))((__int64)v27);
    LABEL_5:
      v13 += v23;
      GameRoutine_a73e50(v21, a4);
      v11 = *(_DWORD*)(a2 + 64);
    }
    ++v12;
  } while (v12 < v11);
  v24 = v13;

LABEL_13:
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a4 + 168LL))(*a4, 0);
  return v24;
}

void ResourceBuilder_b53be0(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

bool ResourceBuilder_b53ce0(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 56LL);
}

__int64 ResourceBuilder_b540f0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(result + 88);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[9];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[7];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[5];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v2[3];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
    v7 = v2[1];
    if (v7 == 0) {
      return result;
    }
  }
  else {
    v7 = v2[1];
    if (v7 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

__int64 ResourceBuilder_b54250(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  int v4;
  bool v5;
  int v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  __int64 v12;
  float32x4_t v13;
  unsigned int v14;
  __int64 v15;
  float32x4_t v16;
  __int64 v17;
  float32x4_t v18;
  unsigned int v19;
  __int64 v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  unsigned int v24;
  __int64 v25;
  float32x4_t v26;
  __int64 v27;
  float32x4_t v28;
  unsigned int v29;
  __int64 v30;
  float32x4_t v31;
  __int64 v32;
  float32x4_t v33;
  unsigned int v34;
  __int64 v35;
  float32x4_t v36;
  __int64 v37;
  float32x4_t v38;
  unsigned int v39;
  __int64 v40;
  float32x4_t v41;
  __int64 v42;
  float32x4_t v43;
  unsigned int v44;
  __int64 v45;
  float32x4_t v46;
  __int64 v47;
  float32x4_t v48;
  unsigned int v49;
  __int64 v50;
  float32x4_t v51;
  __int64 v52;
  float32x4_t v53;
  unsigned int v54;
  __int64 v55;
  float32x4_t v56;
  __int64 v57;
  float32x4_t v58;
  unsigned int v59;
  __int64 v60;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float v71;
  float32x4_t v72;

  v2 = *(_BYTE**)(a2 + 8);
  v4 = *(_DWORD*)(a1 + 120);
  v5 = v4 < -1;
  v6 = ((_BYTE)v4 + 1) & 1;
  v7 = *(float*)&GameData_21675c4 / *(float*)&GameData_21675c0;
  if (v5) {
    v6 = -v6;
  }
  *(_DWORD*)(a1 + 120) = v6;
  v8 = *(_QWORD*)(a1 + 8LL * v6 + 104);
  v71 = v7;
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  v10 = 176;
  if (v2[128] != 0) {
    v10 = 112;
  }
  v11 = *(float32x4_t*)&v2[v10];
  v12 = 264;
  v13 = vmulq_n_f32(v11, v71);
  if (v2[232] != 0) {
    v12 = 228;
  }
  v62 = v13;
  *(float*)&v14 = powf(*(float*)&v2[v12], 2.2f);
  *(_QWORD*)v9 =
      ((uint32_t*)&v62)[0] | ((unsigned __int64)((uint32_t*)&v62)[1] << 32);
  *(_QWORD*)(v9 + 8) = ((uint32_t*)&v62)[2] | ((unsigned __int64)v14 << 32);
  v15 = 592;
  if (v2[544] != 0) {
    v15 = 528;
  }
  v16 = *(float32x4_t*)&v2[v15];
  v17 = 680;
  v18 = vmulq_n_f32(v16, v71);
  if (v2[648] != 0) {
    v17 = 644;
  }
  v63 = v18;
  *(float*)&v19 = powf(*(float*)&v2[v17], 2.2f);
  *(_QWORD*)(v9 + 16) =
      ((uint32_t*)&v63)[0] | ((unsigned __int64)((uint32_t*)&v63)[1] << 32);
  *(_QWORD*)(v9 + 24) = ((uint32_t*)&v63)[2] | ((unsigned __int64)v19 << 32);
  v20 = 1008;
  if (v2[960] != 0) {
    v20 = 944;
  }
  v21 = *(float32x4_t*)&v2[v20];
  v22 = 1096;
  v23 = vmulq_n_f32(v21, v71);
  if (v2[1064] != 0) {
    v22 = 1060;
  }
  v64 = v23;
  *(float*)&v24 = powf(*(float*)&v2[v22], 2.2f);
  *(_QWORD*)(v9 + 32) =
      ((uint32_t*)&v64)[0] | ((unsigned __int64)((uint32_t*)&v64)[1] << 32);
  *(_QWORD*)(v9 + 40) = ((uint32_t*)&v64)[2] | ((unsigned __int64)v24 << 32);
  v25 = 1424;
  if (v2[1376] != 0) {
    v25 = 1360;
  }
  v26 = *(float32x4_t*)&v2[v25];
  v27 = 1512;
  v28 = vmulq_n_f32(v26, v71);
  if (v2[1480] != 0) {
    v27 = 1476;
  }
  v65 = v28;
  *(float*)&v29 = powf(*(float*)&v2[v27], 2.2f);
  *(_QWORD*)(v9 + 48) =
      ((uint32_t*)&v65)[0] | ((unsigned __int64)((uint32_t*)&v65)[1] << 32);
  *(_QWORD*)(v9 + 56) = ((uint32_t*)&v65)[2] | ((unsigned __int64)v29 << 32);
  v30 = 1840;
  if (v2[1792] != 0) {
    v30 = 1776;
  }
  v31 = *(float32x4_t*)&v2[v30];
  v32 = 1928;
  v33 = vmulq_n_f32(v31, v71);
  if (v2[1896] != 0) {
    v32 = 1892;
  }
  v66 = v33;
  *(float*)&v34 = powf(*(float*)&v2[v32], 2.2f);
  *(_QWORD*)(v9 + 64) =
      ((uint32_t*)&v66)[0] | ((unsigned __int64)((uint32_t*)&v66)[1] << 32);
  *(_QWORD*)(v9 + 72) = ((uint32_t*)&v66)[2] | ((unsigned __int64)v34 << 32);
  v35 = 384;
  if (v2[336] != 0) {
    v35 = 320;
  }
  v36 = *(float32x4_t*)&v2[v35];
  v37 = 472;
  v38 = vmulq_n_f32(v36, v71);
  if (v2[440] != 0) {
    v37 = 436;
  }
  v67 = v38;
  *(float*)&v39 = powf(*(float*)&v2[v37], 2.2f);
  *(_QWORD*)(v9 + 80) =
      ((uint32_t*)&v67)[0] | ((unsigned __int64)((uint32_t*)&v67)[1] << 32);
  *(_QWORD*)(v9 + 88) = ((uint32_t*)&v67)[2] | ((unsigned __int64)v39 << 32);
  v40 = 800;
  if (v2[752] != 0) {
    v40 = 736;
  }
  v41 = *(float32x4_t*)&v2[v40];
  v42 = 888;
  v43 = vmulq_n_f32(v41, v71);
  if (v2[856] != 0) {
    v42 = 852;
  }
  v68 = v43;
  *(float*)&v44 = powf(*(float*)&v2[v42], 2.2f);
  *(_QWORD*)(v9 + 96) =
      ((uint32_t*)&v68)[0] | ((unsigned __int64)((uint32_t*)&v68)[1] << 32);
  *(_QWORD*)(v9 + 104) = ((uint32_t*)&v68)[2] | ((unsigned __int64)v44 << 32);
  v45 = 1216;
  if (v2[1168] != 0) {
    v45 = 1152;
  }
  v46 = *(float32x4_t*)&v2[v45];
  v47 = 1304;
  v48 = vmulq_n_f32(v46, v71);
  if (v2[1272] != 0) {
    v47 = 1268;
  }
  v69 = v48;
  *(float*)&v49 = powf(*(float*)&v2[v47], 2.2f);
  *(_QWORD*)(v9 + 112) =
      ((uint32_t*)&v69)[0] | ((unsigned __int64)((uint32_t*)&v69)[1] << 32);
  *(_QWORD*)(v9 + 120) = ((uint32_t*)&v69)[2] | ((unsigned __int64)v49 << 32);
  v50 = 1632;
  if (v2[1584] != 0) {
    v50 = 1568;
  }
  v51 = *(float32x4_t*)&v2[v50];
  v52 = 1720;
  v53 = vmulq_n_f32(v51, v71);
  if (v2[1688] != 0) {
    v52 = 1684;
  }
  v70 = v53;
  *(float*)&v54 = powf(*(float*)&v2[v52], 2.2f);
  *(_QWORD*)(v9 + 128) =
      ((uint32_t*)&v70)[0] | ((unsigned __int64)((uint32_t*)&v70)[1] << 32);
  *(_QWORD*)(v9 + 136) = ((uint32_t*)&v70)[2] | ((unsigned __int64)v54 << 32);
  v55 = 2048;
  if (v2[2000] != 0) {
    v55 = 1984;
  }
  v56 = *(float32x4_t*)&v2[v55];
  v57 = 2136;
  v58 = vmulq_n_f32(v56, v71);
  if (v2[2104] != 0) {
    v57 = 2100;
  }
  v72 = v58;
  *(float*)&v59 = powf(*(float*)&v2[v57], 2.2f);
  *(_QWORD*)(v9 + 144) =
      ((uint32_t*)&v72)[0] | ((unsigned __int64)((uint32_t*)&v72)[1] << 32);
  *(_QWORD*)(v9 + 152) = ((uint32_t*)&v72)[2] | ((unsigned __int64)v59 << 32);
  *(_DWORD*)(v9 + 160) = *(_DWORD*)(a2 + 16);
  v60 = 2296;
  if (v2[2264] != 0) {
    v60 = 2260;
  }
  *(_DWORD*)(v9 + 164) = *(_DWORD*)&v2[v60];
  return (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
}

__int64 ResourceBuilder_b561b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  GameRoutine_6040f0(a1 + 42, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 42);
  ResourceBuilder_b56300(a1 + 26);
  v2 = a1[25];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[23];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[16];
  a1[16] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[15];
  a1[15] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[9];
  a1[9] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[8];
  a1[8] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[2];
  a1[2] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 ResourceBuilder_b56300(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(result + 120);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[13];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[11];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[9];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v2[7];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v2[5];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v2[3];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
    v9 = v2[1];
    if (v9 == 0) {
      return result;
    }
  }
  else {
    v9 = v2[1];
    if (v9 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 ResourceBuilder_b564c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                               __int64 a5)
{
  int v5;
  bool v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *(_DWORD*)(a1 + 136);
  v10 = v5 < -1;
  v11 = ((_BYTE)v5 + 1) & 1;
  if (v10) {
    v11 = -v11;
  }
  *(_DWORD*)(a1 + 136) = v11;
  GameRoutine_b55630((__int64*)a1, *(_QWORD*)(a1 + 8LL * v11 + 120),
                     *(_BYTE**)a5);
  v12 = *(_DWORD*)(a1 + 24);
  v10 = v12 < -1;
  v13 = ((_BYTE)v12 + 1) & 1;
  if (v10) {
    v13 = -v13;
  }
  *(_DWORD*)(a1 + 24) = v13;
  v14 = *(_QWORD*)(a1 + 8LL * v13 + 8);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14);
  *(_DWORD*)(v15 + 40) = 1115684864;
  *(_QWORD*)v15 = 0x4280000042800000LL;
  *(_QWORD*)(v15 + 8) = 1115684864;
  *(_QWORD*)(v15 + 16) = 0x3F8208213F820821LL;
  *(_QWORD*)(v15 + 24) = 0x428000003F820821LL;
  *(_QWORD*)(v15 + 32) = 0x3C00000039000000LL;
  (*(void (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14);
  if (*(_BYTE*)(a5 + 8) == 1) {
    return ResourceBuilder_b56a20(a1, v16, a3, a4);
  }
  else {
    return GameRoutine_b56bf0(a1, v16, a3, a4);
  }
}

__int64 ResourceBuilder_b56a20(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  _QWORD v22[2];
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  v10 = v9;
  v11 = (*(__int64 (**)(void))GameData_212e778[0])();
  v12 = ((__int64 (*)(__int64))*GameData_212e780)(v8);
  v13 = (*(__int64 (**)(__int64))GameData_212e798[0])(v8);
  v26 = v12;
  v27 = v13;
  v24 = 0;
  v25 = v11;
  v14 = v13;
  v15 = *a4 + 8LL;
  v22[1] = 0;
  v23 = 0;
  v22[0] = 0;
  (*(void (**)(__int64, __int64, __int64, __int64*, _QWORD*,
               __int64))GameData_212e7a0[0])(v15, v8, v10, &v23, v22, 15);
  v16 = a1 + 16LL * *(int*)(a1 + 24);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v16 + 32),
                              *(_QWORD*)(v16 + 40));
  v17 = a1 + 16LL * *(int*)(a1 + 136);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 1, *(_QWORD*)(v17 + 144),
                              *(_QWORD*)(v17 + 152));
  v18 = *a4;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 48LL))(v19);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v18 + 256LL))(
      v18, 8, 0, v20);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 192) + 144LL));
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 304LL))(*a4, (unsigned int)(v11 / 8),
                              (unsigned int)(v12 / 8), (unsigned int)(v14 / 8));
}

bool ResourceBuilder_b574c0(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL) &&
         *(float*)(a2 + 4) > 0.5;
}

bool ResourceBuilder_b575f0(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL) &&
         *(float*)(a2 + 4) < 0.5;
}

__int64 ResourceBuilder_b57de0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v9;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_b36540(*(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                     (__int64)(a1 + 97));
  GameRoutine_6040f0(a1 + 33, *v2 + 568);
  GameRoutine_6040f0(a1 + 17, *v2 + 568);
  GameRoutine_6040f0(a1 + 1, *v2 + 568);
  v3 = a1[110];
  a1[110] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[109];
  a1[109] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[103];
  a1[103] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[102];
  a1[102] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[101];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  for (i = 96; i != 48; i -= 2) {
    v9 = a1[i];
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  GameRoutine_604050(a1 + 33);
  GameRoutine_604050(a1 + 17);
  return GameRoutine_604050(a1 + 1);
}

void ResourceBuilder_b592a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void ResourceBuilder_b59390(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

void ResourceBuilder_b59480(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 2;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

__int64 ResourceBuilder_b594d0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int* a4)
{
  __int64 v7;
  __int64 v8;
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
  unsigned int v21;
  __int64 v22;
  _QWORD v24[4];
  _QWORD* v25;

  v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a3 + 112LL))(*a3, v8, v9);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
      *a3, 0, 0, *a4, a4[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 88LL))(
      *a3, 0, 0, *a4, a4[1]);
  gxc_NvnStateCache_Reset(a3[1]);
  gxc_NvnStateCache_SetCommandList(a3[1], *a3);
  v10 = a3[1];
  gxc_NvnStateCache_BindDepthStencilState(v10, (unsigned int)GameData_21fded0);
  gxc_NvnStateCache_BindBlendState(v10, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v10, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v10, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a3[1]);
  v11 = *a3;
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 16LL))(*a1);
  v13 = v12 + 16LL * *(int*)(v12 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v11 + 224LL))(v11, 3, 0, *(_QWORD*)(v13 + 24),
                              *(_QWORD*)(v13 + 32));
  v14 = *a3;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 16LL))(a1[1]);
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 224LL))(v14, 3, 1, *(_QWORD*)(v16 + 24),
                              *(_QWORD*)(v16 + 32));
  v17 = *a3;
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[2] + 16LL))(a1[2]);
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 9, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32));
  v20 = *((_QWORD*)a4 + 1);
  v24[0] = GameData_1fc6240;
  v24[1] = a4;
  v25 = v24;
  v21 = GameRoutine_a738c0(v20, v24, 2);
  if (v25 == v24) {
    v22 = 32;
    goto LABEL_5;
  }
  if (v25 != nullptr) {
    v22 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v25 + v22))((__int64)v25);
  }
  GameRoutine_a73e50(*((_QWORD*)a4 + 1), a3);
  return v21;
}

bool ResourceBuilder_b597a0(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
}

__int64 ResourceBuilder_b59ce0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  v2 = a1[26];
  a1[26] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[25];
  a1[25] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[24];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[22];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[20];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[18];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b5a4b0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD**)(a1 + 8);
  v5 = (_QWORD*)v2[8];
  v4 = v2[9];
  if ((unsigned __int64)v5 >= v4) {
    v7 = v2[7];
    v8 = (char*)v5 - v7;
    v9 = ((__int64)v5 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v11 = v4 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 2 > v10) {
      v10 = v11 >> 2;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (char*)v5 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = a2;
    v6 = (__int64)&v8[v14 + 8];
    memcpy(v17, v7, v16);
    v2[7] = v17;
    v2[8] = v6;
    v2[9] = v15;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18, v7);
    }
  }
  else {
    *v5 = a2;
    v6 = (__int64)(v5 + 1);
  }
  v2[8] = v6;
  return a2;
}

__int64 ResourceBuilder_b5a9c0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                               int* a5)
{
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v6 = *a4;
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  (*(void (**)(__int64))GameData_212e7b0[0])(a1 + 8);
  (*(void (**)(__int64, __int64, _QWORD))GameData_212e7b8[0])(a1 + 8, v11, 0);
  v14 = (*(__int64 (**)(__int64))GameData_212e778[0])(v11);
  v15 = ((__int64 (*)(__int64))*GameData_212e780)(v11);
  (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e7c0[0])(a1 + 8, v14, v15);
  (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e7c8[0])(a1 + 8, 0, 0);
  (*(void (**)(__int64, __int64, _QWORD))GameData_212e7d0[0])(a1 + 8, v13, 0);
  (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e7d8[0])(a1 + 8, 0, 0);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  (*(void (**)(__int64, __int64, _QWORD))GameData_212e7e0[0])(a1 + 8, v17, 0);
  (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e7e8[0])(a1 + 8, 0, 0);
  (*(void (**)(__int64, float, float))GameData_212e7f0[0])(a1 + 8, (float)a5[4],
                                                           (float)a5[5]);
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
  (*(void (**)(__int64, __int64, _QWORD))GameData_212e7f8[0])(a1 + 8, v19, 0);
  (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e800[0])(a1 + 8, 0, 0);
  (*(void (**)(__int64, _QWORD))GameData_212e808[0])(
      a1 + 8, *((unsigned __int8*)a5 + 32));
  (*(void (**)(__int64, float, float))GameData_212e810[0])(
      a1 + 8, *((float*)a5 + 6), *((float*)a5 + 7));
  if (*((_BYTE*)a5 + 33) == 1) {
    v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
    v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
    (*(void (**)(__int64, __int64, _QWORD))GameData_212e818[0])(a1 + 8, v21, 0);
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_212e820[0])(a1 + 8, 0, 0);
  }
  v22 = *(_QWORD*)a5;
  (*(void (**)(__int64, _QWORD))GameData_21321c8[0])(
      a1 + 8, *(unsigned int*)(v22 + 2120));
  return ((__int64 (*)(__int64, __int64, __int64))*GameData_21321d0)(
      v6 + 8, v22 + 40, a1 + 8);
}

__int64 ResourceBuilder_b5b3c0(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  GameRoutine_6040f0(a1 + 22, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 22);
  v2 = a1[16];
  a1[16] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = a1[15];
  a1[15] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = a1[14];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[12];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[10];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[8];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[4];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  else {
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 ResourceBuilder_b5c4b0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 19, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 3, *v2 + 568);
  v3 = a1[36];
  a1[36] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[35];
  a1[35] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  GameRoutine_604050(a1 + 19);
  result = GameRoutine_604050(a1 + 3);
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ResourceBuilder_b5d4d0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 18, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 2, *v2 + 568);
  GameRoutine_6040f0(a1 + 34, *v2 + 568);
  v3 = a1[65];
  a1[65] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[64];
  a1[64] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[58];
  a1[58] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[57];
  a1[57] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[51];
  a1[51] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[50];
  a1[50] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  GameRoutine_604050(a1 + 34);
  GameRoutine_604050(a1 + 18);
  result = GameRoutine_604050(a1 + 2);
  v10 = a1[1];
  a1[1] = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
  }
  return result;
}

__int64 ResourceBuilder_b5ed80(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4,
                               int a5)
{
  __int64 result;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)(void);
  unsigned int (**v14)(__int64);
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(void);
  __int64 v25;
  int v26;
  unsigned int (*v27)(__int64);
  int v28;
  unsigned int (*v29)(__int64);
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 (*v40)(void);
  __int64 v41;
  int v42;
  unsigned int (*v43)(__int64);
  int v44;
  unsigned int (*v45)(__int64);
  _QWORD v46[2];
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  result = ((__int64 (*)(__int64, __int64))*GameData_212e738)(*a2 + 8, 49);
  v10 = eft_g_effectSystem_ptr[0];
  v11 = *a2;
  v12 = *eft_g_effectSystem_ptr[0];
  v13 = (__int64 (**)(void))GameData_212e778[0];
  v14 = (unsigned int (**)(__int64))GameData_212e780;
  if (*(_QWORD*)(*(_QWORD*)(*eft_g_effectSystem_ptr[0] + 296) - 16LL) !=
      *(_QWORD*)(*(_QWORD*)(*eft_g_effectSystem_ptr[0] + 296) - 24LL)) {
    v15 = 1976;
    v16 = 0;
    while (1) {
      result = Config_bc4f00(v12, (unsigned int)v16, 0xFFFFFFFFLL);
      if ((result & 1) != 0) {
        v17 = *(_QWORD*)(v12 + 96);
        v18 = *(unsigned int*)(v17 + 8);
        if ((int)v18 >= 1) {
          break;
        }
      }
    LABEL_3:
      ++v16;
      v15 += 4;
      if (v16 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v12 + 296) - 16LL) -
                           *(_QWORD*)(*(_QWORD*)(v12 + 296) - 24LL)) >>
          3) {
        goto LABEL_11;
      }
    }
    v19 = (_DWORD*)(*(_QWORD*)(v17 + 16) + v15);
    while ((*v19 & a5) == 0) {
      v19 += 634;
      if (--v18 == 0) {
        goto LABEL_3;
      }
    }
    v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
    v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20);
    v22 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a4 + 16LL))(*a4);
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22);
    v24 = *v13;
    v25 = v23;
    LODWORD(v49) = 0;
    v48 = 0;
    v26 = v24();
    v27 = *v14;
    HIDWORD(v49) = v26;
    v50 = v27(v25) | 0x100000000LL;
    v46[0] = 0;
    v46[1] = v49;
    v47 = v50;
    v28 = ((__int64 (*)(__int64))*v13)(v21);
    v29 = *v14;
    HIDWORD(v46[1]) = v28;
    LODWORD(v47) = v29(v21);
    result = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
                             __int64*, _QWORD))GameData_212e870[0])(
        v11 + 8, v21, 0, v46, v25, 0, &v48, 0);
  }

LABEL_11:
  v30 = *v10;
  if (*(_QWORD*)(*(_QWORD*)(*v10 + 296) - 16LL) !=
      *(_QWORD*)(*(_QWORD*)(*v10 + 296) - 24LL)) {
    v31 = 2232;
    v32 = 0;
    while (1) {
      result = Config_bc4f00(v30, (unsigned int)v32, 0xFFFFFFFFLL);
      if ((result & 1) != 0) {
        v33 = *(_QWORD*)(v30 + 96);
        v34 = *(unsigned int*)(v33 + 8);
        if ((int)v34 >= 1) {
          break;
        }
      }
    LABEL_13:
      ++v32;
      v31 += 4;
      if (v32 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v30 + 296) - 16LL) -
                           *(_QWORD*)(*(_QWORD*)(v30 + 296) - 24LL)) >>
          3) {
        return result;
      }
    }
    v35 = (_DWORD*)(*(_QWORD*)(v33 + 16) + v31);
    while ((*v35 & a5) == 0) {
      v35 += 634;
      if (--v34 == 0) {
        goto LABEL_13;
      }
    }
    v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a4[1] + 16LL))(a4[1]);
    v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 40LL))(v36);
    v38 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
    v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 32LL))(v38);
    v40 = *v13;
    v41 = v39;
    LODWORD(v49) = 0;
    v48 = 0;
    v42 = ((__int64 (*)(__int64))v40)(v37);
    v43 = *v14;
    HIDWORD(v49) = v42;
    v50 = v43(v37) | 0x100000000LL;
    v46[0] = v48;
    v46[1] = v49;
    v47 = v50;
    v44 = ((__int64 (*)(__int64))*v13)(v41);
    v45 = *v14;
    HIDWORD(v46[1]) = v44;
    LODWORD(v47) = v45(v41);
    return (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
                           __int64*, _QWORD))GameData_212e870[0])(
        v11 + 8, v41, 0, v46, v37, 0, &v48, 0);
  }
  return result;
}

bool ResourceBuilder_b5f0c0(__int64 a1)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)a1 + 568LL) + 792LL);
  return v1 != nullptr && (*v1 & 2) != 0;
}

__int64 ResourceBuilder_b5f0f0(__int64 result, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  void (**v8)(__int64, __int64, __int64, __int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (**v12)(__int64, __int64, __int64, __int64, __int64);
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v5 = result;
  if (a3 <= 1) {
    if (a3 != 0) {
      if (a3 != 1) {
        goto LABEL_16;
      }
      v6 = result + 52;
      (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(result + 52,
                                                                  0, 1);
      v7 = v5 + 40;
      v8 = (void (**)(__int64, __int64, __int64, __int64,
                      __int64))GameData_212e4b8[0];
      v9 = v5 + 40;
      v10 = 2;
      v11 = 6;
    LABEL_11:
      (*v8)(v9, 5, 2, v10, v11);
      v15 = 48;
    LABEL_15:
      (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
                   __int64))GameData_212e848[0])(v5 + v15, 0, 1, 1, 1, 1);
      (*(void (**)(_QWORD, __int64))GameData_212e850[0])(*(_QWORD*)(a2 + 208),
                                                         v7);
      (*(void (**)(_QWORD, __int64))GameData_212e858[0])(*(_QWORD*)(a2 + 208),
                                                         v5 + v15);
      result = (*(__int64 (**)(_QWORD, __int64))GameData_212e860[0])(
          *(_QWORD*)(a2 + 208), v6);
      goto LABEL_16;
    }
    v6 = result + 36;
    (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(result + 36, 0,
                                                                1);
    v7 = v5 + 24;
    v12 = (void (**)(__int64, __int64, __int64, __int64,
                     __int64))GameData_212e4b8[0];
    v14 = 2;
    v13 = v5 + 24;
  LABEL_13:
    (*v12)(v13, 5, 6, v14, 6);
    goto LABEL_14;
  }
  switch (a3) {
  case 2:
    v6 = result + 36;
    (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(result + 36, 0,
                                                                1);
    v7 = v5 + 24;
    v12 = (void (**)(__int64, __int64, __int64, __int64,
                     __int64))GameData_212e4b8[0];
    v13 = v5 + 24;
    v14 = 1;
    goto LABEL_13;
  case 3:
    v6 = result + 52;
    (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(result + 52, 0,
                                                                1);
    v7 = v5 + 40;
    v8 = (void (**)(__int64, __int64, __int64, __int64,
                    __int64))GameData_212e4b8[0];
    v10 = 1;
    v11 = 2;
    v9 = v5 + 40;
    goto LABEL_11;
  case 4:
    v6 = result + 36;
    (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(result + 36, 0,
                                                                1);
    v7 = v5 + 24;
    (*(void (**)(__int64, __int64, __int64, __int64,
                 __int64))GameData_212e4b8[0])(v5 + 24, 2, 1, 1, 1);
  LABEL_14:
    v15 = 32;
    goto LABEL_15;
  default:
    break;
  }

LABEL_16:
  *(_DWORD*)(v5 + 16) = a3;
  return result;
}

void ResourceBuilder_b5f9c0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

__int64 ResourceBuilder_b5fa20(__int64 result, _QWORD* a2, __int64* a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[3];
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = eft_g_effectSystem;
  if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) - 16LL) !=
      *(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) - 24LL)) {
    v5 = *(_QWORD*)result;
    v6 = 1976;
    v10 = 0;
    while (1) {
      result = Config_bc4f00(v4, (unsigned int)v10, 0xFFFFFFFFLL);
      if ((result & 1) != 0) {
        v11 = *(_QWORD*)(v4 + 96);
        v12 = *(unsigned int*)(v11 + 8);
        if ((int)v12 >= 1) {
          break;
        }
      }
    LABEL_3:
      ++v10;
      v6 += 4;
      if (v10 >= (__int64)(*(_QWORD*)(*(_QWORD*)(v4 + 296) - 16LL) -
                           *(_QWORD*)(*(_QWORD*)(v4 + 296) - 24LL)) >>
          3) {
        return result;
      }
    }
    v13 = (_DWORD*)(*(_QWORD*)(v11 + 16) + v6);
    while ((*v13 & a4) == 0) {
      v13 += 634;
      if (--v12 == 0) {
        goto LABEL_3;
      }
    }
    LODWORD(v19) = 0;
    v18 = 0;
    HIDWORD(v19) = (*(__int64 (**)(_QWORD))GameData_212e778[0])(*a2);
    v14 = ((__int64 (*)(_QWORD))*GameData_212e780)(*a2);
    v15 = *a2;
    v16 = *a3;
    v20 = v14 | 0x100000000LL;
    v17[0] = 0;
    v17[1] = v19;
    v17[2] = v20;
    return ((__int64 (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                         _QWORD*, _QWORD))GameData_2178500)(
        v5 + 8, v15, 0, &v18, v16, 0, v17, 0);
  }
  return result;
}

__int64 ResourceBuilder_b5fb80(__int64 a1, __int64 a2)
{
  __int64* v3;
  void (**v4)(__int64);
  void (**v5)(__int64);
  void (**v6)(__int64);
  _UNKNOWN** v7;
  void (**v8)(__int64, __int64, __int64, __int64, __int64);
  _UNKNOWN** v9;
  void (**v10)(__int64);
  void (**v11)(__int64, __int64);
  _UNKNOWN** v12;
  void (**v13)(__int64, __int64);

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v3 = (__int64*)(a1 + 40);
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  v4 = (void (**)(__int64))GameData_212e4a0[0];
  (*(void (**)(__int64))GameData_212e4a0[0])(a1 + 20);
  v5 = (void (**)(__int64))GameData_212e490[0];
  (*(void (**)(__int64))GameData_212e490[0])(a1 + 8);
  v6 = (void (**)(__int64))GameData_212e498[0];
  (*(void (**)(__int64))GameData_212e498[0])(a1 + 16);
  v7 = GameData_212e4a8[0];
  (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(a1 + 20, 0, 1);
  v8 = (void (**)(__int64, __int64, __int64, __int64,
                  __int64))GameData_212e4b8[0];
  (*(void (**)(__int64, __int64, __int64, __int64,
               __int64))GameData_212e4b8[0])(a1 + 8, 5, 6, 1, 6);
  v9 = GameData_212e848[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
               __int64))GameData_212e848[0])(a1 + 16, 0, 1, 1, 1, 1);
  (*v4)(a1 + 36);
  (*v5)(a1 + 24);
  (*v6)(a1 + 32);
  ((void (*)(__int64, _QWORD, __int64))*v7)(a1 + 36, 0, 1);
  (*v8)(a1 + 24, 5, 2, 1, 6);
  ((void (*)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))*v9)(
      a1 + 32, 0, 1, 1, 1, 0);
  v10 = (void (**)(__int64))GameData_212e470[0];
  (*(void (**)(__int64))GameData_212e470[0])(a1 + 104);
  (*v10)(a1 + 112);
  (*v10)(a1 + 120);
  (*v10)(a1 + 128);
  (*v10)(a1 + 136);
  (*v10)(a1 + 144);
  (*v10)(a1 + 152);
  (*v10)(a1 + 160);
  v11 = (void (**)(__int64, __int64))GameData_212e488[0];
  (*(void (**)(__int64, __int64))GameData_212e488[0])(a1 + 104, 5);
  v12 = GameData_212e480[0];
  (*(void (**)(__int64, _QWORD))GameData_212e480[0])(a1 + 104, 0);
  v13 = (void (**)(__int64, __int64))GameData_212e478[0];
  (*(void (**)(__int64, __int64))GameData_212e478[0])(a1 + 104, 1);
  (*v11)(a1 + 112, 7);
  ((void (*)(__int64, _QWORD))*v12)(a1 + 112, 0);
  (*v13)(a1 + 112, 1);
  (*v11)(a1 + 120, 2);
  ((void (*)(__int64, _QWORD))*v12)(a1 + 120, 0);
  (*v13)(a1 + 120, 1);
  (*v11)(a1 + 128, 4);
  ((void (*)(__int64, _QWORD))*v12)(a1 + 128, 0);
  (*v13)(a1 + 128, 1);
  (*v11)(a1 + 136, 5);
  ((void (*)(__int64, __int64))*v12)(a1 + 136, 1);
  (*v13)(a1 + 136, 1);
  (*v11)(a1 + 144, 7);
  ((void (*)(__int64, __int64))*v12)(a1 + 144, 1);
  (*v13)(a1 + 144, 1);
  (*v11)(a1 + 152, 2);
  ((void (*)(__int64, __int64))*v12)(a1 + 152, 1);
  (*v13)(a1 + 152, 1);
  (*v11)(a1 + 160, 4);
  ((void (*)(__int64, __int64))*v12)(a1 + 160, 1);
  (*v13)(a1 + 160, 1);
  GameRoutine_5d3770(*(_QWORD*)(*eft_g_effectSystem_ptr[0] + 96), 4, 458752,
                     GameRoutine_b5ff30);
  return GameRoutine_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL),
                            48);
}

bool ResourceBuilder_b60880(__int64 a1)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)a1 + 568LL) + 792LL);
  return v1 != nullptr && (*v1 & 1) != 0;
}

__int64 ResourceBuilder_b60990(__int64 result, __int64* a2, int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;

  v3 = *a2;
  v4 = *(_QWORD*)(*a2 + 448);
  if (v4 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(result + 16);
  if (((unsigned int)v5 & *(_DWORD*)(v3 + 560)) == 0 ||
      *(_BYTE*)(v3 + 11) == 0) {
    return result;
  }
  v6 = *a3;
  v7 = *(_QWORD*)(result + 8);
  v8 = result;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_QWORD*)(v9 + 16) = v3;
  *(_DWORD*)(v9 + 24) = v6;
  *(_QWORD*)(v9 + 32) = v5;
  v18 = (_QWORD*)v9;
  *(_QWORD*)v9 = GameData_1fc66c0;
  *(_QWORD*)(v9 + 8) = v7;
  if (*(_BYTE*)(v8 + 28) != 0) {
    v11 = (unsigned int*)(v8 + 24);
  }
  else {
    v11 = (unsigned int*)(v4 + 408);
  }
  v12 = *v11;
  v22 = v21;
  v20 = v19;
  v13 = *(_QWORD*)(game_g_frame_clock + 16664);
  v21[0] = GameData_2109ae8;
  v19[0] = GameData_2109b78;
  GameRoutine_beefc0(v13, v17, v21, v19, 2, v12, 0, v10, v17[0], v17[1], v17[2],
                     v17[3]);
  if (v20 == v19) {
    v14 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_12;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v20 + v14))((__int64)v20);

LABEL_12:
  if (v22 == v21) {
    v15 = 32;
    goto LABEL_16;
  }
  if (v22 != nullptr) {
    v15 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v22 + v15))((__int64)v22);
  }
  result = (__int64)v18;
  if (v18 == v17) {
    v16 = 32;
  }
  else {
    if (v18 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v18 + v16))((__int64)v18);
}

__int64 ResourceBuilder_b60c20(__int64 a1, __int64 a2)
{
  return GameRoutine_5b6250(
      *(_QWORD*)(a1 + 16), *(_QWORD*)(a2 + 16), *(unsigned int*)(a1 + 24),
      *(unsigned int*)(a1 + 32), 0, *(_QWORD*)(a1 + 8), 0, 0);
}

__int64 ResourceBuilder_b60c80(_QWORD* a1, __int64 a2, int* a3)
{
  int v3;
  int v4;
  int v8;
  int v9;
  int v10;
  __int64 result;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  char v16;
  int v17;

  v3 = *a3;
  v4 = a3[1];
  v17 = 0;
  v12 = 0x400000000LL;
  v15 = 0x100000001LL;
  v16 = 1;
  v13 = v3;
  v14 = v4;
  a1[8] = GameRoutine_b60de0(a2, "Rt1Copy", &v12);
  v15 = 0x100000001LL;
  v16 = 1;
  v17 = 0;
  v12 = 0x1500000000LL;
  v8 = a3[1];
  v13 = *a3;
  v14 = v8;
  a1[10] = GameRoutine_b60f30(a2, "CopyDepth", &v12);
  v12 = 0x400000000LL;
  v9 = *a3;
  v10 = a3[1];
  v15 = 0x100000001LL;
  v16 = 1;
  v17 = 0;
  v13 = v9;
  v14 = v10;
  a1[9] = GameRoutine_b60de0(a2, "Rt2Copy", &v12);
  *a1 = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 1));
  a1[1] = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 2));
  a1[2] = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 3));
  a1[3] = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 4));
  a1[4] = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 5));
  a1[5] = GameRoutine_b4a510(a2, *((_QWORD*)a3 + 6));
  a1[6] = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 7));
  result = GameRoutine_b48e70(a2, *((_QWORD*)a3 + 8));
  a1[7] = result;
  return result;
}

__int64 ResourceBuilder_b61080(__int64 a1, __int64 a2)
{
  void (**v3)(__int64);
  void (*v4)(__int64);
  void (**v5)(__int64);
  void (**v6)(__int64);
  void (**v7)(__int64);
  void (*v8)(__int64);
  void (**v9)(__int64, __int64);
  void (**v10)(__int64, __int64, __int64, __int64, __int64);
  void (**v11)(__int64, __int64, __int64);
  _UNKNOWN** v12;
  void (*v13)(__int64);
  __int64 v14;
  unsigned __int64 v15;
  void (**v16)(__int64, __int64);
  void (**v17)(__int64, bool);
  void (**v18)(__int64, bool);
  __int64 v19;
  unsigned int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[4];
  _QWORD* v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;

  *(_QWORD*)a1 = a2;
  *(_DWORD*)(a1 + 8) = 1;
  *(_DWORD*)(a1 + 88) = 1;
  GameRoutine_604020(a1 + 448);
  *(_QWORD*)(a1 + 568) = -1;
  GameRoutine_604020(a1 + 576);
  *(_QWORD*)(a1 + 696) = -1;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_DWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  v3 = (void (**)(__int64))GameData_212e490[0];
  v4 = (void (*)(__int64))*GameData_212e490[0];
  *(_QWORD*)(a1 + 768) = 0;
  *(_DWORD*)(a1 + 776) = 0;
  v4(a1 + 168);
  v5 = (void (**)(__int64))GameData_212e498[0];
  (*(void (**)(__int64))GameData_212e498[0])(a1 + 176);
  v6 = (void (**)(__int64))GameData_212e4a0[0];
  (*(void (**)(__int64))GameData_212e4a0[0])(a1 + 180);
  v7 = (void (**)(__int64))GameData_212e470[0];
  (*(void (**)(__int64))GameData_212e470[0])(a1 + 184);
  v8 = *v6;
  *(_DWORD*)(a1 + 8) = 5;
  v8(a1 + 80);
  (*v5)(a1 + 84);
  (*v3)(a1 + 16);
  v9 = (void (**)(__int64, __int64))GameData_212e880[0];
  (*(void (**)(__int64, _QWORD))GameData_212e880[0])(a1 + 16, 0);
  v10 = (void (**)(__int64, __int64, __int64, __int64,
                   __int64))GameData_212e4b8[0];
  (*(void (**)(__int64, __int64, __int64, __int64,
               __int64))GameData_212e4b8[0])(a1 + 16, 5, 6, 1, 2);
  v11 = (void (**)(__int64, __int64, __int64))GameData_212e4a8[0];
  (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(a1 + 80, 0, 1);
  v12 = GameData_212e848[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
               _QWORD))GameData_212e848[0])(a1 + 84, 0, 1, 1, 1, 0);
  (*v3)(a1 + 24);
  (*v9)(a1 + 24, 1);
  (*v10)(a1 + 24, 2, 1, 2, 1);
  (*v11)(a1 + 80, 1, 1);
  ((void (*)(__int64, __int64, __int64, __int64, __int64, _QWORD))*v12)(
      a1 + 84, 1, 1, 1, 1, 0);
  (*v3)(a1 + 32);
  (*v9)(a1 + 32, 2);
  (*v11)(a1 + 80, 2, 0);
  ((void (*)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))*v12)(
      a1 + 84, 2, 0, 0, 0, 0);
  (*v3)(a1 + 40);
  (*v9)(a1 + 40, 3);
  (*v10)(a1 + 40, 5, 6, 1, 2);
  (*v11)(a1 + 80, 3, 1);
  ((void (*)(__int64, __int64, __int64, __int64, __int64, _QWORD))*v12)(
      a1 + 84, 3, 1, 1, 1, 0);
  (*v3)(a1 + 48);
  (*v9)(a1 + 48, 4);
  (*v11)(a1 + 80, 4, 0);
  ((void (*)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))*v12)(
      a1 + 84, 4, 0, 0, 0, 0);
  v13 = *v6;
  *(_DWORD*)(a1 + 88) = 5;
  v13(a1 + 160);
  (*v5)(a1 + 164);
  (*v3)(a1 + 96);
  (*v9)(a1 + 96, 0);
  (*v10)(a1 + 96, 5, 6, 1, 2);
  (*v11)(a1 + 160, 0, 1);
  ((void (*)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))*v12)(
      a1 + 164, 0, 1, 1, 1, 0);
  (*v3)(a1 + 104);
  (*v9)(a1 + 104, 1);
  (*v11)(a1 + 160, 1, 0);
  ((void (*)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))*v12)(
      a1 + 164, 1, 0, 0, 0, 0);
  (*v3)(a1 + 112);
  (*v9)(a1 + 112, 2);
  (*v11)(a1 + 160, 2, 0);
  ((void (*)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))*v12)(
      a1 + 164, 2, 0, 0, 0, 0);
  (*v3)(a1 + 120);
  (*v9)(a1 + 120, 3);
  (*v10)(a1 + 120, 5, 6, 1, 2);
  (*v11)(a1 + 160, 3, 1);
  ((void (*)(__int64, __int64, __int64, __int64, __int64, _QWORD))*v12)(
      a1 + 164, 3, 1, 1, 1, 0);
  (*v3)(a1 + 128);
  (*v9)(a1 + 128, 4);
  (*v11)(a1 + 160, 4, 0);
  ((void (*)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))*v12)(
      a1 + 164, 4, 0, 0, 0, 0);
  v14 = a1 + 192;
  v15 = 0;
  v16 = (void (**)(__int64, __int64))GameData_212e488[0];
  v17 = (void (**)(__int64, bool))GameData_212e478[0];
  v18 = (void (**)(__int64, bool))GameData_212e480[0];
  do {
    (*v7)(v14);
    v20 = (v15 & 7) - 1;
    if (v20 <= 5 && ((0x2Du >> v20) & 1) != 0) {
      v19 = GameData_1b63ca8[v20];
    }
    else {
      v19 = (unsigned int)(v15 & 7) + 1;
    }
    (*v16)(v14, v19);
    (*v17)(v14, (v15 & 8) != 0);
    (*v18)(v14, v15++ > 0xF);
    v14 += 8;
  } while (v15 != 32);
  GameRoutine_5d3770(*(_QWORD*)(*eft_g_effectSystem_ptr[0] + 96), 3, 8,
                     GameRoutine_b617c0);
  v28 = 0;
  v29 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v25[0] = GameData_1fc6750;
  v26 = v25;
  GameRoutine_5fc230(v27);
  if (v26 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v26 + 48LL))(v26, v27);
  }
  v21 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 448, *game_g_frame_clock_ptr[0] + 568, v27);
  *(_QWORD*)(a1 + 568) = GameRoutine_615760(*(_QWORD*)(*v21 + 552), a1 + 448);
  if (v26 == v25) {
    v22 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_14;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v26 + v22))((__int64)v26);

LABEL_14:
  v28 = 0;
  v29 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v25[0] = GameData_1fc67d0;
  v26 = v25;
  GameRoutine_5fc230(v27);
  if (v26 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v26 + 48LL))(v26, v27);
  }
  GameRoutine_604060(a1 + 576, *v21 + 568, v27);
  *(_QWORD*)(a1 + 696) = GameRoutine_615760(*(_QWORD*)(*v21 + 552), a1 + 576);
  if (v26 == v25) {
    v23 = 32;
    goto LABEL_20;
  }
  if (v26 != nullptr) {
    v23 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v26 + v23))((__int64)v26);
  }
  GameRoutine_a91100((__int64*)(a1 + 704), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 168);
  return GameRoutine_a91100(
      (__int64*)(a1 + 760), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 24);
}

__int64 ResourceBuilder_b619f0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 72, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 56, *v2 + 568);
  v3 = a1[96];
  a1[96] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[95];
  a1[95] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[89];
  a1[89] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[88];
  a1[88] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  GameRoutine_604050(a1 + 72);
  return GameRoutine_604050(a1 + 56);
}

__int64 ResourceBuilder_b61dc0(__int64 a1, __int64 a2, _QWORD** a3, __int64* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)(void);
  __int64 (**v18)(__int64);
  int v19;
  __int64 (*v20)(__int64);
  _UNKNOWN** v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)(void);
  __int64 v27;
  int v28;
  __int64 (*v29)(__int64);
  int v30;
  __int64 (*v31)(__int64);
  int v32;
  void (*v33)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, __int64*,
              _QWORD);
  __int64 v34;
  __int64 v35;
  __int64 (*v36)(void);
  __int64 v37;
  int v38;
  int v39;
  __int64 (*v40)(__int64);
  void (*v41)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, __int64*,
              _QWORD);
  __int64 result;
  __int64 v43;
  __int128 v44;
  __int64 v45;
  __int128 v46;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49);
  v7 = *a4;
  v8 = (*(__int64 (**)(_QWORD*))(*a3[5] + 16LL))(a3[5]);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
  v10 = (__int64*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v11 = *v10;
  v12 = (*(__int64 (**)(_QWORD*))(*a3[6] + 16LL))(a3[6]);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
  v14 = (*(__int64 (**)(_QWORD*))(*a3[8] + 16LL))(a3[8]);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
  LODWORD(v46) = 0;
  v45 = 0;
  v16 = v15;
  v17 = (__int64 (**)(void))GameData_212e778[0];
  DWORD1(v46) = (*(__int64 (**)(void))GameData_212e778[0])();
  v18 = (__int64 (**)(__int64))GameData_212e780;
  *((_QWORD*)&v46 + 1) =
      ((unsigned int (*)(__int64))*GameData_212e780)(v16) | 0x100000000LL;
  v43 = 0;
  v44 = v46;
  v19 = ((__int64 (*)(__int64))*v17)(v13);
  v20 = *v18;
  DWORD1(v44) = v19;
  DWORD2(v44) = v20(v13);
  v21 = GameData_212e870[0];
  (*(void (**)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, __int64*,
               _QWORD))GameData_212e870[0])(v7 + 8, v13, 0, &v43, v16, 0, &v45,
                                            0);
  v22 = (*(__int64 (**)(_QWORD*))(*a3[7] + 16LL))(a3[7]);
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22);
  v24 = (*(__int64 (**)(_QWORD*))(*a3[9] + 16LL))(a3[9]);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24);
  v26 = *v17;
  v27 = v25;
  LODWORD(v46) = 0;
  v45 = 0;
  v28 = v26();
  v29 = *v18;
  DWORD1(v46) = v28;
  DWORD2(v46) = v29(v27);
  HIDWORD(v46) = 1;
  v43 = v45;
  v44 = v46;
  v30 = ((__int64 (*)(__int64))*v17)(v23);
  v31 = *v18;
  DWORD1(v44) = v30;
  v32 = v31(v23);
  v33 = (void (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, __int64*,
                  _QWORD))*v21;
  DWORD2(v44) = v32;
  v33(v7 + 8, v23, 0, &v43, v27, 0, &v45, 0);
  v34 = (*(__int64 (**)(_QWORD*))(*a3[10] + 16LL))(a3[10]);
  v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34);
  v36 = *v17;
  v37 = v35;
  LODWORD(v23) = v38;
  LODWORD(v46) = 0;
  v45 = 0;
  v39 = v36();
  v40 = *v18;
  DWORD1(v46) = v39;
  DWORD2(v46) = v40(v37);
  HIDWORD(v46) = 1;
  v44 = v46;
  v41 = (void (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD, __int64*,
                  _QWORD))*v21;
  *(_QWORD*)((char*)&v44 + 4) = v11;
  v43 = v45;
  result = ((__int64 (*)(__int64, __int64, _QWORD, __int64*, __int64, _QWORD,
                         __int64*, _QWORD))v41)(v7 + 8, v9, 0, &v43, v37, 0,
                                                &v45, 0);
  *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 152) = (int)v23;
  return result;
}

__int64 ResourceBuilder_b627b0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;

  v3 = *(_QWORD*)(a3 + 24);
  v18 = 0;
  v13 = 0;
  v16 = 0x100000001LL;
  v17 = 1;
  v14 = v3;
  v15 = *(_DWORD*)(a3 + 32);
  result = GameRoutine_b54ca0(a2, "ExposureCompDst", &v13);
  *a1 = result;
  if (*(_BYTE*)(a3 + 36) == 1) {
    v11 = 1;
    v12 = 0;
    v8 = 0xA00000000LL;
    v9 = 0x2000000040LL;
    v10 = 0x100000001LL;
    a1[1] = GameRoutine_b628e0(a2, "ExposureCompGausBlur", &v8);
    a1[2] = GameRoutine_b628e0(a2, "ExposureCompTempBlur", &v8);
    v11 = 1;
    v12 = 0;
    v8 = 0xB00000002LL;
    v9 = 0x2000000040LL;
    v10 = 0x100000020LL;
    a1[4] = GameRoutine_b62a30(a2, "ExposureBilateralBlock", &v8);
    result = GameRoutine_b62b80(a2, "ExposureBilateralBlock_Temp", &v8);
    a1[5] = result;
  }
  return result;
}

__int64 ResourceBuilder_b63990(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
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
  __int64 result;
  __int64 v26;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 88, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 104, *v2 + 568);
  GameRoutine_6040f0(a1 + 120, *v2 + 568);
  GameRoutine_604050(a1 + 120);
  GameRoutine_604050(a1 + 104);
  GameRoutine_604050(a1 + 88);
  v3 = a1[82];
  a1[82] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[81];
  a1[81] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[75];
  a1[75] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[74];
  a1[74] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[68];
  a1[68] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[67];
  a1[67] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[61];
  a1[61] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[60];
  a1[60] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[54];
  a1[54] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[53];
  a1[53] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[47];
  a1[47] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[46];
  a1[46] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[40];
  a1[40] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[39];
  a1[39] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[38];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a1[36];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = a1[34];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = a1[32];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = a1[30];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v22 = a1[28];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = a1[26];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  v24 = a1[24];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  ResourceBuilder_b63d20(a1 + 13);
  result = ResourceBuilder_b63d20(a1 + 3);
  v26 = a1[2];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    return std___1___shared_weak_count___release_weak(v26);
  }
  return result;
}

__int64 ResourceBuilder_b63d20(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 72);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[7];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[5];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
    v6 = v2[1];
    if (v6 == 0) {
      return result;
    }
  }
  else {
    v6 = v2[1];
    if (v6 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ResourceBuilder_b64090(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5)
{
  __int64 v6;
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
  unsigned int v30;

  v6 = *a4;
  v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 40) + 16LL))(
      *(_QWORD*)(a2 + 40));
  v12 = v11 + 16LL * *(int*)(v11 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v6 + 224LL))(v6, 8, 0, *(_QWORD*)(v12 + 24),
                             *(_QWORD*)(v12 + 32));
  v13 = *a4;
  v14 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 48) + 16LL))(
      *(_QWORD*)(a2 + 48));
  v15 = v14 + 16LL * *(int*)(v14 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v13 + 224LL))(v13, 8, 1, *(_QWORD*)(v15 + 24),
                              *(_QWORD*)(v15 + 32));
  v16 = *a4;
  v17 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 56) + 16LL))(
      *(_QWORD*)(a2 + 56));
  v18 = v17 + 16LL * *(int*)(v17 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v16 + 224LL))(v16, 8, 2, *(_QWORD*)(v18 + 24),
                              *(_QWORD*)(v18 + 32));
  v19 = *a4;
  v20 = 80;
  if (*(_BYTE*)(*(_QWORD*)a5 + 113LL) != 0) {
    v20 = 64;
  }
  v21 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + v20) + 16LL))(
      *(_QWORD*)(a2 + v20));
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 224LL))(v19, 8, 3, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32));
  v23 = a1 + 16LL * *(int*)(a1 + 328);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 4, *(_QWORD*)(v23 + 336),
                              *(_QWORD*)(v23 + 344));
  v24 = *a4;
  v25 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 72) + 16LL))(
      *(_QWORD*)(a2 + 72));
  v26 = v25 + 16LL * *(int*)(v25 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v24 + 232LL))(v24, 8, 1, *(_QWORD*)(v26 + 16),
                              *(_QWORD*)(v26 + 24));
  v27 = 184;
  if (*(_BYTE*)(*(_QWORD*)a5 + 113LL) != 0) {
    v27 = 200;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + v27) + 144LL));
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 48LL))(v29);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v28 + 256LL))(
      v28, 8, 0, v30);
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
      *(_QWORD*)*a4 + 304LL))(*a4, (unsigned int)(*(_DWORD*)(a2 + 88) / 16),
                              (unsigned int)(*(_DWORD*)(a2 + 92) / 16), 1);
}

__int64 ResourceBuilder_b642d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5)
{
  int* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  void (**v22)(__int64, __int64);
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64 v28;
  bool v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  _QWORD v40[2];

  if ((*(_BYTE*)(a1 + 1088) & 1) != 0 ||
      *((_BYTE*)(v10 = *(int**)(a5 + 8)) + 88) == 1) {
    v11 = *a4;
    v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 96LL))(v11, v13,
                                                                    v14);
    v15 = *a4;
    v40[0] = 1065353216;
    v40[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v15 + 144LL))(v15, 0,
                                                                    v40);
    *(_BYTE*)(a1 + 1088) = 0;
    v10 = *(int**)(a5 + 8);
  }
  v16 = *v10;
  v17 = a1 + 16LL * *(int*)(a1 + 384);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v17 + 392),
                              *(_QWORD*)(v17 + 400));
  v18 = *a4;
  if (v16 == 1) {
    ((void (*)(__int64, __int64))*GameData_212e738)(v18 + 8, 33);
    v19 = 0;
  }
  else {
    v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
    v21 = v20 + 16LL * *(int*)(v20 + 16);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v18 + 232LL))(v18, 8, 0, *(_QWORD*)(v21 + 24),
                                *(_QWORD*)(v21 + 32));
    v22 = (void (**)(__int64, __int64))GameData_212e738;
    ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL));
    v23 = *a4;
    v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
    v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 48LL))(v24);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v23 + 256LL))(
        v23, 8, 0, v25);
    v26 = *(_DWORD*)(a5 + 4);
    v27 = *(_DWORD*)a5 + 30;
    if (*(int*)a5 >= -15) {
      v27 = *(_DWORD*)a5 + 15;
    }
    v28 = (unsigned int)(v27 >> 4);
    v30 = v26 + 15;
    v29 = v26 < -15;
    v31 = v26 + 30;
    if (v29) {
      v30 = v31;
    }
    (*(void (**)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, v28, (unsigned int)(v30 >> 4), 1);
    (*v22)(*a4 + 8LL, 33);
    v32 = *(_QWORD*)(a5 + 8);
    if (*(_BYTE*)(v32 + 89) == 1) {
      v33 = *(_QWORD*)(v32 + 128);
      v34 = 0;
      if (v33 != 0 && *(_DWORD*)(v32 + 136) != -1) {
        v34 = 1;
        (*(void (**)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 248LL))(*a4, 8, 1, v33, *(_QWORD*)(v32 + 136),
                                    *(unsigned int*)(a1 + 952));
        v32 = *(_QWORD*)(a5 + 8);
      }
    }
    else {
      v34 = 0;
    }
    if (*(_BYTE*)(v32 + 100) == 1) {
      v35 = *(_QWORD*)(v32 + 144);
      if (v35 != 0 && *(_DWORD*)(v32 + 152) != -1) {
        v34 |= 2u;
        (*(void (**)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 248LL))(*a4, 8, 2, v35, *(_QWORD*)(v32 + 152),
                                    *(unsigned int*)(a1 + 952));
      }
    }
    v19 = (unsigned int)(v34 + 1);
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 16 * v19 + 24) + 144LL));
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 48LL))(v37);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v36 + 256LL))(
      v36, 8, 0, v38);
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 304LL))(*a4, 1, 1, 1);
}

void ResourceBuilder_b650d0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

__int64 ResourceBuilder_b65600(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 23, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 39, *v2 + 568);
  GameRoutine_604050(a1 + 39);
  GameRoutine_604050(a1 + 23);
  v3 = a1[17];
  a1[17] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[16];
  a1[16] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[10];
  a1[10] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[9];
  a1[9] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[8];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[4];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  else {
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

void ResourceBuilder_b66290(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 2) = 3;
  *(_WORD*)(a2 + 6) = 21;
}

__int64 ResourceBuilder_b66660(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  v3 = (__int64*)(a1 + 8);
  GameRoutine_604020(a1 + 64);
  *(_QWORD*)(a1 + 184) = -1;
  GameRoutine_604020(a1 + 192);
  *(_QWORD*)(a1 + 312) = -1;
  memset(v7, 0, sizeof(v7));
  GameRoutine_5fc230(v7);
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 64, *game_g_frame_clock_ptr[0] + 568, v7);
  *(_QWORD*)(a1 + 184) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 64);
  v8 = v7;
  memset(v9, 0, sizeof(v9));
  v7[0] = GameData_1fc6a50;
  GameRoutine_5fc230(v9);
  if (v8 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v8 + 48LL))(v8, v9);
  }
  GameRoutine_604060(a1 + 192, *v4 + 568, v9);
  *(_QWORD*)(a1 + 312) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 192);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v8 + v5))((__int64)v8);
  }
  return GameRoutine_a91100(v3, *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL),
                            72);
}

__int64 ResourceBuilder_b667c0(_DWORD* a1, _QWORD** a2, __int64 a3, _QWORD* a4,
                               __int64 a5)
{
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (**v18)(__int64);
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _DWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;

  v5 = a1[6];
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  a1[6] = v12;
  v13 = *(_QWORD*)&a1[2 * v12 + 2];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  LODWORD(v15) = *(_DWORD*)(a5 + 32);
  v16 = v14;
  if ((int)v15 >= 1) {
    v17 = 0;
    v18 = (__int64 (**)(__int64))GameData_212e4d8[0];
    do {
      v19 = (*(__int64 (**)(_QWORD*))(*a2[v17 + 6] + 16LL))(a2[v17 + 6]);
      (*(void (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
      *(_QWORD*)(v16 + 8 * v17++) =
          (*v18)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL);
      v15 = *(int*)(a5 + 32);
    } while (v17 < v15);
  }
  *(_DWORD*)(v16 + 64) = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 8, *(_QWORD*)(a5 + 40),
                              *(_QWORD*)(a5 + 48), (unsigned int)a1[46]);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 9, *(_QWORD*)(a5 + 56),
                              *(_QWORD*)(a5 + 64), (unsigned int)a1[46]);
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD*))(*a2[14] + 16LL))(a2[14]);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 248LL))(v20, 2, 10, v22, v23, (unsigned int)a1[46]);
  v24 = *a4;
  v25 = (*(__int64 (**)(_QWORD*))(*a2[15] + 16LL))(a2[15]);
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v24 + 248LL))(v24, 2, 11, v26, v27, (unsigned int)a1[78]);
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD*))(*a2[16] + 16LL))(a2[16]);
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 40LL))(v29);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v28 + 248LL))(v28, 2, 12, v30, v31, (unsigned int)a1[78]);
  v32 = *a4;
  v33 = (*(__int64 (**)(_QWORD*))(*a2[17] + 16LL))(a2[17]);
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v32 + 248LL))(v32, 2, 13, v34, v35, (unsigned int)a1[78]);
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD*))(*a2[18] + 16LL))(a2[18]);
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 40LL))(v37);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v36 + 248LL))(v36, 2, 14, v38, v39, (unsigned int)a1[78]);
  v40 = *a4;
  v41 = (*(__int64 (**)(_QWORD*))(*a2[19] + 16LL))(a2[19]);
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v40 + 248LL))(v40, 2, 15, v42, v43, (unsigned int)a1[78]);
  v44 = *a4;
  v45 = (*(__int64 (**)(_QWORD*))(*a2[26] + 16LL))(a2[26]);
  v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v44 + 248LL))(v44, 2, 16, v46, v47, (unsigned int)a1[46]);
  v48 = *a4;
  v49 = (*(__int64 (**)(_QWORD*))(*a2[5] + 16LL))(a2[5]);
  v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 40LL))(v49);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v48 + 248LL))(v48, 2, 17, v50, v51, (unsigned int)a1[46]);
  v52 = *(_QWORD*)(a3 + 16);
  if (v52 != 0) {
    v53 = *a4;
    v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54);
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v53 + 248LL))(v53, 2, 18, v55, v56, (unsigned int)a1[46]);
  }
  v57 = *a4;
  v58 = (*(__int64 (**)(_QWORD*))(*a2[21] + 16LL))(a2[21]);
  v59 = v58 + 16LL * *(int*)(v58 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v57 + 224LL))(v57, 2, 2, *(_QWORD*)(v59 + 24),
                              *(_QWORD*)(v59 + 32));
  v60 = *a4;
  v61 = (*(__int64 (**)(_QWORD*))(*a2[23] + 16LL))(a2[23]);
  v62 = v61 + 16LL * *(int*)(v61 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v60 + 232LL))(v60, 2, 1, *(_QWORD*)(v62 + 16),
                              *(_QWORD*)(v62 + 24));
  v63 = *a4;
  v64 = (*(__int64 (**)(_QWORD*))(*a2[22] + 16LL))(a2[22]);
  v65 = v64 + 16LL * *(int*)(v64 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v63 + 224LL))(v63, 2, 3, *(_QWORD*)(v65 + 24),
                              *(_QWORD*)(v65 + 32));
  v66 = *a4;
  v67 = (*(__int64 (**)(_QWORD*))(*a2[20] + 16LL))(a2[20]);
  v68 = v67 + 16LL * *(int*)(v67 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v66 + 224LL))(v66, 2, 8, *(_QWORD*)(v68 + 24),
                              *(_QWORD*)(v68 + 32));
  v69 = &a1[4 * a1[6]];
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 13, *((_QWORD*)v69 + 4),
                              *((_QWORD*)v69 + 5));
  v70 = *a4;
  v71 = (*(__int64 (**)(_QWORD*))(*a2[24] + 16LL))(a2[24]);
  v72 = v71 + 16LL * *(int*)(v71 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v70 + 232LL))(v70, 2, 0, *(_QWORD*)(v72 + 24),
                              *(_QWORD*)(v72 + 32));
  v73 = *a4;
  v74 = (*(__int64 (**)(_QWORD*))(*a2[25] + 16LL))(a2[25]);
  v75 = v74 + 16LL * *(int*)(v74 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v73 + 232LL))(v73, 2, 4, *(_QWORD*)(v75 + 24),
                              *(_QWORD*)(v75 + 32));
  return ResourceBuilder_b6f2d0(a2, a3, a4, a5);
}

void ResourceBuilder_b670f0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

bool ResourceBuilder_b67200(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 8);
}

__int64 ResourceBuilder_b67660(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  GameRoutine_6040f0(a1 + 19, *game_g_frame_clock_ptr[0] + 568);
  v2 = a1[35];
  a1[35] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  GameRoutine_604050(a1 + 19);
  v3 = a1[13];
  a1[13] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[12];
  a1[12] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[6];
  a1[6] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[5];
  a1[5] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[4];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

_QWORD* ResourceBuilder_b677a0(_QWORD* result, _QWORD* a2, __int64 a3,
                               _QWORD* a4, __int64 a5)
{
  __int64 v5;
  _QWORD* v6;
  __int64 v9;
  __int64 v10;
  __int64 (**v11)(void);
  unsigned int (**v12)(__int64);
  int v13;
  _DWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int* v17;
  _DWORD* v18;
  int v19;
  int v20;
  __int64 v21;
  _QWORD* v22;
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
  __int64 v33;
  __int64 (*v34)(void);
  __int64 v35;
  int v36;
  unsigned int (*v37)(__int64);
  _QWORD v38[3];
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];

  v5 = result[35];
  v6 = result;
  if ((*(_BYTE*)(a5 + 16) & 1) != 0) {
    if (v5 == 0) {
      v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
      v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
      v40 = 0x100000001LL;
      v41[0] = 0;
      *(_DWORD*)((char*)v41 + 7) = 0;
      v11 = (__int64 (**)(void))GameData_212e778[0];
      LODWORD(v39) = (*(__int64 (**)(void))GameData_212e778[0])();
      v12 = (unsigned int (**)(__int64))GameData_212e780;
      HIDWORD(v39) = ((__int64 (*)(__int64))*GameData_212e780)(v10);
      v13 = ((__int64 (*)(__int64))*GameData_212e8a8)(v10);
      v14 = &GameData_1b611e0;
      v15 = 42;
      do {
        v16 = v15 >> 1;
        v17 = &v14[2 * (v15 >> 1)];
        v19 = *v17;
        v18 = v17 + 2;
        v15 += ~(v15 >> 1);
        if (v19 < v13) {
          v14 = v18;
        }
        else {
          v15 = v16;
        }
      } while (v15 != 0);
      if (v14 == (_DWORD*)&GameData_1b61330 || *v14 > v13) {
        v20 = 0;
      }
      else {
        v20 = v14[1];
      }
      HIDWORD(v41[0]) = v20;
      v26 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 552);
      v41[2] = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 360);
      v27 = *(_QWORD*)(v26 + 16);
      LOBYTE(v41[1]) = 1;
      v41[3] = v27;
      GameRoutine_53c20((void*)v38, &v39);
      v28 = v38[0];
      v29 = v6[35];
      v38[0] = 0;
      v6[35] = v28;
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
        v30 = v38[0];
        v38[0] = 0;
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
        }
      }
      ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
      v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
      v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 32LL))(v31);
      v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[35] + 40LL))(v6[35]);
      v34 = *v11;
      v35 = v33;
      LODWORD(v40) = 0;
      v39 = 0;
      v36 = v34();
      v37 = *v12;
      HIDWORD(v40) = v36;
      v41[0] = v37(v35) | 0x100000000LL;
      v38[0] = v39;
      v38[1] = v40;
      v38[2] = v41[0];
      return (_QWORD*)(*(__int64 (**)(
          __int64, __int64, _QWORD, __int64*, __int64, _QWORD, _QWORD*,
          _QWORD))GameData_212e870[0])(*a4 + 8LL, v32, 0, &v39, v35, 0, v38, 0);
    }
  }
  else if (v5 != 0) {
    v21 = *result;
    v22 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v23 = *result + 16592LL;
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_QWORD*)(v24 + 16) = v5;
    v6[35] = 0;
    *(_DWORD*)(v24 + 8) = 2;
    *(_QWORD*)v24 = GameData_1fc6bd0;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v22, 24, 16, 0);
    result[1] = v23;
    result[2] = v24;
    v25 = *(_QWORD*)(v21 + 16592);
    *result = v25;
    *(_QWORD*)(v25 + 8) = result;
    *(_QWORD*)(v21 + 16592) = result;
    ++*(_QWORD*)(v21 + 16608);
  }
  return result;
}

__int64 ResourceBuilder_b67f80(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_1fc6bd0;
  v2 = a1[2];
  a1[2] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 ResourceBuilder_b67ff0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

bool ResourceBuilder_b68420(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
}

__int64 ResourceBuilder_b68ae0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  GameRoutine_6040f0(a1 + 25, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 25);
  v2 = a1[19];
  a1[19] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[18];
  a1[18] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[12];
  a1[12] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  result = a1[11];
  a1[11] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v6 = a1[10];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[8];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = a1[6];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[4];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  else {
    v10 = a1[2];
    if (v10 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 ResourceBuilder_b69960(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 27, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 43, *v2 + 568);
  GameRoutine_604050(a1 + 43);
  GameRoutine_604050(a1 + 27);
  v3 = a1[21];
  a1[21] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[20];
  a1[20] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[14];
  a1[14] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[13];
  a1[13] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  result = (__int64)(a1 + 1);
  v8 = a1[12];
  v9 = a1 + 1;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v10 = v9[9];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v9[7];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v9[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v9[3];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = std___1___shared_weak_count___release_weak(v13);
    v14 = v9[1];
    if (v14 == 0) {
      return result;
    }
  }
  else {
    v14 = v9[1];
    if (v14 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

void ResourceBuilder_b6a2b0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 2) = 3;
  *(_WORD*)(a2 + 6) = 21;
}

__int64 ResourceBuilder_b6adf0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  GameRoutine_6040f0(a1 + 7, *game_g_frame_clock_ptr[0] + 568);
  result = GameRoutine_604050(a1 + 7);
  v3 = a1[6];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[4];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
    v5 = a1[2];
    if (v5 == 0) {
      return result;
    }
  }
  else {
    v5 = a1[2];
    if (v5 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 ResourceBuilder_b6b430(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = a1[17];
  a1[17] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[16];
  a1[16] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[10];
  a1[10] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  result = a1[9];
  a1[9] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v6 = a1[8];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[6];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = a1[4];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = a1[4];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ResourceBuilder_b6c430(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               int* a5)
{
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
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  bool v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;

  v58 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
  v10 = *a3;
  v59 = 4;
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  v12 = *(_QWORD*)(v11 + 8LL * *(int*)(v11 + 16));
  v13 = a3[1];
  v61 = 6;
  v60 = v12;
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  v15 = *(_QWORD*)(v14 + 8LL * *(int*)(v14 + 8));
  v16 = a3[2];
  v63 = 6;
  v62 = v15;
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  v18 = *(_QWORD*)(v17 + 8LL * *(int*)(v17 + 8));
  v19 = *a4;
  v65 = 6;
  v64 = v18;
  (*(void (**)(__int64, __int64*, __int64))(*(_QWORD*)v19 + 64LL))(v19, &v58,
                                                                   4);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 8, 0, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32));
  v23 = a1 + 16LL * *(int*)(a1 + 40);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 8, 1, *(_QWORD*)(v23 + 48),
                              *(_QWORD*)(v23 + 56));
  v24 = *a4;
  v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v26 = v25 + 16LL * *(int*)(v25 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v24 + 232LL))(v24, 8, 0, *(_QWORD*)(v26 + 24),
                              *(_QWORD*)(v26 + 32));
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v29 = v28 + 16LL * *(int*)(v28 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 232LL))(v27, 8, 1, *(_QWORD*)(v29 + 24),
                              *(_QWORD*)(v29 + 32));
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 48LL))(v30);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, _QWORD,
                                          _QWORD))(*(_QWORD*)*a4 + 256LL))(
      (void*)(_QWORD*)*a4, *a4, 8, 0, v31);
  v32 = *a4;
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v34 = v33 + 16LL * *(int*)(v33 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v32 + 232LL))(v32, 8, 2, *(_QWORD*)(v34 + 24),
                              *(_QWORD*)(v34 + 32));
  v35 = *a4;
  v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v37 = v36 + 16LL * *(int*)(v36 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v35 + 232LL))(v35, 8, 3, *(_QWORD*)(v37 + 16),
                              *(_QWORD*)(v37 + 24));
  v38 = *a4;
  v39 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
  v40 = v39 + 16LL * *(int*)(v39 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v38 + 232LL))(v38, 8, 4, *(_QWORD*)(v40 + 16),
                              *(_QWORD*)(v40 + 24));
  v41 = a5[1];
  v42 = *a5 + 62;
  if (*a5 >= -31) {
    v42 = *a5 + 31;
  }
  v43 = (unsigned int)(v42 >> 5);
  v45 = v41 + 31;
  v44 = v41 < -31;
  v46 = v41 + 62;
  if (v44) {
    v45 = v46;
  }
  (*(void (**)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD*)*a4 + 304LL))(
      *a4, v43, (unsigned int)(v45 >> 5), 16);
  v58 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]);
  v47 = *a3;
  v59 = 5;
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
  v49 = *(_QWORD*)(v48 + 8LL * *(int*)(v48 + 16));
  v50 = a3[1];
  v61 = 7;
  v60 = v49;
  v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
  v52 = *(_QWORD*)(v51 + 8LL * *(int*)(v51 + 8));
  v53 = a3[2];
  v63 = 7;
  v62 = v52;
  v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
  v55 = *(_QWORD*)(v54 + 8LL * *(int*)(v54 + 8));
  v56 = *a4;
  v65 = 7;
  v64 = v55;
  return (*(__int64 (**)(__int64, __int64*, __int64))(*(_QWORD*)v56 + 64LL))(
      v56, &v58, 4);
}

_QWORD* ResourceBuilder_b6cce0(__int64 a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  *v2 = GameData_1fc6e90;
  memcpy(v2 + 1, a1 + 8, 280);
  return v2;
}

__int64 ResourceBuilder_b6cd40(__int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fc6e90;
  return memcpy(a2 + 1, a1 + 8, 280);
}

bool ResourceBuilder_b6cd80(__int64 a1, __int64 a2)
{
  return (*(_DWORD*)(a2 + 16) & 8) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 276);
}

_QWORD* ResourceBuilder_b6ce00(__int64 a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  *v2 = GameData_1fc6f10;
  memcpy(v2 + 1, a1 + 8, 280);
  return v2;
}

__int64 ResourceBuilder_b6ce60(__int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fc6f10;
  return memcpy(a2 + 1, a1 + 8, 280);
}

bool ResourceBuilder_b6cea0(__int64 a1, __int64 a2)
{
  return (*(_DWORD*)(a2 + 16) & 8) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 272);
}

__int64 ResourceBuilder_b6cef0(__int64* a1, __int64 a2)
{
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  _QWORD v12[4];

  *a1 = a2;
  v2 = a1 + 1;
  GameRoutine_604020(a1 + 1);
  a1[17] = 0;
  memset(v12, 0, sizeof(v12));
  a1[16] = -1;
  a1[18] = 0;
  *((_DWORD*)a1 + 38) = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[25] = 0;
  *((_DWORD*)a1 + 52) = 0;
  v11 = v10;
  v10[0] = GameData_1fc6f90;
  GameRoutine_5fc230(v12);
  if (v11 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v11 + 48LL))(v11, v12);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(v2, *game_g_frame_clock_ptr[0] + 568, v12);
  a1[16] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), v2);
  if (v11 == v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  }
  v6 = a1 + 24;
  GameRoutine_a91100(a1 + 17, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 12);
  v8 = *a1;
  v7 = a1 + 31;
  GameRoutine_a91100(v6, *(_QWORD*)(v8 + 312),
                     *(_QWORD*)(*(_QWORD*)(v8 + 552) + 16LL), 72);
  (*(void (**)(__int64*))GameData_212e470[0])(v7);
  (*(void (**)(__int64*, __int64))GameData_212e478[0])(v7, 1);
  (*(void (**)(__int64*, __int64))GameData_212e488[0])(v7, 7);
  return (*(__int64 (**)(__int64*, _QWORD))GameData_212e480[0])(v7, 0);
}

void ResourceBuilder_b6d700(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 21;
}

bool ResourceBuilder_b6d810(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
}

__int64 ResourceBuilder_b6daf0(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  GameRoutine_6040f0(a1 + 12, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 12);
  v2 = a1[6];
  a1[6] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = a1[5];
  a1[5] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = a1[4];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
    v5 = a1[2];
    if (v5 == 0) {
      return result;
    }
  }
  else {
    v5 = a1[2];
    if (v5 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 ResourceBuilder_b6e230(__int64 a1, __int64 a2)
{
  __int64* v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  GameRoutine_604020(a1 + 120);
  *(_QWORD*)(a1 + 240) = -1;
  GameRoutine_a91100((__int64*)(a1 + 8), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 32);
  GameRoutine_a91100((__int64*)(a1 + 64), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 72);
  memset(v10, 0, sizeof(v10));
  v8[0] = GameData_1fc7110;
  v9 = v8;
  GameRoutine_5fc230(v10);
  if (v9 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v9 + 48LL))(v9, v10);
  }
  v5 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 120, *game_g_frame_clock_ptr[0] + 568, v10);
  *(_QWORD*)(a1 + 240) = GameRoutine_615760(*(_QWORD*)(*v5 + 552), a1 + 120);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
}

__int64 ResourceBuilder_b6e370(__int64 a1, __int64 a2)
{
  int v2;
  bool v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;

  v2 = *(_DWORD*)(a1 + 24);
  v5 = v2 < -1;
  v6 = ((_BYTE)v2 + 1) & 1;
  if (v5) {
    v6 = -v6;
  }
  *(_DWORD*)(a1 + 24) = v6;
  v7 = *(_QWORD*)(a1 + 8LL * v6 + 8);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7);
  *(_QWORD*)v8 = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v8 + 8) = 1098907648;
  v9 = *(_DWORD*)a2 + 62;
  if (*(int*)a2 >= -31) {
    v9 = *(_DWORD*)a2 + 31;
  }
  *(_DWORD*)(v8 + 16) = v9 >> 5;
  v10 = *(_DWORD*)(a2 + 4);
  v11 = v10 + 31;
  v5 = v10 < -31;
  v12 = v10 + 62;
  if (!v5) {
    v12 = v11;
  }
  *(_DWORD*)(v8 + 20) = v12 >> 5;
  *(_QWORD*)(v8 + 24) = 16;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
  v13 = *(_DWORD*)(a1 + 80);
  v5 = v13 < -1;
  v14 = ((_BYTE)v13 + 1) & 1;
  if (v5) {
    v14 = -v14;
  }
  *(_DWORD*)(a1 + 80) = v14;
  v15 = *(_QWORD*)(a1 + 8LL * v14 + 64);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 56LL))(v15);
  v17 = *(_QWORD*)(a2 + 16);
  v18 = *(_DWORD*)(v17 + 16);
  v19 = *(_QWORD*)(v17 + 8);
  *(_DWORD*)(v16 + 12) = 0;
  *(_QWORD*)v16 = v19;
  *(_DWORD*)(v16 + 8) = v18;
  v20 = *(_QWORD*)(a2 + 16);
  v21 = *(_DWORD*)(v20 + 28);
  v22 = *(_DWORD*)(v20 + 56);
  *(_QWORD*)(v16 + 16) = *(_QWORD*)(v20 + 20);
  *(_DWORD*)(v16 + 24) = v21;
  *(_DWORD*)(v16 + 28) = v22;
  v23 = *(_QWORD*)(a2 + 16);
  v24 = *(_DWORD*)(v23 + 40);
  v25 = *(_DWORD*)(v23 + 60);
  *(_QWORD*)(v16 + 32) = *(_QWORD*)(v23 + 32);
  *(_DWORD*)(v16 + 40) = v24;
  *(_DWORD*)(v16 + 44) = v25;
  v26 = *(_QWORD*)(a2 + 16);
  v27 = *(_DWORD*)(v26 + 52);
  v28 = *(_DWORD*)(v26 + 64);
  v29 = *(_QWORD*)(v26 + 44);
  *(_DWORD*)(v16 + 64) = 1077936128;
  *(_QWORD*)(v16 + 48) = v29;
  *(_DWORD*)(v16 + 56) = v27;
  *(_DWORD*)(v16 + 60) = v28;
  *(_DWORD*)(v16 + 68) = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 4LL);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 64LL))(v15);
}

__int64 ResourceBuilder_b6e4e0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               unsigned int* a5)
{
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
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  _QWORD v68[4];
  _QWORD* v69;

  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v13 = v12;
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 104LL))(*a4, v11, v13, v15, v16);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v17 = a4[1];
  gxc_NvnStateCache_BindBlendState(v17, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v17, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v17, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_BindDepthStencilState(v17, (unsigned int)GameData_21fded0);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v18 = *a4;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v20 = v19 + 16LL * *(int*)(v19 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v18 + 224LL))(v18, 3, 0, *(_QWORD*)(v20 + 24),
                              *(_QWORD*)(v20 + 32));
  v21 = *a4;
  v22 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v23 = v22 + 16LL * *(int*)(v22 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v21 + 224LL))(v21, 3, 1, *(_QWORD*)(v23 + 24),
                              *(_QWORD*)(v23 + 32));
  v24 = *a4;
  v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v26 = v25 + 16LL * *(int*)(v25 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v24 + 224LL))(v24, 3, 9, *(_QWORD*)(v26 + 24),
                              *(_QWORD*)(v26 + 32));
  v27 = *a4;
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[11] + 16LL))(a2[11]);
  v29 = v28 + 16LL * *(int*)(v28 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v27 + 224LL))(v27, 3, 2, *(_QWORD*)(v29 + 24),
                              *(_QWORD*)(v29 + 32));
  v30 = a1 + 16LL * *(int*)(a1 + 80);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 6, *(_QWORD*)(v30 + 88),
                              *(_QWORD*)(v30 + 96));
  v31 = a1 + 16LL * *(int*)(a1 + 24);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 8, *(_QWORD*)(v31 + 32),
                              *(_QWORD*)(v31 + 40));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 8, *((_QWORD*)a5 + 3), *((_QWORD*)a5 + 4),
                              *(unsigned int*)(a1 + 240));
  v32 = *a4;
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v32 + 248LL))(v32, 2, 9, v34, v35, *(unsigned int*)(a1 + 240));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 10, *((_QWORD*)a5 + 5),
                              *((_QWORD*)a5 + 6), *(unsigned int*)(a1 + 240));
  v36 = *a4;
  v37 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 40LL))(v37);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v36 + 248LL))(v36, 2, 11, v38, v39, *(unsigned int*)(a1 + 240));
  v40 = *a4;
  v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]);
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v40 + 248LL))(v40, 2, 12, v42, v43, *(unsigned int*)(a1 + 240));
  v44 = *a4;
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]);
  v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v44 + 248LL))(v44, 2, 13, v46, v47, *(unsigned int*)(a1 + 240));
  v48 = *a4;
  v49 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[14] + 16LL))(a2[14]);
  v50 = v49 + 16LL * *(int*)(v49 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v48 + 232LL))(v48, 2, 1, *(_QWORD*)(v50 + 16),
                              *(_QWORD*)(v50 + 24));
  v51 = a2[15];
  if (v51 != 0) {
    v52 = *a4;
    v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 40LL))(v53);
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v52 + 248LL))(v52, 2, 14, v54, v55,
                                *(unsigned int*)(a1 + 240));
  }
  v56 = *a4;
  v57 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[16] + 16LL))(a2[16]);
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 40LL))(v57);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v56 + 248LL))(v56, 2, 15, v58, v59, *(unsigned int*)(a1 + 240));
  v60 = *((_QWORD*)a5 + 1);
  v68[0] = GameData_1fc7190;
  v68[1] = a2;
  v69 = v68;
  v61 = GameRoutine_a738c0(v60, v68, 2);
  if (v69 == v68) {
    v62 = 32;
  }
  else {
    if (v69 == nullptr) {
      goto LABEL_8;
    }
    v62 = 40;
  }
  (*(void (**)(__int64))(*v69 + v62))((__int64)v69);

LABEL_8:
  GameRoutine_a73d40(*((_QWORD*)a5 + 1), a4);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v63 = a4[1];
  gxc_NvnStateCache_BindBlendState(v63, (unsigned int)GameData_21fdefc);
  gxc_NvnStateCache_BindPolygonState(v63, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v63, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  (*(void (**)(__int64, _QWORD*))GameData_212e770[0])(*a4 + 8LL, a2 + 4);
  v64 = *((_QWORD*)a5 + 1);
  v68[0] = GameData_1fc7210;
  v68[1] = a2;
  v69 = v68;
  v65 = GameRoutine_a738c0(v64, v68, 1);
  if (v69 == v68) {
    v66 = 32;
    goto LABEL_12;
  }
  if (v69 != nullptr) {
    v66 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v69 + v66))((__int64)v69);
  }
  GameRoutine_a73d40(*((_QWORD*)a5 + 1), a4);
  return (unsigned int)(v65 + v61);
}

bool ResourceBuilder_b6ed40(__int64 a1, __int64 a2)
{
  return (*(_DWORD*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL) &&
         (*(_DWORD*)(a2 + 16) & 4) != 0;
}

__int64 ResourceBuilder_b6f2d0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                               unsigned int* a4)
{
  __int64 v8;
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
  unsigned int v27;
  __int64 v28;
  _QWORD v30[4];
  _QWORD* v31;

  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
  v11 = v10;
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a3 + 104LL))(*a3, v9, v11, v13, v14);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
      *a3, 0, 0, *a4, a4[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 88LL))(
      *a3, 0, 0, *a4, a4[1]);
  gxc_NvnStateCache_Reset(a3[1]);
  gxc_NvnStateCache_SetCommandList(a3[1], *a3);
  v15 = a3[1];
  gxc_NvnStateCache_BindBlendState(v15, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v15, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v15, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a3[1]);
  (*(void (**)(__int64, _QWORD*))GameData_212e770[0])(*a3 + 8LL, a1 + 4);
  v16 = *a3;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 16LL))(*a1);
  v18 = v17 + 16LL * *(int*)(v17 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v16 + 224LL))(v16, 3, 0, *(_QWORD*)(v18 + 24),
                              *(_QWORD*)(v18 + 32));
  v19 = *a3;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 16LL))(a1[1]);
  v21 = v20 + 16LL * *(int*)(v20 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 224LL))(v19, 3, 1, *(_QWORD*)(v21 + 24),
                              *(_QWORD*)(v21 + 32));
  v22 = *a3;
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[2] + 16LL))(a1[2]);
  v24 = v23 + 16LL * *(int*)(v23 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v22 + 224LL))(v22, 3, 9, *(_QWORD*)(v24 + 24),
                              *(_QWORD*)(v24 + 32));
  v25 = *((_QWORD*)a4 + 1);
  v26 = a4[4];
  v30[0] = GameData_1fc7310;
  v30[1] = a1;
  v31 = v30;
  v27 = GameRoutine_a738c0(v25, v30, v26);
  if (v31 == v30) {
    v28 = 32;
    goto LABEL_5;
  }
  if (v31 != nullptr) {
    v28 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v31 + v28))((__int64)v31);
  }
  GameRoutine_a73d40(*((_QWORD*)a4 + 1), a3);
  return v27;
}

bool ResourceBuilder_b6f5e0(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
}

__int64 ResourceBuilder_b6f8b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  GameRoutine_6040f0(a1 + 17, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 17);
  v2 = a1[11];
  a1[11] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[10];
  a1[10] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[4];
  a1[4] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ResourceBuilder_b702d0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  GameRoutine_6040f0(a1 + 5, *game_g_frame_clock_ptr[0] + 568);
  v2 = a1[31];
  a1[31] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[30];
  a1[30] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[24];
  a1[24] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[23];
  a1[23] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[22];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return GameRoutine_604050(a1 + 5);
}

__int64 ResourceBuilder_b703a0(__int64* a1, _QWORD* a2)
{
  int v2;
  __int64 v3;
  bool v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 (**v11)(__int64);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;

  v2 = *((_DWORD*)a1 + 50);
  v3 = *a1;
  v6 = v2 < -1;
  v7 = ((_BYTE)v2 + 1) & 1;
  if (v6) {
    v7 = -v7;
  }
  *((_DWORD*)a1 + 50) = v7;
  v8 = a1[v7 + 23];
  v9 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10);
  v11 = (__int64 (**)(__int64))GameData_212e4d8[0];
  *v9 =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v3 + 256) + 8LL);
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
  v9[1] = (*v11)(*(_QWORD*)(v3 + 256) + 8LL);
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
  v9[2] = (*v11)(*(_QWORD*)(v3 + 256) + 8LL);
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
  v9[3] = (*v11)(*(_QWORD*)(v3 + 256) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v15 = *((_DWORD*)a1 + 64);
  v6 = v15 < -1;
  v16 = ((_BYTE)v15 + 1) & 1;
  if (v6) {
    v16 = -v16;
  }
  *((_DWORD*)a1 + 64) = v16;
  v17 = a1[v16 + 30];
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
  *(_OWORD*)v18 = *((_OWORD*)a1 + 1);
  *(_DWORD*)(v18 + 16) = *((_DWORD*)a1 + 8);
  *(_DWORD*)(v18 + 20) = *((_DWORD*)a1 + 9);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
}

__int64 ResourceBuilder_b70b00(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 17, *v2 + 568);
  v3 = a1[36];
  a1[36] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[35];
  a1[35] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[34];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_604050(a1 + 17);
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b71010(__int64 result, _QWORD* a2, _QWORD* a3,
                               __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v8;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
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
  _QWORD v29[6];

  if (*(_DWORD*)a4 != 3) {
    v29[4] = v4;
    v29[5] = v5;
    v6 = *(_QWORD**)(a4 + 8);
    if (v6 != nullptr) {
      v8 = (_QWORD*)result;
      v11 = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       **(_QWORD**)(result + 8) + 16LL))(
                       (void*)*(_QWORD**)(result + 8), *(_QWORD*)(result + 8)));
      v12 = (*(__int64 (**)(_QWORD*))(*v11 + 40LL))(v11);
      GameRoutine_19932a0(*v6, "CharaMask", 9, v12, v13);
      v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      v17 = v16;
      v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
      v29[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
      v29[3] = v19;
      v20 = a2[1];
      v29[0] = v15;
      v29[1] = v17;
      v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
      (*(void (**)(_QWORD, __int64, _QWORD*, __int64, __int64))(
          *(_QWORD*)*a3 + 128LL))(*a3, 2, v29, v22, v23);
      v24 = *a3;
      v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 16LL))(*v8);
      v26 = v25 + 16LL * *(int*)(v25 + 16);
      (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v24 + 224LL))(v24, 3, 0, *(_QWORD*)(v26 + 24),
                                  *(_QWORD*)(v26 + 32));
      gxc_NvnStateCache_Reset(a3[1]);
      gxc_NvnStateCache_SetCommandList(a3[1], *a3);
      v27 = a3[1];
      gxc_NvnStateCache_BindDepthStencilState(v27,
                                              (unsigned int)GameData_21fded0);
      gxc_NvnStateCache_BindBlendState(v27, (unsigned int)GameData_21fdee0);
      gxc_NvnStateCache_BindPolygonState(v27, (unsigned int)GameData_21fdf08);
      gxc_NvnStateCache_BindMultisampleState(v27,
                                             (unsigned int)GameData_21fdf14);
      gxc_NvnStateCache_ClearCommandList(a3[1]);
      v28 = *v6;
      if (*(_DWORD*)a4 > 2u) {
        return GameRoutine_1996450(v28, a3);
      }
      else {
        return GameRoutine_1995760(v28, a3);
      }
    }
  }
  return result;
}

__int64 ResourceBuilder_b71760(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8) + 16LL * *(int*)(*(_QWORD*)(a1 + 8) + 16LL);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 224LL))(*a2, 1, 0, *(_QWORD*)(v2 + 24),
                              *(_QWORD*)(v2 + 32));
}

__int64 ResourceBuilder_b71ec0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _QWORD v31[4];
  _QWORD* v32;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8LL, 49);
  gxc_NvnStateCache_Reset(a3[1]);
  gxc_NvnStateCache_SetCommandList(a3[1], *a3);
  v8 = a3[1];
  gxc_NvnStateCache_BindDepthStencilState(v8, (unsigned int)GameData_21fdec4);
  gxc_NvnStateCache_BindBlendState(v8, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v8, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v8, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a3[1]);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a3 + 168LL))(*a3, 1);
  v9 = *a3;
  v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 64) + 16LL))(
      *(_QWORD*)(a1 + 64));
  v11 = v10 + 16LL * *(int*)(v10 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v9 + 224LL))(v9, 3, 1, *(_QWORD*)(v11 + 24),
                             *(_QWORD*)(v11 + 32));
  v12 = *(_QWORD*)(a1 + 72);
  if (v12 != 0) {
    v13 = *a3;
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    v15 = v14 + 16LL * *(int*)(v14 + 16);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 224LL))(v13, 3, 3, *(_QWORD*)(v15 + 24),
                                *(_QWORD*)(v15 + 32));
  }
  v16 = *(_DWORD*)(a1 + 80);
  if (v16 < 1) {
    v29 = 0;
    goto LABEL_15;
  }
  v17 = 0;
  v18 = 0;
  do {
    if (((*(_QWORD*)(a4 + 8) >> v17) & 1) == 0) {
      v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8 * v17 + 24) + 16LL))(
          *(_QWORD*)(a1 + 8 * v17 + 24));
      v21 = v20 + 16LL * *(int*)(v20 + 16);
      (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 224LL))(*a3, 1, 0, *(_QWORD*)(v21 + 24),
                                  *(_QWORD*)(v21 + 32));
      v22 = *a3;
      v23 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8 * v17) + 16LL))(
          *(_QWORD*)(a2 + 8 * v17));
      v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v22 + 112LL))(v22, v24,
                                                                       v25);
      LODWORD(v22) = *(_DWORD*)(a1 + 4 * v17);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, (unsigned int)v22,
                                 (unsigned int)v22);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, (unsigned int)v22,
                                 (unsigned int)v22);
      (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
          *a3, 0, 0, 1.0f);
      v26 = *(_QWORD*)(a4 + 16 + 8 * v17);
      v27 = *(unsigned __int8*)(a4 + 60);
      v32 = v31;
      v31[0] = GameData_1fc7690;
      v31[1] = a4;
      v28 = GameRoutine_a738c0(v26, v31, v27);
      if (v32 == v31) {
        v19 = 32;
      }
      else {
        if (v32 == nullptr) {
          goto LABEL_7;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))(*v32 + v19))((__int64)v32);
    LABEL_7:
      v18 += v28;
      GameRoutine_a73e50(v26, a3);
      v16 = *(_DWORD*)(a1 + 80);
    }
    ++v17;
  } while (v17 < v16);
  v29 = v18;

LABEL_15:
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a3 + 168LL))(*a3, 0);
  return v29;
}

bool ResourceBuilder_b72270(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 56LL);
}

__int64 ResourceBuilder_b73120(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 16, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 32, *v2 + 568);
  GameRoutine_6040f0(a1 + 48, *v2 + 568);
  v3 = (__int64*)a1[69];
  a1[69] = 0;
  if (v3 != nullptr) {
    v4 = v3[1];
    v3[1] = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = *v3;
    *v3 = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  v3);
  }
  v7 = a1[68];
  a1[68] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[67];
  a1[67] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[66];
  a1[66] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[65];
  a1[65] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[64];
  a1[64] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  GameRoutine_604050(a1 + 48);
  GameRoutine_604050(a1 + 32);
  GameRoutine_604050(a1 + 16);
  v12 = a1[10];
  a1[10] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  result = a1[9];
  a1[9] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v14 = a1[8];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[6];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[4];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
    v17 = a1[2];
    if (v17 == 0) {
      return result;
    }
  }
  else {
    v17 = a1[2];
    if (v17 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak(v17);
  }
  return result;
}

void ResourceBuilder_b74270(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 2) = 3;
  *(_WORD*)(a2 + 6) = 42;
}

void ResourceBuilder_b74360(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 2) = 3;
  *(_WORD*)(a2 + 6) = 21;
}

__int64 ResourceBuilder_b75a00(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  ResourceBuilder_b4c220(a1 + 54);
  v2 = a1[48];
  a1[48] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[47];
  a1[47] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[41];
  a1[41] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[40];
  a1[40] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[34];
  a1[34] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[33];
  a1[33] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[32];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[30];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = a1[28];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = a1[26];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = a1[24];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = a1[22];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = a1[20];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[18];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b76e40(__int64 a1, _QWORD* a2, _QWORD* a3,
                               unsigned int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8LL, 18);
  v8 = a4;
  v9 = *a3;
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[v8 + 7] + 16LL))(a2[v8 + 7]);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 96LL))(v9, v11, v12);
  v13 = a1 + 112LL * a4;
  v14 = v13 + 432 + 16LL * *(int*)(v13 + 448);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a3 + 224LL))(*a3, 2, 2, *(_QWORD*)(v14 + 24),
                              *(_QWORD*)(v14 + 32));
  v15 = *a3;
  v16 = &a2[a4 + 2];
  if (a4 == 0) {
    v16 = a2;
  }
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v16 + 16LL))(*v16);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 40LL))(v17);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v15 + 248LL))(v15, 2, 1, v18, v19, *(unsigned int*)(a1 + 128));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a3 + 272LL))(*a3, 3, 0);
  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8LL, 18);
  v20 = *a3;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[v8 + 3] + 16LL))(a2[v8 + 3]);
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v20 + 96LL))(v20, v22,
                                                                  v23);
  v24 = v13 + 432 + 16LL * *(int*)(v13 + 504);
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a3 + 224LL))(*a3, 2, 2, *(_QWORD*)(v24 + 80),
                              *(_QWORD*)(v24 + 88));
  v25 = *a3;
  v26 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[v8 + 7] + 16LL))(a2[v8 + 7]);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v25 + 248LL))(v25, 2, 1, v27, v28, *(unsigned int*)(a1 + 128));
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a3 + 272LL))(
      *a3, 3, 0);
}

bool ResourceBuilder_b77210(__int64 a1, __int64 a2)
{
  return (*(_BYTE*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 880LL);
}

__int64 ResourceBuilder_b77b60(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  GameRoutine_6040f0(a1 + 1, *game_g_frame_clock_ptr[0] + 568);
  v2 = a1[26];
  a1[26] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[25];
  a1[25] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[22];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[20];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[18];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return GameRoutine_604050(a1 + 1);
}

__int64 ResourceBuilder_b782c0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 a5)
{
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

  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  v12 = v11;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 104LL))(*a4, v10, v12, v14, v15);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 128), *(unsigned int*)(a5 + 132));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 128), *(unsigned int*)(a5 + 132));
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v16 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v16, (unsigned int)GameData_21fdedc);
  gxc_NvnStateCache_BindBlendState(v16, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v16, (unsigned int)GameData_21fdf0c);
  gxc_NvnStateCache_BindMultisampleState(v16, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v17 = a1 + 16LL * *(int*)(a1 + 216);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v17 + 224),
                              *(_QWORD*)(v17 + 232));
  v18 = *a4;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v20 = v19 + 16LL * *(int*)(v19 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v18 + 224LL))(v18, 3, 1, *(_QWORD*)(v20 + 24),
                              *(_QWORD*)(v20 + 32));
  if (*(_BYTE*)(a5 + 152) == 1) {
    v21 = *a4;
    v22 = *(_QWORD*)(a1 + 152);
  LABEL_10:
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v21 + 200LL))(
        v21, 3, *(_QWORD*)(v22 + 144));
    goto LABEL_11;
  }
  v23 = *(_QWORD*)(a5 + 160);
  v24 = 128;
  if (*(_BYTE*)(v23 + 96) != 0) {
    v24 = 92;
  }
  if (*(float*)(v23 + v24) <= 0.00000011921f || *(_QWORD*)(a5 + 16) == 0 ||
      *(_DWORD*)(a5 + 24) == -1) {
    v21 = *a4;
    v22 = *(_QWORD*)(a1 + 136);
    goto LABEL_10;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 168) + 144LL));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 3, *(_QWORD*)(a5 + 16),
                              *(_QWORD*)(a5 + 24));

LABEL_11:
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, *(_QWORD*)a5, *(_QWORD*)(a5 + 8),
                              *(unsigned int*)(a1 + 128));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 2, *(_QWORD*)(a1 + 184),
                              *(_QWORD*)(a1 + 192));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 4, *(_QWORD*)(a5 + 32),
                              *(_QWORD*)(a5 + 40));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 2);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 14, 0);
}

__int64 ResourceBuilder_b78b40(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(result + 184);
  v2 = (_QWORD*)result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[21];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = v2[19];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v2[17];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v2[15];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v2[13];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = v2[11];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v2[9];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = v2[7];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v2[5];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v2[3];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
    v13 = v2[1];
    if (v13 == 0) {
      return result;
    }
  }
  else {
    v13 = v2[1];
    if (v13 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__int64 ResourceBuilder_b78dc0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  int v3;
  bool v7;
  int v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  int v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;

  v3 = *(_DWORD*)(a1 + 344);
  v7 = v3 < -1;
  v8 = ((_BYTE)v3 + 1) & 1;
  if (v7) {
    v8 = -v8;
  }
  *(_DWORD*)(a1 + 344) = v8;
  v9 = *(_QWORD*)(a1 + 8LL * v8 + 328);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
  *(_DWORD*)v10 = *((_DWORD*)a3 + 24);
  *(_DWORD*)(v10 + 4) = *((_DWORD*)a3 + 29);
  *(_DWORD*)(v10 + 8) = *((_DWORD*)a3 + 25);
  *(_DWORD*)(v10 + 12) = *((_DWORD*)a3 + 26);
  *(_DWORD*)(v10 + 16) = *((_DWORD*)a3 + 27);
  *(_DWORD*)(v10 + 20) = *((_DWORD*)a3 + 28);
  if (*((_BYTE*)a3 + 120) == 1) {
    v11 = sinf((float)(90.0f - *((float*)a3 + 33)) * 0.017453f);
    v12 = sinf(*((float*)a3 + 34) * 0.017453f);
    v13 = v11 - v12;
    v14 = *((_DWORD*)a3 + 31);
    v15 = *((_DWORD*)a3 + 32);
    if ((float)(v11 - v12) < 0.0001f) {
      v13 = 0.0001f;
    }
    v16 = 1.0f / v13;
  }
  else {
    v16 = 1.0f;
    v14 = 0;
    v15 = 0;
    v12 = 0.0f;
  }
  *(_DWORD*)(v10 + 32) = v14;
  *(_DWORD*)(v10 + 36) = v15;
  *(float*)(v10 + 40) = v12;
  *(float*)(v10 + 44) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 8,
      *(_QWORD*)(*(_QWORD*)(a1 +
                            16LL * ((6 * *((unsigned __int8*)a3 + 92) +
                                     2 * *((_DWORD*)a3 + 22)) |
                                    *((unsigned __int8*)a3 + 120)) +
                            8) +
                 144LL));
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, a3[2], a3[3],
                              *(unsigned int*)(a1 + 320));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 8, 1, a3[4], a3[5],
                              *(unsigned int*)(a1 + 320));
  if (*((_BYTE*)a3 + 92) == 1) {
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 8, 2, a3[6], a3[7],
                                *(unsigned int*)(a1 + 320));
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 8, 3, a3[8], a3[9],
                                *(unsigned int*)(a1 + 320));
  }
  v17 = a1 + 16LL * *(int*)(a1 + 344);
  result = (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 224LL))(*a2, 8, 1, *(_QWORD*)(v17 + 352),
                              *(_QWORD*)(v17 + 360));
  if (*((int*)a3 + 20) >= 1) {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do {
      v22 = 0;
      v23 = v20;
      do {
        v24 = *(_QWORD*)a3[1];
        if (v19 + v22 >=
            (unsigned __int64)((*(_QWORD*)(a3[1] + 8LL) - v24) >> 4)) {
          GameRoutine_b790d0(result);
        }
        (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, *(_QWORD*)(v24 + v23),
                                    *(_QWORD*)(v24 + v23 + 8));
        v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
            *a3, (unsigned int)v21, (unsigned int)v22);
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64,
                                                _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 256LL))((void*)(_QWORD*)*a2, *a2, 8, 0, v25);
        result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
            *(_QWORD*)*a2 + 304LL))(
            *a2, (unsigned int)((*((int*)a3 + 21) >> v21) / 8),
            (unsigned int)((*((int*)a3 + 21) >> v21) / 8), 1);
        ++v22;
        v23 += 16;
      } while (v22 != 6);
      ++v21;
      v20 += 96;
      v19 += 6;
    } while (v21 < *((int*)a3 + 20));
  }
  return result;
}

#pragma GCC visibility pop
