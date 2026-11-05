#include "snd/wave_player.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>

#include "nn/util/math_types.hpp"
#include "snd/manager.hpp"
#include "snd/voice.hpp"

namespace snd {

static_assert(sizeof(WavePlayer) == 0x2b98);

#pragma GCC visibility push(hidden)

extern float g_semitoneRatios[169];

#pragma GCC visibility pop

namespace {

constexpr float kSilence = 0.001f;

// A NaN pan is centered.
float clampPan(float value) {
  value = std::isnan(value) ? 0.0f : std::clamp(value, -2.0f, 2.0f);
  if (value < -1.0f) {
    value = -1.0f;
  }
  if (value > 1.0f) {
    value = 1.0f;
  }
  return value;
}

float clampUnit(float value) {
  return value < 0.0f ? 0.0f : value > 1.0f ? 1.0f : value;
}

float clampVolume(float volume) {
  float clamped = 0.0f;
  if (volume >= 0.0f) {
    clamped = volume > 128.0f ? 128.0f : volume;
  }
  return clamped;
}

float toRadian(float degree) {
  return degree * nn::util::FloatPi / 180.0f;
}

float clampSide(float pan) {
  if (pan < -1.0f) {
    pan = -1.0f;
  }
  return pan <= 1.0f ? pan : 1.0f;
}

}

void WavePlayer::seekCache() {
  int lastBlock = lastBlock_;
  int block = seekBlock_;
  int samples;
  if (block == lastBlock + 1) {
    if (loop_ != true) {
      endBlocks();
      return;
    }
    block = loopBlocks_;
    samples = blockSamples_;
    reserved15e0_ = 0;
    seekBlock_ = block;
    position_ = samples * block;
    if (format_ == 2) {
      for (int i = 0; i < channelCount_; i++) {
        channels_[i].context = loopStates_[i].loopContext;
      }
    }
    loopCount_++;
  }
  else {
    samples = blockSamples_;
  }
  int blockBytes = blockBytes_;
  int channels = channelCount_;
  uint32_t offset = dataOffset_ + channels * blockBytes * block;
  uint32_t size = channels * blockBytes;
  blockLength_ = samples;
  if (block >= lastBlock) {
    blockLength_ = lastBlockSamples_;
    blockBytes = (lastBlockBytes_ + 7) & ~7;
    size = blockBytes * channels;
  }
  reader_->seek(offset, 0);
  if (format_ == 2) {
    reader_->read(readBuffer_, size);
    int count = nn::codec::GetAdpcmSampleCount(blockBytes);
    int stride = sampleBytes_ * blockSamples_;
    nn::codec::DecodeAdpcm(reinterpret_cast<int16_t*>(decodeBuffer_),
      &channels_[0].context, &channels_[0].parameter, readBuffer_,
      blockBytes, count);
    nn::codec::DecodeAdpcm(
      reinterpret_cast<int16_t*>(decodeBuffer_ + stride),
      &channels_[1].context, &channels_[1].parameter,
      readBuffer_ + blockBytes, blockBytes, count);
  }
  else if (format_ == 1) {
    reader_->read(decodeBuffer_, size);
  }
  int fraction = seekOffset_;
  seekOffset_ = 0;
  seekBlock_++;
  seekFraction_ = static_cast<float>(fraction);
}

void WavePlayer::seekStream() {
  int lastBlock = lastBlock_;
  if (!loop_ && lastBlock == 99999) {
    lastBlock = reader_->findLastBlock(seekBlock_);
    lastBlock_ = lastBlock;
  }
  if (seekBlock_ == lastBlock + 1) {
    if (loop_ != true) {
      endBlocks();
      return;
    }
    int loopStart = loopStart_;
    WaveReader* reader = reader_;
    seekBlock_ = loopBlocks_;
    reserved15e0_ = 0;
    position_ = loopStart + loopStartOffset_;
    seekOffset_ += loopStart;
    reader->seekBlock(loopBlocks_);
    loopCount_++;
  }
  blockLength_ = blockSamples_;
  if (seekBlock_ >= lastBlock_) {
    blockLength_ = lastBlockSamples_;
  }
  reader_->readBlock(decodeBuffer_, seekBlock_);
  int fraction = seekOffset_;
  seekOffset_ = 0;
  seekBlock_++;
  seekFraction_ = static_cast<float>(fraction);
}

// Interpolates the semitone ratio table, clamped to seven octaves.
float WavePlayer::calcRatio(float pitch) const {
  int semitone = static_cast<int>(pitch * 12.0f);
  int low = semitone <= -84 ? -84 : semitone;
  int index = low >= 84 ? 84 : low;
  float fraction =
    pitch * 12.0f - static_cast<float>(static_cast<int>(pitch * 12.0f));
  float ratio = g_semitoneRatios[index + 84];
  float delta;
  if (fraction <= 0.0f) {
    int previous = index <= -83 ? -83 : index;
    delta = ratio - g_semitoneRatios[previous + 83];
  }
  else {
    int next = low >= 83 ? 83 : low;
    delta = g_semitoneRatios[next + 85] - ratio;
  }
  return ratio + delta * fraction;
}

float WavePlayer::calcVolume() const {
  float volume = Param::calcVolume();
  if (buffer_ != nullptr) {
    volume *= buffer_->volume;
  }
  return volume;
}

float WavePlayer::calcPitch() const {
  float pitch = Param::pitch_.getValue();
  if (buffer_ != nullptr) {
    pitch += buffer_->pitch;
  }
  return pitch;
}

float WavePlayer::calcPan() const {
  float pan = Param::pan_.getValue() + panFluctuation_.getValue();
  if (buffer_ != nullptr) {
    pan += buffer_->pan;
  }
  return pan;
}

float WavePlayer::calcSurroundPan() const {
  float pan = Param::surroundPan_.getValue()
    + surroundPanFluctuation_.getValue();
  if (buffer_ != nullptr) {
    pan += buffer_->surroundPan;
  }
  return pan;
}

float WavePlayer::calcLpf() const {
  float lpf = lpfFrequency_.getValue() + lpfFrequencyOffset_.getValue()
    + lpfOffset_;
  if (buffer_ != nullptr) {
    lpf += buffer_->lpf;
  }
  return lpf;
}

float WavePlayer::calcMainSend() const {
  float send = Param::mainSend_.getValue();
  if (buffer_ != nullptr) {
    send += buffer_->mainSend;
  }
  return send;
}

float WavePlayer::calcBiquadValue() const {
  float value = Param::biquadValue_.getValue();
  if (buffer_ != nullptr) {
    value += buffer_->biquadValue;
  }
  return value;
}

float WavePlayer::calcFxSend() const {
  float send = Param::fxSend_.getValue() + fxSendOffset_.getValue();
  if (buffer_ != nullptr) {
    send += buffer_->fxSend;
  }
  return send;
}

float WavePlayer::calcOutputVolume() const {
  float volume = Param::outputVolume_.getValue();
  if (buffer_ != nullptr) {
    volume += buffer_->outputVolume;
  }
  return volume;
}

void WavePlayer::initialize() {
  if (initialized_) {
    return;
  }
  reader_ = manager_->createReader();
  for (ChannelState& channel : channels_) {
    channel = {};
  }
  initialized_ = true;
}

void WavePlayer::finalize() {
  if (initialized_ == true) {
    if (reader_ != nullptr) {
      WaveReader* reader = reader_;
      reader_ = nullptr;
      manager_->destroyReader(reader);
    }
    state_ = kStateNone;
    initialized_ = false;
  }
}

void WavePlayer::updateState() {
  int state = state_;
  int previous;
  do {
    switch (state) {
      case kStateNone:
        if (stopRequested_ == true) {
          stopRequested_ = false;
          finished_ = true;
        }
        break;
      case kStateLoading:
        updateLoading();
        break;
      case kStateLoaded:
        state_ = kStateReading;
        break;
      case kStateReading:
        if (reader_->isLoaded()) {
          state_ = kStatePrepared;
        }
        break;
      case kStatePrepared:
        if (startRequested_ == true) {
          startRequested_ = false;
          state_ = kStatePlaying;
          setVolume(0.0f);
        }
        else if (stopRequested_ == true) {
          stopRequested_ = false;
          state_ = kStateStopping;
        }
        break;
      case kStatePlaying:
        if (stopRequested_ == true) {
          stopRequested_ = false;
          state_ = kStateStopping;
        }
        else if (muteRequested_ == true) {
          muteRequested_ = false;
          state_ = kStateMuted;
        }
        else if (pauseRequested_ == true) {
          pauseRequested_ = false;
          state_ = kStatePaused;
        }
        break;
      case kStateMuted:
        if (getFadeVolume() < kSilence) {
          silent_ = true;
        }
        if (stopRequested_ == true) {
          stopRequested_ = false;
          state_ = kStateStopping;
        }
        else if (resumeMuteRequested_ == true) {
          resumeMuteRequested_ = false;
          silent_ = false;
          state_ = kStatePlaying;
        }
        break;
      case kStatePaused:
        // The volume is read and ignored.
        getPlayerVolume();
        if (stopRequested_ == true) {
          stopRequested_ = false;
          state_ = kStateStopping;
        }
        else if (resumePauseRequested_ == true) {
          resumePauseRequested_ = false;
          state_ = kStatePlaying;
        }
        break;
      case kStateScrubbing:
        updateScrubbing();
        break;
      case kStateStopping:
        if (getPlayerVolume() < kSilence) {
          if (autoReset_ == true) {
            reset();
            startPlayerVolume(Fade(0.0f), 1.0f);
          }
          else {
            finished_ = true;
          }
        }
        break;
    }
    previous = state;
    state = state_;
  } while (previous != state);
}

inline void WavePlayer::setup() {
  if (reader_->isStream()) {
    setupStream();
  }
  else {
    setupCache();
  }
}

// Splits a sample position into a block and an offset. Streams wrap past
// the last block into the loop, other sources restart.
inline void WavePlayer::locate(int sample) {
  int block = sample / blockSamples_;
  int offset = sample % blockSamples_;
  int lastBlock = lastBlock_;
  if (reader_->isStream()) {
    while (block > lastBlock) {
      block += loopBlocks_ - lastBlock - 1;
    }
  }
  else if (block > lastBlock) {
    block = 0;
    offset = 0;
  }
  seekBlock_ = block;
  seekFraction_ = 0.0f;
  seekOffset_ = offset;
}

// ADPCM sources restart from the saved decoder state, streams also move the
// reader to the block.
inline void WavePlayer::restoreSeek() {
  if (format_ == 2) {
    for (int i = 0; i < channelCount_; i++) {
      channels_[i] = loopStates_[i].state;
    }
  }
  else if (reader_->isStream()) {
    reader_->seekBlock(seekBlock_);
  }
  if (reader_->isStream()) {
    seekStream();
  }
  else {
    seekCache();
  }
}

// Past the last block of a source that does not loop, the output is
// silence and the player stops unless the reader repeats.
inline void WavePlayer::endBlocks() {
  float fraction = static_cast<float>(seekOffset_);
  seekOffset_ = 0;
  blockLength_ = blockSamples_;
  seekFraction_ = fraction;
  memset(decodeBuffer_, 0, 0x10000);
  if (!reader_->isRepeating()) {
    stop(Fade(0.0f));
  }
}

void WavePlayer::updateLoading() {
  if (!reader_->isLoaded()) {
    return;
  }
  setup();
  seekBlock_ = 0;
  seekFraction_ = 0.0f;
  seekOffset_ = 0;
  loopCount_ = 0;
  restoreSeek();
  state_ = kStateReading;
}

void WavePlayer::updateScrubbing() {
  if (stopRequested_ == true) {
    stopRequested_ = false;
    state_ = kStateStopping;
    return;
  }
  if (getPlayerVolume() < kSilence) {
    nn::os::LockMutex(&mutex_);
    locate(static_cast<int64_t>(sampleRate_)
      * static_cast<int>(scrubTime_ * 1000.0f) / 1000);
    restoreSeek();
    position_ = static_cast<int>(seekFraction_) + seekBlock_ * blockSamples_
      + seekOffset_;
    playedSamples_ = 0;
    reserved15dc_ = 0;
    reserved15e0_ = 0;
    startPlayerVolume(Fade(15.0f), 1.0f);
    state_ = kStatePlaying;
    if (resumeMuteRequested_ == true) {
      resumeMuteRequested_ = false;
      silent_ = false;
    }
    nn::os::UnlockMutex(&mutex_);
  }
}

bool WavePlayer::isRendering() const {
  if (finished_ || silent_ || hold_) {
    return false;
  }
  return static_cast<unsigned>(state_ - kStatePlaying) < 5;
}

void WavePlayer::render(int16_t* buffer, int blocks, uint32_t frames,
  uint32_t channels)
{
  if (!isRendering()) {
    return;
  }
  nn::os::LockMutex(&mutex_);
  updateOutput();
  applyLpf(output_.lpf);
  applyBiquad(output_.mainSend);
  uint32_t offset = 0;
  for (int i = blocks; i > 0; i--) {
    renderBlock(buffer, offset, blocks, frames, channels, smoothOutput());
    offset += frames;
  }
  nn::os::UnlockMutex(&mutex_);
}

void WavePlayer::updateOutput() {
  output_.volume = clampVolume(calcVolume() * volumeScale_);
  output_.pitch = clampPan(calcPitch() + pitchOffset_);
  output_.pan = clampPan(calcPan() + panOffset_);
  output_.surroundPan = calcRatio(calcSurroundPan() + surroundPanOffset_);
  output_.biquadValue = clampUnit(calcBiquadValue());
  output_.fxSend = clampUnit(calcFxSend());
  output_.outputVolume = clampUnit(calcOutputVolume());
  output_.lpf = clampUnit(calcLpf());
  float mainSend = clampUnit(calcMainSend());
  pitch_ = smooth(pitch_, output_.pitch);
  output_.pitch = pitch_;
  pan_ = smooth(pan_, output_.pan);
  output_.pan = pan_;
  surroundPan_ += (output_.surroundPan - surroundPan_) / 24.0f;
  output_.surroundPan = surroundPan_;
  lpfValue_ = smooth(lpfValue_, output_.lpf);
  output_.lpf = lpfValue_;
  mainSend_ = smooth(mainSend_, mainSend);
  output_.mainSend = mainSend_;
  output_.gains[0] = calcFrontLeftGain(output_.pitch);
  output_.gains[1] = calcFrontRightGain(output_.pitch);
  output_.gains[2] = calcRearLeftGain(output_.pan);
  output_.gains[3] = calcRearRightGain(output_.pan);
}

// Mono sources pan with a quarter cosine over the whole range, stereo
// sources only attenuate the opposite side.
float WavePlayer::calcFrontLeftGain(float pan) {
  pan = clampSide(pan);
  if (getChannelCount() == 1) {
    return nn::util::CosEst(toRadian((pan + 1.0f) * 45.0f));
  }
  if (getChannelCount() == 2) {
    return nn::util::CosEst(toRadian((pan >= 0.0f ? pan : 0.0f) * 90.0f));
  }
  return 1.0f;
}

float WavePlayer::calcFrontRightGain(float pan) {
  pan = clampSide(pan);
  if (getChannelCount() == 1) {
    return nn::util::CosEst(toRadian((1.0f - pan) * 45.0f));
  }
  if (getChannelCount() == 2) {
    return nn::util::CosEst(toRadian((pan <= 0.0f ? pan : 0.0f) * 90.0f));
  }
  return 1.0f;
}

float WavePlayer::calcRearLeftGain(float pan) {
  pan = clampSide(pan);
  if (getChannelCount() == 1) {
    return nn::util::CosEst(toRadian((pan + 1.0f) * 45.0f));
  }
  if (getChannelCount() == 2) {
    return nn::util::CosEst(toRadian((pan >= 0.0f ? pan : 0.0f) * 90.0f));
  }
  return 1.0f;
}

float WavePlayer::calcRearRightGain(float pan) {
  pan = clampSide(pan);
  if (getChannelCount() == 1) {
    return nn::util::CosEst(toRadian((1.0f - pan) * 45.0f));
  }
  if (getChannelCount() == 2) {
    return nn::util::CosEst(toRadian((pan <= 0.0f ? pan : 0.0f) * 90.0f));
  }
  return 1.0f;
}

WavePlayer::Output WavePlayer::smoothOutput() {
  Output output = output_;
  volume_ = smooth(volume_, output.volume);
  output.volume = volume_;
  biquadValue_ = smooth(biquadValue_, output.biquadValue);
  output.biquadValue = biquadValue_;
  fxSend_ = smooth(fxSend_, output.fxSend);
  output.fxSend = fxSend_;
  outputVolume_ = smooth(outputVolume_, output.outputVolume);
  output.outputVolume = outputVolume_;
  return output;
}

void WavePlayer::reset() {
  nn::os::LockMutex(&mutex_);
  WaveReader* reader = reader_;
  reserved15e0_ = 0;
  loopCount_ = 0;
  position_ = 0;
  reserved15dc_ = 0;
  playedSamples_ = 0;
  reader->reset();
  state_ = kStateNone;
  nn::os::UnlockMutex(&mutex_);
}

void WavePlayer::setHold(bool hold) {
  hold_ = hold;
}

void WavePlayer::setAutoReset(bool autoReset) {
  autoReset_ = autoReset;
}

int WavePlayer::getState() const {
  return state_;
}

void WavePlayer::setSource(int id, int kind, const void* data) {
  sourceId_ = id;
  sourceKind_ = kind;
  sourceData_ = data;
}

int WavePlayer::load(void*, bool, bool, bool) {
  reader_->load();
  state_ = kStateLoading;
  return 0;
}

bool WavePlayer::isLoaded() const {
  return state_ > kStateLoading;
}

bool WavePlayer::isReady() const {
  return state_ > kStateReading;
}

bool WavePlayer::isPrepared() const {
  return state_ == kStatePrepared;
}

bool WavePlayer::isPlaying() const {
  return state_ > kStatePrepared;
}

bool WavePlayer::isStopping() const {
  return state_ == kStateStopping;
}

bool WavePlayer::isFinished() const {
  return finished_;
}

bool WavePlayer::isSilent() const {
  return silent_;
}

void WavePlayer::start() {
  if (state_ != kStatePlaying && isPrepared()) {
    startRequested_ = true;
  }
}

void WavePlayer::stop(const Fade& fade) {
  if (state_ == kStateStopping) {
    return;
  }
  if (isPlaying()) {
    Fade copy(fade);
    if (copy.getTime() == 0.0f) {
      copy = Fade(125.0f);
    }
    startPlayerVolume(copy, 0.0f);
    stopRequested_ = true;
    return;
  }
  startPlayerVolume(Fade(0.0f), 0.0f);
  if (getPlayerVolume() < kSilence) {
    if (autoReset_ == true) {
      reset();
      startPlayerVolume(Fade(0.0f), 1.0f);
      return;
    }
    finished_ = true;
  }
}

void WavePlayer::pause(const Fade& fade) {
  if (state_ != kStatePaused && isPlaying()) {
    startPlayerVolume(fade, 0.0f);
    pauseRequested_ = true;
  }
}

void WavePlayer::resumePause(const Fade& fade) {
  if (state_ == kStatePaused && isPlaying()) {
    startPlayerVolume(fade, 1.0f);
    resumePauseRequested_ = true;
  }
}

void WavePlayer::mute(const Fade& fade) {
  if (state_ != kStateMuted && isPlaying()) {
    startFadeVolume(fade, 0.0f);
    muteRequested_ = true;
  }
}

void WavePlayer::resumeMute(const Fade& fade) {
  if (state_ == kStateMuted && isPlaying()) {
    startFadeVolume(fade, 1.0f);
    resumeMuteRequested_ = true;
  }
}

bool WavePlayer::isPaused() const {
  return state_ == kStatePaused;
}

bool WavePlayer::isMuted() const {
  return state_ == kStateMuted;
}

bool WavePlayer::seekMs(int ms) {
  return seekSample(static_cast<int64_t>(sampleRate_) * ms / 1000);
}

int WavePlayer::getSampleRate() const {
  return sampleRate_;
}

int WavePlayer::getChannelCount() const {
  return channelCount_;
}

float WavePlayer::getRemainingMs(int sample) const {
  int rate = getSampleRate();
  if (rate == 0) {
    return 0.0f;
  }
  return static_cast<float>(static_cast<uint32_t>(position_ - sample))
    / static_cast<float>(rate) * 1000.0f;
}

int WavePlayer::getRemainingSamples(int sample) const {
  return position_ - sample;
}

float WavePlayer::getPlayTime() const {
  int rate = getSampleRate();
  if (rate == 0) {
    return 0.0f;
  }
  return static_cast<float>(playedSamples_) / static_cast<float>(rate)
    * 1000.0f;
}

int WavePlayer::getPlaySample() const {
  if (isReady()) {
    return static_cast<int>(playedSamples_);
  }
  return -1;
}

float WavePlayer::getLength() const {
  if (isReady()) {
    if (!isStream()) {
      return static_cast<float>(sampleCount_ / sampleRate_) * 1000.0f;
    }
    const WaveReader::Info* info = reader_->info_;
    if (info->loopCount != 99999) {
      int samples = info->loopSamples + info->loopSamples * info->loopCount;
      return static_cast<float>(samples / info->sampleRate) * 1000.0f;
    }
  }
  return -1.0f;
}

int WavePlayer::getLengthSamples() const {
  if (!isReady()) {
    return 0;
  }
  if (!isStream()) {
    return sampleCount_;
  }
  const WaveReader::Info* info = reader_->info_;
  if (info->loopCount == 99999) {
    return 0;
  }
  return info->loopSamples + info->loopSamples * info->loopCount - 1;
}

int WavePlayer::getLoopEnd() const {
  if (!isReady()) {
    return 0;
  }
  isStream();
  return loopStart_ + blockSamples_ * loopBlocks_;
}

int WavePlayer::getLoopCount() const {
  return loopCount_;
}

bool WavePlayer::isStream() const {
  return reader_->isStream();
}

void WavePlayer::applyBuffer() {
  buffer_->update();
  setRandomVolume(buffer_->randomVolume[0], buffer_->randomVolume[1]);
  setRandomPitch(buffer_->randomPitch[0], buffer_->randomPitch[1]);
  setRandomPan(buffer_->randomPan[0], buffer_->randomPan[1]);
  setRandomSurroundPan(buffer_->randomSurroundPan[0],
    buffer_->randomSurroundPan[1]);
  setRandomLpf(buffer_->randomLpf[0], buffer_->randomLpf[1]);
  const float* fluctuation = buffer_->volumeFluctuation;
  volumeFluctuation_.start(fluctuation[0], fluctuation[1], fluctuation[2],
    fluctuation[3]);
  fluctuation = buffer_->surroundPanFluctuation;
  surroundPanFluctuation_.start(fluctuation[0], fluctuation[1],
    fluctuation[2], fluctuation[3]);
  fluctuation = buffer_->panFluctuation;
  panFluctuation_.start(fluctuation[0], fluctuation[1], fluctuation[2],
    fluctuation[3]);
  startDuckVolume(Fade(0.0f), 0.0f);
  setVolumeScale(randomVolume_ + 1.0f);
  startDuckVolume(Fade(0.0f), 1.0f);
  startPitch(Fade(0.0f), randomPitch_);
  startPan(Fade(0.0f), randomPan_);
  startSurroundPan(Fade(0.0f), randomSurroundPan_);
  setDelay(buffer_->delay + randomLpf_);
  setPriority(buffer_->priority);
  const float* envelope = buffer_->envelope;
  setEnvelope(envelope[0], envelope[1], envelope[2], envelope[3],
    envelope[4]);
  float volume = calcVolume();
  float pitch = calcPitch();
  float pan = calcPan();
  float surroundPan = calcSurroundPan();
  float biquadValue = calcBiquadValue();
  float fxSend = calcFxSend();
  float outputVolume = calcOutputVolume();
  float lpf = calcLpf();
  setVolume(volume);
  setPitch(pitch);
  setPan(pan);
  setSurroundPan(surroundPan);
  setBiquadValue(biquadValue);
  setFxSend(fxSend);
  setOutputVolume(outputVolume);
  setLpfValue(lpf);
}

data::VoiceBuffer* WavePlayer::getBuffer() const {
  return buffer_;
}

void WavePlayer::setLpf(float value) {
  nn::os::LockMutex(&mutex_);
  applyLpf(value);
  nn::os::UnlockMutex(&mutex_);
}

void WavePlayer::setBiquad(float value) {
  nn::os::LockMutex(&mutex_);
  applyBiquad(value);
  nn::os::UnlockMutex(&mutex_);
}

void WavePlayer::setVolume(float volume) {
  volume_ = clampVolume(volume * volumeScale_);
}

void WavePlayer::setPitch(float pitch) {
  pitch_ = clampPan(pitch + pitchOffset_);
}

void WavePlayer::setPan(float pan) {
  pan_ = clampPan(pan + panOffset_);
}

void WavePlayer::setSurroundPan(float pan) {
  surroundPan_ = calcRatio(pan + surroundPanOffset_);
}

void WavePlayer::setBiquadValue(float value) {
  biquadValue_ = clampUnit(value);
}

void WavePlayer::setFxSend(float send) {
  fxSend_ = clampUnit(send);
}

void WavePlayer::setOutputVolume(float volume) {
  outputVolume_ = clampUnit(volume);
}

void WavePlayer::setLpfValue(float value) {
  lpfValue_ = clampUnit(value);
}

void WavePlayer::setMainSend(float send) {
  mainSend_ = clampUnit(send);
}

void WavePlayer::applyLpf(float value) {
  coef::BiQuadCoef* coef = biquad_->lpf_;
  if (value == 0.0f) {
    coef->setBypass(true);
    return;
  }
  coef->setBypass(false);
  auto* filter = static_cast<coef::Lpf*>(coef->getFilter());
  filter->setQ(1.0f);
  float nyquist = static_cast<float>(filter->getSampleRate() >> 1);
  filter->setFrequency(static_cast<int>(
    nyquist - sqrtf(sqrtf(sqrtf(sqrtf(value)))) * nyquist));
  filter->calc();
}

void WavePlayer::applyBiquad(float value) {
  biquad_->biquad_->setBypass(value == 0.0f);
}


}
