#include <stddef.h>

#include <utility>

#include "nn/nfp/nfp_client.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::nfp::client {

struct CreateDebugManagerByHipcTag;

}

namespace nn::nfp::client {

struct CreateSystemManagerByHipcTag;

}

namespace nn::nfp::client {

struct CreateUserManagerByHipcTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<nfp::detail::IDebug, Kind, AllocationPolicy,
  nfp::detail::IDebug, Modifier>
  : public CmifProxyImplBase<nfp::detail::IDebug, Kind> {
public:
  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result ListDevices(const sf::OutArray<nfp::DeviceHandle>& p0,
    int32_t* p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutArray<nfp::DeviceHandle>&, int32_t*)>::Invoke(
      &this->m_State, 2, p0, p1);
  }

  Result StartDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 3, p0);
  }

  Result StopDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 4, p0);
  }

  Result Mount(nfp::DeviceHandle p0, nfp::ModelType p1,
    nfp::MountTarget p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, nfp::ModelType, nfp::MountTarget)>::Invoke(
      &this->m_State, 5, p0, p1, p2);
  }

  Result Unmount(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 6, p0);
  }

  Result OpenApplicationArea(nfp::DeviceHandle p0, uint32_t p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t)>::Invoke(&this->m_State, 7, p0, p1);
  }

  Result GetApplicationArea(const sf::OutBuffer& p0, uint32_t* p1,
    nfp::DeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, uint32_t*, nfp::DeviceHandle)>::Invoke(
      &this->m_State, 8, p0, p1, p2);
  }

  Result SetApplicationArea(nfp::DeviceHandle p0,
    const sf::InBuffer& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, const sf::InBuffer&)>::Invoke(&this->m_State, 9,
      p0, p1);
  }

  Result Flush(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 10, p0);
  }

  Result CreateApplicationArea(nfp::DeviceHandle p0, uint32_t p1,
    const sf::InBuffer& p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 12, p0, p1, p2);
  }

  Result AttachActivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 17,
      p0, p1);
  }

  Result AttachDeactivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 18,
      p0, p1);
  }

  Result GetDeviceState(int32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 20, p0, p1);
  }

  Result GetNpadId(uint32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 21, p0, p1);
  }

  Result GetApplicationAreaSize(uint32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 22, p0, p1);
  }

  Result AttachAvailabilityChangeEvent(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 23, p0);
  }

  Result RecreateApplicationArea(nfp::DeviceHandle p0, uint32_t p1,
    const sf::InBuffer& p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 24, p0, p1, p2);
  }

  Result Format(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 100, p0);
  }

  Result DeleteRegisterInfo(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 104, p0);
  }

  Result DeleteApplicationArea(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 105, p0);
  }

  Result ExistsApplicationArea(bool* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, nfp::DeviceHandle)>::Invoke(&this->m_State, 106, p0, p1);
  }

  Result FlushDebug(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 202, p0);
  }

  Result BreakTag(nfp::DeviceHandle p0, nfp::BreakType p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, nfp::BreakType)>::Invoke(&this->m_State, 203, p0,
      p1);
  }

  Result ReadBackupData(const sf::OutBuffer& p0, int32_t* p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, int32_t*)>::Invoke(&this->m_State, 204, p0,
      p1);
  }

  Result WriteBackupData(const sf::InBuffer& p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 205, p0);
  }

  Result WriteNtf(nfp::DeviceHandle p0, const sf::InBuffer& p1,
    nfp::NtfWriteType p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, const sf::InBuffer&, nfp::NtfWriteType)>::Invoke(
      &this->m_State, 206, p0, p1, p2);
  }

  Result GetExtendedApplicationArea(const sf::OutBuffer& p0, uint32_t* p1,
    nfp::DeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, uint32_t*, nfp::DeviceHandle)>::Invoke(
      &this->m_State, 302, p0, p1, p2);
  }

  Result SetExtendedApplicationArea(nfp::DeviceHandle p0,
    const sf::InBuffer& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, const sf::InBuffer&)>::Invoke(&this->m_State, 303,
      p0, p1);
  }

  Result BreakExtendedApplicationArea(nfp::DeviceHandle p0,
    nfp::BreakType p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, nfp::BreakType)>::Invoke(&this->m_State, 500, p0,
      p1);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<nfp::detail::ISystem, Kind, AllocationPolicy,
  nfp::detail::ISystem, Modifier>
  : public CmifProxyImplBase<nfp::detail::ISystem, Kind> {
public:
  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result ListDevices(const sf::OutArray<nfp::DeviceHandle>& p0,
    int32_t* p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutArray<nfp::DeviceHandle>&, int32_t*)>::Invoke(
      &this->m_State, 2, p0, p1);
  }

  Result StartDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 3, p0);
  }

  Result StopDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 4, p0);
  }

  Result Mount(nfp::DeviceHandle p0, nfp::ModelType p1,
    nfp::MountTarget p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, nfp::ModelType, nfp::MountTarget)>::Invoke(
      &this->m_State, 5, p0, p1, p2);
  }

  Result Unmount(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 6, p0);
  }

  Result Flush(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 10, p0);
  }

  Result AttachActivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 17,
      p0, p1);
  }

  Result AttachDeactivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 18,
      p0, p1);
  }

  Result GetDeviceState(int32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 20, p0, p1);
  }

  Result GetNpadId(uint32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 21, p0, p1);
  }

  Result AttachAvailabilityChangeEvent(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 23, p0);
  }

  Result Format(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 100, p0);
  }

  Result DeleteRegisterInfo(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 104, p0);
  }

  Result DeleteApplicationArea(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 105, p0);
  }

  Result ExistsApplicationArea(bool* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, nfp::DeviceHandle)>::Invoke(&this->m_State, 106, p0, p1);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<nfp::detail::IUser, Kind, AllocationPolicy,
  nfp::detail::IUser, Modifier>
  : public CmifProxyImplBase<nfp::detail::IUser, Kind> {
public:
  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result ListDevices(const sf::OutArray<nfp::DeviceHandle>& p0,
    int32_t* p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutArray<nfp::DeviceHandle>&, int32_t*)>::Invoke(
      &this->m_State, 2, p0, p1);
  }

  Result StartDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 3, p0);
  }

  Result StopDetection(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 4, p0);
  }

  Result Mount(nfp::DeviceHandle p0, nfp::ModelType p1,
    nfp::MountTarget p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, nfp::ModelType, nfp::MountTarget)>::Invoke(
      &this->m_State, 5, p0, p1, p2);
  }

  Result Unmount(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 6, p0);
  }

  Result OpenApplicationArea(nfp::DeviceHandle p0, uint32_t p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t)>::Invoke(&this->m_State, 7, p0, p1);
  }

  Result GetApplicationArea(const sf::OutBuffer& p0, uint32_t* p1,
    nfp::DeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, uint32_t*, nfp::DeviceHandle)>::Invoke(
      &this->m_State, 8, p0, p1, p2);
  }

  Result SetApplicationArea(nfp::DeviceHandle p0,
    const sf::InBuffer& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, const sf::InBuffer&)>::Invoke(&this->m_State, 9,
      p0, p1);
  }

  Result Flush(nfp::DeviceHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle)>::Invoke(&this->m_State, 10, p0);
  }

  Result CreateApplicationArea(nfp::DeviceHandle p0, uint32_t p1,
    const sf::InBuffer& p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 12, p0, p1, p2);
  }

  Result AttachActivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 17,
      p0, p1);
  }

  Result AttachDeactivateEvent(sf::NativeHandle* p0,
    nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, nfp::DeviceHandle)>::Invoke(&this->m_State, 18,
      p0, p1);
  }

  Result GetDeviceState(int32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 20, p0, p1);
  }

  Result GetNpadId(uint32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 21, p0, p1);
  }

  Result GetApplicationAreaSize(uint32_t* p0, nfp::DeviceHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t*, nfp::DeviceHandle)>::Invoke(&this->m_State, 22, p0, p1);
  }

  Result AttachAvailabilityChangeEvent(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 23, p0);
  }

  Result RecreateApplicationArea(nfp::DeviceHandle p0, uint32_t p1,
    const sf::InBuffer& p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, uint32_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 24, p0, p1, p2);
  }

  Result GetExtendedApplicationArea(const sf::OutBuffer& p0, uint32_t* p1,
    nfp::DeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, uint32_t*, nfp::DeviceHandle)>::Invoke(
      &this->m_State, 302, p0, p1, p2);
  }

  Result SetExtendedApplicationArea(nfp::DeviceHandle p0,
    const sf::InBuffer& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(nfp::DeviceHandle, const sf::InBuffer&)>::Invoke(&this->m_State, 303,
      p0, p1);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

using CreateDebugManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::nfp::client::CreateDebugManagerByHipcTag>>;

using CreateSystemManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::nfp::client::CreateSystemManagerByHipcTag>>;

using CreateUserManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::nfp::client::CreateUserManagerByHipcTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::nfp::detail::IDebug, DomainKind, CreateDebugManagerByHipcPolicy,
  nn::nfp::detail::IDebug, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::nfp::detail::ISystem, DomainKind, CreateSystemManagerByHipcPolicy,
  nn::nfp::detail::ISystem, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::nfp::detail::IUser, DomainKind, CreateUserManagerByHipcPolicy,
  nn::nfp::detail::IUser, DefaultModifier>;
