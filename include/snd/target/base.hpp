#pragma once

#include <cstddef>
#include <cstdint>

#include "nn/os/mutex.hpp"
#include "snd/fnd/weak_handle.hpp"

namespace snd {

class Manager;
class VoiceBase;

}

namespace snd::target {

class FxBase;
class Sound3DActor;
class Sound3DListener;
class SoundActor;
class SoundHandle;
class SoundVoice;
class StartInfo;

class Base {
public:
  explicit Base(Manager* manager) : manager_(manager) {
    nn::os::InitializeMutex(&mutex_, true, 0);
  }

  virtual ~Base();

  virtual void initialize();
  virtual void start();
  virtual void stop();
  virtual void finalize();
  virtual void update();
  virtual void sleep(int ms);
  virtual void updateFrame();
  virtual float getFrameTime() const;
  virtual float getFrameRate() const;
  virtual const void* findDataList(const char* name);

  virtual void loadArchive(const char* path, const char* name,
    bool isStream);
  virtual void loadMemoryArchive(const void* data, const char* name);
  virtual void unloadArchive(const char* name);
  virtual void loadAddonArchive(const char* name, const char* path,
    void* buffer, size_t size);
  virtual void unloadAddonArchive(const char* name, const char* addon);
  virtual void loadMemoryAddonArchive(const char* name, const void* data,
    void* buffer, size_t size);
  virtual void unloadMemoryAddonArchive(const char* name, const char* addon);

  virtual uint32_t getItemId(const char* label);
  virtual uint32_t getSoundId(const char* label);
  virtual uint32_t findItemId(const char* label, int* archive,
    const char** addon);
  virtual uint32_t findSoundId(const char* label, int* archive,
    const char** addon);
  virtual const char* getItemLabel(uint32_t id, int archive,
    const char* addon);
  virtual void* getSoundUserParam(uint32_t id, int archive,
    const char* addon);
  virtual SoundHandle* startSound(VoiceBase* voice);
  virtual SoundHandle* startSound(uint32_t id, int archive, const char* addon,
    const char* name);
  virtual bool prepareSound(VoiceBase* voice);
  virtual bool prepareSound(uint32_t id, int archive, const char* addon,
    const char* name);
  virtual bool isStreamSound(uint32_t id, int archive, const char* addon);
  virtual bool isWaveSound(uint32_t id, int archive, const char* addon);
  virtual bool isSequenceSound(uint32_t id, int archive, const char* addon);
  virtual bool hasSoundInfo(const char* label, int archive);
  virtual bool existsFile(const char* path);
  virtual bool isFrontBypass(const char* label);
  virtual bool isDataLoaded(uint32_t id, const char* addon, int archive);
  virtual bool isDataLoaded(const char* label, const char* addon,
    int archive);
  virtual bool loadDataByLabel(const char* label, const char* addon,
    int archive);

  virtual int saveHeapState();
  virtual void loadHeapState(int level);
  virtual void loadData(uint32_t id, int archive);
  virtual void loadGroup(const void* group, void* heap, int archive);
  virtual void unloadGroup(const void* group, void* heap, int archive);

  virtual void* allocPoolMemory(size_t size, size_t alignment);
  virtual void* allocPoolMemory(const void* data, size_t size,
    size_t alignment);
  virtual void freePoolMemory(void* memory);
  virtual void* allocEffectMemory(size_t size, size_t alignment);
  virtual void* tryAllocEffectMemory(size_t size, size_t alignment);
  virtual void* allocEffectMemory(const void* data, size_t size,
    size_t alignment);
  virtual void* tryAllocEffectMemory(const void* data, size_t size,
    size_t alignment);
  virtual void freeEffectMemory(void* memory);

  virtual StartInfo* createStartInfo();
  virtual void destroyStartInfo(StartInfo* info);
  virtual SoundHandle* createSoundHandle();
  virtual void destroySoundHandle(SoundHandle* handle);
  virtual Sound3DListener* createSound3DListener(uint32_t index,
    uint32_t archive);
  virtual void destroySound3DListener(Sound3DListener* listener);
  virtual SoundActor* createSoundActor(uint32_t archive);
  virtual void destroySoundActor(SoundActor* actor);
  virtual Sound3DActor* createSound3DActor(uint32_t index, uint32_t archive);
  virtual void destroySound3DActor(Sound3DActor* actor);
  virtual SoundVoice* createSoundVoice();
  virtual void destroySoundVoice(SoundVoice* voice);

  virtual void attachSound3DListener(Sound3DListener* listener, int archive,
    int index);
  virtual void lockSoundThread();
  virtual void unlockSoundThread();

  virtual float calcSound3DVolume(const void* position);
  virtual float setSound3DMaxPriorityReduction(int archive, float value);
  virtual float calcSound3DPan(const void* position, float x, float y,
    float z);
  virtual float calcSound3DDistance(const void* position, float x, float y,
    float z, float w);
  virtual void setSound3DInteriorSize(int archive, int index, float value);

  virtual bool updateVoice(SoundVoice* voice);
  virtual bool stopVoice(SoundVoice* voice);
  virtual bool startVoice(SoundVoice* voice, void* data);
  virtual void updateVoices();
  virtual void updateVoiceParam(SoundVoice* voice);

