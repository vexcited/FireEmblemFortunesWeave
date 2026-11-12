#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* SdkRoutine_669690(_DWORD* result, int, int);
_DWORD* nvidia_647580(_DWORD* result, __int64);
_QWORD* SdkRoutine_64b0b0(_QWORD* result, __int64, __int64, __int64);
_QWORD* SdkRoutine_662d30(_QWORD* result);
_QWORD* SdkRoutine_689f90(__int64);
_QWORD* nvidia_64ac60(_QWORD* result, _QWORD*, unsigned int);
__attribute__((swiftcall)) void
    nn_wsi_nv_CalculateTextureRequirement_plt(PSEUDO_X8, _QWORD);
__int64 (**SdkRoutine_64a0d0())();
__int64 (*SdkRoutine_6555a0(const char*))();
__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsGetCurrentAllocator_plt(_QWORD);
__int64 NvOsGetCurrentThreadId_plt(void);
__int64 NvRmGpuAddressSpaceAllocationClose_plt(_QWORD);
__int64 NvRmGpuAddressSpaceAllocationCreate_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 NvRmGpuAddressSpaceAllocationRemap_plt(__int64, __int64, __int64,
                                               __int64);
__int64 NvRmGpuAddressSpaceClose_plt(_QWORD);
__int64 NvRmGpuChannelCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuChannelGetErrorInfo_plt(_QWORD, _QWORD, long double);
__int64 NvRmGpuChannelGetInfo_plt(_QWORD, _QWORD);
__int64 NvRmGpuChannelKickoffPbWithAttr_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD, _QWORD);
__int64 NvRmGpuChannelSetPreemptionModes_plt(_QWORD, _QWORD);
__int64 NvRmGpuDeviceChooseKind_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmGpuDeviceClose_plt(_QWORD);
__int64 NvRmGpuDeviceGetInfo_plt(_QWORD);
__int64 NvRmGpuLibClose_plt(_QWORD);
__int64 NvRmGpuTSGSubcontextCreate_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 NvRmGpuTSGSubcontextGetInfo_plt(void);
__int64 NvRmGpuTaskSchedulingGroupCreate_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemMap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_4d3da0();
__int64 SdkRoutine_4d3db0();
__int64 SdkRoutine_4d3dc0();
__int64 SdkRoutine_4d3dd0();
__int64 SdkRoutine_4d3de0();
__int64 SdkRoutine_4d3df0();
__int64 SdkRoutine_4d3e00();
__int64 SdkRoutine_5f9580(unsigned __int8**, int, __int64, __int64,
                          unsigned __int64, __int64);
__int64 SdkRoutine_645b80();
__int64 SdkRoutine_645dd0();
__int64 SdkRoutine_645de0();
__int64 SdkRoutine_645df0();
__int64 SdkRoutine_64b060(_QWORD, _QWORD);
__int64 SdkRoutine_64b070(_QWORD, _QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_64fff0(__int64);
__int64 SdkRoutine_653f40(int*, __int64);
__int64 SdkRoutine_654220(__int64);
__int64 SdkRoutine_656170();
__int64 SdkRoutine_6562e0(unsigned int, int, int, int, __int64, unsigned int,
                          unsigned int, char);
__int64 SdkRoutine_6566e0();
__int64 SdkRoutine_6589a0(_QWORD);
__int64 SdkRoutine_65b770(__int64 result, __int64, __int64, __int128*);
__int64 SdkRoutine_65b8f0();
__int64 SdkRoutine_65cf40(_QWORD, _QWORD);
__int64 SdkRoutine_65cf50(__int64 result);
__int64 SdkRoutine_65cf70(__int64 result, __int64, __int64);
__int64 SdkRoutine_65cfa0();
__int64 SdkRoutine_65d040(_QWORD, _QWORD);
__int64 SdkRoutine_65d0a0(_OWORD*, __int64);
__int64 SdkRoutine_65d380(__int64);
__int64 SdkRoutine_65d580(__int64, __int64);
__int64 SdkRoutine_65ee20(__int64, int);
__int64 SdkRoutine_65f8b0();
__int64 SdkRoutine_65fae0(__int64, __int64);
__int64 SdkRoutine_660940(__int64 result, unsigned __int64, __int64, int,
                          __int64, _DWORD*);
__int64 SdkRoutine_662a90(__int64, __int64);
__int64 SdkRoutine_663510(__int64, __int64);
__int64 SdkRoutine_663fa0(__int64 result);
__int64 SdkRoutine_6641b0(__int64, __int64, __int64, __int64, unsigned int,
                          __int64);
__int64 SdkRoutine_664480(__int64 result, __int64, __int64);
__int64 SdkRoutine_664890(__int64 result);
__int64 SdkRoutine_6649b0(__int64 result);
__int64 SdkRoutine_664bf0(__int64 result);
__int64 SdkRoutine_666a60(__int64*, unsigned __int64*, unsigned __int64, int);
__int64 SdkRoutine_6684e0(_QWORD*, __int64);
__int64 SdkRoutine_6684f0(_QWORD*, __int64);
__int64 SdkRoutine_6695e0(_QWORD, _QWORD, long double);
__int64 SdkRoutine_669630(_QWORD, _QWORD);
__int64 SdkRoutine_6696b0(_QWORD, _QWORD);
__int64 SdkRoutine_6696c0(_QWORD, _QWORD);
__int64 SdkRoutine_669700(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_669c60(__int64);
__int64 SdkRoutine_66afc0(__int64*);
__int64 SdkRoutine_66f5b0(__int64, int);
__int64 SdkRoutine_688f20(__int64*, __int64, __int64);
__int64 SdkRoutine_690f80(__int64, __int64);
__int64 SdkRoutine_693340(__int64);
__int64 SdkRoutine_693860(__int64, __int64*, uint16x4_t*);
__int64 SdkRoutine_699440(_DWORD*, __int64, __int64*, __int64, int, char);
__int64 SdkRoutine_69a140(__int64 result, char, char);
__int64 SdkRoutine_69efe0();
__int64 SdkRoutine_6a0860();
__int64 SdkRoutine_6a0870(__int64 result);
__int64 SdkRoutine_6a0890();
__int64 SdkRoutine_6a0a00(__int64 result, _DWORD*);
__int64 SdkRoutine_6add10(__int64 result, int);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 __errno_location_plt(_QWORD);
__int64 __nnmusl_check_device_path(__int64);
__int64 __nnmusl_fs_result_errno(unsigned int);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 graphics_68f9e0(__int64 result);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memcpy_plt_alt1(__int64, __int64,
                        unsigned __int64) __asm__("memcpy_plt");
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 memset_plt_alt2(__int64, int, unsigned __int64) __asm__("memset_plt");
__int64 nandroid_AMediaFormat_fromMsg_plt(_QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_MediaBufferGroup_init_plt(void);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nn_66fe20(int64x2_t*);
__int64 nn_696650(__int64 result, unsigned int);
__int64 nn_6a0a70(__int64 result, __int64);
__int64 nn_6ade30(__int64, int);
__int64 nn_audio_CreateAudioRendererManager_plt(_QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0_alt1(__int64) __asm__(
    "nn_diag_detail_AbortImpl_plt_858db0");
__int64 nn_fs_GetEntryType_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_LockMutex_plt_alt1(_QWORD) __asm__("nn_os_LockMutex_plt");
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt_alt1(_QWORD) __asm__("nn_os_UnlockMutex_plt");
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_QueryPointerBufferSize_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nn_vi2_CreateTimestampRecorder_plt(__int64);
__int64 nn_wsi_gl_GetLayerBufferSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_wsi_nv_OnDisplayMetadataUpdate_plt(_QWORD, _QWORD);
__int64 nnmusl_b1220(unsigned __int64*, _BYTE*, unsigned __int64,
                     unsigned __int8*, unsigned int);
__int64 nvidia_645b50();
__int64 nvidia_645b90();
__int64 nvidia_645c40();
__int64 nvidia_645d00();
__int64 nvidia_645da0();
__int64 nvidia_646ac0();
__int64 nvidia_646b60();
__int64 nvidia_646b70();
__int64 nvidia_646e90();
__int64 nvidia_646f80();
__int64 nvidia_647010();
__int64 nvidia_647020();
__int64 nvidia_647030();
__int64 nvidia_647050();
__int64 nvidia_647110();
__int64 nvidia_6474d0(__int64 result, int, int, int, int, int, int, int, int,
                      unsigned int, int);
__int64 nvidia_647940(int*, _BYTE*);
__int64 nvidia_649850(__int64, char, char);
__int64 nvidia_64afc0(__int64, __int64);
__int64 nvidia_64b2a0(__int64 result, __int64, __int64);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 strtoul_plt(_QWORD, _QWORD, _QWORD);
bool SdkRoutine_653ca0(__int64, __int64);
bool SdkRoutine_656190(unsigned int, unsigned int, unsigned int, int,
                       unsigned int, unsigned int*, unsigned int*, char,
                       unsigned int);
bool SdkRoutine_65a950(__int64, __int64, int, __int64, __int64, int, __int64);
bool SdkRoutine_66f380(__int64, __int64);
extern _DWORD SdkData_bb0490[8];
extern _DWORD SdkData_c77cf4[5];
extern _DWORD SdkData_c7ddbc[6];
extern _DWORD SdkData_c7ddd4[5];
extern _DWORD SdkData_c7dde8[5];
extern _UNKNOWN* SdkData_e89ba0;
extern _UNKNOWN* SdkData_e89bd8;
extern _UNKNOWN* SdkData_e89bf8;
extern _UNKNOWN* SdkData_e89c10;
extern _UNKNOWN* SdkData_e89c38;
extern _UNKNOWN* SdkData_e89dc0;
extern _UNKNOWN* SdkData_e89dd0;
extern _UNKNOWN* SdkData_e89dd8;
extern _UNKNOWN* SdkData_e89de0;
extern _UNKNOWN* SdkData_e89de8;
extern _UNKNOWN* SdkData_e89df0;
extern _UNKNOWN* SdkData_e89df8;
extern _UNKNOWN* SdkData_e89e00;
extern _UNKNOWN* SdkData_e89e08;
extern _UNKNOWN* SdkData_e89e10;
extern _UNKNOWN* SdkData_e89e18;
extern _UNKNOWN* SdkData_e89e20;
extern _UNKNOWN* SdkData_e89e28;
extern _UNKNOWN* SdkData_e89e30;
extern _UNKNOWN* SdkData_e89e50;
extern _UNKNOWN** SdkData_e89c30;
extern _UNKNOWN SdkData_c7e170;
extern _UNKNOWN SdkData_ea7c40;
extern _UNKNOWN SdkData_ea7c60;
extern _UNKNOWN SdkData_f29980;
extern __int128 SdkData_1042228;
extern __int128 SdkData_1042238;
extern __int128 SdkData_bb0d60;
extern __int128 SdkData_bb0fa0;
extern __int128 SdkData_bb0fb0;
extern __int128 SdkData_bb1700;
extern __int128 SdkData_bb1710;
extern __int128 SdkData_bb1cc0;
extern __int128 SdkData_bb2100;
extern __int128 SdkData_bb2110;
extern __int128 SdkData_bb2320;
extern __int128 SdkData_bb25a0;
extern __int128 SdkData_bb2a60;
extern __int128 SdkData_bb2e90;
extern __int128 SdkData_bb3320;
extern __int128 SdkData_bb3600;
extern __int128 SdkData_bb3610;
extern __int128 SdkData_bb3ab0;
extern __int128 SdkData_bb3c50;
extern __int128 SdkData_bb3c60;
extern __int128 SdkData_bb4570;
extern __int128 SdkData_bb4580;
extern __int128 SdkData_bb47e0;
extern __int128 SdkData_bb4ac0;
extern __int16 SdkData_10420d8;
extern __int64 (*(*SdkData_ea7c30)(__int64 a1, _BYTE* a2, const char* a3))();
extern __int64 (**SdkData_e89c20)();
extern __int64 (*SdkData_1042158)(_QWORD);
extern __int64 (*SdkData_e74e50[98])();
extern __int64 (*SdkData_e76610)();
extern __int64 (*SdkData_e76700[])();
extern __int64 (*SdkData_e89e38[2])();
extern __int64 (*SdkData_e89e68)();
extern __int64 (*SdkData_ea6528[100])();
extern __int64 (*SdkData_ea7c20)(__int64 a1, __int64 a2);
extern __int64* SdkData_e89c18;
extern __int64* SdkData_e89c40;
extern __int64 SdkData_10420c0;
extern __int64 SdkData_10420c8;
extern __int64 SdkData_10420d0;
extern __int64 SdkData_10420f8;
extern __int64 SdkData_1042100;
extern __int64 SdkData_1042108;
extern __int64 SdkData_1042120;
extern __int64 SdkData_1042128;
extern __int64 SdkData_1042130;
extern __int64 SdkData_1042248;
extern __int64 SdkData_10422a0;
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern __int64 SdkData_e88530;
extern __int64 SdkData_e89c78;
extern __int64 SdkData_e89e58[2];
extern __int64 SdkData_e89e60;
extern __int64 SdkData_f29808;
extern __int64 SdkData_f29960;
extern __int64 nn_capsrv_detail_g_AlbumAccessorService;
extern char SdkData_10420b0;
extern char SdkData_1042110;
extern char SdkData_c77db2[26];
extern int SdkData_10420ac;
extern int SdkData_1042118;
extern int SdkData_1042250;
extern int SdkData_f29968;
extern int nn_capsrv_detail_g_ScreenShotServiceHolder;
extern unsigned int SdkData_c7d240[735];
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88fd8[89])();
int** nn_688a40(int** result, __int64, __int64, int, char);
int* SdkRoutine_69aee0(int* result, char, char, __int16, char, int);
int* nvidia_647a50(_DWORD*, int*, int*, char*, unsigned int);
int strcmp_plt_alt1(const char*, const char*) __asm__("strcmp_plt");
int64x2_t nn_658950_alt1(__int64, __int64) __asm__("nn_658950");
long double SdkRoutine_6695f0(__int64);
long double SdkRoutine_66f3d0(__int64, _OWORD*);
long double nvidia_64b420(__int64*);
long double powf_plt(float, float);
void* SdkRoutine_69f0a0();
void* SdkRoutine_69f0b0(void* result);
void SdkRoutine_64b940();
void __attribute__((noreturn)) abort_plt();
__int64 nn_aee50(unsigned __int8* a1, __int64 a2, __int64 a3,
                 unsigned __int64 a4);
__int64 nn_aef20(unsigned int a1, unsigned __int8* a2, __int64 a3,
                 unsigned __int64 a4);
__int64 nn_1e9710(__int64 a1, __int64 a2);
__int64 nn_22f7a0(unsigned int* a1);
__int64 nn_2c57fc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_2c853c(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_4d33c0(_QWORD* a1);
bool nn_4d36c0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 nn_4d3c00();
__int64 nn_4d3c80(__int64 a1);
__int64 nn_4d3e30(__int64 a1, __int64 a2);
__int64 nn_4d9db0(_QWORD* a1);
__int64 nn_595b70(__int64 a1, _QWORD* a2);
__int64 nn_5a31c0(__int64 a1, _DWORD* a2, __int64 a3, char a4);
__int64 nn_5dde80(_QWORD* a1, __int64 a2);
__int64 nn_5f93e0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, _DWORD* a5,
                  unsigned int a6);
__int64 nn_5f9b90(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, _DWORD* a8, unsigned int a9);
__int64 nn_645840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                  char a6, void** a7);
__int64 nn_6468c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                  char a6, void** a7);
__int64 nn_6500a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, unsigned int a8, unsigned int a9);
__int64 (*nn_650c00(__int64 a1, _BYTE* a2))();
__int64 nn_650c90(__int64 a1, __int64 a2);
__int64 nn_654ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
__int64 nn_6554e0(_BYTE* a1, __int64 a2, const char* a3);
__int64 nn_6559e0(__int64 (*a1)(), __int64 a2, const char* a3);
__int64 nn_655c00(void* a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_655f40();
__int64 (*nn_655f60(__int64 a1, __int64 a2))();
float* nn_656400(float* result, int a2, float a3);
__int64 nn_6569d0(__int64 result, __int64 a2);
__int64 nn_656d40(__int64 result, _QWORD* a2);
__int64 nn_657150(__int64 result);
__int64 (***nn_658390(__int64 a1))(_QWORD, __int64);
__int64 nn_6584b0(__int64 result);
__int64 nn_658520(__int64 a1, int* a2, unsigned __int64* a3, char a4);
int64x2_t nn_658950(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_6589b0(__int64 a1, unsigned int a2, unsigned int a3);
__int64 nn_658b20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
unsigned __int64 nn_658fa0(int* a1, int8x16_t a2);
_QWORD* nn_6594c0(__int64 a1, __int64 a2, __int64 a3);
long double nn_659d40(__int64 a1);
bool nn_65a410(__int64 a1, int* a2, __int64 a3, char a4);
__int64 nn_65ba70(__int64 result, int a2, int a3);
void* nn_65cc90(__int64 a1, __int64 a2);
__int64 nn_65cd30();
__int64 nn_65cdb0(__int64 a1);
__int64 nn_65ce80(unsigned int a1);
float nn_65ce90(float result);
bool nn_65d850(__int64 a1, __int64 a2);
_QWORD* nn_65e620(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nn_65ec90(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_65ed70(__int64 a1, int a2);
__attribute__((swiftcall)) void nn_65f3c0(PSEUDO_X8 x8_, __int64 a1);
__int64 nn_65f400(__int64 a1, int a2, int a3, char a4, char a5);
__int64 nn_65f540(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nn_65f6a0(__int64 a1, __int64 a2);
long double nn_65fa80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_65fce0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4);
__int64 nn_660780(__int64 a1, int a2, int8x16_t* a3);
__int64 nn_660f20(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_6638a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
__int64 nn_6646b0(__int64 a1);
__int64 nn_664e30(__int64 a1, __int64 a2);
__int64 nn_668260(__int64 result, int a2, unsigned int a3, unsigned __int64 a4,
                  double a5, float32x4_t a6);
__int64 nn_669e30(__int64 a1);
__int64 nn_66a170(unsigned __int16* a1, __int64 a2);
__int64 nn_66aaa0(__int64 a1, __int64 a2);
__int64 nn_66b440(__int64* a1, int a2, __int64 a3, __int64* a4);
__int64 nn_66b5c0(__int64* a1, int a2, __int64 a3, __int64* a4);
__int64 nn_66c1c0(__int64 a1);
__int64 nn_66c420(void* this_, __int64 a2, __int64 a3, unsigned __int64 a4);
bool nn_66dde0(__int64 a1, int a2, __int64 a3);
__int64 nn_66eba0(__int64 result, unsigned int a2, __int64 a3, __int64 a4,
                  __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 nn_66ef20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                  __int64 a6, _DWORD* a7);
__attribute__((swiftcall)) void nn_66f330(PSEUDO_X8 x8_, __int64 a1);
_QWORD* nn_66f9b0();
__int64 nn_66fa80(__int64 a1);

__int64 nn_aee50(unsigned __int8* a1, __int64 a2, __int64 a3,
                 unsigned __int64 a4)
{
  int v4;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v10;
  _BYTE v11[785];
  unsigned __int64 v12[2];

  v4 = *a1;
  if (v4 == 47) {
    v6 = __nnmusl_check_device_path((__int64)a1);
    if ((unsigned int)v6 < 4) {
      return 0;
    }
    if ((_DWORD)v6 != -1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(v6);
    }
    v4 = *a1;
  }
  if (v4 == 0) {
    LODWORD(result) = 5159;
  LABEL_10:
    v8 = __nnmusl_fs_result_errno(result);
    *(_DWORD*)__errno_location_plt(v8) = v8;
    return 0xFFFFFFFFLL;
  }
  v12[0] = 0;
  v12[1] = 0;
  memset_plt((void*)v11, nullptr, 785, a4);
  LODWORD(result) = nnmusl_b1220(v12, v11, 0x311u, a1, 0xFFFFFF9C);
  if ((_DWORD)result != 0) {
    goto LABEL_10;
  }
  v10 = 0;
  result = nn_fs_GetEntryType_plt(&v10, v11);
  if ((_DWORD)result != 0) {
    goto LABEL_10;
  }
  return result;
}

__int64 nn_aef20(unsigned int a1, unsigned __int8* a2, __int64 a3,
                 unsigned __int64 a4)
{
  int v4;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _BYTE v11[785];
  unsigned __int64 v12[2];
  int v13;

  if ((a4 & 0xFFFFFEFF) != 0) {
    LODWORD(result) = 6183;
  LABEL_11:
    v9 = __nnmusl_fs_result_errno(result);
    *(_DWORD*)__errno_location_plt(v9) = v9;
    return 0xFFFFFFFFLL;
  }
  v4 = *a2;
  if (v4 == 47) {
    v7 = __nnmusl_check_device_path((__int64)a2);
    if ((unsigned int)v7 < 4) {
      return 0;
    }
    if ((_DWORD)v7 != -1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(v7);
    }
    v4 = *a2;
  }
  if (v4 == 0) {
    LODWORD(result) = 5159;
    goto LABEL_11;
  }
  v12[0] = 0;
  v12[1] = 0;
  memset_plt((void*)v11, nullptr, 785, a4);
  LODWORD(result) = nnmusl_b1220(v12, v11, 0x311u, a2, a1);
  if ((_DWORD)result != 0) {
    goto LABEL_11;
  }
  v13 = 0;
  result = nn_fs_GetEntryType_plt(&v13, v11);
  if ((_DWORD)result != 0) {
    goto LABEL_11;
  }
  return result;
}

__int64 nn_1e9710(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  struct {
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v10_;
  _QWORD v15[2];
  struct {
    __int64* v16;
    unsigned int* v17;
  } v16_;
  int v18;

  v2 = a1 + 8;
  v3 = *(unsigned int*)(v2 + 4);
  v5 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v2);
  LODWORD(v10_.v13) = 851968;
  v10_.v10 = 0x100000000000001LL;
  v10_.v11 = 8;
  v10_.v12 = 0x500020000000000LL;
  v16_.v16 = &v10_.v10;
  v16_.v17 = v5;
  *(_QWORD*)v5 = 0x801000006LL;
  v15[0] = a2;
  v15[1] = 64;
  v18 = 22;
  v6 = nn_sf_hipc_detail_SetBuffers(&v16_.v16, 1, (__int64)v15, (__int64)&v18,
                                    0, 32);
  if ((_DWORD)v6 != 0 ||
      (v7 = ((unsigned __int64)&v16_
                 .v17[*((unsigned __int8*)v16_.v16 + 23) + 3] +
             3) &
            0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v7 = 0x149434653LL, *(_QWORD*)(v7 + 8) = 3,
       *(_DWORD*)(v7 + 12) = nn_sf_cmif_GetInlineContext_plt(v6),
       LODWORD(v6) = nn_sf_hipc_SendSyncRequest_plt(v3, v5, 256),
       (_DWORD)v6 != 0)) {
    LODWORD(v8) = v6;
  }
  else {
    v10_.v13 = 0;
    v10_.v14 = 0;
    v10_.v11 = 0;
    v10_.v12 = 0;
    v10_.v10 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v10_.v10, v5);
    if (*(_DWORD*)((v10_.v10 + 4LL * BYTE1(v10_.v14) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v8 = *(__int64*)((char*)((__int64*)0x4LL) +
                       ((v10_.v10 + 4LL * BYTE1(v10_.v14) + 15) &
                        0xFFFFFFFFFFFFFFF0LL) +
                       4);
      if ((_DWORD)v8 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v8);
      }
    }
    else {
      LODWORD(v8) = 108554;
    }
  }
  return (unsigned int)v8;
}

__int64 nn_22f7a0(unsigned int* a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  _QWORD v10[2];
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  struct {
    __int64 v18;
    char gap64_[24];
    __int64 v19;
  } v18_;

  v1 = a1[11];
  v18_.v19 = 0;
  nn_audio_CreateAudioRendererManager_plt(v1 == 1);
  v3 = *a1;
  v4 = a1[1];
  v14 = 0;
  v15 = 0;
  v18_.v18 = 0;
  v10[0] = __PAIR64__(v4, v3);
  v10[1] = *((_QWORD*)a1 + 1);
  v11 = a1[4];
  v12 = *(_QWORD*)(a1 + 5);
  v13 = a1[7];
  LOBYTE(v14) = *((_BYTE*)a1 + 32);
  v5 = a1[10];
  HIDWORD(v14) = a1[9];
  LODWORD(v15) = v5;
  v6 = a1[12];
  BYTE2(v14) = a1[11];
  v7 = a1[13];
  BYTE3(v14) = v6;
  v16 = v7;
  v17 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(
      *(_QWORD*)v18_.v19 + 40LL))(v18_.v19, &v18_.v18, v10);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  v8 = v18_.v18;
  if (v18_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18_.v19 + 8LL))(v18_.v19);
  }
  return v8 + 4096;
}

__int64 nn_2c57fc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  nn_capsrv_detail_g_ScreenShotServiceHolder = 0;
  memset_plt((void*)&SdkData_f29808, nullptr, 344, a4);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_2c853c(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  SdkData_f29960 = 0;
  SdkData_f29968 = 0;
  nn_capsrv_detail_g_AlbumAccessorService = 0;
  memset_plt((void*)&SdkData_f29980, nullptr, 464, a4);
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_4d33c0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88420 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

bool nn_4d36c0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5;
  const char* v8;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 88LL))((void*)(&v8), (__int64)a1);
  v5 = snprintf_plt(a2, a3, "%s", v8);
  nandroid_String8_Destroy_String8_plt(&v8);
  return v5 > -1 && a3 > v5;
}

__int64 nn_4d3c00()
{
  nandroid_MediaBufferGroup_init_plt();
  return 1;
}

__int64 nn_4d3c80(__int64 a1)
{
  __int64 result;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD** v5;
  _QWORD* v6;
  int v7;

  result = *(_QWORD*)(a1 + 8);
  if (result == 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v4 = SdkData_e88338[0];
    if ((explicit & 1) == 0) {
      v7 = __cxa_guard_acquire_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
      if (v7 != 0) {
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
        v4 = SdkData_e88338[0];
      }
    }
    v5 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    v6 = (_QWORD*)SdkRoutine_4c3860(16, 64, v5);
    *(_QWORD*)(a1 + 8) = v6;
    *v6 = a1;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = SdkRoutine_4d3da0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) = SdkRoutine_4d3db0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) = SdkRoutine_4d3dc0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) = SdkRoutine_4d3dd0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 40LL) = SdkRoutine_4d3de0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 48LL) = SdkRoutine_4d3df0;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 56LL) = SdkRoutine_4d3e00;
    return *(_QWORD*)(a1 + 8);
  }
  return result;
}

__int64 nn_4d3e30(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v7)();
  _QWORD** v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[3];

  result = *(_QWORD*)(a2 + 16);
  if (result == 0) {
    v11[1] = v2;
    v11[2] = v3;
    v11[0] = 0;
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v7 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v7 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v7) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v7);
    v9 = SdkRoutine_4c3860(16, 1344, v8);
    nandroid_AMessage_AMessage_plt_86da50();
    v11[0] = v9;
    nandroid_RefBase_incStrong_plt(v9, v11);
    result = nandroid_AMediaFormat_fromMsg_plt(v11);
    v10 = v11[0];
    *(_QWORD*)(a2 + 16) = result;
    if (v10 != 0) {
      nandroid_RefBase_decStrong_plt(v10, v11);
      return *(_QWORD*)(a2 + 16);
    }
  }
  return result;
}

__int64 nn_4d9db0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88530 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 nn_595b70(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int* v7;
  unsigned __int64 v8;
  int v9;
  _DWORD* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    __int64 v18;
  } v17_;

  v4 = a1 + 8;
  v5 = *(unsigned int*)(v4 + 4);
  v7 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v4);
  *(_QWORD*)v7 = 0x800000006LL;
  v8 = ((unsigned __int64)v7 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v8 = 0x149434653LL;
  *(_QWORD*)(v8 + 8) = 12;
  *(_DWORD*)(v8 + 12) = nn_sf_cmif_GetInlineContext_plt(v7);
  v9 = nn_sf_hipc_SendSyncRequest_plt(v5, v7, 256);
  if (v9 != 0) {
    LODWORD(v13) = v9;
  }
  else {
    v17_.v18 = 0;
    memset(v17_.v17, 0, sizeof(v17_.v17));
    nn_sf_hipc_detail_b8c00((__int64)v17_.v17, v7);
    v10 = (_DWORD*)((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                    0xFFFFFFFFFFFFFFF0LL);
    v12 = *v10;
    v11 = (__int64*)(v10 + 4);
    if (v12 == 1329808979) {
      v13 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v13 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v13);
      }
      else {
        v15 = *v11;
        v14 = v11[1];
        *a2 = v15;
        a2[1] = v14;
      }
    }
    else {
      LODWORD(v13) = 108554;
    }
  }
  return (unsigned int)v13;
}

__int64 nn_5a31c0(__int64 a1, _DWORD* a2, __int64 a3, char a4)
{
  __int64 v6;
  __int64 v7;
  unsigned int* v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    __int64 v17;
  } v16_;

  v6 = a1 + 8;
  v7 = *(unsigned int*)(v6 + 4);
  v11 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v6);
  *(_QWORD*)v11 = 0xC00000006LL;
  v12 = ((unsigned __int64)v11 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = a3;
  *(_BYTE*)(v12 + 16) = a4;
  *(_QWORD*)v12 = 0x149434653LL;
  *(_QWORD*)(v12 + 8) = 108;
  *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt(v11);
  v13 = nn_sf_hipc_SendSyncRequest_plt(v7, v11, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v16_.v17 = 0;
    memset(v16_.v16, 0, sizeof(v16_.v16));
    nn_sf_hipc_detail_b8c00((__int64)v16_.v16, v11);
    if (*(_DWORD*)((v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v14 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v14 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v14);
      }
      else {
        *a2 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                         ((v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                          0xFFFFFFFFFFFFFFF0LL) +
                         4);
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  return (unsigned int)v14;
}

__int64 nn_5dde80(_QWORD* a1, __int64 a2)
{
  int v5;

  nn_os_LockMutex_plt((__int64)(a1 + 155));
  a1[2] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[3] = 0;
  a1[4] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 2));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[21] = 0;
  a1[38] = 0;
  a1[39] = 0;
  a1[36] = 0;
  a1[37] = 0;
  a1[34] = 0;
  a1[35] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[28] = 0;
  a1[29] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 21));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[57] = 0;
  a1[58] = 0;
  a1[55] = 0;
  a1[56] = 0;
  a1[53] = 0;
  a1[54] = 0;
  a1[51] = 0;
  a1[52] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[47] = 0;
  a1[48] = 0;
  a1[45] = 0;
  a1[46] = 0;
  a1[43] = 0;
  a1[44] = 0;
  a1[41] = 0;
  a1[42] = 0;
  a1[40] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 40));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[77] = 0;
  a1[76] = 0;
  a1[75] = 0;
  a1[74] = 0;
  a1[73] = 0;
  a1[72] = 0;
  a1[71] = 0;
  a1[70] = 0;
  a1[69] = 0;
  a1[68] = 0;
  a1[67] = 0;
  a1[66] = 0;
  a1[65] = 0;
  a1[63] = 0;
  a1[64] = 0;
  a1[61] = 0;
  a1[62] = 0;
  a1[59] = 0;
  a1[60] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 59));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[96] = 0;
  a1[95] = 0;
  a1[94] = 0;
  a1[93] = 0;
  a1[92] = 0;
  a1[91] = 0;
  a1[90] = 0;
  a1[89] = 0;
  a1[88] = 0;
  a1[87] = 0;
  a1[86] = 0;
  a1[85] = 0;
  a1[84] = 0;
  a1[83] = 0;
  a1[82] = 0;
  a1[81] = 0;
  a1[80] = 0;
  a1[79] = 0;
  a1[78] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 78));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[115] = 0;
  a1[114] = 0;
  a1[113] = 0;
  a1[112] = 0;
  a1[111] = 0;
  a1[110] = 0;
  a1[109] = 0;
  a1[108] = 0;
  a1[107] = 0;
  a1[106] = 0;
  a1[105] = 0;
  a1[104] = 0;
  a1[103] = 0;
  a1[102] = 0;
  a1[101] = 0;
  a1[100] = 0;
  a1[99] = 0;
  a1[98] = 0;
  a1[97] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 97));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[134] = 0;
  a1[133] = 0;
  a1[132] = 0;
  a1[131] = 0;
  a1[130] = 0;
  a1[129] = 0;
  a1[128] = 0;
  a1[127] = 0;
  a1[126] = 0;
  a1[125] = 0;
  a1[124] = 0;
  a1[123] = 0;
  a1[122] = 0;
  a1[121] = 0;
  a1[120] = 0;
  a1[119] = 0;
  a1[118] = 0;
  a1[117] = 0;
  a1[116] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 116));
  if (v5 != 0) {
    goto LABEL_10;
  }
  a1[153] = 0;
  a1[152] = 0;
  a1[151] = 0;
  a1[150] = 0;
  a1[149] = 0;
  a1[148] = 0;
  a1[147] = 0;
  a1[146] = 0;
  a1[145] = 0;
  a1[144] = 0;
  a1[143] = 0;
  a1[142] = 0;
  a1[141] = 0;
  a1[140] = 0;
  a1[139] = 0;
  a1[138] = 0;
  a1[137] = 0;
  a1[136] = 0;
  a1[135] = 0;
  v5 = nn_vi2_CreateTimestampRecorder_plt((__int64)(a1 + 135));
  if (v5 != 0) {
  LABEL_10:
    nn_diag_detail_AbortImpl_plt_858db0_alt1((__int64)&v5);
  }
  a1[1] = a2;
  a1[154] = 0;
  return nn_os_UnlockMutex_plt((__int64)(a1 + 155));
}

