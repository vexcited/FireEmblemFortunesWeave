#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_vi2_Finalize_plt(_QWORD);
__int64 nn_vi_CopyrightFramebuffer_Finalize_plt(_QWORD);
__int64 nn_vi_Display_Close_plt(_QWORD, _QWORD);
__int64 nn_vi_Display_IsOpen_plt(_QWORD);
__int64 nn_vi_Layer_Close_plt(_QWORD, _QWORD);
__int64 nn_vi_Layer_IsOpen_plt(_QWORD);
extern _UNKNOWN nn_vi_detail_g_CopyrightFramebuffer;
extern _UNKNOWN nn_vi_detail_g_InitializeMutex;
extern _UNKNOWN nn_vi_detail_g_MovieMakerLayer;
extern _UNKNOWN nn_vi_detail_g_RecordingLayer;
extern _UNKNOWN nn_vi_detail_g_SharingLayer;
extern __int64 nn_vi_detail_g_DefaultDisplay;
extern __int64 nn_vi_detail_g_InitializeCount;
extern __int64 nn_vi_detail_g_Layer;
__int64 nn_vi_Finalize(void* this_);

__int64 nn_vi_Finalize(void* this_)
{
  __int64 v1;

  nn_os_LockMutex_plt(&nn_vi_detail_g_InitializeMutex);
  if (nn_vi_detail_g_InitializeCount != 0 &&
      --nn_vi_detail_g_InitializeCount == 0) {
    if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_Layer) & 1) != 0) {
      nn_vi_Layer_Close_plt(&nn_vi_detail_g_Layer, 1);
    }
    nn_vi_CopyrightFramebuffer_Finalize_plt(
        &nn_vi_detail_g_CopyrightFramebuffer);
    if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_RecordingLayer) & 1) != 0) {
      nn_vi_Layer_Close_plt(&nn_vi_detail_g_RecordingLayer, 1);
      if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_MovieMakerLayer) & 1) == 0) {
      LABEL_9:
        if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_SharingLayer) & 1) == 0) {
          goto LABEL_10;
        }
        goto LABEL_15;
      }
    }
    else if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_MovieMakerLayer) & 1) ==
             0) {
      goto LABEL_9;
    }
    nn_vi_Layer_Close_plt(&nn_vi_detail_g_MovieMakerLayer, 1);
    if ((nn_vi_Layer_IsOpen_plt(&nn_vi_detail_g_SharingLayer) & 1) == 0) {
    LABEL_10:
      v1 = nn_vi_Display_IsOpen_plt(&nn_vi_detail_g_DefaultDisplay);
      if ((v1 & 1) == 0) {
      LABEL_12:
        nn_vi2_Finalize_plt(v1);
        return nn_os_UnlockMutex_plt(&nn_vi_detail_g_InitializeMutex);
      }
    LABEL_11:
      v1 = nn_vi_Display_Close_plt(&nn_vi_detail_g_DefaultDisplay, 1);
      goto LABEL_12;
    }
  LABEL_15:
    nn_vi_Layer_Close_plt(&nn_vi_detail_g_SharingLayer, 1);
    v1 = nn_vi_Display_IsOpen_plt(&nn_vi_detail_g_DefaultDisplay);
    if ((v1 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  return nn_os_UnlockMutex_plt(&nn_vi_detail_g_InitializeMutex);
}

#pragma GCC visibility pop
