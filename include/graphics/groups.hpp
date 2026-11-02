#pragma once

#include "graphics/settings.hpp"

namespace fw::graphics {

void RegisterProperty(PropertyGroup* group, Property* property);
void ConstructSceneExposure(PropertyGroup* group);
void ConstructBaseShadow(PropertyGroup* group);
void ConstructSceneShadow(PropertyGroup* group);
void ConstructAO(PropertyGroup* group);
void ConstructColorGrading(PropertyGroup* group);
void ConstructChara(PropertyGroup* group);
void ConstructCharaScene(PropertyGroup* group);
void ConstructFog(PropertyGroup* group);
void ConstructGradationFilter(PropertyGroup* group);
void ConstructCloud(PropertyGroup* group);
void ConstructCharaSilhouette(PropertyGroup* group);
void ConstructSceneLight(PropertyGroup* group);
void ConstructVignette(PropertyGroup* group);
void ConstructShadowColorCorrection(PropertyGroup* group);
void ConstructTimeSlip(PropertyGroup* group);
void ConstructSkyBlur(PropertyGroup* group);
void ConstructHeightFog(PropertyGroup* group);
void ConstructMirage(PropertyGroup* group);
void ConstructSSR(PropertyGroup* group);
void ConstructPainting(PropertyGroup* group);
void ConstructTranslucency(PropertyGroup* group);
void ConstructContactShadow(PropertyGroup* group);

}
