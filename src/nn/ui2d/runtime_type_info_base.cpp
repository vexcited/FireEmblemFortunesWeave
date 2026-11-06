#include "nn/ui2d/runtime_type_info.hpp"

// Bases whose static getter also exists out of line, called by the getters
// of the derived classes in runtime_type_info.cpp.
namespace nn::font {

NN_UI2D_RUNTIME_TYPE_INFO_ROOT(Font)
NN_UI2D_RUNTIME_TYPE_INFO(ResFontBase, Font)
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(ResFontBase)

[[gnu::used]] static constexpr auto kResFontBase =
  &ResFontBase::GetRuntimeTypeInfoStatic;

}

namespace nn::ui2d {

NN_UI2D_RUNTIME_TYPE_INFO_ROOT(AnimTransform)
NN_UI2D_RUNTIME_TYPE_INFO_ROOT(TextureInfo)
NN_UI2D_RUNTIME_TYPE_INFO(AnimTransformBasic, AnimTransform)
NN_UI2D_RUNTIME_TYPE_INFO(Animator, AnimTransformBasic)
NN_UI2D_RUNTIME_TYPE_INFO(PlacementTextureInfo, TextureInfo)
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(AnimTransformBasic)
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(Animator)
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(PlacementTextureInfo)

[[gnu::used]] static constexpr auto kAnimTransformBasic =
  &AnimTransformBasic::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kAnimator =
  &Animator::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kPlacementTextureInfo =
  &PlacementTextureInfo::GetRuntimeTypeInfoStatic;

}
