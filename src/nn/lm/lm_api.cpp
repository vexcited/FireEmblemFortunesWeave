#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/lm/lm_dev_notification.hpp"
#include "nn/lm/lm_services.hpp"
#include "nn/os/system_event.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/span.hpp"

namespace nn::diag {

struct LogMetaData;
struct LogBody;

namespace detail {

void ReplaceDefaultLogObserver(void (*observer)(const LogMetaData& metaData,
  const LogBody& body, void* pArgument));

}

}

namespace nn::lm {

class HashedLogger {
public:
  HashedLogger();
  [[gnu::visibility("hidden")]] ~HashedLogger();

  void Push(const void* pData, uint16_t size);

private:
  uint8_t m_Storage[0x98];
};

namespace detail {

// The default observer that sends every log line to the logger.
[[gnu::visibility("hidden")]] void LogObserver(
  const diag::LogMetaData& metaData, const diag::LogBody& body,
  void* pArgument);

class ShimLibraryGlobal {
public:
  static ShimLibraryGlobal& GetInstance() {
    static ShimLibraryGlobal s_Instance;
    return s_Instance;
  }

  [[gnu::noinline, gnu::visibility("hidden")]] ShimLibraryGlobal();
  [[gnu::visibility("hidden")]] ~ShimLibraryGlobal();

  ILogger* GetLogger() const {
    return m_pLogger;
  }

private:
  sf::SharedPointer<ILogService> m_Service;
  ILogger* m_pLogger;
};

class IDevNotificationReceiver : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetReceiveEventHandle(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result Receive(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
};

class ILogGetterWithNotifications : public ILogGetter {
public:
  virtual Result OpenDevNotificationReceiver(
    sf::Out<sf::SharedPointer<IDevNotificationReceiver>> pOutReceiver,
    uint32_t moduleId) = 0;
};

class ShimLibraryForLogGetter {
public:
  static ShimLibraryForLogGetter& GetInstance() {
    static ShimLibraryForLogGetter s_Instance;
    return s_Instance;
  }

  ShimLibraryForLogGetter() : m_pGetter(CreateLogGetterByHipc().Detach()) {}
  [[gnu::visibility("hidden")]] ~ShimLibraryForLogGetter();

  ILogGetter* GetGetter() const {
    return m_pGetter;
  }

private:
  ILogGetter* m_pGetter;
};

ShimLibraryGlobal::ShimLibraryGlobal() {
  sf::SharedPointer<ILogService> service = CreateLogServiceByHipc();
  sf::SharedPointer<ILogger> logger;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->OpenLogger(
    sf::Out<sf::SharedPointer<ILogger>>(&logger), 0));
  m_Service = service;
  m_pLogger = logger.Detach();
}

ShimLibraryGlobal::~ShimLibraryGlobal() {
  m_pLogger->Release();
}

ShimLibraryForLogGetter::~ShimLibraryForLogGetter() {
  m_pGetter->Release();
}

}

enum DevNotificationReceiverModuleId : uint32_t {};

// Notifications arrive in one fixed buffer, read back as a list.
class DevNotificationReceiver {
public:
  void GetReceiveEvent(os::SystemEventType* pEvent,
    os::EventClearMode clearMode);
  void Receive();
  DevNotificationListReader ReadNotifications() const;

  DevNotificationReceiverModuleId m_ModuleId;
  sf::SharedPointer<detail::IDevNotificationReceiver> m_Proxy;
  uint32_t m_Size;
  alignas(8) uint8_t m_Buffer[0x4a00];
};

void InitializeDevNotificationReceiver(DevNotificationReceiver* pReceiver,
  DevNotificationReceiverModuleId moduleId) {
  sf::SharedPointer<detail::IDevNotificationReceiver> receiver;
  auto* pGetter = static_cast<detail::ILogGetterWithNotifications*>(
    detail::ShimLibraryForLogGetter::GetInstance().GetGetter());
  NN_ABORT_UNLESS_RESULT_SUCCESS(pGetter->OpenDevNotificationReceiver(
    sf::Out<sf::SharedPointer<detail::IDevNotificationReceiver>>(&receiver),
    moduleId));
  pReceiver->m_ModuleId = moduleId;
  pReceiver->m_Proxy = receiver;
}

void DevNotificationReceiver::GetReceiveEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Proxy->GetReceiveEventHandle(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
}

void DevNotificationReceiver::Receive() {
  m_Size = 0;
  uint32_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Proxy->Receive(sf::Out<uint32_t>(&size),
    sf::OutBuffer(m_Buffer, sizeof(m_Buffer))));
  m_Size = size;
}

DevNotificationListReader DevNotificationReceiver::ReadNotifications() const {
  return DevNotificationListReader(Span<const uint8_t>(m_Buffer, m_Size));
}

void Initialize() {
  detail::ShimLibraryGlobal::GetInstance();
  diag::detail::ReplaceDefaultLogObserver(detail::LogObserver);
}

void SetDestination(uint32_t destination) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryGlobal::GetInstance()
    .GetLogger()->SetDestination(destination));
}

void StartLogging() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->StartLogging());
}

void StopLogging() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->StopLogging());
}

void GetLog(char* pBuffer, size_t size, int64_t* pOutDropCount,
  uint32_t* pOutProcessId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ShimLibraryForLogGetter::GetInstance()
    .GetGetter()->GetLog(sf::OutAutoSelectBuffer(pBuffer, size),
      sf::Out<int64_t>(pOutDropCount), sf::Out<uint32_t>(pOutProcessId)));
}

namespace detail {

void TransmitHashedLogForSystem(const void* pData, uint32_t size) {
  static HashedLogger s_Logger;
  s_Logger.Push(pData, static_cast<uint16_t>(size));
}

}

}
