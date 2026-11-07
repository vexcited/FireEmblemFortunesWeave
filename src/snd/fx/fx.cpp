#include "snd/fx/fx.hpp"

#include "snd/manager.hpp"

namespace snd::fx {

[[gnu::noinline]] void FxBase::destroy() {
  manager_->destroyFx(this);
}

void FxBase::mainUnlocked() {
}

void FxBase::updateFx(float ms) {
  static_cast<Param*>(this)->updateVolume(ms);
}

void FxBase::apply() {
}

bool FxBase::isActive() const {
  return active_;
}

void FxBase::stop(int bus, int index) {
  bus_ = bus;
  index_ = index;
  active_ = false;
}

void FxBase::start(int bus, int index) {
  bus_ = bus;
  index_ = index;
  active_ = true;
}

int FxBase::getBus() const {
  return bus_;
}

int FxBase::getBusIndex() const {
  return bus_;
}

int FxBase::getIndex() const {
  return index_;
}

int FxBase::getChannel() const {
  return channel_;
}

target::FxBase* FxBase::getImpl() const {
  return impl_;
}

void FxBase::setLatency(int latency) {
}

int FxBase::getLatency() const {
  return 0;
}

void FxBase::enable() {
}

void FxBase::disable() {
}

bool FxBase::isRemovable() const {
  return true;
}

void FxReverb::destroy() {
  FxBase::destroy();
}

void FxReverb::mainUnlocked() {
}

void** FxReverb::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxReverb::setParam(const void* param, float scale) {
}

void FxCpuReverb::destroy() {
  FxBase::destroy();
}

void FxCpuReverb::mainUnlocked() {
}

void** FxCpuReverb::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxCpuReverb::setParam(const void* param, float scale) {
}

void FxI3dl2Reverb::destroy() {
  FxBase::destroy();
}

void FxI3dl2Reverb::mainUnlocked() {
}

void** FxI3dl2Reverb::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxI3dl2Reverb::setParam(const void* param, float scale) {
}

void FxCpuI3dl2Reverb::destroy() {
  FxBase::destroy();
}

void FxCpuI3dl2Reverb::mainUnlocked() {
}

void** FxCpuI3dl2Reverb::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxCpuI3dl2Reverb::setParam(const void* param, float scale) {
}

void FxDelay::destroy() {
  FxBase::destroy();
}

void FxDelay::mainUnlocked() {
}

void** FxDelay::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxDelay::setParam(const void* param, float scale) {
}

void FxCpuDelay::destroy() {
  FxBase::destroy();
}

void FxCpuDelay::mainUnlocked() {
}

void** FxCpuDelay::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxCpuDelay::setParam(const void* param, float scale) {
}

void FxLightLimiter::destroy() {
  FxBase::destroy();
}

void FxLightLimiter::mainUnlocked() {
}

void** FxLightLimiter::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxLightLimiter::setParam(const void* param, float scale) {
}

void FxCpuLightLimiter::destroy() {
  FxBase::destroy();
}

void FxCpuLightLimiter::mainUnlocked() {
}

void** FxCpuLightLimiter::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxCpuLightLimiter::setParam(const void* param, float scale) {
}

void FxFFT::destroy() {
  FxBase::destroy();
}

void FxFFT::mainUnlocked() {
}

void** FxFFT::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxFFT::enable() {
}

void FxFFT::disable() {
}

bool FxFFT::isRemovable() const {
  return true;
}

void FxEQ::destroy() {
  FxBase::destroy();
}

void FxEQ::mainUnlocked() {
}

void** FxEQ::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxEQ::enable() {
}

void FxEQ::disable() {
}

bool FxEQ::isRemovable() const {
  return true;
}

void FxEQ::unknown24() {
}

void FxMS::destroy() {
  FxBase::destroy();
}

void FxMS::mainUnlocked() {
}

void** FxMS::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxMS::enable() {
}

void FxMS::disable() {
}

bool FxMS::isRemovable() const {
  return true;
}

void FxMS::unknown24(float) {
}

float FxMS::unknown25() {
  return 0.0f;
}

void FxMS::unknown26(int) {
}

void FxMS::unknown27(int, float, int) {
}

void FxMSCtrl::destroy() {
  FxBase::destroy();
}

void FxMSCtrl::mainUnlocked() {
}

void** FxMSCtrl::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxMSCtrl::enable() {
}

void FxMSCtrl::disable() {
}

bool FxMSCtrl::isRemovable() const {
  return true;
}

void FxMSCtrl::unknown24(int) {
}

int FxMSCtrl::unknown25() {
  return 0;
}

float FxMSCtrl::unknown27() {
  return 0.0f;
}

void FxMSEQ::destroy() {
  FxBase::destroy();
}

void FxMSEQ::mainUnlocked() {
}

void** FxMSEQ::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxMSEQ::enable() {
}

void FxMSEQ::disable() {
}

bool FxMSEQ::isRemovable() const {
  return true;
}

void FxMSEQ::unknown24(float) {
}

float FxMSEQ::unknown25() {
  return 0.0f;
}

void FxMSEQ::unknown26(int) {
}

void FxMSEQ::unknown27(int, float, int) {
}

void FxSpectrum::destroy() {
  FxBase::destroy();
}

void FxSpectrum::mainUnlocked() {
}

void** FxSpectrum::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxSpectrum::enable() {
}

void FxSpectrum::disable() {
}

bool FxSpectrum::isRemovable() const {
  return true;
}

void FxSpectrum::unknown24(void* data) {
}

void FxVib::destroy() {
  FxBase::destroy();
}

void FxVib::mainUnlocked() {
}

void** FxVib::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxVib::enable() {
}

void FxVib::disable() {
}

bool FxVib::isRemovable() const {
  return true;
}

void FxVib::unknown24(float) {
}

void FxVib::unknown25(float) {
}

void FxVib::unknown26(float) {
}

float FxVib::unknown27() {
  return 0.0f;
}

float FxVib::unknown28() {
  return 0.0f;
}

float FxVib::unknown29() {
  return 0.0f;
}

void FxVib::unknown30(int, float, int) {
}

void FxVib::unknown31(int, float, int) {
}

int FxVib::unknown32(int) {
  return 0;
}

float FxVib::unknown33(int) {
  return 0.0f;
}

float FxVib::unknown34(int) {
  return 0.0f;
}

float FxVib::unknown35(int) {
  return 0.0f;
}

void FxVib::unknown36(int value) {
}

void FxFinalMix::destroy() {
  FxBase::destroy();
}

void FxFinalMix::mainUnlocked() {
}

void** FxFinalMix::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxFinalMix::enable() {
}

void FxFinalMix::disable() {
}

bool FxFinalMix::isRemovable() const {
  return true;
}

void FxFinalMix::unknown24() {
}

void FxFinalMix::unknown25() {
}

void FxFinalMix::unknown26() {
}

void FxMute::destroy() {
  FxBase::destroy();
}

void FxMute::mainUnlocked() {
}

void** FxMute::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxMute::enable() {
}

void FxMute::disable() {
}

bool FxMute::isRemovable() const {
  return true;
}

void FxNone::destroy() {
  FxBase::destroy();
}

void FxNone::mainUnlocked() {
}

void** FxNone::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxNone::enable() {
}

void FxNone::disable() {
}

bool FxNone::isRemovable() const {
  return true;
}

void FxSurround::destroy() {
  FxBase::destroy();
}

void FxSurround::mainUnlocked() {
}

void** FxSurround::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxSurround::enable() {
}

void FxSurround::disable() {
}

bool FxSurround::isRemovable() const {
  return true;
}

void FxSurround::unknown24() {
}

void FxSurround::unknown25() {
}

void FxSurround::unknown26(int) {
}

void FxSurround::unknown27(int) {
}

void FxSurround::unknown28(int) {
}

void FxSurround::unknown29(int) {
}

void FxSurround::unknown30(int) {
}

void FxSurround::unknown31(int) {
}

int FxSurround::unknown32() {
  return 0;
}

int FxSurround::unknown33() {
  return 0;
}

int FxSurround::unknown34() {
  return 0;
}

int FxSurround::unknown35() {
  return 0;
}

int FxSurround::unknown36() {
  return 0;
}

int FxSurround::unknown37() {
  return 0;
}

void FxSurround::unknown38(int, float) {
}

void FxSurround::unknown39(int, int) {
}

void FxSurround::unknown40(int, float) {
}

float FxSurround::unknown41(int) {
  return 0.0f;
}

int FxSurround::unknown42(int) {
  return 0;
}

float FxSurround::unknown43(int) {
  return 0.0f;
}

void FxSurround::unknown44(int) {
}

int FxSurround::unknown45() {
  return 0;
}

void FxLFE::destroy() {
  FxBase::destroy();
}

void FxLFE::mainUnlocked() {
}

void** FxLFE::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxLFE::enable() {
}

void FxLFE::disable() {
}

bool FxLFE::isRemovable() const {
  return true;
}

void FxLFE::unknown24(float) {
}

float FxLFE::unknown25() {
  return 0.0f;
}

void FxLFE::unknown26(float) {
}

float FxLFE::unknown27() {
  return 0.0f;
}

void FxLFE::unknown28(int) {
}

void FxLFE::unknown29(int, float, int) {
}

void FxLFE::unknown30(bool) {
}

void FxSimpleLimiter::destroy() {
  FxBase::destroy();
}

void FxSimpleLimiter::mainUnlocked() {
}

void** FxSimpleLimiter::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxSimpleLimiter::enable() {
}

void FxSimpleLimiter::disable() {
}

bool FxSimpleLimiter::isRemovable() const {
  return true;
}

void FxSimpleLimiter::unknown24() {
}

void FxSimpleLimiter::unknown25() {
}

float FxSimpleLimiter::unknown26() {
  return 0.0f;
}

int FxSimpleLimiter::unknown27() {
  return 0;
}

void FxWaveform::destroy() {
  FxBase::destroy();
}

void FxWaveform::mainUnlocked() {
}

void** FxWaveform::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxWaveform::enable() {
}

void FxWaveform::disable() {
}

bool FxWaveform::isRemovable() const {
  return true;
}

int FxWaveform::unknown24() {
  return 0;
}

void FxSpeaker::destroy() {
  FxBase::destroy();
}

void FxSpeaker::mainUnlocked() {
}

void** FxSpeaker::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxSpeaker::enable() {
}

void FxSpeaker::disable() {
}

bool FxSpeaker::isRemovable() const {
  return true;
}

float FxSpeaker::unknown24() {
  return 0.0f;
}

void FxMultiBridge::destroy() {
  FxBase::destroy();
}

void** FxMultiBridge::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxMultiBridge::enable() {
}

void FxMultiBridge::disable() {
}

bool FxMultiBridge::isRemovable() const {
  return true;
}

void FxCompressor::destroy() {
  FxBase::destroy();
}

void FxCompressor::mainUnlocked() {
}

void** FxCompressor::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxCompressor::setParam(const void* param, float scale) {
}

void FxPCMPlayer::mainUnlocked() {
}

void** FxPCMPlayer::getRegistry() {
  static void* base = FxBase::registry();
  return &base;
}

void FxPCMPlayer::enable() {
}

void FxPCMPlayer::disable() {
}

bool FxPCMPlayer::isRemovable() const {
  return true;
}

void FxPCMPlayer::unknown24(int) {
}

void FxPCMPlayer::unknown25(const void*, int) {
}

int FxPCMPlayer::unknown26() {
  return 0;
}

int FxPCMPlayer::unknown27() {
  return 0;
}

int FxPCMPlayer::unknown30() {
  return 0;
}

void FxPCMPlayer::unknown31() {
}

FxReverb::FxReverb(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxI3dl2Reverb::FxI3dl2Reverb(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxDelay::FxDelay(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxLightLimiter::FxLightLimiter(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxCompressor::FxCompressor(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxSurround::FxSurround(Manager* manager, const char* name, int index)
  : FxBase(manager, name, index, 5) {
}

FxCpuReverb::FxCpuReverb(Manager* manager, const char* name, int index,
  const void* param, int count) : FxBase(manager, name, index, count) {
}

FxCpuI3dl2Reverb::FxCpuI3dl2Reverb(Manager* manager, const char* name, int index,
  const void* param, int count) : FxBase(manager, name, index, count) {
}

FxCpuDelay::FxCpuDelay(Manager* manager, const char* name, int index,
  const void* param, int count) : FxBase(manager, name, index, count) {
}

FxCpuLightLimiter::FxCpuLightLimiter(Manager* manager, const char* name, int index,
  const void* param, int count) : FxBase(manager, name, index, count) {
}

FxEQ::FxEQ(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxVib::FxVib(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxFinalMix::FxFinalMix(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxMute::FxMute(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxNone::FxNone(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxLFE::FxLFE(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxSimpleLimiter::FxSimpleLimiter(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxWaveform::FxWaveform(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxSpeaker::FxSpeaker(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxPCMPlayer::FxPCMPlayer(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxMS::FxMS(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

FxMSEQ::FxMSEQ(Manager* manager, const char* name, int index,
  int count) : FxBase(manager, name, index, count) {
}

}
