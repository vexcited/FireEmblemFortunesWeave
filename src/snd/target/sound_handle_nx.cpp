#include "snd/target/sound.hpp"

#include "snd/target/atk_types.hpp"

namespace snd::target {

static_assert(sizeof(SoundHandleNX) == 0x50);

namespace {

using nn::atk::detail::driver::SoundThreadLock;

template <typename Info>
int64_t wrapSample(int64_t sample, const Info& info) {
  if (info.loopFlag == true && info.loopEnd != 0) {
    while (sample >= info.loopEnd) {
      sample += info.loopStart - info.loopEnd;
    }
  }
  return sample;
}

template <typename Info>
float toMilliseconds(int64_t sample, const Info& info) {
  return static_cast<float>(sample) / static_cast<float>(info.sampleRate) *
    1000.0f;
}

}

SoundHandle::~SoundHandle() = default;

SoundHandleNX::~SoundHandleNX() = default;

void SoundHandleNX::detach() {
  SoundThreadLock lock;
  handle_.DetachSound();
}

bool SoundHandleNX::isAttached() {
  SoundThreadLock lock;
  return handle_.IsAttachedSound();
}

bool SoundHandleNX::isPrepared() {
  SoundThreadLock lock;
  return handle_.IsPrepared();
}

void SoundHandleNX::startPrepared() {
  SoundThreadLock lock;
  handle_.StartPrepared();
}

void SoundHandleNX::pause(bool paused, int frames) {
  SoundThreadLock lock;
  handle_.Pause(paused, frames);
}

void SoundHandleNX::mute(bool muted, int frames) {
  SoundThreadLock lock;
  handle_.Mute(muted, frames);
}

void SoundHandleNX::stop(int frames) {
  SoundThreadLock lock;
  handle_.Stop(frames);
}

void SoundHandleNX::setVariable(uint32_t mask, int frames, float value) {
  SoundThreadLock lock;
  nn::atk::StreamSoundHandle stream(&handle_);
  stream.SetTrackVolume(mask, value, frames);
}

void SoundHandleNX::setVariables(const float* values, int count,
  int frames) {
  SoundThreadLock lock;
  nn::atk::StreamSoundHandle stream(&handle_);
  if (stream.IsAttachedSound()) {
    for (int i = 0; i < count; i++) {
      stream.SetTrackVolume(1 << i, values[i], frames);
    }
  }
}

float SoundHandleNX::getPlayTime(uint32_t) {
  return getElapsedTime();
}

float SoundHandleNX::getPlayPosition(uint32_t kind) {
  SoundThreadLock lock;
  float position;
  nn::atk::StreamSoundHandle stream(&handle_);
  if (stream.IsAttachedSound()) {
    position = -1.0f;
    nn::atk::StreamSoundDataInfo info;
    if (stream.ReadStreamSoundDataInfo(&info)) {
      int64_t sample = stream.GetPlaySamplePosition();
      if (sample >= 1) {
        sample = wrapSample(sample - static_cast<int>(kind), info);
        position = toMilliseconds(sample, info);
      }
    }
  }
  else {
    nn::atk::WaveSoundHandle wave(&handle_);
    position = -1.0f;
    if (wave.IsAttachedSound()) {
      nn::atk::WaveSoundDataInfo info;
      if (wave.ReadWaveSoundDataInfo(&info)) {
        int64_t sample = wave.GetPlaySamplePosition();
        if (sample >= 1) {
          sample = wrapSample(sample - static_cast<int>(kind), info);
          position = toMilliseconds(sample, info);
        }
      }
    }
  }
  return position;
}

int SoundHandleNX::getPlaySample(uint32_t kind) {
  SoundThreadLock lock;
  int64_t sample = -1;
  nn::atk::StreamSoundHandle stream(&handle_);
  if (stream.IsAttachedSound()) {
    nn::atk::StreamSoundDataInfo info;
    if (stream.ReadStreamSoundDataInfo(&info)) {
      int64_t position = stream.GetPlaySamplePosition();
      if (position >= 1) {
        sample = wrapSample(position - static_cast<int>(kind), info);
      }
    }
  }
  else {
    nn::atk::WaveSoundHandle wave(&handle_);
    nn::atk::WaveSoundDataInfo info;
    if (wave.ReadWaveSoundDataInfo(&info)) {
      int64_t position = wave.GetPlaySamplePosition();
      if (position >= 1) {
        sample = wrapSample(position - static_cast<int>(kind), info);
      }
    }
  }
  return static_cast<int>(sample);
}

bool SoundHandleNX::isStopRequested() {
  return wrapped_;
}

void SoundHandleNX::clearStopRequest() {
  wrapped_ = false;
  lastSample_ = 0.0f;
}

bool SoundHandleNX::isSameSound(SoundHandle* other) {
  SoundThreadLock lock;
  return other->isAttached();
}

void SoundHandleNX::markStartTime() {
  timing_ = true;
  startTick_ = nn::os::GetSystemTick();
}

void SoundHandleNX::update() {
  if (!wrapped_) {
    SoundThreadLock lock;
    nn::atk::StreamSoundHandle stream(&handle_);
    if (stream.IsAttachedSound()) {
      nn::atk::StreamSoundDataInfo info;
      if (stream.ReadStreamSoundDataInfo(&info)) {
        float sample = static_cast<float>(stream.GetPlaySamplePosition());
        if (!(lastSample_ <= sample)) {
          wrapped_ = true;
        }
        lastSample_ = sample;
      }
    }
    else {
      nn::atk::WaveSoundHandle wave(&handle_);
      nn::atk::WaveSoundDataInfo info;
      if (wave.ReadWaveSoundDataInfo(&info)) {
        float sample = static_cast<float>(wave.GetPlaySamplePosition());
        if (!(lastSample_ <= sample)) {
          wrapped_ = true;
        }
        lastSample_ = sample;
      }
    }
  }
  if (timing_ == true) {
    nn::os::Tick tick = nn::os::GetSystemTick();
    nn::TimeSpan span = nn::os::ConvertToTimeSpan(
      nn::os::Tick{tick.value - startTick_.value});
    startTick_ = tick;
    float ms = static_cast<float>(span.nanoseconds / 1000 + 30) / 1000.0f;
    if (ms > 500.0f) {
      ms = 16.667f;
    }
    elapsedTime_ += ms;
  }
}

float SoundHandleNX::getElapsedTime() {
  return elapsedTime_;
}

}
