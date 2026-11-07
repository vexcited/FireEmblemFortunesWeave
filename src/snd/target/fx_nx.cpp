#include "snd/target/fx.hpp"

#include <cstring>

#include "nn/diag/diag_abort.hpp"
#include "snd/memory.hpp"
#include "snd/target/base.hpp"

namespace snd::target {

namespace {

template <typename T>
T* getAux(const FxBase* impl) {
  return static_cast<T*>(impl->aux);
}

template <typename T>
T* getEffect(const FxBase* impl) {
  return static_cast<T*>(impl->effect);
}

}

void FxReverbNX::enable() {
  if (!getEffect<nn::atk::EffectReverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectReverb>(impl_)->SetEnabled(true);
  }
}

void FxReverbNX::disable() {
  if (getEffect<nn::atk::EffectReverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectReverb>(impl_)->SetEnabled(false);
  }
}

bool FxReverbNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuReverbNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuReverbNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuReverbNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxI3dl2ReverbNX::enable() {
  if (!getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetEnabled(true);
  }
}

void FxI3dl2ReverbNX::disable() {
  if (getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetEnabled(false);
  }
}

bool FxI3dl2ReverbNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuI3dl2ReverbNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuI3dl2ReverbNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuI3dl2ReverbNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxDelayNX::enable() {
  if (!getEffect<nn::atk::EffectDelay>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectDelay>(impl_)->SetEnabled(true);
  }
}

void FxDelayNX::disable() {
  if (getEffect<nn::atk::EffectDelay>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectDelay>(impl_)->SetEnabled(false);
  }
}

bool FxDelayNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuDelayNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuDelayNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuDelayNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxLightLimiterNX::enable() {
  if (!getEffect<nn::atk::EffectLightLimiter>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectLightLimiter>(impl_)->SetEnabled(true);
  }
}

void FxLightLimiterNX::disable() {
  if (getEffect<nn::atk::EffectLightLimiter>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectLightLimiter>(impl_)->SetEnabled(false);
  }
}

bool FxLightLimiterNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuLightLimiterNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuLightLimiterNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuLightLimiterNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxCompressorNX::enable() {
  if (!getEffect<nn::atk::EffectCompressor>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectCompressor>(impl_)->SetEnabled(true);
  }
}

void FxCompressorNX::disable() {
  if (getEffect<nn::atk::EffectCompressor>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectCompressor>(impl_)->SetEnabled(false);
  }
}

bool FxCompressorNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxFFTNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxFFTNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxFFTNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxEQNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxEQNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

int FxEQNX::getLatency() const {
  return getAux<EQEffect>(impl_)->getLatency();
}

bool FxEQNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSCtrlNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSCtrlNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSCtrlNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSEQNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSEQNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSEQNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSpectrumNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSpectrumNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSpectrumNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxVibNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxVibNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxVibNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxFinalMixNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxFinalMixNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxFinalMixNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMuteNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMuteNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMuteNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxNoneNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxNoneNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxNoneNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSurroundNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSurroundNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSurroundNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxLFENX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxLFENX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxLFENX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSimpleLimiterNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSimpleLimiterNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSimpleLimiterNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxWaveformNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxWaveformNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxWaveformNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSpeakerNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSpeakerNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSpeakerNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxPCMPlayerNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxPCMPlayerNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxPCMPlayerNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMultiBridgeNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMultiBridgeNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMultiBridgeNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

// The effect owns its platform object and its buffers.
[[gnu::always_inline]] inline void freeBuffer(void*& buffer) {
  if (void* memory = buffer) {
    buffer = nullptr;
    s_platform->freePoolMemory(memory);
  }
}

FxReverbNX::~FxReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuReverbNX::~FxCpuReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxI3dl2ReverbNX::~FxI3dl2ReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuI3dl2ReverbNX::~FxCpuI3dl2ReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxDelayNX::~FxDelayNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuDelayNX::~FxCpuDelayNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxLightLimiterNX::~FxLightLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuLightLimiterNX::~FxCpuLightLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxCompressorNX::~FxCompressorNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxFFTNX::~FxFFTNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxEQNX::~FxEQNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSNX::~FxMSNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSCtrlNX::~FxMSCtrlNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSEQNX::~FxMSEQNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxVibNX::~FxVibNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxFinalMixNX::~FxFinalMixNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMuteNX::~FxMuteNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxNoneNX::~FxNoneNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSurroundNX::~FxSurroundNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxLFENX::~FxLFENX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSimpleLimiterNX::~FxSimpleLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxWaveformNX::~FxWaveformNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSpeakerNX::~FxSpeakerNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxPCMPlayerNX::~FxPCMPlayerNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMultiBridgeNX::~FxMultiBridgeNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

// The bus pointer is the name of the effect.
FxMSNX::FxMSNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxMS(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<MSEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxMSEQNX::FxMSEQNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxMSEQ(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<MSEQEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxVibNX::FxVibNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxVib(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<VibEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxFinalMixNX::FxFinalMixNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxFinalMix(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<FinalMixEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxMuteNX::FxMuteNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxMute(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<MuteEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxNoneNX::FxNoneNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxNone(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<NoneEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxSurroundNX::FxSurroundNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxSurround(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<SurroundEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxLFENX::FxLFENX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxLFE(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<LFEEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxSimpleLimiterNX::FxSimpleLimiterNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxSimpleLimiter(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<SimpleLimiterEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxSpeakerNX::FxSpeakerNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxSpeaker(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<SpeakerEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The bus pointer is the name of the effect.
FxPCMPlayerNX::FxPCMPlayerNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxPCMPlayer(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<PCMPlayerEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
  getAux<PCMPlayerEffect>(impl_)->unknown191740(4800);
}

// Four channels select the second mode and six the third.
[[gnu::always_inline]] inline int getChannelMode(int channels) {
  if (channels == 6) {
    return 3;
  }
  return channels == 4 ? 2 : 1;
}

FxReverbNX::FxReverbNX(Manager* manager, void* bus, uint32_t index,
  const void* param) : fx::FxReverb(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setEffect(snd::create<nn::atk::EffectReverb>());
  getEffect<nn::atk::EffectReverb>(impl_)->SetEnabled(true);
  getEffect<nn::atk::EffectReverb>(impl_)->SetChannelMode(getChannelMode(channel_));
  impl_->effect->SetActive(true);
  setParam(param, 1.0f);
  bufferSize_ = impl_->effect->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
}

FxI3dl2ReverbNX::FxI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
  const void* param) : fx::FxI3dl2Reverb(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setEffect(snd::create<nn::atk::EffectI3dl2Reverb>());
  getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetEnabled(true);
  getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetChannelMode(getChannelMode(channel_));
  impl_->effect->SetActive(true);
  setParam(param, 1.0f);
  bufferSize_ = impl_->effect->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
}

FxDelayNX::FxDelayNX(Manager* manager, void* bus, uint32_t index,
  const void* param) : fx::FxDelay(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setEffect(snd::create<nn::atk::EffectDelay>());
  getEffect<nn::atk::EffectDelay>(impl_)->SetEnabled(true);
  getEffect<nn::atk::EffectDelay>(impl_)->SetChannelMode(getChannelMode(channel_));
  impl_->effect->SetActive(true);
  setParam(param, 1.0f);
  bufferSize_ = impl_->effect->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
}

FxLightLimiterNX::FxLightLimiterNX(Manager* manager, void* bus, uint32_t index,
  const void* param) : fx::FxLightLimiter(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setEffect(snd::create<nn::atk::EffectLightLimiter>());
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetEnabled(true);
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetChannelMode(getChannelMode(channel_));
  impl_->effect->SetActive(true);
  setParam(param, 1.0f);
  bufferSize_ = impl_->effect->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
}

FxCompressorNX::FxCompressorNX(Manager* manager, void* bus, uint32_t index,
  const void* param) : fx::FxCompressor(manager, static_cast<const char*>(bus), index) {
  impl_ = snd::create<target::FxBase>();
  impl_->setEffect(snd::create<nn::atk::EffectCompressor>());
  getEffect<nn::atk::EffectCompressor>(impl_)->SetEnabled(true);
  getEffect<nn::atk::EffectCompressor>(impl_)->SetChannelMode(getChannelMode(channel_));
  impl_->effect->SetActive(true);
  setParam(param, 1.0f);
  bufferSize_ = impl_->effect->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
}

// The software kinds render at 48 kHz into a second buffer.
FxCpuReverbNX::FxCpuReverbNX(Manager* manager, void* bus, uint32_t index,
  const void* param, uint32_t channels) : fx::FxCpuReverb(manager,
  static_cast<const char*>(bus), index, param, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<CpuReverbEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
  static_cast<CpuReverbEffect*>(impl_->aux)->bus = channel_;
  static_cast<CpuReverbEffect*>(impl_->aux)->sampleRate = 48000;
  setParam(param, 1.0f);
  workBufferSize_ = static_cast<CpuReverbEffect*>(impl_->aux)->getWorkBufferSize();
  buffer2_ = s_platform->allocPoolMemory(workBufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer2_);
  static_cast<CpuReverbEffect*>(impl_->aux)->setWorkBuffer(buffer2_, workBufferSize_);
  impl_->aux->SetEnabled(true);
}

// The software kinds render at 48 kHz into a second buffer.
FxCpuI3dl2ReverbNX::FxCpuI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
  const void* param, uint32_t channels) : fx::FxCpuI3dl2Reverb(manager,
  static_cast<const char*>(bus), index, param, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<CpuI3dl2ReverbEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
  static_cast<CpuI3dl2ReverbEffect*>(impl_->aux)->bus = channel_;
  static_cast<CpuI3dl2ReverbEffect*>(impl_->aux)->sampleRate = 48000;
  setParam(param, 1.0f);
  workBufferSize_ = static_cast<CpuI3dl2ReverbEffect*>(impl_->aux)->getWorkBufferSize();
  buffer2_ = s_platform->allocPoolMemory(workBufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer2_);
  static_cast<CpuI3dl2ReverbEffect*>(impl_->aux)->setWorkBuffer(buffer2_, workBufferSize_);
  impl_->aux->SetEnabled(true);
}

// The software kinds render at 48 kHz into a second buffer.
FxCpuDelayNX::FxCpuDelayNX(Manager* manager, void* bus, uint32_t index,
  const void* param, uint32_t channels) : fx::FxCpuDelay(manager,
  static_cast<const char*>(bus), index, param, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<CpuDelayEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
  static_cast<CpuDelayEffect*>(impl_->aux)->bus = channel_;
  static_cast<CpuDelayEffect*>(impl_->aux)->sampleRate = 48000;
  setParam(param, 1.0f);
  workBufferSize_ = static_cast<CpuDelayEffect*>(impl_->aux)->getWorkBufferSize();
  buffer2_ = s_platform->allocPoolMemory(workBufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer2_);
  static_cast<CpuDelayEffect*>(impl_->aux)->setWorkBuffer(buffer2_, workBufferSize_);
  impl_->aux->SetEnabled(true);
}

// The software kinds render at 48 kHz into a second buffer.
FxCpuLightLimiterNX::FxCpuLightLimiterNX(Manager* manager, void* bus, uint32_t index,
  const void* param, uint32_t channels) : fx::FxCpuLightLimiter(manager,
  static_cast<const char*>(bus), index, param, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<CpuLightLimiterEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
  static_cast<CpuLightLimiterEffect*>(impl_->aux)->bus = channel_;
  static_cast<CpuLightLimiterEffect*>(impl_->aux)->sampleRate = 48000;
  setParam(param, 1.0f);
  workBufferSize_ = static_cast<CpuLightLimiterEffect*>(impl_->aux)->getWorkBufferSize();
  buffer2_ = s_platform->allocPoolMemory(workBufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer2_);
  static_cast<CpuLightLimiterEffect*>(impl_->aux)->setWorkBuffer(buffer2_, workBufferSize_);
  impl_->aux->SetEnabled(true);
}

FxEQNX::FxEQNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxEQ(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<EQEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

FxWaveformNX::FxWaveformNX(Manager* manager, void* bus, uint32_t index,
  uint32_t channels) : fx::FxWaveform(manager, static_cast<const char*>(bus), index,
    channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<WaveformEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

FxMultiBridgeNX::FxMultiBridgeNX(Manager* manager, void* bus,
  uint32_t index, uint32_t channels, uint32_t count) : fx::FxMultiBridge(
    manager, static_cast<const char*>(bus), index, channels, count) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<MultiBridgeEffect>(count));
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

void FxMSNX::unknown24(float value) {
  getAux<MSEffect>(impl_)->unknown_74_ = value;
}

float FxMSNX::unknown25() {
  return getAux<MSEffect>(impl_)->unknown_70_;
}

void FxMSNX::unknown26(int a) {
  getAux<MSEffect>(impl_)->unknown16d9b0(a);
}

void FxMSNX::unknown27(int a, float b, int c) {
  getAux<MSEffect>(impl_)->unknown16d9d0(a, b, c);
}

void FxMSCtrlNX::unknown24(int value) {
  unknown_1640_ = value;
}

int FxMSCtrlNX::unknown25() {
  return unknown_1640_;
}

int FxMSCtrlNX::unknown26() {
  return getAux<MSCtrlEffect>(impl_)->unknown_68_;
}

float FxMSCtrlNX::unknown27() {
  return unknown_1644_;
}

void FxMSEQNX::unknown24(float value) {
  getAux<MSEQEffect>(impl_)->unknown_74_ = value;
}

float FxMSEQNX::unknown25() {
  return getAux<MSEQEffect>(impl_)->unknown_70_;
}

void FxMSEQNX::unknown26(int a) {
  getAux<MSEQEffect>(impl_)->unknown16ed70(a);
}

void FxMSEQNX::unknown27(int a, float b, int c) {
  getAux<MSEQEffect>(impl_)->unknown16ed90(a, b, c);
}

void FxVibNX::unknown24(float value) {
  getAux<VibEffect>(impl_)->unknown_74_ = value;
}

void FxVibNX::unknown25(float value) {
  getAux<VibEffect>(impl_)->unknown_7c_ = value;
}

void FxVibNX::unknown26(float value) {
  getAux<VibEffect>(impl_)->unknown_84_ = value;
}

float FxVibNX::unknown27() {
  return getAux<VibEffect>(impl_)->unknown_70_;
}

float FxVibNX::unknown28() {
  return getAux<VibEffect>(impl_)->unknown_78_;
}

float FxVibNX::unknown29() {
  return getAux<VibEffect>(impl_)->unknown_80_;
}

void FxVibNX::unknown30(int a, float b, int c) {
  getAux<VibEffect>(impl_)->unknown173100(a, b, c);
}

void FxVibNX::unknown31(int a, float b, int c) {
  getAux<VibEffect>(impl_)->unknown173180(a, b, c);
}

int FxVibNX::unknown32(int a) {
  return getAux<VibEffect>(impl_)->unknown173210(a);
}

float FxVibNX::unknown33(int a) {
  return getAux<VibEffect>(impl_)->channels[a].gain;
}

float FxVibNX::unknown34(int a) {
  return getAux<VibEffect>(impl_)->channels[a].pan;
}

float FxVibNX::unknown35(int a) {
  return getAux<VibEffect>(impl_)->channels[a].surroundPan;
}

void FxSurroundNX::unknown24() {
  getAux<SurroundEffect>(impl_)->setUnknown175410(true);
}

void FxSurroundNX::unknown25() {
  getAux<SurroundEffect>(impl_)->setUnknown175410(false);
}

void FxSurroundNX::unknown26(int a) {
  getAux<SurroundEffect>(impl_)->unknown175420(a);
}

void FxSurroundNX::unknown27(int a) {
  getAux<SurroundEffect>(impl_)->unknown175480(a);
}

void FxSurroundNX::unknown28(int a) {
  getAux<SurroundEffect>(impl_)->unknown1754e0(a);
}

void FxSurroundNX::unknown29(int a) {
  getAux<SurroundEffect>(impl_)->unknown175540(a);
}

void FxSurroundNX::unknown30(int a) {
  getAux<SurroundEffect>(impl_)->unknown1755a0(a);
}

void FxSurroundNX::unknown31(int a) {
  getAux<SurroundEffect>(impl_)->unknown175600(a);
}

int FxSurroundNX::unknown32() {
  return getAux<SurroundEffect>(impl_)->unknown_6c_;
}

int FxSurroundNX::unknown33() {
  return getAux<SurroundEffect>(impl_)->unknown_70_;
}

int FxSurroundNX::unknown34() {
  return getAux<SurroundEffect>(impl_)->unknown_74_;
}

int FxSurroundNX::unknown35() {
  return getAux<SurroundEffect>(impl_)->unknown_78_;
}

int FxSurroundNX::unknown36() {
  return getAux<SurroundEffect>(impl_)->unknown_7c_;
}

int FxSurroundNX::unknown37() {
  return getAux<SurroundEffect>(impl_)->unknown_80_;
}

void FxSurroundNX::unknown38(int a, float b) {
  getAux<SurroundEffect>(impl_)->unknown175660(a, b);
}

void FxSurroundNX::unknown39(int a, int b) {
  getAux<SurroundEffect>(impl_)->unknown175740(a, b);
}

void FxSurroundNX::unknown40(int a, float b) {
  getAux<SurroundEffect>(impl_)->unknown175800(a, b);
}

float FxSurroundNX::unknown41(int a) {
  return getAux<SurroundEffect>(impl_)->unknown_60e4_[a];
}

int FxSurroundNX::unknown42(int a) {
  return getAux<SurroundEffect>(impl_)->unknown_60e0_[a];
}

float FxSurroundNX::unknown43(int a) {
  return getAux<SurroundEffect>(impl_)->unknown_60ec_[a];
}

void FxSurroundNX::unknown44(int a) {
  getAux<SurroundEffect>(impl_)->unknown175c20(a);
}

int FxSurroundNX::unknown45() {
  return getAux<SurroundEffect>(impl_)->unknown_84_;
}

void FxLFENX::unknown24(float value) {
  getAux<LFEEffect>(impl_)->unknown_74_ = value;
}

float FxLFENX::unknown25() {
  return getAux<LFEEffect>(impl_)->unknown_74_;
}

void FxLFENX::unknown26(float value) {
  getAux<LFEEffect>(impl_)->unknown_7c_ = value;
}

float FxLFENX::unknown27() {
  return getAux<LFEEffect>(impl_)->unknown_7c_;
}

void FxLFENX::unknown28(int a) {
  getAux<LFEEffect>(impl_)->unknown176550(a);
}

void FxLFENX::unknown29(int a, float b, int c) {
  getAux<LFEEffect>(impl_)->unknown176570(a, b, c);
}

void FxLFENX::unknown30(bool value) {
  getAux<LFEEffect>(impl_)->unknown_80_ = value;
}

void FxPCMPlayerNX::unknown24(int a) {
  getAux<PCMPlayerEffect>(impl_)->unknown191740(a);
}

void FxPCMPlayerNX::unknown25(const void* a, int b) {
  getAux<PCMPlayerEffect>(impl_)->unknown191900(a, b);
}

int FxPCMPlayerNX::unknown26() {
  return getAux<PCMPlayerEffect>(impl_)->unknown_98_;
}

int FxPCMPlayerNX::unknown27() {
  return getAux<PCMPlayerEffect>(impl_)->unknown191c60();
}

int FxPCMPlayerNX::unknown28() {
  return 48000;
}

uint64_t FxPCMPlayerNX::unknown29() {
  return getAux<PCMPlayerEffect>(impl_)->unknown_c0_;
}

void FxPCMPlayerNX::setLatency(int latency) {
  getAux<PCMPlayerEffect>(impl_)->setLatency(latency);
}

int FxPCMPlayerNX::getLatency() const {
  return getAux<PCMPlayerEffect>(impl_)->getLatency();
}

int FxPCMPlayerNX::unknown30() {
  return getAux<PCMPlayerEffect>(impl_)->unknown_a4_;
}

void FxPCMPlayerNX::unknown31() {
  getAux<PCMPlayerEffect>(impl_)->unknown190d00();
}

void FxCpuReverbNX::setParam(const void* param, float scale) {
  const ReverbParam* source = static_cast<const ReverbParam*>(param);
  nn::audio::ReverbParameterSet& set =
    getAux<CpuReverbEffect>(impl_)->parameters;
  set.earlyMode =
    static_cast<nn::audio::ReverbType::EarlyMode>(source->earlyMode);
  set.earlyGain = source->earlyGain;
  set.predelayTimeMilliSeconds = source->predelayTime;
  set.lateMode = static_cast<nn::audio::ReverbType::LateMode>(source->lateMode);
  set.lateGain = source->lateGain;
  set.decayTimeSeconds = source->decayTime / 1000.0f;
  set.highFreqDecayRatio = source->highFreqDecayRatio;
  set.coloration = source->coloration;
  set.reverbGain = source->reverbGain;
  set.outGain = scale * source->outGain;
  set.dryGain = source->dryGain;
  getAux<CpuReverbEffect>(impl_)->updateParameters();
}

void FxCpuDelayNX::setParam(const void* param, float scale) {
  const DelayParam* source = static_cast<const DelayParam*>(param);
  nn::audio::DelayParameterSet& set = getAux<CpuDelayEffect>(impl_)->parameters;
  set.delayTime = nn::audio::detail::FromMilliSeconds(source->delayTime);
  set.inGain = scale * (source->inGain * source->inScale);
  set.feedbackGain = source->feedbackGain;
  set.dryGain = source->dryGain;
  set.lowPassAmount = source->lowPassAmount;
  set.channelSpread = source->channelSpread;
  getAux<CpuDelayEffect>(impl_)->updateParameters();
}

void FxCpuLightLimiterNX::setParam(const void* param, float scale) {
  const LightLimiterParam* source = static_cast<const LightLimiterParam*>(param);
  nn::audio::LightLimiterParameterSet& set =
    getAux<CpuLightLimiterEffect>(impl_)->parameters;
  set.attackTime = nn::audio::detail::FromMicroSeconds(source->attackTime);
  set.releaseTime = nn::audio::detail::FromMilliSeconds(source->releaseTime);
  set.lookAheadTime = nn::audio::detail::FromMicroSeconds(source->lookAheadTime);
  set.threshold = source->threshold;
  set.inputGain = source->inputGain;
  set.outputGain = scale * source->outputGain;
  getAux<CpuLightLimiterEffect>(impl_)->updateParameters();
}

void FxReverbNX::setParam(const void* param, float scale) {
  const ReverbParam* source = static_cast<const ReverbParam*>(param);
  getEffect<nn::atk::EffectReverb>(impl_)->SetEarlyMode(source->earlyMode);
  getEffect<nn::atk::EffectReverb>(impl_)->SetEarlyGain(source->earlyGain);
  getEffect<nn::atk::EffectReverb>(impl_)->SetPredelayTime(
    nn::audio::detail::FromMilliSeconds(source->predelayTime));
  getEffect<nn::atk::EffectReverb>(impl_)->SetLateMode(source->lateMode);
  getEffect<nn::atk::EffectReverb>(impl_)->SetLateGain(source->lateGain);
  getEffect<nn::atk::EffectReverb>(impl_)->SetDecayTime(
    nn::audio::detail::FromMilliSeconds(source->decayTime));
  getEffect<nn::atk::EffectReverb>(impl_)->SetHighFrequencyDecayRatio(
    source->highFreqDecayRatio);
  getEffect<nn::atk::EffectReverb>(impl_)->SetColoration(source->coloration);
  getEffect<nn::atk::EffectReverb>(impl_)->SetReverbGain(source->reverbGain);
  getEffect<nn::atk::EffectReverb>(impl_)->SetOutGain(
    scale * source->outGain);
  getEffect<nn::atk::EffectReverb>(impl_)->SetDryGain(source->dryGain);
}

void FxDelayNX::setParam(const void* param, float scale) {
  const DelayParam* source = static_cast<const DelayParam*>(param);
  getEffect<nn::atk::EffectDelay>(impl_)->SetDelayTimeMax(
    nn::audio::detail::FromMilliSeconds(source->delayTimeMax));
  getEffect<nn::atk::EffectDelay>(impl_)->SetDelayTime(
    nn::audio::detail::FromMilliSeconds(source->delayTime));
  getEffect<nn::atk::EffectDelay>(impl_)->SetInGain(
    scale * (source->inGain * source->inScale));
  getEffect<nn::atk::EffectDelay>(impl_)->SetFeedbackGain(
    source->feedbackGain);
  getEffect<nn::atk::EffectDelay>(impl_)->SetDryGain(source->dryGain);
  getEffect<nn::atk::EffectDelay>(impl_)->SetLowPassAmount(
    source->lowPassAmount);
  getEffect<nn::atk::EffectDelay>(impl_)->SetChannelSpread(
    source->channelSpread);
}

void FxLightLimiterNX::setParam(const void* param, float scale) {
  const LightLimiterParam* source =
    static_cast<const LightLimiterParam*>(param);
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetAttackTime(
    nn::audio::detail::FromMicroSeconds(source->attackTime));
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetReleaseTime(
    nn::audio::detail::FromMilliSeconds(source->releaseTime));
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetLookAheadTime(
    nn::audio::detail::FromMicroSeconds(source->lookAheadTime));
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetThreshold(
    source->threshold);
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetInputGain(
    source->inputGain);
  getEffect<nn::atk::EffectLightLimiter>(impl_)->SetOutputGain(
    scale * source->outputGain);
}

void FxCompressorNX::setParam(const void* param, float scale) {
  const CompressorParam* source = static_cast<const CompressorParam*>(param);
  getEffect<nn::atk::EffectCompressor>(impl_)->SetAttackTime(
    nn::audio::detail::FromMilliSeconds(source->attackTime));
  getEffect<nn::atk::EffectCompressor>(impl_)->SetReleaseTime(
    nn::audio::detail::FromMilliSeconds(source->releaseTime));
  getEffect<nn::atk::EffectCompressor>(impl_)->SetThreshold(
    source->threshold);
  getEffect<nn::atk::EffectCompressor>(impl_)->SetRatio(source->ratio);
  getEffect<nn::atk::EffectCompressor>(impl_)->SetOutGain(
    scale * source->outGain);
  getEffect<nn::atk::EffectCompressor>(impl_)->SetMakeupGainEnabled(
    source->makeupGain);
}

FxMSCtrlNX::FxMSCtrlNX(Manager* manager, void* bus, fnd::WeakHandle target,
  uint32_t index, uint32_t channels) : fx::FxMSCtrl(manager,
    static_cast<const char*>(bus), target, index, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<MSCtrlEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

FxFFTNX::FxFFTNX(Manager* manager, void* bus, fnd::WeakHandle target,
  uint32_t index, uint32_t channels) : fx::FxFFT(manager,
    static_cast<const char*>(bus), target, index, channels) {
  impl_ = snd::create<target::FxBase>();
  impl_->setAux(snd::create<FFTEffect>());
  impl_->aux->SetChannelCount(count_);
  impl_->aux->SetBus(channel_);
  impl_->aux->SetEnabled(true);
  bufferSize_ = impl_->aux->GetRequiredMemSize();
  buffer_ = s_platform->allocPoolMemory(bufferSize_, 0);
  NN_ABORT_UNLESS_NOT_NULL(buffer_);
}

// The final mix and limiter switches only apply to an enabled effect.
void FxFinalMixNX::unknown25() {
  if (impl_->aux->IsEnabled()) {
    getAux<FinalMixEffect>(impl_)->setUnknown70(true);
  }
}

void FxFinalMixNX::unknown26() {
  if (impl_->aux->IsEnabled()) {
    getAux<FinalMixEffect>(impl_)->setUnknown70(false);
  }
}

void FxSimpleLimiterNX::unknown24() {
  if (impl_->aux->IsEnabled()) {
    getAux<SimpleLimiterEffect>(impl_)->enableUnknown68();
  }
}

void FxSimpleLimiterNX::unknown25() {
  if (impl_->aux->IsEnabled()) {
    getAux<SimpleLimiterEffect>(impl_)->disableUnknown68();
  }
}

float FxSimpleLimiterNX::unknown26() {
  if (impl_->aux->IsEnabled()) {
    return getAux<SimpleLimiterEffect>(impl_)->unknown_1070_;
  }
  return 0.0f;
}

int FxSimpleLimiterNX::unknown27() {
  if (impl_->aux->IsEnabled()) {
    return getAux<SimpleLimiterEffect>(impl_)->getUnknown1074();
  }
  return 0;
}

void FxSpectrumNX::unknown24(void* data) {
  std::memcpy(data, &spectrum_, sizeof(spectrum_));
}

void FxSpectrumNX::unknown26() {
}

void FxSpectrumNX::setUnknown8070(bool value) {
  getAux<SpectrumEffect>(impl_)->unknown_8070_ = value;
}

bool FxSpectrumNX::getUnknown8070() const {
  return getAux<SpectrumEffect>(impl_)->unknown_8070_;
}

// The vibration effect is handed its owner.
void FxVibNX::unknown36(int value) {
  getAux<VibEffect>(impl_)->unknown173230(this, value);
}

}
