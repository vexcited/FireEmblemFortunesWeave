#include "nn/ui2d/runtime_type_info.hpp"

// The roots of the type info chains. Their getters are reached through the
// global offset table, their static getters also exist out of line.
namespace nn::font {

NN_UI2D_RUNTIME_TYPE_INFO_BASE(Font)

template<typename T>
NN_UI2D_RUNTIME_TYPE_INFO_BASE(TagProcessorBase)

NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(Font)

template<typename T>
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(TagProcessorBase<T>)

template class TagProcessorBase<char>;

[[gnu::used]] static constexpr auto kFont = &Font::GetRuntimeTypeInfoStatic;

}

namespace nn::ui2d {

NN_UI2D_RUNTIME_TYPE_INFO_BASE(AnimTransform)
NN_UI2D_RUNTIME_TYPE_INFO_BASE(Layout)
NN_UI2D_RUNTIME_TYPE_INFO_BASE(Pane)
NN_UI2D_RUNTIME_TYPE_INFO_BASE(ResourceAccessor)
NN_UI2D_RUNTIME_TYPE_INFO_BASE(TextureInfo)

namespace detail {

NN_UI2D_RUNTIME_TYPE_INFO_BASE(DynamicRenderingTexture)
NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(DynamicRenderingTexture)

[[gnu::used]] static constexpr auto kDynamicRenderingTexture =
  &DynamicRenderingTexture::GetRuntimeTypeInfoStatic;

}

NN_UI2D_RUNTIME_TYPE_INFO_DEFINITION(ResourceAccessor)

[[gnu::used]] static constexpr auto kAnimTransform =
  &AnimTransform::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kLayout = &Layout::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kPane = &Pane::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kResourceAccessor =
  &ResourceAccessor::GetRuntimeTypeInfoStatic;
[[gnu::used]] static constexpr auto kTextureInfo =
  &TextureInfo::GetRuntimeTypeInfoStatic;

}
