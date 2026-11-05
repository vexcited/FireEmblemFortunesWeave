#pragma once

#include <string>

#include "snd/proxy.hpp"

namespace snd {

struct SoundOption {
  uint8_t reserved0[92];
  bool surround;
  bool bgmMuted;
  bool seMuted;

  bool isVoiceMuted();
};

struct LanguageInfo {
  std::string name;
  uint8_t reserved0[12];
  int value;
};

class FileIndex {
public:
  int find(const char* name, size_t length, int type, int flags);
};

extern SoundOption* g_soundOutput;
extern FileIndex* g_fileIndex;

#pragma GCC visibility push(hidden)

class ProxySnd : public IProxy {
public:
  ~ProxySnd() override;

  size_t getHeapSize() override;
  size_t getPoolSize() override;
  size_t getEffectSize() override;
  int getTextLanguage() override;
  int getVoiceLanguage() override;
  int getTextLanguageEx() override;
  int getVoiceLanguageEx() override;
  int getStreamCount() override;
  int getWaveCount() override;
  int getSequenceCount() override;
  int getTextRegion() override;
  int getVoiceRegion() override;
  int getTextRegionEx() override;
  int getVoiceRegionEx() override;
  const char* getRootPath() override;
  const char* getAddonRootPath() override;
  const char* getUserManagementPath() override;
  const char* getVibrationPath() override;
  int getHandleCount() override;
  int getHandleCountForOutput() override;
  const char* getReplacementLabel() override;
  void* moveLabel(void* label) override;
  int getActorCount() override;
  bool isStreamEnabled() override;
  bool isWaveEnabled() override;
  bool isSequenceEnabled() override;
  bool isBgmMuted() override;
  bool isSeMuted() override;
  int getOutputType() override;
  bool isDebugMenu() override;
  bool isDebugLog() override;
  bool isFadeEnabled() override;
  bool isDebugDraw() override;
  bool isDebugPrint() override;
  int getListenerCount() override;
  int getVoiceActorCount() override;
  int getPriorityLevel() override;
  int getPriorityMax() override;
  bool isVibrationEnabled() override;
  int getArchiveCount() override;
  bool isAddonEnabled() override;
  float getDopplerFactor() override;
  bool calcScreenPosition(float* x, float* y, float* z) override;
  int getEffectCount() override;
  float getMasterVolume() override;
  void beginFrame() override;
  void endFrame() override;
  void updateFrame() override;
  bool isSoundEnabled() override;
  bool isVoiceEnabled() override;
  bool replaceVoiceLabel(void* name, const char* label) override;
  void onStartSound(void* sound) override;
  void onUpdateSound(void* sound) override;
  void onStartVoice(void* voice) override;
  void onUpdateVoice(void* voice) override;
  float getVoiceDelay() override;
  bool getVoiceVolume(void* voice, float* volume, float* pitch) override;
  void onFinishSound(void* sound) override;
  void onFinishVoice(void* voice) override;
  const void* getMuseumDataList() override;
  const void* getAnimeSoundDataList() override;
  const void* getExtraDataList() override;
  void* createPlayer(void* owner, void* param, uint32_t index) override;
  void* createPlayerEx(void* owner, void* param, uint32_t index) override;
  void destroyPlayer(void* player) override;
  int findFile(const char* path) override;
  void* createLoader() override;
  void* createReader(void* owner, uint32_t index) override;
  void destroyReader(void* reader) override;
  const char* getVibrationPrefix() override;
};

extern SoundOption* g_soundOption;
extern const void* (*g_findLanguage)(int kind);
extern LanguageInfo (*g_getLanguageInfo)(const void* language);

#pragma GCC visibility pop

}