__int64 nn_5f93e0(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, _DWORD* a5,
                  unsigned int a6)
{
  __int64 v6;
  unsigned int* v12;
  __int64 v13;
  unsigned __int64 v14;
  _DWORD* v15;
  __int64 v16;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;
  _QWORD v23[2];
  struct {
    unsigned __int8* v24;
    unsigned int* v25;
  } v24_;
  int v26;

  v6 = *(unsigned int*)(a1 + 4);
  v12 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v18_.v21) = 851968;
  v18_.v18 = 0x10000000000001LL;
  v18_.v19 = 8;
  v18_.v20 = 0x500000200000000LL;
  v24_.v24 = (unsigned __int8*)&v18_.v18;
  v24_.v25 = v12;
  *(_QWORD*)v12 = 0x800100006LL;
  v23[0] = a2;
  v23[1] = a3;
  v26 = 5;
  v13 = SdkRoutine_5f9580(&v24_.v24, 1, (__int64)v23, (__int64)&v26, 0, 32);
  if ((_DWORD)v13 != 0 ||
      (v14 = ((unsigned __int64)&v24_.v25[v24_.v24[23] + 3] + 3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v14 = 0x149434653LL, *(_QWORD*)(v14 + 8) = a6,
       *(_DWORD*)(v14 + 12) = nn_sf_cmif_GetInlineContext_plt(v13),
       LODWORD(v13) = nn_sf_hipc_SendSyncRequest_plt(v6, v12, 256),
       (_DWORD)v13 != 0)) {
    LODWORD(v16) = v13;
  }
  else {
    v18_.v21 = 0;
    v18_.v22 = 0;
    v18_.v19 = 0;
    v18_.v20 = 0;
    v18_.v18 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v18_.v18, v12);
    v15 = (_DWORD*)((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                    0xFFFFFFFFFFFFFFF0LL);
    if (*v15 == 1329808979) {
      v16 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v16 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v16);
      }
      else {
        *a4 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                         ((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                          0xFFFFFFFFFFFFFFF0LL) +
                         4);
        *a5 = v15[5];
      }
    }
    else {
      LODWORD(v16) = 108554;
    }
  }
  return (unsigned int)v16;
}

__int64 nn_5f9b90(__int64 a1, int a2, int a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, _DWORD* a8, unsigned int a9)
{
  __int64 v16;
  unsigned __int8 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v26_;
  __int64 v31;
  struct {
    unsigned __int8* v32;
    unsigned int* v33;
  } v32_;
  struct {
    _QWORD v34[3];
    int v35;
  } v34_;

  v16 = a1;
  v17 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v17 & 1) == 0) {
    v18 = *(unsigned int*)(a1 + 4);
    LOWORD(v34_.v34[0]) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(v34_.v34, v18);
    LODWORD(v26_.v26) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v26_.v26);
    }
    atomic_store(v34_.v34[0], (unsigned __int16*)(v16 + 2));
    atomic_store(1u, (unsigned __int8*)(v16 + 1));
  }
  v19 = atomic_load((unsigned __int16*)(v16 + 2));
  v20 = *(unsigned int*)(v16 + 4);
  v21 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v34_.v35 = 1507349;
  v34_.v34[0] = 0x111000000000001LL;
  v34_.v34[1] = 3083;
  v34_.v34[2] = 0xA00070402000000LL;
  v32_.v32 = (unsigned __int8*)v34_.v34;
  v32_.v33 = v21;
  *(_QWORD*)v21 = 0xC0B01110006LL;
  v26_.v26 = a4;
  v26_.v27 = a5;
  v26_.v28 = a6;
  v26_.v29 = a7;
  v31 = 0x2200000021LL;
  v22 = SdkRoutine_5f9580(&v32_.v32, 2, (__int64)&v26_.v26, (__int64)&v31, v19,
                          40);
  if ((_DWORD)v22 != 0 ||
      (v23 = ((unsigned __int64)&v32_.v33[v32_.v32[23] + 3] + 3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_DWORD*)(v23 + 16) = a2, *(_DWORD*)(v23 + 20) = a3,
       *(_QWORD*)v23 = 0x149434653LL, *(_QWORD*)(v23 + 8) = a9,
       *(_DWORD*)(v23 + 12) = nn_sf_cmif_GetInlineContext_plt(v22),
       LODWORD(v22) = nn_sf_hipc_SendSyncRequest_plt(v20, v21, 256),
       (_DWORD)v22 != 0)) {
    LODWORD(v24) = v22;
  }
  else {
    v26_.v29 = 0;
    v26_.v30 = 0;
    v26_.v27 = 0;
    v26_.v28 = 0;
    v26_.v26 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v26_.v26, v21);
    if (*(_DWORD*)((v26_.v26 + 4LL * BYTE1(v26_.v30) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v24 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v26_.v26 + 4LL * BYTE1(v26_.v30) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v24 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v24);
      }
      else {
        *a8 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                         ((v26_.v26 + 4LL * BYTE1(v26_.v30) + 15) &
                          0xFFFFFFFFFFFFFFF0LL) +
                         4);
      }
    }
    else {
      LODWORD(v24) = 108554;
    }
  }
  return (unsigned int)v24;
}

__int64 nn_645840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                  char a6, void** a7)
{
  void* v13;
  void* v15;

  if (a6 != 0) {
    return 2;
  }
  v13 = (void*)NvOsAlloc_plt(272);
  if (v13 == nullptr) {
    return 6;
  }
  v15 = v13;
  memset_plt_alt1(v13, nullptr, 272);
  if (a5 != 0) {
    *((_DWORD*)v15 + 14) = 1;
  }
  *((_QWORD*)v15 + 31) = a2;
  *((_QWORD*)v15 + 32) = a3;
  *((_QWORD*)v15 + 26) = a1;
  *a7 = v15;
  *(_QWORD*)v15 = nvidia_645b50;
  *((_QWORD*)v15 + 5) = SdkRoutine_645b80;
  *((_QWORD*)v15 + 8) = nvidia_645b90;
  *((_QWORD*)v15 + 9) = nvidia_645c40;
  *((_QWORD*)v15 + 18) = nvidia_645d00;
  *((_QWORD*)v15 + 19) = nvidia_645da0;
  *((_QWORD*)v15 + 15) = SdkRoutine_645dd0;
  *((_QWORD*)v15 + 16) = SdkRoutine_645de0;
  *((_QWORD*)v15 + 12) = SdkRoutine_645df0;
  *((_QWORD*)v15 + 27) = (char*)v15 + 216;
  *((_QWORD*)v15 + 28) = (char*)v15 + 216;
  return 0;
}

__int64 nn_6468c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                  char a6, void** a7)
{
  void* v15;
  void* v17;
  int v19;
  int v20;
  unsigned __int16 v21[2];
  unsigned __int16 v22;

  if (a6 != 0) {
    return 2;
  }
  v15 = (void*)NvOsAlloc_plt(392);
  if (v15 == nullptr) {
    return 6;
  }
  v17 = v15;
  memset_plt_alt1(v15, nullptr, 392);
  if (a5 != 0) {
    *((_DWORD*)v17 + 14) = 1;
  }
  *((_QWORD*)v17 + 30) = a3;
  *(_QWORD*)v17 = nvidia_646ac0;
  *((_QWORD*)v17 + 5) = nvidia_646b60;
  *((_QWORD*)v17 + 8) = nvidia_646b70;
  *((_QWORD*)v17 + 9) = nvidia_646e90;
  *((_QWORD*)v17 + 18) = nvidia_646f80;
  *((_QWORD*)v17 + 15) = nvidia_647010;
  *((_QWORD*)v17 + 16) = nvidia_647020;
  *((_QWORD*)v17 + 12) = nvidia_647030;
  *((_QWORD*)v17 + 22) = nvidia_647050;
  *((_QWORD*)v17 + 25) = nvidia_647110;
  *((_QWORD*)v17 + 26) = a1;
  memset_plt_alt1((void*)((char*)v17 + 216), nullptr, 16);
  *((_QWORD*)v17 + 29) = 0;
  *((_QWORD*)v17 + 32) = a2;
  v22 = 640;
  v21[0] = 480;
  nn_wsi_gl_GetLayerBufferSize_plt(&v22, v21, a2);
  v19 = v22;
  v20 = v21[0];
  *a7 = v17;
  *((_DWORD*)v17 + 62) = v19;
  *((_DWORD*)v17 + 63) = v20;
  return 0;
}

__int64 nn_6500a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7, unsigned int a8, unsigned int a9)
{

#pragma clang fp contract(off)
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  bool v17;
  char v18;
  bool v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  bool v26;
  int v27;
  int v28;
  __int64 v29;
  unsigned int v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  char v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  float* v48;
  float v49;
  unsigned int v50;
  char v51;
  char v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v58;
  int v59;
  int v60;
  int v61;
  char v62;
  int v63;
  unsigned int v64;
  char v65;
  char v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  char v74;
  __int64 v77;
  __int64 v80;
  int v81;
  char v82;
  __int64 v83;
  int v85;
  __int64 v86;
  __int64 v87;
  float v88;
  unsigned int v89;
  unsigned int v90;

  v9 = *(_DWORD*)(a4 + 8);
  v10 = *(_DWORD*)(a4 + 12);
  v11 = a9;
  v12 = a8;
  v13 = v10 & 0xFFFFFFFE;
  v14 = *(_QWORD*)a4;
  v15 = *(_DWORD*)(a7 + 8);
  v16 = *(_DWORD*)(a7 + 12);
  v17 = (v9 & 0xFFFFFFFE) == 8 && v13 == 2;
  v18 = v17;
  v19 = v9 == 1 && v13 == 2;
  if (v19) {
    v9 = 1;
  }
  if (v19) {
    v20 = 0;
  }
  else {
    v20 = v10;
  }
  v21 = (4LL * a9 + 15) & 0x7FFFFFFF0LL;
  if (!v19) {
    v21 = v14;
  }
  if ((v18 & 1) != 0) {
    v22 = 0;
  }
  else {
    v22 = v9;
  }
  if ((v18 & 1) != 0) {
    v23 = v14;
  }
  else {
    v23 = v21;
  }
  v83 = v23;
  if ((v18 & 1) != 0) {
    v24 = v10;
  }
  else {
    v24 = v20;
  }
  v25 = v16 & 0xFFFFFFFE;
  v85 = v24;
  v26 = (v15 & 0xFFFFFFFE) == 8 && v25 == 2;
  v27 = v26;
  v81 = v27;
  v86 = *(_QWORD*)a7;
  if (v26) {
    v15 = 0;
    v28 = 0;
    goto LABEL_49;
  }
  v28 = 0;
  if ((int)v15 > 2) {
    if (v15 == 3 || v15 == 5) {
      goto LABEL_49;
    }
  LABEL_48:
    v28 = 1;
    goto LABEL_49;
  }
  if (v15 != 0) {
    if (v15 != 1) {
      goto LABEL_48;
    }
    v29 = *(_QWORD*)a7;
    if (v25 == 2) {
      v16 = 0;
    }
    v15 = 1;
    v28 = 0;
    if (v25 == 2) {
      v29 = (4LL * a9 + 15) & 0x7FFFFFFF0LL;
    }
    v86 = v29;
  }
LABEL_49:
  v31 = v16 - 2;
  v32 = 0;
  if (v16 != 2) {
    v28 = 0;
  }
  if (a8 == 0 || a9 == 0) {
    goto LABEL_66;
  }
  if (v15 > 5) {
    LOBYTE(v33) = 0;
    if (v31 >= 2) {
      goto LABEL_55;
    }
  }
  else {
    v33 = SdkData_c7ddbc[v15];
    if (v31 >= 2) {
    LABEL_55:
      if (v16 == 1) {
        v34 = a9 - 1;
        v35 = a8 << v33;
      }
      else {
        if (v16 != 0) {
          v32 = 0;
          if (v22 <= 5) {
            goto LABEL_67;
          }
          goto LABEL_69;
        }
        v34 = a8 - 1;
        v35 = a9 << v33;
      }
      v32 = v35 + v86 * v34;
    LABEL_66:
      if (v22 <= 5) {
        goto LABEL_67;
      }
    LABEL_69:
      LOBYTE(v37) = 0;
      goto LABEL_70;
    }
  }
  v36 = ((a9 + (0x10u >> v33) - 1) >> (4 - v33)) * ((a8 + 7) >> 3);
  if ((~v36 & 3) == 0) {
    ++v36;
  }
  v32 = v36 << 7;
  if (v16 != 3) {
    goto LABEL_66;
  }
  v32 += (((_DWORD)v32 + 384) & 0xFFFFFE00) - 512;
  if (v22 > 5) {
    goto LABEL_69;
  }
LABEL_67:
  v37 = SdkData_c7ddbc[v22];
LABEL_70:
  v80 = (unsigned int)(1 << v37);
  if (v15 > 5) {
    LOBYTE(v38) = 0;
  }
  else {
    v38 = SdkData_c7ddbc[v15];
  }
  v39 = 0;
  v40 = 1 << v38;
  v41 = v81;
  if (v22 != v15) {
    v41 = 1;
  }
  v82 = v41 | v18;
  if (v28 != 0) {
    v42 = 2;
  }
  else {
    v42 = 1;
  }
  v77 = v42;
  do {
    if (v32 != 0) {
      v43 = 0;
      v44 = 0;
      v87 = a5 + v32 * v39;
      do {
        v45 = v15;
        v46 = v16;
        if (SdkRoutine_656190(v15, v12, v11, v16, v86, &v90, &v89, v39 != 0,
                              v44)) {
          v48 = (float*)(a2 + SdkRoutine_6562e0(v22, v12, v11, v85, v83, v90,
                                                v89, v39 != 0));
          if ((v82 & 1) != 0) {
            v49 = 0x0.0p+0f;
            if ((int)v22 > 7) {
              if (v22 != 8) {
                if (v22 != 9) {
                  goto LABEL_115;
                }
                v50 = *(unsigned __int8*)v48;
                v51 = 2;
                v52 = 5;
                goto LABEL_97;
              }
              v50 = *(unsigned __int8*)v48;
              v51 = 3;
              v52 = 4;
              if ((v50 & 0x7F) != 0x7F) {
                goto LABEL_97;
              }
              v53 = 0x7FFFFF;
              v54 = 2139095040;
            LABEL_113:
              v62 = v52 + v51;
              LODWORD(v49) = v54 | (((1 << v62) & v50) << (v62 ^ 0x1F)) | v53;
              if (v50 == 1 << v62) {
                v49 = 0x0.0p+0f;
              }
            }
            else {
              if (v22 != 0) {
                if (v22 == 1) {
                  v49 = *v48;
                }
                goto LABEL_115;
              }
              v50 = *(unsigned __int16*)v48;
              v52 = 5;
              v51 = 10;
            LABEL_97:
              v55 = v50 & ~(-1 << v51);
              v56 = (v50 >> v51) & ~(-1 << v52);
              if (v22 != 8 && v56 == ~(-1 << v52)) {
                v17 = v55 == 0;
                v54 = 2139095040;
                if (v17) {
                  v53 = 0;
                }
                else {
                  v53 = 0x7FFFFF;
                }
                if (v50 == 0) {
                  goto LABEL_115;
                }
                goto LABEL_113;
              }
              if (v56 == 0 && v55 != 0) {
                v56 = 1;
                v58 = 1 << v51;
                if ((v55 & (1 << v51)) != 0) {
                  v59 = v50 & ~(-1 << v51);
                }
                else {
                  do {
                    v60 = v58 & (2 * v55);
                    v59 = 2 * v55;
                    --v56;
                    v55 *= 2;
                  } while (v60 == 0);
                }
                v55 = v59 & ~v58;
              }
              v61 = (-1 << (v52 - 1)) + v56;
              v53 = v55 << (23 - v51);
              v54 = (v61 << 23) + 0x40000000;
              if (v50 != 0) {
                goto LABEL_113;
              }
            }
          LABEL_115:
            if (v81 != 0) {
              v88 = 0x0.0p+0f;
              nn_656400(&v88, *(_DWORD*)(a7 + 8), v49);
              v63 = *(_DWORD*)(a7 + 8);
              v49 = 0x0.0p+0f;
              if (v63 <= 7) {
                if (v63 != 0) {
                  v12 = a8;
                  v11 = a9;
                  if (v63 == 1) {
                    v49 = v88;
                  }
                  goto LABEL_144;
                }
                v64 = LOWORD(v88);
                v66 = 5;
                v65 = 10;
              LABEL_125:
                v12 = a8;
                if (v63 == 8 && (v64 & 0x7F) == 0x7F) {
                  v11 = a9;
                  v67 = 0x7FFFFF;
                  v68 = 2139095040;
                }
                else {
                  v69 = v64 & ~(-1 << v65);
                  v70 = (v64 >> v65) & ~(-1 << v66);
                  if (v63 == 8 || v70 != ~(-1 << v66)) {
                    v11 = a9;
                    if (v70 == 0 && v69 != 0) {
                      v70 = 1;
                      v71 = 1 << v65;
                      if ((v69 & (1 << v65)) != 0) {
                        v72 = v64 & ~(-1 << v65);
                      }
                      else {
                        do {
                          v73 = v71 & (2 * v69);
                          v72 = 2 * v69;
                          --v70;
                          v69 *= 2;
                        } while (v73 == 0);
                      }
                      v69 = v72 & ~v71;
                    }
                    v67 = v69 << (23 - v65);
                    v68 = (((-1 << (v66 - 1)) + v70) << 23) + 0x40000000;
                    if (v64 == 0) {
                      goto LABEL_144;
                    }
                  }
                  else {
                    v11 = a9;
                    v68 = 2139095040;
                    if (v69 != 0) {
                      v67 = 0x7FFFFF;
                    }
                    else {
                      v67 = 0;
                    }
                    if (v64 == 0) {
                      goto LABEL_144;
                    }
                  }
                }
                v74 = v66 + v65;
                LODWORD(v49) = v68 | (((1 << v74) & v64) << (v74 ^ 0x1F)) | v67;
                if (v64 == 1 << v74) {
                  v49 = 0x0.0p+0f;
                }
                goto LABEL_144;
              }
              if (v63 == 8) {
                v64 = LOBYTE(v88);
                v65 = 3;
                v66 = 4;
                goto LABEL_125;
              }
              if (v63 == 9) {
                v64 = LOBYTE(v88);
                v65 = 2;
                v66 = 5;
                goto LABEL_125;
              }
              v12 = a8;
              v11 = a9;
            }
          LABEL_144:
            nn_656400((float*)(v87 + v43), v45, v49);
            goto LABEL_83;
          }
          memcpy_plt(v87 + v43, v48, v80);
        }
        else {
          memset_plt_alt1((void*)(v87 + v43), nullptr, v40);
        }
      LABEL_83:
        v16 = v46;
        v15 = v45;
        v44 += v40;
        v43 = v44;
      } while (v32 > v44);
    }
    ++v39;
  } while (v39 != v77);
  return 1;
}

__int64 (*nn_650c00(__int64 a1, _BYTE* a2))()
{
  return SdkData_ea7c30(a1, a2, (const char*)SdkData_ea7c30);
}

__int64 nn_650c90(__int64 a1, __int64 a2) { return SdkData_ea7c20(a1, a2); }

__int64 nn_654ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _OWORD* v14;
  char v15;
  int v17;
  bool v18;
  unsigned int v19;
  char v20;
  __int64 v21;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned __int64 v29;
  struct {
    _QWORD v30[2];
    __int64 v31;
    __int64 v32;
    __int128 v33;
    __int64 v34;
  } v30_;

  nn_os_LockMutex_plt_alt1(SdkData_e89c10);
  if ((SdkRoutine_65cfa0() & 1) != 0 && *(_QWORD*)(a2 + 16) != 0 &&
      *(int*)(a2 + 8) >= 1) {
    v10 = 0;
    v11 = 0;
    do {
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 7568) +
                                                    16LL))(
          *(_QWORD*)(a1 + 7568), *(_QWORD*)(*(_QWORD*)(a2 + 16) + v10),
          *(_QWORD*)(*(_QWORD*)(a2 + 16) + v10 + 8),
          *(unsigned int*)(*(_QWORD*)(a2 + 16) + v10 + 16));
      ++v11;
      v10 += 24;
    } while (v11 < *(int*)(a2 + 8));
  }
  v12 = 0x2000;
  v30_.v34 = 0;
  v30_.v30[0] = 0x41200000000LL;
  v30_.v31 = 0;
  v30_.v33 = (__typeof__(v30_.v33)){0};
  v30_.v30[1] = a1;
  v30_.v32 = 0x2000;
  if (a3 != 0) {
    (*(void (**)(_QWORD, _QWORD*))(a3 + 8))(*(_QWORD*)a3, v30_.v30);
    v12 = v30_.v32;
  }
  v13 = SdkRoutine_6add10(v12, 4096);
  *(_QWORD*)(a1 + 7224) = v13;
  if (v13 == 0) {
    goto LABEL_27;
  }
  v30_.v31 = v13;
  v14 = (_OWORD*)(*(__int64 (**)(__int64))SdkData_e89bd8)(256);
  *(_QWORD*)(a1 + 7232) = v14;
  if (v14 == nullptr) {
    goto LABEL_27;
  }
  v15 = SdkRoutine_65d0a0(v14, (__int64)v30_.v30);
  *(_DWORD*)(*(_QWORD*)(a1 + 7232) + 16LL) |= 0x10000000u;
  if (v15 == 0) {
    goto LABEL_27;
  }
  memset_plt_alt1(*(void**)(*(_QWORD*)(a1 + 7232) + 48LL), nullptr, 4096);
  SdkRoutine_690f80(a1, a4);
  if ((SdkRoutine_693340(a1) & 1) == 0) {
    goto LABEL_27;
  }
  *(_QWORD*)a1 = 0;
  SdkRoutine_6684e0((_QWORD*)(a1 + 7592), a1);
  v17 = *(_DWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 7668) = 1;
  if ((v17 & 0x600) != 0) {
    v18 = (v17 & 0x400) != 0;
    v19 = v17 & 0x200;
    *(_QWORD*)(a1 + 7624) = a5;
    *(_DWORD*)(a1 + 7632) = 0;
    v20 = v19 == 0 || v18;
    if ((nvidia_649850(a1, v20, v19 >> 9) & 1) == 0) {
      goto LABEL_27;
    }
    v17 = *(_DWORD*)(a1 + 8);
  }
  if ((v17 & 0x200) != 0) {
    if ((nn_66fa80(a1) & 1) == 0) {
      goto LABEL_27;
    }
    v17 = *(_DWORD*)(a1 + 8);
  }
  if ((v17 & 0x400) == 0) {
    goto LABEL_25;
  }
  *(_DWORD*)(a1 + 7640) = *(_DWORD*)(a1 + 7632);
  if (((unsigned __int8)nn_658390(a1) & 1) == 0) {
  LABEL_27:
    v27 = 0;
    goto LABEL_28;
  }
  *(_BYTE*)(a1 + 7713) = 1;
  v21 = nn_6ade30(11538432, 4096);
  if (v21 == 0) {
    v27 = 0;
    *(_QWORD*)(a1 + 7720) = 0;
    goto LABEL_28;
  }
  v24 = v21;
  nn_658950_alt1(v21, a1);
  v25 = *(_DWORD*)(a1 + 7632);
  *(_QWORD*)(a1 + 7720) = v24;
  *(_DWORD*)(a1 + 7644) = v25;
LABEL_25:
  v26 = *(_DWORD*)(a2 + 4);
  if ((v26 & 0x20000) != 0 && (v26 & 0xC0000) != 0x40000) {
    goto LABEL_27;
  }
  SdkRoutine_64fff0(a1);
  v29 = atomic_load((unsigned __int64*)&SdkData_10420c0);
  if (v29 == 0) {
    memcpy_plt(SdkData_e89c30, SdkData_e89c38, 5880);
  }
  v27 = 1;
  *(_DWORD*)(a1 + 7636) = *(_DWORD*)(a1 + 7632);
LABEL_28:
  nn_os_UnlockMutex_plt_alt1(SdkData_e89c10);
  return v27;
}

__int64 nn_6554e0(_BYTE* a1, __int64 a2, const char* a3)
{
  int v4;
  signed int v5;
  unsigned int v6;
  int v7;

  if (*a1 == 110 && a1[1] == 118 && a1[2] == 110) {
    v4 = 734;
    v5 = 0;
    while (1) {
      while (1) {
        v6 = (v5 + v4) >> 1;
        v7 = strcmp_plt((void*)(a1 + 3), &SdkData_c77db2[SdkData_c7d240[v6]],
                        a3);
        if (v7 < 1) {
          break;
        }
        v5 = v6 + 1;
        if (v4 < (int)(v6 + 1)) {
          return (unsigned int)-1;
        }
      }
      if ((v7 & 0x80000000) == 0) {
        break;
      }
      v4 = v6 - 1;
      if ((int)(v6 - 1) < v5) {
        return (unsigned int)-1;
      }
    }
  }
  else {
    return (unsigned int)-1;
  }
  return v6;
}

__int64 nn_6559e0(__int64 (*a1)(), __int64 a2, const char* a3)
{
  int v3;
  int v5;
  __int64 v6;
  __int64 result;

  v3 = 734;
  v5 = 0;
  while (1) {
    v6 = (unsigned int)((v3 + v5) >> 1);
    result = strcmp_plt((void*)"TexturePoolRegisterTexture",
                        &SdkData_c77db2[SdkData_c7d240[(unsigned int)v6]], a3);
    if ((int)result < 1) {
      break;
    }
    v5 = v6 + 1;
  LABEL_3:
    if (v3 < v5) {
      return result;
    }
  }
  if ((result & 0x80000000) != 0) {
    v3 = v6 - 1;
    goto LABEL_3;
  }
  if ((v6 & 0x80000000) == 0) {
    SdkData_ea6528[v6] = a1;
  }
  return result;
}

__int64 nn_655c00(void* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  memset_plt(a1, nullptr, 5880, a4);
  if (atomic_fetch_add((atomic_ullong* volatile)&SdkData_10420c8, 1u) == 0) {
    SdkRoutine_69efe0();
    if (SdkRoutine_69f0a0() == nullptr) {
      SdkRoutine_69f0b0(SdkRoutine_6566e0);
    }
    SdkRoutine_64fff0(0);
    memcpy_plt(SdkData_e89c30, SdkData_e89c38, 5880);
  }
  return 1;
}

__int64 nn_655f40()
{
  atomic_fetch_add((atomic_ullong* volatile)&SdkData_10420c8,
                   0xFFFFFFFFFFFFFFFFLL);
  return 1;
}

__int64 (*nn_655f60(__int64 a1, __int64 a2))()
{
  bool v4;
  __int64 (*result)();
  __int64 v6;
  __int64* v7;
  unsigned __int64 v10;
  _BOOL4 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 (**v17)();

  v4 = SdkData_10420ac == 0 && *SdkData_e89c40 == 0;
  if (v4 && (SdkData_10420b0 & 1) == 0) {
    result = SdkRoutine_6555a0((const char*)a2);
    if (result != nullptr) {
      return result;
    }
    if ((SdkRoutine_65b8f0() & 1) == 0) {
      return nullptr;
    }
    SdkData_10420b0 = 1;
  }
  v6 = atomic_load((unsigned __int64*)&SdkData_10420c8);
  v7 = SdkData_e89c18;
  if (v6 > 0 || a1 != 0 || *SdkData_e89c18 == 0) {
    SdkRoutine_64fff0(a1);
    v10 = atomic_load((unsigned __int64*)&SdkData_10420c0);
    if (v10 != 0) {
      if (a1 != 0) {
      LABEL_20:
        v12 = *v7 == 0 || *v7 == (_QWORD)SdkData_e89c20;
        goto LABEL_28;
      }
    }
    else {
      memcpy_plt_alt1((__int64)SdkData_e89c30, (__int64)SdkData_e89c38,
                      0x16F8u);
      if (a1 != 0) {
        goto LABEL_20;
      }
    }
  }
  v12 = false;
LABEL_28:
  *(_DWORD*)SdkData_e88fd8[0] = v12;
  if (*(_BYTE*)a2 != 110 || *(_BYTE*)(a2 + 1) != 118 ||
      *(_BYTE*)(a2 + 2) != 110) {
    return SdkRoutine_6555a0((const char*)a2);
  }
  v13 = 734;
  v14 = 0;
  while (1) {
    while (1) {
      v15 = (unsigned int)((v13 + v14) >> 1);
      v16 = strcmp_plt_alt1((const char*)(a2 + 3),
                            &SdkData_c77db2[SdkData_c7d240[(unsigned int)v15]]);
      if (v16 < 1) {
        break;
      }
      v14 = v15 + 1;
      if (v13 < (int)v15 + 1) {
        return SdkRoutine_6555a0((const char*)a2);
      }
    }
    if ((v16 & 0x80000000) == 0) {
      break;
    }
    v13 = v15 - 1;
    if ((int)v15 - 1 < v14) {
      return SdkRoutine_6555a0((const char*)a2);
    }
  }
  if ((v15 & 0x80000000) != 0) {
    return SdkRoutine_6555a0((const char*)a2);
  }
  if (v6 < 1) {
    v17 = (__int64 (**)(void))*v7;
    if (*v7 == 0) {
      v17 = SdkData_e89c20;
    }
    return v17[v15];
  }
  else if ((unsigned int)v15 > 0x2DE) {
    return nullptr;
  }
  else {
    return SdkData_e74e50[(unsigned int)v15];
  }
}

