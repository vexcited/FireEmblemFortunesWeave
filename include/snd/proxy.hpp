#pragma once

#include <cstddef>
#include <cstdint>

namespace snd {

class IProxy {
public:
  virtual ~IProxy() = default;

  virtual size_t getHeapSize() = 0;
  virtual size_t getPoolSize() = 0;
  virtual size_t getEffectSize() = 0;
  virtual int getTextLanguage() = 0;
  virtual int getVoiceLanguage() = 0;
  virtual int getTextLanguageEx() = 0;
  virtual int getVoiceLanguageEx() = 0;
  virtual int getStreamCount() = 0;
  virtual int getWaveCount() = 0;
  virtual int getSequenceCount() = 0;
  virtual int getTextRegion() = 0;
  virtual int getVoiceRegion() = 0;
  virtual int getTextRegionEx() = 0;
  virtual int getVoiceRegionEx() = 0;
  virtual const char* getRootPath() = 0;
  virtual const char* getAddonRootPath() = 0;
  virtual const char* getUserManagementPath() = 0;
  virtual const char* getVibrationPath() = 0;
  virtual int getHandleCount() = 0;
  virtual int getHandleCountForOutput() = 0;
  virtual const char* getReplacementLabel() = 0;
  virtual void* moveLabel(void* label) = 0;
  virtual int getActorCount() = 0;
  virtual bool isStreamEnabled() = 0;
  virtual bool isWaveEnabled() = 0;
  virtual bool isSequenceEnabled() = 0;
  virtual bool isBgmMuted() = 0;
  virtual bool isSeMuted() = 0;
  virtual int getOutputType() = 0;
  virtual bool isDebugMenu() = 0;
  virtual bool isDebugLog() = 0;
  virtual bool isFadeEnabled() = 0;
  virtual bool isDebugDraw() = 0;
  virtual bool isDebugPrint() = 0;
  virtual int getListenerCount() = 0;
  virtual int getVoiceActorCount() = 0;
  virtual int getPriorityLevel() = 0;
  virtual int getPriorityMax() = 0;
  virtual bool isVibrationEnabled() = 0;
  virtual int getArchiveCount() = 0;
  virtual bool isAddonEnabled() = 0;
  virtual float getDopplerFactor() = 0;
  virtual bool calcScreenPosition(float* x, float* y, float* z) = 0;
  virtual int getEffectCount() = 0;
  virtual float getMasterVolume() = 0;
  virtual void beginFrame() = 0;
  virtual void endFrame() = 0;
  virtual void updateFrame() = 0;
  virtual bool isSoundEnabled() = 0;
  virtual bool isVoiceEnabled() = 0;
  virtual bool replaceVoiceLabel(void* name, const char* label) = 0;
  virtual void onStartSound(void* sound) = 0;
  virtual void onUpdateSound(void* sound) = 0;
  virtual void onStartVoice(void* voice) = 0;
  virtual void onUpdateVoice(void* voice) = 0;
  virtual float getVoiceDelay() = 0;
  virtual bool getVoiceVolume(void* voice, float* volume, float* pitch) = 0;
  virtual void onFinishSound(void* sound) = 0;
  virtual void onFinishVoice(void* voice) = 0;
  virtual const void* getMuseumDataList() = 0;
  virtual const void* getAnimeSoundDataList() = 0;
  virtual const void* getExtraDataList() = 0;
  virtual void* createPlayer(void* owner, void* param, uint32_t index) = 0;
  virtual void* createPlayerEx(void* owner, void* param, uint32_t index) = 0;
  virtual void destroyPlayer(void* player) = 0;
  virtual int findFile(const char* path) = 0;
  virtual void* createLoader() = 0;
  virtual void* createReader(void* owner, uint32_t index) = 0;
  virtual void destroyReader(void* reader) = 0;
  virtual const char* getVibrationPrefix() = 0;
};

extern IProxy* g_proxy;

}
