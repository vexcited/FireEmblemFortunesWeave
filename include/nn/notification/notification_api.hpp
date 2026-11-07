#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::notification {

struct AlarmSetting;

struct AlarmSettingId {
  uint16_t value;
};

namespace detail {

class INotifierInterface : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

class INotificationServicesCommon : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result UpdateAlarmSetting(const AlarmSetting& setting,
    const sf::InBuffer& parameter) = 0;
  virtual Result ListAlarmSettings(sf::Out<int32_t> pOutCount,
    const sf::OutArray<AlarmSetting>& settings) = 0;
  virtual Result LoadApplicationParameter(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& parameter, AlarmSettingId id) = 0;
  virtual Result DeleteAlarmSetting(AlarmSettingId id) = 0;
};

}

sf::SharedPointer<detail::INotificationServicesCommon>
  GetNotificationServicesCommon();

class Notifier {
public:
  Notifier(Notifier&& other);
  ~Notifier();
  Notifier& operator=(Notifier&& other);

  void GetSystemEvent(os::SystemEvent* pOutEvent);

private:
  sf::SharedPointer<detail::INotifierInterface> m_pNotifier;
};

void UpdateAlarmSetting(const AlarmSetting& setting);
void UpdateAlarmSetting(const AlarmSetting& setting, const void* parameter,
  size_t size);
int ListAlarmSettings(AlarmSetting* pOutSettings, int count);
size_t LoadApplicationParameter(void* pOutParameter, size_t size,
  AlarmSettingId id);
void DeleteAlarmSetting(AlarmSettingId id);

}
