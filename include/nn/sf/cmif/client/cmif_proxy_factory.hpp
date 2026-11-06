#pragma once

#include <type_traits>

#include "nn/sf/cmif/client/cmif_client_message.hpp"
#include "nn/sf/cmif/client/cmif_proxy.hpp"
#include "nn/sf/sf_object_impl_factory.hpp"

namespace nn::sf::cmif::client::detail {

// The number of methods of an interface, for the proxies built without their
// method stubs.
template <typename Interface>
struct ProxyMethodCount;

// One vtable slot per method that the proxy does not implement here.
template <int Count>
class ReservedProxyMethods : public ReservedProxyMethods<Count - 1> {
public:
  virtual Result ReservedMethod(std::integral_constant<int, Count - 1>);
};

template <>
class ReservedProxyMethods<0> : public CmifProxyObject {};

// The method table of a proxy, specialized for the interfaces whose methods
// are implemented here.
template <typename Interface, typename Kind>
class CmifProxyMethods
  : public ReservedProxyMethods<ProxyMethodCount<Interface>::Value> {};

template <typename Interface, typename Kind>
class CmifProxyMethodsBase;

template <typename Interface, typename Kind>
class CmifProxyBase : public CmifProxyMethods<Interface, Kind> {
protected:
  friend class CmifProxyMethodsBase<Interface, Kind>;

  typename Kind::ProxyKindState m_State = {};
};

template <typename Interface, typename Kind, typename AllocationPolicy,
  typename Modifier>
class CmifProxy<Interface, Kind, AllocationPolicy, Modifier, void>
  : public CmifProxyBase<Interface, Kind>,
    public hipc::client::Hipc2ClientProxyBaseObject {
public:
  CmifBaseObject* GetCmifBaseObject() override {
    return this;
  }

  const void* GetInterfaceInfo() override {
    return nullptr;
  }

  void* GetProxyKindState() override {
    return &this->m_State;
  }
};

using DefaultModifier = ProcessModifierImpl<DefaultProxyFilterTag>;

template <typename Interface, typename Kind>
using DefaultProxy = CmifProxy<Interface, Kind, MemoryResourceAllocationPolicy,
  DefaultModifier, void>;

template <typename Interface, typename Kind>
using DefaultProxyFactory = sf::detail::ObjectImplFactoryWithStatefulAllocator<
  DefaultProxy<Interface, Kind>, MemoryResourceAllocationPolicy>;

// Creates the proxies that receive the out objects of a message. A failed
// allocation clears the object list so that the next creations are skipped.
struct OutObjectCreator {
  MemoryResource* pAllocator;
  CmifProxyObject** ppObjects;

  template <typename Interface, typename Kind>
  [[gnu::noinline]] void Create(int index) {
    if (ppObjects == nullptr) {
      return;
    }
    CmifProxyObject* pObject = DefaultProxyFactory<Interface, Kind>::Create(
      pAllocator);
    if (pObject == nullptr) {
      ppObjects = nullptr;
      return;
    }
    CmifProxyObject* pPrevious = ppObjects[index];
    ppObjects[index] = pObject;
    if (pPrevious != nullptr) {
      pPrevious->Release();
    }
  }
};

// Releases the proxies that no message took.
template <int Count>
struct OutObjectHolder {
  CmifProxyObject* pObjects[Count] = {};

  ~OutObjectHolder() {
    for (CmifProxyObject* pObject : pObjects) {
      if (pObject != nullptr) {
        pObject->Release();
      }
    }
  }
};

constexpr Result ResultOutObjectAllocationFailed() {
  return Result{0x160a};
}

// The body of a proxy method that returns one object: the proxy for the
// object is created first, then the message moves it into the output.
template <typename Kind, bool HasProcessId, int MethodId, typename Interface,
  typename... Parameters>
[[gnu::always_inline]] inline Result InvokeWithOutObject(
  MemoryResource* pAllocator, const typename Kind::ProxyKindState* pState,
  const Out<SharedPointer<Interface>>& out, const Parameters&... params) {
  OutObjectHolder<1> holder;
  OutObjectCreator creator = {pAllocator, holder.pObjects};
  creator.Create<Interface, Kind>(0);
  if (creator.ppObjects == nullptr) {
    return ResultOutObjectAllocationFailed();
  }
  SharedPointer<IServiceObject>* targets[] = {
    reinterpret_cast<SharedPointer<IServiceObject>*>(out.GetPointer())};
  return Kind::template ProcessWithObjects<HasProcessId, 1,
    typename ArgumentTraits<Parameters>::Descriptor...>(pState, targets,
    ArgumentTraits<Parameters>::Convert(params)..., MethodId,
    holder.pObjects);
}

// The same body kept out of line, where several methods share it.
template <typename Kind, bool HasProcessId, int MethodId, typename Interface,
  typename... Parameters>
[[gnu::noinline]] Result ProcessWithOutObject(MemoryResource* pAllocator,
  const typename Kind::ProxyKindState* pState,
  const Out<SharedPointer<Interface>>& out, const Parameters&... params) {
  return InvokeWithOutObject<Kind, HasProcessId, MethodId>(pAllocator,
    pState, out, params...);
}

// Creates the proxy of an out object from a static allocator. The original
// instantiations have internal linkage, so the creation lost its constant
// index and the creator keeps a null allocator. The creation itself depends
// on the allocator of each service and is not reconstructed here.
template <typename AllocationPolicy>
struct StatelessOutObjectCreator {
  MemoryResource* pAllocator;
  CmifProxyObject** ppObjects;

  template <typename Interface, typename Kind>
  [[gnu::noinline]] void Create();
};

template <typename Kind, bool HasProcessId, int MethodId,
  typename AllocationPolicy, typename Interface, typename... Parameters>
[[gnu::always_inline]] inline Result InvokeWithStatelessOutObject(
  const typename Kind::ProxyKindState* pState,
  const Out<SharedPointer<Interface>>& out, const Parameters&... params) {
  OutObjectHolder<1> holder;
  StatelessOutObjectCreator<AllocationPolicy> creator = {nullptr,
    holder.pObjects};
  creator.template Create<Interface, Kind>();
  if (creator.ppObjects == nullptr) {
    return ResultOutObjectAllocationFailed();
  }
  SharedPointer<IServiceObject>* targets[] = {
    reinterpret_cast<SharedPointer<IServiceObject>*>(out.GetPointer())};
  return Kind::template ProcessWithObjects<HasProcessId, 1,
    typename ArgumentTraits<Parameters>::Descriptor...>(pState, targets,
    ArgumentTraits<Parameters>::Convert(params)..., MethodId,
    holder.pObjects);
}

// Common part of the method tables, it reaches the state of the proxy and
// the allocator of the object that holds it.
template <typename Interface, typename Kind>
class CmifProxyMethodsBase : public CmifProxyObject {
protected:
  template <bool HasProcessId, int MethodId, typename Target,
    typename... Parameters>
  [[gnu::always_inline]] Result ProcessWithOutObject(
    const Out<SharedPointer<Target>>& out, const Parameters&... params) {
    DefaultProxy<Interface, Kind>* pProxy =
      static_cast<DefaultProxy<Interface, Kind>*>(this);
    return InvokeWithOutObject<Kind, HasProcessId, MethodId>(
      DefaultProxyFactory<Interface, Kind>::GetAllocator(pProxy),
      &pProxy->m_State, out, params...);
  }
};

#define NN_SF_DETAIL_RESERVED_PROXY_METHOD(index) \
  virtual Result ReservedMethod(std::integral_constant<int, index>);

}