float* nn_656400(float* result, int a2, float a3)
{

#pragma clang fp contract(off)
  char v3;
  unsigned int v4;
  char v5;
  char v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  bool v16;
  unsigned int v17;
  unsigned int v18;
  int v19;

  if (a2 <= 7) {
    if (a2 != 0) {
      if (a2 == 1) {
        *result = a3;
      }
      return result;
    }
    v3 = 1;
    v4 = 10;
    goto LABEL_9;
  }
  if (a2 != 8) {
    if (a2 != 9) {
      return result;
    }
    v3 = 0;
    v4 = 2;
  LABEL_9:
    v5 = 5;
    goto LABEL_11;
  }
  v3 = 0;
  v4 = 3;
  v5 = 4;
LABEL_11:
  v6 = v4 + v5;
  v7 = LODWORD(a3) & 0x80000000;
  v8 = LODWORD(a3) & 0x7FFFFF;
  if ((LODWORD(a3) & 0x7F800000) == 0x7F800000) {
    v9 = ~(-1 << v5);
    if (a2 != 8 && v8 == 0) {
      goto LABEL_33;
    }
    v7 = 0;
    v10 = -1 << v4;
  }
  else {
    v11 = -1 << (v5 - 1);
    v12 = ((LODWORD(a3) & 0x7F800000u) >> 23) - 127;
    v13 = v12 + ~v11;
    if ((v13 < 0) ^ __OFADD__(v12, ~v11) | (v13 == 0)) {
      v14 = 0;
      v16 = v4 >= -v13;
      if (v4 >= -v13) {
        v8 |= 0x800000u;
      }
      else {
        LOBYTE(v13) = 0;
      }
      if (!v16) {
        a3 = 0x0.0p+0f;
      }
      v8 = (v8 + ~(-1 << (23 - v4 - v13)) + ((v8 >> (24 - v4 - v13)) & 1)) >>
           (23 - v4) >> (1 - v13);
    }
    else {
      v14 = v12 - v11;
      v15 = v8 + ~(-1 << (22 - v4)) + ((v8 >> (23 - v4)) & 1);
      if ((v15 & 0x800000) != 0) {
        v15 = 0;
      }
      else {
        v14 = v13;
      }
      v8 = v15 >> (23 - v4);
    }
    v17 = 1 << v5;
    v9 = (1 << v5) - 1;
    if (v14 < v9) {
      goto LABEL_28;
    }
    if (a2 != 8) {
      v8 = 0;
      goto LABEL_33;
    }
    if (v14 < v17) {
    LABEL_28:
      v9 = v14;
      goto LABEL_33;
    }
    v7 = 0;
    v10 = -1 << v4;
  }
  v8 = ~v10;
LABEL_33:
  v18 = v7 >> 31 << v6;
  v19 = (v9 << v4) | v8 | v18;
  if (a3 == 0x0.0p+0f) {
    LOWORD(v19) = v18;
  }
  if ((v3 & 1) != 0) {
    *(_WORD*)result = v19;
  }
  else {
    *(_BYTE*)result = v19;
  }
  return result;
}

__int64 nn_6569d0(__int64 result, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v5;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
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
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _DWORD* v29;
  __int64 v30;

  v2 = *(_DWORD*)(result + 24);
  v3 = *(_QWORD*)(a2 + 8);
  v5 = result;
  v7 = v2 == 1 || v2 == 4;
  if (v3 != 0) {
    v8 = *(_QWORD*)(a2 + 16) + *(_QWORD*)(v3 + 24);
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v9 = *(_QWORD*)v5;
    v2 = *(_DWORD*)(v5 + 24);
  }
  if (v2 <= 4) {
    *(_DWORD*)v9 = SdkData_c7ddd4[v2];
    v9 += 4;
  }
  v10 = *(_QWORD*)(v5 + 40);
  v11 = *(_QWORD*)(v5 + 48);
  *(_QWORD*)v5 = v9;
  if (v10 + 80 > v11) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v5);
  }
  if ((unsigned __int64)(v9 + 20) > *(_QWORD*)(v5 + 8)) {
    result = SdkRoutine_64b750(v5, v9,
                               4LL * (unsigned int)(*(_DWORD*)(v5 + 104) + 5));
    v9 = *(_QWORD*)v5;
  }
  if (v7) {
    v12 = 0x2000;
  }
  else {
    v12 = 0;
  }
  *(_DWORD*)v9 = v12 | 0x80000002;
  v13 = v9 + 4;
  v14 = *(_QWORD*)(v5 + 72);
  if (v9 + 4 != v14) {
    v15 = *(_QWORD*)(v5 + 96);
    v16 = *(_QWORD*)(v5 + 40);
    *(_QWORD*)v5 = v13;
    v17 = v15 + v14;
    *(_QWORD*)(v5 + 72) = v13;
    v18 = *(_QWORD*)(v5 + 56);
    if ((unsigned __int64)(v16 + 32) > *(_QWORD*)(v5 + 48)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v5);
      v16 = *(_QWORD*)(v5 + 40);
    }
    v19 = *(_QWORD*)(v5 + 88);
    if (v19 != 0) {
      *(_DWORD*)(v19 + 4) =
          (((unsigned __int64)*(unsigned int*)(v19 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v16 + 8) = 0;
      *(_QWORD*)(v16 + 16) = 0;
      *(_QWORD*)(v16 + 24) = 0;
      *(_QWORD*)v16 = 0x100000003LL;
      *(_QWORD*)(v5 + 88) = v16;
      v16 += 8;
    }
    *(_QWORD*)v16 = v17 - v18;
    *(_QWORD*)(v16 + 8) = v14;
    *(_DWORD*)(v16 + 16) = (unsigned __int64)(v9 + 4 - v14) >> 2;
    *(_BYTE*)(v16 + 20) = 7;
    *(_QWORD*)(v5 + 40) = v16 + 24;
  }
  *(_DWORD*)(v9 + 4) = v12 | 0xA0050EAA;
  *(_QWORD*)(v9 + 8) = v8;
  *(_DWORD*)(v9 + 16) = *(_DWORD*)(a2 + 32) + 256;
  v20 = v9 + 20;
  v21 = *(_QWORD*)(v5 + 72);
  v22 = *(_QWORD*)(v5 + 40);
  *(_QWORD*)v5 = v9 + 20;
  if (v9 + 20 != v21) {
    v23 = (unsigned __int64)(v9 + 20 - v21) >> 2;
    v24 = *(_QWORD*)(v5 + 48);
    v25 = *(_QWORD*)(v5 + 56);
    v26 = *(_QWORD*)(v5 + 96) + v21;
    *(_QWORD*)(v5 + 72) = v20;
    if (v22 + 32 > v24) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v5);
      v22 = *(_QWORD*)(v5 + 40);
    }
    v27 = *(_QWORD*)(v5 + 88);
    if (v27 != 0) {
      *(_DWORD*)(v27 + 4) =
          (((unsigned __int64)*(unsigned int*)(v27 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v22 + 8) = 0;
      *(_QWORD*)(v22 + 16) = 0;
      *(_QWORD*)(v22 + 24) = 0;
      *(_QWORD*)v22 = 0x100000003LL;
      *(_QWORD*)(v5 + 88) = v22;
      v22 += 8;
    }
    *(_QWORD*)v22 = v26 - v25;
    *(_QWORD*)(v22 + 8) = v21;
    *(_DWORD*)(v22 + 16) = v23;
    *(_BYTE*)(v22 + 20) = 1;
    v22 += 24;
    *(_QWORD*)(v5 + 40) = v22;
  }
  if ((unsigned __int64)(v22 + 32) > *(_QWORD*)(v5 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v5);
    v22 = *(_QWORD*)(v5 + 40);
  }
  v28 = *(_QWORD*)(v5 + 88);
  if (v28 != 0) {
    *(_DWORD*)(v28 + 4) =
        (((unsigned __int64)*(unsigned int*)(v28 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v22 + 8) = 0;
    *(_QWORD*)(v22 + 16) = 0;
    *(_QWORD*)(v22 + 24) = 0;
    *(_QWORD*)v22 = 0x100000003LL;
    *(_QWORD*)(v5 + 88) = v22;
    v22 += 8;
  }
  *(_QWORD*)v22 = v8;
  *(_QWORD*)(v22 + 8) = 0;
  *(_DWORD*)(v22 + 16) = 2;
  *(_BYTE*)(v22 + 20) = *(_BYTE*)(v22 + 20) & 0xF8 | 2;
  *(_QWORD*)(v5 + 40) = v22 + 24;
  v29 = *(_DWORD**)v5;
  if ((unsigned __int64)(*(_QWORD*)v5 + 4LL) > *(_QWORD*)(v5 + 8)) {
    result = SdkRoutine_64b750(v5, (__int64)v29,
                               4LL * (unsigned int)(*(_DWORD*)(v5 + 104) + 1));
    v29 = *(_DWORD**)v5;
  }
  v30 = *(unsigned int*)(v5 + 24);
  if ((unsigned int)v30 <= 4) {
    *v29++ = SdkData_c77cf4[v30];
  }
  *(_QWORD*)v5 = v29;
  return result;
}

__int64 nn_656d40(__int64 result, _QWORD* a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  int v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;

  v2 = *(_DWORD*)(result + 24);
  v3 = a2[1];
  v4 = result;
  v6 = v2 == 1 || v2 == 4;
  if (v3 != 0) {
    v7 = *(_QWORD*)(v3 + 24) + a2[2] + 256LL;
  }
  else {
    v7 = 256;
  }
  v8 = a2[4];
  v9 = (v8 + 8388603) / 0x7FFFFCuLL;
  v10 = *(_DWORD**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, *(_QWORD*)result,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v10 = *(_DWORD**)v4;
    v2 = *(_DWORD*)(v4 + 24);
  }
  if (v2 <= 4) {
    *v10++ = SdkData_c7dde8[v2];
  }
  *(_QWORD*)v4 = v10;
  if (*(_QWORD*)(v4 + 40) +
          8 * (unsigned __int64)((unsigned int)(24 * v9 + 8) >> 3) >
      *(_QWORD*)(v4 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
  }
  if ((unsigned __int64)(v10 + 1) > *(_QWORD*)(v4 + 8)) {
    result = SdkRoutine_64b750(v4, (__int64)v10,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v10 = *(_DWORD**)v4;
  }
  if (v6) {
    v11 = -2147475454;
  }
  else {
    v11 = -2147483646;
  }
  *v10 = v11;
  v12 = (char*)(v10 + 1);
  v13 = *(char**)(v4 + 72);
  v14 = *(_QWORD*)(v4 + 40);
  if (v12 != v13) {
    v15 = *(_QWORD*)(v4 + 96);
    *(_QWORD*)v4 = v12;
    *(_QWORD*)(v4 + 72) = v12;
    v16 = (unsigned __int64)(v12 - v13) >> 2;
    v17 = &v13[v15];
    v18 = *(_QWORD*)(v4 + 56);
    if ((unsigned __int64)(v14 + 32) > *(_QWORD*)(v4 + 48)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
      v14 = *(_QWORD*)(v4 + 40);
    }
    v19 = *(_QWORD*)(v4 + 88);
    if (v19 != 0) {
      *(_DWORD*)(v19 + 4) =
          (((unsigned __int64)*(unsigned int*)(v19 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v14 + 8) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_QWORD*)(v14 + 24) = 0;
      *(_QWORD*)v14 = 0x100000003LL;
      *(_QWORD*)(v4 + 88) = v14;
      v14 += 8;
    }
    *(_QWORD*)v14 = &v17[-v18];
    *(_QWORD*)(v14 + 8) = v13;
    *(_DWORD*)(v14 + 16) = v16;
    *(_BYTE*)(v14 + 20) = 7;
    v14 += 24;
    *(_QWORD*)(v4 + 40) = v14;
  }
  if ((unsigned __int64)(v8 + 8388603) >= 0xFFFFF8) {
    do {
      if ((unsigned __int64)(v14 + 32) > *(_QWORD*)(v4 + 48)) {
        result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
        v14 = *(_QWORD*)(v4 + 40);
      }
      v21 = *(_QWORD*)(v4 + 88);
      if (v21 != 0) {
        *(_DWORD*)(v21 + 4) =
            (((unsigned __int64)*(unsigned int*)(v21 + 4) << 32) +
             0x100000000LL) >>
            32;
      }
      else {
        *(_QWORD*)(v14 + 8) = 0;
        *(_QWORD*)(v14 + 16) = 0;
        *(_QWORD*)(v14 + 24) = 0;
        *(_QWORD*)v14 = 0x100000003LL;
        *(_QWORD*)(v4 + 88) = v14;
        v14 += 8;
      }
      v20 = *(_BYTE*)(v14 + 20);
      *(_QWORD*)v14 = v7;
      *(_QWORD*)(v14 + 8) = 0;
      *(_DWORD*)(v14 + 16) = 0x1FFFFF;
      v7 += 8388604;
      LODWORD(v8) = v8 - 8388604;
      --v9;
      *(_BYTE*)(v14 + 20) = v20 & 0xF8;
      v14 += 24;
      *(_QWORD*)(v4 + 40) = v14;
    } while (v9 > 1);
  }
  if ((unsigned __int64)(v14 + 32) > *(_QWORD*)(v4 + 48)) {
    result = ((__int64 (*)(__int64))SdkRoutine_64b940)(v4);
    v14 = *(_QWORD*)(v4 + 40);
  }
  v22 = *(_QWORD*)(v4 + 88);
  if (v22 != 0) {
    *(_DWORD*)(v22 + 4) =
        (((unsigned __int64)*(unsigned int*)(v22 + 4) << 32) + 0x100000000LL) >>
        32;
  }
  else {
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)v14 = 0x100000003LL;
    *(_QWORD*)(v4 + 88) = v14;
    v14 += 8;
  }
  *(_QWORD*)v14 = v7;
  *(_QWORD*)(v14 + 8) = 0;
  *(_DWORD*)(v14 + 16) = (unsigned int)v8 >> 2;
  *(_BYTE*)(v14 + 20) = *(_BYTE*)(v14 + 20) & 0xF8 | 2;
  *(_QWORD*)(v4 + 40) = v14 + 24;
  v23 = *(_DWORD**)v4;
  if ((unsigned __int64)(*(_QWORD*)v4 + 4LL) > *(_QWORD*)(v4 + 8)) {
    result = SdkRoutine_64b750(v4, (__int64)v23,
                               4LL * (unsigned int)(*(_DWORD*)(v4 + 104) + 1));
    v23 = *(_DWORD**)v4;
  }
  v24 = *(unsigned int*)(v4 + 24);
  if ((unsigned int)v24 <= 4) {
    *v23++ = SdkData_c77cf4[v24];
  }
  *(_QWORD*)v4 = v23;
  return result;
}

__int64 nn_657150(__int64 result)
{
  int* v1;
  __int64 v2;
  int v3;

  v1 = *(int**)(result + 8);
  if (v1 != nullptr) {
    if (*v1 == 0 && (v1[4] & 1) != 0) {
      v2 = 0;
    }
    else {
      v2 = *((_QWORD*)v1 + 6);
    }
    v1 = (int*)(v2 + *(int*)(result + 16));
  }
  *(_QWORD*)(result + 24) = v1;
  *(_DWORD*)(result + 32) = 12;
  v3 = v1[2];
  if (v3 == 0) {
    v3 = *v1;
  }
  *(_DWORD*)(result + 36) = v3;
  return result;
}

__int64 (***nn_658390(__int64 a1))(_QWORD, __int64)
{
  int v2;
  __int64 (***result)(_QWORD, __int64);
  __int64 v4;
  __int64 (*v5)(__int64*);

  v2 = SdkData_1042118;
  if (SdkData_1042118 != 0) {
    result = (__int64 (***)(_QWORD, __int64))SdkData_1042130;
  LABEL_3:
    SdkData_1042118 = v2 + 1;
    if (((**result)(result, a1) & 1) != 0) {
      return (__int64 (***)(_QWORD, __int64))(((char*)0x0LL) + 1);
    }
    if (--SdkData_1042118 == 0) {
      SdkData_1042130 = 0;
      (*(void (**)(__int64))((char*)((_UNKNOWN*)0xD0LL) +
                             (_QWORD)SdkData_e89bd8))(SdkData_1042120);
      SdkData_1042120 = 0;
      return nullptr;
    }
    return nullptr;
  }
  v4 = SdkData_1042120;
  if (SdkData_1042120 != 0 ||
      (v4 = SdkRoutine_65f8b0(), SdkData_1042120 = v4, v4 != 0)) {
    v5 = (__int64 (*)(__int64*))(*(__int64 (**)(__int64, const char*))(
        (char*)((_UNKNOWN*)0xD8LL) + (_QWORD)SdkData_e89bd8))(v4, "Handshake");
    SdkData_1042128 = (__int64)v5;
    if (v5 != nullptr) {
    LABEL_10:
      result = (__int64 (***)(_QWORD, __int64))v5(&SdkData_10420d0);
      SdkData_1042130 = (__int64)result;
      if (result == nullptr) {
        return result;
      }
      v2 = SdkData_1042118;
      goto LABEL_3;
    }
  }
  else {
    v5 = (__int64 (*)(__int64*))SdkData_1042128;
    if (SdkData_1042128 != 0) {
      goto LABEL_10;
    }
  }
  return nullptr;
}

__int64 nn_6584b0(__int64 result)
{
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_1042130 +
                                                8LL))(SdkData_1042130, result);
  }
  if (--SdkData_1042118 == 0) {
    SdkData_1042130 = 0;
    result = (*(__int64 (**)(__int64))(
        (char*)((_UNKNOWN*)0xD0LL) + (_QWORD)SdkData_e89bd8))(SdkData_1042120);
    SdkData_1042120 = 0;
  }
  return result;
}

__int64 nn_658520(__int64 a1, int* a2, unsigned __int64* a3, char a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  bool v29;
  _DWORD v31[26];

  v4 = *(_QWORD*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 40);
  v9 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v9 - v4 + 456;
  v11 = v5 >= v10;
  v12 = v5 - v10;
  if (!v11) {
    v9 = 0;
    if ((a4 & 1) == 0) {
      goto LABEL_3;
    }
  LABEL_9:
    v14 = a2[2];
    goto LABEL_10;
  }
  *(_QWORD*)(a1 + 32) = v9 + 456;
  *(_QWORD*)(a1 + 40) = v12;
  if ((a4 & 1) != 0) {
    goto LABEL_9;
  }
LABEL_3:
  v13 = a2[3];
  if (v13 <= 5) {
    switch (v13) {
    case 1:
      v14 = 46;
      goto LABEL_10;
    case 2:
      v14 = 41;
      goto LABEL_10;
    case 5:
      v14 = 17;
      goto LABEL_10;
    default:
      break;
    }
  LABEL_32:
    v14 = 0;
    goto LABEL_10;
  }
  if (v13 > 14) {
    if (v13 == 19) {
      v14 = 61;
      goto LABEL_10;
    }
    if (v13 == 15) {
      v14 = 37;
      goto LABEL_10;
    }
    goto LABEL_32;
  }
  if (v13 == 6) {
    v14 = 5;
    goto LABEL_10;
  }
  if (v13 != 14) {
    goto LABEL_32;
  }
  v14 = 63;
LABEL_10:
  v15 = *(int*)(a1 + 80);
  if ((int)v15 < (signed __int32)*(_DWORD*)(a1 + 64) &&
      (v16 = *(_QWORD*)(a1 + 72)) != 0) {
    v17 = v16 + 16 * v15;
    v18 = *(_DWORD*)v17;
    v19 = *(_QWORD*)(v17 + 8);
    *(_DWORD*)(a1 + 80) = v15 + 1;
  }
  else {
    v18 = 0;
    v19 = 0;
  }
  *(_DWORD*)(v9 + 44) = 0;
  *(_QWORD*)(v9 + 440) = 0;
  *(_QWORD*)(v9 + 448) = 0;
  *(_QWORD*)(v9 + 432) = a1;
  *(_BYTE*)(v9 + 8) = 1;
  *(_QWORD*)v9 = &SdkData_e76610;
  *(_OWORD*)(v9 + 9) = (__typeof__(*(_OWORD*)(v9 + 9))){0};
  *(_OWORD*)(v9 + 25) = (__typeof__(*(_OWORD*)(v9 + 25))){0};
  v20 = SdkRoutine_6695f0((__int64)v31);
  SdkRoutine_6695e0(v31, *(_QWORD*)(a1 + 24), v20);
  SdkRoutine_6696c0(v31, v14);
  SdkRoutine_669690(v31, *a2, a2[1]);
  SdkRoutine_6696b0(v31, (unsigned int)a2[4]);
  SdkRoutine_669630(v31, 520);
  v21 = SdkRoutine_669c60((__int64)v31);
  *(_QWORD*)(v9 + 448) = v21;
  v22 = 0;
  v23 = (v21 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v24 = *(_QWORD*)(a1 + 32);
  v25 = *(_QWORD*)(a1 + 40);
  v26 = (v24 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v27 = v26 - v24 + v23;
  v11 = v25 >= v27;
  v28 = v25 - v27;
  if (v11) {
    v22 = (v24 + 4095) & 0xFFFFFFFFFFFFF000LL;
    *(_QWORD*)(a1 + 32) = v26 + v23;
    *(_QWORD*)(a1 + 40) = v28;
  }
  v29 = SdkRoutine_65a950(v9 + 48, *(_QWORD*)(a1 + 24), a2[6], v23, v22, v18,
                          v19);
  *(_BYTE*)(v9 + 8) = v29;
  if (v29) {
    SdkRoutine_669700(v31, v9 + 48, 0);
    if ((unsigned __int8)nn_66aaa0(v9 + 304, (__int64)v31) != 0) {
      if ((*(_BYTE*)(v9 + 8) & 1) != 0) {
        ++*(_DWORD*)(a1 + 56);
        *a3 = v9;
        return 1;
      }
    }
    else {
      SdkRoutine_65d380(v9 + 48);
      *(_BYTE*)(v9 + 8) = 0;
    }
  }
  (**(void (***)(unsigned __int64))v9)(v9);
  return 0;
}

int64x2_t nn_658950(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4;
  int64x2_t result;

  v4 = a1 + 11534336;
  *(_DWORD*)(a1 + 11534400) = 0;
  *(_QWORD*)(a1 + 11534408) = 0;
  *(_DWORD*)(a1 + 11534416) = 0;
  *(_QWORD*)(a1 + 11534360) = a2;
  *(_QWORD*)(a1 + 11534368) = a1;
  memset_plt((void*)a1, nullptr, 11534336, a4);
  result = vdupq_n_s64(0xB00000u);
  *(_QWORD*)(v4 + 56) = 0;
  *(int64x2_t*)(v4 + 40) = result;
  return result;
}

__int64 nn_6589b0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7;

  if ((signed int)a2 > (signed __int32)*(_DWORD*)(a1 + 584)) {
    return 0;
  }
  if ((signed int)a3 > (signed __int32)*(_DWORD*)(a1 + 588)) {
    return 0;
  }
  *(_DWORD*)(a1 + 576) = a2;
  *(_DWORD*)(a1 + 580) = a3;
  *(_DWORD*)(a1 + 548) = a2;
  *(_DWORD*)(a1 + 552) = a3;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)SdkData_1042130 + 24LL))((void*)(SdkData_1042130),
                                         SdkData_1042130);
  nn_os_LockMutex_plt_alt1(&SdkData_10420d8);
  SdkData_1042100 = 0;
  SdkData_1042108 = 0;
  SdkData_10420f8 = a1;
  v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
           *(_QWORD*)SdkData_1042130 + 40LL))(
           SdkData_1042130, *(_QWORD*)(a1 + 160), *(unsigned int*)(a1 + 540),
           *(unsigned int*)(a1 + 544), a2, a3) &
       1;
  SdkData_1042100 = 0;
  SdkData_1042108 = 0;
  SdkData_10420f8 = 0;
  SdkData_1042110 = 0;
  nn_os_UnlockMutex_plt_alt1(&SdkData_10420d8);
  return v7;
}

__int64 nn_658b20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6;
  _DWORD* v7;
  void* v8;
  unsigned __int64 v9;
  __int64 v10;
  void* v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  int v20;
  __int64 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  void* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  int* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  struct {
    _BYTE v49[4];
    int v50;
    char gap32_[32];
    int v51;
    char gap68_[4];
    __int64 v52;
  } v49_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt((void*)a1, nullptr, 600, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_QWORD*)(a1 + 8) = *(_QWORD*)a2;
  if ((SdkRoutine_6a0890() & 1) != 0) {
    *(_DWORD*)(a1 + 168) = 73;
    v7 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534336LL);
    if (*v7 == 0) {
      *v7 = 8;
    }
    v8 = (void*)SdkRoutine_6a0860(),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt(v8, nullptr, 96 * *(_DWORD*)(a1 + 168), v9),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v10 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 176) = v8;
    *(_DWORD*)(a1 + 172) = 0;
    if (*(_QWORD*)(*(_QWORD*)(v10 + 7720) + 11534344LL) == 0) {
      v11 = (void*)SdkRoutine_6a0860(),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      memset_plt(
          v11, nullptr,
          96 * *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534336LL),
          v12),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 7720LL) + 11534344LL) = v11;
    }
  }
  v13 = *(_QWORD*)(a2 + 184);
  if (v13 != 0) {
    v14 = *(_DWORD*)v13;
    if (*(int*)v13 >= 1) {
      v15 = *(_QWORD*)(v13 + 8);
      if (v15 != 0) {
        *(_DWORD*)(a1 + 232) = v14;
        *(_QWORD*)(a1 + 240) = v15;
        *(_DWORD*)(a1 + 248) = 1;
        v16 = *(_QWORD*)(a1 + 8);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v16 + 7720) + 11534336LL;
          if (*(int*)(v17 + 64) < 1 || *(_QWORD*)(v17 + 72) == 0) {
            v19 = *(_QWORD*)(a2 + 184);
            v20 = *(_DWORD*)(v19 + 4);
            v21 = *(_QWORD*)(v19 + 16);
            *(_DWORD*)(v17 + 80) = 0;
            *(_DWORD*)(v17 + 64) = v20;
            *(_QWORD*)(v17 + 72) = v21;
          }
        }
      }
    }
  }
  *(_DWORD*)(a1 + 184) = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 7632LL);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 8);
  v22 = *(_OWORD*)(a2 + 56);
  v23 = *(_OWORD*)(a2 + 72);
  v24 = *(_OWORD*)(a2 + 88);
  v25 = *(_OWORD*)(a2 + 104);
  v26 = *(_OWORD*)(a2 + 120);
  v27 = *(_OWORD*)(a2 + 136);
  v28 = *(_OWORD*)(a2 + 152);
  v29 = *(_OWORD*)(a2 + 168);
  *(_DWORD*)(a1 + 152) = 63;
  *(_OWORD*)(a1 + 136) = v29;
  *(_OWORD*)(a1 + 120) = v28;
  *(_OWORD*)(a1 + 104) = v27;
  *(_OWORD*)(a1 + 88) = v26;
  *(_OWORD*)(a1 + 72) = v25;
  *(_OWORD*)(a1 + 56) = v24;
  *(_OWORD*)(a1 + 40) = v23;
  *(_OWORD*)(a1 + 24) = v22;
  v30 = *(void**)(a2 + 16);
  v31 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(a1 + 192) = *(_QWORD*)a2;
  *(_QWORD*)(a1 + 200) = v30;
  memset_plt(v30, nullptr, v31, v6),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_QWORD*)(a1 + 208) = v31;
  *(_QWORD*)(a1 + 216) = v31;
  *(_QWORD*)(a1 + 224) = 0;
  v32 = *(int*)(a2 + 52);
  v33 = v32 << 16;
  *(_DWORD*)(a1 + 512) = v32;
  v34 = *(_QWORD*)(a1 + 200);
  v35 = (v34 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v36 = v35 - v34 + v33;
  if (v31 >= v36) {
    *(_QWORD*)(a1 + 200) = v35 + v33;
    *(_QWORD*)(a1 + 208) = v31 - v36;
  }
  else {
    v35 = 0;
  }
  SdkRoutine_65cf50((__int64)v49_.v49),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_65cf40(v49_.v49, *(_QWORD*)a2),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_65cf70((__int64)v49_.v49, v35, v33),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_65d040(v49_.v49, 33),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v37 = *(_QWORD*)(a2 + 184);
  if (v37 != 0 && *(int*)v37 >= 1) {
    v38 = *(int**)(v37 + 8);
    if (v38 != nullptr) {
      v49_.v51 = *v38;
      v39 = *(_QWORD*)(v37 + 8);
      v49_.v50 |= 0x20000000u;
      v49_.v52 = *(_QWORD*)(v39 + 8);
    }
  }
  SdkRoutine_65d0a0((_OWORD*)(a1 + 256), (__int64)v49_.v49),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_DWORD*)(a1 + 272) |= 0x800000u;
  v40 = *(_QWORD*)(a1 + 176);
  if (v40 != 0) {
    v41 = *(int*)(a1 + 172);
    *(_DWORD*)(a1 + 172) = v41 + 1;
    *(_QWORD*)(v40 + 8 * v41) = a1 + 256;
  }
  *(_DWORD*)(a1 + 592) = *(_DWORD*)(a2 + 32);
  v42 = *(_DWORD*)(a2 + 44);
  *(_DWORD*)(a1 + 576) = v42;
  v43 = *(_DWORD*)(a2 + 48);
  *(_DWORD*)(a1 + 584) = v42;
  *(_DWORD*)(a1 + 580) = v43;
  *(_DWORD*)(a1 + 588) = v43;
  v44 = *(_DWORD*)(a2 + 36);
  *(_DWORD*)(a1 + 524) = v44;
  *(_DWORD*)(a1 + 532) = v44;
  *(_DWORD*)(a1 + 536) = *(_DWORD*)(a2 + 40);
  *(_DWORD*)(a1 + 548) = *(_DWORD*)(a2 + 44);
  *(_DWORD*)(a1 + 552) = *(_DWORD*)(a2 + 48);
  *(_DWORD*)(a1 + 556) = (*(_DWORD*)(a2 + 32) & 0x10000000) != 0;
  v45 = *(_DWORD*)(a2 + 32) & 0x4E;
  *(_DWORD*)(a1 + 528) = v45;
  if ((*(_BYTE*)(a2 + 32) & 1) == 0) {
    *(_DWORD*)(a1 + 528) = v45 | 1;
  }
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64,
               __int64, __int64, __int64))(*(_QWORD*)SdkData_1042130 + 24LL))(
      SdkData_1042130, *(unsigned int*)(a2 + 44), *(unsigned int*)(a2 + 48),
      *(unsigned int*)(a2 + 36), a1 + 540, a1 + 544, a1 + 560, a1 + 564,
      a1 + 568, a1 + 572),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_LockMutex_plt_alt1(&SdkData_10420d8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkData_1042100 = 0;
  SdkData_1042108 = 0;
  SdkData_10420f8 = a1;
  v46 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_1042130 + 32LL))(
      SdkData_1042130, a1 + 528),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_QWORD*)(a1 + 160) = v46;
  if (v46 != 0) {
    *(_DWORD*)(a1 + 188) = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 7632LL);
    v47 = 1;
  }
  else {
    v47 = 0;
  }
  SdkData_10420f8 = 0;
  SdkData_1042100 = 0;
  SdkData_1042110 = 0;
  SdkData_1042108 = 0;
  nn_os_UnlockMutex_plt_alt1(&SdkData_10420d8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return v47;
}

