#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <type_traits>

#include "nn/result.hpp"
#include "nn/sf/cmif/client/cmif_client_message.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::sf {

class MemoryResourceAllocationPolicy;

}

namespace nn::sf::cmif::client {

struct DefaultProxyFilterTag;

class CmifBaseObject {
public:
  virtual void* GetProxyKindState() = 0;
};

}

namespace nn::sf::hipc::client {

class Hipc2ClientProxyBaseObject : public cmif::client::CmifBaseObject {};

}

namespace nn::sf::cmif::client::detail {

template <typename Tag>
class ProcessModifierImpl;

template <typename T, typename = void>
struct ArgumentTraits {
  static_assert(sizeof(T) <= sizeof(uint64_t));

  using Descriptor = InRaw<T>;

  static uint64_t Convert(T value) {
    uint64_t raw = 0;
    memcpy(&raw, &value, sizeof(T));
    return raw;
  }
};

template <typename T>
struct ArgumentTraits<T, std::enable_if_t<std::is_integral_v<T> ||
  std::is_enum_v<T>>> {
  using Descriptor = InRaw<T>;

  static uint64_t Convert(T value) {
    return static_cast<uint64_t>(value);
  }
};

template <>
struct ArgumentTraits<float> {
  using Descriptor = InRaw<float>;

  static uint64_t Convert(float value) {
    uint32_t bits;
    memcpy(&bits, &value, sizeof(bits));
    return bits;
  }
};

template <typename T>
struct ArgumentTraits<const T&> {
  using Descriptor = InRawReference<T>;

  static const T* Convert(const T& value) {
    return &value;
  }
};

template <typename T>
struct ArgumentTraits<Out<T>> {
  using Descriptor = OutRaw<T>;

  static T* Convert(Out<T> value) {
    return value.GetPointer();
  }
};

template <typename Kind, bool HasProcessId, typename Signature>
struct ProxyMethodInvoker;

template <typename Kind, bool HasProcessId, typename... Parameters>
struct ProxyMethodInvoker<Kind, HasProcessId, void(Parameters...)> {
  [[gnu::always_inline]] static Result Invoke(
    const typename Kind::ProxyKindState* pState, int methodId,
    Parameters... parameters) {
    return Kind::template Process<HasProcessId,
      typename ArgumentTraits<Parameters>::Descriptor...>(pState,
      ArgumentTraits<Parameters>::Convert(parameters)..., methodId);
  }
};

template <typename Interface, typename Kind, typename AllocationPolicy,
  typename Base, typename Modifier>
class CmifProxyImpl;

template <typename Interface, typename Kind>
class CmifProxyImplBase : public Interface {
protected:
  typename Kind::ProxyKindState m_State;
};

template <typename Interface, typename Kind, typename AllocationPolicy,
  typename Modifier, typename Enable>
class CmifProxy;

}

#define NN_SF_DETAIL_UNPAREN(...) __VA_ARGS__

#define NN_SF_DETAIL_DECLARE_METHOD(id, hasProcessId, name, parameters, \
  arguments) \
  ::nn::Result name parameters { \
    return this->_nn_sf_sync_##name arguments; \
  } \
  virtual ::nn::Result _nn_sf_sync_##name parameters = 0;

#define NN_SF_DETAIL_DEFINE_PROXY_METHOD(id, hasProcessId, name, parameters, \
  arguments) \
  virtual ::nn::Result _nn_sf_sync_##name parameters override { \
    return ::nn::sf::cmif::client::detail::ProxyMethodInvoker<Kind, \
      hasProcessId, void parameters>::Invoke(&this->m_State, id, \
      NN_SF_DETAIL_UNPAREN arguments); \
  }

#define NN_SF_DETAIL_DEFINE_INTERFACE(name, methods) \
  class name : public ::nn::sf::IServiceObject { \
  public: \
    virtual ::nn::sf::cmif::client::CmifBaseObject* GetCmifBaseObject() = 0; \
    virtual const void* GetInterfaceInfo() = 0; \
    methods(NN_SF_DETAIL_DECLARE_METHOD) \
  }

#define NN_SF_DETAIL_DEFINE_PROXY_IMPL(name, methods) \
  namespace nn::sf::cmif::client::detail { \
  template <typename Kind, typename AllocationPolicy, typename Modifier> \
  class CmifProxyImpl<name, Kind, AllocationPolicy, name, Modifier> \
    : public CmifProxyImplBase<name, Kind> { \
  public: \
    methods(NN_SF_DETAIL_DEFINE_PROXY_METHOD) \
  }; \
  }
