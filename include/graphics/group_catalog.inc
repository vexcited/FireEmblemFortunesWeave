extern const void* g_SceneExposure_vtable[];

namespace {

constexpr PropertyDefinition kSceneExposureProperties[] = {
  {"A_Compensation", 56, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"A_EnableEVCompByEV", 136, PropertyKind::Boolean,
    1,
    {0}},
  {"A_EVCompByEVTexMin", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"A_EVCompByEVTexMax", 288, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"A_EnableEVCompCh1ByEV", 368, PropertyKind::Boolean,
    1,
    {0}},
  {"A_EVCompCh1ByEVTexMin", 440, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"A_EVCompCh1ByEVTexMax", 520, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"M_EV", 600, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"SL_ShadowMin", 680, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"SL_FixPos", 768, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"SL_ShadowFixValue", 896, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructSceneExposure(PropertyGroup* group) {
  ConstructGroup(group, g_SceneExposure_vtable,
    kSceneExposureProperties, 11);
}

extern const void* g_BaseShadow_vtable[];

namespace {

constexpr PropertyDefinition kBaseShadowProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {1}},
  {"DistributionBeginCascade", 128, PropertyKind::Integer,
    1,
    {3}},
  {"SplitFadeWidth", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Bias", 288, PropertyKind::Float,
    1,
    {FloatBits(0.00200000009f)}},
  {"Bias1", 368, PropertyKind::Float,
    1,
    {FloatBits(0.00200000009f)}},
  {"Bias2", 448, PropertyKind::Float,
    1,
    {FloatBits(0.00100000005f)}},
  {"Bias3", 528, PropertyKind::Float,
    1,
    {FloatBits(0.000500000024f)}},
  {"Bias2ForChara", 608, PropertyKind::Float,
    1,
    {FloatBits(0.00100000005f)}},
  {"Bias3ForChara", 688, PropertyKind::Float,
    1,
    {FloatBits(0.000500000024f)}},
  {"NormalOffset", 768, PropertyKind::Float,
    1,
    {FloatBits(0.00999999978f)}},
  {"NormalOffset1", 848, PropertyKind::Float,
    1,
    {FloatBits(0.00999999978f)}},
  {"NormalOffset2", 928, PropertyKind::Float,
    1,
    {FloatBits(0.00999999978f)}},
  {"NormalOffset3", 1008, PropertyKind::Float,
    1,
    {FloatBits(0.00999999978f)}},
};

}

void ConstructBaseShadow(PropertyGroup* group) {
  ConstructGroup(group, g_BaseShadow_vtable,
    kBaseShadowProperties, 13);
}

extern const void* g_SceneShadow_vtable[];

namespace {

constexpr PropertyDefinition kSceneShadowProperties[] = {
  {"MaxCascadeCount", 56, PropertyKind::Integer,
    1,
    {5}},
  {"CascadeOffset", 136, PropertyKind::Integer,
    1,
    {0}},
  {"SplitNear", 216, PropertyKind::Float,
    1,
    {FloatBits(0.100000001f)}},
  {"SplitFar0", 296, PropertyKind::Float,
    1,
    {FloatBits(16.0f)}},
  {"SplitFar1", 376, PropertyKind::Float,
    1,
    {FloatBits(35.0f)}},
  {"SplitFar2", 456, PropertyKind::Float,
    1,
    {FloatBits(73.0f)}},
  {"SplitFar3", 536, PropertyKind::Float,
    1,
    {FloatBits(250.0f)}},
  {"SplitFar4", 616, PropertyKind::Float,
    1,
    {FloatBits(500.0f)}},
  {"UseSplitLambda", 696, PropertyKind::Boolean,
    1,
    {1}},
  {"SplitLambda", 768, PropertyKind::Float,
    1,
    {FloatBits(0.75f)}},
  {"DistributionUpdateEnabled", 848, PropertyKind::Boolean,
    1,
    {1}},
  {"LocalLightShadowPoissonRotateEnabled", 920, PropertyKind::Boolean,
    1,
    {0}},
  {"LocalLightShadowPoissonQuality", 992, PropertyKind::Integer,
    1,
    {0}},
  {"LocalLightShadowPoissonRadius", 1072, PropertyKind::Float,
    1,
    {FloatBits(3.0f)}},
};

}

void ConstructSceneShadow(PropertyGroup* group) {
  ConstructGroup(group, g_SceneShadow_vtable,
    kSceneShadowProperties, 14);
}

extern const void* g_AO_vtable[];

namespace {

constexpr PropertyDefinition kAOProperties[] = {
  {"DirectShadingRate", 56, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"ColoredAORate", 136, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"SSAO_Enabled", 216, PropertyKind::Boolean,
    1,
    {1}},
  {"SSAO_Radius", 288, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"SSAO_Bias", 368, PropertyKind::Float,
    1,
    {FloatBits(0.25f)}},
  {"SSAO_PowExp", 448, PropertyKind::Float,
    1,
    {FloatBits(2.0f)}},
  {"SSAO_Alpha", 528, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructAO(PropertyGroup* group) {
  ConstructGroup(group, g_AO_vtable,
    kAOProperties, 7);
}

extern const void* g_ColorGrading_vtable[];

namespace {

constexpr PropertyDefinition kColorGradingProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"WhiteBalance.Temperature", 128, PropertyKind::Float,
    1,
    {FloatBits(6500.0f)}},
  {"WhiteBalance.Tint", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"ColorFilter", 288, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"ColorFilterLevel", 416, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"HueShift", 496, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Saturation", 576, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Shadow", 656, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"ShadowGlobal", 784, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"ShadowMin", 864, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"ShadowMax", 944, PropertyKind::Float,
    1,
    {FloatBits(0.180000007f)}},
  {"Midtone", 1024, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"MidtoneGlobal", 1152, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Highlight", 1232, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"HighlightGlobal", 1360, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"HighlightMin", 1440, PropertyKind::Float,
    1,
    {FloatBits(0.600000024f)}},
  {"HighlightMax", 1520, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructColorGrading(PropertyGroup* group) {
  ConstructGroup(group, g_ColorGrading_vtable,
    kColorGradingProperties, 17);
}

extern const void* g_Chara_vtable[];

namespace {

constexpr PropertyDefinition kCharaProperties[] = {
  {"SunColorSaturation", 56, PropertyKind::Float,
    1,
    {FloatBits(0.800000012f)}},
  {"SunIntensity", 136, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"MaxMetalnessLimitation", 216, PropertyKind::Float,
    1,
    {FloatBits(0.400000006f)}},
  {"MainLightInfluenceRateInShadow", 296, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"IBLColorSaturation", 376, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"EnvLightApplyRate", 456, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"OutlineMode", 536, PropertyKind::Integer,
    1,
    {2}},
  {"LimitMainLightAltitudeEnabled", 616, PropertyKind::Boolean,
    1,
    {1}},
  {"LimitMainLightAltitude", 688, PropertyKind::Float,
    1,
    {FloatBits(50.0f)}},
  {"LimitOnlyFace", 768, PropertyKind::Boolean,
    1,
    {0}},
  {"ActiveLightAltitudeMaxDeg", 840, PropertyKind::Float,
    1,
    {FloatBits(20.0f)}},
  {"ActiveLightAltitudeMinDeg", 920, PropertyKind::Float,
    1,
    {FloatBits(-20.0f)}},
};

}

void ConstructChara(PropertyGroup* group) {
  ConstructGroup(group, g_Chara_vtable,
    kCharaProperties, 12);
}

extern const void* g_CharaScene_vtable[];

namespace {

constexpr PropertyDefinition kCharaSceneProperties[] = {
  {"DirLightMode", 56, PropertyKind::Integer,
    1,
    {0}},
  {"DirLightIntensity", 136, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DirLightColor", 224, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"DirLightForceApplyOutside", 352, PropertyKind::Boolean,
    1,
    {0}},
  {"DirLightDirVirticalOffset", 424, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DirLightDirHorizontalOffset", 504, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DirLightAltitudeDeg", 584, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DirLightAzimuthDeg", 664, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"ActorLightMode", 744, PropertyKind::Integer,
    1,
    {0}},
  {"ActorLightIntensity", 824, PropertyKind::Float,
    1,
    {FloatBits(3000.0f)}},
  {"ActorLightColor", 912, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"ActorLightAlpha", 1040, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"ActorLightDirOffset", 1120, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"RimIntensity", 1248, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"RimRange", 1328, PropertyKind::Float,
    1,
    {FloatBits(0.300000012f)}},
  {"RimOffset", 1408, PropertyKind::Float,
    1,
    {FloatBits(0.100000001f)}},
  {"RimColorFrontRate", 1488, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"WindFluctuation", 1568, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"ShadowCastEnabled", 1648, PropertyKind::Boolean,
    1,
    {1}},
  {"DirectDiffuse_ShadowRate", 1720, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DirectDiffuse_ShadowColorIntensity", 1800, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"DirectDiffuse_ShadowAdjustor", 1880, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"DirectDiffuse_ShadeArea", 1960, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"DirectDiffuse_ShadowColor", 2048, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"D_FarShadowRate", 2176, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"D_FarShadowColorIntensity", 2256, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"D_FarShadowColor", 2336, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"LocalLightBehindFaceIntensity", 2464, PropertyKind::Float,
    1,
    {FloatBits(0.125f)}},
  {"LocalLightGradationStart", 2544, PropertyKind::Float,
    1,
    {FloatBits(0.200000003f)}},
  {"LocalLightGradationWidth", 2624, PropertyKind::Float,
    1,
    {FloatBits(0.100000001f)}},
  {"LocalLightLimitIntensity", 2704, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"GIIntensity", 2784, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DefaultInteriorMask", 2864, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"UseInteriorBox", 2944, PropertyKind::Boolean,
    1,
    {0}},
};

}

void ConstructCharaScene(PropertyGroup* group) {
  ConstructGroup(group, g_CharaScene_vtable,
    kCharaSceneProperties, 34);
}

extern const void* g_Fog_vtable[];

namespace {

constexpr PropertyDefinition kFogProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"Near", 128, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"Far", 208, PropertyKind::Float,
    1,
    {FloatBits(1000.0f)}},
  {"Exponent", 288, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Color", 368, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"EV", 496, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"UseRelativeEV", 576, PropertyKind::Boolean,
    0,
    {0}},
  {"RelativeEV", 648, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"FogType", 728, PropertyKind::Integer,
    1,
    {0}},
  {"Saturation", 808, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"PostSaturation", 888, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"PostBrightness", 968, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DistSaturationModifier", 1048, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DistBrightnessModifier", 1128, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"OverrideFogCenter", 1208, PropertyKind::Boolean,
    0,
    {0}},
  {"Center", 1280, PropertyKind::Color,
    0,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"UseInteriorFog", 1408, PropertyKind::Boolean,
    0,
    {0}},
  {"BoxCenter", 1488, PropertyKind::Color,
    0,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"BoxSize", 1616, PropertyKind::Color,
    0,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"BoxMargin", 1744, PropertyKind::Color,
    0,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"Near2", 1872, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"Far2", 1952, PropertyKind::Float,
    1,
    {FloatBits(1000.0f)}},
  {"Exponent2", 2032, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructFog(PropertyGroup* group) {
  ConstructGroup(group, g_Fog_vtable,
    kFogProperties, 23);
}

extern const void* g_GradationFilter_vtable[];

namespace {

constexpr PropertyDefinition kGradationFilterProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"DebugMode", 128, PropertyKind::Boolean,
    1,
    {0}},
  {"Color", 208, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"Alpha", 336, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"VignetteRotate", 416, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"VignetteCenterX", 496, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"VignetteCenterY", 576, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"VignetteIntensity", 656, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"VignetteSmoothness", 736, PropertyKind::Float,
    1,
    {FloatBits(0.200000003f)}},
};

}

void ConstructGradationFilter(PropertyGroup* group) {
  ConstructGroup(group, g_GradationFilter_vtable,
    kGradationFilterProperties, 9);
}

extern const void* g_Cloud_vtable[];

namespace {

constexpr PropertyDefinition kCloudProperties[] = {
  {"Alpha", 56, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"MainLightLevel_CloudLayer", 136, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Pow", 216, PropertyKind::Float,
    0,
    {FloatBits(1.0f)}},
  {"TopAlpha", 296, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"BottomAlpha", 376, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"TopAlphaAngle", 456, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"BottomAlphaAngle", 536, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"LayerRGBAlpha", 624, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"LayerAAlpha", 752, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"WindDir", 832, PropertyKind::Color,
    1,
    {FloatBits(-1.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"WindSpeed", 960, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Color", 1040, PropertyKind::Color,
    0,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"ColorIntenistyLevel", 1168, PropertyKind::Float,
    0,
    {FloatBits(0.0f)}},
  {"AddSkyEnabled", 1248, PropertyKind::Boolean,
    0,
    {0}},
  {"AddSkyIntensityLevel", 1320, PropertyKind::Float,
    0,
    {FloatBits(0.0f)}},
  {"MoonInfluence", 1400, PropertyKind::Float,
    0,
    {FloatBits(1.0f)}},
  {"CloudShapeScale", 1480, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"CloudShapeSpeed", 1560, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"CloudShapeDirection", 1640, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"CloudShapeAlpha", 1720, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"CloudShapeNear", 1800, PropertyKind::Float,
    1,
    {FloatBits(500.0f)}},
  {"CloudShapeFar", 1880, PropertyKind::Float,
    1,
    {FloatBits(10000.0f)}},
  {"CloudShapeExp", 1960, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"CloudShapeIntervalU", 2040, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"CloudShapeIntervalV", 2120, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"CloudShapeRotate", 2200, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
};

}

void ConstructCloud(PropertyGroup* group) {
  ConstructGroup(group, g_Cloud_vtable,
    kCloudProperties, 26);
}

extern const void* g_CharaSilhouette_vtable[];

namespace {

constexpr PropertyDefinition kCharaSilhouetteProperties[] = {
  {"Color0", 64, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"Color0Alpha", 192, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"OutlineColor0", 272, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"OutlineColor0Alpha", 400, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Color1", 480, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"Color1Alpha", 608, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"OutlineColor1", 688, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"OutlineColor1Alpha", 816, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Color2", 896, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"Color2Alpha", 1024, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"OutlineColor2", 1104, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"OutlineColor2Alpha", 1232, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Color3", 1312, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(1.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"Color3Alpha", 1440, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"OutlineColor3", 1520, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"OutlineColor3Alpha", 1648, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Color4", 1728, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"Color4Alpha", 1856, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"OutlineColor4", 1936, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"OutlineColor4Alpha", 2064, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Alpha", 2144, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"OutlineScale", 2224, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"SilhouetteMode", 2304, PropertyKind::Integer,
    1,
    {0}},
};

}

void ConstructCharaSilhouette(PropertyGroup* group) {
  ConstructGroup(group, g_CharaSilhouette_vtable,
    kCharaSilhouetteProperties, 23);
}

extern const void* g_SceneLight_vtable[];

namespace {

constexpr PropertyDefinition kSceneLightProperties[] = {
  {"DomeLight1Intensity", 56, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DomeLight1Color", 144, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"DomeLight2Intensity", 272, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DomeLight2Color", 352, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"MainLightLevel", 480, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"MainLightSaturation", 560, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyLevel", 640, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkySaturation", 720, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyLevel_CompPass", 800, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkySaturation_CompPass", 880, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"RenderingMoonLevel", 960, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"MainLightSpecular_Rain", 1040, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyExIntensityLevelTop", 1120, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyExIntensityLevelBottom", 1200, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyExIntensityAngleTop", 1280, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyExIntensityAngleBottom", 1360, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
};

}

void ConstructSceneLight(PropertyGroup* group) {
  ConstructGroup(group, g_SceneLight_vtable,
    kSceneLightProperties, 16);
}

extern const void* g_Vignette_vtable[];

namespace {

constexpr PropertyDefinition kVignetteProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"Color", 128, PropertyKind::Color,
    1,
    {FloatBits(0.0f), FloatBits(0.0f),
      FloatBits(0.0f), FloatBits(0.0f)}},
  {"Begin", 256, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Range", 336, PropertyKind::Float,
    1,
    {FloatBits(0.00999999978f)}},
  {"Smoothness", 416, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"CenterPositionX", 496, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"CenterPositionY", 576, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"Rounded", 656, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
};

}

void ConstructVignette(PropertyGroup* group) {
  ConstructGroup(group, g_Vignette_vtable,
    kVignetteProperties, 8);
}

extern const void* g_ShadowColorCorrection_vtable[];

namespace {

constexpr PropertyDefinition kShadowColorCorrectionProperties[] = {
  {"ShadowColorModifierEnabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"DirectDiffuse_ShadeArea", 128, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"DirectDiffuse_ShadowColorIntensity", 208, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"DirectDiffuse_ShadowColor", 288, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"DirectDiffuse_ShadowRate", 416, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"D_ChangeParamByDist", 496, PropertyKind::Boolean,
    1,
    {0}},
  {"D_FarShadowColorIntensity", 568, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"D_FarShadowColor", 656, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"D_FarShadowRate", 784, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"D_Near", 864, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"D_Far", 944, PropertyKind::Float,
    1,
    {FloatBits(1000.0f)}},
  {"D_Exponent", 1024, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructShadowColorCorrection(PropertyGroup* group) {
  ConstructGroup(group, g_ShadowColorCorrection_vtable,
    kShadowColorCorrectionProperties, 12);
}

extern const void* g_TimeSlip_vtable[];

namespace {

constexpr PropertyDefinition kTimeSlipProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"GradationFilterOpacity", 128, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"GradationFilterColor1", 208, PropertyKind::Color,
    1,
    {FloatBits(0.447988003f), FloatBits(0.186461002f),
      FloatBits(0.296819001f), FloatBits(0.0f)}},
  {"GradationFilterColor2", 336, PropertyKind::Color,
    1,
    {FloatBits(0.293469995f), FloatBits(0.154107004f),
      FloatBits(0.406448007f), FloatBits(0.0f)}},
  {"MultiplyColor", 464, PropertyKind::Color,
    1,
    {FloatBits(0.825534999f), FloatBits(0.552610993f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"MultiplyOpacity", 592, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Progress", 672, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"StartFrame", 752, PropertyKind::Float,
    1,
    {FloatBits(25.0f)}},
  {"EndFrame", 832, PropertyKind::Float,
    1,
    {FloatBits(15.0f)}},
  {"FormerRatio", 912, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"MiddleRatio", 992, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"LatterRatio", 1072, PropertyKind::Float,
    1,
    {FloatBits(0.800000012f)}},
};

}

void ConstructTimeSlip(PropertyGroup* group) {
  ConstructGroup(group, g_TimeSlip_vtable,
    kTimeSlipProperties, 12);
}

extern const void* g_SkyBlur_vtable[];

namespace {

constexpr PropertyDefinition kSkyBlurProperties[] = {
  {"Alpha", 56, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"IntensityLevel", 136, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"BlendBegin", 216, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"BlendEnd", 296, PropertyKind::Float,
    1,
    {FloatBits(100.0f)}},
  {"Weight0", 376, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Weight1", 456, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Weight2", 536, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Weight3", 616, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"UseMeshMask", 696, PropertyKind::Boolean,
    1,
    {0}},
  {"DebugDraw", 768, PropertyKind::Boolean,
    0,
    {0}},
};

}

void ConstructSkyBlur(PropertyGroup* group) {
  ConstructGroup(group, g_SkyBlur_vtable,
    kSkyBlurProperties, 10);
}

extern const void* g_HeightFog_vtable[];

namespace {

constexpr PropertyDefinition kHeightFogProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"MaxDensity", 128, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"ApplyHeight", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"CutoffHeight", 288, PropertyKind::Float,
    1,
    {FloatBits(100.0f)}},
  {"Exponent", 368, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"Near", 448, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Far", 528, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Color", 608, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"EV", 736, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"UseRelativeEV", 816, PropertyKind::Boolean,
    0,
    {0}},
  {"RelativeEV", 888, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"FogType", 968, PropertyKind::Integer,
    1,
    {0}},
  {"Saturation", 1048, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"SkyMask", 1128, PropertyKind::Boolean,
    1,
    {0}},
  {"WaterMask", 1200, PropertyKind::Boolean,
    1,
    {1}},
  {"PostSaturation", 1272, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"PostBrightness", 1352, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DistSaturationModifier", 1432, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"DistBrightnessModifier", 1512, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
};

}

void ConstructHeightFog(PropertyGroup* group) {
  ConstructGroup(group, g_HeightFog_vtable,
    kHeightFogProperties, 19);
}

extern const void* g_Mirage_vtable[];

namespace {

constexpr PropertyDefinition kMirageProperties[] = {
  {"Enable", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"Speed", 128, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"StartDistance", 208, PropertyKind::Float,
    1,
    {FloatBits(50.0f)}},
  {"SmoothRange", 288, PropertyKind::Float,
    1,
    {FloatBits(100.0f)}},
  {"Distortion", 368, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"FrecuencyX", 448, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"FrecuencyY", 528, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"DebugMode", 608, PropertyKind::Boolean,
    1,
    {0}},
};

}

void ConstructMirage(PropertyGroup* group) {
  ConstructGroup(group, g_Mirage_vtable,
    kMirageProperties, 8);
}

extern const void* g_SSR_vtable[];

namespace {

constexpr PropertyDefinition kSSRProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"RenderResolution", 128, PropertyKind::Integer,
    1,
    {1}},
  {"GlosinessClip", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"RayMaxDistanceWorld", 288, PropertyKind::Float,
    1,
    {FloatBits(10.0f)}},
  {"RaySamplingCount", 368, PropertyKind::Integer,
    1,
    {32}},
  {"DepthCompareBias", 448, PropertyKind::Float,
    1,
    {FloatBits(0.0299999993f)}},
  {"SurfaceNormalWeight", 528, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"AttenDistanceExp", 608, PropertyKind::Float,
    1,
    {FloatBits(2.0f)}},
  {"RayRandomGenerate", 688, PropertyKind::Boolean,
    1,
    {0}},
  {"BinarySearchSamplingCount", 760, PropertyKind::Integer,
    1,
    {8}},
  {"FillingEdgeGapEnabled", 840, PropertyKind::Boolean,
    1,
    {1}},
  {"ClipRayBouncedBackSide", 912, PropertyKind::Boolean,
    1,
    {0}},
  {"InvisibleNormalOffset", 984, PropertyKind::Boolean,
    1,
    {1}},
  {"AdvancedIntersect", 1056, PropertyKind::Boolean,
    1,
    {1}},
  {"IntensityMultiplier", 1128, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"BaseAccumulationRate", 1208, PropertyKind::Float,
    1,
    {FloatBits(0.300000012f)}},
  {"RejectionSpeed", 1288, PropertyKind::Float,
    1,
    {FloatBits(0.00200000009f)}},
  {"RejectionLuminanceDiff", 1368, PropertyKind::Float,
    1,
    {FloatBits(10000.0f)}},
};

}

void ConstructSSR(PropertyGroup* group) {
  ConstructGroup(group, g_SSR_vtable,
    kSSRProperties, 18);
}

extern const void* g_Painting_vtable[];

namespace {

constexpr PropertyDefinition kPaintingProperties[] = {
  {"Enable", 56, PropertyKind::Boolean,
    1,
    {0}},
  {"ColorNoiseRatio", 128, PropertyKind::Float,
    1,
    {FloatBits(0.319999993f)}},
  {"ColorNoiseIntensity", 208, PropertyKind::Float,
    1,
    {FloatBits(0.0500000007f)}},
  {"ColorNoiseFrequency", 288, PropertyKind::Float,
    1,
    {FloatBits(0.800000012f)}},
  {"NormalEnable", 368, PropertyKind::Boolean,
    1,
    {1}},
  {"NormalHeight", 440, PropertyKind::Float,
    1,
    {FloatBits(0.400000006f)}},
  {"LightIntensity", 520, PropertyKind::Float,
    1,
    {FloatBits(3.0f)}},
  {"LightSoftness", 600, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"LightAzimuth", 680, PropertyKind::Float,
    1,
    {FloatBits(90.0f)}},
  {"LightZenithAngle", 760, PropertyKind::Float,
    1,
    {FloatBits(15.0f)}},
  {"PeelingColor", 848, PropertyKind::Color,
    1,
    {FloatBits(1.0f), FloatBits(1.0f),
      FloatBits(1.0f), FloatBits(0.0f)}},
  {"PeelingAlpha", 976, PropertyKind::Float,
    1,
    {FloatBits(0.400000006f)}},
  {"PeelingVignette", 1056, PropertyKind::Float,
    1,
    {FloatBits(0.699999988f)}},
};

}

void ConstructPainting(PropertyGroup* group) {
  ConstructGroup(group, g_Painting_vtable,
    kPaintingProperties, 13);
}

extern const void* g_Translucency_vtable[];

namespace {

constexpr PropertyDefinition kTranslucencyProperties[] = {
  {"LightDirTerm", 56, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"Variance", 136, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"NormalShift", 216, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"LightDirIntensityLevel", 296, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"AmbientTerm", 376, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"AmbientIntensityLevel", 456, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"ShadowMin", 536, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
};

}

void ConstructTranslucency(PropertyGroup* group) {
  ConstructGroup(group, g_Translucency_vtable,
    kTranslucencyProperties, 7);
}

extern const void* g_ContactShadow_vtable[];

namespace {

constexpr PropertyDefinition kContactShadowProperties[] = {
  {"Enabled", 56, PropertyKind::Boolean,
    1,
    {1}},
  {"RayMaxDistanceWorld", 128, PropertyKind::Float,
    1,
    {FloatBits(0.400000006f)}},
  {"RaySamplingCount", 208, PropertyKind::Integer,
    1,
    {16}},
  {"ThicknessBias", 288, PropertyKind::Float,
    1,
    {FloatBits(0.00100000005f)}},
  {"SelfShadowBias", 368, PropertyKind::Float,
    1,
    {FloatBits(9.99999975e-06f)}},
  {"Opacity", 448, PropertyKind::Float,
    1,
    {FloatBits(0.5f)}},
  {"CameraDistanceFadeNear", 528, PropertyKind::Float,
    1,
    {FloatBits(0.0f)}},
  {"CameraDistanceFadeFar", 608, PropertyKind::Float,
    1,
    {FloatBits(20.0f)}},
  {"CameraDistanceFadeExp", 688, PropertyKind::Float,
    1,
    {FloatBits(1.0f)}},
  {"GrassCasterDisabled", 768, PropertyKind::Boolean,
    1,
    {0}},
  {"MinLightAngle", 840, PropertyKind::Float,
    1,
    {FloatBits(70.0f)}},
};

}

void ConstructContactShadow(PropertyGroup* group) {
  ConstructGroup(group, g_ContactShadow_vtable,
    kContactShadowProperties, 11);
}