unsigned __int64 nn_658fa0(int* a1, int8x16_t a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  unsigned int v5;
  int* v6;
  __int64 v7;
  unsigned __int64 v8;
  long double v9;
  char v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  int8x16_t v15;
  bool v16;
  int8x8_t v17;
  unsigned __int64 v18;
  int64x2_t v19;
  int8x16_t v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  long double v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  long double v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  _DWORD v44[26];

  v3 = (__int64)a1[13] << 16;
  v4 = a1[9];
  v5 = a1[10] & 0xFFFFFFFE;
  if (v4 == 1) {
    v6 = a1 + 10;
    if (v5 == 8) {
      v7 = v3 | 0x2000;
      goto LABEL_8;
    }
  }
  else {
    if (v5 == 8) {
      v6 = a1 + 10;
      v8 = ((2LL * a1[11] + 128) * (a1[12] + 64LL) + 219135) &
           0xFFFFFFFFFFFFF000LL;
      v7 = v8 + v3 + v8 + 0x4000;
      goto LABEL_10;
    }
    v6 = a1 + 10;
  }
  v9 = SdkRoutine_6695f0((__int64)v44);
  SdkRoutine_6695e0(v44, *(_QWORD*)a1, v9);
  SdkRoutine_669690(v44, a1[11], a1[12]);
  SdkRoutine_6696c0(v44, 17);
  v7 = ((SdkRoutine_669c60((__int64)v44) + 4095) & 0xFFFFFFFFFFFFF000LL) + v3 +
       12288;
  v4 = a1[9];
  if (v4 == 1) {
  LABEL_8:
    v10 = 1;
    v11 = v7 + 1011712;
    v4 = 1;
    v12 = a1[8];
    if ((v12 & 0x20000000) == 0) {
      goto LABEL_20;
    }
  LABEL_19:
    v22 = (a1[12] + 64LL) * (a1[11] + 64LL);
    v11 += ((v22 + 408255) & 0xFFFFFFFFFFFFF000LL) +
           ((v22 + 4095) & 0xFFFFFFFFFFFFF000LL) + 0x2000;
    goto LABEL_20;
  }
LABEL_10:
  v13 = *v6 & 0xFFFFFFFE;
  if (v13 == 8) {
    v14 = v7 + 1011712;
  }
  else {
    LANES128(v15).n128_u64[0] = 0xC0000000C00LL;
    LANES128(v15).n128_u64[1] = 0xC0000000C00LL;
    PSEUDO_LOW_LANE128(a2, n128_u32, *(_DWORD*)(*(_QWORD*)a1 + 8LL));
    v16 = (~LANES128(a2).n128_u32[0] & 0xC00) == 0;
    LANES64(v17).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_s32(vandq_s8(a2, v15), v15))).n64_u64[0];
    v18 = LANES64_OF(vdup_n_s32(LANES64_OF(vuzp1_s8(v17, v17)).n64_u8[0]))
              .n64_u64[0];
    LANES128(v19).n128_u64[0] = (unsigned int)v18;
    LANES128(v19).n128_u64[1] = HIDWORD(v18);
    v20 = vcltzq_s64(vshlq_n_s64(v19, 0x3Fu));
    v21 = vaddvq_s64(vaddq_s64(
              vaddq_s64(vbslq_s8(v20, COERCE_AS(int8x16_t, SdkData_bb25a0),
                                 COERCE_AS(int8x16_t, SdkData_bb3c50)),
                        vbslq_s8(v20, COERCE_AS(int8x16_t, SdkData_bb0fa0),
                                 COERCE_AS(int8x16_t, SdkData_bb47e0))),
              vaddq_s64(vbslq_s8(v20, COERCE_AS(int8x16_t, SdkData_bb3320),
                                 COERCE_AS(int8x16_t, SdkData_bb3600)),
                        vbslq_s8(v20, COERCE_AS(int8x16_t, SdkData_bb2e90),
                                 vdupq_n_s64(0x43000u))))) +
          v7;
    if (v16) {
      v14 = v21 + 0x8000;
    }
    else {
      v14 = v21 + 24576;
    }
  }
  v10 = 0;
  if (v13 == 8) {
    v11 = v14;
  }
  else {
    v11 = v14 + 0x2000;
  }
  v12 = a1[8];
  if ((v12 & 0x20000000) != 0) {
    goto LABEL_19;
  }
LABEL_20:
  if ((v10 & 1) != 0) {
    v23 = v11 + 159744;
    if ((v12 & 0x20000000) == 0) {
      goto LABEL_31;
    }
  LABEL_30:
    v23 += (((a1[12] + 64LL) * (a1[11] + 64LL) + 4095) & 0xFFFFFFFFFFFFF000LL) +
           4096;
    goto LABEL_31;
  }
  v24 = *v6 & 0xFFFFFFFE;
  if (v24 != 8 && (~*(_DWORD*)(*(_QWORD*)a1 + 8LL) & 0xC00) != 0) {
    v23 = v11 + 0x2000;
  }
  else {
    v23 = v11 + 159744;
  }
  if (v24 != 8) {
    v23 += 151552;
  }
  if ((v12 & 0x20000000) != 0) {
    goto LABEL_30;
  }
LABEL_31:
  if ((v10 & 1) != 0) {
    v25 = v23 + 909312;
    if ((v12 & 0x20000000) == 0) {
      goto LABEL_44;
    }
  LABEL_43:
    v25 += (((2LL * a1[11] + 128) * (a1[12] + 64LL) + 812415) &
            0xFFFFFFFFFFFFF000LL) +
           4096;
    goto LABEL_44;
  }
  if ((*v6 & 0xFFFFFFFE) == 8) {
    v25 = v23 + 901120 +
          (((a1[12] + 64LL) * (a1[11] + 64LL) + 4095) & 0xFFFFFFFFFFFFF000LL) +
          12288;
    if ((v12 & 0x20000000) != 0) {
      goto LABEL_43;
    }
  }
  else {
    v26 = 0x2000;
    if ((*(_DWORD*)(*(_QWORD*)a1 + 8LL) & 0xC00) == 0xC00) {
      v26 = 307200;
    }
    v27 = v23 + v26 + 901120;
    if ((*(_DWORD*)(*(_QWORD*)a1 + 8LL) & 0xC00) == 0xC00) {
      v25 = v27 + 593920;
    }
    else {
      v25 = v27;
    }
    if ((v12 & 0x20000000) != 0) {
      goto LABEL_43;
    }
  }
LABEL_44:
  v28 = *v6;
  if ((*v6 & 0xFFFFFFFE) != 8) {
    v29 = SdkRoutine_6695f0((__int64)v44);
    SdkRoutine_6695e0(v44, *(_QWORD*)a1, v29);
    SdkRoutine_669690(v44, a1[11], a1[12]);
    SdkRoutine_6696c0(v44, 41);
    v25 += ((SdkRoutine_669c60((__int64)v44) + 4095) & 0xFFFFFFFFFFFFF000LL) +
           4096;
    v4 = a1[9];
    v28 = a1[10];
  }
  v30 = (a1[12] + 64LL) * (a1[11] + 64LL);
  v31 = (v30 + 182317) & 0xFFFFFFFFFFFFF000LL;
  v32 = v25 + v31 + 4096;
  if (v4 != 1) {
    v35 = v28 & 0xFFFFFFFE;
    v36 = ((2 * v30 + 219135) & 0xFFFFFFFFFFFFF000LL) +
          ((2 * v30 + 219135) & 0xFFFFFFFFFFFFF000LL) + v32 + 0x2000;
    if (v35 != 8) {
      v36 = v25 + v31 + 4096;
    }
    v33 = v36 + ((8089599 - v30 + 8 * v30) & 0xFFFFFFFFFFFFF000LL);
    if (v35 != 8) {
      v38 = 20480;
      if ((~*(_DWORD*)(*(_QWORD*)a1 + 8LL) & 0xC00) == 0) {
        v38 = 28672;
      }
      v34 = v33 + v38;
      goto LABEL_56;
    }
  LABEL_52:
    v37 = v33 + v31 + 49152;
    return (v37 + 4095) & 0xFFFFFFFFFFFFF000LL;
  }
  v33 = v32 + ((8089599 - v30 + 8 * v30) & 0xFFFFFFFFFFFFF000LL);
  if ((v28 & 0xFFFFFFFE) == 8) {
    goto LABEL_52;
  }
  v34 = v33 + 20480;
LABEL_56:
  v39 = SdkRoutine_6695f0((__int64)v44);
  SdkRoutine_6695e0(v44, *(_QWORD*)a1, v39);
  SdkRoutine_669690(v44, a1[11], a1[12]);
  SdkRoutine_6696c0(v44, 17);
  v40 = SdkRoutine_669c60((__int64)v44);
  v41 = (a1[12] + 64LL) * (a1[11] + 64LL);
  v37 = ((v40 + 4095) & 0xFFFFFFFFFFFFF000LL) +
        ((v41 + 182317) & 0xFFFFFFFFFFFFF000LL) + v34 + 0x8000;
  v42 = ((7 * v41 + 8344575) & 0xFFFFFFFFFFFFF000LL) + v37 + 4096;
  if ((a1[10] & 0xFFFFFFFE) != 8) {
    v37 = v42;
  }
  return (v37 + 4095) & 0xFFFFFFFFFFFFF000LL;
}

_QWORD* nn_6594c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  _DWORD* v9;
  __int128 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _DWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  _DWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  _DWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  _DWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int128 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  _DWORD* v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  _DWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  unsigned int v62;
  __int128 v63;
  __int128 v64;
  int v65;
  __int128 v66;
  __int128 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int64 v73;
  unsigned __int64 v74;
  _DWORD* v75;
  int v76;
  _QWORD* result;
  __int128 v78;
  __int64 v79;
  _QWORD v80[3];
  __int128 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  _DWORD v85[26];
  __int64 (**v86)();
  char v87;
  __int128 v88;
  __int128 v89;
  int v90;
  __int64 v91;
  __int64* v92;
  __int64 (**v93)();
  char v94;
  __int128 v95;
  __int128 v96;
  int v97;
  __int64 v98;
  __int64* v99;
  __int64 (**v100)();
  char v101;
  __int128 v102;
  __int128 v103;
  int v104;
  __int64 v105;
  __int64* v106;
  __int64 (**v107)();
  char v108;
  __int128 v109;
  __int128 v110;
  int v111;
  __int64 v112;
  __int64* v113;
  __int64 (**v114)();
  char v115;
  __int128 v116;
  __int128 v117;
  int v118;
  __int64 v119;
  __int64* v120;
  __int64 (**v121)();
  char v122;
  __int128 v123;
  __int128 v124;
  int v125;
  __int64 v126;
  __int64* v127;

  nvidia_64ac60((_QWORD*)a1, v80, 0x120u);
  *(_BYTE*)v80[0] = 95;
  v6 = v80[0];
  *(_QWORD*)(v80[0] + 8LL) = a2;
  if (a3 != 0) {
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v6 + 16, *(_QWORD*)a3,
                      *(__int128**)(a3 + 8));
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v80[0] + 48LL, *(_QWORD*)(a3 + 16),
                      *(__int128**)(a3 + 24));
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v80[0] + 80LL, *(_QWORD*)(a3 + 32),
                      *(__int128**)(a3 + 40));
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v80[0] + 144LL, *(_QWORD*)(a3 + 64),
                      *(__int128**)(a3 + 72));
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v80[0] + 112LL, *(_QWORD*)(a3 + 48),
                      *(__int128**)(a3 + 56));
    v7 = (_DWORD*)v80[0];
    v8 = v80[0] + 176LL;
    *(_DWORD*)(v80[0] + 208LL) = *(_DWORD*)(a3 + 80);
    v7[53] = *(_DWORD*)(a3 + 84);
    v7[54] = *(_DWORD*)(a3 + 88);
    v7[55] = *(_DWORD*)(a3 + 92);
    v7[56] = *(_DWORD*)(a3 + 96);
    SdkRoutine_65b770(*(_QWORD*)(a1 + 112), v8, *(_QWORD*)(a3 + 104),
                      *(__int128**)(a3 + 112));
    v9 = (_DWORD*)v80[0];
    *(_BYTE*)(v80[0] + 228LL) = *(_BYTE*)(a3 + 120);
    v9[58] = *(_DWORD*)(a3 + 124);
    v9[59] = *(_DWORD*)(a3 + 128);
    v9[60] = *(_DWORD*)(a3 + 132);
    v9[61] = *(_DWORD*)(a3 + 136);
    v9[62] = *(_DWORD*)(a3 + 140);
    v9[63] = *(_DWORD*)(a3 + 144);
    v9[64] = *(_DWORD*)(a3 + 148);
    v9[65] = *(_DWORD*)(a3 + 152);
    v9[66] = *(_DWORD*)(a3 + 156);
    v9[67] = *(_DWORD*)(a3 + 160);
    v9[68] = *(_DWORD*)(a3 + 164);
    v9[69] = *(_DWORD*)(a3 + 168);
    v9[70] = *(_DWORD*)(a3 + 172);
  }
  v10 = (__typeof__(v10)){0};
  v11 = *(_QWORD*)a3;
  v12 = *(__int64**)(a3 + 8);
  v125 = 0;
  v122 = 1;
  v123 = (__typeof__(v123)){0};
  v124 = (__typeof__(v124)){0};
  v126 = v11;
  v127 = v12;
  v121 = SdkData_e76700;
  if (v11 != 0) {
    v13 = *(int*)(a2 + 24);
    v14 = *(_DWORD**)(a2 + 8);
    v125 = *(_DWORD*)(a2 + 24);
    SdkRoutine_699440(v14, v11, v12, (__int64)v80, 0, 0);
    v15 = *(_QWORD**)(a2 + 16);
    v16 = *(_QWORD*)(*v15 + 24LL);
    v17 = v15[1] + v16;
    if (v16 == 0) {
      v17 = 0;
    }
    nn_688a40((int**)a1, v17 + 32 * v13, (__int64)v80, 32, 0);
    v10 = (__typeof__(v10)){0};
  }
  v18 = *(_QWORD*)(a3 + 48);
  v19 = *(__int64**)(a3 + 56);
  v115 = 1;
  v116 = v10;
  v117 = v10;
  v118 = 0;
  v114 = SdkData_e76700;
  v119 = v18;
  v120 = v19;
  if (v18 != 0) {
    v20 = *(int*)(a2 + 28);
    v21 = *(_DWORD**)(a2 + 8);
    v118 = *(_DWORD*)(a2 + 28);
    SdkRoutine_699440(v21, v18, v19, (__int64)v80, 0, 0);
    v22 = *(_QWORD**)(a2 + 16);
    v23 = *(_QWORD*)(*v22 + 24LL);
    v24 = v22[1] + v23;
    if (v23 == 0) {
      v24 = 0;
    }
    nn_688a40((int**)a1, v24 + 32 * v20, (__int64)v80, 32, 0);
  }
  v25 = (__typeof__(v25)){0};
  v26 = *(_QWORD*)(a3 + 32);
  v27 = *(__int64**)(a3 + 40);
  v111 = 0;
  v107 = SdkData_e76700;
  v108 = 1;
  v109 = (__typeof__(v109)){0};
  v110 = (__typeof__(v110)){0};
  v112 = v26;
  v113 = v27;
  if (v26 != 0) {
    v28 = *(int*)(a2 + 32);
    v29 = *(_DWORD**)(a2 + 8);
    v111 = *(_DWORD*)(a2 + 32);
    SdkRoutine_699440(v29, v26, v27, (__int64)v80, 0, 0);
    v30 = *(_QWORD**)(a2 + 16);
    v31 = *(_QWORD*)(*v30 + 24LL);
    v32 = v30[1] + v31;
    if (v31 == 0) {
      v32 = 0;
    }
    nn_688a40((int**)a1, v32 + 32 * v28, (__int64)v80, 32, 0);
    v25 = (__typeof__(v25)){0};
  }
  v33 = *(_QWORD*)(a3 + 64);
  v34 = *(__int64**)(a3 + 72);
  v101 = 1;
  v102 = v25;
  v103 = v25;
  v104 = 0;
  v100 = SdkData_e76700;
  v105 = v33;
  v106 = v34;
  if (v33 != 0) {
    v35 = *(int*)(a2 + 36);
    v36 = *(_DWORD**)(a2 + 8);
    v104 = *(_DWORD*)(a2 + 36);
    SdkRoutine_699440(v36, v33, v34, (__int64)v80, 0, 0);
    v37 = *(_QWORD**)(a2 + 16);
    v38 = *(_QWORD*)(*v37 + 24LL);
    v39 = v37[1] + v38;
    if (v38 == 0) {
      v39 = 0;
    }
    nn_688a40((int**)a1, v39 + 32 * v35, (__int64)v80, 32, 0);
  }
  v40 = (__typeof__(v40)){0};
  v41 = *(_QWORD*)(a3 + 16);
  v42 = *(__int64**)(a3 + 24);
  v97 = 0;
  v93 = SdkData_e76700;
  v94 = 1;
  v95 = (__typeof__(v95)){0};
  v96 = (__typeof__(v96)){0};
  v98 = v41;
  v99 = v42;
  if (v41 != 0) {
    v43 = *(int*)(a2 + 40);
    v44 = *(_DWORD**)(a2 + 8);
    v97 = *(_DWORD*)(a2 + 40);
    SdkRoutine_699440(v44, v41, v42, (__int64)v80, 0, 0);
    v45 = *(_QWORD**)(a2 + 16);
    v46 = *(_QWORD*)(*v45 + 24LL);
    v47 = v45[1] + v46;
    if (v46 == 0) {
      v47 = 0;
    }
    nn_688a40((int**)a1, v47 + 32 * v43, (__int64)v80, 32, 0);
    v40 = (__typeof__(v40)){0};
  }
  v48 = *(_QWORD*)(a3 + 104);
  v49 = *(__int64**)(a3 + 112);
  v87 = 1;
  v88 = v40;
  v89 = v40;
  v90 = 0;
  v86 = SdkData_e76700;
  v91 = v48;
  v92 = v49;
  if (v48 != 0) {
    v50 = *(int*)(a2 + 44);
    v51 = *(_DWORD**)(a2 + 8);
    v90 = *(_DWORD*)(a2 + 44);
    SdkRoutine_699440(v51, v48, v49, (__int64)v80, 0, 0);
    v52 = *(_QWORD**)(a2 + 16);
    v53 = *(_QWORD*)(*v52 + 24LL);
    v54 = v52[1] + v53;
    if (v53 == 0) {
      v54 = 0;
    }
    nn_688a40((int**)a1, v54 + 32 * v50, (__int64)v80, 32, 0);
  }
  v80[0] = &v121;
  v80[1] = &v114;
  v80[2] = &v107;
  v55 = *(_QWORD*)(a3 + 64);
  memset(v85, 0, sizeof(v85));
  v84 = (__typeof__(v84)){0};
  v83 = (__typeof__(v83)){0};
  v82 = (__typeof__(v82)){0};
  v81 = (__typeof__(v81)){0};
  if (v55 != 0) {
    *(_QWORD*)&v81 = &v100;
  }
  v56 = *(_QWORD*)(a3 + 80);
  v57 = *(_QWORD*)(a3 + 88);
  *((_QWORD*)&v81 + 1) = &v93;
  v58 = *(_QWORD*)(a2 + 160);
  *((_QWORD*)&v82 + 1) = a1;
  *(_QWORD*)&v83 = v58;
  LODWORD(v58) = *(unsigned __int8*)(a3 + 120);
  *((_QWORD*)&v83 + 1) = v56;
  *(_QWORD*)((char*)&v84 + 4) = v57;
  LODWORD(v84) = v58;
  v59 = *(_DWORD*)(a2 + 592);
  if ((v59 & 0x41) == 0) {
    v60 = *(_QWORD*)(a3 + 104);
    HIDWORD(v84) = *(_DWORD*)(a3 + 96);
    if (v60 != 0) {
      *(_QWORD*)&v82 = &v86;
    }
  }
  v62 = *(_DWORD*)(a3 + 128);
  v61 = *(_DWORD*)(a3 + 132);
  if (*(_QWORD*)(a3 + 128) == 0) {
    v61 = *(unsigned __int16*)(*(_QWORD*)a3 + 36LL);
    v62 = *(_DWORD*)(*(_QWORD*)a3 + 32LL);
  }
  v63 = *(_OWORD*)(a3 + 136);
  *(_QWORD*)v85 = __PAIR64__(v61, v62);
  *(_OWORD*)&v85[2] = v63;
  *(_OWORD*)&v85[6] = *(_OWORD*)(a3 + 152);
  if ((v59 & 0x10000000) != 0) {
    *(_QWORD*)&v85[10] = *(_QWORD*)(a3 + 168);
  }
  v64 = *(_OWORD*)(a3 + 176);
  v65 = **(_DWORD**)(a2 + 8);
  v79 = 0;
  *(_OWORD*)&v85[13] = v64;
  v66 = *(_OWORD*)(a2 + 528);
  v67 = *(_OWORD*)(a2 + 544);
  v85[12] = v65 == 0;
  v68 = *(_DWORD*)(a1 + 24);
  *(_OWORD*)&v85[17] = v66;
  *(_OWORD*)&v85[21] = v67;
  if (v68 != 2) {
    v69 = *(_DWORD*)(a2 + 548);
    v70 = *(_DWORD*)(a2 + 552);
    v71 = *(_DWORD*)(a2 + 532);
    v72 = *(_DWORD*)(a2 + 536);
    SdkRoutine_69aee0((int*)&v78, 18, 0, 16, 0, 0);
    v73 = *(_QWORD*)a1;
    v74 = *(_QWORD*)(a1 + 8);
    WORD2(v78) = v62;
    WORD3(v78) = v61;
    WORD4(v78) = v69;
    WORD5(v78) = v70;
    BYTE12(v78) = v71;
    BYTE13(v78) = v72;
    if (v73 + 20 > v74) {
      SdkRoutine_64b750(a1, v73,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 5));
      v73 = *(_QWORD*)a1;
    }
    *(_DWORD*)v73 = -1610338676;
    *(_OWORD*)(v73 + 4) = v78;
    *(_QWORD*)a1 = v73 + 20;
  }
  nn_os_LockMutex_plt_alt1(&SdkData_10420d8);
  SdkData_10420f8 = a2;
  SdkData_1042100 = a3;
  SdkData_1042108 = (__int64)&v79;
  SdkData_1042110 = 1;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)SdkData_1042130 + 56LL))(
      SdkData_1042130, v80);
  SdkData_10420f8 = 0;
  SdkData_1042100 = 0;
  SdkData_1042110 = 0;
  SdkData_1042108 = 0;
  nn_os_UnlockMutex_plt_alt1(&SdkData_10420d8);
  if (*(_DWORD*)(a1 + 24) != 2) {
    SdkRoutine_69aee0((int*)&v78, 19, 2, 4, 0, 0);
    v75 = *(_DWORD**)a1;
    v76 = v78;
    if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
      SdkRoutine_64b750(a1, (__int64)v75,
                        4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
      v75 = *(_DWORD**)a1;
    }
    *v75 = (v76 << 16) | 0x80002E8C;
    *(_QWORD*)a1 = v75 + 1;
  }
  result = nvidia_64ac60((_QWORD*)a1, &v78, 8u);
  *(_BYTE*)v78 = 96;
  return result;
}

long double nn_659d40(__int64 a1)
{

#pragma clang fp contract(off)
  long double result;

  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_DWORD*)(a1 + 96) = 1065353216;
  *(_QWORD*)(a1 + 176) = -1;
  *(_QWORD*)(a1 + 184) = -1;
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_QWORD*)(a1 + 88) = 0x3F8000003F800000LL;
  *(_OWORD*)&result = 0x3F8000003F800000uLL;
  return result;
}

bool nn_65a410(__int64 a1, int* a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  unsigned int v6;
  long double v7;
  char v8;
  int v10;
  _DWORD v11[26];

  if ((a4 & 1) != 0) {
    v6 = a2[2];
    goto LABEL_3;
  }
  v10 = a2[3];
  if (v10 <= 5) {
    if (v10 == 1) {
      v6 = 46;
      goto LABEL_3;
    }
    if (v10 != 2) {
      if (v10 == 5) {
        v6 = 17;
        goto LABEL_3;
      }
      goto LABEL_19;
    }
    v6 = 41;
  }
  else if (v10 > 14) {
    if (v10 != 19) {
      if (v10 == 15) {
        v6 = 37;
        goto LABEL_3;
      }
      goto LABEL_19;
    }
    v6 = 61;
  }
  else {
    if (v10 != 6) {
      if (v10 == 14) {
        v6 = 63;
        goto LABEL_3;
      }
    LABEL_19:
      v6 = 0;
      goto LABEL_3;
    }
    v6 = 5;
  }
LABEL_3:
  v7 = SdkRoutine_6695f0((__int64)v11);
  SdkRoutine_6695e0(v11, *(_QWORD*)(*(_QWORD*)(a3 + 432) + 24LL), v7);
  SdkRoutine_6696c0(v11, v6);
  SdkRoutine_669690(v11, *a2, a2[1]);
  SdkRoutine_6696b0(v11, (unsigned int)a2[4]);
  SdkRoutine_669630(v11, 33288);
  *(_QWORD*)(a3 + 448) =
      (SdkRoutine_669c60((__int64)v11) + 4095) & 0xFFFFFFFFFFFFF000LL;
  SdkRoutine_669700(v11, a3 + 48, 0);
  v8 = nn_66aaa0(a3 + 304, (__int64)v11);
  if (v8 == 0) {
    SdkRoutine_65d380(a3 + 48);
    *(_BYTE*)(a3 + 8) = 0;
  }
  return v8 != 0;
}

__int64 nn_65ba70(__int64 result, int a2, int a3)
{
  _DWORD* v3;

  v3 = *(_DWORD**)(result + 8);
  if (a2 == 1) {
    a3 += *v3;
  }
  *v3 = a3;
  __builtin_arm_dmb(0xEu);
  return result;
}

void* nn_65cc90(__int64 a1, __int64 a2)
{
  int v2;
  void* result;

  v2 = a2 * a1;
  result = (void*)NvOsAlloc_plt(a2 * a1);
  if (result != nullptr) {
    return (void*)memset_plt_alt1(result, nullptr, v2);
  }
  return result;
}

__int64 nn_65cd30() { return NvOsGetCurrentThreadId_plt(); }

__int64 nn_65cdb0(__int64 a1)
{
  int v2;

  v2 = 0;
  return (*(__int64 (**)(__int64, int*))((char*)((_UNKNOWN*)0x98LL) +
                                         (_QWORD)SdkData_e89bd8))(a1, &v2);
}

__int64 nn_65ce80(unsigned int a1) { return __clz(a1) ^ 0x1F; }

float nn_65ce90(float result)
{
  float v1;
  long double v2;

  if (result <= 0x1.0000000000000p+0f && result > 0x0.0p+0f) {
    if (result >= 0x1.9a5c380000000p-9f) {
      v2 = powf_plt(result, 0x1.aaa8ec0000000p-2f);
      v1 = (float)(*(float*)&v2 * 0x1.0e147a0000000p+0f) +
           -0x1.c28f5c0000000p-5f;
    }
    else {
      v1 = result * 0x1.9d70a40000000p+3f;
    }
    return (float)(v1 * 0x1.fe00000000000p+7f) + 0x1.8000000000000p+23f;
  }
  return result;
}

bool nn_65d850(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  _QWORD v12[2];
  _QWORD v13[4];

  v2 = *(unsigned int*)(a2 + 212);
  v3 = *(_QWORD*)(a1 + 64);
  v6 = 0x100000000LL / v2;
  *(_DWORD*)(a1 + 32) = v2;
  *(_DWORD*)(a1 + 36) = 0x100000000LL / v2;
  if (*(_QWORD*)(a1 + 40) != 0) {
    v7 = (*(__int64 (**)(__int64))SdkData_e89bd8)(32);
    if (v7 == 0) {
      goto LABEL_6;
    }
    v8 = (_QWORD*)(v7 + 16);
    *(_DWORD*)v7 = 0;
    *(_DWORD*)(v7 + 4) = v6;
    *(_QWORD*)(v7 + 8) = 0;
  }
  else {
    *(_DWORD*)(a1 + 80) = 0;
    *(_DWORD*)(a1 + 84) = v6;
    v7 = a1 + 80;
    *(_QWORD*)(a1 + 88) = 0;
    v8 = (_QWORD*)(a1 + 96);
  }
  *v8 = 0;
  v8[1] = 0;
  v9 = *(_QWORD*)(v3 + 24);
  *(_QWORD*)(v7 + 16) = v3;
  *(_QWORD*)(v7 + 24) = v9;
  *(_QWORD*)(v3 + 24) = v7;
  *(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) = v7;
  ++*(_QWORD*)(a1 + 40);
LABEL_6:
  *(_QWORD*)(a1 + 8) = a2;
  v12[0] = 0;
  v12[1] = 0;
  v10 = NvRmGpuAddressSpaceAllocationCreate_plt(
      *(_QWORD*)(a2 + 2536), (int)(0x100000000uLL / *(int*)(a2 + 212)),
      *(int*)(a2 + 212), v12, a1 + 16, v13);
  if (v10 == 0) {
    *(_QWORD*)(a1 + 24) = v13[0];
  }
  return v10 == 0;
}

