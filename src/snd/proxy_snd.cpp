#include "snd/proxy_snd.hpp"

#include <cstring>

namespace snd {

namespace {

int getLanguageValue(int kind) {
  const void* language =
    g_findLanguage != nullptr ? g_findLanguage(kind) : nullptr;
  return g_getLanguageInfo(language).value;
}

}

ProxySnd::~ProxySnd() = default;

size_t ProxySnd::getHeapSize() {
  return 0xa00000;
}

size_t ProxySnd::getPoolSize() {
  return 0x1000000;
}

size_t ProxySnd::getEffectSize() {
  return 0xfa00000;
}

int ProxySnd::getTextLanguage() {
  return getLanguageValue(1);
}

int ProxySnd::getVoiceLanguage() {
  return getLanguageValue(2);
}

int ProxySnd::getTextLanguageEx() {
  return getLanguageValue(1);
}

int ProxySnd::getVoiceLanguageEx() {
  return getLanguageValue(2);
}

int ProxySnd::getTextRegion() {
  return getLanguageValue(3);
}

int ProxySnd::getVoiceRegion() {
  return getLanguageValue(3);
}

int ProxySnd::getTextRegionEx() {
  return getLanguageValue(4);
}

int ProxySnd::getVoiceRegionEx() {
  return getLanguageValue(4);
}

int ProxySnd::findFile(const char* path) {
  size_t length = std::strlen(path);
  const char* name = path;
  size_t size = length;
  for (size_t i = length; i != 0; --i) {
    if (path[i - 1] == ':') {
      name = path + i + 1;
      size = length - i - 1;
      break;
    }
  }
  return g_fileIndex->find(name, size, 0, 0);
}

int ProxySnd::getStreamCount() {
  return 32;
}

int ProxySnd::getWaveCount() {
  return 64;
}

int ProxySnd::getSequenceCount() {
  return 0;
}

const char* ProxySnd::getRootPath() {
  return "Contents:/Sound/";
}

const char* ProxySnd::getAddonRootPath() {
  return "";
}

const char* ProxySnd::getUserManagementPath() {
  return "userManagementFiles/";
}

const char* ProxySnd::getVibrationPath() {
  return "vibration/";
}

int ProxySnd::getHandleCount() {
  return 64;
}

int ProxySnd::getHandleCountForOutput() {
  getOutputType();
  return 64;
}

const char* ProxySnd::getReplacementLabel() {
  return "V_MID_Replacement";
}

int ProxySnd::getActorCount() {
  return 64;
}

bool ProxySnd::isStreamEnabled() {
  return true;
}

bool ProxySnd::isWaveEnabled() {
  return true;
}

bool ProxySnd::isSequenceEnabled() {
  return false;
}

bool ProxySnd::isBgmMuted() {
  return g_soundOption != nullptr && g_soundOption->bgmMuted;
}

bool ProxySnd::isSeMuted() {
  return g_soundOption != nullptr && g_soundOption->seMuted;
}

int ProxySnd::getOutputType() {
  if (g_soundOutput == nullptr) {
    return 1;
  }
  return g_soundOutput->surround ? 2 : 1;
}

bool ProxySnd::isDebugMenu() {
  return false;
}

bool ProxySnd::isDebugLog() {
  return false;
}

bool ProxySnd::isFadeEnabled() {
  return true;
}

bool ProxySnd::isDebugDraw() {
  return false;
}

bool ProxySnd::isDebugPrint() {
  return false;
}

int ProxySnd::getListenerCount() {
  return 2;
}

int ProxySnd::getVoiceActorCount() {
  return 64;
}

int ProxySnd::getPriorityLevel() {
  return 15;
}

int ProxySnd::getPriorityMax() {
  return 15;
}

bool ProxySnd::isVibrationEnabled() {
  return true;
}

int ProxySnd::getArchiveCount() {
  return 2;
}

bool ProxySnd::isAddonEnabled() {
  return true;
}

float ProxySnd::getDopplerFactor() {
  return 0.3f;
}

int ProxySnd::getEffectCount() {
  return 0;
}

float ProxySnd::getMasterVolume() {
  return 1.0f;
}

void ProxySnd::beginFrame() {
}

void ProxySnd::endFrame() {
}

void ProxySnd::print(const char*) {
}

bool ProxySnd::isSoundEnabled() {
  return true;
}

bool ProxySnd::isVoiceEnabled() {
  return true;
}

float ProxySnd::getVoiceDelay() {
  return 0.0f;
}

bool ProxySnd::getVoiceVolume(void* voice, float* volume, float* pitch) {
  *volume = 1.0f;
  *pitch = 0.0f;
  return g_soundOption->isVoiceMuted();
}

// Without the option object every archive counts as installed.
bool ProxySnd::isArchiveEnabled(const char* name) {
  if (g_soundOption == nullptr) {
    return true;
  }
  return g_soundOption->isArchiveEnabled(name);
}

const void* ProxySnd::getExtraDataList() {
  return nullptr;
}

void* ProxySnd::createLoader() {
  return nullptr;
}

const char* ProxySnd::getVibrationPrefix() {
  return "Vib";
}

}
