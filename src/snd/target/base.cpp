#include "snd/target/base.hpp"

namespace snd::target {

Base::~Base() {
  nn::os::FinalizeMutex(&mutex_);
}

void Base::initialize() {
}

void Base::start() {
}

void Base::stop() {
}

void Base::finalize() {
}

void Base::update() {
}

void Base::sleep(int) {
}

void Base::updateFrame() {
}

float Base::getFrameTime() const {
  return 1000.0f / 60.0f;
}

float Base::getFrameRate() const {
  return 1.0f;
}

const void* Base::findDataList(const char*) {
  return nullptr;
}

void Base::loadArchive(const char*, const char*, bool) {
}

void Base::loadMemoryArchive(const void*, const char*) {
}

void Base::unloadArchive(const char*) {
}

void Base::loadAddonArchive(const char*, const char*, void*, size_t) {
}

void Base::unloadAddonArchive(const char*, const char*) {
}

void Base::loadMemoryAddonArchive(const char*, const void*, void*, size_t) {
}

void Base::unloadMemoryAddonArchive(const char*, const char*) {
}

uint32_t Base::getItemId(const char*) {
  return 0xffffffff;
}

uint32_t Base::getSoundId(const char*) {
  return 0xffffffff;
}

uint32_t Base::findItemId(const char*, int*, const char**) {
  return 0xffffffff;
}

uint32_t Base::findSoundId(const char*, int*, const char**) {
  return 0xffffffff;
}

const char* Base::getItemLabel(uint32_t, int, const char*) {
  return nullptr;
}

void* Base::getSoundUserParam(uint32_t, int, const char*) {
  return nullptr;
}

SoundHandle* Base::startSound(VoiceBase*) {
  return nullptr;
}

SoundHandle* Base::startSound(uint32_t, int, const char*, const char*) {
  return nullptr;
}

bool Base::prepareSound(VoiceBase*) {
  return false;
}

bool Base::prepareSound(uint32_t, int, const char*, const char*) {
  return false;
}

bool Base::isStreamSound(uint32_t, int, const char*) {
  return false;
}

bool Base::isWaveSound(uint32_t, int, const char*) {
  return false;
}

bool Base::isSequenceSound(uint32_t, int, const char*) {
  return false;
}

bool Base::hasSoundInfo(const char*, int) {
  return false;
}

bool Base::existsFile(const char*) {
  return false;
}

bool Base::isFrontBypass(const char*) {
  return false;
}

bool Base::isDataLoaded(uint32_t, const char*, int) {
  return false;
}

bool Base::isDataLoaded(const char*, const char*, int) {
  return false;
}

bool Base::loadDataByLabel(const char*, const char*, int) {
  return false;
}

int Base::saveHeapState() {
  return 0;
}

void Base::loadHeapState(int) {
}

void Base::loadData(uint32_t, int) {
}

void Base::loadGroup(const void*, void*, int) {
}

void Base::unloadGroup(const void*, void*, int) {
}

void* Base::allocPoolMemory(size_t, size_t) {
  return nullptr;
}

void* Base::allocPoolMemory(const void*, size_t, size_t) {
  return nullptr;
}

void Base::freePoolMemory(void*) {
}

void* Base::allocEffectMemory(size_t, size_t) {
  return nullptr;
}

void* Base::tryAllocEffectMemory(size_t, size_t) {
  return nullptr;
}

void* Base::allocEffectMemory(const void*, size_t, size_t) {
  return nullptr;
}

void* Base::tryAllocEffectMemory(const void*, size_t, size_t) {
  return nullptr;
}

void Base::freeEffectMemory(void*) {
}

StartInfo* Base::createStartInfo() {
  return nullptr;
}

void Base::destroyStartInfo(StartInfo*) {
}

SoundHandle* Base::createSoundHandle() {
  return nullptr;
}

void Base::destroySoundHandle(SoundHandle*) {
}

Sound3DListener* Base::createSound3DListener(uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroySound3DListener(Sound3DListener*) {
}

SoundActor* Base::createSoundActor(uint32_t) {
  return nullptr;
}

void Base::destroySoundActor(SoundActor*) {
}

Sound3DActor* Base::createSound3DActor(uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroySound3DActor(Sound3DActor*) {
}

SoundVoice* Base::createSoundVoice() {
  return nullptr;
}

void Base::destroySoundVoice(SoundVoice*) {
}

void Base::attachSound3DListener(Sound3DListener*, int, int) {
}

void Base::lockSoundThread() {
}

void Base::unlockSoundThread() {
}

float Base::calcSound3DVolume(const void*) {
  return 0.0f;
}

float Base::setSound3DMaxPriorityReduction(int, float) {
  return 0.0f;
}

float Base::calcSound3DPan(const void*, float, float, float) {
  return 0.0f;
}

float Base::calcSound3DDistance(const void*, float, float, float, float) {
  return 0.0f;
}

void Base::setSound3DInteriorSize(int, int, float) {
}

bool Base::updateVoice(SoundVoice*) {
  return false;
}

bool Base::stopVoice(SoundVoice*) {
  return false;
}

bool Base::startVoice(SoundVoice*, void*) {
  return false;
}

void Base::updateVoices() {
}

void Base::updateVoiceParam(SoundVoice*) {
}

FxBase* Base::createFxReverb(void*, uint32_t, const void*) {
  return nullptr;
}

void Base::destroyFxReverb(FxBase*) {
}

FxBase* Base::createFxCpuReverb(void*, uint32_t, const void*, uint32_t) {
  return nullptr;
}

void Base::destroyFxCpuReverb(FxBase*) {
}

FxBase* Base::createFxI3dl2Reverb(void*, uint32_t, const void*) {
  return nullptr;
}

void Base::destroyFxI3dl2Reverb(FxBase*) {
}

FxBase* Base::createFxCpuI3dl2Reverb(void*, uint32_t, const void*, uint32_t) {
  return nullptr;
}

void Base::destroyFxCpuI3dl2Reverb(FxBase*) {
}

FxBase* Base::createFxDelay(void*, uint32_t, const void*) {
  return nullptr;
}

void Base::destroyFxDelay(FxBase*) {
}

FxBase* Base::createFxCpuDelay(void*, uint32_t, const void*, uint32_t) {
  return nullptr;
}

void Base::destroyFxCpuDelay(FxBase*) {
}

FxBase* Base::createFxLightLimiter(void*, uint32_t, const void*) {
  return nullptr;
}

void Base::destroyFxLightLimiter(FxBase*) {
}

FxBase* Base::createFxCpuLightLimiter(void*, uint32_t, const void*, uint32_t) {
  return nullptr;
}

void Base::destroyFxCpuLightLimiter(FxBase*) {
}

FxBase* Base::createFxCompressor(void*, uint32_t, const void*) {
  return nullptr;
}

void Base::destroyFxCompressor(FxBase*) {
}

FxBase* Base::createFxFFT(void*, fnd::WeakHandle, uint32_t, uint32_t) {
  return nullptr;
}

FxBase* Base::createFxFFT(void*, fnd::WeakHandle, fnd::WeakHandle, uint32_t,
  uint32_t) {
  return nullptr;
}

void Base::destroyFxFFT(FxBase*) {
}

FxBase* Base::createFxEQ(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxEQ(FxBase*) {
}

FxBase* Base::createFxMS(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxMS(FxBase*) {
}

FxBase* Base::createFxMSCtrl(void*, fnd::WeakHandle, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxMSCtrl(FxBase*) {
}

FxBase* Base::createFxMSEQ(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxMSEQ(FxBase*) {
}

FxBase* Base::createFxSpectrum(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxSpectrum(FxBase*) {
}

FxBase* Base::createFxVib(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxVib(FxBase*) {
}

FxBase* Base::createFxFinalMix(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxFinalMix(FxBase*) {
}

FxBase* Base::createFxMute(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxMute(FxBase*) {
}

FxBase* Base::createFxNone(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxNone(FxBase*) {
}

FxBase* Base::createFxSurround(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxSurround(FxBase*) {
}

FxBase* Base::createFxLFE(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxLFE(FxBase*) {
}

FxBase* Base::createFxSimpleLimiter(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxSimpleLimiter(FxBase*) {
}

FxBase* Base::createFxWaveform(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxWaveform(FxBase*) {
}

FxBase* Base::createFxMultiBridge(void*, uint32_t, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxMultiBridge(FxBase*) {
}

FxBase* Base::createFxSpeaker(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxSpeaker(FxBase*) {
}

FxBase* Base::createFxPCMPlayer(void*, uint32_t, uint32_t) {
  return nullptr;
}

void Base::destroyFxPCMPlayer(FxBase*) {
}

void Base::setAuxBusVolume(uint32_t, void*) {
}

void Base::clearEffect(void*) {
}

void Base::appendEffect(uint32_t, void*) {
}

void Base::beginEffect() {
}

void Base::endEffect() {
}

void Base::updateEffect() {
}

void Base::appendFx(FxBase*) {
}

void Base::clearAllEffect(void*) {
}

void Base::removeFx(FxBase*) {
}

void Base::setEffectVolume(void*, uint32_t, float) {
}

void Base::resetEffect() {
}

void Base::setAuxBus(int, void*) {
}

void Base::setOutputMode(uint32_t) {
}

int Base::getOutputMode() {
  return 1;
}

void Base::setOutputVolume(float) {
}

size_t Base::getHeapFreeSize() {
  return 0;
}

size_t Base::getHeapSize() {
  return 0;
}

size_t Base::getPoolFreeSize() {
  return 0;
}

size_t Base::getPoolSize() {
  return 0;
}

size_t Base::getEffectFreeSize() {
  return 0;
}

size_t Base::getEffectSize() {
  return 0;
}

int Base::getStreamVoiceCount(int) {
  return 0;
}

int Base::getActiveVoiceCount() {
  return 0;
}

int Base::getReleasedMemoryPoolCount() {
  return 0;
}

void Base::setMute(bool value) {
  mute_ = value;
}

bool Base::isMute() const {
  return mute_;
}

bool* Base::getMute() {
  return &mute_;
}

void Base::setPause(bool value) {
  pause_ = value;
}

bool Base::isPause() const {
  return pause_;
}

bool* Base::getPause() {
  return &pause_;
}

void Base::setDebug(bool value) {
  debug_ = value;
}

bool Base::isDebug() const {
  return debug_;
}

bool* Base::getDebug() {
  return &debug_;
}

bool Base::isArchiveLoaded(int) const {
  return false;
}

int Base::findArchive(const char*) {
  return 0;
}

int Base::getArchiveCount() const {
  return 0;
}

const char* Base::getArchiveName(int) {
  return nullptr;
}

bool Base::isAddonLoaded(int, int) {
  return false;
}

const char* Base::getAddonName(int, int) {
  return nullptr;
}

void* Base::getAddonArchive(int, int) {
  return nullptr;
}

size_t Base::getAddonCount(int) {
  return 0;
}

Base::Info Base::getInfo() {
  return {};
}

}
