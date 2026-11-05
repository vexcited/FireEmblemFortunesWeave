#pragma once

#include "nn/hid/hid_vibration_node.hpp"
#include "nn/streamplay/streamplay_hid.hpp"

namespace nn::streamplay {

void SendGuestVibrationValue(const GuestVibrationDeviceHandle& handle,
  const hid::VibrationValue& value);

class GuestVibrationTarget : public hid::VibrationMixer {
 public:
  GuestVibrationTarget();
  explicit GuestVibrationTarget(const GuestVibrationDeviceHandle& handle);
  ~GuestVibrationTarget() override;

  void SetGuestVibrationDeviceHandle(const GuestVibrationDeviceHandle& handle);
  void UnsetGuestVibrationDeviceHandle();
  bool IsGuestVibrationDeviceHandleSet() const;
  GuestVibrationDeviceHandle GetGuestVibrationDeviceHandle();
  void GetVibrationDeviceInfo(hid::VibrationDeviceInfo* pOutInfo) const;

 protected:
  void OnNextSampleRequired(hid::VibrationValue* pValue,
    hid::VibrationNodeConnectionList* pInputConnections) override;

 private:
  bool m_IsGuestVibrationDeviceHandleSet;
  alignas(8) GuestVibrationDeviceHandle m_GuestVibrationDeviceHandle;
};

}
