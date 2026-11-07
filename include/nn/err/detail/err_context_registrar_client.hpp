#pragma once

#include "nn/err/context_series.hpp"
#include "nn/memory_resource.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::err::context {

class IContextRegistrar : public sf::IServiceObject {};

}

namespace nn::err::detail {

class ContextRegistrarClient {
 public:
  ContextRegistrarClient(ContextRegistrarClient&& other);

  ~ContextRegistrarClient() {
    void* pData = m_Context.data;
    m_Context.data = nullptr;
    if (pData != nullptr) {
      m_Context.deleter(pData);
    }
  }

  ContextRegistrarClient& operator=(ContextRegistrarClient&& other);
  void Initialize(sf::SharedPointer<context::IContextRegistrar>&& registrar,
    ContextSeriesArray* pArray, MemoryResource* pResource);
  void AddContext(RawContext&& context, Result result);

 private:
  sf::SharedPointer<context::IContextRegistrar> m_Registrar;
  ContextSeriesArray* m_pArray;
  MemoryResource* m_pResource;
  RawContext m_Context;
  Result m_Result;
};

void DestroyContextSeriesArray(ContextSeriesArray* pArray) asm(
  "_ZN2nn3err6detail18ContextSeriesArrayD2Ev");

}
