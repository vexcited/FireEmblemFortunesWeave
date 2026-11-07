#include <utility>

#include "nn/diag/diag_abort.hpp"
#include "nn/notification/notification_api.hpp"

namespace nn::notification {

Notifier& Notifier::operator=(Notifier&& other) {
  Notifier temporary(std::move(other));
  m_pNotifier.Swap(temporary.m_pNotifier);
  return *this;
}

void UpdateAlarmSetting(const AlarmSetting& setting, const void* parameter,
  size_t size) {
  sf::SharedPointer<detail::INotificationServicesCommon> service =
    GetNotificationServicesCommon();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->UpdateAlarmSetting(setting,
    sf::InBuffer(parameter, size)));
}

void UpdateAlarmSetting(const AlarmSetting& setting) {
  sf::SharedPointer<detail::INotificationServicesCommon> service =
    GetNotificationServicesCommon();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->UpdateAlarmSetting(setting,
    sf::InBuffer(nullptr, 0)));
}

int ListAlarmSettings(AlarmSetting* pOutSettings, int count) {
  sf::SharedPointer<detail::INotificationServicesCommon> service =
    GetNotificationServicesCommon();
  int32_t listed = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->ListAlarmSettings(
    sf::Out<int32_t>(&listed),
    sf::OutArray<AlarmSetting>(pOutSettings, count)));
  return listed;
}

size_t LoadApplicationParameter(void* pOutParameter, size_t size,
  AlarmSettingId id) {
  sf::SharedPointer<detail::INotificationServicesCommon> service =
    GetNotificationServicesCommon();
  uint32_t loaded = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->LoadApplicationParameter(
    sf::Out<uint32_t>(&loaded), sf::OutBuffer(pOutParameter, size), id));
  return loaded;
}

void DeleteAlarmSetting(AlarmSettingId id) {
  sf::SharedPointer<detail::INotificationServicesCommon> service =
    GetNotificationServicesCommon();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->DeleteAlarmSetting(id));
}

}
