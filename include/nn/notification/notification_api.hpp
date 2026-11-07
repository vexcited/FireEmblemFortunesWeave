#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::time {

enum DayOfWeek : int32_t {};

}

namespace nn::notification {

struct AlarmSettingId {
  uint16_t value;
};

struct AlarmTime {
  int32_t hour;
  int32_t minute;
};

// A day keeps its hour in the high byte, all bits set disables it.
class WeeklyScheduleAlarmSetting {
public:
  static constexpr uint16_t DisabledDay = 0xffff;

  bool IsEnabled(time::DayOfWeek day) const;
  AlarmTime GetSetting(time::DayOfWeek day) const;

  uint8_t reserved[0xa];
  uint16_t days[7];
};

struct AlarmSetting {
  WeeklyScheduleAlarmSetting* GetWeeklyScheduleAlarmSetting() const;

  AlarmSettingId id;
  uint8_t unknown2;
  uint8_t unknown3;
  uint8_t reserved4[4];
  account::Uid uid;
  uint64_t unknown18;
  uint8_t reserved20[8];
  WeeklyScheduleAlarmSetting weekly;
};

static_assert(sizeof(AlarmSetting) == 0x40);

class WeeklyScheduleAlarmSettingBuilder {
public:
  WeeklyScheduleAlarmSettingBuilder();
  explicit WeeklyScheduleAlarmSettingBuilder(const AlarmSetting& setting);

  void SetUid(account::Uid uid);
  void Enable(time::DayOfWeek day, int hour, int minute);
  void Disable(time::DayOfWeek day);
  AlarmSetting Get() const;

private:
  AlarmSetting m_Setting;
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
