#include "snd/target/fx.hpp"

#include "nn/diag/diag_abort.hpp"
#include "snd/memory.hpp"
#include "snd/target/base.hpp"

namespace snd::target {

namespace {

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

}
