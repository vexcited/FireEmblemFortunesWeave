#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

#include "nn/mem/standard_allocator.hpp"
#include "nn/os/thread_api.hpp"
#include "snd/fnd/fast_alloc.hpp"
#include "snd/fnd/string.hpp"
#include "snd/proxy.hpp"
#include "snd/target/atk_types.hpp"
#include "snd/target/base.hpp"
#include "snd/target/fx.hpp"
#include "snd/target/sound.hpp"

namespace snd {

class Archive {
public:
  const char* getDefaultName() const;
  uint32_t findSoundId(const char* archive, const char* label);
  uint32_t findSoundId(const char* archive, const char* label,
    const char** addon);
};

class Manager {
public:
  Archive* getArchive();
};

}

namespace snd::target {

class BaseNX : public Base {
public:
  struct Addon {
    fnd::String name;
    void* archive;
    nn::atk::AddonSoundArchive soundArchive;
    nn::atk::SoundDataManager dataManager;
    uint8_t body[80];
    bool loaded;
  };

  struct Archive {
    fnd::String name;
    int id;
    nn::atk::FsSoundArchive fsArchive;
    nn::atk::MemorySoundArchive memoryArchive;
    uint8_t player[816];
    nn::atk::SoundDataManager dataManager;
    nn::atk::Sound3DListener listeners[2];
    void* buffers[9];
    std::vector<Addon*> addons;
    uint8_t loader[64];
    bool isMemory;
    bool loaded;
  };

  void sleep(int ms) override;
  void updateFrame() override;
  float getFrameTime() const override;
  float getFrameRate() const override;

  uint32_t getItemId(const char* label) override;
  uint32_t getSoundId(const char* label) override;
  uint32_t findItemId(const char* label, int* archive,
    const char** addon) override;
  uint32_t findSoundId(const char* label, int* archive,
    const char** addon) override;
  const char* getItemLabel(uint32_t id, int archive,
    const char* addon) override;
  bool isStreamSound(uint32_t id, int archive, const char* addon) override;
  bool isWaveSound(uint32_t id, int archive, const char* addon) override;
  bool hasSoundInfo(const char* label, int archive) override;
  bool isFrontBypass(const char* label) override;

  int saveHeapState() override;
  void loadHeapState(int level) override;
  void loadGroup(const void* group, void* heap, int archive) override;
  void unloadGroup(const void* group, void* heap, int archive) override;

  void* allocPoolMemory(size_t size, size_t alignment) override;
  void* allocPoolMemory(const void* data, size_t size,
    size_t alignment) override;
  void freePoolMemory(void* memory) override;
  void* allocEffectMemory(size_t size, size_t alignment) override;
  void* tryAllocEffectMemory(size_t size, size_t alignment) override;
  void* allocEffectMemory(const void* data, size_t size,
    size_t alignment) override;
  void* tryAllocEffectMemory(const void* data, size_t size,
    size_t alignment) override;
  void freeEffectMemory(void* memory) override;

  StartInfo* createStartInfo() override;
  void destroyStartInfo(StartInfo* info) override;
  SoundHandle* createSoundHandle() override;
  void destroySoundHandle(SoundHandle* handle) override;
  Sound3DListener* createSound3DListener(uint32_t index,
    uint32_t archive) override;
  void destroySound3DListener(Sound3DListener* listener) override;
  SoundActor* createSoundActor(uint32_t archive) override;
  void destroySoundActor(SoundActor* actor) override;
  Sound3DActor* createSound3DActor(uint32_t index, uint32_t archive) override;
  void destroySound3DActor(Sound3DActor* actor) override;
  SoundVoice* createSoundVoice() override;
  void destroySoundVoice(SoundVoice* voice) override;

  void lockSoundThread() override;
  void unlockSoundThread() override;
  void setSound3DInteriorSize(int archive, int index, float value) override;