_QWORD* nn_65e620(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  int v4;
  char v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  struct {
    _QWORD v12[2];
    char v13;
    bool v14;
    char gap50_[2];
    unsigned int v15;
    int v16;
  } v12_;
  int v17;
  int v18[10];
  _QWORD v19[6];
  struct {
    unsigned __int16 v20[6];
    unsigned int v21;
    char gap176_[16];
    int v22;
    unsigned int v23;
  } v20_;
  char v24[8];

  v3 = *(_QWORD*)(a1 + 40);
  v4 = *(_DWORD*)(a1 + 56);
  v12_.v12[0] = 0;
  v12_.v12[1] = v3;
  if (v4 <= 60) {
    if (v4 > 54) {
      if (v4 == 55) {
      LABEL_16:
        v8 = 2;
        goto LABEL_20;
      }
      if (v4 != 56) {
      LABEL_19:
        v8 = 0;
        goto LABEL_20;
      }
    }
    else if (v4 != 37) {
      if (v4 == 41) {
        v8 = 5;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    v8 = 1;
    goto LABEL_20;
  }
  if (v4 <= 112) {
    if (v4 == 61) {
      v8 = 4;
      goto LABEL_20;
    }
    if (v4 == 109) {
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if (v4 == 113) {
    v8 = 6;
  }
  else {
    v8 = 3;
    if (v4 != 154 && v4 != 156) {
      goto LABEL_19;
    }
  }
LABEL_20:
  v9 = *(_QWORD*)(a1 + 8);
  v12_.v13 = v8;
  v12_.v14 = (*(_DWORD*)(v9 + 8) & 0x10000) == 0;
  nn_66a170(v20_.v20, a1);
  nvidia_6474d0((__int64)v19, *(_DWORD*)(a1 + 32), *(_DWORD*)(a1 + 36),
                (unsigned __int8)v20_.v21, *(_DWORD*)(a1 + 60),
                LOBYTE(v20_.v20[0]), HIBYTE(v20_.v20[0]), v20_.v21 >> 27,
                v20_.v22, (unsigned __int16)v20_.v23, HIWORD(v20_.v23));
  v17 = 1;
  nvidia_647a50(v19, v18, &v17, v24, 0);
  v12_.v15 =
      ((v17 << 6) +
       (unsigned __int8)v20_.v21 *
           ((*(_DWORD*)(a1 + 40) + (unsigned int)LOBYTE(v20_.v20[0]) - 1) /
            LOBYTE(v20_.v20[0])) -
       1) /
      (v17 << 6) * v17;
  nn_66a170(v20_.v20, a1);
  v12_.v16 = (unsigned __int8)v24[1];
  result = X8CALL_X0(
      void*, nn_wsi_nv_CalculateTextureRequirement_plt((void*)(v19), v12_.v12));
  v11 = v19[2];
  *a2 = v19[1];
  *a3 = v11;
  return result;
}

__int64 nn_65ec90(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3;
  __int64 v4;
  struct {
    _QWORD v6[4];
    unsigned __int64 v7;
  } v6_;

  v3 = *(_OWORD*)(a3 + 16);
  v4 = *(_QWORD*)(a2 + 8);
  *(_OWORD*)v6_.v6 = *(_OWORD*)a3;
  *(_OWORD*)&v6_.v6[2] = v3;
  v6_.v7 = LANES64_OF(vrev64_s32(*(int32x2_t*)(a3 + 32))).n64_u64[0];
  return nn_wsi_nv_OnDisplayMetadataUpdate_plt(v4, v6_.v6);
}

__int64 nn_65ed70(__int64 a1, int a2)
{
  int v3;
  __int128 v4;
  __int128 v5;
  __int128 v7;
  __int128 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = SdkData_1042250++;
  if (v3 != 0) {
    v4 = SdkData_1042228;
    v5 = SdkData_1042238;
    *(_QWORD*)(a1 + 32) = SdkData_1042248;
    *(_OWORD*)a1 = v4;
    *(_OWORD*)(a1 + 16) = v5;
    return 1;
  }
  if ((SdkRoutine_65ee20(a1, a2) & 1) != 0) {
    v7 = *(_OWORD*)a1;
    v8 = *(_OWORD*)(a1 + 16);
    SdkData_1042248 = *(_QWORD*)(a1 + 32);
    SdkData_1042228 = v7;
    SdkData_1042238 = v8;
    return 1;
  }
  v10 = *(_QWORD*)(a1 + 32);
  if (v10 != 0) {
    NvRmGpuAddressSpaceAllocationClose_plt(v10);
  }
  v11 = *(_QWORD*)(a1 + 16);
  if (v11 != 0) {
    NvRmGpuAddressSpaceClose_plt(v11);
  }
  v12 = *(_QWORD*)(a1 + 8);
  if (v12 != 0) {
    NvRmGpuDeviceClose_plt(v12);
  }
  result = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    NvRmGpuLibClose_plt(result);
    return 0;
  }
  return result;
}

__attribute__((swiftcall)) void nn_65f3c0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = nn_65f6a0(a2, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a2 + 272) = &SdkData_ea7c60;
  {
    result;
    return;
  }
}

__int64 nn_65f400(__int64 a1, int a2, int a3, char a4, char a5)
{
  char* v7;
  int v10;
  unsigned int v11;
  __int64 v12;
  _QWORD v13[6];
  unsigned int v16;

  v7 = (char*)SdkData_e89ba0 + 48 * a2;
  if ((*v7 & 1) == 0) {
    return 0;
  }
  if ((unsigned int)(a3 - 1) > 7) {
    v10 = 0;
  }
  else {
    v10 = SdkData_bb0490[a3 - 1];
  }
  v11 = *((_DWORD*)v7 + 11);
  if (v7[14] != 0 || v7[15] != 0) {
    LODWORD(v13[0]) = 1;
    HIDWORD(v13[1]) = v11 & 7;
    LODWORD(v13[2]) = v10;
    *(_QWORD*)((char*)v13 + 4) = a4 & 1;
    BYTE6(v13[0]) = 1;
    *(_OWORD*)((char*)&v13[2] + 4) =
        LANES64_OF(
            vand_s8(vshl_u32(vdup_n_s32(v11),
                             COERCE_AS(uint32x2_t, 0xFFFFFFEDFFFFFFEELL)),
                    COERCE_AS(int8x8_t, 0x700000001LL)))
            .n64_u64[0];
  }
  else {
    LODWORD(v13[4]) = (v11 >> 19) & 7;
    memset(v13, 0, 32);
    BYTE4(v13[0]) = a4 & 1;
    HIDWORD(v13[1]) = v11 & 7;
    LODWORD(v13[2]) = v10;
    BYTE5(v13[3]) = a5 & 1;
    BYTE6(v13[0]) = 1;
  }
  if ((unsigned int)NvRmGpuDeviceChooseKind_plt(*(_QWORD*)(a1 + 8), v13,
                                                &v16) != 0) {
    v12 = *(_QWORD*)(a1 + 8);
    v16 = -1;
    LODWORD(v13[0]) = 2;
    memset((char*)v13 + 4, 0, 32);
    NvRmGpuDeviceChooseKind_plt(v12, v13, &v16);
  }
  return v16;
}

__int64 nn_65f540(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  __int64 v6;
  _DWORD* v7;
  int v8;

  result = (*(__int64 (**)(__int64))((char*)((__int64*)0x58LL) +
                                     (_QWORD)SdkData_e89bd8))(a2);
  if (result != 0) {
    v6 = result;
    v7 = (_DWORD*)__errno_location_plt(result);
    *v7 = 0;
    v8 = strtoul_plt(v6, 0, 0);
    if (*v7 != 0) {
      return 0;
    }
    else {
      *a3 = v8;
      return 1;
    }
  }
  return result;
}

__int64 nn_65f6a0(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned __int64 v4;
  int v5;
  int8x8_t v6;
  int8x8_t v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  int8x8_t v12;
  char v13;
  unsigned int v14;
  int v15;
  int v16;

  result = NvRmGpuDeviceGetInfo_plt(a2);
  *(_QWORD*)(a1 + 272) = 0;
  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 256) = (__typeof__(*(_OWORD*)(a1 + 256))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_OWORD*)(a1 + 128) = (__typeof__(*(_OWORD*)(a1 + 128))){0};
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  *(_OWORD*)(a1 + 192) = (__typeof__(*(_OWORD*)(a1 + 192))){0};
  *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
  *(_OWORD*)(a1 + 224) = (__typeof__(*(_OWORD*)(a1 + 224))){0};
  *(_OWORD*)(a1 + 240) = (__typeof__(*(_OWORD*)(a1 + 240))){0};
  *(_DWORD*)a1 = *(_DWORD*)(result + 612);
  *(_DWORD*)(a1 + 4) = *(_DWORD*)(result + 620);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)(result + 636);
  *(_DWORD*)(a1 + 12) = *(_DWORD*)(result + 632);
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(result + 616);
  v4 = *(unsigned int*)(result + 344);
  *(_DWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 24) = v4 >> 10;
  *(_OWORD*)(a1 + 32) = SdkData_bb1700;
  *(_OWORD*)(a1 + 48) = SdkData_bb2110;
  *(_DWORD*)(a1 + 68) = *(_DWORD*)(result + 208);
  *(_DWORD*)(a1 + 72) = *(_DWORD*)(result + 212);
  v5 = *(_DWORD*)(result + 216);
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_DWORD*)(a1 + 76) = v5;
  *(_DWORD*)(a1 + 80) = 4096;
  *(_DWORD*)(a1 + 112) = *(_DWORD*)(result + 744);
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(result + 748);
  *(_BYTE*)(a1 + 120) = 1;
  LANES64(v6).n64_u64[0] = *(unsigned int*)(result + 256);
  *(_DWORD*)(a1 + 156) = 0;
  LANES64(v7).n64_u64[0] = LANES64_OF(vcnt_s8(v6)).n64_u64[0];
  PSEUDO_LOW_LANE64(v7, n64_u8, vaddv_s8(v7));
  *(_DWORD*)(a1 + 124) = LANES64(v7).n64_u32[0];
  v8 = *(_QWORD*)(result + 248);
  if (*(_DWORD*)(v8 + 8) != 0) {
    v9 = 0;
    v10 = 0;
    do {
      v11 = 8 * v10++;
      LANES64(v12).n64_u64[0] =
          LANES64_OF(
              vcnt_s8(COERCE_AS(
                  int8x8_t, *(unsigned int*)(*(_QWORD*)(result + 264) + v11))))
              .n64_u64[0];
      PSEUDO_LOW_LANE64(v12, n64_u8, vaddv_s8(v12));
      v9 += LANES64(v12).n64_u32[0];
      *(_DWORD*)(a1 + 156) = v9;
      v8 = *(_QWORD*)(result + 248);
    } while (v10 < *(unsigned int*)(v8 + 8));
  }
  *(_DWORD*)(a1 + 160) = *(_DWORD*)(v8 + 56);
  *(_DWORD*)(a1 + 164) = *(_DWORD*)(result + 540);
  *(_DWORD*)(a1 + 168) = *(_DWORD*)(result + 532);
  *(_DWORD*)(a1 + 172) = *(_DWORD*)(result + 528);
  *(_DWORD*)(a1 + 176) = *(_DWORD*)(*(_QWORD*)(result + 248) + 8LL);
  *(_DWORD*)(a1 + 180) = *(_DWORD*)(result + 544);
  v13 = *(_BYTE*)(result + 564);
  *(_DWORD*)(a1 + 188) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 184) = v13;
  v14 = *(_DWORD*)(result + 380);
  *(_BYTE*)(a1 + 204) = 1;
  *(_BYTE*)(a1 + 260) = 1;
  if (v14 <= 0x10000) {
    v15 = 0x10000;
  }
  else {
    v15 = v14;
  }
  *(_DWORD*)(a1 + 196) = v14;
  *(_DWORD*)(a1 + 200) = v15;
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(result + 704);
  *(_DWORD*)(a1 + 216) = *(_DWORD*)(result + 708);
  *(_DWORD*)(a1 + 220) = *(_DWORD*)(result + 712);
  *(_DWORD*)(a1 + 224) = *(_DWORD*)(result + 716);
  *(_DWORD*)(a1 + 228) = *(_DWORD*)(result + 720);
  *(_DWORD*)(a1 + 232) = *(_DWORD*)(result + 724);
  *(_DWORD*)(a1 + 236) = *(_DWORD*)(result + 728);
  *(_DWORD*)(a1 + 240) = *(_DWORD*)(result + 732);
  *(_DWORD*)(a1 + 244) = *(_DWORD*)(result + 736);
  *(_DWORD*)(a1 + 248) = *(_DWORD*)(result + 740);
  *(_DWORD*)(a1 + 252) = *(_DWORD*)(result + 696);
  v16 = *(_DWORD*)(result + 700);
  *(_BYTE*)(a1 + 261) = 1;
  *(_DWORD*)(a1 + 256) = v16;
  *(_DWORD*)(a1 + 264) = 2;
  return result;
}

long double nn_65fa80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{

#pragma clang fp contract(off)
  long double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  memset_plt((void*)a1, nullptr, 1792, a4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  SdkRoutine_65fae0(a1, a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a3 != 0) {
    result = *(long double*)a3;
    *(_OWORD*)(a1 + 1704) = *(_OWORD*)a3;
    *(_QWORD*)(a1 + 1720) = *(_QWORD*)(a3 + 16);
  }
  return result;
}

__int64 nn_65fce0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6;
  unsigned int add;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _DWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8 v20;
  unsigned __int64 v21;
  unsigned __int8 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  _QWORD* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int64* v36;
  __int64 v38;
  int v39;
  unsigned int v40;
  unsigned int v42;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  int v65;
  unsigned int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  int* v73;
  int* v74;
  int v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  bool v89;
  int v92;
  __int64 v93;
  __int64 v94;
  int v97;
  uint16x4_t v98[195];
  _QWORD v99[10];
  struct {
    __int64 v100[6];
    int v101;
    char gap1764_[4];
    __int64 v102;
    __int16 v103;
    char gap1778_[2];
    int v104;
    char gap1784_[56];
    __int64 v105;
  } v100_;
  struct {
    _QWORD v106[6];
    int v107;
    char gap1908_[4];
    __int64 v108;
    __int16 v109;
    char gap1922_[2];
    int v110;
    char gap1928_[56];
    __int64 v111;
  } v106_;
  struct {
    _QWORD v112[6];
    int v113;
    char gap2052_[4];
    __int64 v114;
    __int16 v115;
    char gap2066_[2];
    int v116;
    char gap2072_[56];
    __int64 v117;
  } v112_;
  struct {
    _QWORD v118[6];
    int v119;
    char gap2196_[4];
    __int64 v120;
    __int16 v121;
    char gap2210_[2];
    int v122;
    char gap2216_[56];
    __int64 v123;
  } v118_;
  struct {
    _QWORD v124[6];
    int v125;
    char gap2340_[4];
    __int64 v126;
    __int16 v127;
    char gap2354_[2];
    int v128;
    char gap2360_[56];
    __int64 v129;
  } v124_;
  struct {
    _QWORD v130[6];
    int v131;
    char gap2484_[4];
    __int64 v132;
    __int16 v133;
    char gap2498_[2];
    int v134;
    char gap2504_[56];
    __int64 v135;
  } v130_;
  struct {
    _QWORD v136[6];
    int v137;
    char gap2628_[4];
    __int64 v138;
    __int16 v139;
    char gap2642_[2];
    int v140;
    char gap2648_[56];
    __int64 v141;
  } v136_;
  struct {
    _QWORD v142[6];
    int v143;
    char gap2772_[4];
    __int64 v144;
    __int16 v145;
    char gap2786_[2];
    int v146;
    char gap2792_[56];
    __int64 v147;
  } v142_;
  struct {
    _QWORD v148[6];
    int v149;
    char gap2916_[4];
    __int64 v150;
    __int16 v151;
    char gap2930_[2];
    int v152;
    char gap2936_[56];
    __int64 v153;
  } v148_;
  _QWORD v154[2016];
  _DWORD v155[2];
  int v156;
  _QWORD v157[4];
  _QWORD v158[43];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v100_.v103 = 0;
  v100_.v101 = 0;
  v158[0] = 0;
  memset(v99, 0, 72);
  memset(&v112_.v112[3], 0, 24);
  v158[5] = 0;
  v158[10] = 0;
  v158[15] = 0;
  v158[20] = 0;
  v158[25] = 0;
  v158[30] = 0;
  v158[35] = 0;
  v158[40] = 0;
  v100_.v102 = 0;
  v100_.v105 = 0;
  v100_.v100[0] = 0;
  memset(&v100_.v100[3], 0, 24);
  v106_.v108 = 0;
  v106_.v109 = 0;
  v106_.v111 = 0;
  v106_.v106[0] = 0;
  memset(&v106_.v106[3], 0, 24);
  v100_.v104 = 0;
  v106_.v107 = 0;
  v112_.v114 = 0;
  v112_.v115 = 0;
  v112_.v116 = 0;
  v112_.v117 = 0;
  v112_.v112[0] = 0;
  v106_.v110 = 0;
  v112_.v113 = 0;
  v118_.v120 = 0;
  v118_.v121 = 0;
  v118_.v122 = 0;
  v118_.v123 = 0;
  v118_.v118[0] = 0;
  v118_.v119 = 0;
  v124_.v126 = 0;
  v124_.v127 = 0;
  v124_.v128 = 0;
  v124_.v129 = 0;
  v124_.v124[0] = 0;
  memset(&v118_.v118[3], 0, 24);
  v124_.v125 = 0;
  v130_.v132 = 0;
  v130_.v133 = 0;
  v130_.v134 = 0;
  v130_.v135 = 0;
  v130_.v130[0] = 0;
  v130_.v131 = 0;
  v136_.v138 = 0;
  memset(&v124_.v124[3], 0, 24);
  *(_OWORD*)&v100_.v100[1] = SdkData_bb4570;
  *(_OWORD*)&v106_.v106[1] = SdkData_bb4570;
  *(_OWORD*)&v112_.v112[1] = SdkData_bb4570;
  *(_OWORD*)&v118_.v118[1] = SdkData_bb4570;
  *(_OWORD*)&v124_.v124[1] = SdkData_bb4570;
  *(_OWORD*)&v130_.v130[1] = SdkData_bb4570;
  *(_OWORD*)&v136_.v136[1] = SdkData_bb4570;
  v136_.v139 = 0;
  v136_.v140 = 0;
  v136_.v141 = 0;
  memset(&v130_.v130[3], 0, 24);
  v136_.v136[0] = 0;
  v136_.v137 = 0;
  *(_OWORD*)&v142_.v142[1] = SdkData_bb4570;
  v142_.v144 = 0;
  v142_.v145 = 0;
  v142_.v146 = 0;
  v142_.v147 = 0;
  v142_.v142[0] = 0;
  v142_.v143 = 0;
  memset(&v136_.v136[3], 0, 24);
  *(_OWORD*)&v148_.v148[1] = SdkData_bb4570;
  v148_.v150 = 0;
  v148_.v151 = 0;
  v148_.v152 = 0;
  v148_.v153 = 0;
  v148_.v148[0] = 0;
  v148_.v149 = 0;
  memset(&v142_.v142[3], 0, 24);
  memset(&v148_.v148[3], 0, 24);
  memset_plt((void*)v98, nullptr, 1564, a4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v6 = *(_QWORD*)(a1 + 8);
  do {
    add = atomic_fetch_add((atomic_uint* volatile)(v6 + 7584), 1u);
    *(_DWORD*)(a1 + 16) = add + 1;
  } while (add == -1);
  v8 = *(_QWORD*)(a1 + 120);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 8);
    if (v9 != 0) {
      SdkRoutine_6a0870(v9),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) = 0;
    }
  }
  SdkData_1042158(*(_QWORD*)(a1 + 24));
  SdkData_1042158(*(_QWORD*)(a1 + 32));
  v11 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_BYTE*)a1 = 0;
  *(_OWORD*)(a1 + 40) = (__typeof__(*(_OWORD*)(a1 + 40))){0};
  *(_OWORD*)(a1 + 56) = (__typeof__(*(_OWORD*)(a1 + 56))){0};
  *(_OWORD*)(a1 + 72) = (__typeof__(*(_OWORD*)(a1 + 72))){0};
  *(_OWORD*)(a1 + 88) = (__typeof__(*(_OWORD*)(a1 + 88))){0};
  *(_QWORD*)(a1 + 104) = 0;
  v92 = a2;
  *(_QWORD*)(a1 + 128) = v11 & 0xFFFFFFFFF8000000LL;
  if (a2 >= 1) {
    v12 = (unsigned int)a2;
    v93 = (unsigned int)a2;
    v94 = v6;
    v13 = (__int64*)a4;
    v14 = v155;
    v15 = (__int64*)(a3 + 8);
    while (1) {
      v17 = *v15;
      v15 += 2;
      v18 = SdkRoutine_662a90((__int64)v157, v17),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (v18 == 0) {
      LABEL_26:
        v26 = 0;
        goto LABEL_127;
      }
      v19 = v18;
      v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 168LL))(v18),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v22 = v20;
      if (a4 != 0) {
        v23 = *v13;
      }
      else {
        v23 = 0;
      }
      v24 = &v154[224 * v20];
      memset_plt((void*)v24, nullptr, 1792, v21),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      SdkRoutine_65fae0((__int64)&v154[224 * v22], v19),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      if (v23 != 0) {
        *(_OWORD*)(v24 + 213) = *(_OWORD*)v23;
        v24[215] = *(_QWORD*)(v23 + 16);
      }
      v25 = *(_QWORD*)v19;
      *v14 = v22;
      if ((*(unsigned __int8 (**)(__int64))(v25 + 864))(v19) != 0) {
        *(_QWORD*)(a1 + 128) =
            *(_QWORD*)(a1 + 128) & 0xFFFFFFFFFFFC01FFLL |
            ((512 << v22) | (unsigned int)*(_QWORD*)(a1 + 128)) & 0x3FE00;
      }
      if (v22 == 5) {
        if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v19 + 944LL))(v19) ==
                0 &&
            (*(_BYTE*)(v94 + 10) & 4) != 0) {
          goto LABEL_26;
        }
        goto LABEL_10;
      }
      if (v22 == 1) {
        v16 = (__int64)(int)*(_QWORD*)(a1 + 128) >> 28;
        if (v16 != 1) {
          if (v16 != 2) {
            goto LABEL_10;
          }
          LOBYTE(v16) = 0;
        }
        *((_BYTE*)v24 + 1656) = v16;
      }
    LABEL_10:
      ++v14;
      ++v13;
      if (--v12 == 0) {
        v33 = 0;
        v28 = 0;
        v34 = 0;
        while (1) {
          v35 = (int)v155[v33];
          if ((_DWORD)v35 == 8) {
            goto LABEL_26;
          }
          v36 = (unsigned __int64*)(a3 + 16 * v33);
          if (v36[1] == 0 || (v36[1] & 7) != 0) {
            goto LABEL_26;
          }
          if (*v36 != 0) {
            ++v28;
          }
          v38 = v157[5 * (int)v35 + 4];
          v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 24LL))(v38),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          if (v39 != 201 || v40 > 0x14) {
            goto LABEL_26;
          }
          v42 = v40;
          if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v38 + 1088LL))(v38) !=
                  0 &&
              v42 - 5 > 0xF) {
            goto LABEL_26;
          }
          v44 = *(_QWORD*)(a1 + 128);
          if (((unsigned __int16)(1 << v35) & (unsigned __int16)v44 & 0x1FF) !=
              0) {
            goto LABEL_26;
          }
          *(_QWORD*)(a1 + 128) =
              v44 & 0xFFFFFFFFFFFFFE00LL |
              ((unsigned __int16)(1 << v35) | (unsigned __int16)v44) & 0x1FF;
          v45 = *v36;
          if (v45 != 0) {
            v46 = v94;
            nn_os_LockMutex_plt_alt1(v94 + 2440),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            v47 = *(_DWORD*)(v94 + 2424);
            if (v47 != 0) {
              v48 = 0;
              while (1) {
                v49 = *(_QWORD*)(*(_QWORD*)(v94 + 2416) + 8LL * v48);
                v50 = *(_QWORD*)(v49 + 24);
                v89 = v45 >= v50;
                v51 = v45 - v50;
                if (v89 && v51 < *(_QWORD*)(v49 + 56)) {
                  break;
                }
                if (v47 == ++v48) {
                  goto LABEL_65;
                }
              }
              if (*(_DWORD*)v49 == 0 && (*(_BYTE*)(v49 + 16) & 1) != 0) {
                v52 = 0;
              }
              else {
                v52 = *(_QWORD*)(v49 + 48);
              }
              v53 = v51 + v52;
              if (v52 != 0) {
                v45 = v53;
              }
              else {
                v45 = 0;
              }
            }
            else {
            LABEL_65:
              v45 = 0;
            }
            nn_os_UnlockMutex_plt_alt1(v94 + 2440),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          }
          else {
            v46 = v94;
          }
          v99[v35] = v45;
          if ((*(unsigned int (**)(__int64))(*(_QWORD*)v38 + 1072LL))(v38) !=
              0) {
            ++v34;
            *(_QWORD*)(a1 + 128) =
                *(_QWORD*)(a1 + 128) & 0xFFFFFFFFF803FFFFLL |
                ((0x40000 << v35) | (unsigned int)*(_QWORD*)(a1 + 128)) &
                    0x7FC0000;
          }
          v54 = &v154[224 * (int)v35];
          if (*(_DWORD*)(v46 + 84) == *((unsigned __int16*)v54 + 6) &&
              *(_DWORD*)(v46 + 88) == *((unsigned __int16*)v54 + 7)) {
            LODWORD(v12) = v12 + 1;
          }
          if (++v33 == v93) {
            v27 = 16LL * v34;
            v97 = v12;
            if (*(_QWORD*)(a1 + 120) != 0) {
              goto LABEL_28;
            }
            goto LABEL_82;
          }
        }
      }
    }
  }
  v27 = 0;
  v28 = 0;
  v97 = 0;
  if (*(_QWORD*)(a1 + 120) != 0) {
  LABEL_28:
    if ((*(_WORD*)(a1 + 130) & 0x7FC) != 0) {
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = v158;
      do {
        if (((1 << v29) & (*(_DWORD*)(a1 + 128) >> 18) & 0x1FF) != 0) {
          v30 += (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v32 + 1072LL))(*v32),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
          ++v31;
        }
        ++v29;
        v32 += 5;
      } while (v29 != 9);
      if (v30 + 16LL * v31 != 0) {
        v55 = SdkRoutine_6a0860(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        if (v55 != 0) {
          v56 = v55 + v27;
          v57 = 0;
          v58 = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) = v55;
          v59 = v158;
          do {
            if (((1 << v57) & (*(_DWORD*)(a1 + 128) >> 18) & 0x1FF) != 0) {
              v60 = (_QWORD*)*v59;
              v61 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v59 + 1072LL))(*v59),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              v62 = (*(__int64 (**)(_QWORD*))(*v60 + 1064LL))(v60),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              v63 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) + 16LL * v58;
              *(_QWORD*)v63 = v56;
              *(_DWORD*)(v63 + 8) = v61;
              memcpy_plt(v56, v60[1] + v62, v61),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v21 = COERCE_AS(
                      __typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
              v56 += v61;
              ++v58;
            }
            ++v57;
            v59 += 5;
          } while (v57 != 9);
        }
      }
    }
  }
LABEL_82:
  v64 = *(_QWORD*)(a1 + 128);
  if ((v64 & 4) != 0) {
    v65 = v92;
    v66 = 2;
  }
  else {
    v65 = v92;
    if ((v64 & 0x10) != 0) {
      v66 = 4;
    }
    else {
      v66 = ((int)((_DWORD)v64 << 28) >> 31) & 3;
    }
  }
  v67 = v97;
  if (v65 >= 1) {
    v68 = (unsigned int)v65;
    v69 = v65 & 3;
    v70 = &v154[224 * v66];
    if ((unsigned int)v65 >= 4) {
      v72 = 0;
      v73 = &v156;
      do {
        if (*(v73 - 2) == v66) {
          memcpy_plt(v98, v70 + 2, 1564),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        if (*(v73 - 1) == v66) {
          memcpy_plt(v98, v70 + 2, 1564),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        if (*v73 == v66) {
          memcpy_plt(v98, v70 + 2, 1564),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        if (v73[1] == v66) {
          memcpy_plt(v98, v70 + 2, 1564),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        v73 += 4;
        v72 -= 4;
      } while (-(v68 & 0x7FFFFFFC) != v72);
      v67 = v97;
      v71 = -v72;
      if (v69 == 0) {
      LABEL_110:
        v26 = 0;
        if (v67 == v92 && v28 == v92) {
          v76 = 0;
          *(_QWORD*)(a1 + 128) = v64 | 0x8000000;
          do {
            v78 = (int)v155[v76];
            v79 = *(_QWORD*)(a3 + 16 * v76);
            v80 = v99[v78];
            v81 = &v154[224 * (int)v78];
            if (v80 != 0) {
              v82 = *((unsigned int*)v81 + 404);
              v83 = v81[215];
              v84 = -1;
              v85 = v80 + ((unsigned int)v82 & 0xFFFFFFF0);
              v86 = (__int64*)(v85 - 16);
              do {
                v87 = *v86;
                v86 -= 2;
                ++v84;
                v88 = v87 & 0x1FF;
                v89 = v88 != 280 || v84 >= 0x10;
              } while (!v89);
              if (v88 == 327 && v84 >= 8) {
                *(_QWORD*)(v85 - 8) = 0xFC00000000F00LL;
                *(_QWORD*)(v85 - 96) = (v83 << 32) | 0xFF7802;
                *(_QWORD*)(v85 - 88) = 0xFC00000000F00LL;
                *(_QWORD*)(v85 - 80) = v83 & 0xFFFFFFFF00000000LL | 0xFF7802;
                *(_QWORD*)(v85 - 72) = 0xFC00000000F00LL;
                *(_QWORD*)(v85 - 112) = (v82 << 32) | 0xFF7802;
                *(_QWORD*)(v85 - 104) = 0xFC00000000F00LL;
                *(_QWORD*)(v85 - 64) = (v78 << 32) | 0xFF7802;
                *(_OWORD*)(v85 - 128) = SdkData_bb1710;
                *(_OWORD*)(v85 - 56) = SdkData_bb3610;
                *(_OWORD*)(v85 - 40) = SdkData_bb3610;
                *(_OWORD*)(v85 - 24) = SdkData_bb3610;
              }
            }
            v77 = &v100_.v100[18 * (int)v78];
            SdkRoutine_660940((__int64)v77, v79, v80, 0, v10,
                              (_DWORD*)v81 + 404),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            SdkRoutine_6a0a00(a1, v77),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            nn_6a0a70(a1, (__int64)v77),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
            ++v76;
          } while (v76 != v68);
          goto LABEL_94;
        }
        goto LABEL_127;
      }
    }
    else {
      v71 = 0;
      if ((v65 & 3) == 0) {
        goto LABEL_110;
      }
    }
    v74 = &v155[v71];
    do {
      v75 = *v74++;
      if (v75 == v66) {
        memcpy_plt(v98, v70 + 2, 1564),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      --v69;
    } while (v69 != 0);
    goto LABEL_110;
  }
  v26 = 0;
  if (v97 == v65 && v28 == v65) {
    *(_QWORD*)(a1 + 128) = v64 | 0x8000000;
  LABEL_94:
    SdkRoutine_693860(a1, v100_.v100, v98),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v26 = 1;
  }
LABEL_127:
  SdkRoutine_662d30(v148_.v148),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v142_.v142),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v136_.v136),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v130_.v130),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v124_.v124),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v118_.v118),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v112_.v112),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v106_.v106),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_662d30(v100_.v100),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return v26;
}

__int64 nn_660780(__int64 a1, int a2, int8x16_t* a3)
{
  __int64 v3;
  int8x16_t* v4;
  int8x16_t* v5;
  int8x16_t* v6;
  __int64 v7;
  int8x16_t v8;
  int8x16_t v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  int8x16_t v13;
  __int64 v14;
  unsigned __int64* v15;
  _QWORD* v16;
  unsigned __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD v22[14];
  _QWORD v23[2];
  struct {
    _QWORD v24[6];
    __int64 v25;
  } v24_;

  v24_.v25 = 0;
  *(_OWORD*)v23 = (__typeof__(*(_OWORD*)v23)){0};
  memset(v24_.v24, 0, sizeof(v24_.v24));
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  if (a2 >= 1) {
    if ((unsigned int)a2 < 4) {
      v3 = 0;
    LABEL_7:
      v14 = (unsigned int)a2 - v3;
      v15 = &v23[v3];
      v16 = (_QWORD*)((unsigned __int64)&v21[2 * v3] | 8);
      v17 = &LANES128(a3[1]).n128_u64[3 * (unsigned int)v3];
      do {
        v18 = *(v17 - 1);
        --v14;
        *v15++ = *v17;
        v19 = *(v17 - 2);
        v17 += 3;
        *(v16 - 1) = v19;
        *v16 = v18;
        v16 += 2;
      } while (v14 != 0);
      return (unsigned __int8)nn_65fce0(a1, a2, (__int64)v21,
                                        (unsigned __int64)v23);
    }
    v3 = a2 & 0x7FFFFFFC;
    v4 = a3;
    v5 = (int8x16_t*)v22;
    v6 = (int8x16_t*)v24_.v24;
    v7 = v3;
    do {
      v8 = *v4;
      v9 = v4[1];
      v10 = v4[3];
      v7 -= 4;
      v11 = vextq_s8(v9, v4[2], 8u);
      v12 = v4[4];
      v13 = vextq_s8(v12, v4[5], 8u);
      LANES128(v9).n128_u64[1] = LANES128(v4[2]).n128_u64[1];
      LANES128(v12).n128_u64[1] = LANES128(v4[5]).n128_u64[1];
      v4 += 6;
      v5[-2] = v8;
      v5[-1] = v11;
      *v5 = v10;
      v5[1] = v13;
      v5 += 4;
      v6[-1] = v9;
      *v6 = v12;
      v6 += 2;
    } while (v7 != 0);
    if (v3 != a2) {
      goto LABEL_7;
    }
  }
  return (unsigned __int8)nn_65fce0(a1, a2, (__int64)v21,
                                    (unsigned __int64)v23);
}

