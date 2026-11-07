#include "nn/err/detail/err_context_registrar_client.hpp"
#include "nn/err/detail/err_context_series_holder.hpp"

namespace nn::err::detail {

// Only the series still in use are reset.
void DestroyContextSeriesArray(ContextSeriesArray* pArray) {
  auto* pHolders =
    static_cast<ContextSeriesArray::SeriesHolder*>(pArray->storage.series);
  for (size_t i = 0; i < pArray->storage.series_count; i++) {
    ContextSeriesArray::SeriesHolder& holder = pHolders[i];
    if (holder.descriptor.value !=
        ContextSeriesArray::SeriesHolder::InvalidDescriptorValue) {
      holder.descriptor.value =
        ContextSeriesArray::SeriesHolder::InvalidDescriptorValue;
      ResetContextSeries(&holder.series);
    }
  }
}

// The original reaches this one through its exported symbol.
[[gnu::noinline]] ContextRegistrarClient::ContextRegistrarClient(
  ContextRegistrarClient&& other)
  : m_Registrar(other.m_Registrar.Detach(), false),
    m_pArray(other.m_pArray), m_pResource(other.m_pResource) {
  other.m_pArray = nullptr;
  other.m_pResource = nullptr;
  MoveRawContext(&m_Context, &other.m_Context);
  m_Result = other.m_Result;
}

ContextRegistrarClient& ContextRegistrarClient::operator=(
  ContextRegistrarClient&& other) {
  ContextRegistrarClient moved(static_cast<ContextRegistrarClient&&>(other));
  m_Registrar.Swap(moved.m_Registrar);
  ContextSeriesArray* pArray = m_pArray;
  m_pArray = moved.m_pArray;
  moved.m_pArray = pArray;
  MemoryResource* pResource = m_pResource;
  m_pResource = moved.m_pResource;
  moved.m_pResource = pResource;
  AssignRawContext(&m_Context, &moved.m_Context);
  const Result result = m_Result;
  m_Result = moved.m_Result;
  moved.m_Result = result;
  return *this;
}

void ContextRegistrarClient::Initialize(
  sf::SharedPointer<context::IContextRegistrar>&& registrar,
  ContextSeriesArray* pArray, MemoryResource* pResource) {
  sf::SharedPointer<context::IContextRegistrar>(registrar.Detach(), false)
    .Swap(m_Registrar);
  m_pArray = pArray;
  m_pResource = pResource;
}

void ContextRegistrarClient::AddContext(RawContext&& context, Result result) {
  AssignRawContext(&m_Context, &context);
  m_Result = result;
}

}
