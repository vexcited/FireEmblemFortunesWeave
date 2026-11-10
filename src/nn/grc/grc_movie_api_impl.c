#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_grc_dev_RegisterOffscreenLayer_plt(_QWORD);
__int64 nn_grc_dev_UnregisterOffscreenLayer_plt(_QWORD);
__int64 nn_oe_detail_SetMovieMakerRecordingEnabled_plt(_QWORD);
__int64 nn_vi_CloseDisplay_plt(_QWORD);
__int64 nn_vi_CreateMovieMakerLayer_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_vi_DestroyLayer_plt(_QWORD);
__int64 nn_vi_LayerCreationSettings_LayerCreationSettings_plt_86a880(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
__int64 nn_vi_LayerCreationSettings_SetFullscreen_plt(_QWORD, _QWORD);
__int64 nn_vi_LayerCreationSettings_SetVisibility_plt(_QWORD, _QWORD);
__int64 nn_vi_OpenDefaultDisplay_plt(_QWORD);
__int64 nn_vi_SetMovieMakerLayerEnabled_plt(_QWORD);
extern __int64 SdkData_f39b10;
extern __int64 SdkData_f39b18;
extern __int64 nn_grc_detail_g_MovieLayer;
extern char nn_grc_detail_g_IsMovieLayerOpened;
extern int SdkData_f39b20;
extern int SdkData_f39b24;
__int64 nn_grc_dev_RegisterOffscreenLayer(void* this_, unsigned __int64 a2,
                                          unsigned int a3, unsigned int a4);
__int64 nn_grc_dev_UnregisterOffscreenLayer(void* this_);
__int64 nn_grc_CloseMovieLayer(__int64* a1);
__int64 nn_grc_OpenMovieLayer(_QWORD* a1, __int64 a2);

__int64 nn_grc_dev_RegisterOffscreenLayer(void* this_, unsigned __int64 a2,
                                          unsigned int a3, unsigned int a4)
{
  __int64 result;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  struct {
    __int64 v11;
    int v12;
  } v11_;
  __int64 v13;

  if ((nn_grc_detail_g_IsMovieLayerOpened & 1) != 0) {
    return 51412;
  }
  v13 = 0;
  result = nn_vi_OpenDefaultDisplay_plt(&v13);
  if ((_DWORD)result != 0) {
    return result;
  }
  v11_.v12 = 0;
  v11_.v11 = 0;
  nn_vi_LayerCreationSettings_LayerCreationSettings_plt_86a880(&v11_.v11, a3,
                                                               a4);
  nn_vi_LayerCreationSettings_SetFullscreen_plt(&v11_.v11, 1);
  nn_vi_LayerCreationSettings_SetVisibility_plt(&v11_.v11, 1);
  v10 = 0;
  v8 = nn_vi_CreateMovieMakerLayer_plt(&v10, v13, &v11_.v11);
  if (v8 != 0) {
    v9 = v8;
  }
  else {
    nn_oe_detail_SetMovieMakerRecordingEnabled_plt(1);
    result = nn_vi_SetMovieMakerLayerEnabled_plt(1);
    if ((_DWORD)result == 0) {
      nn_grc_detail_g_IsMovieLayerOpened = 1;
      SdkData_f39b20 = a3;
      SdkData_f39b24 = a4;
      nn_grc_detail_g_MovieLayer = (__int64)this_;
      SdkData_f39b10 = v13;
      SdkData_f39b18 = v10;
      return result;
    }
    v9 = result;
    nn_vi_DestroyLayer_plt(v10);
  }
  nn_vi_CloseDisplay_plt(v13);
  return v9;
}

__int64 nn_grc_dev_UnregisterOffscreenLayer(void* this_)
{
  __int64 v1;
  __int64 result;
  int v3;

  if ((nn_grc_detail_g_IsMovieLayerOpened & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if ((void*)nn_grc_detail_g_MovieLayer != this_) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  v1 = nn_vi_SetMovieMakerLayerEnabled_plt(0);
  v3 = v1;
  if ((_DWORD)v1 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v3);
  }
  nn_oe_detail_SetMovieMakerRecordingEnabled_plt(v1);
  nn_vi_DestroyLayer_plt(SdkData_f39b18);
  result = nn_vi_CloseDisplay_plt(SdkData_f39b10);
  nn_grc_detail_g_IsMovieLayerOpened = 0;
  return result;
}

__int64 nn_grc_CloseMovieLayer(__int64* a1)
{
  if ((nn_grc_detail_g_IsMovieLayerOpened & 1) == 0) {
    a1 = (__int64*)nn_diag_detail_AbortImpl_plt_856170(a1);
  LABEL_5:
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  if (a1 != &nn_grc_detail_g_MovieLayer) {
    goto LABEL_5;
  }
  return nn_grc_dev_UnregisterOffscreenLayer_plt(nn_grc_detail_g_MovieLayer);
}

__int64 nn_grc_OpenMovieLayer(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nn_grc_dev_RegisterOffscreenLayer_plt(a2);
  if ((_DWORD)result == 0) {
    *a1 = &nn_grc_detail_g_MovieLayer;
  }
  return result;
}

#pragma GCC visibility pop
