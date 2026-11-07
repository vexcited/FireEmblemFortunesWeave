#include "snd/target/base_nx.hpp"

#include <cstring>

#include "nn/atk/sound_system.hpp"
#include "nn/os/timer_event.hpp"
#include "snd/target/fx.hpp"

namespace snd::target {

extern int g_activeVoiceCount;

float BaseNX::s_frameRemainder;

void BaseNX::sleep(int ms) {
  alignas(nn::os::TimerEventType) uint8_t
    storage[sizeof(nn::os::TimerEventType)];
  auto* event = reinterpret_cast<nn::os::TimerEventType*>(storage);
  nn::os::InitializeTimerEvent(event, nn::os::EventClearMode_AutoClear);
  nn::os::StartOneShotTimerEvent(event, nn::TimeSpan{1000000LL * ms});
  nn::os::WaitTimerEvent(event);
  nn::os::FinalizeTimerEvent(event);
}

void BaseNX::updateFrame() {
  nn::os::Tick last = lastTick_;
  lastTick_ = nn::os::GetSystemTick();
  nn::os::Tick elapsed = {lastTick_.value - last.value};
  int64_t us = nn::os::ConvertToTimeSpan(elapsed).nanoseconds / 1000;
  if (us > 1000000) {
    us = 16667;
  }

  float time = s_frameRemainder + us / 1000.0f;
  frameTime_ = static_cast<int>(time / 16.667f + 0.5f) * 16.667f;
  s_frameRemainder = time - frameTime_;
  frameRate_ = frameTime_ / (1000.0f / 60.0f);
}

float BaseNX::getFrameTime() const {
  return frameTime_;
}

float BaseNX::getFrameRate() const {
  return frameRate_;
}

uint32_t BaseNX::getItemId(const char* label) {
  if (disabled_) {
    return 0xffffffff;
  }
  nn::atk::detail::driver::SoundThreadLock lock;
  return getSoundArchive(0).GetItemId(label);
}

uint32_t BaseNX::getSoundId(const char* label) {
  if (disabled_) {
    return 0xffffffff;
  }
  nn::atk::detail::driver::SoundThreadLock lock;
  snd::Archive* archive = manager_->getArchive();
  return archive->findSoundId(manager_->getArchive()->getDefaultName(),
    label);
}

uint32_t BaseNX::findItemId(const char* label, int* archive,
  const char** addon) {
  *archive = 0;
  *addon = nullptr;
  if (disabled_) {
    return 0xffffffff;
  }

  nn::atk::detail::driver::SoundThreadLock lock;
  Archive& info = archives_[0];
  uint32_t id = 0xffffffff;
  if (info.loaded == true) {
    for (size_t i = 0; i < info.addons.size(); ++i) {
      Addon* entry = info.addons[i];
      if (entry->loaded == true) {
        id = entry->soundArchive.GetItemId(label);
        if (id != 0xffffffff) {
          *archive = info.id;
          *addon = entry->name.c_str();
          return id;
        }
      }
    }
    id = getSoundArchive(0).GetItemId(label);
    if (id != 0xffffffff) {
      *archive = info.id;
    }
  }
  return id;
}

uint32_t BaseNX::findSoundId(const char* label, int* archive,
  const char** addon) {
  *archive = 0;
  *addon = nullptr;
  if (disabled_) {
    return 0xffffffff;
  }

  nn::atk::detail::driver::SoundThreadLock lock;
  uint32_t id;
  if (archives_[0].loaded == true) {
    id = manager_->getArchive()->findSoundId(archives_[0].name.c_str(), label,
      addon);
    if (id != 0xffffffff) {
      *archive = archives_[0].id;
    }
  }
  else {
    id = 0xffffffff;
  }
  return id;
}

const char* BaseNX::getItemLabel(uint32_t id, int archive,
  const char* addon) {
  if (disabled_) {
    return "";
  }
  nn::atk::detail::driver::SoundThreadLock lock;
  return findSoundArchive(archive, addon).GetItemLabel(id);
}

bool BaseNX::isStreamSound(uint32_t id, int archive, const char* addon) {
  nn::atk::detail::driver::SoundThreadLock lock;
  return findSoundArchive(archive, addon).GetSoundType(id) == 2;
}

bool BaseNX::isWaveSound(uint32_t id, int archive, const char* addon) {
  nn::atk::detail::driver::SoundThreadLock lock;
  return (findSoundArchive(archive, addon).GetSoundUserParam(id) & 0x400) !=
    0;
}

bool BaseNX::hasSoundInfo(const char* label, int archive) {
  nn::atk::detail::driver::SoundThreadLock lock;
  uint32_t id = getSoundArchive(archive).GetItemId(label);
  nn::atk::SoundArchive::SoundInfo info = {};
  getSoundArchive(archive).ReadSoundInfo(&info, id);
  return info.playerId != 0;
}

bool BaseNX::isFrontBypass(const char* label) {
  int archive;
  const char* addon;
  uint32_t id = findSoundId(label, &archive, &addon);
  nn::atk::detail::driver::SoundThreadLock lock;
  return (findSoundArchive(archive, addon).GetSoundUserParam(id) & 0x200) !=
    0;
}

int BaseNX::saveHeapState() {
  return heap_.SaveState();
}

void BaseNX::loadHeapState(int level) {
  heap_.LoadState(level);
}

void BaseNX::loadGroup(const void* group, void* heap, int archive) {
  archives_[archive].dataManager.SetFileAddressInGroupFile(group, heap);
}

void BaseNX::unloadGroup(const void* group, void* heap, int archive) {
  archives_[archive].dataManager.InvalidateSoundData(group, heap);
}

void* BaseNX::allocPoolMemory(size_t size, size_t alignment) {
  size_t align = alignment != 0 ? alignment : 4096;
  poolAllocator_.GetAllocatableSize();
  return poolAllocator_.Allocate(size, align);
}

void* BaseNX::allocPoolMemory(const void* data, size_t size,
  size_t alignment) {
  size_t align = alignment != 0 ? alignment : 4096;
  poolAllocator_.GetAllocatableSize();
  return std::memcpy(poolAllocator_.Allocate(size, align), data, size);
}

void BaseNX::freePoolMemory(void* memory) {
  poolAllocator_.Free(memory);
}

void* BaseNX::allocEffectMemory(size_t size, size_t alignment) {
  size_t align = alignment != 0 ? alignment : 4096;
  effectAllocator_.GetAllocatableSize();
  return effectAllocator_.Allocate(size, align);
}

void* BaseNX::tryAllocEffectMemory(size_t size, size_t alignment) {
  if (size > effectAllocator_.GetAllocatableSize()) {
    return nullptr;
  }
  return effectAllocator_.Allocate(size, alignment != 0 ? alignment : 4096);
}

void* BaseNX::allocEffectMemory(const void* data, size_t size,
  size_t alignment) {
  size_t align = alignment != 0 ? alignment : 4096;
  effectAllocator_.GetAllocatableSize();
  return std::memcpy(effectAllocator_.Allocate(size, align), data, size);
}

void* BaseNX::tryAllocEffectMemory(const void* data, size_t size,
  size_t alignment) {
  if (size > effectAllocator_.GetAllocatableSize()) {
    return nullptr;
  }
  void* memory =
    effectAllocator_.Allocate(size, alignment != 0 ? alignment : 4096);
  return std::memcpy(memory, data, size);
}

void BaseNX::freeEffectMemory(void* memory) {
  effectAllocator_.Free(memory);
}

StartInfo* BaseNX::createStartInfo() {
  return startInfos_.alloc();
}

void BaseNX::destroyStartInfo(StartInfo* info) {
  startInfos_.free(static_cast<StartInfoNX*>(info));
}

SoundHandle* BaseNX::createSoundHandle() {
  return soundHandles_.alloc();
}

void BaseNX::destroySoundHandle(SoundHandle* handle) {
  soundHandles_.free(static_cast<SoundHandleNX*>(handle));
}

Sound3DListener* BaseNX::createSound3DListener(uint32_t index,
  uint32_t archive) {
  return sound3DListeners_.alloc(index, archive);
}

void BaseNX::destroySound3DListener(Sound3DListener* listener) {
  sound3DListeners_.free(static_cast<Sound3DListenerNX*>(listener));
}

SoundActor* BaseNX::createSoundActor(uint32_t archive) {
  return soundActors_.alloc(archive);
}

void BaseNX::destroySoundActor(SoundActor* actor) {
  soundActors_.free(static_cast<SoundActorNX*>(actor));
}

Sound3DActor* BaseNX::createSound3DActor(uint32_t index, uint32_t archive) {
  return sound3DActors_.alloc(index, archive);
}

void BaseNX::destroySound3DActor(Sound3DActor* actor) {
  sound3DActors_.free(static_cast<Sound3DActorNX*>(actor));
}

SoundVoice* BaseNX::createSoundVoice() {
  return soundVoices_.alloc();
}

void BaseNX::destroySoundVoice(SoundVoice* voice) {
  soundVoices_.free(static_cast<SoundVoiceNX*>(voice));
}

void BaseNX::lockSoundThread() {
  nn::atk::detail::driver::SoundThread::GetInstance().Lock();
}

void BaseNX::unlockSoundThread() {
  nn::atk::detail::driver::SoundThread::GetInstance().Unlock();
}

void BaseNX::setSound3DInteriorSize(int archive, int index, float value) {
  nn::atk::detail::driver::SoundThreadLock lock;
  archives_[archive].listeners[index].SetInteriorSize(value);
}

FxBase* BaseNX::createFxReverb(void* bus, uint32_t index, const void* param) {
  return newFx<FxReverbNX>(manager_, bus, index, param);
}

void BaseNX::destroyFxReverb(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxCpuReverb(void* bus, uint32_t index,
  const void* param, uint32_t channels) {
  return newFx<FxCpuReverbNX>(manager_, bus, index, param, channels);
}

void BaseNX::destroyFxCpuReverb(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxI3dl2Reverb(void* bus, uint32_t index,
  const void* param) {
  return newFx<FxI3dl2ReverbNX>(manager_, bus, index, param);
}

void BaseNX::destroyFxI3dl2Reverb(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxCpuI3dl2Reverb(void* bus, uint32_t index,
  const void* param, uint32_t channels) {
  return newFx<FxCpuI3dl2ReverbNX>(manager_, bus, index, param, channels);
}

void BaseNX::destroyFxCpuI3dl2Reverb(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxDelay(void* bus, uint32_t index, const void* param) {
  return newFx<FxDelayNX>(manager_, bus, index, param);
}

void BaseNX::destroyFxDelay(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxCpuDelay(void* bus, uint32_t index,
  const void* param, uint32_t channels) {
  return newFx<FxCpuDelayNX>(manager_, bus, index, param, channels);
}

void BaseNX::destroyFxCpuDelay(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxLightLimiter(void* bus, uint32_t index,
  const void* param) {
  return newFx<FxLightLimiterNX>(manager_, bus, index, param);
}

void BaseNX::destroyFxLightLimiter(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxCpuLightLimiter(void* bus, uint32_t index,
  const void* param, uint32_t channels) {
  return newFx<FxCpuLightLimiterNX>(manager_, bus, index, param, channels);
}

void BaseNX::destroyFxCpuLightLimiter(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxCompressor(void* bus, uint32_t index,
  const void* param) {
  return newFx<FxCompressorNX>(manager_, bus, index, param);
}

void BaseNX::destroyFxCompressor(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxFFT(void* bus, fnd::WeakHandle target,
  uint32_t index, uint32_t channels) {
  return newFx<FxFFTNX>(manager_, bus, target, index, channels);
}

FxBase* BaseNX::createFxFFT(void* bus, fnd::WeakHandle target,
  fnd::WeakHandle source, uint32_t index, uint32_t channels) {
  return newFx<FxFFTNX>(manager_, bus, target, source, index, channels);
}

void BaseNX::destroyFxFFT(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxEQ(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxEQNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxEQ(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxMS(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxMSNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxMS(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxMSCtrl(void* bus, fnd::WeakHandle target,
  uint32_t index, uint32_t channels) {
  return newFx<FxMSCtrlNX>(manager_, bus, target, index, channels);
}

void BaseNX::destroyFxMSCtrl(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxMSEQ(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxMSEQNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxMSEQ(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxSpectrum(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxSpectrumNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxSpectrum(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxVib(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxVibNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxVib(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxFinalMix(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxFinalMixNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxFinalMix(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxMute(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxMuteNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxMute(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxNone(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxNoneNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxNone(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxSurround(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxSurroundNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxSurround(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxLFE(void* bus, uint32_t index, uint32_t channels) {
  return newFx<FxLFENX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxLFE(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxSimpleLimiter(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxSimpleLimiterNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxSimpleLimiter(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxWaveform(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxWaveformNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxWaveform(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxMultiBridge(void* bus, uint32_t index,
  uint32_t channels, uint32_t count) {
  return newFx<FxMultiBridgeNX>(manager_, bus, index, channels, count);
}

void BaseNX::destroyFxMultiBridge(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxSpeaker(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxSpeakerNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxSpeaker(FxBase* fx) {
  deleteFx(fx);
}

FxBase* BaseNX::createFxPCMPlayer(void* bus, uint32_t index,
  uint32_t channels) {
  return newFx<FxPCMPlayerNX>(manager_, bus, index, channels);
}

void BaseNX::destroyFxPCMPlayer(FxBase* fx) {
  deleteFx(fx);
}

void BaseNX::appendEffect(int bus, fx::FxBase* fx) {
  const auto auxBus = static_cast<nn::atk::AuxBus>(bus);
  if (fx->getImpl()->effect != nullptr) {
    nn::atk::SoundSystem::AppendEffect(auxBus, fx->getImpl()->effect,
      fx->getBuffer(), fx->getBufferSize());
  }
  else if (fx->getImpl()->aux != nullptr) {
    nn::atk::SoundSystem::AppendEffect(auxBus, fx->getImpl()->aux,
      fx->getBuffer(), fx->getBufferSize());
  }
}

// Waits for the sound thread to drop the effects.
void BaseNX::clearEffect(int bus) {
  const auto auxBus = static_cast<nn::atk::AuxBus>(bus);
  {
    nn::atk::detail::driver::SoundThreadLock lock;
    nn::atk::SoundSystem::ClearEffect(auxBus);
  }
  while (!nn::atk::SoundSystem::IsClearEffectFinished(auxBus)) {
    sleep(1);
  }
}

void BaseNX::removeEffect(int bus, fx::FxBase* fx) {
  const auto auxBus = static_cast<nn::atk::AuxBus>(bus);
  if (fx->getImpl()->effect != nullptr) {
    nn::atk::SoundSystem::RemoveEffect(auxBus, fx->getImpl()->effect);
  }
  else if (fx->getImpl()->aux != nullptr) {
    nn::atk::SoundSystem::RemoveEffect(auxBus, fx->getImpl()->aux);
  }
}

void BaseNX::beginEffect() {
}

void BaseNX::endEffect() {
}

void BaseNX::updateEffect() {
}

// Only auxiliary effects go to the final mix.
void BaseNX::appendFinalMixEffect(fx::FxBase* fx) {
  if (fx->getImpl()->effect != nullptr) {
    return;
  }
  if (fx->getImpl()->aux != nullptr) {
    nn::atk::SoundSystem::AppendEffectToFinalMix(fx->getImpl()->aux,
      fx->getBuffer(), fx->getBufferSize());
  }
}

void BaseNX::clearFinalMixEffect() {
  {
    nn::atk::detail::driver::SoundThreadLock lock;
    nn::atk::SoundSystem::ClearEffectFromFinalMix();
  }
  while (!nn::atk::SoundSystem::IsClearEffectFromFinalMixFinished()) {
    sleep(1);
  }
}

void BaseNX::removeFinalMixEffect(fx::FxBase* fx) {
  if (fx->getImpl()->effect != nullptr) {
    return;
  }
  if (fx->getImpl()->aux != nullptr) {
    nn::atk::SoundSystem::RemoveEffectFromFinalMix(fx->getImpl()->aux);
  }
}

void BaseNX::setAuxBusVolume(int bus, float volume, int subMix) {
  nn::atk::detail::driver::SoundThreadLock lock;
  nn::atk::SoundSystem::SetAuxBusVolume(static_cast<nn::atk::AuxBus>(bus),
    volume, nn::TimeSpan{0}, subMix);
}

void BaseNX::resetEffect() {
}

void BaseNX::setOutputMode(uint32_t mode) {
  nn::atk::detail::driver::HardwareManager::GetInstance().SetOutputMode(mode,
    0);
}

int BaseNX::getOutputMode() {
  return nn::atk::detail::driver::HardwareManager::GetInstance()
    .GetOutputMode();
}

void BaseNX::setOutputVolume(float volume) {
  nn::atk::detail::driver::HardwareManager::GetInstance().GetFinalMix()
    .SetVolume(volume);
}

size_t BaseNX::getHeapFreeSize() {
  return heap_.GetFreeSize();
}

size_t BaseNX::getHeapSize() {
  return heap_.GetSize();
}

size_t BaseNX::getPoolFreeSize() {
  if (disabled_) {
    return 0;
  }
  return poolAllocator_.GetTotalFreeSize();
}

size_t BaseNX::getPoolSize() {
  return (g_proxy->getPoolSize() + 4095) & ~size_t{4095};
}

size_t BaseNX::getEffectFreeSize() {
  if (disabled_) {
    return 0;
  }
  return effectAllocator_.GetTotalFreeSize();
}

size_t BaseNX::getEffectSize() {
  return (g_proxy->getEffectSize() + 4095) & ~size_t{4095};
}

int BaseNX::getStreamVoiceCount(int) {
  if (disabled_) {
    return 0;
  }
  return nn::atk::detail::driver::StreamSoundManager::GetInstance()
    .GetActiveCount();
}

int BaseNX::getActiveVoiceCount() {
  if (disabled_) {
    return 0;
  }
  return g_activeVoiceCount;
}

int BaseNX::getReleasedMemoryPoolCount() {
  if (disabled_) {
    return 0;
  }
  using nn::atk::detail::driver::HardwareManager;
  HardwareManager::GetInstance().LockRenderer();
  int count = nn::audio::GetReleasedMemoryPoolCount(
    HardwareManager::GetInstance().GetRendererConfig());
  HardwareManager::GetInstance().UnlockRenderer();
  return count;
}

bool BaseNX::isArchiveLoaded(int archive) const {
  return archives_[archive].loaded;
}

int BaseNX::getArchiveCount() const {
  return archiveCount_;
}

const char* BaseNX::getArchiveName(int archive) {
  if (archives_[archive].loaded == true) {
    return archives_[archive].name.c_str();
  }
  return nullptr;
}

bool BaseNX::isAddonLoaded(int archive, int addon) {
  if (archives_[archive].loaded == true) {
    return archives_[archive].addons[addon]->loaded;
  }
  return false;
}

const char* BaseNX::getAddonName(int archive, int addon) {
  if (archives_[archive].loaded == true) {
    Addon* info = archives_[archive].addons[addon];
    if (info->loaded == true) {
      return info->name.c_str();
    }
  }
  return nullptr;
}

void* BaseNX::getAddonArchive(int archive, int addon) {
  if (archives_[archive].loaded == true) {
    Addon* info = archives_[archive].addons[addon];
    if (info->loaded == true) {
      return info->archive;
    }
  }
  return nullptr;
}

size_t BaseNX::getAddonCount(int archive) {
  if (archives_[archive].loaded == true) {
    return archives_[archive].addons.size();
  }
  return 0;
}

}
