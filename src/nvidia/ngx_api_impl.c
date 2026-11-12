#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NVSDK_NGX_Parameter_GetUI_plt(_QWORD, _QWORD, _QWORD);
__int64 NVSDK_NGX_Parameter_SetUI_plt(_QWORD, _QWORD, _QWORD);
__int64 ngx_api_b3040(__int64 a1);

__int64 ngx_api_b3040(__int64 a1)
{
  __int64 result;
  int v5;

  v5 = 0;
  if ((unsigned int)NVSDK_NGX_Parameter_GetUI_plt(
          a1, "DLSS.Hint.Render.Preset.DLAA", &v5) != 1 ||
      v5 == 0) {
    NVSDK_NGX_Parameter_SetUI_plt(a1, "DLSS.Hint.Render.Preset.DLAA",
                                  2147483654LL);
  }
  if ((unsigned int)NVSDK_NGX_Parameter_GetUI_plt(
          a1, "DLSS.Hint.Render.Preset.Quality", &v5) != 1 ||
      v5 == 0) {
    NVSDK_NGX_Parameter_SetUI_plt(a1, "DLSS.Hint.Render.Preset.Quality",
                                  2147483652LL);
  }
  if ((unsigned int)NVSDK_NGX_Parameter_GetUI_plt(
          a1, "DLSS.Hint.Render.Preset.Balanced", &v5) != 1 ||
      v5 == 0) {
    NVSDK_NGX_Parameter_SetUI_plt(a1, "DLSS.Hint.Render.Preset.Balanced",
                                  2147483652LL);
  }
  if ((unsigned int)NVSDK_NGX_Parameter_GetUI_plt(
          a1, "DLSS.Hint.Render.Preset.Performance", &v5) != 1 ||
      v5 == 0) {
    NVSDK_NGX_Parameter_SetUI_plt(a1, "DLSS.Hint.Render.Preset.Performance",
                                  2147483652LL);
  }
  if ((unsigned int)NVSDK_NGX_Parameter_GetUI_plt(
          a1, "DLSS.Hint.Render.Preset.UltraQuality", &v5) != 1 ||
      v5 == 0) {
    NVSDK_NGX_Parameter_SetUI_plt(a1, "DLSS.Hint.Render.Preset.UltraQuality",
                                  2147483654LL);
  }
  result = NVSDK_NGX_Parameter_GetUI_plt(
      a1, "DLSS.Hint.Render.Preset.UltraPerformance", &v5);
  if ((_DWORD)result != 1 || v5 == 0) {
    return NVSDK_NGX_Parameter_SetUI_plt(
        a1, "DLSS.Hint.Render.Preset.UltraPerformance", 2147483654LL);
  }
  return result;
}

#pragma GCC visibility pop