__int64 nn_660f20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  void* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  bool v22;
  char* v28;
  int64x2_t v29;
  int64x2_t v30;
  int64x2_t v31;
  __int64 v32;
  int64x2_t* v33;
  int64x2_t v34;
  int64x2_t v35;
  unsigned __int64 v36;
  int64x2_t v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 result;
  __int64 i;
  unsigned __int64* v51;
  unsigned __int64 v52;
  unsigned int v53;
  int v54;
  _QWORD* v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  void* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int64x2_t v79;
  int64x2_t v80;
  __int64 v81;
  int64x2_t v82;
  unsigned __int64* v83;
  int64x2_t v84;
  __int64 v85;
  unsigned __int64* v86;
  unsigned __int64* v87;
  int64x2_t v88;
  unsigned __int64 v89;
  int64x2_t v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned int v116;
  int v117;
  _QWORD* v120;
  char* v121;
  unsigned __int8 v122;
  unsigned __int8 v123;
  unsigned __int8 v124;
  int v125;
  int v126;
  unsigned int v127;
  __int64 v128;
  int v129;
  int v130;
  int v131;
  char v132;
  __int64 v133;
  char v134;
  __int64 v135;
  char v136;
  __int64 v137;
  char v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  int v143;
  int v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  unsigned int v153;
  __int64* v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  bool v160;
  __int64 v161;
  int v162;
  bool v163;
  atomic_uint* v164;
  unsigned int add;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  _QWORD v170[2];
  struct {
    __int128 v171;
    __int128 v172;
    __int128 v173;
    __int64 v174;
  } v171_;
  char v175[8];
  struct {
    const char* v176;
    int v177;
  } v176_;
  __int64 v178;
  struct {
    _QWORD v179[4];
    _QWORD* v180;
  } v179_;

  v4 = a1;
  *(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 128) & 0xFFFFFFFF0FFFFFFFLL |
                         (unsigned int)(*(_DWORD*)(a2 + 24) << 28);
  if (*(_QWORD*)(a2 + 64) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    v7 = SdkData_e89bd8;
    v8 = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, 176);
    *(_QWORD*)(v4 + 152) = v8;
    v9 = (_QWORD*)v8;
    *(_DWORD*)(v8 + 168) = *(_DWORD*)(v5 + 7632);
    v169 = *(unsigned int*)(a2 + 56);
    v168 = *(_QWORD*)(a2 + 64);
    v10 = (*(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                            (_QWORD)v7 + 4))((int)v169, 8);
    v9[13] = v10;
    if (*(int*)(a2 + 28) < 1) {
      v14 = v10;
    }
    else {
      v11 = 16;
      v12 = 0;
      do {
        v13 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + v11);
        v11 += 24;
        *(_QWORD*)(v9[13] + 8 * v12++) = v13;
      } while (v12 < *(int*)(a2 + 28));
      v14 = 0;
    }
    v18 = (*(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                            (_QWORD)v7 + 4))((int)v169, 40);
    v19 = *(_QWORD*)(v168 + 8);
    v20 = *(_DWORD*)(v19 + 4);
    v21 = *(_DWORD*)(v19 + 8);
    v167 = v4;
    v166 = a3;
    v22 = v20 != 201 || v21 >= 2;
    if (v22) {
      if (v20 == 201 && v21 == 2) {
        v48 = (char*)SdkData_e89de0;
      }
      else if (v20 != 201 || v21 - 3 >= 0xA) {
        if (v20 != 201 || v21 - 13 >= 2) {
          if (v20 == 201 && v21 == 15) {
            v48 = (char*)SdkData_e89df8;
          }
          else if (v20 == 201 && v21 == 16) {
            v48 = (char*)SdkData_e89e00;
          }
          else if (v20 == 201 && v21 == 17) {
            v48 = (char*)SdkData_e89dd8;
          }
          else if (v20 == 201 && v21 == 18) {
            v48 = (char*)SdkData_e89e10;
          }
          else {
            v163 = v21 == 19 && v20 == 201;
            v48 = (char*)SdkData_e89e18;
            if (v163) {
              v48 = (char*)SdkData_e89e08;
            }
          }
        }
        else {
          v48 = (char*)SdkData_e89df0;
        }
      }
      else {
        v48 = (char*)SdkData_e89de8;
      }
      v28 = v48 + 16;
    }
    else {
      v28 = (char*)SdkData_e89dd0 + 16;
    }
    v170[0] = v28;
    v170[1] = v19;
    *(_QWORD*)&v171_.v172 = v170;
    (*((void (**)(_QWORD*))v28 + 68))(v170);
    if ((int)v169 >= 1) {
      for (i = 0; i != v169; ++i) {
        v51 = (unsigned __int64*)(v168 + 16 * i);
        v52 = v51[1];
        if (v52 != 0) {
          v54 = *(_DWORD*)(v52 + 4);
          v53 = *(_DWORD*)(v52 + 8);
          if (v54 != 201 || v53 >= 2) {
            if (v54 == 201 && v53 == 2) {
              v64 = (char*)SdkData_e89de0;
            }
            else if (v54 != 201 || v53 - 3 >= 0xA) {
              if (v54 != 201 || v53 - 13 >= 2) {
                if (v54 == 201 && v53 == 15) {
                  v64 = (char*)SdkData_e89df8;
                }
                else if (v54 == 201 && v53 == 16) {
                  v64 = (char*)SdkData_e89e00;
                }
                else if (v54 == 201 && v53 == 17) {
                  v64 = (char*)SdkData_e89dd8;
                }
                else if (v54 == 201 && v53 == 18) {
                  v64 = (char*)SdkData_e89e10;
                }
                else if (v54 == 201 && v53 == 19) {
                  v64 = (char*)SdkData_e89e08;
                }
                else {
                  if (v54 != 201 || v53 != 20) {
                    v63 = v179_.v180;
                    goto LABEL_112;
                  }
                  v64 = (char*)SdkData_e89e18;
                }
              }
              else {
                v64 = (char*)SdkData_e89df0;
              }
            }
            else {
              v64 = (char*)SdkData_e89de8;
            }
          }
          else {
            v64 = (char*)SdkData_e89dd0;
          }
          v63 = v179_.v179;
          v179_.v179[0] = v64 + 16;
          v179_.v179[1] = v52;
        }
        else {
          v63 = nullptr;
        }
        v179_.v180 = v63;
      LABEL_112:
        v65 = v18 + 40 * i;
        *(_QWORD*)(v65 + 32) = 0;
        *(_OWORD*)v65 = (__typeof__(*(_OWORD*)v65)){0};
        *(_OWORD*)(v65 + 16) = (__typeof__(*(_OWORD*)(v65 + 16))){0};
        v66 = v63[1];
        *(_QWORD*)(v65 + 8) =
            v66 + (*(unsigned int (**)(_QWORD*))(*v63 + 528LL))(v63);
        *(_QWORD*)v65 =
            (*(unsigned int (**)(_QWORD*))(*v179_.v180 + 520LL))(v179_.v180);
        *(_QWORD*)(v65 + 16) =
            (*(unsigned int (**)(_QWORD*))(*v179_.v180 + 536LL))(v179_.v180);
        v67 = *v51;
        *(_QWORD*)(v65 + 32) = v67;
        if (v67 != 0) {
          nn_os_LockMutex_plt_alt1(v5 + 2440);
          v68 = *(_DWORD*)(v5 + 2424);
          if (v68 != 0) {
            v69 = 0;
            while (1) {
              v70 = *(_QWORD*)(*(_QWORD*)(v5 + 2416) + 8LL * v69);
              v71 = *(_QWORD*)(v70 + 24);
              v22 = v67 >= v71;
              v72 = v67 - v71;
              if (v22 && v72 < *(_QWORD*)(v70 + 56)) {
                break;
              }
              if (v68 == ++v69) {
                goto LABEL_125;
              }
            }
            if (*(_DWORD*)v70 == 0 && (*(_BYTE*)(v70 + 16) & 1) != 0) {
              v73 = 0;
            }
            else {
              v73 = *(_QWORD*)(v70 + 48);
            }
            v74 = v72 + v73;
            if (v73 != 0) {
              v67 = v74;
            }
            else {
              v67 = 0;
            }
          }
          else {
          LABEL_125:
            v67 = 0;
          }
          nn_os_UnlockMutex_plt_alt1(v5 + 2440);
        }
        *(_QWORD*)(v65 + 24) = v67;
        if (v14 != 0) {
          *(_QWORD*)(v14 + 8 * i) =
              (*(__int64 (**)(_QWORD*))(*v179_.v180 + 48LL))(v179_.v180);
        }
      }
    }
    v9[9] = v18;
    *((_DWORD*)v9 + 16) = v169;
    v75 = SdkData_e89bd8;
    v76 = *(unsigned int*)(a2 + 56);
    if ((int)v76 < 1) {
      v78 = 0;
    }
    else {
      if ((unsigned int)v76 >= 5) {
        v79 = (__typeof__(v79)){0};
        v80 = (__typeof__(v80)){0};
        v81 = v76 & 3;
        v82 = vdupq_n_s64(7u);
        if ((v76 & 3) == 0) {
          v81 = 4;
        }
        v83 = (unsigned __int64*)(v18 + 80);
        v84 = vdupq_n_s64(0xFFFFFFFFFFFFFFF8LL);
        v77 = v76 - v81;
        v85 = v77;
        do {
          v86 = v83 - 5;
          v87 = v83 + 5;
          LANES128(v88).n128_u64[0] = *(v83 - 10);
          v89 = *v83;
          v83 += 20;
          LANES128(v90).n128_u64[0] = v89;
          v85 -= 4;
          LANES128(v88).n128_u64[1] = *v86;
          LANES128(v90).n128_u64[1] = *v87;
          v79 = vaddq_s64(vandq_s8(vaddq_s64(v88, v82), v84), v79);
          v80 = vaddq_s64(vandq_s8(vaddq_s64(v90, v82), v84), v80);
        } while (v85 != 0);
        v78 = vaddvq_s64(vaddq_s64(v80, v79));
      }
      else {
        v77 = 0;
        v78 = 0;
      }
      v91 = v76 - v77;
      v92 = (__int64*)(v18 + 40 * v77);
      do {
        v93 = *v92;
        v92 += 5;
        --v91;
        v78 += (v93 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      } while (v91 != 0);
    }
    result = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)SdkData_e89bd8 + 4))(1, v78);
    v9[11] = result;
    if (result == 0) {
      return result;
    }
    v94 = *(_DWORD*)(a2 + 56);
    if (v94 >= 1) {
      v95 = v9[9];
      v96 = v94 & 3;
      v97 = result;
      if ((unsigned int)v94 < 4) {
        v98 = 0;
        if (v96 == 0) {
          goto LABEL_155;
        }
        goto LABEL_153;
      }
      v99 = (__int64*)(v95 + 80);
      v100 = 0;
      v101 = -(__int64)(v94 & 0x7FFFFFFC);
      do {
        v102 = *(v99 - 10);
        memcpy_plt(v97, *(v99 - 9), (unsigned int)v102);
        v103 = v102 + 7;
        v104 = *(v99 - 5);
        v105 = v97 + (v103 & 0xFFFFFFF8);
        memcpy_plt(v105, *(v99 - 4), (unsigned int)v104);
        v106 = v104 + 7;
        v107 = *v99;
        v108 = v105 + (v106 & 0xFFFFFFF8);
        memcpy_plt(v108, v99[1], (unsigned int)*v99);
        v109 = v107 + 7;
        v110 = v99[5];
        v111 = v108 + (v109 & 0xFFFFFFF8);
        memcpy_plt(v111, v99[6], (unsigned int)v110);
        v99 += 20;
        v100 -= 4;
        v97 = v111 + (((_DWORD)v110 + 7) & 0xFFFFFFF8);
      } while (v101 != v100);
      v98 = -v100;
      v75 = SdkData_e89bd8;
      if (v96 != 0) {
      LABEL_153:
        v112 = (_QWORD*)(v95 + 40 * v98 + 8);
        do {
          v113 = *(v112 - 1);
          memcpy_plt(v97, *v112, (unsigned int)v113);
          v112 += 5;
          --v96;
          v97 += ((_DWORD)v113 + 7) & 0xFFFFFFF8;
        } while (v96 != 0);
      }
    }
  LABEL_155:
    if ((*(unsigned int (**)(_QWORD, __int64, __int64*))(*(_QWORD*)(v5 + 7688) +
                                                         64LL))(
            *(_QWORD*)(*(_QWORD*)(v167 + 8) + 7696LL), 25, &v178) != 0) {
      return 0;
    }
    v114 = (*(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                             (_QWORD)v75 + 4))((int)v169, v178);
    *((_WORD*)v9 + 68) = 0;
    v9[12] = v114;
    *((_DWORD*)v9 + 35) = 0;
    *((_DWORD*)v9 + 36) = 0;
    v9[19] = 0;
    *((_DWORD*)v9 + 40) = 0;
    nn_os_InitializeMutex_plt(v9 + 17, 1, 0);
    *((_DWORD*)v9 + 12) = v169;
    v9[7] = (*(__int64 (**)(__int64, __int64))(
        (char*)((__int64*)0x4LL) + (_QWORD)v75 + 4))((int)v169 + 1LL, 8);
    v115 = *(_QWORD*)(v168 + 8);
    if (v115 != 0) {
      v117 = *(_DWORD*)(v115 + 4);
      v116 = *(_DWORD*)(v115 + 8);
      if (v117 != 201 || v116 >= 2) {
        if (v117 == 201 && v116 == 2) {
          v121 = (char*)SdkData_e89de0;
        }
        else if (v117 == 201 && v116 - 3 < 0xA) {
          v121 = (char*)SdkData_e89de8;
        }
        else if (v117 == 201 && v116 - 13 < 2) {
          v121 = (char*)SdkData_e89df0;
        }
        else if (v117 == 201 && v116 == 15) {
          v121 = (char*)SdkData_e89df8;
        }
        else if (v117 == 201 && v116 == 16) {
          v121 = (char*)SdkData_e89e00;
        }
        else if (v117 == 201 && v116 == 17) {
          v121 = (char*)SdkData_e89dd8;
        }
        else if (v117 == 201 && v116 == 18) {
          v121 = (char*)SdkData_e89e10;
        }
        else if (v117 == 201 && v116 == 19) {
          v121 = (char*)SdkData_e89e08;
        }
        else {
          if (v117 != 201 || v116 != 20) {
            v120 = (_QWORD*)v171_.v172;
          LABEL_173:
            memset(v179_.v179, 0, sizeof(v179_.v179));
            v122 = (*(__int64 (**)(_QWORD*))(*v120 + 552LL))(v120);
            LODWORD(v179_.v179[0]) = v122;
            v123 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v171_.v172 + 560LL))(
                v171_.v172);
            HIDWORD(v179_.v179[0]) = v123;
            v124 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v171_.v172 + 568LL))(
                v171_.v172);
            LODWORD(v179_.v179[1]) = v124;
            v125 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v171_.v172 + 512LL))(
                v171_.v172);
            v126 = *(_DWORD*)(a2 + 92);
            v127 = v125 & 0xFFFFFCFF;
            v128 = v171_.v172;
            v129 = (*(_DWORD*)(a2 + 96) & 3) << 8;
            v176_.v176 = "descriptorBaseArray";
            HIDWORD(v179_.v179[2]) = v126;
            v176_.v177 = 5168;
            v130 = v127 | v129;
            v131 = *(_DWORD*)(a2 + 88);
            v130 |= 1u;
            *((_BYTE*)v9 + 112) = v122;
            *((_BYTE*)v9 + 113) = v123;
            *((_BYTE*)v9 + 114) = v124;
            *((_DWORD*)v9 + 29) = v130;
            *((_DWORD*)v9 + 30) = v126;
            HIDWORD(v179_.v179[1]) = v131;
            LODWORD(v179_.v179[2]) = v130;
            *((_BYTE*)v9 + 115) = v131;
            v132 = v9[10] & 0xFE |
                   (*(__int64 (**)(__int64))(*(_QWORD*)v128 + 904LL))(v128) & 1;
            v133 = v171_.v172;
            *((_BYTE*)v9 + 80) = v132;
            v134 =
                2 *
                ((*(__int64 (**)(__int64))(*(_QWORD*)v133 + 912LL))(v133) & 1);
            v135 = v171_.v172;
            *((_BYTE*)v9 + 80) = v9[10] & 0xFD | v134;
            v136 =
                4 *
                ((*(__int64 (**)(__int64))(*(_QWORD*)v135 + 920LL))(v135) & 1);
            v137 = v171_.v172;
            *((_BYTE*)v9 + 80) = v9[10] & 0xFB | v136;
            v138 =
                8 *
                ((*(__int64 (**)(__int64))(*(_QWORD*)v137 + 928LL))(v137) & 1);
            v139 = v171_.v172;
            *((_BYTE*)v9 + 80) = v9[10] & 0xF7 | v138;
            *((_BYTE*)v9 + 80) =
                v9[10] & 0xEF |
                (16 *
                 ((*(__int64 (**)(__int64))(*(_QWORD*)v139 + 936LL))(v139) &
                  1));
            if (*(_DWORD*)(a2 + 56) != 0) {
              v140 = 0;
              do {
                v141 = v9[9] + 40 * v140;
                v142 = *(_QWORD*)(v141 + 32);
                if (v142 != 0 && *(_QWORD*)(v141 + 16) != 0) {
                  nn_os_LockMutex_plt_alt1(v5 + 2440);
                  v143 = *(_DWORD*)(v5 + 2424);
                  if (v143 == 0) {
                    goto LABEL_189;
                  }
                  v144 = 0;
                  while (1) {
                    v145 = *(_QWORD*)(*(_QWORD*)(v5 + 2416) + 8LL * v144);
                    v146 = *(_QWORD*)(v145 + 24);
                    v22 = v142 >= v146;
                    v147 = v142 - v146;
                    if (v22 && v147 < *(_QWORD*)(v145 + 56)) {
                      break;
                    }
                    if (v143 == ++v144) {
                      goto LABEL_189;
                    }
                  }
                  if ((*(_DWORD*)v145 != 0 ||
                       (*(_BYTE*)(v145 + 16) & 1) == 0) &&
                      (v148 = *(_QWORD*)(v145 + 48)) != 0) {
                    v149 = v147 + v148;
                  }
                  else {
                  LABEL_189:
                    v149 = 0;
                  }
                  nn_os_UnlockMutex_plt_alt1(v5 + 2440);
                  if (v149 != 0) {
                    v150 = *(_QWORD*)(v9[13] + 8 * v140);
                    v151 = *(_QWORD*)(v9[9] + 40 * v140 + 16);
                    v152 = (unsigned int)v151;
                    while (1) {
                      v153 = -1;
                      v154 =
                          (__int64*)(v149 - 16 + (v152 & 0xFFFFFFFFFFFFFFF0LL));
                      v155 = v149 + ((unsigned int)v152 & 0xFFFFFFF0);
                      do {
                        v156 = *v154;
                        v154 -= 2;
                        ++v153;
                        v157 = v156 & 0x1FF;
                      } while (v157 == 280 && v153 < 0x10);
                      if (v157 == 327 && v153 >= 8) {
                        break;
                      }
                      v160 = (unsigned int)v152 > 0xFF;
                      v152 -= 128;
                      if (!v160) {
                        goto LABEL_176;
                      }
                    }
                    *(_QWORD*)(v155 - 80) =
                        v150 & 0xFFFFFFFF00000000LL | 0xFF7802;
                    *(_QWORD*)(v155 - 8) = 0xFC00000000F00LL;
                    *(_QWORD*)(v155 - 56) = 0xFC00000000F00LL;
                    *(_QWORD*)(v155 - 48) = (v151 << 32) | 0xFF7802;
                    *(_QWORD*)(v155 - 112) = (v152 << 32) | 0xFF7802;
                    *(_QWORD*)(v155 - 104) = 0xFC00000000F00LL;
                    *(_QWORD*)(v155 - 96) = (v150 << 32) | 0xFF7802;
                    *(_QWORD*)(v155 - 88) = 0xFC00000000F00LL;
                    *(_QWORD*)(v155 - 40) = 0xFC00000000F00LL;
                    *(_QWORD*)(v155 - 32) = (v140 << 32) | 0xFF7802;
                    *(_OWORD*)(v155 - 128) = SdkData_bb1710;
                    *(_OWORD*)(v155 - 72) = SdkData_bb0d60;
                    *(_OWORD*)(v155 - 24) = SdkData_bb3610;
                  }
                }
              LABEL_176:
                ++v140;
              } while (v140 < *(unsigned int*)(a2 + 56));
            }
            v161 = v166;
            if (v166 == 0) {
              v161 = v9[12];
            }
            v4 = v167;
            v162 = (*(__int64 (**)(_QWORD, _QWORD*, __int64, _QWORD, __int64,
                                   const char**, bool, __int64, _QWORD,
                                   _QWORD*))(*(_QWORD*)(v5 + 7688) + 312LL))(
                *(_QWORD*)(v5 + 7696), v179_.v179, v169, v9[9], 1, &v176_.v176,
                v166 != 0, v161, v9[7], v9);
            if (v166 != 0) {
              memcpy_plt(v9[12], v166, v178 * (int)v169);
            }
            if (v162 != 0 ||
                (*(unsigned int (**)(_QWORD, _QWORD*, _QWORD*))(
                    *(_QWORD*)(v5 + 7688) + 336LL))(*v9, v9 + 1, v9 + 2) != 0 ||
                (*(unsigned int (**)(_QWORD, const char*, _QWORD*, char*))(
                    *(_QWORD*)(v5 + 7688) + 344LL))(*v9, "descriptorBaseArray",
                                                    v9 + 4, v175) != 0 ||
                (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD*))(
                    *(_QWORD*)(v5 + 7688) + 328LL))(*v9, 5, 8, v9 + 5) != 0 ||
                (*(unsigned int (**)(_QWORD, __int64, __int64, _QWORD*))(
                    *(_QWORD*)(v5 + 7688) + 328LL))(*v9, 7, 8, v9 + 3) != 0) {
              return 0;
            }
            *(_QWORD*)(v167 + 128) |= 0x100uLL;
            v164 = (atomic_uint*)(*(_QWORD*)(v167 + 8) + 7584LL);
            do {
              add = atomic_fetch_add(v164, 1u);
              *(_DWORD*)(v167 + 16) = add + 1;
            } while (add == -1);
            *((_DWORD*)v9 + 43) = *(_DWORD*)(v5 + 7632);
            v41 = *(unsigned int*)(a2 + 72);
            if ((_DWORD)v41 == 0) {
              return 1;
            }
            goto LABEL_48;
          }
          v121 = (char*)SdkData_e89e18;
        }
      }
      else {
        v121 = (char*)SdkData_e89dd0;
      }
      v120 = v170;
      v170[0] = v121 + 16;
      v170[1] = v115;
    }
    else {
      v120 = nullptr;
    }
    *(_QWORD*)&v171_.v172 = v120;
    goto LABEL_173;
  }
  v15 = *(unsigned int*)(a2 + 28);
  v171_.v174 = 0;
  *(_OWORD*)v170 = (__typeof__(*(_OWORD*)v170)){0};
  v171_.v171 = (__typeof__(v171_.v171)){0};
  v171_.v172 = (__typeof__(v171_.v172)){0};
  v171_.v173 = (__typeof__(v171_.v173)){0};
  if ((int)v15 >= 1) {
    v16 = *(_QWORD*)(a2 + 32);
    if ((unsigned int)v15 >= 4) {
      v29 = vdupq_n_s64(v16);
      v30 = COERCE_AS(int64x2_t, SdkData_bb2100);
      v31 = vdupq_n_s64(0x30u);
      v17 = v15 & 0x7FFFFFFC;
      v32 = v17;
      v33 = (int64x2_t*)&v171_.v171;
      v34 = vdupq_n_s64(4u);
      do {
        v32 -= 4;
        LANES128(v35).n128_u64[0] = 24 * LANES128(v30).n128_u64[0];
        v36 = LANES128(v30).n128_u64[1];
        v30 = vaddq_s64(v30, v34);
        LANES128(v35).n128_u64[1] = 24 * v36;
        v37 = vaddq_s64(v29, v35);
        v33[-1] = v37;
        *v33 = vaddq_s64(v37, v31);
        v33 += 2;
      } while (v32 != 0);
      if (v17 == v15) {
        goto LABEL_46;
      }
    }
    else {
      v17 = 0;
    }
    v38 = v15 - v17;
    v39 = v16 + 24LL * (unsigned int)v17;
    v40 = &v170[v17];
    do {
      *v40++ = v39;
      v39 += 24LL;
      --v38;
    } while (v38 != 0);
  }
LABEL_46:
  if ((unsigned __int8)nn_65fce0(a1, *(_DWORD*)(a2 + 40), *(_QWORD*)(a2 + 48),
                                 (unsigned __int64)v170) == 0) {
    return 0;
  }
  v41 = *(unsigned int*)(a2 + 72);
  if ((_DWORD)v41 == 0) {
    return 1;
  }
LABEL_48:
  v42 = *(__int64**)(a2 + 80);
  if (v42 == nullptr) {
    return 1;
  }
  v43 = *(_QWORD*)(v4 + 128);
  if ((v43 & 0x3FE00) == 0) {
    return 0;
  }
  if ((int)v41 >= 1) {
    v44 = 0;
    while (1) {
      v46 = *v42++;
      v45 = v46;
      if (v46 == 0) {
        break;
      }
      v47 = *(int*)(v45 + 4);
      if ((int)v47 > 5 ||
          ((1 << v47) & (*(_DWORD*)(v4 + 128) >> 9) & 0x1FF) == 0) {
        break;
      }
      --v41;
      *(_QWORD*)(v4 + 40 + 8 * v47) = v45;
      v44 |= 1 << v47;
      if (v41 == 0) {
        v43 = *(_QWORD*)(v4 + 128);
        return v44 == (((unsigned int)v43 >> 9) & 0x1FF);
      }
    }
    return 0;
  }
  v44 = 0;
  return v44 == (((unsigned int)v43 >> 9) & 0x1FF);
}

__int64 nn_6638a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v11;
  __int64 v12;
  int v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  int v38;

  v5 = *(_QWORD*)(a2 + 8);
  v11 = nn_os_LockMutex_plt_alt1(v5 + 2344);
  if (((*(_BYTE*)(a2 + 32) & 4) == 0 || (v12 = *(_QWORD*)(a2 + 24)) == 0 ||
       (*(_BYTE*)(v12 + 356) & 8) != 0) &&
      (SdkRoutine_663510(v11, a2) & 1) != 0) {
    memset_plt_alt1((void*)a1, nullptr, 11472);
    nn_os_LockMutex_plt_alt1(&SdkData_ea7c40);
    *(_QWORD*)(a1 + 16) = v5;
    v14 = *(_DWORD*)(a2 + 32);
    *(_QWORD*)(a1 + 40) = (char*)SdkData_e89e20 + 16;
    *(_DWORD*)(a1 + 356) = v14;
    *(_QWORD*)(a1 + 232) = 0;
    *(_BYTE*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_QWORD*)(a1 + 288) = 0;
    *(_DWORD*)(a1 + 304) = 0;
    *(_QWORD*)(a1 + 312) = 0;
    *(_QWORD*)(a1 + 260) = 0;
    *(_QWORD*)(a1 + 276) = 0;
    *(_QWORD*)(a1 + 268) = 0;
    *(_QWORD*)(a1 + 296) = 0xFFFFFFFFLL;
    *(_QWORD*)(a1 + 48) = 0;
    *(_BYTE*)(a1 + 7994) = 1;
    *(_DWORD*)(a1 + 256) = -1;
    if (*(_BYTE*)(a2 + 38) != 0) {
      v15 = *(_DWORD*)(a2 + 52);
      if (*(_DWORD*)(a2 + 60) != 0) {
      LABEL_7:
        v16 = *(_QWORD*)(a2 + 16);
      LABEL_11:
        if ((nn_66ef20(a1 + 40, a1, v16, v15, v5 + 2520, *(_QWORD*)(a2 + 24),
                       (_DWORD*)(a1 + 320)) &
             1) == 0) {
          goto LABEL_56;
        }
        v18 = *(_DWORD*)(a2 + 60);
        *(_WORD*)(a1 + 7896) = 0;
        v38 = 0;
        if (v18 == 0) {
          v15 = 0;
        }
        nn_65f540(v5 + 2520, (__int64)"NVN_DEBUG_ABORT_ON_GPU_FAULT", &v38);
        *(_BYTE*)(a1 + 7897) = v38 == 1;
        if ((*(_BYTE*)(a1 + 356) & 0x14) == 0) {
          SdkRoutine_66f5b0(a1 + 40, *(_DWORD*)(a2 + 68));
        }
        v19 = v16 + v15;
        v20 = *(int*)(a2 + 32) <= -1 ? 67108882 : 18;
        v21 = *(_BYTE*)(a2 + 36) != 0 ? *(int*)(a2 + 44) : 0x10000LL;
        *(_QWORD*)(a1 + 9520) = v21;
        *(_QWORD*)(a1 + 9528) = v21 >> 4;
        if (*(_BYTE*)(a2 + 40) != 0) {
          v22 = *(int*)(a2 + 64);
          if (v21 - 4 < v22) {
            v22 = v21 - 4;
          }
        }
        else {
          v22 = v21 >> 3;
        }
        *(_QWORD*)(a1 + 9536) = v22;
        if ((SdkRoutine_6641b0(a1 + 8000, v5, v19, v21, v20, a4) & 1) == 0) {
          goto LABEL_56;
        }
        *(_QWORD*)(a1 + 8080) = 0;
        v37 = a5;
        if (*(_DWORD*)(a2 + 60) != 0) {
          v19 += *(_QWORD*)(a1 + 9520);
        }
        nvidia_64afc0(a1 + 11240, v5);
        *(_BYTE*)(a1 + 11259) &= 0xF9u;
        *(_DWORD*)(a1 + 11344) = 63;
        nvidia_64b2a0(a1 + 11240, a1 + 9648, 512);
        *(_QWORD*)(a1 + 11440) = a1;
        SdkRoutine_6684f0((_QWORD*)(a1 + 8488), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8544), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8600), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8656), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8712), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8768), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8824), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8880), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8936), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 8992), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9048), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9104), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9160), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9216), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9272), v5);
        SdkRoutine_6684f0((_QWORD*)(a1 + 9328), v5);
        if ((unsigned __int8)SdkRoutine_6684f0((_QWORD*)(a1 + 7936), v5) == 0) {
          goto LABEL_56;
        }
        v23 = *(_BYTE*)(a1 + 10752);
        v24 = *(_QWORD*)(a1 + 9520);
        v36 = v19;
        *(_BYTE*)(a1 + 8452) = 0;
        *(_DWORD*)(a1 + 8456) = 0;
        *(_QWORD*)(a1 + 8464) = 0;
        *(_QWORD*)(a1 + 8472) = v5;
        *(_QWORD*)(a1 + 8480) = a1 + 8488;
        *(_QWORD*)(a1 + 8312) = 0;
        *(_BYTE*)(a1 + 8344) = 0;
        *(_QWORD*)(a1 + 8352) = 0;
        *(_DWORD*)(a1 + 8448) = 16;
        v25 = *(_QWORD*)(a1 + 9536);
        v26 = v24 - 4;
        *(_QWORD*)(a1 + 8304) = v24;
        *(_QWORD*)(a1 + 8336) = v24;
        *(_QWORD*)(a1 + 8288) = a1 + 8432;
        *(_QWORD*)(a1 + 8296) = 0;
        *(_BYTE*)(a1 + 10752) = v23 | 1;
        *(_OWORD*)(a1 + 8432) = SdkData_bb3c60;
        *(_OWORD*)(a1 + 8320) = (__typeof__(*(_OWORD*)(a1 + 8320))){0};
        v27 = (char*)SdkData_e89e28;
        *(_QWORD*)(a1 + 8360) = a1 + 9384;
        *(_DWORD*)(a1 + 8368) = 16;
        *(_DWORD*)(a1 + 8384) = 0;
        *(_OWORD*)(a1 + 9384) = (__typeof__(*(_OWORD*)(a1 + 9384))){0};
        *(_OWORD*)(a1 + 9400) = (__typeof__(*(_OWORD*)(a1 + 9400))){0};
        *(_OWORD*)(a1 + 9416) = (__typeof__(*(_OWORD*)(a1 + 9416))){0};
        *(_OWORD*)(a1 + 9432) = (__typeof__(*(_OWORD*)(a1 + 9432))){0};
        *(_QWORD*)(a1 + 8280) = v27 + 16;
        *(_OWORD*)(a1 + 9448) = (__typeof__(*(_OWORD*)(a1 + 9448))){0};
        *(_OWORD*)(a1 + 9464) = (__typeof__(*(_OWORD*)(a1 + 9464))){0};
        *(_QWORD*)(a1 + 8376) = -4;
        *(_OWORD*)(a1 + 9480) = (__typeof__(*(_OWORD*)(a1 + 9480))){0};
        *(_OWORD*)(a1 + 9496) = (__typeof__(*(_OWORD*)(a1 + 9496))){0};
        SdkRoutine_653ca0(a1 + 8432, a1 + 8280);
        v28 = (char*)SdkData_e89e30;
        *(_QWORD*)(a1 + 8392) = a1 + 11240;
        *(_QWORD*)(a1 + 8400) = a1 + 8000;
        *(_QWORD*)(a1 + 8424) = v25;
        *(_QWORD*)(a1 + 8280) = v28 + 16;
        *(_OWORD*)(a1 + 8408) = (__typeof__(*(_OWORD*)(a1 + 8408))){0};
        if (v26 != 0) {
          v29 = SdkRoutine_666a60((__int64*)(a1 + 8304),
                                  (unsigned __int64*)(a1 + 8408), v26, 1);
          SdkRoutine_64b0b0(*(_QWORD**)(a1 + 8392), *(_QWORD*)(a1 + 8400),
                            *(_QWORD*)(a1 + 8408), *(_QWORD*)(a1 + 8376) & v29);
        }
        *(_BYTE*)(a1 + 10752) |= 2u;
        SdkRoutine_64b060(a1 + 11240, SdkData_e89e38[0]);
        SdkRoutine_64b070(a1 + 11240, a1);
        nvidia_64b420((__int64*)(a1 + 11240));
        v30 = *(_QWORD*)(a1 + 11320);
        *(_BYTE*)(a1 + 11449) = 0;
        *(_QWORD*)(a1 + 11320) = v30 + 16;
        if ((*(_BYTE*)(a1 + 356) & 0x10) == 0) {
          if (*(int*)(a2 + 32) <= -1) {
            v31 = 67108897;
          }
          else {
            v31 = 33;
          }
          SdkRoutine_664480(a1 + 10760, v5, a2);
          if ((SdkRoutine_6641b0(a1 + 10760, v5, v36,
                                 *(unsigned int*)(a1 + 11036), v31, a3) &
               1) == 0) {
            goto LABEL_56;
          }
          *(_QWORD*)(a1 + 10840) = 0;
          v32 = *(int*)(a2 + 60);
          if ((_DWORD)v32 != 0 &&
              v36 + (unsigned __int64)*(unsigned int*)(a1 + 11036) >
                  *(_QWORD*)(a2 + 16) + v32) {
            goto LABEL_56;
          }
          if (*(_DWORD*)(a1 + 11100) != 0 &&
              !SdkRoutine_66f380(a1 + 40, *(_QWORD*)(a1 + 10784) +
                                              *(unsigned int*)(a1 + 11096))) {
            goto LABEL_56;
          }
          if (*(_QWORD*)(v5 + 7688) != 0) {
            nn_66fe20((int64x2_t*)a1);
          }
          *(_DWORD*)(a1 + 9608) = 0;
          *(_OWORD*)(a1 + 9544) = (__typeof__(*(_OWORD*)(a1 + 9544))){0};
          *(_OWORD*)(a1 + 9560) = (__typeof__(*(_OWORD*)(a1 + 9560))){0};
          *(_OWORD*)(a1 + 9576) = (__typeof__(*(_OWORD*)(a1 + 9576))){0};
          *(_OWORD*)(a1 + 9592) = (__typeof__(*(_OWORD*)(a1 + 9592))){0};
          SdkRoutine_6684e0((_QWORD*)(a1 + 9616), v5);
        }
        SdkRoutine_689f90(a1);
        v33 = *(_DWORD*)(a1 + 356);
        if ((v33 & 4) != 0) {
          *(_DWORD*)(a1 + 11264) = 1;
          v34 = *(_QWORD*)(a2 + 24);
          *(_QWORD*)(a1 + 7920) = v34;
          if ((*(_BYTE*)(v34 + 356) & 8) != 0) {
            ++*(_BYTE*)(v34 + 7928);
          }
        }
        else if ((v33 & 0x10) != 0) {
          *(_DWORD*)(a1 + 11264) = 2;
          ++*(_BYTE*)(v5 + 7808);
        }
        else {
          *(_DWORD*)(a1 + 11264) = 0;
        }
        graphics_68f9e0(a1);
        nn_6646b0(a1);
        *(_BYTE*)(a1 + 11450) = 1;
        *(_QWORD*)(v5 + 8LL * *(int*)(a1 + 320) + 296) = a1;
        if ((*(_BYTE*)(a1 + 356) & 0x10) != 0 ||
            (*(_OWORD*)(a1 + 11144) = 0u, *(_OWORD*)(a1 + 11160) = 0u,
             *(_OWORD*)(a1 + 11176) = 0u, *(_OWORD*)(a1 + 11192) = 0u,
             *(_OWORD*)(a1 + 11128) = 0u, *(_OWORD*)(a1 + 11208) = 0u,
             *(_OWORD*)(a1 + 11224) = 0u,
             (SdkRoutine_688f20((__int64*)(a1 + 11128), a1, v37) & 1) != 0)) {
          SdkRoutine_664890(a1);
          *(_WORD*)(a1 + 7992) = -1;
          if ((*(_BYTE*)(a1 + 356) & 0xC) != 0) {
            SdkRoutine_6649b0(a1);
          }
          v17 = 1;
          goto LABEL_57;
        }
      LABEL_56:
        SdkRoutine_663fa0(a1);
        v17 = 0;
      LABEL_57:
        nn_os_UnlockMutex_plt_alt1(&SdkData_ea7c40);
        goto LABEL_58;
      }
    }
    else {
      v15 = 0x4000;
      if (*(_DWORD*)(a2 + 60) != 0) {
        goto LABEL_7;
      }
    }
    v16 = 0;
    goto LABEL_11;
  }
  v17 = 0;
