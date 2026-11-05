#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/detail/hid_server.hpp"

namespace nn::hid::detail {

namespace {

constexpr Result ResultMousePointerNotInitialized = {0x28f2ca};
constexpr Result ResultMousePointerActivationUpperLimitOver = {0x28f4ca};
constexpr Result ResultMousePointerDeactivationLowerLimitOver = {0x28f6ca};

constexpr size_t MousePointerSettingsOffset = 0x3e2c0;

struct MousePointerSettings {
  float speedScale;
};

// The settings stay attached once the shared memory is mapped.
class MousePointerSharedMemoryAccessor final : public SharedMemoryAccessor {
 public:
  MousePointerSharedMemoryAccessor() : m_pSettings(nullptr) {
    SetResultActivationUpperLimitOver(
      ResultMousePointerActivationUpperLimitOver);
    SetResultDeactivationLowerLimitOver(
      ResultMousePointerDeactivationLowerLimitOver);
  }

  Result Attach(server::SharedMemoryFormat* pFormat) override {
    m_pSettings = reinterpret_cast<const MousePointerSettings*>(
      reinterpret_cast<uint8_t*>(pFormat) + MousePointerSettingsOffset);
    return Result{};
  }

  Result Detach() override {
    return Result{};
  }

  const MousePointerSettings* GetSettings() const {
    return m_pSettings;
  }

 private:
  const MousePointerSettings* m_pSettings;
};

MousePointerSharedMemoryAccessor& GetMousePointerSharedMemoryAccessor() {
  return utility::StaticObject<MousePointerSharedMemoryAccessor>::Get();
}

}

Result GetMousePointerSpeedScale(float* pOutValue) {
  NN_RESULT_DO(GetMousePointerSharedMemoryAccessor().SetAppletResourceUserId(
    utility::GetAppletResourceUserId()));
  if (GetMousePointerSharedMemoryAccessor().GetSettings() == nullptr) {
    NN_RESULT_DO(GetMousePointerSharedMemoryAccessor().Activate());
  }

  const MousePointerSettings* pSettings =
    GetMousePointerSharedMemoryAccessor().GetSettings();
  if (pSettings == nullptr) {
    return ResultMousePointerNotInitialized;
  }

  *pOutValue = pSettings->speedScale;
  return Result{};
}

}
