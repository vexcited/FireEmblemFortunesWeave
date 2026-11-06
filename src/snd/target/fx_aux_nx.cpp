#include "snd/target/fx.hpp"

#include "snd/target/atk_types.hpp"

namespace snd::target {

namespace {

using nn::atk::detail::driver::HardwareManager;

// The software effects only reach the renderer once they own a buffer.
template <typename F>
inline void Apply(const void* workBuffer, F apply) {
  if (workBuffer != nullptr) {
    HardwareManager::GetInstance().LockRenderer();
    apply();
    HardwareManager::GetInstance().UnlockRenderer();
  }
}

}

static_assert(sizeof(CpuReverbEffect) == 0xc8);
static_assert(sizeof(CpuDelayEffect) == 0xc0);
static_assert(sizeof(CpuLightLimiterEffect) == 0xc8);

void CpuReverbEffect::updateParameters() {
  Apply(workBuffer, [&] {
    nn::audio::SetAuxReverbParameters(&reverb, &parameters);
  });
}

void CpuDelayEffect::updateParameters() {
  Apply(workBuffer, [&] {
    nn::audio::SetAuxDelayParameters(&delay, &parameters);
  });
}

void CpuLightLimiterEffect::updateParameters() {
  Apply(workBuffer, [&] {
    nn::audio::SetAuxLightLimiterParameters(&limiter, &parameters);
  });
}

void FinalMixEffect::setUnknown70(bool value) {
  unknown_70_ = value;
}

void SurroundEffect::setUnknown175410(bool value) {
  unknown_68_ = value;
}

void SimpleLimiterEffect::enableUnknown68() {
  unknown_68_ = true;
}

void SimpleLimiterEffect::disableUnknown68() {
  unknown_68_ = false;
}

int SimpleLimiterEffect::getUnknown1074() const {
  return unknown_1074_ / 10;
}

}
