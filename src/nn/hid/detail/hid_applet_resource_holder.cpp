#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_applet_resource_holder.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultAppletResourceActivationUpperLimitOver = {0x822ca};
constexpr Result ResultAppletResourceDeactivationLowerLimitOver = {0x824ca};
constexpr Result ResultAppletResourceSharedMemoryNotMapped = {0x826ca};
constexpr Result ResultAppletResourceUserIdMismatch = {0x82aca};

constexpr int ActivationCountMax = 0x7ffffffe;

}

AppletResourceHolder::AppletResourceHolder() :
  m_Mutex(), m_IsAppletResourceUserIdSet(false), m_AppletResourceUserId(),
  m_ActivationCount(0), m_AppletResource(), m_SharedMemoryHolder(),
  m_pSharedMemory(nullptr) {}

Result AppletResourceHolder::SetAppletResourceUserId(
  applet::AppletResourceUserId aruid) {
  m_Mutex.Lock();
  Result result = Result{};
  if (!m_IsAppletResourceUserIdSet) {
    m_AppletResourceUserId = aruid;
    m_IsAppletResourceUserIdSet = true;
  }
  else if (aruid.lower != m_AppletResourceUserId.lower) {
    result = ResultAppletResourceUserIdMismatch;
  }
  m_Mutex.Unlock();
  return result;
}

Result AppletResourceHolder::Activate() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  Result result = ResultAppletResourceActivationUpperLimitOver;
  m_Mutex.Lock();
  if (m_ActivationCount == 0) {
    result = proxy->CreateAppletResource(
      sf::Out<sf::SharedPointer<IAppletResource>>(&m_AppletResource),
      m_AppletResourceUserId);
    if (result.IsSuccess()) {
      bool isActivated = false;
      {
        sf::NativeHandle handle;
        result = m_AppletResource->GetSharedMemoryHandle(
          sf::Out<sf::NativeHandle>(&handle));
        if (result.IsSuccess()) {
          m_SharedMemoryHolder.Attach(handle.GetOsHandle(),
            handle.IsManaged());
          handle.Detach();
          if (m_SharedMemoryHolder.GetAddress() == nullptr) {
            m_SharedMemoryHolder.Finalize();
            result = ResultAppletResourceSharedMemoryNotMapped;
          }
          else {
            m_pSharedMemory.store(m_SharedMemoryHolder.GetAddress(),
              std::memory_order_release);
            isActivated = true;
          }
        }
      }
      if (isActivated) {
        ++m_ActivationCount;
        result = Result{};
      }
      else {
        m_AppletResource.Reset();
      }
    }
  }
  else if (m_ActivationCount != ActivationCountMax) {
    ++m_ActivationCount;
    result = Result{};
  }
  m_Mutex.Unlock();
  return result;
}

Result AppletResourceHolder::Deactivate() {
  m_Mutex.Lock();
  Result result = Result{};
  if (m_ActivationCount == 0) {
    result = ResultAppletResourceDeactivationLowerLimitOver;
  }
  else if (--m_ActivationCount == 0) {
    m_pSharedMemory.store(nullptr, std::memory_order_release);
    m_SharedMemoryHolder.Finalize();
    m_AppletResource.Reset();
  }
  m_Mutex.Unlock();
  return result;
}

server::SharedMemoryFormat* AppletResourceHolder::GetSharedMemoryAddress() {
  return m_pSharedMemory.load(std::memory_order_acquire);
}

AppletResourceHolder& GetAppletResourceHolder() {
  return utility::StaticObject<AppletResourceHolder>::Get();
}

}