LABEL_58:
  nn_os_UnlockMutex_plt_alt1(v5 + 2344);
  return v17;
}

__int64 nn_6646b0(__int64 a1)
{
  __int64 result;
  _BYTE* v3;
  _BYTE* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;

  result = SdkRoutine_69a140(a1 + 11240, 1, 0);
  if ((*(_BYTE*)(a1 + 356) & 0x10) == 0) {
    result = nn_696650(a1 + 11240, 0x80000070);
  }
  v3 = *(_BYTE**)(a1 + 11240);
  if ((unsigned __int64)(v3 + 4) > *(_QWORD*)(a1 + 11248)) {
    result =
        SdkRoutine_64b750(a1 + 11240, (__int64)v3,
                          4LL * (unsigned int)(*(_DWORD*)(a1 + 11344) + 1));
    v3 = *(_BYTE**)(a1 + 11240);
  }
  *(_QWORD*)(a1 + 9512) = v3;
  *v3 = 0;
  v4 = *(_BYTE**)(a1 + 11312);
  *(_QWORD*)(a1 + 11240) = v3;
  v5 = v3 - v4;
  if (v3 != v4) {
    v6 = *(_QWORD*)(a1 + 11336);
    *(_QWORD*)(a1 + 11312) = v3;
    v7 = *(_QWORD*)(a1 + 11280);
    v8 = v5 >> 2;
    v9 = &v4[v6];
    v10 = *(_QWORD*)(a1 + 11296);
    if ((unsigned __int64)(v7 + 32) > *(_QWORD*)(a1 + 11288)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
      v7 = *(_QWORD*)(a1 + 11280);
    }
    v11 = *(_QWORD*)(a1 + 11328);
    if (v11 != 0) {
      *(_DWORD*)(v11 + 4) =
          (((unsigned __int64)*(unsigned int*)(v11 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 24) = 0;
      *(_QWORD*)v7 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v7;
      v7 += 8;
    }
    *(_QWORD*)v7 = &v9[-v10];
    *(_QWORD*)(v7 + 8) = v4;
    *(_DWORD*)(v7 + 16) = v8;
    *(_BYTE*)(v7 + 20) = 1;
    v12 = v7 + 24;
    v3 = *(_BYTE**)(a1 + 11240);
    *(_QWORD*)(a1 + 11280) = v12;
  }
  *(_DWORD*)v3 = 0;
  v13 = v3 + 4;
  v14 = *(_BYTE**)(a1 + 11312);
  v15 = v13 - v14;
  if (v13 != v14) {
    v16 = *(_QWORD*)(a1 + 11336);
    *(_QWORD*)(a1 + 11240) = v13;
    *(_QWORD*)(a1 + 11312) = v13;
    v17 = *(_QWORD*)(a1 + 11280);
    v18 = v15 >> 2;
    v19 = &v14[v16];
    v20 = *(_QWORD*)(a1 + 11296);
    if ((unsigned __int64)(v17 + 32) > *(_QWORD*)(a1 + 11288)) {
      result = ((__int64 (*)(__int64))SdkRoutine_64b940)(a1 + 11240);
      v17 = *(_QWORD*)(a1 + 11280);
    }
    v21 = *(_QWORD*)(a1 + 11328);
    if (v21 != 0) {
      *(_DWORD*)(v21 + 4) =
          (((unsigned __int64)*(unsigned int*)(v21 + 4) << 32) +
           0x100000000LL) >>
          32;
    }
    else {
      *(_QWORD*)(v17 + 8) = 0;
      *(_QWORD*)(v17 + 16) = 0;
      *(_QWORD*)(v17 + 24) = 0;
      *(_QWORD*)v17 = 0x100000003LL;
      *(_QWORD*)(a1 + 11328) = v17;
      v17 += 8;
    }
    *(_QWORD*)v17 = &v19[-v20];
    *(_QWORD*)(v17 + 8) = v14;
    *(_DWORD*)(v17 + 16) = v18;
    *(_BYTE*)(v17 + 20) = 7;
    *(_QWORD*)(a1 + 11280) = v17 + 24;
  }
  return result;
}

__int64 nn_664e30(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  long double v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  struct {
    _DWORD v12[4];
    int v13;
  } v12_;
  __int128 v14;

  v2 = *(_QWORD*)(a1 + 16);
  if (*(_QWORD*)(v2 + 7688) != 0 && (*(_BYTE*)(a1 + 356) & 0x10) == 0 &&
      *(_QWORD*)(v2 + 7704) != 0) {
    SdkRoutine_653f40(*(int**)(a1 + 10440), 0);
  }
  v14 = (__typeof__(v14)){0};
  v6 = SdkRoutine_66f3d0(a1 + 40, &v14);
  if (HIWORD(v14) != 0) {
    v7 = *(int*)(a1 + 320);
    *(_BYTE*)(a1 + 24) = 1;
    v8 = *(_QWORD*)(a1 + 16);
    v9 = *(_QWORD*)(v8 + 7232);
    if (*(_DWORD*)v9 == 0 && (*(_BYTE*)(v9 + 16) & 1) != 0) {
      v10 = 0;
    }
    else {
      v10 = *(_QWORD*)(v9 + 48);
    }
    *(_DWORD*)(v10 + 16 * v7) = *(_QWORD*)(v8 + 16 * v7 + 3128);
    if (*(_BYTE*)(a1 + 7897) == 1) {
      abort_plt();
    }
  }
  if (*(_BYTE*)(a1 + 24) != 1) {
    return 0;
  }
  if ((unsigned int)NvRmGpuChannelGetErrorInfo_plt(*(_QWORD*)(a1 + 48),
                                                   v12_.v12, v6) != 0) {
    return 1;
  }
  result = 1;
  if ((signed __int32)v12_.v12[0] <= 2) {
    result = v12_.v12[0];
    if (v12_.v12[0] != 0) {
      result = 1;
      if (v12_.v12[0] == 2) {
        if (a2 != 0) {
          *(_QWORD*)a2 = v12_.v12[3] | ((unsigned __int64)v12_.v12[2] << 32);
          if (v12_.v13 == 1) {
            *(_DWORD*)(a2 + 8) = 1;
          }
          else if (v12_.v13 == 0) {
            *(_DWORD*)(a2 + 8) = 0;
            return 2;
          }
        }
        return 2;
      }
    }
  }
  else {
    switch (v12_.v12[0]) {
    case 3:
      return 4;
    case 4:
      return 3;
    case 5:
      return 5;
    default:
      break;
    }
  }
  return result;
}

__int64 nn_668260(__int64 result, int a2, unsigned int a3, unsigned __int64 a4,
                  double a5, float32x4_t a6)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float* v11;
  unsigned int v12;
  __int64 v13;
  float* v14;
  unsigned __int8* v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int8x16_t v20;
  float* v21;
  __int64 v22;
  int32x4_t v23;
  int8x16_t* v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float* v28;
  float* v29;
  __int64 v30;
  float* v31;
  __int64 v32;
  int32x4_t v33;
  unsigned __int32* v34;
  unsigned __int32 v35;
  uint32x4_t v36;
  float32x4x2_t v37;
  float32x4x2_t v38;
  float32x4x2_t v39;
  float32x4x2_t v40;

  if ((int)a3 < 1) {
    return result;
  }
  v6 = result + a2 + 4;
  if (a3 > 3 &&
      (a4 < result + a2 + (unsigned __int64)a3 + 4 ? (v7 = v6 >= a4 + 8LL * a3)
                                                   : (v7 = true),
       v7)) {
    if (a3 >= 0x10) {
      LANES128(v20).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v20).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      v8 = a3 & 0x7FFFFFF0;
      v21 = (float*)a4;
      LANES128(a6).n128_u32[1] = -243;
      v22 = v8;
      v23 = vdupq_n_s32(0x3D800000u);
      v24 = (int8x16_t*)(result + a2 + 4);
      do {
        v25 = *v24++;
        v22 -= 16;
        v26 = vandq_s8(v25, v20);
        v27 = vshrq_n_u8(v25, 4u);
        v40.val[0] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v26, COERCE_AS(int8x16_t, SdkData_bb0fb0))),
                               v23);
        v40.val[1] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v27, COERCE_AS(int8x16_t, SdkData_bb0fb0))),
                               v23);
        v38.val[0] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v26, COERCE_AS(int8x16_t, SdkData_bb3ab0))),
                               v23);
        v38.val[1] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v27, COERCE_AS(int8x16_t, SdkData_bb3ab0))),
                               v23);
        v39.val[0] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v26, COERCE_AS(int8x16_t, SdkData_bb2a60))),
                               v23);
        v39.val[1] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v27, COERCE_AS(int8x16_t, SdkData_bb2a60))),
                               v23);
        vst2q_f32(v21, v39);
        v28 = v21 + 8;
        vst2q_f32(v21 + 16, v38);
        v38.val[0] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v26, COERCE_AS(int8x16_t, SdkData_bb4ac0))),
                               v23);
        v38.val[1] = vmulq_f32(vcvtq_f32_u32(vqtbl1q_s8(
                                   v27, COERCE_AS(int8x16_t, SdkData_bb4ac0))),
                               v23);
        v29 = v21 + 24;
        v21 += 32;
        vst2q_f32(v29, v40);
        vst2q_f32(v28, v38);
      } while (v22 != 0);
      if (v8 == a3) {
        return result;
      }
      if ((a3 & 0xC) == 0) {
        goto LABEL_11;
      }
    }
    else {
      v8 = 0;
    }
    v30 = v8;
    v8 = a3 & 0x7FFFFFFC;
    v31 = (float*)(a4 + 8 * v30);
    v32 = v30 - v8;
    v33 = vdupq_n_s32(0x3D800000u);
    v34 = (unsigned __int32*)(v30 + result + a2 + 4);
    do {
      v35 = *v34++;
      LANES128(a6).n128_u32[0] = v35;
      v32 += 4;
      v36 = vmovl_u16(COERCE_AS(
          uint16x4_t,
          LANES128_OF(vmovl_u8(COERCE_AS(uint8x8_t, LANES128(a6).n128_u64[0])))
              .n128_u64[0]));
      v37.val[0] =
          vmulq_f32(vcvtq_f32_u32(COERCE_AS(
                        uint32x4_t,
                        (*(_OWORD*)&v36 & __PAIR128__(0xFFFFFF0FFFFFFF0FLL,
                                                      0xFFFFFF0FFFFFFF0FLL)))),
                    v33);
      a6 = vcvtq_f32_u32(vshrq_n_u32(v36, 4u));
      v37.val[1] = vmulq_f32(a6, v33);
      vst2q_f32(v31, v37);
      v31 += 8;
    } while (v32 != 0);
    if (v8 == a3) {
      return result;
    }
  }
  else {
    v8 = 0;
  }
LABEL_11:
  v9 = a3 & 3;
  v10 = v8;
  if (v9 != 0) {
    v11 = (float*)(a4 + 8 * v8 + 4);
    v10 = v8;
    do {
      v12 = *(unsigned __int8*)(v6 + v10++);
      --v9;
      *(v11 - 1) = vcvts_n_f32_u32(v12 & 0xF, 4u);
      *v11 = vcvts_n_f32_u32(v12 >> 4, 4u);
      v11 += 2;
    } while (v9 != 0);
  }
  if (v8 - (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFCLL) {
    v13 = a3 - v10;
    v14 = (float*)(a4 + 8 * v10 + 16);
    v15 = (unsigned __int8*)(v10 + a2 + result + 7);
    do {
      v16 = *(v15 - 3);
      v13 -= 4;
      *(v14 - 4) = vcvts_n_f32_u32(v16 & 0xF, 4u);
      *(v14 - 3) = vcvts_n_f32_u32(v16 >> 4, 4u);
      v17 = *(v15 - 2);
      *(v14 - 2) = vcvts_n_f32_u32(v17 & 0xF, 4u);
      *(v14 - 1) = vcvts_n_f32_u32(v17 >> 4, 4u);
      v18 = *(v15 - 1);
      *v14 = vcvts_n_f32_u32(v18 & 0xF, 4u);
      v14[1] = vcvts_n_f32_u32(v18 >> 4, 4u);
      v19 = *v15;
      v15 += 4;
      v14[2] = vcvts_n_f32_u32(v19 & 0xF, 4u);
      v14[3] = vcvts_n_f32_u32(v19 >> 4, 4u);
      v14 += 8;
    } while (v13 != 0);
  }
  return result;
}

__int64 nn_669e30(__int64 a1)
{
  __int64 result;

  if ((*(_BYTE*)(a1 + 32) & 0x50) != 0) {
    return 1;
  }
  result = *(unsigned int*)(a1 + 56);
  if ((int)result > 50) {
    if ((_DWORD)result == 51 || (_DWORD)result == 53) {
      return 4;
    }
    if ((_DWORD)result == 54) {
      return 5;
    }
    return 2;
  }
  if ((unsigned int)(result - 49) < 2) {
    return 3;
  }
  if ((_DWORD)result != 0) {
    return 2;
  }
  return result;
}

__int64 nn_66a170(unsigned __int16* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int16 v5;
  int v6;
  int v7;
  int v8;
  char* v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  __int64 result;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned __int16 v25;
  __int64 v26;
  int v27;
  __int16 v28;
  __int64 v29;
  int v30;
  int v31;
  unsigned __int8* v32;
  char v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  struct {
    int v37[10];
    int v38;
  } v37_;

  v2 = *(_QWORD*)(a2 + 8);
  *((_DWORD*)a1 + 8) = *(_DWORD*)(a2 + 40);
  v5 = *(_DWORD*)(a2 + 44);
  a1[18] = v5;
  v6 = v5;
  *((_DWORD*)a1 + 9) = v5 | ((unsigned __int16)*(_DWORD*)(a2 + 48) << 16);
  v7 = *(_DWORD*)(a2 + 36);
  if (v7 == 8) {
    v8 = v6 | 0x60000;
  }
  else {
    if (v7 != 3) {
      goto LABEL_6;
    }
    v8 = (v6 << 16) | 1;
  }
  *((_DWORD*)a1 + 9) = v8;
LABEL_6:
  v9 = (char*)SdkData_e89ba0;
  v10 = (unsigned __int8*)SdkData_e89ba0 + 48 * *(int*)(a2 + 56);
  v11 = *(_QWORD*)a1 & 0xFFFFFFFFFFFFFF00LL;
  v12 = v10[16];
  *((_BYTE*)a1 + 12) = v12;
  v13 = v11 | v10[8];
  *(_QWORD*)a1 = v13;
  *(_QWORD*)a1 = v13 & 0xFFFFFFFFFFFF00FFLL | ((unsigned __int64)v10[9] << 8);
  result = nn_65ce80(v12);
  v15 = *((_DWORD*)a1 + 3);
  *((_DWORD*)a1 + 3) = v15 & 0xFFFF80FF | ((result & 0x7F) << 8);
  v16 = *(_DWORD*)(a2 + 60);
  if (v16 > 7) {
    if (v16 == 8) {
      v17 = 17432576;
      goto LABEL_16;
    }
    if (v16 == 16) {
      v17 = 34734080;
      goto LABEL_16;
    }
  }
  else {
    if ((unsigned int)(v16 - 1) < 2) {
      v17 = 4521984;
      goto LABEL_16;
    }
    if (v16 == 4) {
      v17 = 8978432;
      goto LABEL_16;
    }
  }
  v17 = 294912;
LABEL_16:
  v18 = v15 & 0xF80000FF | ((result & 0x7F) << 8) & 0x7FFF | v17;
  *((_DWORD*)a1 + 3) = v18;
  v19 = *(_DWORD*)(a2 + 36);
  if (v19 == 10) {
    v20 = *((_DWORD*)a1 + 8);
    *((_BYTE*)a1 + 42) = 0;
    a1[20] = 0;
    v21 = (unsigned int)(unsigned __int8)v15 * v20;
    *(_QWORD*)a1 = *a1 | ((unsigned __int64)(unsigned int)v21 << 16);
    *((_DWORD*)a1 + 3) = v18 & 0x3DFFFFF | 0x8000000;
    v22 = (v21 << 16) | 1;
  LABEL_43:
    *((_QWORD*)a1 + 2) = v22;
    return result;
  }
  v23 = *(_DWORD*)(a2 + 32);
  if ((v23 & 0x50) != 0) {
    v24 = *(_DWORD*)(a2 + 88);
    v25 = *a1;
    v26 = (unsigned int)a1[18] * v24;
    *((_BYTE*)a1 + 42) = 0;
    a1[20] = 0;
    *(_QWORD*)a1 = v25 | ((unsigned __int64)(unsigned int)v26 << 16);
    *((_DWORD*)a1 + 2) = v24;
    *((_DWORD*)a1 + 3) = v18 & 0x3DFFFFF | 0x8000000;
    v22 = (v26 << 16) | 2;
    goto LABEL_43;
  }
  if ((unsigned int)(v19 - 5) < 3) {
    v27 = 1;
  }
  else {
    v27 = *(_DWORD*)(a2 + 52);
  }
  nvidia_6474d0((__int64)v37_.v37, v23, v19, (unsigned __int8)v15,
                *(_DWORD*)(a2 + 60), (unsigned __int8)*(_DWORD*)a1,
                BYTE1(*(_DWORD*)a1), v27, *((_DWORD*)a1 + 8),
                (unsigned __int16)*((_DWORD*)a1 + 9),
                HIWORD(*((_DWORD*)a1 + 9)));
  *((_DWORD*)a1 + 3) =
      *((_DWORD*)a1 + 3) & 0x7FFFFFF | ((unsigned __int8)v27 << 27);
  *((_BYTE*)a1 + 16) = v37_.v38;
  v28 = *(_WORD*)(a2 + 84);
  if ((v28 & 0xF) != 0) {
    *((_BYTE*)a1 + 41) = (unsigned __int8)v28 >> 4;
    *((_BYTE*)a1 + 42) = *(_BYTE*)(a2 + 85) & 0xF;
    *((_BYTE*)a1 + 40) = *(unsigned __int16*)(a2 + 84) >> 12;
  }
  else {
    nvidia_647580(v37_.v37, (__int64)(a1 + 20));
  }
  v29 = *(_QWORD*)(a2 + 8);
  if (*(_DWORD*)(a2 + 36) == 10 || ((v30 = *(_DWORD*)(a2 + 32)) & 0x50) != 0) {
    v34 = *(_DWORD*)(v29 + 7576);
    goto LABEL_38;
  }
  v31 = *(_DWORD*)(a2 + 56);
  if ((v30 & 8) == 0 || *(_BYTE*)(v29 + 7580) != 1) {
  LABEL_36:
    v33 = 0;
    goto LABEL_37;
  }
  v32 = (unsigned __int8*)&v9[48 * v31];
  if (v32[14] == 0 && v32[15] == 0) {
    if (v32[8] <= 1u && *(_DWORD*)(v29 + 7280) != 1981175382) {
      v33 = 1;
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v33 = *(_DWORD*)(v29 + 7284) != 1981175382;
LABEL_37:
  LOBYTE(v34) = nn_65f400(v29 + 2520, v31, *(_DWORD*)(a2 + 60), v33,
                          (*(_DWORD*)(a2 + 32) & 0x1000) != 0);
LABEL_38:
  *((_BYTE*)a1 + 17) = v34;
  result = nvidia_647940(v37_.v37, (_BYTE*)a1 + 40);
  v35 = result << 16;
  *(_QWORD*)a1 = *a1 | (unsigned __int64)(result << 16);
  if (*(_DWORD*)(a2 + 36) == 2) {
    v36 = a1[8] | (unsigned __int64)v35;
  }
  else {
    v36 = (v35 * a1[19]) | a1[8];
  }
  *((_QWORD*)a1 + 2) = v36;
  if (*(_DWORD*)(v2 + 7576) != BYTE1(v36)) {
    v22 = (unsigned __int16)v36 |
          (((*(unsigned int*)(v2 + 212) + (v36 >> 16) - 1) &
            -(__int64)*(unsigned int*)(v2 + 212))
           << 16);
    goto LABEL_43;
  }
  return result;
}

__int64 nn_66aaa0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;
  unsigned __int16* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _BYTE* v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int8 v38;
  unsigned __int8* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned __int64 v53;
  unsigned int v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  int v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  struct {
    __int64 v68;
    unsigned int v69;
    __int16 v70;
    char gap14_[2];
    unsigned int v71;
    unsigned __int16 v72;
    char gap22_[2];
    unsigned int v73;
    unsigned __int8 v74;
    char gap29_[3];
    int v75;
    unsigned int v76;
    unsigned int v77;
    unsigned int v78;
    unsigned int v79;
    int v80;
    int v81;
    char v82;
    char gap61_[3];
    __int64 v83;
    unsigned int v84;
  } v68_;

  *(_OWORD*)a1 = (__typeof__(*(_OWORD*)a1)){0};
  *(_OWORD*)(a1 + 16) = (__typeof__(*(_OWORD*)(a1 + 16))){0};
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  *(_OWORD*)(a1 + 96) = (__typeof__(*(_OWORD*)(a1 + 96))){0};
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_WORD*)(a1 + 120) = -1;
  if (*(_DWORD*)(a2 + 92) != 0) {
    *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
    v4 = SdkRoutine_656170();
    if (((*(__int64 (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v4 + 16LL))(
             v4, &v68_.v68, *(unsigned int*)(a2 + 92)) &
         1) != 0) {
      v5 = v68_.v69;
      v6 = *(_QWORD*)(a1 + 40) & 0xFFFFFFFFFE00FFFFLL |
           ((unsigned __int64)(v68_.v70 & 0x1FF) << 16);
      *(_QWORD*)(a1 + 40) = v6;
      switch (v5) {
      case 0LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL;
        v8 = 1;
        goto LABEL_32;
      case 1LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0x2000000;
        goto LABEL_31;
      case 2LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0x4000000;
        v8 = 3;
        goto LABEL_32;
      case 3LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0x6000000;
        v8 = 1;
        goto LABEL_32;
      case 4LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0x8000000;
        goto LABEL_31;
      case 5LL:
        v34 = 5;
        goto LABEL_28;
      case 6LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0xC000000;
        goto LABEL_31;
      case 7LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0xE000000;
        goto LABEL_31;
      case 8LL:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | 0x10000000;
        goto LABEL_31;
      case 9LL:
        v34 = 9;
      LABEL_28:
        v7 = v6 & 0xFFFFFFFF01FFFFFFLL | ((unsigned __int64)(v34 & 0x7F) << 25);
      LABEL_31:
        v8 = 2;
      LABEL_32:
        *(_QWORD*)(a1 + 40) = v7;
        *(_BYTE*)(a1 + 88) = v8;
        v35 = (__int64)(v7 << 39) >> 55;
        v36 = v7 & 0xFFFF7FFFFFFFFFFFLL;
        result = 0;
        v37 = v68_.v73;
        v38 = v68_.v74;
        v39 = (unsigned __int8*)SdkData_e89ba0 + 48 * (int)v35;
        v40 = *(_QWORD*)(a1 + 72) & 0xFFFFFFFFFFFFFF00LL | v39[8];
        *(_QWORD*)(a1 + 72) = v40;
        v41 = v40 & 0xFFFFFFFFFFFF00FFLL | ((unsigned __int64)v39[9] << 8);
        *(_QWORD*)(a1 + 72) = v41;
        v42 = 0x800000000000LL;
        if (v39[15] == 0) {
          v42 = 0;
        }
        v43 = v42 | v36;
        *(_QWORD*)(a1 + 40) = v43;
        v44 = v43 & 0xFFFFBFFFFFFFFFFFLL;
        v45 = v68_.v72;
        v28 = v39[14] == 0;
        v46 = 0x400000000000LL;
        if (v28) {
          v46 = 0;
        }
        v47 = v44 | v46;
        v48 = v68_.v71 | ((unsigned __int64)v68_.v72 << 32) | (v37 << 48);
        *(_DWORD*)(a1 + 104) = v68_.v71;
        *(_DWORD*)(a1 + 108) = v45 | ((_DWORD)v37 << 16);
        v49 = *(_DWORD*)(a1 + 84);
        v50 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)(a1 + 32) = v48;
        *(_QWORD*)(a1 + 40) = v47;
        v51 = v49 & 0x7FFFFFF | (v38 << 27);
        HIDWORD(v53) = v68_.v75;
        LODWORD(v53) = v68_.v75;
        v52 = v53 >> 1;
        *(_DWORD*)(a1 + 84) = v51;
        *(_QWORD*)(a1 + 24) =
            v50 & 0xFF00FFFFFFFFFFFFLL | ((unsigned __int64)(v38 & 0x1F) << 48);
        if (v52 > 1) {
          switch (v52) {
          case 2:
            v54 = v51 & 0xF8007FFF | 0x890000;
            v55 = 0x400000000000000LL;
            break;
          case 4:
            v54 = v51 & 0xF8007FFF | 0x10A0000;
            v55 = 0x800000000000000LL;
            break;
          case 8:
            v54 = v51 & 0xF8007FFF | 0x2120000;
            v55 = 0x1000000000000000LL;
            break;
          default:
            return result;
          }
        LABEL_46:
          *(_DWORD*)(a1 + 84) = v54;
          v56 = v55 & 0xFFE0000000000000LL | v50 & 0xFFFFFFFFFFFFLL |
                ((unsigned __int64)(v38 & 0x1F) << 48) & 0x1FFFFFFFFFFFFFLL;
          goto LABEL_47;
        }
        if (v52 != 0) {
          if (v52 != 1) {
            return result;
          }
          v54 = v51 & 0xF8007FFF | 0x450000;
          v55 = 0x200000000000000LL;
          goto LABEL_46;
        }
        v54 = v51 & 0xF8007FFF | 0x48000;
        v56 = v50 & 0xFFFFFFFFFFFFLL |
              ((unsigned __int64)(v38 & 0x1F) << 48) & 0x1FFFFFFFFFFFFFLL;
        *(_DWORD*)(a1 + 84) = v54;
      LABEL_47:
        v57 = v68_.v76;
        *(_QWORD*)(a1 + 24) = v56;
        if ((unsigned int)v57 > 5 || v68_.v77 > 5 || v68_.v78 > 5 ||
            v68_.v79 > 5) {
          return 0;
        }
        v58 = v47 & 0xFFFFF000FFFFFFFFLL | (v57 << 32);
        v59 = v68_.v80;
        v60 = v58 | ((unsigned __int64)v68_.v77 << 35) |
              ((unsigned __int64)v68_.v78 << 38) |
              ((unsigned __int64)v68_.v79 << 41);
        *(_QWORD*)(a1 + 40) = v60;
        if (v59 == 1) {
          v61 = v60 & 0xFFFFCFFFFFFFFFFFLL | 0x100000000000LL;
        }
        else {
          if (v59 != 0) {
            return 0;
          }
          v61 = v60 & 0xFFFFCFFFFFFFFFFFLL;
        }
        *(_QWORD*)(a1 + 40) = v61;
        v62 = v68_.v82;
        v63 = v68_.v84;
        v64 = v54 & 0xFFFFFF00 | (unsigned __int8)v68_.v84;
        *(_BYTE*)(a1 + 113) = v68_.v81;
        v65 = v68_.v83;
        *(_BYTE*)(a1 + 114) = v62;
        *(_DWORD*)(a1 + 84) = v64;
        *(_QWORD*)(a1 + 72) =
            (unsigned __int16)v41 | (unsigned __int64)(v65 << 16);
        *(_DWORD*)(a1 + 84) =
            *(_DWORD*)(a1 + 84) & 0xFFFF80FF | ((nn_65ce80(v63) & 0x7F) << 8);
        if (v68_.v69 == 2) {
          v66 = *(unsigned __int16*)(a1 + 88) |
                *(_QWORD*)(a1 + 72) & 0xFFFFFFFFFFFF0000LL;
        }
        else {
          v66 = *(unsigned __int16*)(a1 + 88) |
                ((*(unsigned __int16*)(a1 + 110) * (*(_QWORD*)(a1 + 72) >> 16))
                 << 16);
        }
        v67 = v68_.v68;
        *(_QWORD*)(a1 + 88) = v66;
        *(_QWORD*)(a1 + 96) = v67;
        break;
      default:
        return 0;
      }
      return 1;
    }
  }
  else if ((*(_BYTE*)(*(_QWORD*)(a2 + 16) + 17LL) & 1) == 0) {
    v9 = (unsigned __int16*)(a1 + 72);
    *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
    v10 = *(_QWORD*)(a2 + 24) & 0xFFFFFFFFFFFFLL;
    *(_QWORD*)(a1 + 24) = v10;
    v11 = *(unsigned __int16*)(a2 + 32);
    *(_QWORD*)(a1 + 40) = v11;
    v12 = (unsigned int)v11 | (*(_DWORD*)(a2 + 36) << 25);
    *(_QWORD*)(a1 + 40) = v12;
    v13 = *(unsigned int*)(a2 + 40);
    *(_QWORD*)(a1 + 32) = v13;
    v14 = v13 | ((unsigned __int64)*(unsigned __int16*)(a2 + 44) << 32);
    *(_QWORD*)(a1 + 32) = v14;
    *(_QWORD*)(a1 + 32) =
        v14 | ((unsigned __int64)*(unsigned int*)(a2 + 48) << 48);
    v15 = v10 | ((unsigned __int64)*(unsigned __int8*)(a2 + 52) << 48);
    *(_QWORD*)(a1 + 24) = v15;
    LODWORD(v14) = *(_DWORD*)(a2 + 56);
    v16 = (unsigned int)v12 & 0xFE00FFFF | ((v14 & 0x1FF) << 16);
    *(_QWORD*)(a1 + 40) = v16;
    *(_QWORD*)(a1 + 24) =
        v15 | ((unsigned __int64)*(unsigned int*)(a2 + 60) << 56);
    v17 = v16 | ((unsigned __int64)(*(_DWORD*)(a2 + 64) & 7) << 32);
    *(_QWORD*)(a1 + 40) = v17;
    v18 = v17 | ((unsigned __int64)(*(_DWORD*)(a2 + 68) & 7) << 35);
    *(_QWORD*)(a1 + 40) = v18;
    v19 = v18 | ((unsigned __int64)(*(_DWORD*)(a2 + 72) & 7) << 38);
    *(_QWORD*)(a1 + 40) = v19;
    v20 = v19 | ((unsigned __int64)(*(_DWORD*)(a2 + 76) & 7) << 41);
    *(_QWORD*)(a1 + 40) = v20;
    v21 = v20 & 0xFFFFFFFFFFFLL |
          ((unsigned __int64)(*(_DWORD*)(a2 + 80) & 3) << 44);
    *(_QWORD*)(a1 + 40) = v21;
    v22 = v21 & 0xFFFF7FFFFFFFFFFFLL;
    v23 = SdkData_e89ba0;
    v24 = (char*)SdkData_e89ba0 + 48 * ((int)((_DWORD)v14 << 23) >> 23);
    v25 = 0x800000000000LL;
    if (v24[15] == 0) {
      v25 = 0;
    }
    v26 = v22 | v25;
    *(_QWORD*)(a1 + 40) = v26;
    v27 = v26 & 0xFFFFBFFFFFFFFFFFLL;
    v28 = v24[14] == 0;
    v29 = 0x400000000000LL;
    if (v28) {
      v29 = 0;
    }
    *(_QWORD*)(a1 + 40) = v27 | v29;
    nn_66a170(v9, a2);
    v30 = *(_QWORD*)(a1 + 40);
    v31 = v30 << 39 >> 55;
    if ((v23[48 * ((int)((_DWORD)v30 << 7) >> 23)] & 1) != 0) {
      v32 = *(_QWORD*)(a1 + 16);
      if ((v30 & 8) == 0 || (*(_WORD*)(v32 + 16) & 0x280) != 0) {
        if ((*(_QWORD*)(a1 + 40) & 0xFE000000LL) == 0x14000000 ||
            (v30 & 0x50) != 0) {
          result = *(_QWORD*)(v32 + 24) +
                   ((__int64)(*(_QWORD*)(a1 + 24) << 16) >> 16);
        }
        else {
          result = SdkRoutine_65d580(v32, a1);
          if (result == 0) {
            return result;
          }
          v31 = (__int64)(*(_QWORD*)(a1 + 40) << 39) >> 55;
        }
        *(_QWORD*)(a1 + 96) = result;
        if ((v31 | 2) == 0x36) {
          *(_WORD*)(a1 + 120) =
              SdkRoutine_66afc0((__int64*)(*(_QWORD*)(a1 + 8) + 7752LL));
        }
        return 1;
      }
    }
  }
  return 0;
}