  FxBase* createFxReverb(void* bus, uint32_t index,
    const void* param) override;
  void destroyFxReverb(FxBase* fx) override;
  FxBase* createFxCpuReverb(void* bus, uint32_t index, const void* param,
    uint32_t channels) override;
  void destroyFxCpuReverb(FxBase* fx) override;
  FxBase* createFxI3dl2Reverb(void* bus, uint32_t index,
    const void* param) override;
  void destroyFxI3dl2Reverb(FxBase* fx) override;
  FxBase* createFxCpuI3dl2Reverb(void* bus, uint32_t index,
    const void* param, uint32_t channels) override;
  void destroyFxCpuI3dl2Reverb(FxBase* fx) override;
  FxBase* createFxDelay(void* bus, uint32_t index,
    const void* param) override;
  void destroyFxDelay(FxBase* fx) override;
  FxBase* createFxCpuDelay(void* bus, uint32_t index, const void* param,
    uint32_t channels) override;
  void destroyFxCpuDelay(FxBase* fx) override;
  FxBase* createFxLightLimiter(void* bus, uint32_t index,
    const void* param) override;
  void destroyFxLightLimiter(FxBase* fx) override;
  FxBase* createFxCpuLightLimiter(void* bus, uint32_t index,
    const void* param, uint32_t channels) override;
  void destroyFxCpuLightLimiter(FxBase* fx) override;
  FxBase* createFxCompressor(void* bus, uint32_t index,
    const void* param) override;
  void destroyFxCompressor(FxBase* fx) override;
  FxBase* createFxFFT(void* bus, fnd::WeakHandle target, uint32_t index,
    uint32_t channels) override;
  FxBase* createFxFFT(void* bus, fnd::WeakHandle target,
    fnd::WeakHandle source, uint32_t index, uint32_t channels) override;
  void destroyFxFFT(FxBase* fx) override;
  FxBase* createFxEQ(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxEQ(FxBase* fx) override;
  FxBase* createFxMS(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxMS(FxBase* fx) override;
  FxBase* createFxMSCtrl(void* bus, fnd::WeakHandle target, uint32_t index,
    uint32_t channels) override;
  void destroyFxMSCtrl(FxBase* fx) override;
  FxBase* createFxMSEQ(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxMSEQ(FxBase* fx) override;
  FxBase* createFxSpectrum(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxSpectrum(FxBase* fx) override;
  FxBase* createFxVib(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxVib(FxBase* fx) override;
  FxBase* createFxFinalMix(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxFinalMix(FxBase* fx) override;
  FxBase* createFxMute(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxMute(FxBase* fx) override;
  FxBase* createFxNone(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxNone(FxBase* fx) override;
  FxBase* createFxSurround(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxSurround(FxBase* fx) override;
  FxBase* createFxLFE(void* bus, uint32_t index, uint32_t channels) override;
  void destroyFxLFE(FxBase* fx) override;
  FxBase* createFxSimpleLimiter(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxSimpleLimiter(FxBase* fx) override;
  FxBase* createFxWaveform(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxWaveform(FxBase* fx) override;
  FxBase* createFxMultiBridge(void* bus, uint32_t index, uint32_t channels,
    uint32_t count) override;
  void destroyFxMultiBridge(FxBase* fx) override;
  FxBase* createFxSpeaker(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxSpeaker(FxBase* fx) override;
  FxBase* createFxPCMPlayer(void* bus, uint32_t index,
    uint32_t channels) override;
  void destroyFxPCMPlayer(FxBase* fx) override;

  void setOutputMode(uint32_t mode) override;
  int getOutputMode() override;
  void setOutputVolume(float volume) override;

  size_t getHeapFreeSize() override;
  size_t getHeapSize() override;
  size_t getPoolFreeSize() override;
  size_t getPoolSize() override;
  size_t getEffectFreeSize() override;
  size_t getEffectSize() override;
  int getStreamVoiceCount(int archive) override;
  int getActiveVoiceCount() override;
  int getReleasedMemoryPoolCount() override;

  bool isArchiveLoaded(int archive) const override;
  int getArchiveCount() const override;
  const char* getArchiveName(int archive) override;
  bool isAddonLoaded(int archive, int addon) override;
  const char* getAddonName(int archive, int addon) override;
  void* getAddonArchive(int archive, int addon) override;
  size_t getAddonCount(int archive) override;

  explicit BaseNX(Manager* manager);
  ~BaseNX() override;

private:
  nn::atk::SoundArchive& getSoundArchive(int archive) {
    Archive& info = archives_[archive];
    if (info.isMemory) {
      return info.memoryArchive;
    }
    return info.fsArchive;
  }

  nn::atk::SoundArchive& findSoundArchive(int archive, const char* addon) {
    if (addon != nullptr) {
      std::vector<Addon*>& addons = archives_[archive].addons;
      for (size_t i = 0; i < addons.size(); ++i) {
        Addon* info = addons[i];
        if (info->loaded == true && info->name == addon) {
          return info->soundArchive;
        }
      }
    }
    return getSoundArchive(archive);
  }

  // The base slots hand the effects out as the platform type, while the
  // objects are the effect kinds that own one.
  template <typename T, typename... Args>
  static FxBase* newFx(Args... args) {
    fx::FxBase* fx = new (g_memory->alloc(sizeof(T), 32)) T(args...);
    return reinterpret_cast<FxBase*>(fx);
  }

  static void deleteFx(FxBase* handle) {
    fx::FxBase* fx = reinterpret_cast<fx::FxBase*>(handle);
    fx->~FxBase();
    g_memory->free(fx);
  }

  [[gnu::visibility("hidden")]] static float s_frameRemainder;

  Archive archives_[1];
  int archiveCount_;
  nn::atk::SoundHeap heap_;
  nn::audio::MemoryPoolType poolMemoryPool_;
  nn::audio::MemoryPoolType effectMemoryPool_;
  void* reserved0_;
  void* heapBuffer_;
  void* reserved1_[2];
  void* poolBuffer_;
  void* effectBuffer_;
  nn::mem::StandardAllocator poolAllocator_;
  nn::mem::StandardAllocator effectAllocator_;
  bool loadThreadExit_;
  nn::os::ThreadType* loadThread_;
  void* loadThreadStack_;
  bool updateThreadExit_;
  nn::os::ThreadType* updateThread_;
  void* updateThreadStack_;
  nn::os::Tick lastTick_;
  float frameTime_;
  float frameRate_;
  fnd::FastAlloc<StartInfoNX, 0> startInfos_;
  fnd::FastAlloc<SoundHandleNX, 0> soundHandles_;
  fnd::FastAlloc<Sound3DListenerNX, 0> sound3DListeners_;
  fnd::FastAlloc<SoundActorNX, 0> soundActors_;
  fnd::FastAlloc<Sound3DActorNX, 0> sound3DActors_;
  fnd::FastAlloc<SoundVoiceNX, 0> soundVoices_;
  uint8_t voiceWork_[0x3ff40 - 4984];
};

static_assert(sizeof(BaseNX::Archive) == 4088);
static_assert(offsetof(BaseNX::Addon, loaded) == 1440);
static_assert(offsetof(BaseNX::Archive, dataManager) == 3152);
static_assert(offsetof(BaseNX::Archive, addons) == 3992);
static_assert(sizeof(BaseNX) == 0x3ff40);

}
