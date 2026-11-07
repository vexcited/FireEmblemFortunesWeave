#include "nn/diag/diag_abort.hpp"
#include "nn/notification/notification_api.hpp"

namespace nn::account {

Result GetUserExistence(bool* pOutExistence, const Uid& uid);

}

namespace nn::notification {

bool WeeklyScheduleAlarmSetting::IsEnabled(time::DayOfWeek day) const {
  const uint16_t value = days[day];
  return (value >> 8) < 24 && (value & 0xff) < 60;
}

AlarmTime WeeklyScheduleAlarmSetting::GetSetting(time::DayOfWeek day) const {
  const uint16_t value = days[day];
  return {value >> 8, value & 0xff};
}

WeeklyScheduleAlarmSettingBuilder::WeeklyScheduleAlarmSettingBuilder()
  : m_Setting() {
  m_Setting.unknown2 = 0;
  WeeklyScheduleAlarmSetting* pWeekly =
    m_Setting.GetWeeklyScheduleAlarmSetting();
  for (uint16_t& day : pWeekly->days) {
    day = WeeklyScheduleAlarmSetting::DisabledDay;
  }
}

// Only the identity, owner and schedule carry over from the source.
WeeklyScheduleAlarmSettingBuilder::WeeklyScheduleAlarmSettingBuilder(
  const AlarmSetting& setting) : m_Setting() {
  m_Setting.id = setting.id;
  m_Setting.unknown2 = 0;
  m_Setting.unknown3 = setting.unknown3;
  m_Setting.uid = setting.uid;
  m_Setting.unknown18 = 0;
  m_Setting.weekly = setting.weekly;
}

void WeeklyScheduleAlarmSettingBuilder::SetUid(account::Uid uid) {
  bool exists = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(account::GetUserExistence(&exists, uid));
  NN_ABORT_UNLESS(exists);
  m_Setting.uid = uid;
}

void WeeklyScheduleAlarmSettingBuilder::Enable(time::DayOfWeek day, int hour,
  int minute) {
  m_Setting.GetWeeklyScheduleAlarmSetting()->days[day] =
    static_cast<uint16_t>(minute | hour << 8);
}

void WeeklyScheduleAlarmSettingBuilder::Disable(time::DayOfWeek day) {
  m_Setting.GetWeeklyScheduleAlarmSetting()->days[day] =
    WeeklyScheduleAlarmSetting::DisabledDay;
}

AlarmSetting WeeklyScheduleAlarmSettingBuilder::Get() const {
  return m_Setting;
}

}
