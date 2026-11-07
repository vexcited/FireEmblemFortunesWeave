#include "nn/atk/sound_system.hpp"

#include "nn/atk/driver_command.hpp"
#include "nn/atk/effect.hpp"
#include "snd/target/atk_types.hpp"

namespace nn::atk {

namespace {

using detail::driver::HardwareManager;

// The audio frames last 5 milliseconds, a partial frame counts as a whole.
int ToAudioFrames(TimeSpan time) {
  const int ms = time.nanoseconds / 1000000;
  return (ms + 4) / 5;
}

}

bool SoundSystem::AppendEffect(AuxBus bus, EffectBase* effect, void* buffer,
  size_t size) {
  return HardwareManager::GetInstance().GetSubMix(0).AppendEffect(effect,
    bus + 1, buffer, size);
}

bool SoundSystem::AppendEffect(AuxBus bus, EffectAux* effect, void* buffer,
  size_t size) {
  return HardwareManager::GetInstance().GetSubMix(0).AppendEffect(effect,
    bus + 1, buffer, size);
}

bool SoundSystem::AppendEffectToFinalMix(EffectAux* effect, void* buffer,
  size_t size) {
  return HardwareManager::GetInstance().GetFinalMix().AppendEffect(effect,
    buffer, size);
}

void SoundSystem::RemoveEffect(AuxBus bus, EffectBase* effect) {
  HardwareManager::GetInstance().GetSubMix(0).RemoveEffect(effect, bus + 1);
}

void SoundSystem::RemoveEffect(AuxBus bus, EffectAux* effect) {
  HardwareManager::GetInstance().GetSubMix(0).RemoveEffect(effect, bus + 1);
}

void SoundSystem::RemoveEffectFromFinalMix(EffectAux* effect) {
  HardwareManager::GetInstance().GetFinalMix().RemoveEffect(effect);
}

void SoundSystem::ClearEffect(AuxBus bus) {
  HardwareManager::GetInstance().GetSubMix(0).ClearEffect(bus + 1);
}

void SoundSystem::ClearEffectFromFinalMix() {
  HardwareManager::GetInstance().GetFinalMix().ClearEffect();
}

bool SoundSystem::IsClearEffectFinished(AuxBus bus) {
  return !HardwareManager::GetInstance().GetSubMix(0).HasEffect(bus + 1);
}

bool SoundSystem::IsClearEffectFromFinalMixFinished() {
  return !HardwareManager::GetInstance().GetFinalMix().HasEffect(0);
}

void SoundSystem::SetAuxBusVolume(AuxBus bus, float volume,
  TimeSpan fadeTime, int subMix) {
  auto& manager = detail::DriverCommand::GetInstance();
  auto* command = manager.AllocCommand<detail::AuxBusVolumeCommand>();
  command->id = detail::DriverCommandId_AuxBusVolume;
  command->bus = bus;
  command->subMix = subMix;
  command->volume = volume;
  command->fadeFrames = ToAudioFrames(fadeTime);
  manager.PushCommand(command);
}

}