  virtual FxBase* createFxReverb(void* bus, uint32_t index,
    const void* param);
  virtual void destroyFxReverb(FxBase* fx);
  virtual FxBase* createFxCpuReverb(void* bus, uint32_t index,
    const void* param, uint32_t channels);
  virtual void destroyFxCpuReverb(FxBase* fx);
  virtual FxBase* createFxI3dl2Reverb(void* bus, uint32_t index,
    const void* param);
  virtual void destroyFxI3dl2Reverb(FxBase* fx);
  virtual FxBase* createFxCpuI3dl2Reverb(void* bus, uint32_t index,
    const void* param, uint32_t channels);
  virtual void destroyFxCpuI3dl2Reverb(FxBase* fx);
  virtual FxBase* createFxDelay(void* bus, uint32_t index, const void* param);
  virtual void destroyFxDelay(FxBase* fx);
  virtual FxBase* createFxCpuDelay(void* bus, uint32_t index,
    const void* param, uint32_t channels);
  virtual void destroyFxCpuDelay(FxBase* fx);
  virtual FxBase* createFxLightLimiter(void* bus, uint32_t index,
    const void* param);
  virtual void destroyFxLightLimiter(FxBase* fx);
  virtual FxBase* createFxCpuLightLimiter(void* bus, uint32_t index,
    const void* param, uint32_t channels);
  virtual void destroyFxCpuLightLimiter(FxBase* fx);
  virtual FxBase* createFxCompressor(void* bus, uint32_t index,
    const void* param);
  virtual void destroyFxCompressor(FxBase* fx);
  virtual FxBase* createFxFFT(void* bus, fnd::WeakHandle target,
    uint32_t index, uint32_t channels);
  virtual FxBase* createFxFFT(void* bus, fnd::WeakHandle target,
    fnd::WeakHandle source, uint32_t index, uint32_t channels);
  virtual void destroyFxFFT(FxBase* fx);
  virtual FxBase* createFxEQ(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxEQ(FxBase* fx);
  virtual FxBase* createFxMS(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxMS(FxBase* fx);
  virtual FxBase* createFxMSCtrl(void* bus, fnd::WeakHandle target,
    uint32_t index, uint32_t channels);
  virtual void destroyFxMSCtrl(FxBase* fx);
  virtual FxBase* createFxMSEQ(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxMSEQ(FxBase* fx);
  virtual FxBase* createFxSpectrum(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxSpectrum(FxBase* fx);
  virtual FxBase* createFxVib(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxVib(FxBase* fx);
  virtual FxBase* createFxFinalMix(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxFinalMix(FxBase* fx);
  virtual FxBase* createFxMute(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxMute(FxBase* fx);
  virtual FxBase* createFxNone(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxNone(FxBase* fx);
  virtual FxBase* createFxSurround(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxSurround(FxBase* fx);
  virtual FxBase* createFxLFE(void* bus, uint32_t index, uint32_t channels);
  virtual void destroyFxLFE(FxBase* fx);
  virtual FxBase* createFxSimpleLimiter(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxSimpleLimiter(FxBase* fx);
  virtual FxBase* createFxWaveform(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxWaveform(FxBase* fx);
  virtual FxBase* createFxMultiBridge(void* bus, uint32_t index,
    uint32_t channels, uint32_t count);
  virtual void destroyFxMultiBridge(FxBase* fx);
  virtual FxBase* createFxSpeaker(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxSpeaker(FxBase* fx);
  virtual FxBase* createFxPCMPlayer(void* bus, uint32_t index,
    uint32_t channels);
  virtual void destroyFxPCMPlayer(FxBase* fx);

  virtual void setAuxBusVolume(uint32_t bus, void* fx);
  virtual void clearEffect(void* bus);
  virtual void appendEffect(uint32_t bus, void* fx);
  virtual void beginEffect();
  virtual void endEffect();
  virtual void updateEffect();
  virtual void appendFx(FxBase* fx);
  virtual void clearAllEffect(void* bus);
  virtual void removeFx(FxBase* fx);
  virtual void setEffectVolume(void* bus, uint32_t index, float volume);
  virtual void resetEffect();
  virtual void setAuxBus(int index, void* bus);
  virtual void setOutputMode(uint32_t mode);
  virtual int getOutputMode();
  virtual void setOutputVolume(float volume);

  virtual size_t getHeapFreeSize();
  virtual size_t getHeapSize();
  virtual size_t getPoolFreeSize();
  virtual size_t getPoolSize();
  virtual size_t getEffectFreeSize();
  virtual size_t getEffectSize();
  virtual int getStreamVoiceCount(int archive);
  virtual int getActiveVoiceCount();
  virtual int getReleasedMemoryPoolCount();

  virtual void setMute(bool mute);
  virtual bool isMute() const;
  virtual bool* getMute();
  virtual void setPause(bool pause);
  virtual bool isPause() const;
  virtual bool* getPause();
  virtual void setDebug(bool debug);
  virtual bool isDebug() const;
  virtual bool* getDebug();

  virtual bool isArchiveLoaded(int archive) const;
  virtual int findArchive(const char* name);
  virtual int getArchiveCount() const;
  virtual const char* getArchiveName(int archive);
  virtual bool isAddonLoaded(int archive, int addon);
  virtual const char* getAddonName(int archive, int addon);
  virtual void* getAddonArchive(int archive, int addon);
  virtual size_t getAddonCount(int archive);

  struct Info {
    void* first;
    void* second;
    void* third;
  };

  virtual Info getInfo();

protected:
  Manager* manager_;
  bool initialized_ = false;
  bool disabled_ = false;
  bool mute_ = false;
  bool pause_ = false;
  bool debug_ = false;
  nn::os::MutexType mutex_ = {};
};

}

namespace snd {

// The active target. Some functions reach it through the GOT, others
// directly, so it is declared twice.
extern target::Base* g_target;

#pragma GCC visibility push(hidden)

extern target::Base* s_target;

#pragma GCC visibility pop

}