__int64 nn_66b440(__int64* a1, int a2, __int64 a3, __int64* a4)
{
  unsigned int v8;
  __int64 v9;
  bool v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  struct {
    __int64 v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
  } v20_;

  SdkRoutine_699440(*(_DWORD**)(*a1 + 8), a3, a4, (__int64)&v20_.v20, 0, 0);
  if (a4 != nullptr) {
    v8 = *(__int16*)a4;
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a3 + 40);
  v10 = (*(_DWORD*)(*(_QWORD*)(a3 + 8) + 8LL) & 0x10000) != 0;
  if ((v9 & 0xFE000000) == 0x14000000) {
    v10 = false;
  }
  v11 = ((unsigned int)v9 >> 8) & 8;
  v12 = v20_.v21 & 0x1EE1FFFF | (v8 << 29);
  HIBYTE(v20_.v26) = v8 >> 3;
  v13 = ((unsigned int)v9 >> 2) & 2 | ((v9 & 0x20) != 0);
  if (v10 && (v9 & 0x50) == 0) {
    v14 = 0x1000000;
  }
  else {
    v14 = 0;
  }
  v20_.v21 = v12 | ((v13 | v11) << 17) | v14;
  v15 = *a1;
  if (*(_DWORD*)*a1 == 0 && (*(_BYTE*)(v15 + 16) & 1) != 0) {
    v16 = 0;
  }
  else {
    v16 = *(_QWORD*)(v15 + 48);
  }
  v17 = v16 + a1[1];
  if (v16 == 0) {
    v17 = 0;
  }
  v18 = v17 + 32LL * a2;
  *(_QWORD*)v18 = v20_.v20;
  *(_DWORD*)(v18 + 8) = v20_.v21;
  *(_DWORD*)(v18 + 12) = v20_.v22;
  *(_DWORD*)(v18 + 16) = v20_.v23;
  *(_DWORD*)(v18 + 20) = v20_.v24;
  *(_DWORD*)(v18 + 24) = v20_.v25;
  *(_DWORD*)(v18 + 28) = v20_.v26;
  result = *a1;
  if ((*(_BYTE*)(*a1 + 16) & 4) != 0) {
    return SdkRoutine_6589a0(result);
  }
  return result;
}

__int64 nn_66b5c0(__int64* a1, int a2, __int64 a3, __int64* a4)
{
  unsigned int v8;
  __int64 v9;
  bool v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  struct {
    __int64 v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
  } v20_;

  SdkRoutine_699440(*(_DWORD**)(*a1 + 8), a3, a4, (__int64)&v20_.v20, 1, 0);
  if (a4 != nullptr) {
    v8 = *(__int16*)a4;
  }
  else {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a3 + 40);
  v10 = (*(_DWORD*)(*(_QWORD*)(a3 + 8) + 8LL) & 0x10000) != 0;
  if ((v9 & 0xFE000000) == 0x14000000) {
    v10 = false;
  }
  v11 = ((unsigned int)v9 >> 8) & 8;
  v12 = v20_.v21 & 0x1EE1FFFF | (v8 << 29);
  HIBYTE(v20_.v26) = v8 >> 3;
  v13 = ((unsigned int)v9 >> 2) & 2 | ((v9 & 0x20) != 0);
  if (v10 && (v9 & 0x50) == 0) {
    v14 = 0x1000000;
  }
  else {
    v14 = 0;
  }
  v20_.v21 = v12 | ((v13 | v11) << 17) | v14 | 0x80000;
  v15 = *a1;
  if (*(_DWORD*)*a1 == 0 && (*(_BYTE*)(v15 + 16) & 1) != 0) {
    v16 = 0;
  }
  else {
    v16 = *(_QWORD*)(v15 + 48);
  }
  v17 = v16 + a1[1];
  if (v16 == 0) {
    v17 = 0;
  }
  v18 = v17 + 32LL * a2;
  *(_QWORD*)v18 = v20_.v20;
  *(_DWORD*)(v18 + 8) = v20_.v21;
  *(_DWORD*)(v18 + 12) = v20_.v22;
  *(_DWORD*)(v18 + 16) = v20_.v23;
  *(_DWORD*)(v18 + 20) = v20_.v24;
  *(_DWORD*)(v18 + 24) = v20_.v25;
  *(_DWORD*)(v18 + 28) = v20_.v26;
  result = *a1;
  if ((*(_BYTE*)(*a1 + 16) & 4) != 0) {
    return SdkRoutine_6589a0(result);
  }
  return result;
}

__int64 nn_66c1c0(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 40);
  if ((v1 & 0x50) != 0) {
    return 1;
  }
  result = v1 << 39 >> 55;
  if ((int)((_DWORD)v1 << 7) >> 23 > 50) {
    if ((int)((_DWORD)v1 << 7) >> 23 == 51 ||
        (int)((_DWORD)v1 << 7) >> 23 == 53) {
      return 4;
    }
    if ((int)((_DWORD)v1 << 7) >> 23 == 54) {
      return 5;
    }
    return 2;
  }
  if ((unsigned int)(((int)((_DWORD)v1 << 7) >> 23) - 49) < 2) {
    return 3;
  }
  if ((int)((_DWORD)v1 << 7) >> 23 != 0) {
    return 2;
  }
  return result;
}

__int64 nn_66c420(void* this_, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (***v17)(_QWORD, void*);
  __int64 result;
  unsigned int v19;

  v6 = (_QWORD*)SdkData_e89c78;
  if (*(_QWORD*)SdkData_e89c78 == 0) {
    *v6 = nn_66f9b0();
  }
  memset_plt(this_, nullptr, 552, a4);
  v7 = 0;
  v8 = 0;
  *(_QWORD*)this_ = *(_QWORD*)(a2 + 8);
  v9 = *(_DWORD*)(a2 + 16);
  if (v9 >= 4) {
    v9 = 4;
  }
  *((_DWORD*)this_ + 8) = v9;
  v10 = *(_QWORD*)(a2 + 24);
  *((_BYTE*)this_ + 64) = 0;
  *((_QWORD*)this_ + 7) = -1;
  *((_QWORD*)this_ + 1) = v10;
  *((_DWORD*)this_ + 10) = -1;
  *((_QWORD*)this_ + 6) = -1;
  v12 = *(_OWORD*)(a2 + 64);
  v11 = *(_OWORD*)(a2 + 80);
  *(_OWORD*)((char*)this_ + 104) = *(_OWORD*)(a2 + 96);
  *(_OWORD*)((char*)this_ + 72) = v12;
  *(_OWORD*)((char*)this_ + 88) = v11;
  do {
    v13 = (_DWORD*)((char*)this_ + v7);
    v14 = *(_QWORD*)(*(_QWORD*)(a2 + 56) + 8 * v8);
    *((_QWORD*)this_ + v8 + 15) = v14;
    *(_QWORD*)(v14 + 48) = this_;
    SdkRoutine_6684e0((void*)((char*)this_ + v7 + 416), *(_QWORD*)(a2 + 8));
    SdkRoutine_6684e0((void*)((char*)this_ + v7 + 152), *(_QWORD*)(a2 + 8));
    SdkRoutine_6684e0((void*)((char*)this_ + v7 + 280), *(_QWORD*)(a2 + 8));
    v15 = *((int*)this_ + 8);
    ++v8;
    v7 += 32;
    v13[106] = 1;
    v13[40] = 1;
    v13[72] = 1;
  } while (v8 < v15);
  v16 = *((_QWORD*)this_ + 15);
  *((_QWORD*)this_ + 2) = 0;
  v17 = (__int64 (***)(_QWORD, void*))*v6;
  *((_DWORD*)this_ + 6) = *(_QWORD*)(v16 + 32);
  *((_DWORD*)this_ + 7) = *(unsigned __int16*)(v16 + 36);
  if (*(_DWORD*)(a2 + 20) != 0) {
    LODWORD(v15) = *(_DWORD*)(a2 + 20);
  }
  *((_DWORD*)this_ + 9) = v15;
  result = (**v17)(v17, this_);
  if ((_DWORD)result != 0) {
    (*(void (**)(_QWORD, void*, _QWORD))(*(_QWORD*)*v6 + 64LL))(
        *v6, this_, *((unsigned int*)this_ + 9));
    v19 = *(_DWORD*)(a2 + 32) + 1;
    if (v19 != *((_DWORD*)this_ + 10) &&
        (*(unsigned int (**)(_QWORD, void*, _QWORD))(*(_QWORD*)*v6 + 32LL))(
            *v6, this_, v19) == 1) {
      *((_DWORD*)this_ + 10) = v19;
    }
    *((_QWORD*)this_ + 6) = *(_QWORD*)(a2 + 40);
    return 1;
  }
  return result;
}

bool nn_66dde0(__int64 a1, int a2, __int64 a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  _BOOL4 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  int v24;
  unsigned int v25;
  char* v26;
  _QWORD v28[2];
  __int64 v29;

  v6 = 0;
  v7 = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 216LL) - 1LL;
  do {
    v10 = a2 - v6;
    v11 = a2 <= v6;
    if (a2 <= v6) {
      break;
    }
    if ((signed __int32)*(_DWORD*)(a1 + 112) < v10) {
      v10 = *(_DWORD*)(a1 + 112);
    }
    v29 = v10;
    v12 = 40LL * v10;
    v13 = (char*)v28 - ((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    memset_plt_alt2((__int64)v13, 0, v12);
    v14 = v29;
    v15 = *(_DWORD*)(a1 + 108);
    if (v29 != 0) {
      v16 = *(_QWORD*)(a1 + 8);
      v17 = *(_QWORD*)(a1 + 24);
      v18 = *(_DWORD*)(a1 + 16);
      v19 = 0;
      while (1) {
        v20 = (__int64*)(a3 + v19);
        v21 = *(_QWORD*)(a3 + v19 + 16);
        if (((*(_QWORD*)(a3 + v19 + 8) | *(_QWORD*)(a3 + v19 + 24) | v21) &
             v7) != 0) {
          break;
        }
        v22 = *(_QWORD*)(a3 + v19);
        if (v22 != 0) {
          v23 = &v13[v19];
          *(_DWORD*)&v13[v19] = *(_DWORD*)(v22 + 88);
          v24 = *(_DWORD*)(a3 + v19 + 32);
          if (v24 == 256) {
            v25 = *(_DWORD*)(v16 + 7576);
          }
          else {
            v25 = v24 & 0xFFFFFCFF;
          }
          *((_DWORD*)v23 + 1) = v25;
          *((_QWORD*)v23 + 2) = v20[1] >> v15;
          *((_QWORD*)v23 + 3) = (unsigned __int64)(v20[2] + v17) >> v15;
          *((_DWORD*)v23 + 2) = (unsigned __int64)v20[3] >> v15;
          if ((v18 & 0x20) != 0) {
            v23[32] = 1;
          }
          v23[33] = (*(_DWORD*)(a3 + v19 + 32) & 0x200) != 0;
        }
        else {
          v26 = &v13[v19];
          *((_QWORD*)v26 + 3) = (unsigned __int64)(v17 + v21) >> v15;
          *((_DWORD*)v26 + 2) = (unsigned __int64)v20[3] >> v15;
        }
        v19 += 40;
        if (--v14 == 0) {
          a3 += v19;
          goto LABEL_3;
        }
      }
      return false;
    }
  LABEL_3:
    v8 = *(_QWORD*)(a1 + 96);
    v28[1] = 0;
    v28[0] = (unsigned int)(1 << v15);
    v9 = NvRmGpuAddressSpaceAllocationRemap_plt(v8, (__int64)v28, (__int64)v13,
                                                (__int64)&v29);
    v6 += v29;
  } while (v9 == 0);
  return v11;
}

__int64 nn_66eba0(__int64 result, unsigned int a2, __int64 a3, __int64 a4,
                  __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  void* v14;
  void (*v15)(__int64);
  __int64 v16;
  int v17;
  int v18;
  struct {
    __int128 v19;
    __int64 v20;
    char* v21;
    __int128 v22;
  } v19_;
  char v23;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v19_.v20 = 0;
  v19_.v22 = (__typeof__(v19_.v22)){0};
  v19_.v21 = &v23;
  v19_.v19 = (__typeof__(v19_.v19)){0};
  LODWORD(v19_.v22) = 2;
  if ((*(_BYTE*)(*(_QWORD*)(result + 208) + 24LL) & 1) == 0) {
    v8 = result;
    v9 = a2;
    v10 = *(unsigned int*)(result + 220);
    v11 = *(_QWORD*)(result + 192);
    DWORD2(v19_.v22) = *(_DWORD*)(result + 264);
    v12 = *(_BYTE*)(result + 129);
    v13 = *(_QWORD*)(result + 8);
    BYTE4(v19_.v22) = v12;
    result =
        ((__int64 (*)(__int64, __int64, __int64, __int64, _QWORD, _QWORD,
                      __int128*, __int64))NvRmGpuChannelKickoffPbWithAttr_plt)(
            v13, v10, v11, v9, 0, 0, &v19_.v19, a8),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((_DWORD)result == 14) {
      v14 = SdkData_e89bd8;
      do {
        v15 = *(void (**)(__int64))((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v14),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        LODWORD(v19_.v22) = 1;
        v15(3),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        result = ((__int64 (*)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD,
                               __int128*,
                               __int64))NvRmGpuChannelKickoffPbWithAttr_plt)(
            *(_QWORD*)(v8 + 8), *(unsigned int*)(v8 + 220),
            *(_QWORD*)(v8 + 192), v9, 0, 0, &v19_.v19, v16),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      } while ((_DWORD)result == 14);
    }
    v17 = *(_DWORD*)(v8 + 264);
    v18 = *(_DWORD*)(v8 + 260);
    *(_DWORD*)(v8 + 264) = 0;
    *(_DWORD*)(v8 + 260) = v18 + v17;
    if ((_DWORD)result != 0) {
      return SdkRoutine_664bf0(*(_QWORD*)(v8 + 208));
    }
  }
  return result;
}

__int64 nn_66ef20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                  __int64 a6, _DWORD* a7)
{
  __int64 v14;
  __int64 v22;
  int v23;
  __int64 result;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  char v33;
  int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  int* v38;
  int v39;
  int v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v46;
  __int64 v47;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v48_;
  __int64 v51;
  struct {
    _QWORD v52[4];
    __int128 v53;
    __int128 v54;
    int v55[4];
    __int128 v56;
    __int64 v57;
  } v52_;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  char v63;
  __int64 v64;
  __int16 v65;
  __int64 v66;
  __int16 v67;
  __int64 v68;
  __int64 v69;
  __int128 v70;
  unsigned __int64 v71;

  *(_QWORD*)(a1 + 232) = a5;
  *(_QWORD*)(a1 + 208) = a2;
  v14 = NvRmGpuDeviceGetInfo_plt(*(_QWORD*)(a5 + 8));
  v59 = 0;
  v58 = 0;
  v63 = 0;
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  v68 = NvOsGetCurrentAllocator_plt(v14);
  v22 = *(_QWORD*)(a5 + 24);
  v69 = 0;
  v70 = (__typeof__(v70)){0};
  v71 = 0xFFFFFFFF00000003LL;
  v61 = 4096;
  v62 = 6656;
  v60 = 0x100000010LL;
  v23 = NvRmMemHandleAllocAttr_plt(v22, &v58, a1 + 240);
  result = 0;
  if (v23 != 0) {
    return result;
  }
  v52_.v57 = 0;
  v52_.v52[0] = 0;
  *(_OWORD*)&v52_.v52[2] = (__typeof__(*(_OWORD*)&v52_.v52[2])){0};
  v52_.v53 = (__typeof__(v52_.v53)){0};
  v52_.v54 = (__typeof__(v52_.v54)){0};
  *(_OWORD*)v52_.v55 = (__typeof__(*(_OWORD*)v52_.v55)){0};
  v52_.v56 = (__typeof__(v52_.v56)){0};
  DWORD1(v52_.v56) = -1;
  HIDWORD(v52_.v56) = -1;
  v52_.v52[1] = (unsigned __int64)a4 >> 3;
  v25 = *(_DWORD*)(a2 + 356);
  if ((v25 & 0x14) == 0) {
    v28 = *(_QWORD*)(a5 + 8);
    v48_.v50 = 0;
    v51 = 0;
    v48_.v48 = 0;
    v48_.v49 = 0;
    if ((unsigned int)NvRmGpuTaskSchedulingGroupCreate_plt(v28, &v48_.v48,
                                                           &v51) == 0) {
      DWORD1(v52_.v56) = *(_DWORD*)(v14 + 612);
      *(_QWORD*)&v52_.v53 = *(_QWORD*)(a5 + 16);
      *((_QWORD*)&v52_.v53 + 1) = v51;
      goto LABEL_10;
    }
    return 0;
  }
  if ((v25 & 4) != 0) {
    v29 = *(_QWORD*)(a6 + 104);
    v30 = *(_QWORD*)(a5 + 16);
    v48_.v48 = 0;
    LODWORD(v51) = 1;
    if ((unsigned int)NvRmGpuTSGSubcontextCreate_plt(v29, v30, &v51,
                                                     &v48_.v48) == 0) {
      v31 = *(_DWORD*)(v14 + 620);
      v52_.v53 = (__typeof__(v52_.v53)){0};
      DWORD1(v52_.v56) = v31;
      *(_QWORD*)&v52_.v54 = v48_.v48;
      goto LABEL_10;
    }
    return 0;
  }
  if ((v25 & 0x10) != 0) {
    v26 = *(_DWORD*)(v14 + 636);
    *(_QWORD*)&v52_.v53 = *(_QWORD*)(a5 + 16);
    v27 = *(_DWORD*)(a5 + 40);
    DWORD1(v52_.v56) = v26;
    HIDWORD(v52_.v56) = v27;
  }
LABEL_10:
  DWORD2(v52_.v54) = *(_DWORD*)(a1 + 240);
  *(_OWORD*)v52_.v55 = SdkData_bb4580;
  if (*(_BYTE*)(v14 + 55) == 1) {
    v32 = 1;
    LOBYTE(v52_.v57) = 1;
    WORD4(v52_.v56) = 257;
  }
  else {
    v32 = 8;
  }
  v52_.v52[2] = v32;
  v33 = *(_BYTE*)(a2 + 356);
  LOBYTE(v52_.v52[3]) = 1;
  if ((v33 & 0x20) != 0) {
    BYTE1(v52_.v52[3]) = 1;
  }
  if ((unsigned int)NvRmGpuChannelCreate_plt(*(_QWORD*)(a5 + 8), v52_.v52,
                                             a1 + 8) != 0) {
    return 0;
  }
  v34 = *(_DWORD*)(a2 + 356);
  if ((v34 & 0x14) == 0 || (v34 & 4) != 0) {
    v35 = *(_QWORD*)(a1 + 8);
    v48_.v48 = 0;
    v48_.v49 = 0x100000001LL;
    if ((unsigned int)NvRmGpuChannelSetPreemptionModes_plt(v35, &v48_.v48) !=
        0) {
      return 0;
    }
  }
  NvRmGpuChannelGetInfo_plt(*(_QWORD*)(a1 + 8), a1 + 16);
  *(_QWORD*)(a1 + 144) = v52_.v54;
  if ((*(_BYTE*)(a2 + 356) & 4) != 0) {
    NvRmGpuTSGSubcontextGetInfo_plt();
  }
  if (*(_DWORD*)(a1 + 112) != -1) {
    *(_DWORD*)(a1 + 260) = *(_DWORD*)(a1 + 116);
  }
  if (a3 != 0) {
    *(_QWORD*)(a1 + 192) = a3;
    *(_BYTE*)(a1 + 200) = 0;
    goto LABEL_28;
  }
  v36 = (*(__int64 (**)(_QWORD, __int64))((char*)((__int64*)0x4LL) +
                                          (_QWORD)SdkData_e89bd8 +
                                          4))(*(_QWORD*)(a1 + 24), 8);
  *(_QWORD*)(a1 + 192) = v36;
  *(_BYTE*)(a1 + 200) = 1;
  if (v36 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
    return 0;
  }
LABEL_28:
  v37 = 0;
  while (1) {
    v38 = (int*)((char*)SdkData_e89e50 + 4 * (v37 >> 5));
    v39 = 1 << (v37 & 0x1C);
    v40 = *v38;
    if ((v39 & *v38) == 0) {
      goto LABEL_36;
    }
    v41 = v37 + 1;
    v39 = 1 << ((v37 + 1) & 0x1D);
    if ((v39 & v40) == 0) {
      break;
    }
    v41 = v37 + 2;
    v39 = 1 << ((v37 + 2) & 0x1E);
    if ((v39 & v40) == 0) {
      break;
    }
    v41 = v37 + 3;
    v39 = 1 << (v37 + 3);
    if ((v39 & v40) == 0) {
      break;
    }
    v37 += 4;
    if (v37 == 256) {
      v37 = -1;
      goto LABEL_39;
    }
  }
  v37 = v41;
LABEL_36:
  if (v37 >= 0x100) {
  LABEL_39:
    *(_DWORD*)(a1 + 216) = v37;
    return 0;
  }
  v42 = DWORD2(v52_.v54);
  v43 = *(_QWORD*)v52_.v55;
  v44 = *(_QWORD*)&v52_.v55[2];
  *v38 = v39 | v40;
  *(_DWORD*)(a1 + 216) = v37;
  if ((unsigned int)NvRmMemMap_plt(v42, v43, v44, 3, a1 + 248) != 0) {
    *(_QWORD*)(a1 + 248) = 0;
    return 0;
  }
  else {
    memset_plt_alt1(*(void**)(a1 + 248), nullptr, v52_.v55[2]);
    *(_DWORD*)(a1 + 220) = *(_DWORD*)(v14 + 624);
    *(_QWORD*)(a1 + 224) = *(_QWORD*)(v14 + 184);
    v46 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 7232LL);
    if (*(_DWORD*)v46 == 0 && (*(_BYTE*)(v46 + 16) & 1) != 0) {
      v47 = 0;
    }
    else {
      v47 = *(_QWORD*)(v46 + 48);
    }
    *(_DWORD*)(v47 + 16LL * *(int*)(a1 + 216) + 4096) = 0;
    *(_QWORD*)(a1 + 184) = 0;
    *a7 = *(_DWORD*)(a1 + 216);
    return 1;
  }
}

__attribute__((swiftcall)) void nn_66f330(PSEUDO_X8 x8_, __int64 a1)
{
  int32x2_t* a2 = (int32x2_t*)PSEUDO_X8_VALUE(x8_);
  int32x2_t* v3;
  unsigned __int32 v4;
  int32x2_t result;

  v3 = (int32x2_t*)NvRmGpuDeviceGetInfo_plt(
      *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL));
  v4 = LANES64(v3[77]).n64_u32[1];
  LANES64(result).n64_u64[0] = LANES64_OF(vrev64_s32(v3[79])).n64_u64[0];
  LANES64(*(a2)).n64_u32[0] = LANES64(v3[76]).n64_u32[1];
  LANES64(*(a2)).n64_u32[1] = v4;
  LANES64(a2[2]).n64_u32[0] = LANES64(v3[77]).n64_u32[0];
  LANES64(a2[1]).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

_QWORD* nn_66f9b0()
{
  _QWORD* result;
  char* v1;

  result = *(_QWORD**)SdkData_e89e58[0];
  if (*(_QWORD*)SdkData_e89e58[0] == 0) {
    result = (_QWORD*)SdkData_e89e60;
    v1 = (char*)SdkData_e89dc0 + 16;
    *(_QWORD*)SdkData_e89e58[0] = SdkData_e89e60;
    *result = v1;
    *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)result + 4) = 3;
    *((_BYTE*)((__int64*)0xCLL) + (_QWORD)result) = 1;
  }
  return result;
}

__int64 nn_66fa80(__int64 a1)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  unsigned int (*v13)(_DWORD*);
  __int64 (*v15)(__int128*, void*);
  int v16;
  unsigned int (*v18)(__int64, __int64, _QWORD, _QWORD, __int64,
                      __int64 (**)(void), _QWORD, __int128*, __int64);
  __int64 v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v25;
  struct {
    __int128 v26;
    int v27;
    int v28;
  } v26_;
  int v29[4];
  __int128 v30;
  int v31;
  int v32;
  __int64 v33;
  _DWORD v34[70];

  v2 = SdkData_10422a0;
  if (SdkData_10422a0 == 0) {
    v10 = SdkRoutine_65f8b0();
    if (v10 == 0) {
      return 0;
    }
    v11 = v10;
    v12 = SdkData_e89bd8;
    v13 = (unsigned int (*)(_DWORD*))(*(__int64 (**)(__int64, const char*))(
        (char*)((_UNKNOWN*)0xD8LL) + (_QWORD)SdkData_e89bd8))(v10,
                                                              "rtcGetVersion");
    if (v13 == nullptr) {
      return 0;
    }
    v34[0] = 0;
    if (v13(v34) != 0 || v34[0] != 10060) {
      return 0;
    }
    v15 = (__int64 (*)(__int128*, void*))(*(__int64 (**)(__int64, const char*))(
        (char*)((_UNKNOWN*)0xD8LL) + (_QWORD)v12))(v11, "rtcGetExportTable");
    if (v15 == nullptr) {
      return 0;
    }
    v16 = v15(&v26_.v26, &SdkData_c7e170);
    v2 = v26_.v26;
    if (v16 != 0 || (_QWORD)v26_.v26 == 0) {
      return 0;
    }
    SdkData_10422a0 = v26_.v26;
  }
  *(_QWORD*)(a1 + 7688) = v2;
  nn_65f3c0((void*)((__int64)v34), a1 + 2520);
  v4 = *(_DWORD*)(a1 + 8);
  v5 = v4 << 18;
  if ((v4 & 0x40000000) != 0) {
    v6 = 17;
  }
  else {
    v6 = 1;
  }
  v7 = v6 & (v5 >> 31);
  memset_plt_alt1((void*)v29, nullptr, 2128);
  v31 = v7;
  v29[0] = 1;
  v26_.v27 = v34[17];
  v26_.v26 = SdkData_bb2320;
  v33 = SdkRoutine_654220(a1);
  v8 = *(_QWORD*)(a1 + 7688);
  v26_.v28 = 2;
  v30 = SdkData_bb1cc0;
  if ((*(unsigned int (**)(_QWORD, _QWORD, _QWORD))(v8 + 8))(0, 0, 0) != 0) {
    return 0;
  }
  v9 = *(_QWORD*)(a1 + 7688);
  v32 = 2;
  if (*(_BYTE*)(a1 + 7668) != 1) {
    v18 = *(unsigned int (**)(__int64, __int64, _QWORD, _QWORD, __int64,
                              __int64 (**)(void), _QWORD, __int128*,
                              __int64))(v9 + 16);
    v19 = *(_QWORD*)(a1 + 7656);
    v20 = *(_QWORD*)(a1 + 7648);
    v21 = SdkRoutine_64a0d0();
    if (v18(v19, v20, 0, 0, a1, v21, 0, &v26_.v26, a1 + 7696) == 0) {
      goto LABEL_23;
    }
    return 0;
  }
  if ((*(unsigned int (**)(_QWORD, _QWORD, __int64, void*, __int128*, __int64))(
          v9 + 24))(*(_QWORD*)(a1 + 7680), *(_QWORD*)(a1 + 7672), a1,
                    SdkData_e89bf8, &v26_.v26, a1 + 7696) != 0) {
    return 0;
  }
LABEL_23:
  v22 = *(_QWORD*)(a1 + 7688);
  v23 = *(_QWORD*)(a1 + 7696);
  v25 = 0;
  (*(void (**)(__int64, __int64, __int64*))(v22 + 64))(v23, 26, &v25);
  *(_BYTE*)(a1 + 7712) = v25 != 0;
  if (v31 != 0) {
    if ((*(unsigned int (**)(_QWORD, __int64 (*)(), _QWORD, __int64))(
            *(_QWORD*)(a1 + 7688) + 576LL))(
            *(_QWORD*)(a1 + 7696), SdkData_e89e68, 0, a1 + 7704) != 0) {
      return 0;
    }
  }
  else {
    *(_QWORD*)(a1 + 7704) = 0;
  }
  return 1;
}

#pragma GCC visibility pop
